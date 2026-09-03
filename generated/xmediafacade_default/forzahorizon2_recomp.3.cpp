#include "forzahorizon2_funcs.3.h"

DEFINE_REX_FUNC(sub_88050040) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050040);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050040;
	ctx.current_instruction = 0x88050040;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x88050048;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880507D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880507D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880507D0) {
			switch (rex_dispatch_address) {
				case 0x880507EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880507D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880507EC: goto loc_880507EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880507D4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880507D8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880507DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x880507E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x88051170
	ctx.lr = 0x880507EC;
	sub_88051170(ctx, base);
loc_880507EC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.current_instruction = 0x880507F0;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880507F4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880516B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880516B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880516B8) {
			switch (rex_dispatch_address) {
				case 0x880516C0:
				case 0x880516F0:
				case 0x880516FC:
				case 0x88051710:
				case 0x8805171C:
				case 0x8805173C:
				case 0x8805177C:
				case 0x880517C4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880516B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880516C0: goto loc_880516C0;
		case 0x880516F0: goto loc_880516F0;
		case 0x880516FC: goto loc_880516FC;
		case 0x88051710: goto loc_88051710;
		case 0x8805171C: goto loc_8805171C;
		case 0x8805173C: goto loc_8805173C;
		case 0x8805177C: goto loc_8805177C;
		case 0x880517C4: goto loc_880517C4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880516C0;
	__savegprlr_26(ctx, base);
loc_880516C0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880516C0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// li r28,48
	ctx.r28.s64 = 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1023
	ctx.r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// and r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x88051704
	if (!ctx.cr6.eq) goto loc_88051704;
	// bl 0x880529c8
	ctx.lr = 0x880516F0;
	sub_880529C8(ctx, base);
loc_880516F0:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x880516F4;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x880516FC;
	sub_880523E8(ctx, base);
loc_880516FC:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x88051ac0
	goto loc_88051AC0;
loc_88051704:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x88051724
	if (!ctx.cr6.eq) goto loc_88051724;
	// bl 0x880529c8
	ctx.lr = 0x88051710;
	sub_880529C8(ctx, base);
loc_88051710:
	// li r31,22
	ctx.r31.s64 = 22;
loc_88051714:
	// stw r31,0(r3)
	ctx.current_instruction = 0x88051714;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x880523e8
	ctx.lr = 0x8805171C;
	sub_880523E8(ctx, base);
loc_8805171C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x88051ac0
	goto loc_88051AC0;
loc_88051724:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	ctx.current_instruction = 0x8805172C;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88051744
	if (ctx.cr6.gt) goto loc_88051744;
	// bl 0x880529c8
	ctx.lr = 0x8805173C;
	sub_880529C8(ctx, base);
loc_8805173C:
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x88051714
	goto loc_88051714;
loc_88051744:
	// ld r11,0(r3)
	ctx.current_instruction = 0x88051744;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r10,r11,12,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// cmpldi cr6,r10,2047
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 2047, ctx.xer);
	// bne cr6,0x880517e8
	if (!ctx.cr6.eq) goto loc_880517E8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x88051764
	if (!ctx.cr6.eq) goto loc_88051764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x88051768
	goto loc_88051768;
loc_88051764:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_88051768:
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880515c8
	ctx.lr = 0x8805177C;
	sub_880515C8(ctx, base);
loc_8805177C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8805178c
	if (ctx.cr0.eq) goto loc_8805178C;
	// stb r26,0(r31)
	ctx.current_instruction = 0x88051784;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// b 0x88051ac0
	goto loc_88051AC0;
loc_8805178C:
	// lbz r11,0(r30)
	ctx.current_instruction = 0x8805178C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x880517a0
	if (!ctx.cr6.eq) goto loc_880517A0;
	// stb r11,0(r31)
	ctx.current_instruction = 0x88051798;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_880517A0:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// stb r28,0(r31)
	ctx.current_instruction = 0x880517A4;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stbu r11,1(r31)
	ctx.current_instruction = 0x880517B8;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x88052600
	ctx.lr = 0x880517C4;
	sub_88052600(ctx, base);
loc_880517C4:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x88051abc
	if (ctx.cr0.eq) goto loc_88051ABC;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	ctx.current_instruction = 0x880517DC;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	ctx.current_instruction = 0x880517E0;
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r26.u8);
	// b 0x88051abc
	goto loc_88051ABC;
loc_880517E8:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// li r27,45
	ctx.r27.s64 = 45;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x88051800
	if (ctx.cr6.eq) goto loc_88051800;
	// stb r27,0(r31)
	ctx.current_instruction = 0x880517F8;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_88051800:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// stb r28,0(r31)
	ctx.current_instruction = 0x88051804;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// stbu r11,1(r31)
	ctx.current_instruction = 0x88051824;
	ea = 1 + ctx.r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r31.u32 = ea;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// ld r11,0(r3)
	ctx.current_instruction = 0x8805182C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r5,r10,39
	ctx.r5.s64 = ctx.r10.s64 + 39;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8805186c
	if (!ctx.cr6.eq) goto loc_8805186C;
	// stb r28,0(r11)
	ctx.current_instruction = 0x88051844;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.current_instruction = 0x8805184C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x88051864
	if (!ctx.cr6.eq) goto loc_88051864;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x88051878
	goto loc_88051878;
loc_88051864:
	// li r30,1022
	ctx.r30.s64 = 1022;
	// b 0x88051878
	goto loc_88051878;
loc_8805186C:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	ctx.current_instruction = 0x88051870;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_88051878:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88051890
	if (!ctx.cr6.eq) goto loc_88051890;
	// stb r26,0(r11)
	ctx.current_instruction = 0x88051888;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x880518a8
	goto loc_880518A8;
loc_88051890:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r11,1032(r11)
	ctx.current_instruction = 0x88051894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1032);
	// lwz r11,188(r11)
	ctx.current_instruction = 0x88051898;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.current_instruction = 0x8805189C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.current_instruction = 0x880518A0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	ctx.current_instruction = 0x880518A4;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_880518A8:
	// ld r11,0(r3)
	ctx.current_instruction = 0x880518A8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x88051998
	if (!ctx.cr6.gt) goto loc_88051998;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_880518C0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88051920
	if (!ctx.cr6.gt) goto loc_88051920;
	// ld r11,0(r3)
	ctx.current_instruction = 0x880518C8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 57, ctx.xer);
	// ble cr6,0x880518fc
	if (!ctx.cr6.gt) goto loc_880518FC;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_880518FC:
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// stb r11,0(r8)
	ctx.current_instruction = 0x88051900;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr. r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x880518c0
	if (!ctx.cr0.lt) goto loc_880518C0;
loc_88051920:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88051998
	if (ctx.cr0.lt) goto loc_88051998;
	// ld r11,0(r3)
	ctx.current_instruction = 0x88051928;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x88051998
	if (!ctx.cr6.gt) goto loc_88051998;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_8805194C:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8805194C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 102, ctx.xer);
	// beq cr6,0x88051964
	if (ctx.cr6.eq) goto loc_88051964;
	// cmpwi cr6,r10,70
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 70, ctx.xer);
	// bne cr6,0x88051970
	if (!ctx.cr6.eq) goto loc_88051970;
loc_88051964:
	// stb r28,0(r11)
	ctx.current_instruction = 0x88051964;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8805194c
	goto loc_8805194C;
loc_88051970:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8805198c
	if (ctx.cr6.eq) goto loc_8805198C;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x88051990
	if (!ctx.cr6.eq) goto loc_88051990;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// b 0x88051994
	goto loc_88051994;
loc_8805198C:
	// lbzu r10,-1(r11)
	ctx.current_instruction = 0x8805198C;
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_88051990:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88051994:
	// stb r10,0(r11)
	ctx.current_instruction = 0x88051994;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_88051998:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880519c0
	if (!ctx.cr6.gt) goto loc_880519C0;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x880519bc
	if (ctx.cr0.eq) goto loc_880519BC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880519B4:
	// stbu r10,1(r11)
	ctx.current_instruction = 0x880519B4;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880519b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880519B4;
loc_880519BC:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_880519C0:
	// lbz r11,0(r4)
	ctx.current_instruction = 0x880519C0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x880519d0
	if (!ctx.cr0.eq) goto loc_880519D0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_880519D0:
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r29.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	ctx.current_instruction = 0x880519E4;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.current_instruction = 0x880519E8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,12,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// blt cr6,0x88051a08
	if (ctx.cr6.lt) goto loc_88051A08;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	ctx.current_instruction = 0x88051A00;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x88051a10
	goto loc_88051A10;
loc_88051A08:
	// stb r27,0(r10)
	ctx.current_instruction = 0x88051A08;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_88051A10:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1000, ctx.xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	ctx.current_instruction = 0x88051A1C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// blt cr6,0x88051a50
	if (ctx.cr6.lt) goto loc_88051A50;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1000));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	ctx.current_instruction = 0x88051A40;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88051a58
	if (!ctx.cr6.eq) goto loc_88051A58;
loc_88051A50:
	// cmpdi cr6,r11,100
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 100, ctx.xer);
	// blt cr6,0x88051a7c
	if (ctx.cr6.lt) goto loc_88051A7C;
loc_88051A58:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(100));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	ctx.current_instruction = 0x88051A74;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88051A7C:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88051a8c
	if (!ctx.cr6.eq) goto loc_88051A8C;
	// cmpdi cr6,r11,10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 10, ctx.xer);
	// blt cr6,0x88051ab0
	if (ctx.cr6.lt) goto loc_88051AB0;
loc_88051A8C:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stb r9,0(r10)
	ctx.current_instruction = 0x88051AA8;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_88051AB0:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	ctx.current_instruction = 0x88051AB4;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	ctx.current_instruction = 0x88051AB8;
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r26.u8);
loc_88051ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88051AC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805E458) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805E458;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805E458) {
			switch (rex_dispatch_address) {
				case 0x8805E460:
				case 0x8805E480:
				case 0x8805E4A0:
				case 0x8805E4FC:
				case 0x8805E520:
				case 0x8805E540:
				case 0x8805E574:
				case 0x8805E588:
				case 0x8805E5F0:
				case 0x8805E604:
				case 0x8805E618:
				case 0x8805E650:
				case 0x8805E670:
				case 0x8805E69C:
				case 0x8805E6BC:
				case 0x8805E6C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805E458;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805E460: goto loc_8805E460;
		case 0x8805E480: goto loc_8805E480;
		case 0x8805E4A0: goto loc_8805E4A0;
		case 0x8805E4FC: goto loc_8805E4FC;
		case 0x8805E520: goto loc_8805E520;
		case 0x8805E540: goto loc_8805E540;
		case 0x8805E574: goto loc_8805E574;
		case 0x8805E588: goto loc_8805E588;
		case 0x8805E5F0: goto loc_8805E5F0;
		case 0x8805E604: goto loc_8805E604;
		case 0x8805E618: goto loc_8805E618;
		case 0x8805E650: goto loc_8805E650;
		case 0x8805E670: goto loc_8805E670;
		case 0x8805E69C: goto loc_8805E69C;
		case 0x8805E6BC: goto loc_8805E6BC;
		case 0x8805E6C8: goto loc_8805E6C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8805E460;
	__savegprlr_24(ctx, base);
loc_8805E460:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8805E460;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.current_instruction = 0x8805E46C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x8806e228
	ctx.lr = 0x8805E480;
	sub_8806E228(ctx, base);
loc_8805E480:
	// lis r9,9356
	ctx.r9.s64 = 613154816;
	// lwz r10,88(r31)
	ctx.current_instruction = 0x8805E484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8805E488;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r24,r9,32768
	ctx.r24.u64 = ctx.r9.u64 | 32768;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x88050340
	ctx.lr = 0x8805E4A0;
	sub_88050340(ctx, base);
loc_8805E4A0:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805e604
	if (ctx.cr6.eq) goto loc_8805E604;
	// lwz r11,56(r31)
	ctx.current_instruction = 0x8805E4AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r25,80(r1)
	ctx.current_instruction = 0x8805E4B0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e554
	if (!ctx.cr6.eq) goto loc_8805E554;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lbz r10,2836(r11)
	ctx.current_instruction = 0x8805E4C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2836);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805e500
	if (ctx.cr6.eq) goto loc_8805E500;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18388(r11)
	ctx.current_instruction = 0x8805E4D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8805e500
	if (!ctx.cr6.gt) goto loc_8805E500;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,64(r31)
	ctx.current_instruction = 0x8805E4E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,48(r31)
	ctx.current_instruction = 0x8805E4E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,76(r31)
	ctx.current_instruction = 0x8805E4F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r6,80(r31)
	ctx.current_instruction = 0x8805E4F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x880854d8
	ctx.lr = 0x8805E4FC;
	sub_880854D8(ctx, base);
loc_8805E4FC:
	// b 0x8805e508
	goto loc_8805E508;
loc_8805E500:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8805e580
	if (ctx.cr6.eq) goto loc_8805E580;
loc_8805E508:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,64(r31)
	ctx.current_instruction = 0x8805E50C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r31)
	ctx.current_instruction = 0x8805E514;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,72(r31)
	ctx.current_instruction = 0x8805E518;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x88085588
	ctx.lr = 0x8805E520;
	sub_88085588(ctx, base);
loc_8805E520:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805e5f8
	if (!ctx.cr6.eq) goto loc_8805E5F8;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805E528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8805E530;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r4,72(r31)
	ctx.current_instruction = 0x8805E538;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x880547a0
	ctx.lr = 0x8805E540;
	sub_880547A0(ctx, base);
loc_8805E540:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8805E540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8805E544;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	ctx.current_instruction = 0x8805E54C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8805e580
	goto loc_8805E580;
loc_8805E554:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8805e580
	if (ctx.cr6.eq) goto loc_8805E580;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,64(r31)
	ctx.current_instruction = 0x8805E560;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,88(r31)
	ctx.current_instruction = 0x8805E568;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085588
	ctx.lr = 0x8805E574;
	sub_88085588(ctx, base);
loc_8805E574:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805e5f8
	if (!ctx.cr6.eq) goto loc_8805E5F8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8805E580:
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E580;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8806fd10
	ctx.lr = 0x8805E588;
	sub_8806FD10(ctx, base);
loc_8805E588:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8805e610
	if (ctx.cr6.eq) goto loc_8805E610;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x8805E590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e5bc
	if (!ctx.cr6.eq) goto loc_8805E5BC;
	// lwz r11,64(r31)
	ctx.current_instruction = 0x8805E59C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e5bc
	if (!ctx.cr6.eq) goto loc_8805E5BC;
	// lwz r11,536(r31)
	ctx.current_instruction = 0x8805E5A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805e5bc
	if (!ctx.cr6.eq) goto loc_8805E5BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8805e610
	if (ctx.cr6.eq) goto loc_8805E610;
loc_8805E5BC:
	// lwz r10,28(r31)
	ctx.current_instruction = 0x8805E5BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8805E5C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8805E5D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,64(r31)
	ctx.current_instruction = 0x8805E5D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88084fd0
	ctx.lr = 0x8805E5F0;
	sub_88084FD0(ctx, base);
loc_8805E5F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805e6bc
	if (ctx.cr6.eq) goto loc_8805E6BC;
loc_8805E5F8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x8805E604;
	sub_88050358(ctx, base);
loc_8805E604:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8805E610:
	// lwz r3,12(r31)
	ctx.current_instruction = 0x8805E610;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8806e028
	ctx.lr = 0x8805E618;
	sub_8806E028(ctx, base);
loc_8805E618:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805e6bc
	if (ctx.cr6.eq) goto loc_8805E6BC;
	// lis r11,22349
	ctx.r11.s64 = 1464664064;
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8805E624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r11,22081
	ctx.r9.u64 = ctx.r11.u64 | 22081;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8805e6bc
	if (!ctx.cr6.eq) goto loc_8805E6BC;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8805E634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8805e6bc
	if (!ctx.cr6.eq) goto loc_8805E6BC;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8805E640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x88050340
	ctx.lr = 0x8805E650;
	sub_88050340(ctx, base);
loc_8805E650:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8805E650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r28)
	ctx.current_instruction = 0x8805E654;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,2792(r11)
	ctx.current_instruction = 0x8805E65C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 2792);
	// add r31,r30,r26
	ctx.r31.u64 = ctx.r30.u64 + ctx.r26.u64;
	// subf r5,r30,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x8805E670;
	sub_880547A0(ctx, base);
loc_8805E670:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r25,r30,r26
	ctx.current_instruction = 0x8805E678;
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r25.u8);
	// stb r25,1(r31)
	ctx.current_instruction = 0x8805E67C;
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r25.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r8,2(r31)
	ctx.current_instruction = 0x8805E684;
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r9,3(r31)
	ctx.current_instruction = 0x8805E68C;
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// lwz r7,0(r28)
	ctx.current_instruction = 0x8805E690;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x8805E69C;
	sub_880547A0(ctx, base);
loc_8805E69C:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8805E69C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r28)
	ctx.current_instruction = 0x8805E6A8;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// beq cr6,0x8805e6bc
	if (ctx.cr6.eq) goto loc_8805E6BC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x8805E6BC;
	sub_88050358(ctx, base);
loc_8805E6BC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x8805E6C8;
	sub_88050358(ctx, base);
loc_8805E6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880676E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880676E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880676E8;
	ctx.current_instruction = 0x880676E8;
	// b 0x88067668
	sub_88067668(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88067710) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88067710);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067710;
	ctx.current_instruction = 0x88067710;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88067760) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88067760;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88067760) {
			switch (rex_dispatch_address) {
				case 0x88067778:
				case 0x8806778C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88067760;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88067778: goto loc_88067778;
		case 0x8806778C: goto loc_8806778C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88067764;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88067768;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806776C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x880cd590
	ctx.lr = 0x88067778;
	sub_880CD590(ctx, base);
loc_88067778:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,10640
	ctx.r10.s64 = ctx.r11.s64 + 10640;
	// stw r10,0(r31)
	ctx.current_instruction = 0x88067784;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88067668
	ctx.lr = 0x8806778C;
	sub_88067668(ctx, base);
loc_8806778C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88067794;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806779C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880680D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880680D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880680D8) {
			switch (rex_dispatch_address) {
				case 0x88068120:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880680D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88068120: goto loc_88068120;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880680DC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880680E0;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.current_instruction = 0x880680E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	ctx.current_instruction = 0x880680F8;
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	ctx.current_instruction = 0x880680FC;
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	ctx.current_instruction = 0x88068100;
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// std r11,24(r9)
	ctx.current_instruction = 0x88068104;
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// stw r11,32(r9)
	ctx.current_instruction = 0x88068108;
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x8806810C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	ctx.current_instruction = 0x88068110;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,36(r8)
	ctx.current_instruction = 0x88068114;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88068120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88068120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88068124;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88069348) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88069348;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88069348) {
			switch (rex_dispatch_address) {
				case 0x88069360:
				case 0x88069374:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069348;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88069360: goto loc_88069360;
		case 0x88069374: goto loc_88069374;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806934C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88069350;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88069354;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88061fb8
	ctx.lr = 0x88069360;
	sub_88061FB8(ctx, base);
loc_88069360:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,10896
	ctx.r10.s64 = ctx.r11.s64 + 10896;
	// stw r10,0(r31)
	ctx.current_instruction = 0x8806936C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x88067f28
	ctx.lr = 0x88069374;
	sub_88067F28(ctx, base);
loc_88069374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88069378;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88069380;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88069B48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88069B48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88069B48) {
			switch (rex_dispatch_address) {
				case 0x88069B50:
				case 0x88069B68:
				case 0x88069B98:
				case 0x88069BC4:
				case 0x88069BD8:
				case 0x88069BF8:
				case 0x88069C00:
				case 0x88069C14:
				case 0x88069C2C:
				case 0x88069C48:
				case 0x88069C64:
				case 0x88069C7C:
				case 0x88069C98:
				case 0x88069CB0:
				case 0x88069CCC:
				case 0x88069CD4:
				case 0x88069CE8:
				case 0x88069CFC:
				case 0x88069D20:
				case 0x88069D34:
				case 0x88069D48:
				case 0x88069D5C:
				case 0x88069D70:
				case 0x88069D84:
				case 0x88069D98:
				case 0x88069DB4:
				case 0x88069DD4:
				case 0x88069DEC:
				case 0x88069E0C:
				case 0x88069E14:
				case 0x88069E28:
				case 0x88069E48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069B48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88069B50: goto loc_88069B50;
		case 0x88069B68: goto loc_88069B68;
		case 0x88069B98: goto loc_88069B98;
		case 0x88069BC4: goto loc_88069BC4;
		case 0x88069BD8: goto loc_88069BD8;
		case 0x88069BF8: goto loc_88069BF8;
		case 0x88069C00: goto loc_88069C00;
		case 0x88069C14: goto loc_88069C14;
		case 0x88069C2C: goto loc_88069C2C;
		case 0x88069C48: goto loc_88069C48;
		case 0x88069C64: goto loc_88069C64;
		case 0x88069C7C: goto loc_88069C7C;
		case 0x88069C98: goto loc_88069C98;
		case 0x88069CB0: goto loc_88069CB0;
		case 0x88069CCC: goto loc_88069CCC;
		case 0x88069CD4: goto loc_88069CD4;
		case 0x88069CE8: goto loc_88069CE8;
		case 0x88069CFC: goto loc_88069CFC;
		case 0x88069D20: goto loc_88069D20;
		case 0x88069D34: goto loc_88069D34;
		case 0x88069D48: goto loc_88069D48;
		case 0x88069D5C: goto loc_88069D5C;
		case 0x88069D70: goto loc_88069D70;
		case 0x88069D84: goto loc_88069D84;
		case 0x88069D98: goto loc_88069D98;
		case 0x88069DB4: goto loc_88069DB4;
		case 0x88069DD4: goto loc_88069DD4;
		case 0x88069DEC: goto loc_88069DEC;
		case 0x88069E0C: goto loc_88069E0C;
		case 0x88069E14: goto loc_88069E14;
		case 0x88069E28: goto loc_88069E28;
		case 0x88069E48: goto loc_88069E48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88069B50;
	__savegprlr_28(ctx, base);
loc_88069B50:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88069B50;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069B54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,260(r11)
	ctx.current_instruction = 0x88069B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069B68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069B68:
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88069e34
	if (!ctx.cr6.eq) goto loc_88069E34;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88069B78:
	// lwz r3,44(r30)
	ctx.current_instruction = 0x88069B78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88069B8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069B98:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88069B98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88069dd8
	if (ctx.cr6.eq) goto loc_88069DD8;
	// lwz r3,44(r30)
	ctx.current_instruction = 0x88069BA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069BB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.current_instruction = 0x88069BB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069BC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069BC4:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88069BC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,260(r9)
	ctx.current_instruction = 0x88069BCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069BD8:
	// rlwinm r7,r3,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x88069d84
	if (!ctx.cr6.eq) goto loc_88069D84;
loc_88069BE4:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069BE4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88069BEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069BF8:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069BF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a20
	ctx.lr = 0x88069C00;
	sub_88067A20(ctx, base);
loc_88069C00:
	// lwz r9,248(r30)
	ctx.current_instruction = 0x88069C00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x88069d0c
	if (!ctx.cr6.gt) goto loc_88069D0C;
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069C0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067a80
	ctx.lr = 0x88069C14;
	sub_88067A80(ctx, base);
loc_88069C14:
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.current_instruction = 0x88069C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069C2C:
	// lwz r3,44(r30)
	ctx.current_instruction = 0x88069C2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x88069C38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.current_instruction = 0x88069C3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069C48:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069C48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.current_instruction = 0x88069C4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.current_instruction = 0x88069C50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x88069C54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,136(r7)
	ctx.current_instruction = 0x88069C58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069C64:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069C64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.current_instruction = 0x88069C6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r5)
	ctx.current_instruction = 0x88069C70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88069C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069C7C:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88069C7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x88069C84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r10)
	ctx.current_instruction = 0x88069C88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r28,0(r9)
	ctx.current_instruction = 0x88069C90;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bctrl 
	ctx.lr = 0x88069C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069C98:
	// lwz r7,120(r28)
	ctx.current_instruction = 0x88069C98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069CA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88069CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069CB0:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88069CB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88069CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// blt cr6,0x88069d58
	if (ctx.cr6.lt) goto loc_88069D58;
	// bctrl 
	ctx.lr = 0x88069CCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069CCC:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069CCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x88067b80
	ctx.lr = 0x88069CD4;
	sub_88067B80(ctx, base);
loc_88069CD4:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069CD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x88069CD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x88069CDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069CE8:
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88069CE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,208(r7)
	ctx.current_instruction = 0x88069CF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 208);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069CFC:
	// lwz r5,96(r1)
	ctx.current_instruction = 0x88069CFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88069d84
	if (ctx.cr6.eq) goto loc_88069D84;
	// b 0x88069d34
	goto loc_88069D34;
loc_88069D0C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069D0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069D10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88069D14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D20:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88069D20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,168(r9)
	ctx.current_instruction = 0x88069D28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D34:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069D34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,260(r11)
	ctx.current_instruction = 0x88069D3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D48:
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88069be4
	if (ctx.cr6.eq) goto loc_88069BE4;
	// b 0x88069d84
	goto loc_88069D84;
loc_88069D58:
	// bctrl 
	ctx.lr = 0x88069D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D5C:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069D5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x88069D60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.current_instruction = 0x88069D64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D70:
	// lwz r7,0(r30)
	ctx.current_instruction = 0x88069D70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,96(r7)
	ctx.current_instruction = 0x88069D78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x88069D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D84:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069D84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.current_instruction = 0x88069D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069D98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069D98:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88069D98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88069db8
	if (ctx.cr6.eq) goto loc_88069DB8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88069DA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069DB4:
	// stw r29,80(r1)
	ctx.current_instruction = 0x88069DB4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_88069DB8:
	// lwz r3,84(r1)
	ctx.current_instruction = 0x88069DB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88069dd8
	if (ctx.cr6.eq) goto loc_88069DD8;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88069DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88069DC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069DD4:
	// stw r29,84(r1)
	ctx.current_instruction = 0x88069DD4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_88069DD8:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069DD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,260(r11)
	ctx.current_instruction = 0x88069DE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069DEC:
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88069e34
	if (!ctx.cr6.eq) goto loc_88069E34;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069DF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,216(r11)
	ctx.current_instruction = 0x88069E00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069E0C:
	// lwz r3,268(r30)
	ctx.current_instruction = 0x88069E0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// bl 0x881ec608
	ctx.lr = 0x88069E14;
	sub_881EC608(ctx, base);
loc_88069E14:
	// lwz r9,0(r30)
	ctx.current_instruction = 0x88069E14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,260(r9)
	ctx.current_instruction = 0x88069E1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88069E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069E28:
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88069b78
	if (ctx.cr6.eq) goto loc_88069B78;
loc_88069E34:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88069E34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,216(r11)
	ctx.current_instruction = 0x88069E3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88069E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88069E48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880780A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880780A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880780A0;
	ctx.current_instruction = 0x880780A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,27988(r3)
	ctx.current_instruction = 0x880780A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,30396(r3)
	ctx.current_instruction = 0x880780AC;
	REX_STORE_U32(ctx.r3.u32 + 30396, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2244(r3)
	ctx.current_instruction = 0x880780B4;
	REX_STORE_U32(ctx.r3.u32 + 2244, ctx.r10.u32);
	// stw r10,2252(r3)
	ctx.current_instruction = 0x880780B8;
	REX_STORE_U32(ctx.r3.u32 + 2252, ctx.r10.u32);
	// stw r10,2248(r3)
	ctx.current_instruction = 0x880780BC;
	REX_STORE_U32(ctx.r3.u32 + 2248, ctx.r10.u32);
	// stw r10,28408(r3)
	ctx.current_instruction = 0x880780C0;
	REX_STORE_U32(ctx.r3.u32 + 28408, ctx.r10.u32);
	// stw r10,28420(r3)
	ctx.current_instruction = 0x880780C4;
	REX_STORE_U32(ctx.r3.u32 + 28420, ctx.r10.u32);
	// stw r11,2208(r3)
	ctx.current_instruction = 0x880780C8;
	REX_STORE_U32(ctx.r3.u32 + 2208, ctx.r11.u32);
	// stw r11,2216(r3)
	ctx.current_instruction = 0x880780CC;
	REX_STORE_U32(ctx.r3.u32 + 2216, ctx.r11.u32);
	// stw r11,2212(r3)
	ctx.current_instruction = 0x880780D0;
	REX_STORE_U32(ctx.r3.u32 + 2212, ctx.r11.u32);
	// stw r11,7140(r3)
	ctx.current_instruction = 0x880780D4;
	REX_STORE_U32(ctx.r3.u32 + 7140, ctx.r11.u32);
	// stw r11,8236(r3)
	ctx.current_instruction = 0x880780D8;
	REX_STORE_U32(ctx.r3.u32 + 8236, ctx.r11.u32);
	// stw r11,7568(r3)
	ctx.current_instruction = 0x880780DC;
	REX_STORE_U32(ctx.r3.u32 + 7568, ctx.r11.u32);
	// stw r11,21080(r3)
	ctx.current_instruction = 0x880780E0;
	REX_STORE_U32(ctx.r3.u32 + 21080, ctx.r11.u32);
	// beq cr6,0x88078100
	if (ctx.cr6.eq) goto loc_88078100;
	// lwz r10,31544(r3)
	ctx.current_instruction = 0x880780E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88078100
	if (ctx.cr6.eq) goto loc_88078100;
	// lwz r10,28136(r3)
	ctx.current_instruction = 0x880780F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88078100:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,2288(r3)
	ctx.current_instruction = 0x88078104;
	REX_STORE_U32(ctx.r3.u32 + 2288, ctx.r11.u32);
	// stw r10,2280(r3)
	ctx.current_instruction = 0x88078108;
	REX_STORE_U32(ctx.r3.u32 + 2280, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88079C58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88079C58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88079C58) {
			switch (rex_dispatch_address) {
				case 0x88079C60:
				case 0x88079C7C:
				case 0x88079C90:
				case 0x88079CB4:
				case 0x88079CC0:
				case 0x88079CCC:
				case 0x88079CF0:
				case 0x88079CF8:
				case 0x88079DC0:
				case 0x88079DE0:
				case 0x88079E04:
				case 0x88079E1C:
				case 0x88079E34:
				case 0x88079F24:
				case 0x88079F30:
				case 0x88079FAC:
				case 0x88079FB4:
				case 0x88079FD4:
				case 0x88079FE0:
				case 0x8807A014:
				case 0x8807A01C:
				case 0x8807A0DC:
				case 0x8807A0E4:
				case 0x8807A108:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88079C58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88079C60: goto loc_88079C60;
		case 0x88079C7C: goto loc_88079C7C;
		case 0x88079C90: goto loc_88079C90;
		case 0x88079CB4: goto loc_88079CB4;
		case 0x88079CC0: goto loc_88079CC0;
		case 0x88079CCC: goto loc_88079CCC;
		case 0x88079CF0: goto loc_88079CF0;
		case 0x88079CF8: goto loc_88079CF8;
		case 0x88079DC0: goto loc_88079DC0;
		case 0x88079DE0: goto loc_88079DE0;
		case 0x88079E04: goto loc_88079E04;
		case 0x88079E1C: goto loc_88079E1C;
		case 0x88079E34: goto loc_88079E34;
		case 0x88079F24: goto loc_88079F24;
		case 0x88079F30: goto loc_88079F30;
		case 0x88079FAC: goto loc_88079FAC;
		case 0x88079FB4: goto loc_88079FB4;
		case 0x88079FD4: goto loc_88079FD4;
		case 0x88079FE0: goto loc_88079FE0;
		case 0x8807A014: goto loc_8807A014;
		case 0x8807A01C: goto loc_8807A01C;
		case 0x8807A0DC: goto loc_8807A0DC;
		case 0x8807A0E4: goto loc_8807A0E4;
		case 0x8807A108: goto loc_8807A108;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88079C60;
	__savegprlr_27(ctx, base);
loc_88079C60:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88079C60;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x88079C64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079c7c
	if (ctx.cr6.eq) goto loc_88079C7C;
	// bl 0x8807e0f0
	ctx.lr = 0x88079C7C;
	sub_8807E0F0(ctx, base);
loc_88079C7C:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x88079d80
	if (!ctx.cr6.eq) goto loc_88079D80;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88079C88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x88079C90;
	sub_880E6900(ctx, base);
loc_88079C90:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88079C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079cd0
	if (ctx.cr6.eq) goto loc_88079CD0;
	// lwz r11,21100(r31)
	ctx.current_instruction = 0x88079C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079cd0
	if (ctx.cr6.eq) goto loc_88079CD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f1da8
	ctx.lr = 0x88079CB4;
	sub_880F1DA8(ctx, base);
loc_88079CB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e9370
	ctx.lr = 0x88079CC0;
	sub_880E9370(ctx, base);
loc_88079CC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f1da8
	ctx.lr = 0x88079CCC;
	sub_880F1DA8(ctx, base);
loc_88079CCC:
	// b 0x88079cf0
	goto loc_88079CF0;
loc_88079CD0:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88079CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88079cf0
	if (!ctx.cr6.eq) goto loc_88079CF0;
	// lwz r11,2208(r31)
	ctx.current_instruction = 0x88079CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079cf0
	if (ctx.cr6.eq) goto loc_88079CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e9310
	ctx.lr = 0x88079CF0;
	sub_880E9310(ctx, base);
loc_88079CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880780a0
	ctx.lr = 0x88079CF8;
	sub_880780A0(ctx, base);
loc_88079CF8:
	// ld r11,736(r31)
	ctx.current_instruction = 0x88079CF8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x88079d38
	if (ctx.cr6.eq) goto loc_88079D38;
	// lwz r11,30740(r31)
	ctx.current_instruction = 0x88079D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079d34
	if (ctx.cr6.eq) goto loc_88079D34;
	// lwz r11,30760(r31)
	ctx.current_instruction = 0x88079D14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30760);
	// lwz r10,30764(r31)
	ctx.current_instruction = 0x88079D18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30764);
	// lwz r9,30792(r31)
	ctx.current_instruction = 0x88079D1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30792);
	// lwz r8,30796(r31)
	ctx.current_instruction = 0x88079D20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30796);
	// stw r11,30752(r31)
	ctx.current_instruction = 0x88079D24;
	REX_STORE_U32(ctx.r31.u32 + 30752, ctx.r11.u32);
	// stw r10,30756(r31)
	ctx.current_instruction = 0x88079D28;
	REX_STORE_U32(ctx.r31.u32 + 30756, ctx.r10.u32);
	// stw r9,30784(r31)
	ctx.current_instruction = 0x88079D2C;
	REX_STORE_U32(ctx.r31.u32 + 30784, ctx.r9.u32);
	// stw r8,30788(r31)
	ctx.current_instruction = 0x88079D30;
	REX_STORE_U32(ctx.r31.u32 + 30788, ctx.r8.u32);
loc_88079D34:
	// stw r30,30740(r31)
	ctx.current_instruction = 0x88079D34;
	REX_STORE_U32(ctx.r31.u32 + 30740, ctx.r30.u32);
loc_88079D38:
	// lwz r11,6804(r31)
	ctx.current_instruction = 0x88079D38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6804);
	// lwz r10,6808(r31)
	ctx.current_instruction = 0x88079D3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6808);
	// lwz r9,6836(r31)
	ctx.current_instruction = 0x88079D40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// lwz r8,6840(r31)
	ctx.current_instruction = 0x88079D44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// lwz r7,6820(r31)
	ctx.current_instruction = 0x88079D48;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6820);
	// lwz r6,6824(r31)
	ctx.current_instruction = 0x88079D4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6824);
	// lwz r5,31108(r31)
	ctx.current_instruction = 0x88079D50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 31108);
	// stw r11,6808(r31)
	ctx.current_instruction = 0x88079D54;
	REX_STORE_U32(ctx.r31.u32 + 6808, ctx.r11.u32);
	// stw r10,6804(r31)
	ctx.current_instruction = 0x88079D58;
	REX_STORE_U32(ctx.r31.u32 + 6804, ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,6820(r31)
	ctx.current_instruction = 0x88079D60;
	REX_STORE_U32(ctx.r31.u32 + 6820, ctx.r9.u32);
	// stw r30,6888(r31)
	ctx.current_instruction = 0x88079D64;
	REX_STORE_U32(ctx.r31.u32 + 6888, ctx.r30.u32);
	// stw r7,6836(r31)
	ctx.current_instruction = 0x88079D68;
	REX_STORE_U32(ctx.r31.u32 + 6836, ctx.r7.u32);
	// stw r8,6824(r31)
	ctx.current_instruction = 0x88079D6C;
	REX_STORE_U32(ctx.r31.u32 + 6824, ctx.r8.u32);
	// stw r6,6840(r31)
	ctx.current_instruction = 0x88079D70;
	REX_STORE_U32(ctx.r31.u32 + 6840, ctx.r6.u32);
	// beq cr6,0x8807a09c
	if (ctx.cr6.eq) goto loc_8807A09C;
	// stw r29,31116(r31)
	ctx.current_instruction = 0x88079D78;
	REX_STORE_U32(ctx.r31.u32 + 31116, ctx.r29.u32);
	// b 0x8807a09c
	goto loc_8807A09C;
loc_88079D80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8807a09c
	if (!ctx.cr6.eq) goto loc_8807A09C;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88079D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88079f9c
	if (!ctx.cr6.eq) goto loc_88079F9C;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88079D94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88079dc0
	if (!ctx.cr6.eq) goto loc_88079DC0;
	// lwz r11,30732(r31)
	ctx.current_instruction = 0x88079DA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88079db8
	if (!ctx.cr6.eq) goto loc_88079DB8;
	// lwz r11,30728(r31)
	ctx.current_instruction = 0x88079DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079dc0
	if (ctx.cr6.eq) goto loc_88079DC0;
loc_88079DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88078110
	ctx.lr = 0x88079DC0;
	sub_88078110(ctx, base);
loc_88079DC0:
	// lwz r11,8236(r31)
	ctx.current_instruction = 0x88079DC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079f3c
	if (ctx.cr6.eq) goto loc_88079F3C;
	// lwz r11,2208(r31)
	ctx.current_instruction = 0x88079DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079de0
	if (ctx.cr6.eq) goto loc_88079DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e9310
	ctx.lr = 0x88079DE0;
	sub_880E9310(ctx, base);
loc_88079DE0:
	// lwz r11,772(r31)
	ctx.current_instruction = 0x88079DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 772);
	// lwz r10,1388(r31)
	ctx.current_instruction = 0x88079DE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x88079DE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r4,20(r31)
	ctx.current_instruction = 0x88079DEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r28,88(r11)
	ctx.current_instruction = 0x88079DF4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r27,112(r11)
	ctx.current_instruction = 0x88079DF8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,64(r11)
	ctx.current_instruction = 0x88079DFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x880547a0
	ctx.lr = 0x88079E04;
	sub_880547A0(ctx, base);
loc_88079E04:
	// lwz r8,1392(r31)
	ctx.current_instruction = 0x88079E04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1392);
	// lwz r7,1384(r31)
	ctx.current_instruction = 0x88079E08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,24(r31)
	ctx.current_instruction = 0x88079E0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r5,r8,r7
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// bl 0x880547a0
	ctx.lr = 0x88079E1C;
	sub_880547A0(ctx, base);
loc_88079E1C:
	// lwz r6,1392(r31)
	ctx.current_instruction = 0x88079E1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1392);
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x88079E20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r4,28(r31)
	ctx.current_instruction = 0x88079E24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// bl 0x880547a0
	ctx.lr = 0x88079E34;
	sub_880547A0(ctx, base);
loc_88079E34:
	// lwz r4,2124(r31)
	ctx.current_instruction = 0x88079E34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88079f1c
	if (ctx.cr6.eq) goto loc_88079F1C;
	// lwz r10,724(r31)
	ctx.current_instruction = 0x88079E40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,7788(r31)
	ctx.current_instruction = 0x88079E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88079f1c
	if (!ctx.cr6.gt) goto loc_88079F1C;
	// addi r5,r11,-44
	ctx.r5.s64 = ctx.r11.s64 + -44;
loc_88079E58:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88079E58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88079f0c
	if (!ctx.cr6.gt) goto loc_88079F0C;
loc_88079E68:
	// lwz r8,720(r31)
	ctx.current_instruction = 0x88079E68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r7,2796(r31)
	ctx.current_instruction = 0x88079E6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r30,r9,r7
	ctx.current_instruction = 0x88079E90;
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r30.u16);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,2796(r31)
	ctx.current_instruction = 0x88079E98;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// sth r30,2(r9)
	ctx.current_instruction = 0x88079EA4;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r30.u16);
	// lwz r7,2448(r31)
	ctx.current_instruction = 0x88079EA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// sthx r30,r10,r7
	ctx.current_instruction = 0x88079EAC;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r30.u16);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2448(r31)
	ctx.current_instruction = 0x88079EB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r30,2(r6)
	ctx.current_instruction = 0x88079EBC;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r30.u16);
	// lwz r3,2448(r31)
	ctx.current_instruction = 0x88079EC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// sthx r30,r9,r3
	ctx.current_instruction = 0x88079EC4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u16);
	// lwz r8,2448(r31)
	ctx.current_instruction = 0x88079EC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r30,2(r8)
	ctx.current_instruction = 0x88079ED0;
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r30.u16);
	// lwz r7,2452(r31)
	ctx.current_instruction = 0x88079ED4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// sthx r30,r10,r7
	ctx.current_instruction = 0x88079ED8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r30.u16);
	// lwz r8,2452(r31)
	ctx.current_instruction = 0x88079EDC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r30,2(r6)
	ctx.current_instruction = 0x88079EE4;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r30.u16);
	// lwz r3,2452(r31)
	ctx.current_instruction = 0x88079EE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// sthx r30,r9,r3
	ctx.current_instruction = 0x88079EEC;
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u16);
	// lwz r10,2452(r31)
	ctx.current_instruction = 0x88079EF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r30,2(r10)
	ctx.current_instruction = 0x88079EF8;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r30.u16);
	// stwu r30,128(r5)
	ctx.current_instruction = 0x88079EFC;
	ea = 128 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x88079F00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88079e68
	if (ctx.cr6.lt) goto loc_88079E68;
loc_88079F0C:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x88079F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88079e58
	if (ctx.cr6.lt) goto loc_88079E58;
loc_88079F1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f4020
	ctx.lr = 0x88079F24;
	sub_880F4020(ctx, base);
loc_88079F24:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x88079F30;
	sub_880F40C0(ctx, base);
loc_88079F30:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,2628(r31)
	ctx.current_instruction = 0x88079F34;
	REX_STORE_U32(ctx.r31.u32 + 2628, ctx.r30.u32);
	// stw r11,2800(r31)
	ctx.current_instruction = 0x88079F38;
	REX_STORE_U32(ctx.r31.u32 + 2800, ctx.r11.u32);
loc_88079F3C:
	// lwz r11,20268(r31)
	ctx.current_instruction = 0x88079F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20268);
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x88079F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,20272(r31)
	ctx.current_instruction = 0x88079F48;
	REX_STORE_U32(ctx.r31.u32 + 20272, ctx.r11.u32);
	// stw r10,20264(r31)
	ctx.current_instruction = 0x88079F4C;
	REX_STORE_U32(ctx.r31.u32 + 20264, ctx.r10.u32);
	// bne cr6,0x88079f8c
	if (!ctx.cr6.eq) goto loc_88079F8C;
	// lwz r11,2804(r31)
	ctx.current_instruction = 0x88079F54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x88079f94
	if (ctx.cr6.eq) goto loc_88079F94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x88079f94
	if (ctx.cr6.eq) goto loc_88079F94;
	// lwz r10,20276(r31)
	ctx.current_instruction = 0x88079F68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20276);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,20280(r31)
	ctx.current_instruction = 0x88079F70;
	REX_STORE_U32(ctx.r31.u32 + 20280, ctx.r10.u32);
	// bne cr6,0x88079f90
	if (!ctx.cr6.eq) goto loc_88079F90;
	// lwz r11,2808(r31)
	ctx.current_instruction = 0x88079F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88079f90
	if (!ctx.cr6.eq) goto loc_88079F90;
	// stw r29,20276(r31)
	ctx.current_instruction = 0x88079F84;
	REX_STORE_U32(ctx.r31.u32 + 20276, ctx.r29.u32);
	// b 0x88079f94
	goto loc_88079F94;
loc_88079F8C:
	// stw r30,20280(r31)
	ctx.current_instruction = 0x88079F8C;
	REX_STORE_U32(ctx.r31.u32 + 20280, ctx.r30.u32);
loc_88079F90:
	// stw r30,20276(r31)
	ctx.current_instruction = 0x88079F90;
	REX_STORE_U32(ctx.r31.u32 + 20276, ctx.r30.u32);
loc_88079F94:
	// lwz r11,28496(r31)
	ctx.current_instruction = 0x88079F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28496);
	// stw r11,20284(r31)
	ctx.current_instruction = 0x88079F98;
	REX_STORE_U32(ctx.r31.u32 + 20284, ctx.r11.u32);
loc_88079F9C:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88079F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20256(r31)
	ctx.current_instruction = 0x88079FA4;
	REX_STORE_U32(ctx.r31.u32 + 20256, ctx.r11.u32);
	// bl 0x88061460
	ctx.lr = 0x88079FAC;
	sub_88061460(ctx, base);
loc_88079FAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88077858
	ctx.lr = 0x88079FB4;
	sub_88077858(ctx, base);
loc_88079FB4:
	// lwz r10,19108(r31)
	ctx.current_instruction = 0x88079FB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88079fe8
	if (ctx.cr6.eq) goto loc_88079FE8;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88079FC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88079fdc
	if (ctx.cr6.eq) goto loc_88079FDC;
	// bl 0x880e84f0
	ctx.lr = 0x88079FD4;
	sub_880E84F0(ctx, base);
loc_88079FD4:
	// stw r29,7568(r31)
	ctx.current_instruction = 0x88079FD4;
	REX_STORE_U32(ctx.r31.u32 + 7568, ctx.r29.u32);
	// b 0x88079fec
	goto loc_88079FEC;
loc_88079FDC:
	// bl 0x880c5c38
	ctx.lr = 0x88079FE0;
	sub_880C5C38(ctx, base);
loc_88079FE0:
	// stw r29,7568(r31)
	ctx.current_instruction = 0x88079FE0;
	REX_STORE_U32(ctx.r31.u32 + 7568, ctx.r29.u32);
	// b 0x88079fec
	goto loc_88079FEC;
loc_88079FE8:
	// stw r30,7568(r31)
	ctx.current_instruction = 0x88079FE8;
	REX_STORE_U32(ctx.r31.u32 + 7568, ctx.r30.u32);
loc_88079FEC:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x88079FEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a014
	if (ctx.cr6.eq) goto loc_8807A014;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x88079FF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8807a01c
	if (ctx.cr6.eq) goto loc_8807A01C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8807a01c
	if (ctx.cr6.eq) goto loc_8807A01C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4958
	ctx.lr = 0x8807A014;
	sub_880E4958(ctx, base);
loc_8807A014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e5d48
	ctx.lr = 0x8807A01C;
	sub_880E5D48(ctx, base);
loc_8807A01C:
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x8807A01C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8807a068
	if (ctx.cr6.eq) goto loc_8807A068;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8807a068
	if (ctx.cr6.eq) goto loc_8807A068;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x8807A030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a064
	if (ctx.cr6.eq) goto loc_8807A064;
	// lwz r9,31544(r31)
	ctx.current_instruction = 0x8807A03C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8807a054
	if (ctx.cr6.eq) goto loc_8807A054;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,7824(r31)
	ctx.current_instruction = 0x8807A04C;
	REX_STORE_U32(ctx.r31.u32 + 7824, ctx.r11.u32);
	// b 0x8807a068
	goto loc_8807A068;
loc_8807A054:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a064
	if (ctx.cr6.eq) goto loc_8807A064;
	// stw r29,7824(r31)
	ctx.current_instruction = 0x8807A05C;
	REX_STORE_U32(ctx.r31.u32 + 7824, ctx.r29.u32);
	// b 0x8807a068
	goto loc_8807A068;
loc_8807A064:
	// stw r30,7824(r31)
	ctx.current_instruction = 0x8807A064;
	REX_STORE_U32(ctx.r31.u32 + 7824, ctx.r30.u32);
loc_8807A068:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8807A068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a08c
	if (ctx.cr6.eq) goto loc_8807A08C;
	// lwz r11,2804(r31)
	ctx.current_instruction = 0x8807A074;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a094
	if (ctx.cr6.eq) goto loc_8807A094;
	// lwz r11,2808(r31)
	ctx.current_instruction = 0x8807A080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8807a090
	goto loc_8807A090;
loc_8807A08C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_8807A090:
	// bne cr6,0x8807a09c
	if (!ctx.cr6.eq) goto loc_8807A09C;
loc_8807A094:
	// stw r29,7696(r31)
	ctx.current_instruction = 0x8807A094;
	REX_STORE_U32(ctx.r31.u32 + 7696, ctx.r29.u32);
	// std r30,7712(r31)
	ctx.current_instruction = 0x8807A098;
	REX_STORE_U64(ctx.r31.u32 + 7712, ctx.r30.u64);
loc_8807A09C:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8807a0e8
	if (ctx.cr6.eq) goto loc_8807A0E8;
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x8807A0A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8807a0e8
	if (!ctx.cr6.gt) goto loc_8807A0E8;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807A0B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807a0e8
	if (!ctx.cr6.eq) goto loc_8807A0E8;
	// lwz r11,8236(r31)
	ctx.current_instruction = 0x8807A0C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807a0e8
	if (ctx.cr6.eq) goto loc_8807A0E8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807A0D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x8807A0DC;
	sub_880E6960(ctx, base);
loc_8807A0DC:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807A0DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8807A0E4;
	sub_880E6B40(ctx, base);
loc_8807A0E4:
	// stw r29,7820(r31)
	ctx.current_instruction = 0x8807A0E4;
	REX_STORE_U32(ctx.r31.u32 + 7820, ctx.r29.u32);
loc_8807A0E8:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807A0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807a108
	if (!ctx.cr6.eq) goto loc_8807A108;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807A0F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8807a108
	if (!ctx.cr6.eq) goto loc_8807A108;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807A100;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6b40
	ctx.lr = 0x8807A108;
	sub_880E6B40(ctx, base);
loc_8807A108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88093570) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88093570;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88093570) {
			switch (rex_dispatch_address) {
				case 0x88093578:
				case 0x88093650:
				case 0x88093694:
				case 0x880936AC:
				case 0x88093740:
				case 0x88093784:
				case 0x8809379C:
				case 0x88093834:
				case 0x88093878:
				case 0x88093890:
				case 0x8809390C:
				case 0x88093950:
				case 0x88093968:
				case 0x88093A00:
				case 0x88093A44:
				case 0x88093A5C:
				case 0x88093AE8:
				case 0x88093B2C:
				case 0x88093B44:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88093570;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88093578: goto loc_88093578;
		case 0x88093650: goto loc_88093650;
		case 0x88093694: goto loc_88093694;
		case 0x880936AC: goto loc_880936AC;
		case 0x88093740: goto loc_88093740;
		case 0x88093784: goto loc_88093784;
		case 0x8809379C: goto loc_8809379C;
		case 0x88093834: goto loc_88093834;
		case 0x88093878: goto loc_88093878;
		case 0x88093890: goto loc_88093890;
		case 0x8809390C: goto loc_8809390C;
		case 0x88093950: goto loc_88093950;
		case 0x88093968: goto loc_88093968;
		case 0x88093A00: goto loc_88093A00;
		case 0x88093A44: goto loc_88093A44;
		case 0x88093A5C: goto loc_88093A5C;
		case 0x88093AE8: goto loc_88093AE8;
		case 0x88093B2C: goto loc_88093B2C;
		case 0x88093B44: goto loc_88093B44;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88093578;
	__savegprlr_14(ctx, base);
loc_88093578:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x88093578;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r9,388(r1)
	ctx.current_instruction = 0x88093580;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lwz r6,396(r1)
	ctx.current_instruction = 0x88093588;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r23,476(r1)
	ctx.current_instruction = 0x88093590;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r29,468(r1)
	ctx.current_instruction = 0x88093598;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r22,460(r1)
	ctx.current_instruction = 0x880935A0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// lwz r21,452(r1)
	ctx.current_instruction = 0x880935A8;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r14,444(r1)
	ctx.current_instruction = 0x880935B0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// li r8,-3
	ctx.r8.s64 = -3;
	// lwz r20,436(r1)
	ctx.current_instruction = 0x880935B8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// lwz r30,412(r1)
	ctx.current_instruction = 0x880935C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r3,r8
	ctx.r27.u64 = ctx.r3.u64 & ctx.r8.u64;
	// and r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 & ctx.r9.u64;
	// and r26,r4,r9
	ctx.r26.u64 = ctx.r4.u64 & ctx.r9.u64;
	// stw r27,144(r1)
	ctx.current_instruction = 0x880935E8;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880935F0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r26,140(r1)
	ctx.current_instruction = 0x880935F8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x880937fc
	if (!ctx.cr6.lt) goto loc_880937FC;
loc_88093608:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x88093608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r11,r11,r15
	ctx.r11.u64 = ctx.r15.u64 - ctx.r11.u64;
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// bge cr6,0x880936f8
	if (!ctx.cr6.lt) goto loc_880936F8;
	// clrlwi r27,r19,30
	ctx.r27.u64 = ctx.r19.u32 & 0x3;
	// add r26,r19,r14
	ctx.r26.u64 = ctx.r19.u64 + ctx.r14.u64;
loc_88093628:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88093628;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88093634;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809363C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88093650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093650:
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r22,116(r1)
	ctx.current_instruction = 0x88093658;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r9,100(r1)
	ctx.current_instruction = 0x88093660;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x88093664;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x8809366C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r21,108(r1)
	ctx.current_instruction = 0x88093678;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093694;
	sub_88085938(ctx, base);
loc_88093694:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8809369C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r28,r20
	ctx.r4.u64 = ctx.r28.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880936AC;
	sub_88085E60(ctx, base);
loc_880936AC:
	// lwz r6,128(r1)
	ctx.current_instruction = 0x880936AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,128(r1)
	ctx.current_instruction = 0x880936B8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x880936c8
	if (ctx.cr6.eq) goto loc_880936C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880936C4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_880936C8:
	// lwz r9,108(r29)
	ctx.current_instruction = 0x880936C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880936CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880936ec
	if (!ctx.cr6.lt) goto loc_880936EC;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
loc_880936EC:
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x88093628
	if (ctx.cr0.lt) goto loc_88093628;
	// lwz r27,144(r1)
	ctx.current_instruction = 0x880936F4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_880936F8:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880936F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,140(r1)
	ctx.current_instruction = 0x88093700;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// subf r25,r11,r15
	ctx.r25.u64 = ctx.r15.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880937f0
	if (ctx.cr6.lt) goto loc_880937F0;
	// clrlwi r27,r19,30
	ctx.r27.u64 = ctx.r19.u32 & 0x3;
	// add r26,r19,r14
	ctx.r26.u64 = ctx.r19.u64 + ctx.r14.u64;
loc_88093718:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88093718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88093724;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8809372C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88093740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093740:
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r22,116(r1)
	ctx.current_instruction = 0x88093748;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r9,100(r1)
	ctx.current_instruction = 0x88093750;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x88093754;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x8809375C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r21,108(r1)
	ctx.current_instruction = 0x88093768;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093784;
	sub_88085938(ctx, base);
loc_88093784:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8809378C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r28,r20
	ctx.r4.u64 = ctx.r28.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809379C;
	sub_88085E60(ctx, base);
loc_8809379C:
	// lwz r6,128(r1)
	ctx.current_instruction = 0x8809379C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,128(r1)
	ctx.current_instruction = 0x880937A8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x880937b8
	if (ctx.cr6.eq) goto loc_880937B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880937B4;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_880937B8:
	// lwz r9,108(r29)
	ctx.current_instruction = 0x880937B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880937BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880937dc
	if (!ctx.cr6.lt) goto loc_880937DC;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
loc_880937DC:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x880937DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88093718
	if (!ctx.cr6.gt) goto loc_88093718;
	// lwz r27,144(r1)
	ctx.current_instruction = 0x880937EC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_880937F0:
	// addic. r19,r19,1
	ctx.xer.ca = ctx.r19.u32 > 4294967294;
	ctx.r19.s64 = ctx.r19.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt 0x88093608
	if (ctx.cr0.lt) goto loc_88093608;
	// lwz r26,140(r1)
	ctx.current_instruction = 0x880937F8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880937FC:
	// addi r19,r15,-1
	ctx.r19.s64 = ctx.r15.s64 + -1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x880938d8
	if (!ctx.cr6.lt) goto loc_880938D8;
loc_8809380C:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x8809380C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88093818;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88093820;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88093834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093834:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r22,116(r1)
	ctx.current_instruction = 0x8809383C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// stw r10,100(r1)
	ctx.current_instruction = 0x88093840;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r9,92(r1)
	ctx.current_instruction = 0x88093848;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r21,108(r1)
	ctx.current_instruction = 0x88093850;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88093858;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093878;
	sub_88085938(ctx, base);
loc_88093878:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x88093880;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r28,r20
	ctx.r4.u64 = ctx.r28.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x88093890;
	sub_88085E60(ctx, base);
loc_88093890:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x88093890;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,128(r1)
	ctx.current_instruction = 0x8809389C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x880938ac
	if (ctx.cr6.eq) goto loc_880938AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x880938A8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_880938AC:
	// lwz r9,108(r29)
	ctx.current_instruction = 0x880938AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880938B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880938d0
	if (!ctx.cr6.lt) goto loc_880938D0;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// li r16,0
	ctx.r16.s64 = 0;
loc_880938D0:
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8809380c
	if (ctx.cr0.lt) goto loc_8809380C;
loc_880938D8:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// blt cr6,0x880939b4
	if (ctx.cr6.lt) goto loc_880939B4;
loc_880938E4:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880938E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880938F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880938F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809390C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809390C:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r21,108(r1)
	ctx.current_instruction = 0x88093914;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8809391C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88093920;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88093928;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r22,116(r1)
	ctx.current_instruction = 0x88093934;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093950;
	sub_88085938(ctx, base);
loc_88093950:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x88093958;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r28,r20
	ctx.r4.u64 = ctx.r28.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x88093968;
	sub_88085E60(ctx, base);
loc_88093968:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x88093968;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093974;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x88093984
	if (ctx.cr6.eq) goto loc_88093984;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093980;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_88093984:
	// lwz r9,108(r29)
	ctx.current_instruction = 0x88093984;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88093988;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x880939a8
	if (!ctx.cr6.lt) goto loc_880939A8;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// li r16,0
	ctx.r16.s64 = 0;
loc_880939A8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x880938e4
	if (!ctx.cr6.gt) goto loc_880938E4;
loc_880939B4:
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880939B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88093ba8
	if (ctx.cr6.lt) goto loc_88093BA8;
loc_880939C4:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x88093aa8
	if (!ctx.cr6.lt) goto loc_88093AA8;
	// clrlwi r27,r25,30
	ctx.r27.u64 = ctx.r25.u32 & 0x3;
	// add r26,r25,r14
	ctx.r26.u64 = ctx.r25.u64 + ctx.r14.u64;
loc_880939D8:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x880939D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x880939E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880939EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88093A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093A00:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r22,116(r1)
	ctx.current_instruction = 0x88093A08;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x88093A10;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88093A14;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88093A1C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r21,108(r1)
	ctx.current_instruction = 0x88093A24;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093A44;
	sub_88085938(ctx, base);
loc_88093A44:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x88093A4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r28,r20
	ctx.r4.u64 = ctx.r28.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x88093A5C;
	sub_88085E60(ctx, base);
loc_88093A5C:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x88093A5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093A68;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x88093a78
	if (ctx.cr6.eq) goto loc_88093A78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093A74;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_88093A78:
	// lwz r9,108(r29)
	ctx.current_instruction = 0x88093A78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88093A7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88093a9c
	if (!ctx.cr6.lt) goto loc_88093A9C;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
loc_88093A9C:
	// addic. r28,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x880939d8
	if (ctx.cr0.lt) goto loc_880939D8;
	// lwz r27,144(r1)
	ctx.current_instruction = 0x88093AA4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_88093AA8:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x88093AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88093b98
	if (ctx.cr6.lt) goto loc_88093B98;
	// clrlwi r27,r25,30
	ctx.r27.u64 = ctx.r25.u32 & 0x3;
	// add r26,r25,r14
	ctx.r26.u64 = ctx.r25.u64 + ctx.r14.u64;
loc_88093AC0:
	// lwz r11,2652(r31)
	ctx.current_instruction = 0x88093AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2652);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// clrlwi r7,r28,30
	ctx.r7.u64 = ctx.r28.u32 & 0x3;
	// lwz r9,1560(r31)
	ctx.current_instruction = 0x88093ACC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88093AD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88093AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88093AE8:
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r22,116(r1)
	ctx.current_instruction = 0x88093AF0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x88093AF8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x88093AFC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x88093B04;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r21,108(r1)
	ctx.current_instruction = 0x88093B0C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88093B2C;
	sub_88085938(ctx, base);
loc_88093B2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,132(r1)
	ctx.current_instruction = 0x88093B34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r4,r28,r20
	ctx.r4.u64 = ctx.r28.u64 + ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x88093B44;
	sub_88085E60(ctx, base);
loc_88093B44:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x88093B44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093B50;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x88093b60
	if (ctx.cr6.eq) goto loc_88093B60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88093B5C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_88093B60:
	// lwz r9,108(r29)
	ctx.current_instruction = 0x88093B60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,136(r1)
	ctx.current_instruction = 0x88093B64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x88093b84
	if (!ctx.cr6.lt) goto loc_88093B84;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
loc_88093B84:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x88093B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x88093ac0
	if (!ctx.cr6.gt) goto loc_88093AC0;
	// lwz r27,144(r1)
	ctx.current_instruction = 0x88093B94;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_88093B98:
	// lwz r11,148(r1)
	ctx.current_instruction = 0x88093B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880939c4
	if (!ctx.cr6.gt) goto loc_880939C4;
loc_88093BA8:
	// lwz r11,484(r1)
	ctx.current_instruction = 0x88093BA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r10,492(r1)
	ctx.current_instruction = 0x88093BAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r9,500(r1)
	ctx.current_instruction = 0x88093BB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r17,0(r11)
	ctx.current_instruction = 0x88093BB4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r16,0(r10)
	ctx.current_instruction = 0x88093BB8;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// stw r18,0(r9)
	ctx.current_instruction = 0x88093BBC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B5658) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B5658;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B5658) {
			switch (rex_dispatch_address) {
				case 0x880B5660:
				case 0x880B5668:
				case 0x880B5A44:
				case 0x880B5A6C:
				case 0x880B5A94:
				case 0x880B5AB8:
				case 0x880B5B00:
				case 0x880B5B28:
				case 0x880B5B58:
				case 0x880B5BD4:
				case 0x880B5BFC:
				case 0x880B5C20:
				case 0x880B5C48:
				case 0x880B5C90:
				case 0x880B5CB8:
				case 0x880B5CDC:
				case 0x880B5D4C:
				case 0x880B5D64:
				case 0x880B5DC0:
				case 0x880B5E40:
				case 0x880B5E7C:
				case 0x880B5EA8:
				case 0x880B5EE4:
				case 0x880B5F30:
				case 0x880B5F4C:
				case 0x880B5F6C:
				case 0x880B5F8C:
				case 0x880B5FC0:
				case 0x880B5FDC:
				case 0x880B5FFC:
				case 0x880B601C:
				case 0x880B6094:
				case 0x880B60BC:
				case 0x880B60F8:
				case 0x880B6154:
				case 0x880B617C:
				case 0x880B6250:
				case 0x880B62C0:
				case 0x880B631C:
				case 0x880B6368:
				case 0x880B6390:
				case 0x880B63E4:
				case 0x880B6474:
				case 0x880B64B4:
				case 0x880B6584:
				case 0x880B6618:
				case 0x880B6654:
				case 0x880B674C:
				case 0x880B67F8:
				case 0x880B6880:
				case 0x880B699C:
				case 0x880B6A48:
				case 0x880B6ACC:
				case 0x880B6C34:
				case 0x880B6C70:
				case 0x880B6CF0:
				case 0x880B6D2C:
				case 0x880B6D70:
				case 0x880B6DB4:
				case 0x880B6DF8:
				case 0x880B6E5C:
				case 0x880B6E78:
				case 0x880B6EBC:
				case 0x880B6ED8:
				case 0x880B7064:
				case 0x880B7070:
				case 0x880B708C:
				case 0x880B70BC:
				case 0x880B7154:
				case 0x880B7160:
				case 0x880B717C:
				case 0x880B71AC:
				case 0x880B7250:
				case 0x880B725C:
				case 0x880B7278:
				case 0x880B72A8:
				case 0x880B7410:
				case 0x880B7420:
				case 0x880B743C:
				case 0x880B7474:
				case 0x880B7508:
				case 0x880B7518:
				case 0x880B7534:
				case 0x880B756C:
				case 0x880B7618:
				case 0x880B7628:
				case 0x880B7644:
				case 0x880B7678:
				case 0x880B77E8:
				case 0x880B78A4:
				case 0x880B7924:
				case 0x880B7A1C:
				case 0x880B7A8C:
				case 0x880B7B34:
				case 0x880B7BA4:
				case 0x880B7CC4:
				case 0x880B7CD0:
				case 0x880B7CEC:
				case 0x880B7D24:
				case 0x880B7DB8:
				case 0x880B7DC4:
				case 0x880B7DE0:
				case 0x880B7E18:
				case 0x880B7EBC:
				case 0x880B7EC8:
				case 0x880B7EE4:
				case 0x880B7F1C:
				case 0x880B8074:
				case 0x880B8084:
				case 0x880B80A0:
				case 0x880B80D0:
				case 0x880B8164:
				case 0x880B8174:
				case 0x880B8190:
				case 0x880B81C0:
				case 0x880B8264:
				case 0x880B8274:
				case 0x880B8290:
				case 0x880B82C0:
				case 0x880B83E0:
				case 0x880B844C:
				case 0x880B84E8:
				case 0x880B8594:
				case 0x880B8694:
				case 0x880B86FC:
				case 0x880B87AC:
				case 0x880B881C:
				case 0x880B88AC:
				case 0x880B89D0:
				case 0x880B89F0:
				case 0x880B8A0C:
				case 0x880B8A28:
				case 0x880B8A44:
				case 0x880B8A60:
				case 0x880B8B30:
				case 0x880B8B50:
				case 0x880B8B6C:
				case 0x880B8B88:
				case 0x880B8BA4:
				case 0x880B8BC0:
				case 0x880B8CA0:
				case 0x880B8CD0:
				case 0x880B8CEC:
				case 0x880B8D08:
				case 0x880B8D24:
				case 0x880B8D40:
				case 0x880B8E24:
				case 0x880B8F14:
				case 0x880B8F34:
				case 0x880B8F50:
				case 0x880B8F6C:
				case 0x880B8F88:
				case 0x880B8FA4:
				case 0x880B9074:
				case 0x880B9094:
				case 0x880B90B0:
				case 0x880B90CC:
				case 0x880B90E8:
				case 0x880B9104:
				case 0x880B91E4:
				case 0x880B9214:
				case 0x880B9230:
				case 0x880B924C:
				case 0x880B9268:
				case 0x880B9284:
				case 0x880B9364:
				case 0x880B942C:
				case 0x880B94C0:
				case 0x880B957C:
				case 0x880B95FC:
				case 0x880B9A1C:
				case 0x880B9D08:
				case 0x880B9D28:
				case 0x880B9D44:
				case 0x880B9D60:
				case 0x880B9D7C:
				case 0x880B9D98:
				case 0x880B9E78:
				case 0x880B9E98:
				case 0x880B9EB4:
				case 0x880B9ED0:
				case 0x880B9EEC:
				case 0x880B9F08:
				case 0x880B9FF8:
				case 0x880BA028:
				case 0x880BA044:
				case 0x880BA060:
				case 0x880BA07C:
				case 0x880BA098:
				case 0x880BA1F8:
				case 0x880BA280:
				case 0x880BA300:
				case 0x880BA4DC:
				case 0x880BA5C4:
				case 0x880BA5E4:
				case 0x880BA600:
				case 0x880BA61C:
				case 0x880BA638:
				case 0x880BA654:
				case 0x880BA72C:
				case 0x880BA74C:
				case 0x880BA768:
				case 0x880BA784:
				case 0x880BA7A0:
				case 0x880BA7BC:
				case 0x880BA8A8:
				case 0x880BA8D8:
				case 0x880BA8F4:
				case 0x880BA910:
				case 0x880BA92C:
				case 0x880BA948:
				case 0x880BAAA0:
				case 0x880BAB24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B5658;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B5660: goto loc_880B5660;
		case 0x880B5668: goto loc_880B5668;
		case 0x880B5A44: goto loc_880B5A44;
		case 0x880B5A6C: goto loc_880B5A6C;
		case 0x880B5A94: goto loc_880B5A94;
		case 0x880B5AB8: goto loc_880B5AB8;
		case 0x880B5B00: goto loc_880B5B00;
		case 0x880B5B28: goto loc_880B5B28;
		case 0x880B5B58: goto loc_880B5B58;
		case 0x880B5BD4: goto loc_880B5BD4;
		case 0x880B5BFC: goto loc_880B5BFC;
		case 0x880B5C20: goto loc_880B5C20;
		case 0x880B5C48: goto loc_880B5C48;
		case 0x880B5C90: goto loc_880B5C90;
		case 0x880B5CB8: goto loc_880B5CB8;
		case 0x880B5CDC: goto loc_880B5CDC;
		case 0x880B5D4C: goto loc_880B5D4C;
		case 0x880B5D64: goto loc_880B5D64;
		case 0x880B5DC0: goto loc_880B5DC0;
		case 0x880B5E40: goto loc_880B5E40;
		case 0x880B5E7C: goto loc_880B5E7C;
		case 0x880B5EA8: goto loc_880B5EA8;
		case 0x880B5EE4: goto loc_880B5EE4;
		case 0x880B5F30: goto loc_880B5F30;
		case 0x880B5F4C: goto loc_880B5F4C;
		case 0x880B5F6C: goto loc_880B5F6C;
		case 0x880B5F8C: goto loc_880B5F8C;
		case 0x880B5FC0: goto loc_880B5FC0;
		case 0x880B5FDC: goto loc_880B5FDC;
		case 0x880B5FFC: goto loc_880B5FFC;
		case 0x880B601C: goto loc_880B601C;
		case 0x880B6094: goto loc_880B6094;
		case 0x880B60BC: goto loc_880B60BC;
		case 0x880B60F8: goto loc_880B60F8;
		case 0x880B6154: goto loc_880B6154;
		case 0x880B617C: goto loc_880B617C;
		case 0x880B6250: goto loc_880B6250;
		case 0x880B62C0: goto loc_880B62C0;
		case 0x880B631C: goto loc_880B631C;
		case 0x880B6368: goto loc_880B6368;
		case 0x880B6390: goto loc_880B6390;
		case 0x880B63E4: goto loc_880B63E4;
		case 0x880B6474: goto loc_880B6474;
		case 0x880B64B4: goto loc_880B64B4;
		case 0x880B6584: goto loc_880B6584;
		case 0x880B6618: goto loc_880B6618;
		case 0x880B6654: goto loc_880B6654;
		case 0x880B674C: goto loc_880B674C;
		case 0x880B67F8: goto loc_880B67F8;
		case 0x880B6880: goto loc_880B6880;
		case 0x880B699C: goto loc_880B699C;
		case 0x880B6A48: goto loc_880B6A48;
		case 0x880B6ACC: goto loc_880B6ACC;
		case 0x880B6C34: goto loc_880B6C34;
		case 0x880B6C70: goto loc_880B6C70;
		case 0x880B6CF0: goto loc_880B6CF0;
		case 0x880B6D2C: goto loc_880B6D2C;
		case 0x880B6D70: goto loc_880B6D70;
		case 0x880B6DB4: goto loc_880B6DB4;
		case 0x880B6DF8: goto loc_880B6DF8;
		case 0x880B6E5C: goto loc_880B6E5C;
		case 0x880B6E78: goto loc_880B6E78;
		case 0x880B6EBC: goto loc_880B6EBC;
		case 0x880B6ED8: goto loc_880B6ED8;
		case 0x880B7064: goto loc_880B7064;
		case 0x880B7070: goto loc_880B7070;
		case 0x880B708C: goto loc_880B708C;
		case 0x880B70BC: goto loc_880B70BC;
		case 0x880B7154: goto loc_880B7154;
		case 0x880B7160: goto loc_880B7160;
		case 0x880B717C: goto loc_880B717C;
		case 0x880B71AC: goto loc_880B71AC;
		case 0x880B7250: goto loc_880B7250;
		case 0x880B725C: goto loc_880B725C;
		case 0x880B7278: goto loc_880B7278;
		case 0x880B72A8: goto loc_880B72A8;
		case 0x880B7410: goto loc_880B7410;
		case 0x880B7420: goto loc_880B7420;
		case 0x880B743C: goto loc_880B743C;
		case 0x880B7474: goto loc_880B7474;
		case 0x880B7508: goto loc_880B7508;
		case 0x880B7518: goto loc_880B7518;
		case 0x880B7534: goto loc_880B7534;
		case 0x880B756C: goto loc_880B756C;
		case 0x880B7618: goto loc_880B7618;
		case 0x880B7628: goto loc_880B7628;
		case 0x880B7644: goto loc_880B7644;
		case 0x880B7678: goto loc_880B7678;
		case 0x880B77E8: goto loc_880B77E8;
		case 0x880B78A4: goto loc_880B78A4;
		case 0x880B7924: goto loc_880B7924;
		case 0x880B7A1C: goto loc_880B7A1C;
		case 0x880B7A8C: goto loc_880B7A8C;
		case 0x880B7B34: goto loc_880B7B34;
		case 0x880B7BA4: goto loc_880B7BA4;
		case 0x880B7CC4: goto loc_880B7CC4;
		case 0x880B7CD0: goto loc_880B7CD0;
		case 0x880B7CEC: goto loc_880B7CEC;
		case 0x880B7D24: goto loc_880B7D24;
		case 0x880B7DB8: goto loc_880B7DB8;
		case 0x880B7DC4: goto loc_880B7DC4;
		case 0x880B7DE0: goto loc_880B7DE0;
		case 0x880B7E18: goto loc_880B7E18;
		case 0x880B7EBC: goto loc_880B7EBC;
		case 0x880B7EC8: goto loc_880B7EC8;
		case 0x880B7EE4: goto loc_880B7EE4;
		case 0x880B7F1C: goto loc_880B7F1C;
		case 0x880B8074: goto loc_880B8074;
		case 0x880B8084: goto loc_880B8084;
		case 0x880B80A0: goto loc_880B80A0;
		case 0x880B80D0: goto loc_880B80D0;
		case 0x880B8164: goto loc_880B8164;
		case 0x880B8174: goto loc_880B8174;
		case 0x880B8190: goto loc_880B8190;
		case 0x880B81C0: goto loc_880B81C0;
		case 0x880B8264: goto loc_880B8264;
		case 0x880B8274: goto loc_880B8274;
		case 0x880B8290: goto loc_880B8290;
		case 0x880B82C0: goto loc_880B82C0;
		case 0x880B83E0: goto loc_880B83E0;
		case 0x880B844C: goto loc_880B844C;
		case 0x880B84E8: goto loc_880B84E8;
		case 0x880B8594: goto loc_880B8594;
		case 0x880B8694: goto loc_880B8694;
		case 0x880B86FC: goto loc_880B86FC;
		case 0x880B87AC: goto loc_880B87AC;
		case 0x880B881C: goto loc_880B881C;
		case 0x880B88AC: goto loc_880B88AC;
		case 0x880B89D0: goto loc_880B89D0;
		case 0x880B89F0: goto loc_880B89F0;
		case 0x880B8A0C: goto loc_880B8A0C;
		case 0x880B8A28: goto loc_880B8A28;
		case 0x880B8A44: goto loc_880B8A44;
		case 0x880B8A60: goto loc_880B8A60;
		case 0x880B8B30: goto loc_880B8B30;
		case 0x880B8B50: goto loc_880B8B50;
		case 0x880B8B6C: goto loc_880B8B6C;
		case 0x880B8B88: goto loc_880B8B88;
		case 0x880B8BA4: goto loc_880B8BA4;
		case 0x880B8BC0: goto loc_880B8BC0;
		case 0x880B8CA0: goto loc_880B8CA0;
		case 0x880B8CD0: goto loc_880B8CD0;
		case 0x880B8CEC: goto loc_880B8CEC;
		case 0x880B8D08: goto loc_880B8D08;
		case 0x880B8D24: goto loc_880B8D24;
		case 0x880B8D40: goto loc_880B8D40;
		case 0x880B8E24: goto loc_880B8E24;
		case 0x880B8F14: goto loc_880B8F14;
		case 0x880B8F34: goto loc_880B8F34;
		case 0x880B8F50: goto loc_880B8F50;
		case 0x880B8F6C: goto loc_880B8F6C;
		case 0x880B8F88: goto loc_880B8F88;
		case 0x880B8FA4: goto loc_880B8FA4;
		case 0x880B9074: goto loc_880B9074;
		case 0x880B9094: goto loc_880B9094;
		case 0x880B90B0: goto loc_880B90B0;
		case 0x880B90CC: goto loc_880B90CC;
		case 0x880B90E8: goto loc_880B90E8;
		case 0x880B9104: goto loc_880B9104;
		case 0x880B91E4: goto loc_880B91E4;
		case 0x880B9214: goto loc_880B9214;
		case 0x880B9230: goto loc_880B9230;
		case 0x880B924C: goto loc_880B924C;
		case 0x880B9268: goto loc_880B9268;
		case 0x880B9284: goto loc_880B9284;
		case 0x880B9364: goto loc_880B9364;
		case 0x880B942C: goto loc_880B942C;
		case 0x880B94C0: goto loc_880B94C0;
		case 0x880B957C: goto loc_880B957C;
		case 0x880B95FC: goto loc_880B95FC;
		case 0x880B9A1C: goto loc_880B9A1C;
		case 0x880B9D08: goto loc_880B9D08;
		case 0x880B9D28: goto loc_880B9D28;
		case 0x880B9D44: goto loc_880B9D44;
		case 0x880B9D60: goto loc_880B9D60;
		case 0x880B9D7C: goto loc_880B9D7C;
		case 0x880B9D98: goto loc_880B9D98;
		case 0x880B9E78: goto loc_880B9E78;
		case 0x880B9E98: goto loc_880B9E98;
		case 0x880B9EB4: goto loc_880B9EB4;
		case 0x880B9ED0: goto loc_880B9ED0;
		case 0x880B9EEC: goto loc_880B9EEC;
		case 0x880B9F08: goto loc_880B9F08;
		case 0x880B9FF8: goto loc_880B9FF8;
		case 0x880BA028: goto loc_880BA028;
		case 0x880BA044: goto loc_880BA044;
		case 0x880BA060: goto loc_880BA060;
		case 0x880BA07C: goto loc_880BA07C;
		case 0x880BA098: goto loc_880BA098;
		case 0x880BA1F8: goto loc_880BA1F8;
		case 0x880BA280: goto loc_880BA280;
		case 0x880BA300: goto loc_880BA300;
		case 0x880BA4DC: goto loc_880BA4DC;
		case 0x880BA5C4: goto loc_880BA5C4;
		case 0x880BA5E4: goto loc_880BA5E4;
		case 0x880BA600: goto loc_880BA600;
		case 0x880BA61C: goto loc_880BA61C;
		case 0x880BA638: goto loc_880BA638;
		case 0x880BA654: goto loc_880BA654;
		case 0x880BA72C: goto loc_880BA72C;
		case 0x880BA74C: goto loc_880BA74C;
		case 0x880BA768: goto loc_880BA768;
		case 0x880BA784: goto loc_880BA784;
		case 0x880BA7A0: goto loc_880BA7A0;
		case 0x880BA7BC: goto loc_880BA7BC;
		case 0x880BA8A8: goto loc_880BA8A8;
		case 0x880BA8D8: goto loc_880BA8D8;
		case 0x880BA8F4: goto loc_880BA8F4;
		case 0x880BA910: goto loc_880BA910;
		case 0x880BA92C: goto loc_880BA92C;
		case 0x880BA948: goto loc_880BA948;
		case 0x880BAAA0: goto loc_880BAAA0;
		case 0x880BAB24: goto loc_880BAB24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880B5660;
	__savegprlr_14(ctx, base);
loc_880B5660:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef284
	ctx.lr = 0x880B5668;
	__savefpr_27(ctx, base);
loc_880B5668:
	// ld r12,-4096(r1)
	ctx.current_instruction = 0x880B5668;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7632(r1)
	ctx.current_instruction = 0x880B566C;
	ea = -7632 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,7676(r1)
	ctx.current_instruction = 0x880B5674;
	REX_STORE_U32(ctx.r1.u32 + 7676, ctx.r6.u32);
	// addi r11,r1,6063
	ctx.r11.s64 = ctx.r1.s64 + 6063;
	// lwz r6,1380(r3)
	ctx.current_instruction = 0x880B567C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// addi r3,r1,6415
	ctx.r3.s64 = ctx.r1.s64 + 6415;
	// stw r10,7708(r1)
	ctx.current_instruction = 0x880B5684;
	REX_STORE_U32(ctx.r1.u32 + 7708, ctx.r10.u32);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,7692(r1)
	ctx.current_instruction = 0x880B568C;
	REX_STORE_U32(ctx.r1.u32 + 7692, ctx.r8.u32);
	// rlwinm r10,r3,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,7700(r1)
	ctx.current_instruction = 0x880B5694;
	REX_STORE_U32(ctx.r1.u32 + 7700, ctx.r9.u32);
	// lwz r29,20820(r31)
	ctx.current_instruction = 0x880B5698;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20820);
	// srawi r30,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 2;
	// stw r11,704(r1)
	ctx.current_instruction = 0x880B56A0;
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r10,712(r1)
	ctx.current_instruction = 0x880B56A8;
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r10.u32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lwz r28,6844(r31)
	ctx.current_instruction = 0x880B56B4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 6844);
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B56B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lwz r29,580(r29)
	ctx.current_instruction = 0x880B56C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 580);
	// stw r8,772(r1)
	ctx.current_instruction = 0x880B56C4;
	REX_STORE_U32(ctx.r1.u32 + 772, ctx.r8.u32);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// mullw r3,r11,r4
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// stw r10,336(r1)
	ctx.current_instruction = 0x880B56D0;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// lwz r9,6804(r31)
	ctx.current_instruction = 0x880B56D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6804);
	// stw r30,516(r1)
	ctx.current_instruction = 0x880B56D8;
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r29,524(r1)
	ctx.current_instruction = 0x880B56DC;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r29.u32);
	// stw r7,7684(r1)
	ctx.current_instruction = 0x880B56E0;
	REX_STORE_U32(ctx.r1.u32 + 7684, ctx.r7.u32);
	// stw r28,900(r1)
	ctx.current_instruction = 0x880B56E4;
	REX_STORE_U32(ctx.r1.u32 + 900, ctx.r28.u32);
	// lwz r7,7764(r31)
	ctx.current_instruction = 0x880B56E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r27,784(r31)
	ctx.current_instruction = 0x880B56EC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// lwz r6,28044(r31)
	ctx.current_instruction = 0x880B56F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// stw r4,7660(r1)
	ctx.current_instruction = 0x880B56F4;
	REX_STORE_U32(ctx.r1.u32 + 7660, ctx.r4.u32);
	// lis r29,-30720
	ctx.r29.s64 = -2013265920;
	// stw r5,7668(r1)
	ctx.current_instruction = 0x880B56FC;
	REX_STORE_U32(ctx.r1.u32 + 7668, ctx.r5.u32);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,380(r1)
	ctx.current_instruction = 0x880B5704;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// addi r30,r8,64
	ctx.r30.s64 = ctx.r8.s64 + 64;
	// stw r27,868(r1)
	ctx.current_instruction = 0x880B570C;
	REX_STORE_U32(ctx.r1.u32 + 868, ctx.r27.u32);
	// addi r28,r11,31
	ctx.r28.s64 = ctx.r11.s64 + 31;
	// mulli r8,r3,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(276));
	// stw r30,556(r1)
	ctx.current_instruction = 0x880B5718;
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r30.u32);
	// lfd f31,1488(r29)
	ctx.current_instruction = 0x880B571C;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r29.u32 + 1488);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r16,r7,r8
	ctx.r16.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r28,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x7FFFFFF;
	// stw r16,268(r1)
	ctx.current_instruction = 0x880B5740;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r16.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r29,388(r1)
	ctx.current_instruction = 0x880B5748;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// stw r29,456(r1)
	ctx.current_instruction = 0x880B574C;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r29.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r29,312(r1)
	ctx.current_instruction = 0x880B5754;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// stw r9,908(r1)
	ctx.current_instruction = 0x880B5758;
	REX_STORE_U32(ctx.r1.u32 + 908, ctx.r9.u32);
	// stw r8,864(r1)
	ctx.current_instruction = 0x880B575C;
	REX_STORE_U32(ctx.r1.u32 + 864, ctx.r8.u32);
	// beq cr6,0x880b57b0
	if (ctx.cr6.eq) goto loc_880B57B0;
	// lwz r9,6820(r31)
	ctx.current_instruction = 0x880B5764;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6820);
	// lwz r8,6824(r31)
	ctx.current_instruction = 0x880B5768;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6824);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,1400(r31)
	ctx.current_instruction = 0x880B5770;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r7,24(r31)
	ctx.current_instruction = 0x880B5774;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,28(r31)
	ctx.current_instruction = 0x880B577C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r3,6848(r31)
	ctx.current_instruction = 0x880B5784;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r30,6852(r31)
	ctx.current_instruction = 0x880B578C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,856(r1)
	ctx.current_instruction = 0x880B5798;
	REX_STORE_U32(ctx.r1.u32 + 856, ctx.r9.u32);
	// stw r7,852(r1)
	ctx.current_instruction = 0x880B579C;
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r7.u32);
	// stw r11,892(r1)
	ctx.current_instruction = 0x880B57A0;
	REX_STORE_U32(ctx.r1.u32 + 892, ctx.r11.u32);
	// stw r3,884(r1)
	ctx.current_instruction = 0x880B57A4;
	REX_STORE_U32(ctx.r1.u32 + 884, ctx.r3.u32);
	// stw r30,912(r1)
	ctx.current_instruction = 0x880B57A8;
	REX_STORE_U32(ctx.r1.u32 + 912, ctx.r30.u32);
	// stw r10,904(r1)
	ctx.current_instruction = 0x880B57AC;
	REX_STORE_U32(ctx.r1.u32 + 904, ctx.r10.u32);
loc_880B57B0:
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// stw r4,316(r1)
	ctx.current_instruction = 0x880B57B4;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x880ba49c
	if (!ctx.cr6.lt) goto loc_880BA49C;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r11,r11,6848
	ctx.r11.s64 = ctx.r11.s64 + 6848;
	// stw r11,260(r1)
	ctx.current_instruction = 0x880B57C8;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
loc_880B57CC:
	// lwz r10,908(r1)
	ctx.current_instruction = 0x880B57CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 908);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,1680(r31)
	ctx.current_instruction = 0x880B57D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1680);
	// li r15,0
	ctx.r15.s64 = 0;
	// mullw r9,r14,r10
	ctx.r9.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// lwz r8,796(r31)
	ctx.current_instruction = 0x880B57E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r7,1380(r31)
	ctx.current_instruction = 0x880B57E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r5,516(r1)
	ctx.current_instruction = 0x880B57E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,900(r1)
	ctx.current_instruction = 0x880B57EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 900);
	// lwz r3,864(r1)
	ctx.current_instruction = 0x880B57F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// lwz r30,868(r1)
	ctx.current_instruction = 0x880B57F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 868);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r8,r14
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x880B5800;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,880(r1)
	ctx.current_instruction = 0x880B5804;
	REX_STORE_U32(ctx.r1.u32 + 880, ctx.r8.u32);
	// mullw r5,r14,r5
	ctx.r5.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r7,r14
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r14.s32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,640(r1)
	ctx.current_instruction = 0x880B5828;
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r7.u32);
	// stw r5,500(r1)
	ctx.current_instruction = 0x880B582C;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// stw r4,280(r1)
	ctx.current_instruction = 0x880B5830;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
	// beq cr6,0x880b58ac
	if (ctx.cr6.eq) goto loc_880B58AC;
	// lwz r10,796(r31)
	ctx.current_instruction = 0x880B5838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x880B583C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r7,856(r1)
	ctx.current_instruction = 0x880B5844;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 856);
	// mullw r5,r9,r14
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r14.s32);
	// lwz r4,884(r1)
	ctx.current_instruction = 0x880B584C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 884);
	// lwz r3,912(r1)
	ctx.current_instruction = 0x880B5850;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 912);
	// lwz r30,852(r1)
	ctx.current_instruction = 0x880B5854;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r29,892(r1)
	ctx.current_instruction = 0x880B5858;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 892);
	// lwz r28,904(r1)
	ctx.current_instruction = 0x880B585C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 904);
	// stw r15,708(r1)
	ctx.current_instruction = 0x880B5860;
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r15.u32);
	// stw r15,676(r1)
	ctx.current_instruction = 0x880B5864;
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r15.u32);
	// stw r15,492(r1)
	ctx.current_instruction = 0x880B5868;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r15.u32);
	// stw r15,480(r1)
	ctx.current_instruction = 0x880B586C;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r15.u32);
	// mullw r10,r8,r14
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,628(r1)
	ctx.current_instruction = 0x880B5888;
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r8.u32);
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,648(r1)
	ctx.current_instruction = 0x880B5890;
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r7.u32);
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r5,636(r1)
	ctx.current_instruction = 0x880B5898;
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r5.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r4,460(r1)
	ctx.current_instruction = 0x880B58A0;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// stw r3,468(r1)
	ctx.current_instruction = 0x880B58A4;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r11,652(r1)
	ctx.current_instruction = 0x880B58A8;
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
loc_880B58AC:
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880B58AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// stw r15,404(r1)
	ctx.current_instruction = 0x880B58B0;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r15.u32);
	// stw r15,348(r1)
	ctx.current_instruction = 0x880B58B4;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r15.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r15,544(r1)
	ctx.current_instruction = 0x880B58BC;
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r15.u32);
	// stw r15,716(r1)
	ctx.current_instruction = 0x880B58C0;
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r15.u32);
	// stw r15,560(r1)
	ctx.current_instruction = 0x880B58C4;
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r15.u32);
	// stw r15,692(r1)
	ctx.current_instruction = 0x880B58C8;
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r15.u32);
	// stw r15,300(r1)
	ctx.current_instruction = 0x880B58CC;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r15.u32);
	// stw r15,512(r1)
	ctx.current_instruction = 0x880B58D0;
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r15.u32);
	// stw r15,504(r1)
	ctx.current_instruction = 0x880B58D4;
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r15.u32);
	// stw r15,408(r1)
	ctx.current_instruction = 0x880B58D8;
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r15.u32);
	// beq cr6,0x880ba410
	if (ctx.cr6.eq) goto loc_880BA410;
	// lwz r10,7660(r1)
	ctx.current_instruction = 0x880B58E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 7660);
	// rlwinm r11,r14,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r14,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r14.u64;
	// subfic r8,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r8.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,860(r1)
	ctx.current_instruction = 0x880B58F4;
	REX_STORE_U32(ctx.r1.u32 + 860, ctx.r8.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r4,484(r1)
	ctx.current_instruction = 0x880B58FC;
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r4.u32);
loc_880B5900:
	// lwz r8,720(r31)
	ctx.current_instruction = 0x880B5900;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r11,r15,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,6892(r31)
	ctx.current_instruction = 0x880B5908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6892);
	// li r23,0
	ctx.r23.s64 = 0;
	// mullw r5,r8,r14
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r14.s32);
	// stw r23,776(r1)
	ctx.current_instruction = 0x880B5914;
	REX_STORE_U32(ctx.r1.u32 + 776, ctx.r23.u32);
	// stw r23,748(r1)
	ctx.current_instruction = 0x880B5918;
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r23.u32);
	// stw r23,540(r1)
	ctx.current_instruction = 0x880B591C;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r23.u32);
	// stw r23,532(r1)
	ctx.current_instruction = 0x880B5920;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r23.u32);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r15
	ctx.r3.u64 = ctx.r9.u64 + ctx.r15.u64;
	// subfic r4,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r4.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r4,296(r1)
	ctx.current_instruction = 0x880B593C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r5,576(r1)
	ctx.current_instruction = 0x880B5944;
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r5.u32);
	// clrlwi r24,r15,31
	ctx.r24.u64 = ctx.r15.u32 & 0x1;
	// stw r8,536(r1)
	ctx.current_instruction = 0x880B594C;
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r8.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880b5960
	if (!ctx.cr6.lt) goto loc_880B5960;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r9,296(r1)
	ctx.current_instruction = 0x880B595C;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
loc_880B5960:
	// lwz r9,1352(r31)
	ctx.current_instruction = 0x880B5960;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,304(r1)
	ctx.current_instruction = 0x880B596C;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880b5980
	if (!ctx.cr6.gt) goto loc_880B5980;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,304(r1)
	ctx.current_instruction = 0x880B597C;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
loc_880B5980:
	// lwz r9,860(r1)
	ctx.current_instruction = 0x880B5980;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r11,6896(r31)
	ctx.current_instruction = 0x880B5984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6896);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r9,308(r1)
	ctx.current_instruction = 0x880B598C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b59a0
	if (!ctx.cr6.lt) goto loc_880B59A0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,308(r1)
	ctx.current_instruction = 0x880B599C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
loc_880B59A0:
	// lwz r5,1360(r31)
	ctx.current_instruction = 0x880B59A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// rlwinm r10,r14,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r10,292(r1)
	ctx.current_instruction = 0x880B59B0;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880b59c4
	if (!ctx.cr6.gt) goto loc_880B59C4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,292(r1)
	ctx.current_instruction = 0x880B59C0;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
loc_880B59C4:
	// srawi r29,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 2;
	// srawi r28,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 2;
	// srawi r27,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	// srawi r26,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880b5d00
	if (!ctx.cr6.eq) goto loc_880B5D00;
	// lwz r11,148(r16)
	ctx.current_instruction = 0x880B59DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// lwz r25,640(r1)
	ctx.current_instruction = 0x880B59E4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880B59EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// lwz r17,712(r1)
	ctx.current_instruction = 0x880B59F0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// subf r7,r15,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r15.u64;
	// beq cr6,0x880b5abc
	if (ctx.cr6.eq) goto loc_880B5ABC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r22,704(r1)
	ctx.current_instruction = 0x880B5A00;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r8,648(r1)
	ctx.current_instruction = 0x880B5A08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// subf r6,r14,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r14.u64;
	// lwz r9,636(r1)
	ctx.current_instruction = 0x880B5A10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// addi r30,r22,64
	ctx.r30.s64 = ctx.r22.s64 + 64;
	// stw r23,92(r1)
	ctx.current_instruction = 0x880B5A18;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B5A30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5A44;
	sub_880C3EC8(ctx, base);
loc_880B5A44:
	// lwz r10,7200(r31)
	ctx.current_instruction = 0x880B5A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5a6c
	if (ctx.cr6.eq) goto loc_880B5A6C;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5a6c
	if (!ctx.cr6.eq) goto loc_880B5A6C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5A6C;
	sub_880EB138(ctx, base);
loc_880B5A6C:
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x880B5A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r21,556(r1)
	ctx.current_instruction = 0x880B5A74;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5A94:
	// lwz r10,7088(r31)
	ctx.current_instruction = 0x880B5A94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// addi r6,r21,32
	ctx.r6.s64 = ctx.r21.s64 + 32;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B5AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5AB8:
	// b 0x880b5b30
	goto loc_880B5B30;
loc_880B5ABC:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r6,r14,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r14.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B5AC8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r1)
	ctx.current_instruction = 0x880B5AE0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5B00;
	sub_880C3EC8(ctx, base);
loc_880B5B00:
	// lwz r11,7200(r31)
	ctx.current_instruction = 0x880B5B00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5b28
	if (ctx.cr6.eq) goto loc_880B5B28;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5b28
	if (!ctx.cr6.eq) goto loc_880B5B28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5B28;
	sub_880EB138(ctx, base);
loc_880B5B28:
	// lwz r22,704(r1)
	ctx.current_instruction = 0x880B5B28;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r21,556(r1)
	ctx.current_instruction = 0x880B5B2C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
loc_880B5B30:
	// lwz r11,7084(r31)
	ctx.current_instruction = 0x880B5B30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r19,336(r1)
	ctx.current_instruction = 0x880B5B38;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5B58:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880B5B58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r15,1
	ctx.r11.s64 = ctx.r15.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x880b5cdc
	if (!ctx.cr6.lt) goto loc_880B5CDC;
	// lwz r9,148(r16)
	ctx.current_instruction = 0x880B5B68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r17,256
	ctx.r30.s64 = ctx.r17.s64 + 256;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,724(r31)
	ctx.current_instruction = 0x880B5B78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// beq cr6,0x880b5c4c
	if (ctx.cr6.eq) goto loc_880B5C4C;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// stw r23,92(r1)
	ctx.current_instruction = 0x880B5B88;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// lwz r23,772(r1)
	ctx.current_instruction = 0x880B5B8C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r3,r14,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r14.u64;
	// lwz r5,636(r1)
	ctx.current_instruction = 0x880B5B98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r4,648(r1)
	ctx.current_instruction = 0x880B5B9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// addi r7,r25,16
	ctx.r7.s64 = ctx.r25.s64 + 16;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r25,r23,64
	ctx.r25.s64 = ctx.r23.s64 + 64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B5BB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5BD4;
	sub_880C3EC8(ctx, base);
loc_880B5BD4:
	// lwz r7,7200(r31)
	ctx.current_instruction = 0x880B5BD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880b5bfc
	if (ctx.cr6.eq) goto loc_880B5BFC;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5bfc
	if (!ctx.cr6.eq) goto loc_880B5BFC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5BFC;
	sub_880EB138(ctx, base);
loc_880B5BFC:
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x880B5BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r21,4
	ctx.r6.s64 = ctx.r21.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5C20:
	// lwz r10,7088(r31)
	ctx.current_instruction = 0x880B5C20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// addi r11,r21,32
	ctx.r11.s64 = ctx.r21.s64 + 32;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x880B5C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5C48:
	// b 0x880b5cb8
	goto loc_880B5CB8;
loc_880B5C4C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r7,r14,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r14.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r4,92(r1)
	ctx.current_instruction = 0x880B5C64;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r1)
	ctx.current_instruction = 0x880B5C70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r25,16
	ctx.r7.s64 = ctx.r25.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880B5C90;
	sub_880C3EC8(ctx, base);
loc_880B5C90:
	// lwz r11,7200(r31)
	ctx.current_instruction = 0x880B5C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5cb8
	if (ctx.cr6.eq) goto loc_880B5CB8;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880b5cb8
	if (!ctx.cr6.eq) goto loc_880B5CB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880B5CB8;
	sub_880EB138(ctx, base);
loc_880B5CB8:
	// lwz r11,7084(r31)
	ctx.current_instruction = 0x880B5CB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r19,4
	ctx.r6.s64 = ctx.r19.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5CDC:
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x880B5CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// stw r17,340(r1)
	ctx.current_instruction = 0x880B5CE0;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5d30
	if (ctx.cr6.eq) goto loc_880B5D30;
	// addi r18,r22,64
	ctx.r18.s64 = ctx.r22.s64 + 64;
	// stw r22,436(r1)
	ctx.current_instruction = 0x880B5CF0;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r22.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r18,444(r1)
	ctx.current_instruction = 0x880B5CF8;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r18.u32);
	// b 0x880b5d38
	goto loc_880B5D38;
loc_880B5D00:
	// lwz r11,712(r1)
	ctx.current_instruction = 0x880B5D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r19,336(r1)
	ctx.current_instruction = 0x880B5D08;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r17,r11,256
	ctx.r17.s64 = ctx.r11.s64 + 256;
	// stw r17,340(r1)
	ctx.current_instruction = 0x880B5D10;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// beq cr6,0x880b5d30
	if (ctx.cr6.eq) goto loc_880B5D30;
	// lwz r11,772(r1)
	ctx.current_instruction = 0x880B5D18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// addi r18,r11,64
	ctx.r18.s64 = ctx.r11.s64 + 64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// stw r18,444(r1)
	ctx.current_instruction = 0x880B5D24;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r18.u32);
	// stw r11,436(r1)
	ctx.current_instruction = 0x880B5D28;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// b 0x880b5d38
	goto loc_880B5D38;
loc_880B5D30:
	// lwz r20,436(r1)
	ctx.current_instruction = 0x880B5D30;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r18,444(r1)
	ctx.current_instruction = 0x880B5D34;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
loc_880B5D38:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x880B5D4C;
	sub_880EB9E0(ctx, base);
loc_880B5D4C:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B5D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b5fac
	if (ctx.cr6.eq) goto loc_880B5FAC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ebc20
	ctx.lr = 0x880B5D64;
	sub_880EBC20(ctx, base);
loc_880B5D64:
	// lwz r11,404(r1)
	ctx.current_instruction = 0x880B5D64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r10,348(r1)
	ctx.current_instruction = 0x880B5D68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r7,r1,872
	ctx.r7.s64 = ctx.r1.s64 + 872;
	// addi r5,r1,876
	ctx.r5.s64 = ctx.r1.s64 + 876;
	// lwz r6,96(r16)
	ctx.current_instruction = 0x880B5D74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// stw r7,124(r1)
	ctx.current_instruction = 0x880B5D7C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// stw r5,116(r1)
	ctx.current_instruction = 0x880B5D84;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,108(r1)
	ctx.current_instruction = 0x880B5D88;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r30,r1,692
	ctx.r30.s64 = ctx.r1.s64 + 692;
	// stw r3,100(r1)
	ctx.current_instruction = 0x880B5D90;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,716(r1)
	ctx.current_instruction = 0x880B5D9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r8,692(r1)
	ctx.current_instruction = 0x880B5DA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B5DAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,92(r1)
	ctx.current_instruction = 0x880B5DB0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r10,740(r1)
	ctx.current_instruction = 0x880B5DB4;
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r10.u32);
	// stw r11,736(r1)
	ctx.current_instruction = 0x880B5DB8;
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
	// bl 0x880f6078
	ctx.lr = 0x880B5DC0;
	sub_880F6078(ctx, base);
loc_880B5DC0:
	// lwz r10,876(r1)
	ctx.current_instruction = 0x880B5DC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 876);
	// lwz r9,524(r1)
	ctx.current_instruction = 0x880B5DC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r6,112(r16)
	ctx.current_instruction = 0x880B5DC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r5,896(r1)
	ctx.current_instruction = 0x880B5DCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 896);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,872(r1)
	ctx.current_instruction = 0x880B5DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 872);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r7,504(r1)
	ctx.current_instruction = 0x880B5DDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,692(r1)
	ctx.current_instruction = 0x880B5DE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r3,716(r1)
	ctx.current_instruction = 0x880B5DE4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// stw r4,680(r1)
	ctx.current_instruction = 0x880B5DE8;
	REX_STORE_U32(ctx.r1.u32 + 680, ctx.r4.u32);
	// stw r3,672(r1)
	ctx.current_instruction = 0x880B5DEC;
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r3.u32);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r8,148(r16)
	ctx.current_instruction = 0x880B5DF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r23,r9,r11
	ctx.r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r25,r10,r7
	ctx.r25.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r23,328(r1)
	ctx.current_instruction = 0x880B5E04;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r23.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r25,504(r1)
	ctx.current_instruction = 0x880B5E0C;
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r25.u32);
	// beq cr6,0x880b5f1c
	if (ctx.cr6.eq) goto loc_880B5F1C;
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B5E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5e7c
	if (ctx.cr6.eq) goto loc_880B5E7C;
	// lwz r11,2520(r31)
	ctx.current_instruction = 0x880B5E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r19,256
	ctx.r30.s64 = ctx.r19.s64 + 256;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5E40:
	// addi r10,r1,540
	ctx.r10.s64 = ctx.r1.s64 + 540;
	// lwz r7,96(r16)
	ctx.current_instruction = 0x880B5E44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r8,r1,776
	ctx.r8.s64 = ctx.r1.s64 + 776;
	// lwz r9,676(r1)
	ctx.current_instruction = 0x880B5E4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// addi r6,r1,676
	ctx.r6.s64 = ctx.r1.s64 + 676;
	// stw r10,92(r1)
	ctx.current_instruction = 0x880B5E54;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B5E58;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r6,100(r1)
	ctx.current_instruction = 0x880B5E60;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,480(r1)
	ctx.current_instruction = 0x880B5E6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6d30
	ctx.lr = 0x880B5E7C;
	sub_880F6D30(ctx, base);
loc_880B5E7C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B5E7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b5ee4
	if (ctx.cr6.eq) goto loc_880B5EE4;
	// lwz r11,2520(r31)
	ctx.current_instruction = 0x880B5E8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r19,256
	ctx.r30.s64 = ctx.r19.s64 + 256;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5EA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5EA8:
	// addi r6,r1,708
	ctx.r6.s64 = ctx.r1.s64 + 708;
	// lwz r7,96(r16)
	ctx.current_instruction = 0x880B5EAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// lwz r9,708(r1)
	ctx.current_instruction = 0x880B5EB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// stw r6,100(r1)
	ctx.current_instruction = 0x880B5EB8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// stw r5,92(r1)
	ctx.current_instruction = 0x880B5EC0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r4,84(r1)
	ctx.current_instruction = 0x880B5EC8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,492(r1)
	ctx.current_instruction = 0x880B5ED4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6d30
	ctx.lr = 0x880B5EE4;
	sub_880F6D30(ctx, base);
loc_880B5EE4:
	// lwz r11,532(r1)
	ctx.current_instruction = 0x880B5EE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,776(r1)
	ctx.current_instruction = 0x880B5EE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r9,748(r1)
	ctx.current_instruction = 0x880B5EEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// add r8,r23,r11
	ctx.r8.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,540(r1)
	ctx.current_instruction = 0x880B5EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r7,676(r1)
	ctx.current_instruction = 0x880B5EF8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,708(r1)
	ctx.current_instruction = 0x880B5F00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r5,328(r1)
	ctx.current_instruction = 0x880B5F0C;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// stw r4,504(r1)
	ctx.current_instruction = 0x880B5F10;
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r4.u32);
	// stw r7,480(r1)
	ctx.current_instruction = 0x880B5F14;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r7.u32);
	// stw r6,492(r1)
	ctx.current_instruction = 0x880B5F18;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
loc_880B5F1C:
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880B5F1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5F30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5F30:
	// stw r3,344(r1)
	ctx.current_instruction = 0x880B5F30;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// addi r22,r17,8
	ctx.r22.s64 = ctx.r17.s64 + 8;
	// lwz r10,7136(r31)
	ctx.current_instruction = 0x880B5F38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B5F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5F4C:
	// stw r3,384(r1)
	ctx.current_instruction = 0x880B5F4C;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// lwz r9,7136(r31)
	ctx.current_instruction = 0x880B5F50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r21,r17,128
	ctx.r21.s64 = ctx.r17.s64 + 128;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r21,688(r1)
	ctx.current_instruction = 0x880B5F60;
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r21.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880B5F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5F6C:
	// stw r3,332(r1)
	ctx.current_instruction = 0x880B5F6C;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// lwz r8,7136(r31)
	ctx.current_instruction = 0x880B5F70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r19,r17,136
	ctx.r19.s64 = ctx.r17.s64 + 136;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r19,728(r1)
	ctx.current_instruction = 0x880B5F80;
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r19.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880B5F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5F8C:
	// lwz r11,384(r1)
	ctx.current_instruction = 0x880B5F8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r10,344(r1)
	ctx.current_instruction = 0x880B5F90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r9,332(r1)
	ctx.current_instruction = 0x880B5F94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,412(r1)
	ctx.current_instruction = 0x880B5F9C;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r3.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x880b60e0
	goto loc_880B60E0;
loc_880B5FAC:
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880B5FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B5FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5FC0:
	// stw r3,344(r1)
	ctx.current_instruction = 0x880B5FC0;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// addi r22,r17,8
	ctx.r22.s64 = ctx.r17.s64 + 8;
	// lwz r10,7136(r31)
	ctx.current_instruction = 0x880B5FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B5FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5FDC:
	// stw r3,384(r1)
	ctx.current_instruction = 0x880B5FDC;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// lwz r9,7136(r31)
	ctx.current_instruction = 0x880B5FE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r21,r17,128
	ctx.r21.s64 = ctx.r17.s64 + 128;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r21,688(r1)
	ctx.current_instruction = 0x880B5FF0;
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r21.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880B5FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B5FFC:
	// stw r3,332(r1)
	ctx.current_instruction = 0x880B5FFC;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// lwz r8,7136(r31)
	ctx.current_instruction = 0x880B6000;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// addi r19,r17,136
	ctx.r19.s64 = ctx.r17.s64 + 136;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r19,728(r1)
	ctx.current_instruction = 0x880B6010;
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r19.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880B601C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B601C:
	// lwz r10,344(r1)
	ctx.current_instruction = 0x880B601C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r9,384(r1)
	ctx.current_instruction = 0x880B6020;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r8,332(r1)
	ctx.current_instruction = 0x880B6024;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,19228(r31)
	ctx.current_instruction = 0x880B602C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19228);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,344(r1)
	ctx.current_instruction = 0x880B6040;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,384(r1)
	ctx.current_instruction = 0x880B6048;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,332(r1)
	ctx.current_instruction = 0x880B6050;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// add r30,r7,r3
	ctx.r30.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r10,412(r1)
	ctx.current_instruction = 0x880B6058;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r10.u32);
	// lwz r9,148(r16)
	ctx.current_instruction = 0x880B605C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r25,r11,r30
	ctx.r25.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r25,328(r1)
	ctx.current_instruction = 0x880B6068;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r25.u32);
	// beq cr6,0x880b60d4
	if (ctx.cr6.eq) goto loc_880B60D4;
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B6070;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6098
	if (ctx.cr6.eq) goto loc_880B6098;
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880B6080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B6094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B6094:
	// stw r3,540(r1)
	ctx.current_instruction = 0x880B6094;
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
loc_880B6098:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B6098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b60c0
	if (ctx.cr6.eq) goto loc_880B60C0;
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880B60A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B60BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B60BC:
	// stw r3,532(r1)
	ctx.current_instruction = 0x880B60BC;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r3.u32);
loc_880B60C0:
	// lwz r11,532(r1)
	ctx.current_instruction = 0x880B60C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,540(r1)
	ctx.current_instruction = 0x880B60C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,328(r1)
	ctx.current_instruction = 0x880B60D0;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r25.u32);
loc_880B60D4:
	// lwz r11,504(r1)
	ctx.current_instruction = 0x880B60D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// stw r10,504(r1)
	ctx.current_instruction = 0x880B60DC;
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r10.u32);
loc_880B60E0:
	// stw r30,152(r16)
	ctx.current_instruction = 0x880B60E0;
	REX_STORE_U32(ctx.r16.u32 + 152, ctx.r30.u32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,100(r16)
	ctx.current_instruction = 0x880B60EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085888
	ctx.lr = 0x880B60F8;
	sub_88085888(ctx, base);
loc_880B60F8:
	// lwz r11,28088(r31)
	ctx.current_instruction = 0x880B60F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28088);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6184
	if (ctx.cr6.eq) goto loc_880B6184;
	// lwz r11,1428(r31)
	ctx.current_instruction = 0x880B6108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r16)
	ctx.current_instruction = 0x880B6110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x880b6120
	if (!ctx.cr6.eq) goto loc_880B6120;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_880B6120:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B6124;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// rlwinm r6,r14,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B612C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880B6134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r5,r15,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B614C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B6154;
	sub_88243CB0(ctx, base);
loc_880B6154:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r30,336(r1)
	ctx.current_instruction = 0x880B6158;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B6164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r6,r30,256
	ctx.r6.s64 = ctx.r30.s64 + 256;
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e26c8
	ctx.lr = 0x880B617C;
	sub_880E26C8(ctx, base);
loc_880B617C:
	// stw r3,324(r1)
	ctx.current_instruction = 0x880B617C;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// b 0x880b6188
	goto loc_880B6188;
loc_880B6184:
	// lwz r30,336(r1)
	ctx.current_instruction = 0x880B6184;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
loc_880B6188:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x880b6370
	if (!ctx.cr6.eq) goto loc_880B6370;
	// lwz r11,880(r1)
	ctx.current_instruction = 0x880B6190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 880);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b61ac
	if (ctx.cr6.eq) goto loc_880B61AC;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r23,760(r1)
	ctx.current_instruction = 0x880B61A4;
	REX_STORE_U32(ctx.r1.u32 + 760, ctx.r23.u32);
	// b 0x880b61b0
	goto loc_880B61B0;
loc_880B61AC:
	// lwz r23,760(r1)
	ctx.current_instruction = 0x880B61AC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 760);
loc_880B61B0:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b61c8
	if (ctx.cr6.eq) goto loc_880B61C8;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,752(r1)
	ctx.current_instruction = 0x880B61C0;
	REX_STORE_U32(ctx.r1.u32 + 752, ctx.r25.u32);
	// b 0x880b61cc
	goto loc_880B61CC;
loc_880B61C8:
	// lwz r25,752(r1)
	ctx.current_instruction = 0x880B61C8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
loc_880B61CC:
	// lwz r11,148(r16)
	ctx.current_instruction = 0x880B61CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b62c8
	if (ctx.cr6.eq) goto loc_880B62C8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880b6258
	if (!ctx.cr6.eq) goto loc_880B6258;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880b6258
	if (!ctx.cr6.eq) goto loc_880B6258;
	// lwz r11,516(r1)
	ctx.current_instruction = 0x880B61E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,652(r1)
	ctx.current_instruction = 0x880B61F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// addi r20,r1,1424
	ctx.r20.s64 = ctx.r1.s64 + 1424;
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B61F8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r5,556(r1)
	ctx.current_instruction = 0x880B6200;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,140(r1)
	ctx.current_instruction = 0x880B6208;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r28,r1,1808
	ctx.r28.s64 = ctx.r1.s64 + 1808;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B6210;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x880B6218;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880B6220;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// stw r10,124(r1)
	ctx.current_instruction = 0x880B6228;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r10,628(r1)
	ctx.current_instruction = 0x880B622C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r9,500(r1)
	ctx.current_instruction = 0x880B6230;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r14,116(r1)
	ctx.current_instruction = 0x880B6234;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x880B6238;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r20,164(r1)
	ctx.current_instruction = 0x880B623C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// stw r28,172(r1)
	ctx.current_instruction = 0x880B6240;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r27,148(r1)
	ctx.current_instruction = 0x880B6244;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r29,132(r1)
	ctx.current_instruction = 0x880B6248;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// bl 0x880d9d48
	ctx.lr = 0x880B6250;
	sub_880D9D48(ctx, base);
loc_880B6250:
	// stw r3,312(r1)
	ctx.current_instruction = 0x880B6250;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B6258:
	// lwz r11,516(r1)
	ctx.current_instruction = 0x880B6258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r10,r1,2192
	ctx.r10.s64 = ctx.r1.s64 + 2192;
	// lwz r9,652(r1)
	ctx.current_instruction = 0x880B6260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,132(r1)
	ctx.current_instruction = 0x880B6268;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r29,r1,4112
	ctx.r29.s64 = ctx.r1.s64 + 4112;
	// stw r10,164(r1)
	ctx.current_instruction = 0x880B6270;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r6,124(r1)
	ctx.current_instruction = 0x880B6278;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r14,116(r1)
	ctx.current_instruction = 0x880B6280;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x880B6288;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B6290;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880B6294;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,148(r1)
	ctx.current_instruction = 0x880B6298;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r28,140(r1)
	ctx.current_instruction = 0x880B629C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x880B62A0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r29,172(r1)
	ctx.current_instruction = 0x880B62A4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// lwz r5,556(r1)
	ctx.current_instruction = 0x880B62A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r10,628(r1)
	ctx.current_instruction = 0x880B62AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// lwz r9,500(r1)
	ctx.current_instruction = 0x880B62B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B62B8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// bl 0x880da788
	ctx.lr = 0x880B62C0;
	sub_880DA788(ctx, base);
loc_880B62C0:
	// stw r3,312(r1)
	ctx.current_instruction = 0x880B62C0;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B62C8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880b6324
	if (!ctx.cr6.eq) goto loc_880B6324;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880b6324
	if (!ctx.cr6.eq) goto loc_880B6324;
	// addi r11,r1,1808
	ctx.r11.s64 = ctx.r1.s64 + 1808;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880B62DC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x880B62E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,1424
	ctx.r4.s64 = ctx.r1.s64 + 1424;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880B62E8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880B62F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r4,116(r1)
	ctx.current_instruction = 0x880B62F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r7,516(r1)
	ctx.current_instruction = 0x880B6304;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,500(r1)
	ctx.current_instruction = 0x880B630C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,100(r1)
	ctx.current_instruction = 0x880B6314;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x880d9a38
	ctx.lr = 0x880B631C;
	sub_880D9A38(ctx, base);
loc_880B631C:
	// stw r3,312(r1)
	ctx.current_instruction = 0x880B631C;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B6324:
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// lwz r7,516(r1)
	ctx.current_instruction = 0x880B6328;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r11,r1,4112
	ctx.r11.s64 = ctx.r1.s64 + 4112;
	// lwz r6,500(r1)
	ctx.current_instruction = 0x880B6330;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r3,116(r1)
	ctx.current_instruction = 0x880B6334;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880B6340;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r27,100(r1)
	ctx.current_instruction = 0x880B6348;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880B6350;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880B6358;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,92(r1)
	ctx.current_instruction = 0x880B6360;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x880da1f0
	ctx.lr = 0x880B6368;
	sub_880DA1F0(ctx, base);
loc_880B6368:
	// stw r3,312(r1)
	ctx.current_instruction = 0x880B6368;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// b 0x880b6378
	goto loc_880B6378;
loc_880B6370:
	// lwz r25,752(r1)
	ctx.current_instruction = 0x880B6370;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
	// lwz r23,760(r1)
	ctx.current_instruction = 0x880B6374;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 760);
loc_880B6378:
	// lwz r11,2520(r31)
	ctx.current_instruction = 0x880B6378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880B6390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B6390:
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b63a4
	if (!ctx.cr6.eq) goto loc_880B63A4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_880B63A4:
	// stw r11,768(r1)
	ctx.current_instruction = 0x880B63A4;
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8874
	if (ctx.cr6.eq) goto loc_880B8874;
	// lwz r29,484(r1)
	ctx.current_instruction = 0x880B63B0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r23,r15,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r14,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B63BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B63C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880B63D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B63E4;
	sub_88243CB0(ctx, base);
loc_880B63E4:
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880B63EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r9,108(r1)
	ctx.current_instruction = 0x880B63F0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r5,172(r1)
	ctx.current_instruction = 0x880B63F8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// stw r4,164(r1)
	ctx.current_instruction = 0x880B6400;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r11,r1,2192
	ctx.r11.s64 = ctx.r1.s64 + 2192;
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880B6408;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mulli r28,r24,1920
	ctx.r28.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(1920));
	// lwz r7,304(r1)
	ctx.current_instruction = 0x880B6410;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880B6414;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r6,296(r1)
	ctx.current_instruction = 0x880B6418;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r18,312(r1)
	ctx.current_instruction = 0x880B641C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r8,100(r1)
	ctx.current_instruction = 0x880B6420;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B6424;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r20,280(r1)
	ctx.current_instruction = 0x880B6428;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r10,140(r1)
	ctx.current_instruction = 0x880B6430;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B6438;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r3,156(r1)
	ctx.current_instruction = 0x880B643C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r9,148(r1)
	ctx.current_instruction = 0x880B6444;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r8,132(r1)
	ctx.current_instruction = 0x880B644C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r7,124(r1)
	ctx.current_instruction = 0x880B6454;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r18,116(r1)
	ctx.current_instruction = 0x880B6460;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b4110
	ctx.lr = 0x880B6474;
	sub_880B4110(ctx, base);
loc_880B6474:
	// lwz r6,28020(r31)
	ctx.current_instruction = 0x880B6474;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r26,456(r1)
	ctx.current_instruction = 0x880B6480;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r26.u32);
	// beq cr6,0x880b64d0
	if (ctx.cr6.eq) goto loc_880B64D0;
	// addi r11,r1,644
	ctx.r11.s64 = ctx.r1.s64 + 644;
	// lwz r7,96(r16)
	ctx.current_instruction = 0x880B648C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// lwz r9,740(r1)
	ctx.current_instruction = 0x880B6494;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// lwz r5,336(r1)
	ctx.current_instruction = 0x880B649C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B64A4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B64B4;
	sub_880F6AA8(ctx, base);
loc_880B64B4:
	// lwz r10,524(r1)
	ctx.current_instruction = 0x880B64B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r9,112(r16)
	ctx.current_instruction = 0x880B64B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r8,344(r1)
	ctx.current_instruction = 0x880B64BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,344(r1)
	ctx.current_instruction = 0x880B64C8;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// b 0x880b64d4
	goto loc_880B64D4;
loc_880B64D0:
	// lwz r10,344(r1)
	ctx.current_instruction = 0x880B64D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
loc_880B64D4:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B64D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b6500
	if (!ctx.cr6.lt) goto loc_880B6500;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,248(r1)
	ctx.current_instruction = 0x880B64EC;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// stw r9,244(r1)
	ctx.current_instruction = 0x880B64F0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	ctx.current_instruction = 0x880B64F4;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r10,456(r1)
	ctx.current_instruction = 0x880B64F8;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r10.u32);
	// b 0x880b6504
	goto loc_880B6504;
loc_880B6500:
	// stw r26,644(r1)
	ctx.current_instruction = 0x880B6500;
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r26.u32);
loc_880B6504:
	// lwz r10,576(r1)
	ctx.current_instruction = 0x880B6504;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,244(r1)
	ctx.current_instruction = 0x880B650C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r25,r23,1
	ctx.r25.s64 = ctx.r23.s64 + 1;
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B6514;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880B651C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r25,888(r1)
	ctx.current_instruction = 0x880B6528;
	REX_STORE_U32(ctx.r1.u32 + 888, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,472(r1)
	ctx.current_instruction = 0x880B6530;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r26.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r26,488(r1)
	ctx.current_instruction = 0x880B6538;
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r26.u32);
	// sthx r7,r8,r30
	ctx.current_instruction = 0x880B653C;
	REX_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r7.u16);
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// lwz r7,2548(r31)
	ctx.current_instruction = 0x880B6544;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r8,240(r1)
	ctx.current_instruction = 0x880B6550;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r8,r7,r30
	ctx.current_instruction = 0x880B6554;
	REX_STORE_U16(ctx.r7.u32 + ctx.r30.u32, ctx.r8.u16);
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880B6558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,248(r1)
	ctx.current_instruction = 0x880B655C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r27,240(r1)
	ctx.current_instruction = 0x880B6560;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B6564;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// stw r11,288(r1)
	ctx.current_instruction = 0x880B6568;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r8,416(r1)
	ctx.current_instruction = 0x880B656C;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r8.u32);
	// lwz r11,416(r1)
	ctx.current_instruction = 0x880B6570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B6574;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// stw r27,276(r1)
	ctx.current_instruction = 0x880B6578;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r11,780(r1)
	ctx.current_instruction = 0x880B657C;
	REX_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B6584;
	sub_88243CB0(ctx, base);
loc_880B6584:
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880B6584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// stw r10,108(r1)
	ctx.current_instruction = 0x880B658C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// lwz r9,308(r1)
	ctx.current_instruction = 0x880B6594;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r8,304(r1)
	ctx.current_instruction = 0x880B659C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,296(r1)
	ctx.current_instruction = 0x880B65A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r11,r1,2576
	ctx.r11.s64 = ctx.r1.s64 + 2576;
	// lwz r7,324(r1)
	ctx.current_instruction = 0x880B65AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r20,8
	ctx.r5.s64 = ctx.r20.s64 + 8;
	// stw r10,416(r1)
	ctx.current_instruction = 0x880B65B4;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// addi r20,r1,244
	ctx.r20.s64 = ctx.r1.s64 + 244;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880B65BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r27,156(r1)
	ctx.current_instruction = 0x880B65C4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r27,416(r1)
	ctx.current_instruction = 0x880B65CC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// stw r9,476(r1)
	ctx.current_instruction = 0x880B65D0;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B65D8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r4,84(r1)
	ctx.current_instruction = 0x880B65E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r7,140(r1)
	ctx.current_instruction = 0x880B65E8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r7,r1,1248
	ctx.r7.s64 = ctx.r1.s64 + 1248;
	// stw r6,172(r1)
	ctx.current_instruction = 0x880B65F0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,164(r1)
	ctx.current_instruction = 0x880B65F8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,132(r1)
	ctx.current_instruction = 0x880B6600;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// lwz r27,476(r1)
	ctx.current_instruction = 0x880B6604;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// stw r18,116(r1)
	ctx.current_instruction = 0x880B6608;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r20,148(r1)
	ctx.current_instruction = 0x880B660C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r27,124(r1)
	ctx.current_instruction = 0x880B6610;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bl 0x880b4110
	ctx.lr = 0x880B6618;
	sub_880B4110(ctx, base);
loc_880B6618:
	// lwz r6,28020(r31)
	ctx.current_instruction = 0x880B6618;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880b6670
	if (ctx.cr6.eq) goto loc_880B6670;
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B6628;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// lwz r7,96(r16)
	ctx.current_instruction = 0x880B6630;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880B6634;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,644(r1)
	ctx.current_instruction = 0x880B6640;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B6654;
	sub_880F6AA8(ctx, base);
loc_880B6654:
	// lwz r3,112(r16)
	ctx.current_instruction = 0x880B6654;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r4,524(r1)
	ctx.current_instruction = 0x880B6658;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r10,384(r1)
	ctx.current_instruction = 0x880B665C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,384(r1)
	ctx.current_instruction = 0x880B6668;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// b 0x880b6674
	goto loc_880B6674;
loc_880B6670:
	// lwz r11,384(r1)
	ctx.current_instruction = 0x880B6670;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
loc_880B6674:
	// lwz r10,248(r1)
	ctx.current_instruction = 0x880B6674;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b66a4
	if (!ctx.cr6.lt) goto loc_880B66A4;
	// lwz r8,456(r1)
	ctx.current_instruction = 0x880B6680;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,248(r1)
	ctx.current_instruction = 0x880B668C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r9,244(r1)
	ctx.current_instruction = 0x880B6694;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	ctx.current_instruction = 0x880B6698;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r7,456(r1)
	ctx.current_instruction = 0x880B669C;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// b 0x880b66a8
	goto loc_880B66A8;
loc_880B66A4:
	// stw r26,348(r1)
	ctx.current_instruction = 0x880B66A4;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r26.u32);
loc_880B66A8:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880B66A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.current_instruction = 0x880B66B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r9)
	ctx.current_instruction = 0x880B66B8;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r7,240(r1)
	ctx.current_instruction = 0x880B66BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880B66C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r7,2(r6)
	ctx.current_instruction = 0x880B66C8;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r7.u16);
	// lwz r4,28040(r31)
	ctx.current_instruction = 0x880B66CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880B66D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,240(r1)
	ctx.current_instruction = 0x880B66D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,248(r1)
	ctx.current_instruction = 0x880B66DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// stw r11,528(r1)
	ctx.current_instruction = 0x880B66E8;
	REX_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
	// stw r10,440(r1)
	ctx.current_instruction = 0x880B66EC;
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r10.u32);
	// stw r3,744(r1)
	ctx.current_instruction = 0x880B66F0;
	REX_STORE_U32(ctx.r1.u32 + 744, ctx.r3.u32);
	// beq cr6,0x880b6718
	if (ctx.cr6.eq) goto loc_880B6718;
	// lwz r9,288(r1)
	ctx.current_instruction = 0x880B66F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b6718
	if (!ctx.cr6.eq) goto loc_880B6718;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B6704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6718
	if (!ctx.cr6.eq) goto loc_880B6718;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r26,472(r1)
	ctx.current_instruction = 0x880B6714;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r26.u32);
loc_880B6718:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B671C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B6724;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,84(r1)
	ctx.current_instruction = 0x880B6730;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B674C;
	sub_88243CB0(ctx, base);
loc_880B674C:
	// lwz r10,308(r1)
	ctx.current_instruction = 0x880B674C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880B6750;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r11,r1,2960
	ctx.r11.s64 = ctx.r1.s64 + 2960;
	// lwz r8,296(r1)
	ctx.current_instruction = 0x880B6758;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B6760;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r5,292(r1)
	ctx.current_instruction = 0x880B6768;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B6770;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,312(r1)
	ctx.current_instruction = 0x880B6778;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r23,r1,244
	ctx.r23.s64 = ctx.r1.s64 + 244;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B6780;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880B6788;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r22,r1,608
	ctx.r22.s64 = ctx.r1.s64 + 608;
	// stw r5,108(r1)
	ctx.current_instruction = 0x880B6790;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r9,416(r1)
	ctx.current_instruction = 0x880B6794;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r10,476(r1)
	ctx.current_instruction = 0x880B679C;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r8,280(r1)
	ctx.current_instruction = 0x880B67A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B67A8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,416(r1)
	ctx.current_instruction = 0x880B67AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// stw r11,124(r1)
	ctx.current_instruction = 0x880B67B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r5,476(r1)
	ctx.current_instruction = 0x880B67B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880B67B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r8,632(r1)
	ctx.current_instruction = 0x880B67BC;
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,172(r1)
	ctx.current_instruction = 0x880B67C8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r4,164(r1)
	ctx.current_instruction = 0x880B67CC;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// stw r5,116(r1)
	ctx.current_instruction = 0x880B67D4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r5,632(r1)
	ctx.current_instruction = 0x880B67DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r3,156(r1)
	ctx.current_instruction = 0x880B67E4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,148(r1)
	ctx.current_instruction = 0x880B67EC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r22,132(r1)
	ctx.current_instruction = 0x880B67F0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x880b4110
	ctx.lr = 0x880B67F8;
	sub_880B4110(ctx, base);
loc_880B67F8:
	// lwz r4,28020(r31)
	ctx.current_instruction = 0x880B67F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880b689c
	if (ctx.cr6.eq) goto loc_880B689C;
	// lwz r9,644(r1)
	ctx.current_instruction = 0x880B6804;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b6850
	if (ctx.cr6.eq) goto loc_880B6850;
	// lwz r10,736(r1)
	ctx.current_instruction = 0x880B6810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6854
	if (ctx.cr6.eq) goto loc_880B6854;
	// lwz r11,740(r1)
	ctx.current_instruction = 0x880B681C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880b6854
	if (!ctx.cr6.lt) goto loc_880B6854;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x880b6854
	goto loc_880B6854;
loc_880B6850:
	// lwz r9,736(r1)
	ctx.current_instruction = 0x880B6850;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
loc_880B6854:
	// addi r11,r1,700
	ctx.r11.s64 = ctx.r1.s64 + 700;
	// lwz r8,336(r1)
	ctx.current_instruction = 0x880B6858;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r10,r1,332
	ctx.r10.s64 = ctx.r1.s64 + 332;
	// lwz r7,96(r16)
	ctx.current_instruction = 0x880B6860;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B6864;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r8,256
	ctx.r5.s64 = ctx.r8.s64 + 256;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B6880;
	sub_880F6AA8(ctx, base);
loc_880B6880:
	// lwz r6,112(r16)
	ctx.current_instruction = 0x880B6880;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r7,524(r1)
	ctx.current_instruction = 0x880B6884;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r5,332(r1)
	ctx.current_instruction = 0x880B6888;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,332(r1)
	ctx.current_instruction = 0x880B6894;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// b 0x880b68a0
	goto loc_880B68A0;
loc_880B689C:
	// lwz r10,332(r1)
	ctx.current_instruction = 0x880B689C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
loc_880B68A0:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B68A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b68d0
	if (!ctx.cr6.lt) goto loc_880B68D0;
	// lwz r8,456(r1)
	ctx.current_instruction = 0x880B68AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,248(r1)
	ctx.current_instruction = 0x880B68B8;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r9,244(r1)
	ctx.current_instruction = 0x880B68C0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	ctx.current_instruction = 0x880B68C4;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r7,456(r1)
	ctx.current_instruction = 0x880B68C8;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// b 0x880b68d4
	goto loc_880B68D4;
loc_880B68D0:
	// stw r30,700(r1)
	ctx.current_instruction = 0x880B68D0;
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r30.u32);
loc_880B68D4:
	// lwz r10,536(r1)
	ctx.current_instruction = 0x880B68D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880B68DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B68E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r30
	ctx.current_instruction = 0x880B68E8;
	REX_STORE_U16(ctx.r8.u32 + ctx.r30.u32, ctx.r9.u16);
	// lwz r4,2548(r31)
	ctx.current_instruction = 0x880B68EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r6,240(r1)
	ctx.current_instruction = 0x880B68F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r6,r4,r30
	ctx.current_instruction = 0x880B68F4;
	REX_STORE_U16(ctx.r4.u32 + ctx.r30.u32, ctx.r6.u16);
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880B68F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,248(r1)
	ctx.current_instruction = 0x880B68FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r9,28040(r31)
	ctx.current_instruction = 0x880B6900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lwz r10,240(r1)
	ctx.current_instruction = 0x880B6908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// stw r11,452(r1)
	ctx.current_instruction = 0x880B6910;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,432(r1)
	ctx.current_instruction = 0x880B6918;
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r10.u32);
	// stw r3,632(r1)
	ctx.current_instruction = 0x880B691C;
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r3.u32);
	// beq cr6,0x880b6970
	if (ctx.cr6.eq) goto loc_880B6970;
	// lwz r9,472(r1)
	ctx.current_instruction = 0x880B6924;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b6950
	if (ctx.cr6.eq) goto loc_880B6950;
	// lwz r9,288(r1)
	ctx.current_instruction = 0x880B6930;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b6948
	if (!ctx.cr6.eq) goto loc_880B6948;
	// lwz r9,276(r1)
	ctx.current_instruction = 0x880B693C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880b6950
	if (ctx.cr6.eq) goto loc_880B6950;
loc_880B6948:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,472(r1)
	ctx.current_instruction = 0x880B694C;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r9.u32);
loc_880B6950:
	// lwz r9,288(r1)
	ctx.current_instruction = 0x880B6950;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b6970
	if (!ctx.cr6.eq) goto loc_880B6970;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B695C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6970
	if (!ctx.cr6.eq) goto loc_880B6970;
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r24,488(r1)
	ctx.current_instruction = 0x880B696C;
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r24.u32);
loc_880B6970:
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B6974;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B697C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// stw r23,84(r1)
	ctx.current_instruction = 0x880B6980;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B699C;
	sub_88243CB0(ctx, base);
loc_880B699C:
	// lwz r6,324(r1)
	ctx.current_instruction = 0x880B699C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r5,304(r1)
	ctx.current_instruction = 0x880B69A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r5,92(r1)
	ctx.current_instruction = 0x880B69A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r25,r1,608
	ctx.r25.s64 = ctx.r1.s64 + 608;
	// stw r9,124(r1)
	ctx.current_instruction = 0x880B69B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// std r30,656(r1)
	ctx.current_instruction = 0x880B69B8;
	REX_STORE_U64(ctx.r1.u32 + 656, ctx.r30.u64);
	// addi r7,r1,252
	ctx.r7.s64 = ctx.r1.s64 + 252;
	// stw r6,416(r1)
	ctx.current_instruction = 0x880B69C0;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r6.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r5,416(r1)
	ctx.current_instruction = 0x880B69C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// addi r30,r1,248
	ctx.r30.s64 = ctx.r1.s64 + 248;
	// lwz r11,312(r1)
	ctx.current_instruction = 0x880B69D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r9,476(r1)
	ctx.current_instruction = 0x880B69D4;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r25,132(r1)
	ctx.current_instruction = 0x880B69DC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r25,476(r1)
	ctx.current_instruction = 0x880B69E0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// stw r7,172(r1)
	ctx.current_instruction = 0x880B69E4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// addi r7,r1,1344
	ctx.r7.s64 = ctx.r1.s64 + 1344;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880B69EC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,164(r1)
	ctx.current_instruction = 0x880B69F4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r25,156(r1)
	ctx.current_instruction = 0x880B69F8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880B69FC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,3344
	ctx.r11.s64 = ctx.r1.s64 + 3344;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880B6A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880B6A0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880B6A10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,296(r1)
	ctx.current_instruction = 0x880B6A14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r5,140(r1)
	ctx.current_instruction = 0x880B6A1C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B6A20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,108(r1)
	ctx.current_instruction = 0x880B6A28;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880B6A30;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r4,84(r1)
	ctx.current_instruction = 0x880B6A38;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x880b4110
	ctx.lr = 0x880B6A48;
	sub_880B4110(ctx, base);
loc_880B6A48:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B6A48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// ld r30,656(r1)
	ctx.current_instruction = 0x880B6A4C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6ae8
	if (ctx.cr6.eq) goto loc_880B6AE8;
	// lwz r11,348(r1)
	ctx.current_instruction = 0x880B6A58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r9,700(r1)
	ctx.current_instruction = 0x880B6A5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6aa0
	if (ctx.cr6.eq) goto loc_880B6AA0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b6a9c
	if (ctx.cr6.eq) goto loc_880B6A9C;
	// lwz r10,644(r1)
	ctx.current_instruction = 0x880B6A70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// xor r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880b6aa0
	if (ctx.cr6.lt) goto loc_880B6AA0;
loc_880B6A9C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_880B6AA0:
	// lwz r5,336(r1)
	ctx.current_instruction = 0x880B6AA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// addi r11,r1,404
	ctx.r11.s64 = ctx.r1.s64 + 404;
	// addi r10,r1,412
	ctx.r10.s64 = ctx.r1.s64 + 412;
	// lwz r7,96(r16)
	ctx.current_instruction = 0x880B6AAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 96);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B6AB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r5,272
	ctx.r5.s64 = ctx.r5.s64 + 272;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f6aa8
	ctx.lr = 0x880B6ACC;
	sub_880F6AA8(ctx, base);
loc_880B6ACC:
	// lwz r3,112(r16)
	ctx.current_instruction = 0x880B6ACC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// lwz r4,524(r1)
	ctx.current_instruction = 0x880B6AD0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r10,412(r1)
	ctx.current_instruction = 0x880B6AD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,412(r1)
	ctx.current_instruction = 0x880B6AE0;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// b 0x880b6aec
	goto loc_880B6AEC;
loc_880B6AE8:
	// lwz r11,412(r1)
	ctx.current_instruction = 0x880B6AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
loc_880B6AEC:
	// lwz r10,248(r1)
	ctx.current_instruction = 0x880B6AEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b6b1c
	if (!ctx.cr6.lt) goto loc_880B6B1C;
	// lwz r8,456(r1)
	ctx.current_instruction = 0x880B6AF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,248(r1)
	ctx.current_instruction = 0x880B6B04;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r9,244(r1)
	ctx.current_instruction = 0x880B6B0C;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,240(r1)
	ctx.current_instruction = 0x880B6B10;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r7,456(r1)
	ctx.current_instruction = 0x880B6B14;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// b 0x880b6b20
	goto loc_880B6B20;
loc_880B6B1C:
	// stw r23,404(r1)
	ctx.current_instruction = 0x880B6B1C;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r23.u32);
loc_880B6B20:
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880B6B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.current_instruction = 0x880B6B28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,2(r9)
	ctx.current_instruction = 0x880B6B30;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880B6B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r6,240(r1)
	ctx.current_instruction = 0x880B6B38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r6,2(r5)
	ctx.current_instruction = 0x880B6B40;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r6.u16);
	// lwz r10,244(r1)
	ctx.current_instruction = 0x880B6B44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,240(r1)
	ctx.current_instruction = 0x880B6B48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,248(r1)
	ctx.current_instruction = 0x880B6B4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lwz r11,28040(r31)
	ctx.current_instruction = 0x880B6B54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// stw r10,684(r1)
	ctx.current_instruction = 0x880B6B5C;
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,416(r1)
	ctx.current_instruction = 0x880B6B64;
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// stw r3,476(r1)
	ctx.current_instruction = 0x880B6B68;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// beq cr6,0x880b6bd8
	if (ctx.cr6.eq) goto loc_880B6BD8;
	// lwz r11,472(r1)
	ctx.current_instruction = 0x880B6B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6b9c
	if (ctx.cr6.eq) goto loc_880B6B9C;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B6B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6b94
	if (!ctx.cr6.eq) goto loc_880B6B94;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B6B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880b6b9c
	if (ctx.cr6.eq) goto loc_880B6B9C;
loc_880B6B94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,472(r1)
	ctx.current_instruction = 0x880B6B98;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
loc_880B6B9C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880b6bb8
	if (ctx.cr6.eq) goto loc_880B6BB8;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6bb4
	if (!ctx.cr6.eq) goto loc_880B6BB4;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880b6bb8
	if (ctx.cr6.eq) goto loc_880B6BB8;
loc_880B6BB4:
	// li r26,0
	ctx.r26.s64 = 0;
loc_880B6BB8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x880b6bd8
	if (ctx.cr6.eq) goto loc_880B6BD8;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b6bd0
	if (!ctx.cr6.eq) goto loc_880B6BD0;
	// cmpw cr6,r18,r9
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x880b6bd8
	if (ctx.cr6.eq) goto loc_880B6BD8;
loc_880B6BD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,488(r1)
	ctx.current_instruction = 0x880B6BD4;
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
loc_880B6BD8:
	// lwz r11,19232(r31)
	ctx.current_instruction = 0x880B6BD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r7,148(r16)
	ctx.current_instruction = 0x880B6BDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// add r25,r8,r11
	ctx.r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r25,264(r1)
	ctx.current_instruction = 0x880B6BE8;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// beq cr6,0x880b6ee0
	if (ctx.cr6.eq) goto loc_880B6EE0;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B6BF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r30,276(r1)
	ctx.current_instruction = 0x880B6BF8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r7,r1,548
	ctx.r7.s64 = ctx.r1.s64 + 548;
	// stw r20,1028(r1)
	ctx.current_instruction = 0x880B6C00;
	REX_STORE_U32(ctx.r1.u32 + 1028, ctx.r20.u32);
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// stw r18,1012(r1)
	ctx.current_instruction = 0x880B6C08;
	REX_STORE_U32(ctx.r1.u32 + 1012, ctx.r18.u32);
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// stw r22,1032(r1)
	ctx.current_instruction = 0x880B6C10;
	REX_STORE_U32(ctx.r1.u32 + 1032, ctx.r22.u32);
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// stw r11,1024(r1)
	ctx.current_instruction = 0x880B6C18;
	REX_STORE_U32(ctx.r1.u32 + 1024, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1008(r1)
	ctx.current_instruction = 0x880B6C20;
	REX_STORE_U32(ctx.r1.u32 + 1008, ctx.r30.u32);
	// stw r21,1016(r1)
	ctx.current_instruction = 0x880B6C24;
	REX_STORE_U32(ctx.r1.u32 + 1016, ctx.r21.u32);
	// stw r10,1036(r1)
	ctx.current_instruction = 0x880B6C28;
	REX_STORE_U32(ctx.r1.u32 + 1036, ctx.r10.u32);
	// stw r9,1020(r1)
	ctx.current_instruction = 0x880B6C2C;
	REX_STORE_U32(ctx.r1.u32 + 1020, ctx.r9.u32);
	// bl 0x88095050
	ctx.lr = 0x880B6C34;
	sub_88095050(ctx, base);
loc_880B6C34:
	// lwz r10,464(r1)
	ctx.current_instruction = 0x880B6C34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x880b6c58
	if (!ctx.cr6.eq) goto loc_880B6C58;
	// lwz r11,532(r1)
	ctx.current_instruction = 0x880B6C40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r10,540(r1)
	ctx.current_instruction = 0x880B6C44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,264(r1)
	ctx.current_instruction = 0x880B6C50;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// b 0x880b6ee0
	goto loc_880B6EE0;
loc_880B6C58:
	// addi r7,r1,548
	ctx.r7.s64 = ctx.r1.s64 + 548;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b598
	ctx.lr = 0x880B6C70;
	sub_8810B598(ctx, base);
loc_880B6C70:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B6C70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6e20
	if (ctx.cr6.eq) goto loc_880B6E20;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28088(r31)
	ctx.current_instruction = 0x880B6C80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28088);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,764(r1)
	ctx.current_instruction = 0x880B6C88;
	REX_STORE_U32(ctx.r1.u32 + 764, ctx.r30.u32);
	// stw r30,496(r1)
	ctx.current_instruction = 0x880B6C8C;
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,264(r1)
	ctx.current_instruction = 0x880B6C94;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r30,756(r1)
	ctx.current_instruction = 0x880B6C98;
	REX_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// beq cr6,0x880b6ce0
	if (ctx.cr6.eq) goto loc_880B6CE0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b6cd8
	if (!ctx.cr6.eq) goto loc_880B6CD8;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b6cd8
	if (!ctx.cr6.eq) goto loc_880B6CD8;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b6cd0
	if (!ctx.cr6.eq) goto loc_880B6CD0;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b6ce0
	if (ctx.cr6.eq) goto loc_880B6CE0;
loc_880B6CD0:
	// lwz r5,324(r1)
	ctx.current_instruction = 0x880B6CD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// b 0x880b6ce4
	goto loc_880B6CE4;
loc_880B6CD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x880b6ce4
	goto loc_880B6CE4;
loc_880B6CE0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_880B6CE4:
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e2660
	ctx.lr = 0x880B6CF0;
	sub_880E2660(ctx, base);
loc_880B6CF0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B6CF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6d78
	if (ctx.cr6.eq) goto loc_880B6D78;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B6D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.current_instruction = 0x880B6D0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B6D14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.current_instruction = 0x880B6D1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,460(r1)
	ctx.current_instruction = 0x880B6D24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6D2C;
	sub_8810B7F8(ctx, base);
loc_880B6D2C:
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B6D2C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// lwz r4,436(r1)
	ctx.current_instruction = 0x880B6D34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// stw r14,116(r1)
	ctx.current_instruction = 0x880B6D3C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r8,r1,264
	ctx.r8.s64 = ctx.r1.s64 + 264;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B6D44;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B6D48;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B6D50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
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
	ctx.lr = 0x880B6D70;
	sub_88085938(ctx, base);
loc_880B6D70:
	// lwz r29,496(r1)
	ctx.current_instruction = 0x880B6D70;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// lwz r30,264(r1)
	ctx.current_instruction = 0x880B6D74;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_880B6D78:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B6D78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6e08
	if (ctx.cr6.eq) goto loc_880B6E08;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B6D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.current_instruction = 0x880B6D94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B6D9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.current_instruction = 0x880B6DA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,468(r1)
	ctx.current_instruction = 0x880B6DAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6DB4;
	sub_8810B7F8(ctx, base);
loc_880B6DB4:
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// addi r9,r1,764
	ctx.r9.s64 = ctx.r1.s64 + 764;
	// stw r14,116(r1)
	ctx.current_instruction = 0x880B6DBC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r8,r1,756
	ctx.r8.s64 = ctx.r1.s64 + 756;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B6DC4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B6DC8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B6DD0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B6DD8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r4,444(r1)
	ctx.current_instruction = 0x880B6DE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B6DF8;
	sub_88085938(ctx, base);
loc_880B6DF8:
	// lwz r10,756(r1)
	ctx.current_instruction = 0x880B6DF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r11,764(r1)
	ctx.current_instruction = 0x880B6DFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_880B6E08:
	// lwz r11,108(r16)
	ctx.current_instruction = 0x880B6E08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 108);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r10,264(r1)
	ctx.current_instruction = 0x880B6E18;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// b 0x880b6ee0
	goto loc_880B6EE0;
loc_880B6E20:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B6E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6e80
	if (ctx.cr6.eq) goto loc_880B6E80;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B6E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.current_instruction = 0x880B6E3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B6E44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.current_instruction = 0x880B6E4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,460(r1)
	ctx.current_instruction = 0x880B6E54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6E5C;
	sub_8810B7F8(ctx, base);
loc_880B6E5C:
	// lwz r10,608(r1)
	ctx.current_instruction = 0x880B6E5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,436(r1)
	ctx.current_instruction = 0x880B6E64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B6E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B6E78:
	// add r25,r3,r25
	ctx.r25.u64 = ctx.r3.u64 + ctx.r25.u64;
	// stw r25,264(r1)
	ctx.current_instruction = 0x880B6E7C;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
loc_880B6E80:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B6E80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b6ee0
	if (ctx.cr6.eq) goto loc_880B6EE0;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x880B6E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,548(r1)
	ctx.current_instruction = 0x880B6E9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B6EA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,464(r1)
	ctx.current_instruction = 0x880B6EAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,468(r1)
	ctx.current_instruction = 0x880B6EB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// bl 0x8810b7f8
	ctx.lr = 0x880B6EBC;
	sub_8810B7F8(ctx, base);
loc_880B6EBC:
	// lwz r10,608(r1)
	ctx.current_instruction = 0x880B6EBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,444(r1)
	ctx.current_instruction = 0x880B6EC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880B6ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B6ED8:
	// add r9,r3,r25
	ctx.r9.u64 = ctx.r3.u64 + ctx.r25.u64;
	// stw r9,264(r1)
	ctx.current_instruction = 0x880B6EDC;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
loc_880B6EE0:
	// lwz r11,21092(r31)
	ctx.current_instruction = 0x880B6EE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8874
	if (ctx.cr6.eq) goto loc_880B8874;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B6EEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r5,316(r1)
	ctx.current_instruction = 0x880B6EF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,408(r1)
	ctx.current_instruction = 0x880B6EF4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r8,412(r1)
	ctx.current_instruction = 0x880B6F00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r4,332(r1)
	ctx.current_instruction = 0x880B6F04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r7,384(r1)
	ctx.current_instruction = 0x880B6F08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r30,2544(r31)
	ctx.current_instruction = 0x880B6F0C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880B6F10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r6,344(r1)
	ctx.current_instruction = 0x880B6F14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,28040(r31)
	ctx.current_instruction = 0x880B6F18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r28,r4,r8
	ctx.r28.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r29,1340(r1)
	ctx.current_instruction = 0x880B6F2C;
	REX_STORE_U32(ctx.r1.u32 + 1340, ctx.r29.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r6,r4
	ctx.r17.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,1040(r1)
	ctx.current_instruction = 0x880B6F3C;
	REX_STORE_U32(ctx.r1.u32 + 1040, ctx.r10.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r22,r10,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,1048(r1)
	ctx.current_instruction = 0x880B6F48;
	REX_STORE_U32(ctx.r1.u32 + 1048, ctx.r9.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r8,1044(r1)
	ctx.current_instruction = 0x880B6F50;
	REX_STORE_U32(ctx.r1.u32 + 1044, ctx.r8.u32);
	// rlwinm r25,r8,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r9,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,1052(r1)
	ctx.current_instruction = 0x880B6F5C;
	REX_STORE_U32(ctx.r1.u32 + 1052, ctx.r10.u32);
	// rlwinm r20,r10,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lhzx r18,r22,r30
	ctx.current_instruction = 0x880B6F68;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r30.u32);
	// lhzx r16,r22,r11
	ctx.current_instruction = 0x880B6F6C;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhzx r9,r25,r11
	ctx.current_instruction = 0x880B6F74;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// lhzx r8,r21,r11
	ctx.current_instruction = 0x880B6F78;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r11.u32);
	// lhzx r4,r20,r30
	ctx.current_instruction = 0x880B6F7C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r30.u32);
	// lhzx r3,r20,r11
	ctx.current_instruction = 0x880B6F80;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// lhzx r15,r21,r30
	ctx.current_instruction = 0x880B6F84;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r30.u32);
	// lhzx r14,r25,r30
	ctx.current_instruction = 0x880B6F88;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r30.u32);
	// sth r9,666(r1)
	ctx.current_instruction = 0x880B6F8C;
	REX_STORE_U16(ctx.r1.u32 + 666, ctx.r9.u16);
	// sth r8,668(r1)
	ctx.current_instruction = 0x880B6F90;
	REX_STORE_U16(ctx.r1.u32 + 668, ctx.r8.u16);
	// sth r4,926(r1)
	ctx.current_instruction = 0x880B6F94;
	REX_STORE_U16(ctx.r1.u32 + 926, ctx.r4.u16);
	// sth r3,670(r1)
	ctx.current_instruction = 0x880B6F98;
	REX_STORE_U16(ctx.r1.u32 + 670, ctx.r3.u16);
	// beq cr6,0x880b772c
	if (ctx.cr6.eq) goto loc_880B772C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880b772c
	if (ctx.cr6.eq) goto loc_880B772C;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B6FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r19,372(r1)
	ctx.current_instruction = 0x880B6FAC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r24,1068(r1)
	ctx.current_instruction = 0x880B6FB0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r23,1064(r1)
	ctx.current_instruction = 0x880B6FB8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1064);
	// bne cr6,0x880b6fc8
	if (!ctx.cr6.eq) goto loc_880B6FC8;
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B6FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x880b733c
	goto loc_880B733C;
loc_880B6FC8:
	// lwz r10,1056(r1)
	ctx.current_instruction = 0x880B6FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1056);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b7210
	if (ctx.cr6.eq) goto loc_880B7210;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B6FD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r29,r23,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r9,1076(r1)
	ctx.current_instruction = 0x880B6FDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r8,1072(r1)
	ctx.current_instruction = 0x880B6FE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1072);
	// subf r30,r24,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r24.u64;
	// subf r28,r9,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880b7120
	if (!ctx.cr6.lt) goto loc_880B7120;
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B7030;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b70dc
	if (ctx.cr6.eq) goto loc_880B70DC;
	// lwz r27,284(r1)
	ctx.current_instruction = 0x880B703C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,272(r1)
	ctx.current_instruction = 0x880B7044;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b706c
	if (!ctx.cr6.eq) goto loc_880B706C;
	// bl 0x88085e60
	ctx.lr = 0x880B7064;
	sub_88085E60(ctx, base);
loc_880B7064:
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7090
	goto loc_880B7090;
loc_880B706C:
	// bl 0x88085e60
	ctx.lr = 0x880B7070;
	sub_88085E60(ctx, base);
loc_880B7070:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B708C;
	sub_88085E60(ctx, base);
loc_880B708C:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B7090:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b70a4
	if (!ctx.cr6.eq) goto loc_880B70A4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b70a8
	if (ctx.cr6.eq) goto loc_880B70A8;
loc_880B70A4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B70A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B70BC;
	sub_88085E60(ctx, base);
loc_880B70BC:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B70BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r8,264(r1)
	ctx.current_instruction = 0x880B70C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B70C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,112(r11)
	ctx.current_instruction = 0x880B70CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r7
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x880b733c
	goto loc_880B733C;
loc_880B70DC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B70EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.current_instruction = 0x880B7100;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x880B7104;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.current_instruction = 0x880B7110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.current_instruction = 0x880B7114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7334
	goto loc_880B7334;
loc_880B7120:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B7120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b71cc
	if (ctx.cr6.eq) goto loc_880B71CC;
	// lwz r29,284(r1)
	ctx.current_instruction = 0x880B712C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,272(r1)
	ctx.current_instruction = 0x880B7134;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b715c
	if (!ctx.cr6.eq) goto loc_880B715C;
	// bl 0x88085e60
	ctx.lr = 0x880B7154;
	sub_88085E60(ctx, base);
loc_880B7154:
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7180
	goto loc_880B7180;
loc_880B715C:
	// bl 0x88085e60
	ctx.lr = 0x880B7160;
	sub_88085E60(ctx, base);
loc_880B7160:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B717C;
	sub_88085E60(ctx, base);
loc_880B717C:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B7180:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880b7194
	if (!ctx.cr6.eq) goto loc_880B7194;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b7198
	if (ctx.cr6.eq) goto loc_880B7198;
loc_880B7194:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7198:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B71AC;
	sub_88085E60(ctx, base);
loc_880B71AC:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B71AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r8,264(r1)
	ctx.current_instruction = 0x880B71B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B71B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,112(r11)
	ctx.current_instruction = 0x880B71BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r7
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x880b733c
	goto loc_880B733C;
loc_880B71CC:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B71E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.current_instruction = 0x880B71F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x880B71F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.current_instruction = 0x880B7200;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.current_instruction = 0x880B7204;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7334
	goto loc_880B7334;
loc_880B7210:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B7210;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B7218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// beq cr6,0x880b72c8
	if (ctx.cr6.eq) goto loc_880B72C8;
	// lwz r27,284(r1)
	ctx.current_instruction = 0x880B7220;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// subf r29,r23,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r26,272(r1)
	ctx.current_instruction = 0x880B7228;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// subf r30,r24,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x880b7258
	if (!ctx.cr6.eq) goto loc_880B7258;
	// bl 0x88085e60
	ctx.lr = 0x880B7250;
	sub_88085E60(ctx, base);
loc_880B7250:
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b727c
	goto loc_880B727C;
loc_880B7258:
	// bl 0x88085e60
	ctx.lr = 0x880B725C;
	sub_88085E60(ctx, base);
loc_880B725C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7278;
	sub_88085E60(ctx, base);
loc_880B7278:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B727C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b7290
	if (!ctx.cr6.eq) goto loc_880B7290;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b7294
	if (ctx.cr6.eq) goto loc_880B7294;
loc_880B7290:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7294:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B72A8;
	sub_88085E60(ctx, base);
loc_880B72A8:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B72A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r8,264(r1)
	ctx.current_instruction = 0x880B72B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B72B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,112(r11)
	ctx.current_instruction = 0x880B72B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r7
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x880b733c
	goto loc_880B733C;
loc_880B72C8:
	// subf r9,r23,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r23.u64;
	// subf r7,r24,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r24.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b732c
	if (ctx.cr6.gt) goto loc_880B732C;
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B72F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.current_instruction = 0x880B730C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x880B7310;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.current_instruction = 0x880B731C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r11,r3,r8
	ctx.current_instruction = 0x880B7320;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7334
	goto loc_880B7334;
loc_880B732C:
	// lwz r9,260(r1)
	ctx.current_instruction = 0x880B732C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B7334:
	// lwz r10,264(r1)
	ctx.current_instruction = 0x880B7334;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880B733C:
	// lwz r11,452(r1)
	ctx.current_instruction = 0x880B733C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b7360
	if (!ctx.cr6.eq) goto loc_880B7360;
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B7348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,412(r1)
	ctx.current_instruction = 0x880B734C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,424(r1)
	ctx.current_instruction = 0x880B7358;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// b 0x880b7bf4
	goto loc_880B7BF4;
loc_880B7360:
	// lwz r10,1168(r1)
	ctx.current_instruction = 0x880B7360;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b75cc
	if (ctx.cr6.eq) goto loc_880B75CC;
	// lwz r10,432(r1)
	ctx.current_instruction = 0x880B736C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r9,1188(r1)
	ctx.current_instruction = 0x880B7370;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// lwz r11,452(r1)
	ctx.current_instruction = 0x880B7374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r8,1184(r1)
	ctx.current_instruction = 0x880B7378;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1184);
	// subf r30,r9,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r7,1180(r1)
	ctx.current_instruction = 0x880B7380;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r6,1176(r1)
	ctx.current_instruction = 0x880B7384;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1176);
	// subf r28,r8,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r27,r7,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r26,r6,r11
	ctx.r26.u64 = ctx.r11.u64 - ctx.r6.u64;
	// srawi r5,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 31;
	// srawi r4,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r28.s32 >> 31;
	// srawi r3,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 31;
	// srawi r8,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r26.s32 >> 31;
	// xor r7,r30,r5
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r5.u64;
	// xor r11,r26,r8
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// xor r6,r28,r4
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r4.u64;
	// stw r11,656(r1)
	ctx.current_instruction = 0x880B73B0;
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// xor r9,r27,r3
	ctx.r9.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// subf r11,r5,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r5.u64;
	// lwz r7,656(r1)
	ctx.current_instruction = 0x880B73BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// subf r10,r4,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880b74d4
	if (!ctx.cr6.lt) goto loc_880B74D4;
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B73DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7490
	if (ctx.cr6.eq) goto loc_880B7490;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B73E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880B73F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7418
	if (!ctx.cr6.eq) goto loc_880B7418;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88085e60
	ctx.lr = 0x880B7410;
	sub_88085E60(ctx, base);
loc_880B7410:
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7440
	goto loc_880B7440;
loc_880B7418:
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B7418;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x88085e60
	ctx.lr = 0x880B7420;
	sub_88085E60(ctx, base);
loc_880B7420:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B7424;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B743C;
	sub_88085E60(ctx, base);
loc_880B743C:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B7440:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B7440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b745c
	if (!ctx.cr6.eq) goto loc_880B745C;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B744C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7460
	if (ctx.cr6.eq) goto loc_880B7460;
loc_880B745C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7460:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7474;
	sub_88085E60(ctx, base);
loc_880B7474:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B7474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,112(r11)
	ctx.current_instruction = 0x880B747C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,424(r1)
	ctx.current_instruction = 0x880B7488;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// b 0x880b7708
	goto loc_880B7708;
loc_880B7490:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B74A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x880B74B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B74B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.current_instruction = 0x880B74C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.current_instruction = 0x880B74C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7700
	goto loc_880B7700;
loc_880B74D4:
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B74D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b7588
	if (ctx.cr6.eq) goto loc_880B7588;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B74E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880B74E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7510
	if (!ctx.cr6.eq) goto loc_880B7510;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x88085e60
	ctx.lr = 0x880B7508;
	sub_88085E60(ctx, base);
loc_880B7508:
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7538
	goto loc_880B7538;
loc_880B7510:
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B7510;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x88085e60
	ctx.lr = 0x880B7518;
	sub_88085E60(ctx, base);
loc_880B7518:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B751C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7534;
	sub_88085E60(ctx, base);
loc_880B7534:
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
loc_880B7538:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B7538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7554
	if (!ctx.cr6.eq) goto loc_880B7554;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B7544;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7558
	if (ctx.cr6.eq) goto loc_880B7558;
loc_880B7554:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7558:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B756C;
	sub_88085E60(ctx, base);
loc_880B756C:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B756C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r27,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lwz r9,112(r11)
	ctx.current_instruction = 0x880B7574;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,424(r1)
	ctx.current_instruction = 0x880B7580;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// b 0x880b7708
	goto loc_880B7708;
loc_880B7588:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B759C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B75AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x880B75B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r7
	ctx.current_instruction = 0x880B75BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.current_instruction = 0x880B75C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7700
	goto loc_880B7700;
loc_880B75CC:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B75CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,1176(r1)
	ctx.current_instruction = 0x880B75D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1176);
	// beq cr6,0x880b7694
	if (ctx.cr6.eq) goto loc_880B7694;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B75DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r26,256(r1)
	ctx.current_instruction = 0x880B75E4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,432(r1)
	ctx.current_instruction = 0x880B75EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,1180(r1)
	ctx.current_instruction = 0x880B75F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r8,452(r1)
	ctx.current_instruction = 0x880B75F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// subf r30,r11,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r28,r10,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x880b7620
	if (!ctx.cr6.eq) goto loc_880B7620;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7618;
	sub_88085E60(ctx, base);
loc_880B7618:
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7648
	goto loc_880B7648;
loc_880B7620:
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B7620;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x88085e60
	ctx.lr = 0x880B7628;
	sub_88085E60(ctx, base);
loc_880B7628:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7644;
	sub_88085E60(ctx, base);
loc_880B7644:
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
loc_880B7648:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880b7660
	if (!ctx.cr6.eq) goto loc_880B7660;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B7650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7664
	if (ctx.cr6.eq) goto loc_880B7664;
loc_880B7660:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7664:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7678;
	sub_88085E60(ctx, base);
loc_880B7678:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B7678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r27,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lwz r9,112(r11)
	ctx.current_instruction = 0x880B7680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,424(r1)
	ctx.current_instruction = 0x880B768C;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// b 0x880b7708
	goto loc_880B7708;
loc_880B7694:
	// lwz r8,1180(r1)
	ctx.current_instruction = 0x880B7694;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// subf r6,r10,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r7,432(r1)
	ctx.current_instruction = 0x880B769C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// xor r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// xor r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b76fc
	if (ctx.cr6.gt) goto loc_880B76FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r11,r9
	ctx.current_instruction = 0x880B76DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x880B76E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r7
	ctx.current_instruction = 0x880B76EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r11,r3,r8
	ctx.current_instruction = 0x880B76F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7700
	goto loc_880B7700;
loc_880B76FC:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B7700:
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// stw r11,424(r1)
	ctx.current_instruction = 0x880B7704;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
loc_880B7708:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B7708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B770C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r9,452(r1)
	ctx.current_instruction = 0x880B7710;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r7,432(r1)
	ctx.current_instruction = 0x880B7714;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// sth r11,396(r1)
	ctx.current_instruction = 0x880B7718;
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r11.u16);
	// sth r10,376(r1)
	ctx.current_instruction = 0x880B771C;
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r10.u16);
	// sth r9,398(r1)
	ctx.current_instruction = 0x880B7720;
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r9.u16);
	// sth r7,378(r1)
	ctx.current_instruction = 0x880B7724;
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r7.u16);
	// b 0x880b7bf4
	goto loc_880B7BF4;
loc_880B772C:
	// lwz r10,28056(r31)
	ctx.current_instruction = 0x880B772C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28056);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b79b8
	if (!ctx.cr6.eq) goto loc_880B79B8;
	// extsh r10,r18
	ctx.r10.s64 = ctx.r18.s16;
	// stw r10,568(r1)
	ctx.current_instruction = 0x880B773C;
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r10.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r9,292(r1)
	ctx.current_instruction = 0x880B7744;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,584
	ctx.r10.s64 = ctx.r1.s64 + 584;
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880B774C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r7,132(r1)
	ctx.current_instruction = 0x880B7750;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r19,r1,244
	ctx.r19.s64 = ctx.r1.s64 + 244;
	// stw r10,656(r1)
	ctx.current_instruction = 0x880B7758;
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r10.u32);
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// lwz r7,304(r1)
	ctx.current_instruction = 0x880B7760;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// stw r19,124(r1)
	ctx.current_instruction = 0x880B7768;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,140(r1)
	ctx.current_instruction = 0x880B7770;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r6,r1,1056
	ctx.r6.s64 = ctx.r1.s64 + 1056;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880B7778;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B7780;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r7,728(r1)
	ctx.current_instruction = 0x880B7788;
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r7.u32);
	// stw r4,108(r1)
	ctx.current_instruction = 0x880B778C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lwz r26,268(r1)
	ctx.current_instruction = 0x880B7790;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r23,280(r1)
	ctx.current_instruction = 0x880B7794;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r3,148(r1)
	ctx.current_instruction = 0x880B7798;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B77A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x880B77AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r19,656(r1)
	ctx.current_instruction = 0x880B77B0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// stw r19,116(r1)
	ctx.current_instruction = 0x880B77B4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// lwz r19,728(r1)
	ctx.current_instruction = 0x880B77B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// stw r19,84(r1)
	ctx.current_instruction = 0x880B77BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lhzx r19,r22,r11
	ctx.current_instruction = 0x880B77C0;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r11.u32);
	// extsh r19,r19
	ctx.r19.s64 = ctx.r19.s16;
	// stw r19,584(r1)
	ctx.current_instruction = 0x880B77C8;
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r19.u32);
	// lhzx r30,r25,r30
	ctx.current_instruction = 0x880B77CC;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r30.u32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// stw r30,572(r1)
	ctx.current_instruction = 0x880B77D4;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r30.u32);
	// lhzx r11,r25,r11
	ctx.current_instruction = 0x880B77D8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	ctx.current_instruction = 0x880B77E0;
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88081e50
	ctx.lr = 0x880B77E8;
	sub_88081E50(ctx, base);
loc_880B77E8:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B77E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r30,16384
	ctx.r30.s64 = 16384;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7804
	if (!ctx.cr6.lt) goto loc_880B7804;
	// stw r30,240(r1)
	ctx.current_instruction = 0x880B77F8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stw r30,244(r1)
	ctx.current_instruction = 0x880B77FC;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// b 0x880b7808
	goto loc_880B7808;
loc_880B7804:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_880B7808:
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880B7808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B7810;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r5,r24,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r7,240(r1)
	ctx.current_instruction = 0x880B781C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// stw r10,84(r1)
	ctx.current_instruction = 0x880B7820;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,396(r1)
	ctx.current_instruction = 0x880B7828;
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// sthx r11,r8,r22
	ctx.current_instruction = 0x880B7834;
	REX_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r11.u16);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// sth r7,376(r1)
	ctx.current_instruction = 0x880B783C;
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r7.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,240(r1)
	ctx.current_instruction = 0x880B7844;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B7848;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r11,r8,r22
	ctx.current_instruction = 0x880B784C;
	REX_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r11.u16);
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880B7850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B7854;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r11,r8,r25
	ctx.current_instruction = 0x880B7858;
	REX_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r11.u16);
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B785C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r11,240(r1)
	ctx.current_instruction = 0x880B7860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r11,r8,r25
	ctx.current_instruction = 0x880B7864;
	REX_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r11.u16);
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B7868;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B786C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lhzx r11,r21,r7
	ctx.current_instruction = 0x880B7870;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r7.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,568(r1)
	ctx.current_instruction = 0x880B7878;
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r11.u32);
	// lhzx r11,r21,r8
	ctx.current_instruction = 0x880B787C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,584(r1)
	ctx.current_instruction = 0x880B7884;
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// lhzx r11,r20,r7
	ctx.current_instruction = 0x880B7888;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r7.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,572(r1)
	ctx.current_instruction = 0x880B7890;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// lhzx r11,r20,r8
	ctx.current_instruction = 0x880B7894;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	ctx.current_instruction = 0x880B789C;
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B78A4;
	sub_88243CB0(ctx, base);
loc_880B78A4:
	// lwz r5,308(r1)
	ctx.current_instruction = 0x880B78A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r11,304(r1)
	ctx.current_instruction = 0x880B78AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,292(r1)
	ctx.current_instruction = 0x880B78B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r1,584
	ctx.r6.s64 = ctx.r1.s64 + 584;
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// std r30,728(r1)
	ctx.current_instruction = 0x880B78C0;
	REX_STORE_U64(ctx.r1.u32 + 728, ctx.r30.u64);
	// stw r6,656(r1)
	ctx.current_instruction = 0x880B78C4;
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r6.u32);
	// addi r19,r1,244
	ctx.r19.s64 = ctx.r1.s64 + 244;
	// stw r5,92(r1)
	ctx.current_instruction = 0x880B78CC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r30,r1,568
	ctx.r30.s64 = ctx.r1.s64 + 568;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B78D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880B78DC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r7,148(r1)
	ctx.current_instruction = 0x880B78E4;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r3,140(r1)
	ctx.current_instruction = 0x880B78EC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,132(r1)
	ctx.current_instruction = 0x880B78F4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// lwz r27,656(r1)
	ctx.current_instruction = 0x880B78F8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B78FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,316(r1)
	ctx.current_instruction = 0x880B7900;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r4,688(r1)
	ctx.current_instruction = 0x880B7904;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// stw r19,124(r1)
	ctx.current_instruction = 0x880B7908;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// stw r27,116(r1)
	ctx.current_instruction = 0x880B790C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lwz r5,1380(r31)
	ctx.current_instruction = 0x880B7910;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r30,108(r1)
	ctx.current_instruction = 0x880B7914;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x88081e50
	ctx.lr = 0x880B7924;
	sub_88081E50(ctx, base);
loc_880B7924:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B7924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// ld r30,728(r1)
	ctx.current_instruction = 0x880B7928;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 728);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7944
	if (!ctx.cr6.lt) goto loc_880B7944;
	// stw r30,240(r1)
	ctx.current_instruction = 0x880B7934;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r30,244(r1)
	ctx.current_instruction = 0x880B793C;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// b 0x880b7948
	goto loc_880B7948;
loc_880B7944:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_880B7948:
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B7948;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x880B794C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,19232(r31)
	ctx.current_instruction = 0x880B7950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r7,240(r1)
	ctx.current_instruction = 0x880B7954;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lhz r5,666(r1)
	ctx.current_instruction = 0x880B7958;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 666);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r18,r9,r22
	ctx.current_instruction = 0x880B7960;
	REX_STORE_U16(ctx.r9.u32 + ctx.r22.u32, ctx.r18.u16);
	// sth r8,398(r1)
	ctx.current_instruction = 0x880B7964;
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r8.u16);
	// lhz r11,668(r1)
	ctx.current_instruction = 0x880B7968;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 668);
	// sth r7,378(r1)
	ctx.current_instruction = 0x880B796C;
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r7.u16);
	// stw r4,424(r1)
	ctx.current_instruction = 0x880B7970;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r4.u32);
	// lhz r10,926(r1)
	ctx.current_instruction = 0x880B7974;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 926);
	// lhz r9,670(r1)
	ctx.current_instruction = 0x880B7978;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 670);
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B797C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r16,r8,r22
	ctx.current_instruction = 0x880B7980;
	REX_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r16.u16);
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B7984;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r14,r7,r25
	ctx.current_instruction = 0x880B7988;
	REX_STORE_U16(ctx.r7.u32 + ctx.r25.u32, ctx.r14.u16);
	// lwz r6,2548(r31)
	ctx.current_instruction = 0x880B798C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r5,r6,r25
	ctx.current_instruction = 0x880B7990;
	REX_STORE_U16(ctx.r6.u32 + ctx.r25.u32, ctx.r5.u16);
	// lwz r5,2544(r31)
	ctx.current_instruction = 0x880B7994;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r15,r5,r21
	ctx.current_instruction = 0x880B7998;
	REX_STORE_U16(ctx.r5.u32 + ctx.r21.u32, ctx.r15.u16);
	// lwz r4,2548(r31)
	ctx.current_instruction = 0x880B799C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r11,r4,r21
	ctx.current_instruction = 0x880B79A0;
	REX_STORE_U16(ctx.r4.u32 + ctx.r21.u32, ctx.r11.u16);
	// lwz r3,2544(r31)
	ctx.current_instruction = 0x880B79A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r10,r3,r20
	ctx.current_instruction = 0x880B79A8;
	REX_STORE_U16(ctx.r3.u32 + ctx.r20.u32, ctx.r10.u16);
	// lwz r11,2548(r31)
	ctx.current_instruction = 0x880B79AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r9,r11,r20
	ctx.current_instruction = 0x880B79B0;
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r9.u16);
	// b 0x880b7be8
	goto loc_880B7BE8;
loc_880B79B8:
	// lwz r26,288(r1)
	ctx.current_instruction = 0x880B79B8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r28,268(r1)
	ctx.current_instruction = 0x880B79BC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r27,280(r1)
	ctx.current_instruction = 0x880B79C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// cmpwi cr6,r26,16384
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16384, ctx.xer);
	// bne cr6,0x880b79d4
	if (!ctx.cr6.eq) goto loc_880B79D4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x880b7a28
	goto loc_880B7A28;
loc_880B79D4:
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lwz r9,340(r1)
	ctx.current_instruction = 0x880B79D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r10,r1,508
	ctx.r10.s64 = ctx.r1.s64 + 508;
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880B79E4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B79EC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B79F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B79F8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B7A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7A1C;
	sub_88094E80(ctx, base);
loc_880B7A1C:
	// lwz r6,344(r1)
	ctx.current_instruction = 0x880B7A1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r11,508(r1)
	ctx.current_instruction = 0x880B7A20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r5,316(r1)
	ctx.current_instruction = 0x880B7A24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B7A28:
	// lwz r10,780(r1)
	ctx.current_instruction = 0x880B7A28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r29,528(r1)
	ctx.current_instruction = 0x880B7A2C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,16384
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16384, ctx.xer);
	// stw r30,508(r1)
	ctx.current_instruction = 0x880B7A38;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// bne cr6,0x880b7a48
	if (!ctx.cr6.eq) goto loc_880B7A48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x880b7a94
	goto loc_880B7A94;
loc_880B7A48:
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lwz r10,440(r1)
	ctx.current_instruction = 0x880B7A4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// lwz r4,340(r1)
	ctx.current_instruction = 0x880B7A54;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880B7A5C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880B7A64;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B7A68;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B7A70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7A8C;
	sub_88094E80(ctx, base);
loc_880B7A8C:
	// lwz r11,592(r1)
	ctx.current_instruction = 0x880B7A8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 592);
	// lwz r5,316(r1)
	ctx.current_instruction = 0x880B7A90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B7A94:
	// lwz r10,744(r1)
	ctx.current_instruction = 0x880B7A94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 744);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,592(r1)
	ctx.current_instruction = 0x880B7A9C;
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7abc
	if (!ctx.cr6.lt) goto loc_880B7ABC;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B7AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// sth r26,396(r1)
	ctx.current_instruction = 0x880B7AB0;
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r26.u16);
	// sth r11,376(r1)
	ctx.current_instruction = 0x880B7AB4;
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r11.u16);
	// b 0x880b7ad0
	goto loc_880B7AD0;
loc_880B7ABC:
	// lwz r10,440(r1)
	ctx.current_instruction = 0x880B7ABC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// sth r9,396(r1)
	ctx.current_instruction = 0x880B7AC8;
	REX_STORE_U16(ctx.r1.u32 + 396, ctx.r9.u16);
	// sth r10,376(r1)
	ctx.current_instruction = 0x880B7ACC;
	REX_STORE_U16(ctx.r1.u32 + 376, ctx.r10.u16);
loc_880B7AD0:
	// lwz r26,452(r1)
	ctx.current_instruction = 0x880B7AD0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r26,16384
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16384, ctx.xer);
	// bne cr6,0x880b7ae4
	if (!ctx.cr6.eq) goto loc_880B7AE4;
	// lwz r11,412(r1)
	ctx.current_instruction = 0x880B7ADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// b 0x880b7b3c
	goto loc_880B7B3C;
loc_880B7AE4:
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880B7AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r8,r1,508
	ctx.r8.s64 = ctx.r1.s64 + 508;
	// lwz r10,432(r1)
	ctx.current_instruction = 0x880B7AF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stw r9,108(r1)
	ctx.current_instruction = 0x880B7AF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r6,r1,1168
	ctx.r6.s64 = ctx.r1.s64 + 1168;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880B7B00;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B7B04;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B7B0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,728(r1)
	ctx.current_instruction = 0x880B7B18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7B34;
	sub_88094E80(ctx, base);
loc_880B7B34:
	// lwz r11,508(r1)
	ctx.current_instruction = 0x880B7B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r5,316(r1)
	ctx.current_instruction = 0x880B7B38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B7B3C:
	// lwz r10,632(r1)
	ctx.current_instruction = 0x880B7B3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16384, ctx.xer);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,508(r1)
	ctx.current_instruction = 0x880B7B48;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// bne cr6,0x880b7b58
	if (!ctx.cr6.eq) goto loc_880B7B58;
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B7B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// b 0x880b7ba8
	goto loc_880B7BA8;
loc_880B7B58:
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x880B7B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r8,r1,1168
	ctx.r8.s64 = ctx.r1.s64 + 1168;
	// lwz r4,688(r1)
	ctx.current_instruction = 0x880B7B64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B7B6C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B7B70;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// stw r7,108(r1)
	ctx.current_instruction = 0x880B7B78;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B7B80;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88094e80
	ctx.lr = 0x880B7BA4;
	sub_88094E80(ctx, base);
loc_880B7BA4:
	// lwz r11,592(r1)
	ctx.current_instruction = 0x880B7BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 592);
loc_880B7BA8:
	// lwz r10,476(r1)
	ctx.current_instruction = 0x880B7BA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,592(r1)
	ctx.current_instruction = 0x880B7BB0;
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b7bd0
	if (!ctx.cr6.lt) goto loc_880B7BD0;
	// lwz r10,432(r1)
	ctx.current_instruction = 0x880B7BBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// sth r26,398(r1)
	ctx.current_instruction = 0x880B7BC4;
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r26.u16);
	// sth r10,378(r1)
	ctx.current_instruction = 0x880B7BC8;
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r10.u16);
	// b 0x880b7bdc
	goto loc_880B7BDC;
loc_880B7BD0:
	// sth r23,398(r1)
	ctx.current_instruction = 0x880B7BD0;
	REX_STORE_U16(ctx.r1.u32 + 398, ctx.r23.u16);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r19,378(r1)
	ctx.current_instruction = 0x880B7BD8;
	REX_STORE_U16(ctx.r1.u32 + 378, ctx.r19.u16);
loc_880B7BDC:
	// lwz r10,19232(r31)
	ctx.current_instruction = 0x880B7BDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,424(r1)
	ctx.current_instruction = 0x880B7BE4;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
loc_880B7BE8:
	// lwz r23,1064(r1)
	ctx.current_instruction = 0x880B7BE8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r24,1068(r1)
	ctx.current_instruction = 0x880B7BEC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r19,372(r1)
	ctx.current_instruction = 0x880B7BF0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
loc_880B7BF4:
	// lwz r11,28040(r31)
	ctx.current_instruction = 0x880B7BF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8370
	if (ctx.cr6.eq) goto loc_880B8370;
	// lwz r11,488(r1)
	ctx.current_instruction = 0x880B7C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8370
	if (ctx.cr6.eq) goto loc_880B8370;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B7C0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b7c28
	if (!ctx.cr6.eq) goto loc_880B7C28;
	// lwz r11,344(r1)
	ctx.current_instruction = 0x880B7C18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r10,332(r1)
	ctx.current_instruction = 0x880B7C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7C28:
	// lwz r10,1056(r1)
	ctx.current_instruction = 0x880B7C28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1056);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b7e78
	if (ctx.cr6.eq) goto loc_880B7E78;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B7C34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r29,r23,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r23.u64;
	// lwz r9,1076(r1)
	ctx.current_instruction = 0x880B7C3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r8,1072(r1)
	ctx.current_instruction = 0x880B7C40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1072);
	// subf r30,r24,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r24.u64;
	// subf r28,r9,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x880b7d84
	if (!ctx.cr6.lt) goto loc_880B7D84;
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B7C90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b7d40
	if (ctx.cr6.eq) goto loc_880B7D40;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880B7C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880B7CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7ccc
	if (!ctx.cr6.eq) goto loc_880B7CCC;
	// bl 0x88085e60
	ctx.lr = 0x880B7CC4;
	sub_88085E60(ctx, base);
loc_880B7CC4:
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7cf0
	goto loc_880B7CF0;
loc_880B7CCC:
	// bl 0x88085e60
	ctx.lr = 0x880B7CD0;
	sub_88085E60(ctx, base);
loc_880B7CD0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B7CD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7CEC;
	sub_88085E60(ctx, base);
loc_880B7CEC:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B7CF0:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880B7CF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7d0c
	if (!ctx.cr6.eq) goto loc_880B7D0C;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B7CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7d10
	if (ctx.cr6.eq) goto loc_880B7D10;
loc_880B7D0C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7D10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7D24;
	sub_88085E60(ctx, base);
loc_880B7D24:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B7D24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,264(r1)
	ctx.current_instruction = 0x880B7D2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,112(r11)
	ctx.current_instruction = 0x880B7D30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7D40:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B7D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B7D64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x880B7D68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r7
	ctx.current_instruction = 0x880B7D74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.current_instruction = 0x880B7D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fa4
	goto loc_880B7FA4;
loc_880B7D84:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B7D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7e34
	if (ctx.cr6.eq) goto loc_880B7E34;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880B7D90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880B7D98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b7dc0
	if (!ctx.cr6.eq) goto loc_880B7DC0;
	// bl 0x88085e60
	ctx.lr = 0x880B7DB8;
	sub_88085E60(ctx, base);
loc_880B7DB8:
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7de4
	goto loc_880B7DE4;
loc_880B7DC0:
	// bl 0x88085e60
	ctx.lr = 0x880B7DC4;
	sub_88085E60(ctx, base);
loc_880B7DC4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B7DCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7DE0;
	sub_88085E60(ctx, base);
loc_880B7DE0:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B7DE4:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880B7DE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7e00
	if (!ctx.cr6.eq) goto loc_880B7E00;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B7DF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7e04
	if (ctx.cr6.eq) goto loc_880B7E04;
loc_880B7E00:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7E04:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7E18;
	sub_88085E60(ctx, base);
loc_880B7E18:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B7E18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,264(r1)
	ctx.current_instruction = 0x880B7E20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,112(r11)
	ctx.current_instruction = 0x880B7E24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7E34:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B7E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x880B7E58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B7E5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.current_instruction = 0x880B7E68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.current_instruction = 0x880B7E6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fa4
	goto loc_880B7FA4;
loc_880B7E78:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x880B7E78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b7f38
	if (ctx.cr6.eq) goto loc_880B7F38;
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880B7E84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880B7E8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,284(r1)
	ctx.current_instruction = 0x880B7E94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880B7E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,288(r1)
	ctx.current_instruction = 0x880B7EA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// subf r30,r24,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r29,r23,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x880b7ec4
	if (!ctx.cr6.eq) goto loc_880B7EC4;
	// bl 0x88085e60
	ctx.lr = 0x880B7EBC;
	sub_88085E60(ctx, base);
loc_880B7EBC:
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b7ee8
	goto loc_880B7EE8;
loc_880B7EC4:
	// bl 0x88085e60
	ctx.lr = 0x880B7EC8;
	sub_88085E60(ctx, base);
loc_880B7EC8:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B7ED0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7EE4;
	sub_88085E60(ctx, base);
loc_880B7EE4:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B7EE8:
	// lwz r11,284(r1)
	ctx.current_instruction = 0x880B7EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b7f04
	if (!ctx.cr6.eq) goto loc_880B7F04;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B7EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b7f08
	if (ctx.cr6.eq) goto loc_880B7F08;
loc_880B7F04:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B7F08:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B7F1C;
	sub_88085E60(ctx, base);
loc_880B7F1C:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B7F1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,264(r1)
	ctx.current_instruction = 0x880B7F24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r8,112(r11)
	ctx.current_instruction = 0x880B7F28;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x880b7fac
	goto loc_880B7FAC;
loc_880B7F38:
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B7F38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r9,r23,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r23.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subf r7,r24,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r24.u64;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b7fa0
	if (ctx.cr6.gt) goto loc_880B7FA0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B7F70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B7F80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x880B7F84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r6
	ctx.current_instruction = 0x880B7F90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r11,r11,r7
	ctx.current_instruction = 0x880B7F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b7fa4
	goto loc_880B7FA4;
loc_880B7FA0:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B7FA4:
	// lwz r10,264(r1)
	ctx.current_instruction = 0x880B7FA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// subf r26,r11,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880B7FAC:
	// lwz r24,528(r1)
	ctx.current_instruction = 0x880B7FAC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r25,440(r1)
	ctx.current_instruction = 0x880B7FB0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// bne cr6,0x880b7fd4
	if (!ctx.cr6.eq) goto loc_880B7FD4;
	// lwz r11,384(r1)
	ctx.current_instruction = 0x880B7FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r10,412(r1)
	ctx.current_instruction = 0x880B7FC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,428(r1)
	ctx.current_instruction = 0x880B7FCC;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r9.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B7FD4:
	// lwz r11,1248(r1)
	ctx.current_instruction = 0x880B7FD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8220
	if (ctx.cr6.eq) goto loc_880B8220;
	// lwz r11,1268(r1)
	ctx.current_instruction = 0x880B7FE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1268);
	// lwz r10,1264(r1)
	ctx.current_instruction = 0x880B7FE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1264);
	// lwz r9,1260(r1)
	ctx.current_instruction = 0x880B7FE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// subf r30,r11,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r11.u64;
	// lwz r8,1256(r1)
	ctx.current_instruction = 0x880B7FF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r28,r9,r25
	ctx.r28.u64 = ctx.r25.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b8130
	if (!ctx.cr6.lt) goto loc_880B8130;
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B8040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b80ec
	if (ctx.cr6.eq) goto loc_880B80EC;
	// lwz r29,272(r1)
	ctx.current_instruction = 0x880B804C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r23,252(r1)
	ctx.current_instruction = 0x880B8054;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r23.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b807c
	if (!ctx.cr6.eq) goto loc_880B807C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8074;
	sub_88085E60(ctx, base);
loc_880B8074:
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b80a4
	goto loc_880B80A4;
loc_880B807C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8084;
	sub_88085E60(ctx, base);
loc_880B8084:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B80A0;
	sub_88085E60(ctx, base);
loc_880B80A0:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B80A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880b80b8
	if (!ctx.cr6.eq) goto loc_880B80B8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b80bc
	if (ctx.cr6.eq) goto loc_880B80BC;
loc_880B80B8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B80BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B80D0;
	sub_88085E60(ctx, base);
loc_880B80D0:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B80D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,112(r11)
	ctx.current_instruction = 0x880B80D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,428(r1)
	ctx.current_instruction = 0x880B80E4;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B80EC:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B8100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x880B8110;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B8114;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r8
	ctx.current_instruction = 0x880B8120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r10,r3,r7
	ctx.current_instruction = 0x880B8124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b834c
	goto loc_880B834C;
loc_880B8130:
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B8130;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b81dc
	if (ctx.cr6.eq) goto loc_880B81DC;
	// lwz r27,272(r1)
	ctx.current_instruction = 0x880B813C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r23,252(r1)
	ctx.current_instruction = 0x880B8144;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x880b816c
	if (!ctx.cr6.eq) goto loc_880B816C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8164;
	sub_88085E60(ctx, base);
loc_880B8164:
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b8194
	goto loc_880B8194;
loc_880B816C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8174;
	sub_88085E60(ctx, base);
loc_880B8174:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8190;
	sub_88085E60(ctx, base);
loc_880B8190:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8194:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b81a8
	if (!ctx.cr6.eq) goto loc_880B81A8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b81ac
	if (ctx.cr6.eq) goto loc_880B81AC;
loc_880B81A8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B81AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B81C0;
	sub_88085E60(ctx, base);
loc_880B81C0:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B81C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,112(r11)
	ctx.current_instruction = 0x880B81C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,428(r1)
	ctx.current_instruction = 0x880B81D4;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B81DC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B81F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B8200;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x880B8204;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r7
	ctx.current_instruction = 0x880B8210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.current_instruction = 0x880B8214;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b834c
	goto loc_880B834C;
loc_880B8220:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B8220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b82dc
	if (ctx.cr6.eq) goto loc_880B82DC;
	// lwz r11,1260(r1)
	ctx.current_instruction = 0x880B822C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1256(r1)
	ctx.current_instruction = 0x880B8234;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,272(r1)
	ctx.current_instruction = 0x880B823C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// subf r30,r11,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r11.u64;
	// lwz r23,252(r1)
	ctx.current_instruction = 0x880B8244;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x880b826c
	if (!ctx.cr6.eq) goto loc_880B826C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8264;
	sub_88085E60(ctx, base);
loc_880B8264:
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x880b8294
	goto loc_880B8294;
loc_880B826C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8274;
	sub_88085E60(ctx, base);
loc_880B8274:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8290;
	sub_88085E60(ctx, base);
loc_880B8290:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8294:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x880b82a8
	if (!ctx.cr6.eq) goto loc_880B82A8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x880b82ac
	if (ctx.cr6.eq) goto loc_880B82AC;
loc_880B82A8:
	// li r6,1
	ctx.r6.s64 = 1;
loc_880B82AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B82C0;
	sub_88085E60(ctx, base);
loc_880B82C0:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x880B82C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,112(r11)
	ctx.current_instruction = 0x880B82C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r8,428(r1)
	ctx.current_instruction = 0x880B82D4;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// b 0x880b8354
	goto loc_880B8354;
loc_880B82DC:
	// lwz r11,1256(r1)
	ctx.current_instruction = 0x880B82DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1256);
	// lwz r10,1260(r1)
	ctx.current_instruction = 0x880B82E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
	// subf r7,r10,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8348
	if (ctx.cr6.gt) goto loc_880B8348;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x880B8318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lwzx r5,r9,r11
	ctx.current_instruction = 0x880B8328;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.current_instruction = 0x880B832C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r6
	ctx.current_instruction = 0x880B8338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwzx r11,r11,r7
	ctx.current_instruction = 0x880B833C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b834c
	goto loc_880B834C;
loc_880B8348:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B834C:
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// stw r11,428(r1)
	ctx.current_instruction = 0x880B8350;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
loc_880B8354:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B8354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,276(r1)
	ctx.current_instruction = 0x880B8358;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sth r24,394(r1)
	ctx.current_instruction = 0x880B835C;
	REX_STORE_U16(ctx.r1.u32 + 394, ctx.r24.u16);
	// sth r25,402(r1)
	ctx.current_instruction = 0x880B8360;
	REX_STORE_U16(ctx.r1.u32 + 402, ctx.r25.u16);
	// sth r11,392(r1)
	ctx.current_instruction = 0x880B8364;
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r11.u16);
	// sth r9,400(r1)
	ctx.current_instruction = 0x880B8368;
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r9.u16);
	// b 0x880b8864
	goto loc_880B8864;
loc_880B8370:
	// lwz r11,28056(r31)
	ctx.current_instruction = 0x880B8370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b862c
	if (!ctx.cr6.eq) goto loc_880B862C;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B837C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880B8384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B838C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// lwz r30,316(r1)
	ctx.current_instruction = 0x880B8394;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,408(r1)
	ctx.current_instruction = 0x880B839C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lhzx r28,r22,r7
	ctx.current_instruction = 0x880B83A0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r7.u32);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B83A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r28,568(r1)
	ctx.current_instruction = 0x880B83B4;
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r28.u32);
	// lhzx r11,r22,r8
	ctx.current_instruction = 0x880B83B8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,584(r1)
	ctx.current_instruction = 0x880B83C0;
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// lhzx r11,r21,r7
	ctx.current_instruction = 0x880B83C4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r7.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,572(r1)
	ctx.current_instruction = 0x880B83CC;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// lhzx r11,r21,r8
	ctx.current_instruction = 0x880B83D0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	ctx.current_instruction = 0x880B83D8;
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B83E0;
	sub_88243CB0(ctx, base);
loc_880B83E0:
	// lwz r11,292(r1)
	ctx.current_instruction = 0x880B83E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r26,308(r1)
	ctx.current_instruction = 0x880B83E8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r28,r1,568
	ctx.r28.s64 = ctx.r1.s64 + 568;
	// stw r10,132(r1)
	ctx.current_instruction = 0x880B83F4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r27,r1,248
	ctx.r27.s64 = ctx.r1.s64 + 248;
	// stw r8,124(r1)
	ctx.current_instruction = 0x880B83FC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// addi r24,r1,584
	ctx.r24.s64 = ctx.r1.s64 + 584;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880B8404;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B8408;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,140(r1)
	ctx.current_instruction = 0x880B8410;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r24,116(r1)
	ctx.current_instruction = 0x880B8418;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// stw r26,92(r1)
	ctx.current_instruction = 0x880B8420;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,304(r1)
	ctx.current_instruction = 0x880B8428;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// stw r9,148(r1)
	ctx.current_instruction = 0x880B842C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B8434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,268(r1)
	ctx.current_instruction = 0x880B8438;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B843C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,340(r1)
	ctx.current_instruction = 0x880B8440;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r23,84(r1)
	ctx.current_instruction = 0x880B8444;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x88081e50
	ctx.lr = 0x880B844C;
	sub_88081E50(ctx, base);
loc_880B844C:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B844C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b846c
	if (!ctx.cr6.lt) goto loc_880B846C;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r11,240(r1)
	ctx.current_instruction = 0x880B8460;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x880B8464;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// b 0x880b8470
	goto loc_880B8470;
loc_880B846C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_880B8470:
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880B8470;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,240(r1)
	ctx.current_instruction = 0x880B8478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r11,r1,1032
	ctx.r11.s64 = ctx.r1.s64 + 1032;
	// sth r9,392(r1)
	ctx.current_instruction = 0x880B8480;
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r9.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// sth r8,400(r1)
	ctx.current_instruction = 0x880B8488;
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r8.u16);
loc_880B848C:
	// lwzu r10,8(r11)
	ctx.current_instruction = 0x880B848C;
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880B8490;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B8494;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sthx r6,r7,r8
	ctx.current_instruction = 0x880B84A0;
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u16);
	// lwz r5,240(r1)
	ctx.current_instruction = 0x880B84A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r3,2548(r31)
	ctx.current_instruction = 0x880B84A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sthx r4,r3,r7
	ctx.current_instruction = 0x880B84B0;
	REX_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u16);
	// bdnz 0x880b848c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880B848C;
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880B84B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r29,316(r1)
	ctx.current_instruction = 0x880B84C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B84CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B84D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,888(r1)
	ctx.current_instruction = 0x880B84DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 888);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B84E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x88243cb0
	ctx.lr = 0x880B84E8;
	sub_88243CB0(ctx, base);
loc_880B84E8:
	// lwz r5,304(r1)
	ctx.current_instruction = 0x880B84E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880B84F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880B84F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,124(r1)
	ctx.current_instruction = 0x880B84FC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// lwz r11,280(r1)
	ctx.current_instruction = 0x880B8504;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880B850C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r7,140(r1)
	ctx.current_instruction = 0x880B8518;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r7,r1,584
	ctx.r7.s64 = ctx.r1.s64 + 584;
	// stw r4,132(r1)
	ctx.current_instruction = 0x880B8520;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x880B8524;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r4,r1,568
	ctx.r4.s64 = ctx.r1.s64 + 568;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B852C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880B8534;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,116(r1)
	ctx.current_instruction = 0x880B853C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwz r8,340(r1)
	ctx.current_instruction = 0x880B8540;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r4,108(r1)
	ctx.current_instruction = 0x880B8544;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// lwz r10,296(r1)
	ctx.current_instruction = 0x880B854C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r8,408(r1)
	ctx.current_instruction = 0x880B8550;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r7,268(r1)
	ctx.current_instruction = 0x880B8554;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880B8558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r29,2548(r31)
	ctx.current_instruction = 0x880B855C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lhzx r28,r25,r11
	ctx.current_instruction = 0x880B8560;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r28,568(r1)
	ctx.current_instruction = 0x880B8568;
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r28.u32);
	// lhzx r28,r25,r29
	ctx.current_instruction = 0x880B856C;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r29.u32);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// stw r28,584(r1)
	ctx.current_instruction = 0x880B8574;
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r28.u32);
	// lhzx r11,r20,r11
	ctx.current_instruction = 0x880B8578;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,572(r1)
	ctx.current_instruction = 0x880B8580;
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
	// lhzx r11,r20,r29
	ctx.current_instruction = 0x880B8584;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r29.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,588(r1)
	ctx.current_instruction = 0x880B858C;
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r11.u32);
	// bl 0x88081e50
	ctx.lr = 0x880B8594;
	sub_88081E50(ctx, base);
loc_880B8594:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B8594;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,1340(r1)
	ctx.current_instruction = 0x880B8598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1340);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b85b8
	if (!ctx.cr6.lt) goto loc_880B85B8;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r11,240(r1)
	ctx.current_instruction = 0x880B85AC;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x880B85B0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// b 0x880b85bc
	goto loc_880B85BC;
loc_880B85B8:
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_880B85BC:
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880B85BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,2544(r31)
	ctx.current_instruction = 0x880B85C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,240(r1)
	ctx.current_instruction = 0x880B85C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lhz r7,666(r1)
	ctx.current_instruction = 0x880B85C8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 666);
	// lhz r5,668(r1)
	ctx.current_instruction = 0x880B85CC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 668);
	// sth r9,394(r1)
	ctx.current_instruction = 0x880B85D0;
	REX_STORE_U16(ctx.r1.u32 + 394, ctx.r9.u16);
	// sthx r18,r11,r22
	ctx.current_instruction = 0x880B85D4;
	REX_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r18.u16);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B85D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r16,r9,r22
	ctx.current_instruction = 0x880B85DC;
	REX_STORE_U16(ctx.r9.u32 + ctx.r22.u32, ctx.r16.u16);
	// sth r8,402(r1)
	ctx.current_instruction = 0x880B85E0;
	REX_STORE_U16(ctx.r1.u32 + 402, ctx.r8.u16);
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B85E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhz r3,926(r1)
	ctx.current_instruction = 0x880B85E8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 926);
	// lhz r11,670(r1)
	ctx.current_instruction = 0x880B85EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 670);
	// sthx r14,r8,r25
	ctx.current_instruction = 0x880B85F0;
	REX_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r14.u16);
	// lwz r6,2548(r31)
	ctx.current_instruction = 0x880B85F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r7,r6,r25
	ctx.current_instruction = 0x880B85F8;
	REX_STORE_U16(ctx.r6.u32 + ctx.r25.u32, ctx.r7.u16);
	// lwz r4,2544(r31)
	ctx.current_instruction = 0x880B85FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r15,r4,r21
	ctx.current_instruction = 0x880B8600;
	REX_STORE_U16(ctx.r4.u32 + ctx.r21.u32, ctx.r15.u16);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B8604;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r5,r9,r21
	ctx.current_instruction = 0x880B8608;
	REX_STORE_U16(ctx.r9.u32 + ctx.r21.u32, ctx.r5.u16);
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B860C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r3,r8,r20
	ctx.current_instruction = 0x880B8610;
	REX_STORE_U16(ctx.r8.u32 + ctx.r20.u32, ctx.r3.u16);
	// lwz r7,2548(r31)
	ctx.current_instruction = 0x880B8614;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r11,r7,r20
	ctx.current_instruction = 0x880B8618;
	REX_STORE_U16(ctx.r7.u32 + ctx.r20.u32, ctx.r11.u16);
	// lwz r11,19232(r31)
	ctx.current_instruction = 0x880B861C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,428(r1)
	ctx.current_instruction = 0x880B8624;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r6.u32);
	// b 0x880b8864
	goto loc_880B8864;
loc_880B862C:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B862C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b8640
	if (!ctx.cr6.eq) goto loc_880B8640;
	// lwz r11,332(r1)
	ctx.current_instruction = 0x880B8638;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// b 0x880b8698
	goto loc_880B8698;
loc_880B8640:
	// addi r11,r1,520
	ctx.r11.s64 = ctx.r1.s64 + 520;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x880B8644;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// lwz r8,340(r1)
	ctx.current_instruction = 0x880B864C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880B8654;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r6,r1,488
	ctx.r6.s64 = ctx.r1.s64 + 488;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B865C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B8660;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,108(r1)
	ctx.current_instruction = 0x880B8668;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B8670;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B8678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,288(r1)
	ctx.current_instruction = 0x880B8680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880B8684;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.current_instruction = 0x880B8688;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.current_instruction = 0x880B868C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x88094e80
	ctx.lr = 0x880B8694;
	sub_88094E80(ctx, base);
loc_880B8694:
	// lwz r11,520(r1)
	ctx.current_instruction = 0x880B8694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
loc_880B8698:
	// lwz r10,780(r1)
	ctx.current_instruction = 0x880B8698;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r9,452(r1)
	ctx.current_instruction = 0x880B869C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// stw r30,520(r1)
	ctx.current_instruction = 0x880B86A8;
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// bne cr6,0x880b86b8
	if (!ctx.cr6.eq) goto loc_880B86B8;
	// lwz r11,344(r1)
	ctx.current_instruction = 0x880B86B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// b 0x880b8700
	goto loc_880B8700;
loc_880B86B8:
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// lwz r10,432(r1)
	ctx.current_instruction = 0x880B86BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// addi r8,r1,552
	ctx.r8.s64 = ctx.r1.s64 + 552;
	// lwz r9,452(r1)
	ctx.current_instruction = 0x880B86C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880B86CC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,1056
	ctx.r6.s64 = ctx.r1.s64 + 1056;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880B86D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B86D8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B86E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880B86E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.current_instruction = 0x880B86E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.current_instruction = 0x880B86EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B86F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,340(r1)
	ctx.current_instruction = 0x880B86F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x88094e80
	ctx.lr = 0x880B86FC;
	sub_88094E80(ctx, base);
loc_880B86FC:
	// lwz r11,552(r1)
	ctx.current_instruction = 0x880B86FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
loc_880B8700:
	// lwz r10,632(r1)
	ctx.current_instruction = 0x880B8700;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,552(r1)
	ctx.current_instruction = 0x880B8708;
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b872c
	if (!ctx.cr6.lt) goto loc_880B872C;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880B8714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880B871C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// sth r11,392(r1)
	ctx.current_instruction = 0x880B8720;
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r11.u16);
	// sth r10,400(r1)
	ctx.current_instruction = 0x880B8724;
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r10.u16);
	// b 0x880b8740
	goto loc_880B8740;
loc_880B872C:
	// lwz r10,452(r1)
	ctx.current_instruction = 0x880B872C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r9,432(r1)
	ctx.current_instruction = 0x880B8734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// sth r10,392(r1)
	ctx.current_instruction = 0x880B8738;
	REX_STORE_U16(ctx.r1.u32 + 392, ctx.r10.u16);
	// sth r9,400(r1)
	ctx.current_instruction = 0x880B873C;
	REX_STORE_U16(ctx.r1.u32 + 400, ctx.r9.u16);
loc_880B8740:
	// lwz r11,528(r1)
	ctx.current_instruction = 0x880B8740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x880b8754
	if (!ctx.cr6.eq) goto loc_880B8754;
	// lwz r11,412(r1)
	ctx.current_instruction = 0x880B874C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// b 0x880b87b0
	goto loc_880B87B0;
loc_880B8754:
	// addi r10,r1,488
	ctx.r10.s64 = ctx.r1.s64 + 488;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x880B8758;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r9,r1,520
	ctx.r9.s64 = ctx.r1.s64 + 520;
	// lwz r8,340(r1)
	ctx.current_instruction = 0x880B8760;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,1248
	ctx.r7.s64 = ctx.r1.s64 + 1248;
	// stw r10,108(r1)
	ctx.current_instruction = 0x880B8768;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880B8770;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x880B8774;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r30,92(r1)
	ctx.current_instruction = 0x880B877C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r8,136
	ctx.r4.s64 = ctx.r8.s64 + 136;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B8784;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,440(r1)
	ctx.current_instruction = 0x880B8790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r9,528(r1)
	ctx.current_instruction = 0x880B8798;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880B879C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.current_instruction = 0x880B87A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.current_instruction = 0x880B87A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x88094e80
	ctx.lr = 0x880B87AC;
	sub_88094E80(ctx, base);
loc_880B87AC:
	// lwz r11,520(r1)
	ctx.current_instruction = 0x880B87AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
loc_880B87B0:
	// lwz r10,744(r1)
	ctx.current_instruction = 0x880B87B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r9,684(r1)
	ctx.current_instruction = 0x880B87B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// stw r30,520(r1)
	ctx.current_instruction = 0x880B87C0;
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// bne cr6,0x880b87d0
	if (!ctx.cr6.eq) goto loc_880B87D0;
	// lwz r11,384(r1)
	ctx.current_instruction = 0x880B87C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// b 0x880b8820
	goto loc_880B8820;
loc_880B87D0:
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// lwz r10,280(r1)
	ctx.current_instruction = 0x880B87D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r9,r1,552
	ctx.r9.s64 = ctx.r1.s64 + 552;
	// lwz r8,340(r1)
	ctx.current_instruction = 0x880B87DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880B87E4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,1248
	ctx.r6.s64 = ctx.r1.s64 + 1248;
	// stw r9,100(r1)
	ctx.current_instruction = 0x880B87EC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x880B87F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880B87F8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,416(r1)
	ctx.current_instruction = 0x880B8804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r9,684(r1)
	ctx.current_instruction = 0x880B8808;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880B880C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r7,408(r1)
	ctx.current_instruction = 0x880B8810;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r6,268(r1)
	ctx.current_instruction = 0x880B8814;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x88094e80
	ctx.lr = 0x880B881C;
	sub_88094E80(ctx, base);
loc_880B881C:
	// lwz r11,552(r1)
	ctx.current_instruction = 0x880B881C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
loc_880B8820:
	// lwz r10,476(r1)
	ctx.current_instruction = 0x880B8820;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,552(r1)
	ctx.current_instruction = 0x880B8828;
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b8844
	if (!ctx.cr6.lt) goto loc_880B8844;
	// lwz r10,528(r1)
	ctx.current_instruction = 0x880B8834;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r9,440(r1)
	ctx.current_instruction = 0x880B883C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// b 0x880b8850
	goto loc_880B8850;
loc_880B8844:
	// lwz r10,684(r1)
	ctx.current_instruction = 0x880B8844;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,416(r1)
	ctx.current_instruction = 0x880B884C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
loc_880B8850:
	// sth r10,394(r1)
	ctx.current_instruction = 0x880B8850;
	REX_STORE_U16(ctx.r1.u32 + 394, ctx.r10.u16);
	// lwz r10,19232(r31)
	ctx.current_instruction = 0x880B8854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// sth r9,402(r1)
	ctx.current_instruction = 0x880B8858;
	REX_STORE_U16(ctx.r1.u32 + 402, ctx.r9.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,428(r1)
	ctx.current_instruction = 0x880B8860;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
loc_880B8864:
	// lwz r16,268(r1)
	ctx.current_instruction = 0x880B8864;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r17,340(r1)
	ctx.current_instruction = 0x880B8868;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r15,408(r1)
	ctx.current_instruction = 0x880B886C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r14,316(r1)
	ctx.current_instruction = 0x880B8870;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_880B8874:
	// lwz r21,484(r1)
	ctx.current_instruction = 0x880B8874;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r6,r14,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r19,256(r1)
	ctx.current_instruction = 0x880B8880;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r20,272(r1)
	ctx.current_instruction = 0x880B8888;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r5,r15,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r18,284(r1)
	ctx.current_instruction = 0x880B8890;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// lwz r8,2548(r31)
	ctx.current_instruction = 0x880B8898;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// stw r21,84(r1)
	ctx.current_instruction = 0x880B889C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,2544(r31)
	ctx.current_instruction = 0x880B88A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// bl 0x88243cb0
	ctx.lr = 0x880B88AC;
	sub_88243CB0(ctx, base);
loc_880B88AC:
	// lwz r11,28040(r31)
	ctx.current_instruction = 0x880B88AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b932c
	if (ctx.cr6.eq) goto loc_880B932C;
	// lwz r11,472(r1)
	ctx.current_instruction = 0x880B88B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b932c
	if (ctx.cr6.eq) goto loc_880B932C;
	// lwz r23,288(r1)
	ctx.current_instruction = 0x880B88C4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r22,276(r1)
	ctx.current_instruction = 0x880B88C8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16384, ctx.xer);
	// stw r23,696(r1)
	ctx.current_instruction = 0x880B88D0;
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r23.u32);
	// stw r23,244(r1)
	ctx.current_instruction = 0x880B88D4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r22,720(r1)
	ctx.current_instruction = 0x880B88D8;
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r22.u32);
	// stw r22,240(r1)
	ctx.current_instruction = 0x880B88DC;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// bne cr6,0x880b88f4
	if (!ctx.cr6.eq) goto loc_880B88F4;
	// lwz r26,328(r1)
	ctx.current_instruction = 0x880B88E4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B88E8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r24,264(r1)
	ctx.current_instruction = 0x880B88EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// b 0x880b8de8
	goto loc_880B8DE8;
loc_880B88F4:
	// lwz r11,928(r1)
	ctx.current_instruction = 0x880B88F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8c20
	if (ctx.cr6.eq) goto loc_880B8C20;
	// lwz r11,948(r1)
	ctx.current_instruction = 0x880B8900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 948);
	// lwz r10,944(r1)
	ctx.current_instruction = 0x880B8904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 944);
	// lwz r9,940(r1)
	ctx.current_instruction = 0x880B8908;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// lwz r8,936(r1)
	ctx.current_instruction = 0x880B8910;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r28,r9,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b8ac0
	if (!ctx.cr6.lt) goto loc_880B8AC0;
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B8960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8a7c
	if (ctx.cr6.eq) goto loc_880B8A7C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8998
	if (!ctx.cr6.eq) goto loc_880B8998;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8998
	if (!ctx.cr6.eq) goto loc_880B8998;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8998
	if (!ctx.cr6.eq) goto loc_880B8998;
	// lwz r30,252(r1)
	ctx.current_instruction = 0x880B8984;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880b899c
	if (!ctx.cr6.eq) goto loc_880B899C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x880b89b8
	goto loc_880B89B8;
loc_880B8998:
	// lwz r30,252(r1)
	ctx.current_instruction = 0x880B8998;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B899C:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b89d8
	if (!ctx.cr6.eq) goto loc_880B89D8;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b89d8
	if (!ctx.cr6.eq) goto loc_880B89D8;
	// cmpw cr6,r19,r30
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880b89d8
	if (!ctx.cr6.eq) goto loc_880B89D8;
loc_880B89B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B89D0;
	sub_88085E60(ctx, base);
loc_880B89D0:
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8a48
	goto loc_880B8A48;
loc_880B89D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B89F0;
	sub_88085E60(ctx, base);
loc_880B89F0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A0C;
	sub_88085E60(ctx, base);
loc_880B8A0C:
	// add r30,r26,r3
	ctx.r30.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A28;
	sub_88085E60(ctx, base);
loc_880B8A28:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A44;
	sub_88085E60(ctx, base);
loc_880B8A44:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B8A48:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8A60;
	sub_88085E60(ctx, base);
loc_880B8A60:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B8A60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B8A68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8A6C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x880b8de0
	goto loc_880B8DE0;
loc_880B8A7C:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8A8C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.current_instruction = 0x880B8AA0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.current_instruction = 0x880B8AA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880B8AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880B8AB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b8dd4
	goto loc_880B8DD4;
loc_880B8AC0:
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B8AC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b8bdc
	if (ctx.cr6.eq) goto loc_880B8BDC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8af8
	if (!ctx.cr6.eq) goto loc_880B8AF8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8af8
	if (!ctx.cr6.eq) goto loc_880B8AF8;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8af8
	if (!ctx.cr6.eq) goto loc_880B8AF8;
	// lwz r28,252(r1)
	ctx.current_instruction = 0x880B8AE4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b8afc
	if (!ctx.cr6.eq) goto loc_880B8AFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b8b18
	goto loc_880B8B18;
loc_880B8AF8:
	// lwz r28,252(r1)
	ctx.current_instruction = 0x880B8AF8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B8AFC:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b8b38
	if (!ctx.cr6.eq) goto loc_880B8B38;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b8b38
	if (!ctx.cr6.eq) goto loc_880B8B38;
	// cmpw cr6,r19,r28
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880b8b38
	if (!ctx.cr6.eq) goto loc_880B8B38;
loc_880B8B18:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B30;
	sub_88085E60(ctx, base);
loc_880B8B30:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8ba8
	goto loc_880B8BA8;
loc_880B8B38:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B50;
	sub_88085E60(ctx, base);
loc_880B8B50:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B6C;
	sub_88085E60(ctx, base);
loc_880B8B6C:
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8B88;
	sub_88085E60(ctx, base);
loc_880B8B88:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8BA4;
	sub_88085E60(ctx, base);
loc_880B8BA4:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8BA8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8BC0;
	sub_88085E60(ctx, base);
loc_880B8BC0:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B8BC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B8BC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8BCC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x880b8de0
	goto loc_880B8DE0;
loc_880B8BDC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8BEC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.current_instruction = 0x880B8C00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.current_instruction = 0x880B8C04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880B8C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880B8C14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b8dd4
	goto loc_880B8DD4;
loc_880B8C20:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B8C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8d5c
	if (ctx.cr6.eq) goto loc_880B8D5C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B8C44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b8c58
	if (!ctx.cr6.eq) goto loc_880B8C58;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b8c78
	goto loc_880B8C78;
loc_880B8C58:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b8ca8
	if (!ctx.cr6.eq) goto loc_880B8CA8;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b8ca8
	if (!ctx.cr6.eq) goto loc_880B8CA8;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B8C6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b8ca8
	if (!ctx.cr6.eq) goto loc_880B8CA8;
loc_880B8C78:
	// lwz r11,940(r1)
	ctx.current_instruction = 0x880B8C78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,936(r1)
	ctx.current_instruction = 0x880B8C80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8CA0;
	sub_88085E60(ctx, base);
loc_880B8CA0:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8d28
	goto loc_880B8D28;
loc_880B8CA8:
	// lwz r11,940(r1)
	ctx.current_instruction = 0x880B8CA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,936(r1)
	ctx.current_instruction = 0x880B8CB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8CD0;
	sub_88085E60(ctx, base);
loc_880B8CD0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B8CD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8CEC;
	sub_88085E60(ctx, base);
loc_880B8CEC:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8D08;
	sub_88085E60(ctx, base);
loc_880B8D08:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8D24;
	sub_88085E60(ctx, base);
loc_880B8D24:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B8D28:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8D40;
	sub_88085E60(ctx, base);
loc_880B8D40:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B8D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B8D48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8D4C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x880b8de0
	goto loc_880B8DE0;
loc_880B8D5C:
	// lwz r11,936(r1)
	ctx.current_instruction = 0x880B8D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r10,940(r1)
	ctx.current_instruction = 0x880B8D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// subf r9,r11,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r8,r10,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r10.u64;
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
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b8dc8
	if (ctx.cr6.gt) goto loc_880B8DC8;
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8D94;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.current_instruction = 0x880B8DA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.current_instruction = 0x880B8DAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.current_instruction = 0x880B8DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.current_instruction = 0x880B8DBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b8dd4
	goto loc_880B8DD4;
loc_880B8DC8:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x880B8DC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r25,260(r1)
	ctx.current_instruction = 0x880B8DCC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B8DD4:
	// lwz r10,19232(r31)
	ctx.current_instruction = 0x880B8DD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_880B8DE0:
	// lwz r24,264(r1)
	ctx.current_instruction = 0x880B8DE0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r26,r11,r24
	ctx.r26.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_880B8DE8:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880B8DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// stw r26,320(r1)
	ctx.current_instruction = 0x880B8DEC;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b9600
	if (ctx.cr6.eq) goto loc_880B9600;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880B8DFC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7536(r31)
	ctx.current_instruction = 0x880B8E08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7532(r31)
	ctx.current_instruction = 0x880B8E10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B8E24;
	sub_88243CB0(ctx, base);
loc_880B8E24:
	// cmpwi cr6,r23,16384
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 16384, ctx.xer);
	// bne cr6,0x880b8e38
	if (!ctx.cr6.eq) goto loc_880B8E38;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880B8E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// stw r11,448(r1)
	ctx.current_instruction = 0x880B8E30;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B8E38:
	// lwz r11,784(r1)
	ctx.current_instruction = 0x880B8E38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9164
	if (ctx.cr6.eq) goto loc_880B9164;
	// lwz r11,804(r1)
	ctx.current_instruction = 0x880B8E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,800(r1)
	ctx.current_instruction = 0x880B8E48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,796(r1)
	ctx.current_instruction = 0x880B8E4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// lwz r8,792(r1)
	ctx.current_instruction = 0x880B8E54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r28,r9,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b9004
	if (!ctx.cr6.lt) goto loc_880B9004;
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B8EA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b8fc4
	if (ctx.cr6.eq) goto loc_880B8FC4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b8edc
	if (!ctx.cr6.eq) goto loc_880B8EDC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b8edc
	if (!ctx.cr6.eq) goto loc_880B8EDC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b8edc
	if (!ctx.cr6.eq) goto loc_880B8EDC;
	// lwz r30,252(r1)
	ctx.current_instruction = 0x880B8EC8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880b8ee0
	if (!ctx.cr6.eq) goto loc_880B8EE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x880b8efc
	goto loc_880B8EFC;
loc_880B8EDC:
	// lwz r30,252(r1)
	ctx.current_instruction = 0x880B8EDC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B8EE0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b8f1c
	if (!ctx.cr6.eq) goto loc_880B8F1C;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b8f1c
	if (!ctx.cr6.eq) goto loc_880B8F1C;
	// cmpw cr6,r19,r30
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880b8f1c
	if (!ctx.cr6.eq) goto loc_880B8F1C;
loc_880B8EFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F14;
	sub_88085E60(ctx, base);
loc_880B8F14:
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b8f8c
	goto loc_880B8F8C;
loc_880B8F1C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F34;
	sub_88085E60(ctx, base);
loc_880B8F34:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F50;
	sub_88085E60(ctx, base);
loc_880B8F50:
	// add r30,r25,r3
	ctx.r30.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F6C;
	sub_88085E60(ctx, base);
loc_880B8F6C:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8F88;
	sub_88085E60(ctx, base);
loc_880B8F88:
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_880B8F8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B8FA4;
	sub_88085E60(ctx, base);
loc_880B8FA4:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B8FA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B8FAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r7,448(r1)
	ctx.current_instruction = 0x880B8FBC;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B8FC4:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.current_instruction = 0x880B8FE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.current_instruction = 0x880B8FE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880B8FF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880B8FF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b9314
	goto loc_880B9314;
loc_880B9004:
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B9004;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b9124
	if (ctx.cr6.eq) goto loc_880B9124;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b903c
	if (!ctx.cr6.eq) goto loc_880B903C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b903c
	if (!ctx.cr6.eq) goto loc_880B903C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b903c
	if (!ctx.cr6.eq) goto loc_880B903C;
	// lwz r28,252(r1)
	ctx.current_instruction = 0x880B9028;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b9040
	if (!ctx.cr6.eq) goto loc_880B9040;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b905c
	goto loc_880B905C;
loc_880B903C:
	// lwz r28,252(r1)
	ctx.current_instruction = 0x880B903C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
loc_880B9040:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b907c
	if (!ctx.cr6.eq) goto loc_880B907C;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b907c
	if (!ctx.cr6.eq) goto loc_880B907C;
	// cmpw cr6,r19,r28
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880b907c
	if (!ctx.cr6.eq) goto loc_880B907C;
loc_880B905C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9074;
	sub_88085E60(ctx, base);
loc_880B9074:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b90ec
	goto loc_880B90EC;
loc_880B907C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9094;
	sub_88085E60(ctx, base);
loc_880B9094:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B90B0;
	sub_88085E60(ctx, base);
loc_880B90B0:
	// add r28,r25,r3
	ctx.r28.u64 = ctx.r25.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B90CC;
	sub_88085E60(ctx, base);
loc_880B90CC:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B90E8;
	sub_88085E60(ctx, base);
loc_880B90E8:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B90EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9104;
	sub_88085E60(ctx, base);
loc_880B9104:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B9104;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B910C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r7,448(r1)
	ctx.current_instruction = 0x880B911C;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B9124:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.current_instruction = 0x880B9144;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.current_instruction = 0x880B9148;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880B9154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880B9158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b9314
	goto loc_880B9314;
loc_880B9164:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B9164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b92a4
	if (ctx.cr6.eq) goto loc_880B92A4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B9188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b919c
	if (!ctx.cr6.eq) goto loc_880B919C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x880b91bc
	goto loc_880B91BC;
loc_880B919C:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpw cr6,r18,r20
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x880b91ec
	if (!ctx.cr6.eq) goto loc_880B91EC;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x880b91ec
	if (!ctx.cr6.eq) goto loc_880B91EC;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B91B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b91ec
	if (!ctx.cr6.eq) goto loc_880B91EC;
loc_880B91BC:
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880B91BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.current_instruction = 0x880B91C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B91E4;
	sub_88085E60(ctx, base);
loc_880B91E4:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b926c
	goto loc_880B926C;
loc_880B91EC:
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880B91EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.current_instruction = 0x880B91F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
	// subf r29,r10,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9214;
	sub_88085E60(ctx, base);
loc_880B9214:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B921C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9230;
	sub_88085E60(ctx, base);
loc_880B9230:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B924C;
	sub_88085E60(ctx, base);
loc_880B924C:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9268;
	sub_88085E60(ctx, base);
loc_880B9268:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880B926C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9284;
	sub_88085E60(ctx, base);
loc_880B9284:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B9284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B928C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r7,448(r1)
	ctx.current_instruction = 0x880B929C;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r7.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B92A4:
	// lwz r11,792(r1)
	ctx.current_instruction = 0x880B92A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r10,796(r1)
	ctx.current_instruction = 0x880B92A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r9,r11,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r8,r10,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r10.u64;
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
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880b930c
	if (ctx.cr6.gt) goto loc_880B930C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r25
	ctx.current_instruction = 0x880B92EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r6,r10,r25
	ctx.current_instruction = 0x880B92F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.current_instruction = 0x880B92FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.current_instruction = 0x880B9300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880b9314
	goto loc_880B9314;
loc_880B930C:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x880B930C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880B9314:
	// lwz r10,19232(r31)
	ctx.current_instruction = 0x880B9314;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r8,448(r1)
	ctx.current_instruction = 0x880B9324;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// b 0x880b9600
	goto loc_880B9600;
loc_880B932C:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880B932C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b94c4
	if (ctx.cr6.eq) goto loc_880B94C4;
	// stw r21,84(r1)
	ctx.current_instruction = 0x880B933C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7536(r31)
	ctx.current_instruction = 0x880B9348;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7532(r31)
	ctx.current_instruction = 0x880B9350;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B9364;
	sub_88243CB0(ctx, base);
loc_880B9364:
	// lwz r11,148(r16)
	ctx.current_instruction = 0x880B9364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// lwz r9,312(r1)
	ctx.current_instruction = 0x880B9368;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880B9374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,292(r1)
	ctx.current_instruction = 0x880B9378;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// beq cr6,0x880b9430
	if (ctx.cr6.eq) goto loc_880B9430;
	// stw r11,180(r1)
	ctx.current_instruction = 0x880B9384;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r10,228(r1)
	ctx.current_instruction = 0x880B938C;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// lwz r5,304(r1)
	ctx.current_instruction = 0x880B9398;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r3,296(r1)
	ctx.current_instruction = 0x880B939C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r9,156(r1)
	ctx.current_instruction = 0x880B93A0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,220(r1)
	ctx.current_instruction = 0x880B93A4;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r7,148(r1)
	ctx.current_instruction = 0x880B93A8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r5,132(r1)
	ctx.current_instruction = 0x880B93AC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r3,124(r1)
	ctx.current_instruction = 0x880B93B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r15,108(r1)
	ctx.current_instruction = 0x880B93B4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x880B93BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stw r16,100(r1)
	ctx.current_instruction = 0x880B93C4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r8,r1,784
	ctx.r8.s64 = ctx.r1.s64 + 784;
	// stw r14,116(r1)
	ctx.current_instruction = 0x880B93CC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r29,r1,696
	ctx.r29.s64 = ctx.r1.s64 + 696;
	// stw r9,164(r1)
	ctx.current_instruction = 0x880B93D4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// addi r28,r1,608
	ctx.r28.s64 = ctx.r1.s64 + 608;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B93DC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r27,r1,928
	ctx.r27.s64 = ctx.r1.s64 + 928;
	// stw r29,188(r1)
	ctx.current_instruction = 0x880B93E4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r28,172(r1)
	ctx.current_instruction = 0x880B93E8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// stw r27,92(r1)
	ctx.current_instruction = 0x880B93F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B93F8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r30,r1,720
	ctx.r30.s64 = ctx.r1.s64 + 720;
	// stw r4,204(r1)
	ctx.current_instruction = 0x880B9400;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,212(r1)
	ctx.current_instruction = 0x880B940C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lwz r9,468(r1)
	ctx.current_instruction = 0x880B9410;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.current_instruction = 0x880B9414;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880B9418;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.current_instruction = 0x880B941C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,436(r1)
	ctx.current_instruction = 0x880B9420;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r30,196(r1)
	ctx.current_instruction = 0x880B9424;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// bl 0x880b4e40
	ctx.lr = 0x880B942C;
	sub_880B4E40(ctx, base);
loc_880B942C:
	// b 0x880b95fc
	goto loc_880B95FC;
loc_880B9430:
	// lwz r30,304(r1)
	ctx.current_instruction = 0x880B9430;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r28,296(r1)
	ctx.current_instruction = 0x880B9438;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r29,r1,720
	ctx.r29.s64 = ctx.r1.s64 + 720;
	// stw r11,148(r1)
	ctx.current_instruction = 0x880B9444;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r27,r1,696
	ctx.r27.s64 = ctx.r1.s64 + 696;
	// stw r9,124(r1)
	ctx.current_instruction = 0x880B944C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r26,r1,608
	ctx.r26.s64 = ctx.r1.s64 + 608;
	// stw r10,196(r1)
	ctx.current_instruction = 0x880B9454;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r8,188(r1)
	ctx.current_instruction = 0x880B9458;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r5,180(r1)
	ctx.current_instruction = 0x880B9460;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r3,172(r1)
	ctx.current_instruction = 0x880B9468;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r7,116(r1)
	ctx.current_instruction = 0x880B9470;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r29,164(r1)
	ctx.current_instruction = 0x880B9474;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r27,156(r1)
	ctx.current_instruction = 0x880B9478;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// stw r26,140(r1)
	ctx.current_instruction = 0x880B947C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stw r30,100(r1)
	ctx.current_instruction = 0x880B9480;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x880B9484;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r14,84(r1)
	ctx.current_instruction = 0x880B9488;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880B948C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r25,r1,352
	ctx.r25.s64 = ctx.r1.s64 + 352;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B9498;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r25,132(r1)
	ctx.current_instruction = 0x880B94A0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// stw r4,108(r1)
	ctx.current_instruction = 0x880B94AC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3bf0
	ctx.lr = 0x880B94C0;
	sub_880B3BF0(ctx, base);
loc_880B94C0:
	// b 0x880b95fc
	goto loc_880B95FC;
loc_880B94C4:
	// lwz r11,148(r16)
	ctx.current_instruction = 0x880B94C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lwz r9,312(r1)
	ctx.current_instruction = 0x880B94CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880B94D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,292(r1)
	ctx.current_instruction = 0x880B94DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// beq cr6,0x880b9580
	if (ctx.cr6.eq) goto loc_880B9580;
	// lwz r3,304(r1)
	ctx.current_instruction = 0x880B94EC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwz r29,296(r1)
	ctx.current_instruction = 0x880B94F4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// stw r11,188(r1)
	ctx.current_instruction = 0x880B9500;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r28,r1,928
	ctx.r28.s64 = ctx.r1.s64 + 928;
	// stw r10,212(r1)
	ctx.current_instruction = 0x880B9508;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,148(r1)
	ctx.current_instruction = 0x880B950C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r8,204(r1)
	ctx.current_instruction = 0x880B9514;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// stw r6,196(r1)
	ctx.current_instruction = 0x880B951C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r4,180(r1)
	ctx.current_instruction = 0x880B9524;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// stw r7,140(r1)
	ctx.current_instruction = 0x880B9528;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r3,124(r1)
	ctx.current_instruction = 0x880B952C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r30,172(r1)
	ctx.current_instruction = 0x880B9530;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r27,164(r1)
	ctx.current_instruction = 0x880B9534;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r26,156(r1)
	ctx.current_instruction = 0x880B9538;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r29,116(r1)
	ctx.current_instruction = 0x880B953C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r14,108(r1)
	ctx.current_instruction = 0x880B9540;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r15,100(r1)
	ctx.current_instruction = 0x880B9548;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r16,92(r1)
	ctx.current_instruction = 0x880B9550;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B9558;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r5,308(r1)
	ctx.current_instruction = 0x880B955C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,468(r1)
	ctx.current_instruction = 0x880B9560;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.current_instruction = 0x880B9564;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880B9568;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.current_instruction = 0x880B956C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// stw r5,132(r1)
	ctx.current_instruction = 0x880B9570;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,436(r1)
	ctx.current_instruction = 0x880B9574;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x880b43d8
	ctx.lr = 0x880B957C;
	sub_880B43D8(ctx, base);
loc_880B957C:
	// b 0x880b95fc
	goto loc_880B95FC;
loc_880B9580:
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880B9580;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r30,304(r1)
	ctx.current_instruction = 0x880B9588;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r28,296(r1)
	ctx.current_instruction = 0x880B9590;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880B9598;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r9,116(r1)
	ctx.current_instruction = 0x880B95A0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r10,180(r1)
	ctx.current_instruction = 0x880B95A8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r8,172(r1)
	ctx.current_instruction = 0x880B95B0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r5,164(r1)
	ctx.current_instruction = 0x880B95B4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// stw r3,148(r1)
	ctx.current_instruction = 0x880B95B8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r7,108(r1)
	ctx.current_instruction = 0x880B95BC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r4,100(r1)
	ctx.current_instruction = 0x880B95C0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r29,140(r1)
	ctx.current_instruction = 0x880B95C4;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r27,132(r1)
	ctx.current_instruction = 0x880B95C8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r26,124(r1)
	ctx.current_instruction = 0x880B95CC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x880B95D4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B95DC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880B95E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3028
	ctx.lr = 0x880B95FC;
	sub_880B3028(ctx, base);
loc_880B95FC:
	// lwz r26,320(r1)
	ctx.current_instruction = 0x880B95FC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
loc_880B9600:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880B9600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b9678
	if (ctx.cr6.eq) goto loc_880B9678;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880B9610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,448(r1)
	ctx.current_instruction = 0x880B9614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b964c
	if (!ctx.cr6.lt) goto loc_880B964C;
	// lwz r10,380(r1)
	ctx.current_instruction = 0x880B9620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,560(r1)
	ctx.current_instruction = 0x880B9624;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r8,7532(r31)
	ctx.current_instruction = 0x880B9628;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r6,560(r1)
	ctx.current_instruction = 0x880B9638;
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r6.u32);
	// sthx r11,r8,r7
	ctx.current_instruction = 0x880B963C;
	REX_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r5,7536(r31)
	ctx.current_instruction = 0x880B9640;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// sthx r11,r5,r7
	ctx.current_instruction = 0x880B9644;
	REX_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u16);
	// b 0x880b9678
	goto loc_880B9678;
loc_880B964C:
	// lwz r11,380(r1)
	ctx.current_instruction = 0x880B964C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r9,7532(r31)
	ctx.current_instruction = 0x880B9650;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// lwz r8,696(r1)
	ctx.current_instruction = 0x880B9654;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 696);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,560(r1)
	ctx.current_instruction = 0x880B965C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r4,720(r1)
	ctx.current_instruction = 0x880B9660;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 720);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sthx r8,r9,r7
	ctx.current_instruction = 0x880B9668;
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u16);
	// stw r3,560(r1)
	ctx.current_instruction = 0x880B966C;
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// lwz r10,7536(r31)
	ctx.current_instruction = 0x880B9670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// sthx r4,r10,r7
	ctx.current_instruction = 0x880B9674;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u16);
loc_880B9678:
	// lwz r9,264(r1)
	ctx.current_instruction = 0x880B9678;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,768(r1)
	ctx.current_instruction = 0x880B9680;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 768);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b984c
	if (ctx.cr6.eq) goto loc_880B984C;
	// lwz r11,21092(r31)
	ctx.current_instruction = 0x880B9694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21092);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b96e0
	if (ctx.cr6.eq) goto loc_880B96E0;
	// lwz r11,424(r1)
	ctx.current_instruction = 0x880B96A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r8,428(r1)
	ctx.current_instruction = 0x880B96AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880b96bc
	if (!ctx.cr6.lt) goto loc_880B96BC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_880B96BC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,424
	ctx.r8.s64 = ctx.r1.s64 + 424;
	// lwzx r11,r11,r8
	ctx.current_instruction = 0x880B96C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880b96dc
	if (!ctx.cr6.lt) goto loc_880B96DC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,264(r1)
	ctx.current_instruction = 0x880B96D4;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// b 0x880b96e0
	goto loc_880B96E0;
loc_880B96DC:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_880B96E0:
	// lwz r11,456(r1)
	ctx.current_instruction = 0x880B96E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r19,380(r1)
	ctx.current_instruction = 0x880B96E4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x880b9734
	if (!ctx.cr6.eq) goto loc_880B9734;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880B96F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b9818
	if (!ctx.cr6.lt) goto loc_880B9818;
	// lwz r9,6792(r31)
	ctx.current_instruction = 0x880B96FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,388(r1)
	ctx.current_instruction = 0x880B9704;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,300(r1)
	ctx.current_instruction = 0x880B9708;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r5,680(r1)
	ctx.current_instruction = 0x880B970C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// lwz r3,672(r1)
	ctx.current_instruction = 0x880B9714;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r8,r9,r19
	ctx.current_instruction = 0x880B971C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r8.u8);
	// stw r4,388(r1)
	ctx.current_instruction = 0x880B9720;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// stw r11,300(r1)
	ctx.current_instruction = 0x880B9724;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r5,348(r1)
	ctx.current_instruction = 0x880B9728;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r3,404(r1)
	ctx.current_instruction = 0x880B972C;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B9734:
	// lwz r8,328(r1)
	ctx.current_instruction = 0x880B9734;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b97c4
	if (!ctx.cr6.lt) goto loc_880B97C4;
	// lwz r7,388(r1)
	ctx.current_instruction = 0x880B9740;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lwz r6,300(r1)
	ctx.current_instruction = 0x880B9748;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// bge cr6,0x880b9780
	if (!ctx.cr6.lt) goto loc_880B9780;
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880B9750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r5,680(r1)
	ctx.current_instruction = 0x880B9758;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// lwz r3,672(r1)
	ctx.current_instruction = 0x880B9760;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r4,388(r1)
	ctx.current_instruction = 0x880B9768;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// stw r8,300(r1)
	ctx.current_instruction = 0x880B976C;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// stbx r9,r11,r19
	ctx.current_instruction = 0x880B9770;
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// stw r5,348(r1)
	ctx.current_instruction = 0x880B9774;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r3,404(r1)
	ctx.current_instruction = 0x880B9778;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B9780:
	// lwz r8,6792(r31)
	ctx.current_instruction = 0x880B9780;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,388(r1)
	ctx.current_instruction = 0x880B978C;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// stw r4,300(r1)
	ctx.current_instruction = 0x880B9790;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stbx r22,r8,r19
	ctx.current_instruction = 0x880B9794;
	REX_STORE_U8(ctx.r8.u32 + ctx.r19.u32, ctx.r22.u8);
	// stw r21,404(r1)
	ctx.current_instruction = 0x880B9798;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	ctx.current_instruction = 0x880B979C;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r3,28044(r31)
	ctx.current_instruction = 0x880B97A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// lwz r11,464(r1)
	ctx.current_instruction = 0x880B97AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// stw r21,492(r1)
	ctx.current_instruction = 0x880B97B8;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	ctx.current_instruction = 0x880B97BC;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B97C4:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b9818
	if (!ctx.cr6.lt) goto loc_880B9818;
	// lwz r8,6792(r31)
	ctx.current_instruction = 0x880B97CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r7,388(r1)
	ctx.current_instruction = 0x880B97D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,300(r1)
	ctx.current_instruction = 0x880B97D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stbx r22,r8,r19
	ctx.current_instruction = 0x880B97E0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r19.u32, ctx.r22.u8);
	// stw r5,388(r1)
	ctx.current_instruction = 0x880B97E4;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// stw r4,300(r1)
	ctx.current_instruction = 0x880B97E8;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stw r21,404(r1)
	ctx.current_instruction = 0x880B97EC;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	ctx.current_instruction = 0x880B97F0;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r3,28044(r31)
	ctx.current_instruction = 0x880B97F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// lwz r11,464(r1)
	ctx.current_instruction = 0x880B9800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// stw r21,492(r1)
	ctx.current_instruction = 0x880B980C;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	ctx.current_instruction = 0x880B9810;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B9818:
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880B9818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r9,300(r1)
	ctx.current_instruction = 0x880B981C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r8,r26,r9
	ctx.r8.u64 = ctx.r26.u64 + ctx.r9.u64;
	// stbx r21,r11,r19
	ctx.current_instruction = 0x880B9824;
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r21.u8);
	// stw r8,300(r1)
	ctx.current_instruction = 0x880B9828;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// stw r21,404(r1)
	ctx.current_instruction = 0x880B982C;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	ctx.current_instruction = 0x880B9830;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r7,28044(r31)
	ctx.current_instruction = 0x880B9834;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880b98c8
	if (ctx.cr6.eq) goto loc_880B98C8;
	// stw r21,492(r1)
	ctx.current_instruction = 0x880B9840;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	ctx.current_instruction = 0x880B9844;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
	// b 0x880b98c8
	goto loc_880B98C8;
loc_880B984C:
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880B984C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r19,380(r1)
	ctx.current_instruction = 0x880B9850;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880b9894
	if (!ctx.cr6.lt) goto loc_880B9894;
	// lwz r9,6792(r31)
	ctx.current_instruction = 0x880B985C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,388(r1)
	ctx.current_instruction = 0x880B9864;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,300(r1)
	ctx.current_instruction = 0x880B9868;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r5,680(r1)
	ctx.current_instruction = 0x880B986C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// lwz r3,672(r1)
	ctx.current_instruction = 0x880B9874;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r8,r9,r19
	ctx.current_instruction = 0x880B987C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r8.u8);
	// stw r4,388(r1)
	ctx.current_instruction = 0x880B9880;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// stw r11,300(r1)
	ctx.current_instruction = 0x880B9884;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r5,348(r1)
	ctx.current_instruction = 0x880B9888;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r3,404(r1)
	ctx.current_instruction = 0x880B988C;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// b 0x880b98c4
	goto loc_880B98C4;
loc_880B9894:
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880B9894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r9,300(r1)
	ctx.current_instruction = 0x880B9898;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r8,r26,r9
	ctx.r8.u64 = ctx.r26.u64 + ctx.r9.u64;
	// stbx r21,r11,r19
	ctx.current_instruction = 0x880B98A0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r21.u8);
	// stw r8,300(r1)
	ctx.current_instruction = 0x880B98A4;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// stw r21,404(r1)
	ctx.current_instruction = 0x880B98A8;
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r21,348(r1)
	ctx.current_instruction = 0x880B98AC;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r21.u32);
	// lwz r7,28044(r31)
	ctx.current_instruction = 0x880B98B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880b98c4
	if (ctx.cr6.eq) goto loc_880B98C4;
	// stw r21,492(r1)
	ctx.current_instruction = 0x880B98BC;
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r21.u32);
	// stw r21,480(r1)
	ctx.current_instruction = 0x880B98C0;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r21.u32);
loc_880B98C4:
	// li r22,1
	ctx.r22.s64 = 1;
loc_880B98C8:
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880B98C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lbzx r9,r11,r19
	ctx.current_instruction = 0x880B98CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880b995c
	if (ctx.cr6.eq) goto loc_880B995C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b9914
	if (!ctx.cr6.eq) goto loc_880B9914;
	// lhz r10,396(r1)
	ctx.current_instruction = 0x880B98E8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 396);
	// li r9,5
	ctx.r9.s64 = 5;
	// lhz r8,398(r1)
	ctx.current_instruction = 0x880B98F0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 398);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stbx r9,r11,r19
	ctx.current_instruction = 0x880B98F8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// lhz r11,376(r1)
	ctx.current_instruction = 0x880B9908;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 376);
	// lhz r9,378(r1)
	ctx.current_instruction = 0x880B990C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 378);
	// b 0x880b993c
	goto loc_880B993C;
loc_880B9914:
	// lhz r10,392(r1)
	ctx.current_instruction = 0x880B9914;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 392);
	// li r9,6
	ctx.r9.s64 = 6;
	// lhz r8,394(r1)
	ctx.current_instruction = 0x880B991C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 394);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stbx r9,r11,r19
	ctx.current_instruction = 0x880B9924;
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r9.u8);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// lhz r11,400(r1)
	ctx.current_instruction = 0x880B9934;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 400);
	// lhz r9,402(r1)
	ctx.current_instruction = 0x880B9938;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 402);
loc_880B993C:
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880b995c
	if (!ctx.cr6.eq) goto loc_880B995C;
	// lwz r9,6792(r31)
	ctx.current_instruction = 0x880B994C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// stbx r21,r9,r19
	ctx.current_instruction = 0x880B9950;
	REX_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r21.u8);
	// stw r11,240(r1)
	ctx.current_instruction = 0x880B9954;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r10,244(r1)
	ctx.current_instruction = 0x880B9958;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
loc_880B995C:
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880B995C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lbzx r10,r11,r19
	ctx.current_instruction = 0x880B9960;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x880b9aa0
	if (!ctx.cr6.eq) goto loc_880B9AA0;
	// lwz r11,576(r1)
	ctx.current_instruction = 0x880B996C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9970;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhz r8,396(r1)
	ctx.current_instruction = 0x880B9974;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 396);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r7,376(r1)
	ctx.current_instruction = 0x880B997C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 376);
	// lwz r6,536(r1)
	ctx.current_instruction = 0x880B9980;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r9,r10
	ctx.current_instruction = 0x880B9988;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r5,2548(r31)
	ctx.current_instruction = 0x880B998C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r7,r5,r10
	ctx.current_instruction = 0x880B9990;
	REX_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9994;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,2(r4)
	ctx.current_instruction = 0x880B999C;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
	// lhz r8,378(r1)
	ctx.current_instruction = 0x880B99A0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 378);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B99A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,398(r1)
	ctx.current_instruction = 0x880B99AC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 398);
	// sth r7,2(r3)
	ctx.current_instruction = 0x880B99B0;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880B99B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r9,r10,r11
	ctx.current_instruction = 0x880B99B8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r7,2548(r31)
	ctx.current_instruction = 0x880B99BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r8,r7,r11
	ctx.current_instruction = 0x880B99C0;
	REX_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880B99C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r6)
	ctx.current_instruction = 0x880B99CC;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880B99D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,2(r5)
	ctx.current_instruction = 0x880B99D8;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r8.u16);
loc_880B99DC:
	// li r20,16384
	ctx.r20.s64 = 16384;
loc_880B99E0:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880B99E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba2b8
	if (ctx.cr6.eq) goto loc_880BA2B8;
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880B99F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7552(r31)
	ctx.current_instruction = 0x880B99FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7548(r31)
	ctx.current_instruction = 0x880B9A04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880B9A10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880B9A1C;
	sub_88243CB0(ctx, base);
loc_880B9A1C:
	// lwz r10,28040(r31)
	ctx.current_instruction = 0x880B9A1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// lwz r24,288(r1)
	ctx.current_instruction = 0x880B9A20;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r23,276(r1)
	ctx.current_instruction = 0x880B9A24;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba148
	if (ctx.cr6.eq) goto loc_880BA148;
	// lwz r11,472(r1)
	ctx.current_instruction = 0x880B9A30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba148
	if (ctx.cr6.eq) goto loc_880BA148;
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba148
	if (!ctx.cr6.eq) goto loc_880BA148;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba148
	if (!ctx.cr6.eq) goto loc_880BA148;
	// stw r24,244(r1)
	ctx.current_instruction = 0x880B9A54;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// stw r23,240(r1)
	ctx.current_instruction = 0x880B9A5C;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// bne cr6,0x880b9c20
	if (!ctx.cr6.eq) goto loc_880B9C20;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880B9A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880B9A68;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r11,248(r1)
	ctx.current_instruction = 0x880B9A6C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
loc_880B9A70:
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880B9A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,7548(r31)
	ctx.current_instruction = 0x880B9A78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// lwz r7,544(r1)
	ctx.current_instruction = 0x880B9A7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// sthx r11,r10,r9
	ctx.current_instruction = 0x880B9A80;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
	// lwz r5,7552(r31)
	ctx.current_instruction = 0x880B9A84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// lwz r6,240(r1)
	ctx.current_instruction = 0x880B9A88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sthx r6,r10,r5
	ctx.current_instruction = 0x880B9A8C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880B9A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,544(r1)
	ctx.current_instruction = 0x880B9A98;
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r3.u32);
	// b 0x880ba2c4
	goto loc_880BA2C4;
loc_880B9AA0:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x880b9b1c
	if (!ctx.cr6.eq) goto loc_880B9B1C;
	// lwz r11,576(r1)
	ctx.current_instruction = 0x880B9AA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9AAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhz r7,392(r1)
	ctx.current_instruction = 0x880B9AB0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 392);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r6,400(r1)
	ctx.current_instruction = 0x880B9AB8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 400);
	// lhz r8,394(r1)
	ctx.current_instruction = 0x880B9ABC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 394);
	// lwz r5,536(r1)
	ctx.current_instruction = 0x880B9AC0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// sthx r7,r9,r10
	ctx.current_instruction = 0x880B9AC4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,2548(r31)
	ctx.current_instruction = 0x880B9ACC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r6,r4,r10
	ctx.current_instruction = 0x880B9AD0;
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r6.u16);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9AD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,2(r3)
	ctx.current_instruction = 0x880B9ADC;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B9AE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,402(r1)
	ctx.current_instruction = 0x880B9AE8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 402);
	// sth r9,2(r10)
	ctx.current_instruction = 0x880B9AEC;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r5,2544(r31)
	ctx.current_instruction = 0x880B9AF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r7,r5,r11
	ctx.current_instruction = 0x880B9AF4;
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r7.u16);
	// lwz r4,2548(r31)
	ctx.current_instruction = 0x880B9AF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r6,r4,r11
	ctx.current_instruction = 0x880B9AFC;
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r6.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880B9B00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,2(r3)
	ctx.current_instruction = 0x880B9B08;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880B9B0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,2(r11)
	ctx.current_instruction = 0x880B9B14;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// b 0x880b99dc
	goto loc_880B99DC;
loc_880B9B1C:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x880b9b90
	if (!ctx.cr6.eq) goto loc_880B9B90;
	// stbx r21,r11,r19
	ctx.current_instruction = 0x880B9B24;
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r21.u8);
	// li r20,16384
	ctx.r20.s64 = 16384;
	// lwz r10,576(r1)
	ctx.current_instruction = 0x880B9B2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r8,536(r1)
	ctx.current_instruction = 0x880B9B30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9B3C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r20,r9,r10
	ctx.current_instruction = 0x880B9B40;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u16);
	// lwz r7,2548(r31)
	ctx.current_instruction = 0x880B9B44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r20,r7,r10
	ctx.current_instruction = 0x880B9B48;
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r20.u16);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9B4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r20,2(r6)
	ctx.current_instruction = 0x880B9B54;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r20.u16);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B9B58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r20,2(r5)
	ctx.current_instruction = 0x880B9B60;
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r20.u16);
	// lwz r4,2544(r31)
	ctx.current_instruction = 0x880B9B64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r20,r4,r11
	ctx.current_instruction = 0x880B9B68;
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r20.u16);
	// lwz r3,2548(r31)
	ctx.current_instruction = 0x880B9B6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r20,r3,r11
	ctx.current_instruction = 0x880B9B70;
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r20.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880B9B74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r20,2(r10)
	ctx.current_instruction = 0x880B9B7C;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r20.u16);
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880B9B80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r20,2(r9)
	ctx.current_instruction = 0x880B9B88;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r20.u16);
	// b 0x880b99e0
	goto loc_880B99E0;
loc_880B9B90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880b99dc
	if (!ctx.cr6.eq) goto loc_880B99DC;
	// lwz r11,576(r1)
	ctx.current_instruction = 0x880B9B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 576);
	// li r20,16384
	ctx.r20.s64 = 16384;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x880B9BA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,2544(r31)
	ctx.current_instruction = 0x880B9BA4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,536(r1)
	ctx.current_instruction = 0x880B9BAC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r10
	ctx.current_instruction = 0x880B9BB4;
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r5,240(r1)
	ctx.current_instruction = 0x880B9BB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r4,2548(r31)
	ctx.current_instruction = 0x880B9BBC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r5,r4,r10
	ctx.current_instruction = 0x880B9BC0;
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u16);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9BC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x880B9BC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,2(r7)
	ctx.current_instruction = 0x880B9BD0;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B9BD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r5,240(r1)
	ctx.current_instruction = 0x880B9BD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r5,2(r4)
	ctx.current_instruction = 0x880B9BE0;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// lwz r10,244(r1)
	ctx.current_instruction = 0x880B9BE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B9BE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r10,r9,r11
	ctx.current_instruction = 0x880B9BEC;
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r7,240(r1)
	ctx.current_instruction = 0x880B9BF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r6,2548(r31)
	ctx.current_instruction = 0x880B9BF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// sthx r7,r6,r11
	ctx.current_instruction = 0x880B9BF8;
	REX_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u16);
	// lwz r10,2544(r31)
	ctx.current_instruction = 0x880B9BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,244(r1)
	ctx.current_instruction = 0x880B9C04;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// sth r4,2(r10)
	ctx.current_instruction = 0x880B9C08;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880B9C0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,240(r1)
	ctx.current_instruction = 0x880B9C14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// sth r9,2(r7)
	ctx.current_instruction = 0x880B9C18;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// b 0x880b99e0
	goto loc_880B99E0;
loc_880B9C20:
	// lwz r11,784(r1)
	ctx.current_instruction = 0x880B9C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9f6c
	if (ctx.cr6.eq) goto loc_880B9F6C;
	// lwz r11,804(r1)
	ctx.current_instruction = 0x880B9C2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,800(r1)
	ctx.current_instruction = 0x880B9C30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,796(r1)
	ctx.current_instruction = 0x880B9C34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// lwz r8,792(r1)
	ctx.current_instruction = 0x880B9C3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r28,r9,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880b9dfc
	if (!ctx.cr6.lt) goto loc_880B9DFC;
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B9C8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b9db8
	if (ctx.cr6.eq) goto loc_880B9DB8;
	// lwz r30,272(r1)
	ctx.current_instruction = 0x880B9C98;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B9CAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B9CB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9ccc
	if (!ctx.cr6.eq) goto loc_880B9CCC;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x880b9cf0
	goto loc_880B9CF0;
loc_880B9CCC:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880b9d10
	if (!ctx.cr6.eq) goto loc_880B9D10;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B9CD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b9d10
	if (!ctx.cr6.eq) goto loc_880B9D10;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880B9CE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b9d10
	if (!ctx.cr6.eq) goto loc_880B9D10;
loc_880B9CF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D08;
	sub_88085E60(ctx, base);
loc_880B9D08:
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b9d80
	goto loc_880B9D80;
loc_880B9D10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D28;
	sub_88085E60(ctx, base);
loc_880B9D28:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B9D30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D44;
	sub_88085E60(ctx, base);
loc_880B9D44:
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B9D4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D60;
	sub_88085E60(ctx, base);
loc_880B9D60:
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D7C;
	sub_88085E60(ctx, base);
loc_880B9D7C:
	// add r30,r26,r3
	ctx.r30.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880B9D80:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9D98;
	sub_88085E60(ctx, base);
loc_880B9D98:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B9D98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B9DA0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880B9DB0;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880ba280
	goto loc_880BA280;
loc_880B9DB8:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880B9DC8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.current_instruction = 0x880B9DDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.current_instruction = 0x880B9DE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880B9DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880B9DF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba130
	goto loc_880BA130;
loc_880B9DFC:
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880B9DFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880b9f28
	if (ctx.cr6.eq) goto loc_880B9F28;
	// lwz r28,272(r1)
	ctx.current_instruction = 0x880B9E08;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B9E1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B9E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9e3c
	if (!ctx.cr6.eq) goto loc_880B9E3C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880b9e60
	goto loc_880B9E60;
loc_880B9E3C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r28
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880b9e80
	if (!ctx.cr6.eq) goto loc_880B9E80;
	// lwz r11,256(r1)
	ctx.current_instruction = 0x880B9E48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880b9e80
	if (!ctx.cr6.eq) goto loc_880B9E80;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880B9E54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880b9e80
	if (!ctx.cr6.eq) goto loc_880B9E80;
loc_880B9E60:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9E78;
	sub_88085E60(ctx, base);
loc_880B9E78:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880b9ef0
	goto loc_880B9EF0;
loc_880B9E80:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9E98;
	sub_88085E60(ctx, base);
loc_880B9E98:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880B9EA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9EB4;
	sub_88085E60(ctx, base);
loc_880B9EB4:
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880B9EBC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9ED0;
	sub_88085E60(ctx, base);
loc_880B9ED0:
	// add r26,r26,r3
	ctx.r26.u64 = ctx.r26.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9EEC;
	sub_88085E60(ctx, base);
loc_880B9EEC:
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880B9EF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9F08;
	sub_88085E60(ctx, base);
loc_880B9F08:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880B9F08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880B9F10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880B9F20;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880ba280
	goto loc_880BA280;
loc_880B9F28:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880B9F38;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.current_instruction = 0x880B9F4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.current_instruction = 0x880B9F50;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880B9F5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880B9F60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba130
	goto loc_880BA130;
loc_880B9F6C:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B9F6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba0b8
	if (ctx.cr6.eq) goto loc_880BA0B8;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880B9F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880B9F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880B9F98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b9fac
	if (!ctx.cr6.eq) goto loc_880B9FAC;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880b9fd0
	goto loc_880B9FD0;
loc_880B9FAC:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba000
	if (!ctx.cr6.eq) goto loc_880BA000;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880B9FB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880ba000
	if (!ctx.cr6.eq) goto loc_880BA000;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880B9FC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba000
	if (!ctx.cr6.eq) goto loc_880BA000;
loc_880B9FD0:
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880B9FD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.current_instruction = 0x880B9FD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880B9FF8;
	sub_88085E60(ctx, base);
loc_880B9FF8:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba080
	goto loc_880BA080;
loc_880BA000:
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880BA000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.current_instruction = 0x880BA008;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA028;
	sub_88085E60(ctx, base);
loc_880BA028:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880BA030;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA044;
	sub_88085E60(ctx, base);
loc_880BA044:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880BA04C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA060;
	sub_88085E60(ctx, base);
loc_880BA060:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,272(r1)
	ctx.current_instruction = 0x880BA068;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA07C;
	sub_88085E60(ctx, base);
loc_880BA07C:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880BA080:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA098;
	sub_88085E60(ctx, base);
loc_880BA098:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880BA098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880BA0A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880BA0B0;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880ba280
	goto loc_880BA280;
loc_880BA0B8:
	// lwz r11,792(r1)
	ctx.current_instruction = 0x880BA0B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r10,796(r1)
	ctx.current_instruction = 0x880BA0BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
	// subf r8,r10,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r10.u64;
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
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba124
	if (ctx.cr6.gt) goto loc_880BA124;
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880BA0F0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.current_instruction = 0x880BA104;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.current_instruction = 0x880BA108;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.current_instruction = 0x880BA114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.current_instruction = 0x880BA118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba130
	goto loc_880BA130;
loc_880BA124:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x880BA124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880BA128;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880BA130:
	// lwz r10,19232(r31)
	ctx.current_instruction = 0x880BA130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r8,248(r1)
	ctx.current_instruction = 0x880BA140;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// b 0x880ba284
	goto loc_880BA284;
loc_880BA148:
	// lwz r11,148(r16)
	ctx.current_instruction = 0x880BA148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r9,r1,248
	ctx.r9.s64 = ctx.r1.s64 + 248;
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BA150;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba1fc
	if (ctx.cr6.eq) goto loc_880BA1FC;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880BA160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BA168;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880BA170;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// lwz r30,304(r1)
	ctx.current_instruction = 0x880BA178;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r27,r1,784
	ctx.r27.s64 = ctx.r1.s64 + 784;
	// lwz r28,296(r1)
	ctx.current_instruction = 0x880BA180;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// stw r11,188(r1)
	ctx.current_instruction = 0x880BA188;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r8,148(r1)
	ctx.current_instruction = 0x880BA190;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r9,212(r1)
	ctx.current_instruction = 0x880BA194;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r7,204(r1)
	ctx.current_instruction = 0x880BA19C;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r5,196(r1)
	ctx.current_instruction = 0x880BA1A0;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r3,180(r1)
	ctx.current_instruction = 0x880BA1A4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r6,140(r1)
	ctx.current_instruction = 0x880BA1A8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r4,132(r1)
	ctx.current_instruction = 0x880BA1AC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r29,172(r1)
	ctx.current_instruction = 0x880BA1B0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r22,164(r1)
	ctx.current_instruction = 0x880BA1B4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r22,156(r1)
	ctx.current_instruction = 0x880BA1B8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,124(r1)
	ctx.current_instruction = 0x880BA1C0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r28,116(r1)
	ctx.current_instruction = 0x880BA1C8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,108(r1)
	ctx.current_instruction = 0x880BA1D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// stw r15,100(r1)
	ctx.current_instruction = 0x880BA1D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x880BA1D8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r16,92(r1)
	ctx.current_instruction = 0x880BA1DC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// lwz r9,468(r1)
	ctx.current_instruction = 0x880BA1E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.current_instruction = 0x880BA1E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880BA1E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.current_instruction = 0x880BA1EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,436(r1)
	ctx.current_instruction = 0x880BA1F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x880b43d8
	ctx.lr = 0x880BA1F8;
	sub_880B43D8(ctx, base);
loc_880BA1F8:
	// b 0x880ba280
	goto loc_880BA280;
loc_880BA1FC:
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880BA1FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// lwz r5,292(r1)
	ctx.current_instruction = 0x880BA204;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// lwz r3,308(r1)
	ctx.current_instruction = 0x880BA20C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r28,r1,352
	ctx.r28.s64 = ctx.r1.s64 + 352;
	// lwz r29,304(r1)
	ctx.current_instruction = 0x880BA214;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// lwz r27,296(r1)
	ctx.current_instruction = 0x880BA21C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r10,156(r1)
	ctx.current_instruction = 0x880BA224;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r8,116(r1)
	ctx.current_instruction = 0x880BA22C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r9,180(r1)
	ctx.current_instruction = 0x880BA230;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r7,172(r1)
	ctx.current_instruction = 0x880BA234;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r4,164(r1)
	ctx.current_instruction = 0x880BA238;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// stw r5,108(r1)
	ctx.current_instruction = 0x880BA23C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r3,100(r1)
	ctx.current_instruction = 0x880BA240;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r30,148(r1)
	ctx.current_instruction = 0x880BA244;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r28,140(r1)
	ctx.current_instruction = 0x880BA248;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r22,132(r1)
	ctx.current_instruction = 0x880BA250;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r22,124(r1)
	ctx.current_instruction = 0x880BA258;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x880BA260;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// stw r27,84(r1)
	ctx.current_instruction = 0x880BA268;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880BA274;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3028
	ctx.lr = 0x880BA280;
	sub_880B3028(ctx, base);
loc_880BA280:
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880BA280;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
loc_880BA284:
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880BA284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,248(r1)
	ctx.current_instruction = 0x880BA288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880b9a70
	if (!ctx.cr6.lt) goto loc_880B9A70;
	// lwz r10,7548(r31)
	ctx.current_instruction = 0x880BA294;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,544(r1)
	ctx.current_instruction = 0x880BA29C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthx r20,r9,r10
	ctx.current_instruction = 0x880BA2A4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u16);
	// stw r7,544(r1)
	ctx.current_instruction = 0x880BA2A8;
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r7.u32);
	// lwz r6,7552(r31)
	ctx.current_instruction = 0x880BA2AC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// sthx r20,r9,r6
	ctx.current_instruction = 0x880BA2B0;
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r20.u16);
	// b 0x880ba2c4
	goto loc_880BA2C4;
loc_880BA2B8:
	// lwz r26,260(r1)
	ctx.current_instruction = 0x880BA2B8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r24,288(r1)
	ctx.current_instruction = 0x880BA2BC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r23,276(r1)
	ctx.current_instruction = 0x880BA2C0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_880BA2C4:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880BA2C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba374
	if (ctx.cr6.eq) goto loc_880BA374;
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880BA2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,7544(r31)
	ctx.current_instruction = 0x880BA2E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,7540(r31)
	ctx.current_instruction = 0x880BA2E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880BA2F4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880BA300;
	sub_88243CB0(ctx, base);
loc_880BA300:
	// lwz r10,28040(r31)
	ctx.current_instruction = 0x880BA300;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28040);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880ba9f0
	if (ctx.cr6.eq) goto loc_880BA9F0;
	// lwz r11,472(r1)
	ctx.current_instruction = 0x880BA30C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba9f0
	if (ctx.cr6.eq) goto loc_880BA9F0;
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba9f0
	if (!ctx.cr6.eq) goto loc_880BA9F0;
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba9f0
	if (!ctx.cr6.eq) goto loc_880BA9F0;
	// stw r24,244(r1)
	ctx.current_instruction = 0x880BA330;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// stw r23,240(r1)
	ctx.current_instruction = 0x880BA338;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// bne cr6,0x880ba4e0
	if (!ctx.cr6.eq) goto loc_880BA4E0;
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880BA340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// stw r11,248(r1)
	ctx.current_instruction = 0x880BA344;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
loc_880BA348:
	// lwz r11,244(r1)
	ctx.current_instruction = 0x880BA348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,7540(r31)
	ctx.current_instruction = 0x880BA350;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// lwz r7,512(r1)
	ctx.current_instruction = 0x880BA354;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// sthx r11,r10,r9
	ctx.current_instruction = 0x880BA358;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u16);
	// lwz r6,240(r1)
	ctx.current_instruction = 0x880BA35C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r5,7544(r31)
	ctx.current_instruction = 0x880BA360;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// sthx r6,r10,r5
	ctx.current_instruction = 0x880BA364;
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// lwz r11,248(r1)
	ctx.current_instruction = 0x880BA368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,512(r1)
	ctx.current_instruction = 0x880BA370;
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
loc_880BA374:
	// lwz r11,640(r1)
	ctx.current_instruction = 0x880BA374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r10,280(r1)
	ctx.current_instruction = 0x880BA378;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r9,500(r1)
	ctx.current_instruction = 0x880BA37C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r6,28044(r31)
	ctx.current_instruction = 0x880BA384;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// stw r8,640(r1)
	ctx.current_instruction = 0x880BA390;
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r8.u32);
	// stw r7,280(r1)
	ctx.current_instruction = 0x880BA394;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,500(r1)
	ctx.current_instruction = 0x880BA39C;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r5.u32);
	// beq cr6,0x880ba3ec
	if (ctx.cr6.eq) goto loc_880BA3EC;
	// lwz r11,648(r1)
	ctx.current_instruction = 0x880BA3A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r10,636(r1)
	ctx.current_instruction = 0x880BA3A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r9,460(r1)
	ctx.current_instruction = 0x880BA3AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r7,468(r1)
	ctx.current_instruction = 0x880BA3B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r4,628(r1)
	ctx.current_instruction = 0x880BA3BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// lwz r11,652(r1)
	ctx.current_instruction = 0x880BA3C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// stw r8,648(r1)
	ctx.current_instruction = 0x880BA3CC;
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r8.u32);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r5,636(r1)
	ctx.current_instruction = 0x880BA3D8;
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r5.u32);
	// stw r3,460(r1)
	ctx.current_instruction = 0x880BA3DC;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// stw r10,468(r1)
	ctx.current_instruction = 0x880BA3E0;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// stw r9,628(r1)
	ctx.current_instruction = 0x880BA3E4;
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r9.u32);
	// stw r8,652(r1)
	ctx.current_instruction = 0x880BA3E8;
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r8.u32);
loc_880BA3EC:
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880BA3EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r16,r16,276
	ctx.r16.s64 = ctx.r16.s64 + 276;
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// stw r15,408(r1)
	ctx.current_instruction = 0x880BA3FC;
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r15.u32);
	// stw r16,268(r1)
	ctx.current_instruction = 0x880BA400;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r16.u32);
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r7.u32, ctx.xer);
	// stw r11,380(r1)
	ctx.current_instruction = 0x880BA408;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// blt cr6,0x880b5900
	if (ctx.cr6.lt) goto loc_880B5900;
loc_880BA410:
	// lwz r11,300(r1)
	ctx.current_instruction = 0x880BA410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// lwz r10,560(r1)
	ctx.current_instruction = 0x880BA418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// lwz r9,544(r1)
	ctx.current_instruction = 0x880BA41C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,512(r1)
	ctx.current_instruction = 0x880BA424;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lwz r4,504(r1)
	ctx.current_instruction = 0x880BA42C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r8,1160(r1)
	ctx.current_instruction = 0x880BA438;
	REX_STORE_U64(ctx.r1.u32 + 1160, ctx.r8.u64);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r5,1136(r1)
	ctx.current_instruction = 0x880BA440;
	REX_STORE_U64(ctx.r1.u32 + 1136, ctx.r5.u64);
	// std r3,1144(r1)
	ctx.current_instruction = 0x880BA444;
	REX_STORE_U64(ctx.r1.u32 + 1144, ctx.r3.u64);
	// std r11,1128(r1)
	ctx.current_instruction = 0x880BA448;
	REX_STORE_U64(ctx.r1.u32 + 1128, ctx.r11.u64);
	// std r10,1152(r1)
	ctx.current_instruction = 0x880BA44C;
	REX_STORE_U64(ctx.r1.u32 + 1152, ctx.r10.u64);
	// lwz r9,7668(r1)
	ctx.current_instruction = 0x880BA450;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 7668);
	// stw r14,316(r1)
	ctx.current_instruction = 0x880BA454;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r14.u32);
	// cmplw cr6,r14,r9
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r9.u32, ctx.xer);
	// lfd f0,1160(r1)
	ctx.current_instruction = 0x880BA45C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 1160);
	// lfd f13,1136(r1)
	ctx.current_instruction = 0x880BA460;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 1136);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,1144(r1)
	ctx.current_instruction = 0x880BA468;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 1144);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f9,1128(r1)
	ctx.current_instruction = 0x880BA470;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 1128);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfd f7,1152(r1)
	ctx.current_instruction = 0x880BA478;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 1152);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fadd f31,f12,f31
	ctx.f31.f64 = ctx.f12.f64 + ctx.f31.f64;
	// fadd f30,f10,f30
	ctx.f30.f64 = ctx.f10.f64 + ctx.f30.f64;
	// fadd f29,f8,f29
	ctx.f29.f64 = ctx.f8.f64 + ctx.f29.f64;
	// fadd f28,f6,f28
	ctx.f28.f64 = ctx.f6.f64 + ctx.f28.f64;
	// fadd f27,f5,f27
	ctx.f27.f64 = ctx.f5.f64 + ctx.f27.f64;
	// blt cr6,0x880b57cc
	if (ctx.cr6.lt) goto loc_880B57CC;
loc_880BA49C:
	// lwz r11,388(r1)
	ctx.current_instruction = 0x880BA49C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r10,7676(r1)
	ctx.current_instruction = 0x880BA4A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 7676);
	// lwz r9,7684(r1)
	ctx.current_instruction = 0x880BA4A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 7684);
	// lwz r8,7692(r1)
	ctx.current_instruction = 0x880BA4A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 7692);
	// lwz r7,7700(r1)
	ctx.current_instruction = 0x880BA4AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 7700);
	// lwz r6,7708(r1)
	ctx.current_instruction = 0x880BA4B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 7708);
	// lwz r5,7716(r1)
	ctx.current_instruction = 0x880BA4B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 7716);
	// stw r11,0(r10)
	ctx.current_instruction = 0x880BA4B8;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stfd f31,0(r9)
	ctx.current_instruction = 0x880BA4BC;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.f31.u64);
	// stfd f30,0(r8)
	ctx.current_instruction = 0x880BA4C0;
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.f30.u64);
	// stfd f29,0(r7)
	ctx.current_instruction = 0x880BA4C4;
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.f29.u64);
	// stfd f28,0(r6)
	ctx.current_instruction = 0x880BA4C8;
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f28.u64);
	// stfd f27,0(r5)
	ctx.current_instruction = 0x880BA4CC;
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f27.u64);
	// addi r1,r1,7632
	ctx.r1.s64 = ctx.r1.s64 + 7632;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x881ef2d0
	ctx.lr = 0x880BA4DC;
	__restfpr_27(ctx, base);
loc_880BA4DC:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880BA4E0:
	// lwz r11,784(r1)
	ctx.current_instruction = 0x880BA4E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba81c
	if (ctx.cr6.eq) goto loc_880BA81C;
	// lwz r11,804(r1)
	ctx.current_instruction = 0x880BA4EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r10,800(r1)
	ctx.current_instruction = 0x880BA4F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r9,796(r1)
	ctx.current_instruction = 0x880BA4F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// lwz r8,792(r1)
	ctx.current_instruction = 0x880BA4FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// subf r28,r9,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r9.u64;
	// srawi r7,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 31;
	// subf r27,r8,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r8.u64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// srawi r5,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 31;
	// srawi r4,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 31;
	// xor r3,r30,r7
	ctx.r3.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// xor r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r6.u64;
	// xor r9,r28,r5
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r5.u64;
	// xor r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r11,r7,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x880ba6b4
	if (!ctx.cr6.lt) goto loc_880BA6B4;
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BA54C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba674
	if (ctx.cr6.eq) goto loc_880BA674;
	// lwz r30,272(r1)
	ctx.current_instruction = 0x880BA558;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r26,256(r1)
	ctx.current_instruction = 0x880BA560;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880BA578;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba58c
	if (!ctx.cr6.eq) goto loc_880BA58C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x880ba5ac
	goto loc_880BA5AC;
loc_880BA58C:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r30
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880ba5cc
	if (!ctx.cr6.eq) goto loc_880BA5CC;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x880ba5cc
	if (!ctx.cr6.eq) goto loc_880BA5CC;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880BA5A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba5cc
	if (!ctx.cr6.eq) goto loc_880BA5CC;
loc_880BA5AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA5C4;
	sub_88085E60(ctx, base);
loc_880BA5C4:
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba63c
	goto loc_880BA63C;
loc_880BA5CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA5E4;
	sub_88085E60(ctx, base);
loc_880BA5E4:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880BA5EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA600;
	sub_88085E60(ctx, base);
loc_880BA600:
	// add r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA61C;
	sub_88085E60(ctx, base);
loc_880BA61C:
	// add r26,r24,r3
	ctx.r26.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA638;
	sub_88085E60(ctx, base);
loc_880BA638:
	// add r30,r26,r3
	ctx.r30.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880BA63C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA654;
	sub_88085E60(ctx, base);
loc_880BA654:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880BA654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880BA65C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880BA66C;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA674:
	// cmpwi cr6,r8,158
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.current_instruction = 0x880BA694;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.current_instruction = 0x880BA698;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880BA6A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880BA6A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba9d8
	goto loc_880BA9D8;
loc_880BA6B4:
	// lwz r9,28020(r31)
	ctx.current_instruction = 0x880BA6B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880ba7dc
	if (ctx.cr6.eq) goto loc_880BA7DC;
	// lwz r28,272(r1)
	ctx.current_instruction = 0x880BA6C0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r26,256(r1)
	ctx.current_instruction = 0x880BA6C8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880BA6E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba6f4
	if (!ctx.cr6.eq) goto loc_880BA6F4;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880ba714
	goto loc_880BA714;
loc_880BA6F4:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r28
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x880ba734
	if (!ctx.cr6.eq) goto loc_880BA734;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x880ba734
	if (!ctx.cr6.eq) goto loc_880BA734;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880BA708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba734
	if (!ctx.cr6.eq) goto loc_880BA734;
loc_880BA714:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA72C;
	sub_88085E60(ctx, base);
loc_880BA72C:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba7a4
	goto loc_880BA7A4;
loc_880BA734:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA74C;
	sub_88085E60(ctx, base);
loc_880BA74C:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880BA754;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA768;
	sub_88085E60(ctx, base);
loc_880BA768:
	// add r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA784;
	sub_88085E60(ctx, base);
loc_880BA784:
	// add r26,r24,r3
	ctx.r26.u64 = ctx.r24.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA7A0;
	sub_88085E60(ctx, base);
loc_880BA7A0:
	// add r28,r26,r3
	ctx.r28.u64 = ctx.r26.u64 + ctx.r3.u64;
loc_880BA7A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA7BC;
	sub_88085E60(ctx, base);
loc_880BA7BC:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880BA7BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880BA7C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880BA7D4;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA7DC:
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.current_instruction = 0x880BA7FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.current_instruction = 0x880BA800;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x880BA80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r4,r8
	ctx.current_instruction = 0x880BA810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba9d8
	goto loc_880BA9D8;
loc_880BA81C:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BA81C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ba968
	if (ctx.cr6.eq) goto loc_880BA968;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BA828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880BA83C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// lwz r10,252(r1)
	ctx.current_instruction = 0x880BA848;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880ba85c
	if (!ctx.cr6.eq) goto loc_880BA85C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x880ba880
	goto loc_880BA880;
loc_880BA85C:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba8b0
	if (!ctx.cr6.eq) goto loc_880BA8B0;
	// lwz r10,256(r1)
	ctx.current_instruction = 0x880BA868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x880ba8b0
	if (!ctx.cr6.eq) goto loc_880BA8B0;
	// lwz r11,252(r1)
	ctx.current_instruction = 0x880BA874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x880ba8b0
	if (!ctx.cr6.eq) goto loc_880BA8B0;
loc_880BA880:
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880BA880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.current_instruction = 0x880BA888;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA8A8;
	sub_88085E60(ctx, base);
loc_880BA8A8:
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x880ba930
	goto loc_880BA930;
loc_880BA8B0:
	// lwz r11,796(r1)
	ctx.current_instruction = 0x880BA8B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,792(r1)
	ctx.current_instruction = 0x880BA8B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// subf r30,r11,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r11.u64;
	// subf r29,r10,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA8D8;
	sub_88085E60(ctx, base);
loc_880BA8D8:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,252(r1)
	ctx.current_instruction = 0x880BA8E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA8F4;
	sub_88085E60(ctx, base);
loc_880BA8F4:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,256(r1)
	ctx.current_instruction = 0x880BA8FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA910;
	sub_88085E60(ctx, base);
loc_880BA910:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,272(r1)
	ctx.current_instruction = 0x880BA918;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA92C;
	sub_88085E60(ctx, base);
loc_880BA92C:
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
loc_880BA930:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x880BA948;
	sub_88085E60(ctx, base);
loc_880BA948:
	// lwz r11,112(r16)
	ctx.current_instruction = 0x880BA948;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 112);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lwz r9,19232(r31)
	ctx.current_instruction = 0x880BA950;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r7,248(r1)
	ctx.current_instruction = 0x880BA960;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA968:
	// lwz r11,792(r1)
	ctx.current_instruction = 0x880BA968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r10,796(r1)
	ctx.current_instruction = 0x880BA96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
	// subf r8,r10,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r10.u64;
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
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x880ba9d0
	if (ctx.cr6.gt) goto loc_880BA9D0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwzx r7,r11,r26
	ctx.current_instruction = 0x880BA9B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r6,r10,r26
	ctx.current_instruction = 0x880BA9B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r8
	ctx.current_instruction = 0x880BA9C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwzx r11,r4,r9
	ctx.current_instruction = 0x880BA9C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880ba9d8
	goto loc_880BA9D8;
loc_880BA9D0:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x880BA9D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880BA9D8:
	// lwz r10,19232(r31)
	ctx.current_instruction = 0x880BA9D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19232);
	// mulli r9,r11,-3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-3));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r8,248(r1)
	ctx.current_instruction = 0x880BA9E8;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BA9F0:
	// lwz r11,148(r16)
	ctx.current_instruction = 0x880BA9F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 148);
	// addi r9,r1,248
	ctx.r9.s64 = ctx.r1.s64 + 248;
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BA9F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r28,296(r1)
	ctx.current_instruction = 0x880BAA00;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880baaa4
	if (ctx.cr6.eq) goto loc_880BAAA4;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880BAA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BAA14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880BAA1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// lwz r30,304(r1)
	ctx.current_instruction = 0x880BAA24;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r27,r1,784
	ctx.r27.s64 = ctx.r1.s64 + 784;
	// stw r8,148(r1)
	ctx.current_instruction = 0x880BAA2C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r10,r1,3728
	ctx.r10.s64 = ctx.r1.s64 + 3728;
	// stw r11,188(r1)
	ctx.current_instruction = 0x880BAA34;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// stw r9,212(r1)
	ctx.current_instruction = 0x880BAA3C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r7,204(r1)
	ctx.current_instruction = 0x880BAA40;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r5,196(r1)
	ctx.current_instruction = 0x880BAA48;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// stw r3,180(r1)
	ctx.current_instruction = 0x880BAA4C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r6,140(r1)
	ctx.current_instruction = 0x880BAA50;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r4,132(r1)
	ctx.current_instruction = 0x880BAA54;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r29,172(r1)
	ctx.current_instruction = 0x880BAA58;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r21,164(r1)
	ctx.current_instruction = 0x880BAA5C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// stw r22,156(r1)
	ctx.current_instruction = 0x880BAA60;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r30,124(r1)
	ctx.current_instruction = 0x880BAA64;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,116(r1)
	ctx.current_instruction = 0x880BAA6C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r14,108(r1)
	ctx.current_instruction = 0x880BAA74;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r15,100(r1)
	ctx.current_instruction = 0x880BAA7C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// stw r16,92(r1)
	ctx.current_instruction = 0x880BAA80;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r27,84(r1)
	ctx.current_instruction = 0x880BAA84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r9,468(r1)
	ctx.current_instruction = 0x880BAA88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r8,460(r1)
	ctx.current_instruction = 0x880BAA8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880BAA90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,444(r1)
	ctx.current_instruction = 0x880BAA94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r5,436(r1)
	ctx.current_instruction = 0x880BAA98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x880b43d8
	ctx.lr = 0x880BAAA0;
	sub_880B43D8(ctx, base);
loc_880BAAA0:
	// b 0x880bab24
	goto loc_880BAB24;
loc_880BAAA4:
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880BAAA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r5,292(r1)
	ctx.current_instruction = 0x880BAAAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r30,r1,608
	ctx.r30.s64 = ctx.r1.s64 + 608;
	// lwz r3,308(r1)
	ctx.current_instruction = 0x880BAAB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// clrlwi r11,r15,31
	ctx.r11.u64 = ctx.r15.u32 & 0x1;
	// lwz r29,304(r1)
	ctx.current_instruction = 0x880BAABC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r6,r1,3728
	ctx.r6.s64 = ctx.r1.s64 + 3728;
	// stw r4,164(r1)
	ctx.current_instruction = 0x880BAAC4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r10,156(r1)
	ctx.current_instruction = 0x880BAACC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// mulli r11,r11,1920
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1920));
	// stw r8,116(r1)
	ctx.current_instruction = 0x880BAAD4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r9,180(r1)
	ctx.current_instruction = 0x880BAAD8;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r7,172(r1)
	ctx.current_instruction = 0x880BAADC;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r5,108(r1)
	ctx.current_instruction = 0x880BAAE0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r3,100(r1)
	ctx.current_instruction = 0x880BAAE4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r4,140(r1)
	ctx.current_instruction = 0x880BAAE8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r30,148(r1)
	ctx.current_instruction = 0x880BAAEC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r21,132(r1)
	ctx.current_instruction = 0x880BAAF0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r22,124(r1)
	ctx.current_instruction = 0x880BAAF8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x880BAB00;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880BAB08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880BAB14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3028
	ctx.lr = 0x880BAB24;
	sub_880B3028(ctx, base);
loc_880BAB24:
	// lwz r11,328(r1)
	ctx.current_instruction = 0x880BAB24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r10,248(r1)
	ctx.current_instruction = 0x880BAB28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880ba348
	if (!ctx.cr6.lt) goto loc_880BA348;
	// lwz r10,7540(r31)
	ctx.current_instruction = 0x880BAB34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,512(r1)
	ctx.current_instruction = 0x880BAB3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthx r20,r9,r10
	ctx.current_instruction = 0x880BAB44;
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r20.u16);
	// stw r7,512(r1)
	ctx.current_instruction = 0x880BAB48;
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r7.u32);
	// lwz r6,7544(r31)
	ctx.current_instruction = 0x880BAB4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// sthx r20,r9,r6
	ctx.current_instruction = 0x880BAB50;
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r20.u16);
	// b 0x880ba374
	goto loc_880BA374;
}

DEFINE_REX_FUNC(sub_88184CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88184CB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88184CB0) {
			switch (rex_dispatch_address) {
				case 0x88184CB8:
				case 0x88184D24:
				case 0x88184D94:
				case 0x88184FF4:
				case 0x88185020:
				case 0x8818504C:
				case 0x8818508C:
				case 0x881850B8:
				case 0x8818517C:
				case 0x88185248:
				case 0x881852F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88184CB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88184CB8: goto loc_88184CB8;
		case 0x88184D24: goto loc_88184D24;
		case 0x88184D94: goto loc_88184D94;
		case 0x88184FF4: goto loc_88184FF4;
		case 0x88185020: goto loc_88185020;
		case 0x8818504C: goto loc_8818504C;
		case 0x8818508C: goto loc_8818508C;
		case 0x881850B8: goto loc_881850B8;
		case 0x8818517C: goto loc_8818517C;
		case 0x88185248: goto loc_88185248;
		case 0x881852F8: goto loc_881852F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88184CB8;
	__savegprlr_14(ctx, base);
loc_88184CB8:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x88184CB8;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r31,22024(r3)
	ctx.current_instruction = 0x88184CC0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 22024);
	// lwz r21,22020(r3)
	ctx.current_instruction = 0x88184CC4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 22020);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r7,292(r1)
	ctx.current_instruction = 0x88184CD0;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// beq cr6,0x881853ec
	if (ctx.cr6.eq) goto loc_881853EC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881853ec
	if (ctx.cr6.eq) goto loc_881853EC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881853ec
	if (ctx.cr6.eq) goto loc_881853EC;
	// lwz r11,22004(r3)
	ctx.current_instruction = 0x88184D08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22004);
	// lwz r10,22028(r3)
	ctx.current_instruction = 0x88184D0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22028);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x88184d34
	if (!ctx.cr6.gt) goto loc_88184D34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88184228
	ctx.lr = 0x88184D24;
	sub_88184228(ctx, base);
loc_88184D24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881853ec
	if (!ctx.cr6.eq) goto loc_881853EC;
	// lwz r31,22024(r30)
	ctx.current_instruction = 0x88184D2C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 22024);
	// lwz r21,22020(r30)
	ctx.current_instruction = 0x88184D30;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r30.u32 + 22020);
loc_88184D34:
	// lwz r11,21996(r30)
	ctx.current_instruction = 0x88184D34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88184d54
	if (ctx.cr6.eq) goto loc_88184D54;
	// stw r26,0(r29)
	ctx.current_instruction = 0x88184D40;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r14)
	ctx.current_instruction = 0x88184D48;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r25.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88184D54:
	// lwz r10,22004(r30)
	ctx.current_instruction = 0x88184D54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88184da4
	if (!ctx.cr6.gt) goto loc_88184DA4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r30,22016
	ctx.r10.s64 = ctx.r30.s64 + 22016;
loc_88184D68:
	// lbzx r9,r10,r11
	ctx.current_instruction = 0x88184D68;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r11,r31
	ctx.current_instruction = 0x88184D6C;
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,22004(r30)
	ctx.current_instruction = 0x88184D74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88184d68
	if (ctx.cr6.lt) goto loc_88184D68;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x88184D94;
	sub_880547A0(ctx, base);
loc_88184D94:
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x88184D94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r22,22004(r30)
	ctx.current_instruction = 0x88184D9C;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r22.u32);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_88184DA4:
	// lwz r11,22000(r30)
	ctx.current_instruction = 0x88184DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22000);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
	// li r17,3
	ctx.r17.s64 = 3;
	// li r16,2
	ctx.r16.s64 = 2;
loc_88184DBC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88185314
	if (!ctx.cr6.eq) goto loc_88185314;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88184dd0
	if (ctx.cr6.eq) goto loc_88184DD0;
	// lbz r18,3(r25)
	ctx.current_instruction = 0x88184DCC;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r25.u32 + 3);
loc_88184DD0:
	// add r11,r4,r25
	ctx.r11.u64 = ctx.r4.u64 + ctx.r25.u64;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88184ec0
	if (ctx.cr6.lt) goto loc_88184EC0;
	// clrlwi r9,r25,31
	ctx.r9.u64 = ctx.r25.u32 & 0x1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88184e28
	if (ctx.cr6.eq) goto loc_88184E28;
	// lbz r10,4(r25)
	ctx.current_instruction = 0x88184DF4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184e20
	if (!ctx.cr6.eq) goto loc_88184E20;
	// lbz r10,5(r25)
	ctx.current_instruction = 0x88184E00;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 5);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184e20
	if (!ctx.cr6.eq) goto loc_88184E20;
	// lbz r10,6(r25)
	ctx.current_instruction = 0x88184E0C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88184e20
	if (!ctx.cr6.eq) goto loc_88184E20;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x88184eb8
	goto loc_88184EB8;
loc_88184E20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
loc_88184E28:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r9,0(r11)
	ctx.current_instruction = 0x88184E2C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r26,-1
	ctx.r5.s64 = ctx.r26.s64 + -1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x88184ec0
	if (!ctx.cr6.lt) goto loc_88184EC0;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
loc_88184E44:
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88184E44;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 & ctx.r8.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88184e90
	if (!ctx.cr6.eq) goto loc_88184E90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88184e74
	if (!ctx.cr6.eq) goto loc_88184E74;
	// rlwinm r3,r8,0,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// beq cr6,0x88184eac
	if (ctx.cr6.eq) goto loc_88184EAC;
loc_88184E74:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88184e90
	if (!ctx.cr6.eq) goto loc_88184E90;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x88184e90
	if (!ctx.cr6.eq) goto loc_88184E90;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x88184eb4
	if (ctx.cr6.gt) goto loc_88184EB4;
loc_88184E90:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x88184e44
	if (ctx.cr6.lt) goto loc_88184E44;
	// b 0x88184ec0
	goto loc_88184EC0;
loc_88184EAC:
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// b 0x88184eb8
	goto loc_88184EB8;
loc_88184EB4:
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
loc_88184EB8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x88184ed0
	if (!ctx.cr6.eq) goto loc_88184ED0;
loc_88184EC0:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// stw r11,22000(r30)
	ctx.current_instruction = 0x88184ECC;
	REX_STORE_U32(ctx.r30.u32 + 22000, ctx.r11.u32);
loc_88184ED0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x88184f88
	if (ctx.cr6.eq) goto loc_88184F88;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x88184f88
	if (!ctx.cr6.eq) goto loc_88184F88;
	// subf r11,r28,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r28.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x88184f24
	if (!ctx.cr6.gt) goto loc_88184F24;
	// lbz r10,-1(r27)
	ctx.current_instruction = 0x88184EEC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x88184f24
	if (!ctx.cr6.eq) goto loc_88184F24;
	// lbz r10,-2(r27)
	ctx.current_instruction = 0x88184EF8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184f24
	if (!ctx.cr6.eq) goto loc_88184F24;
	// lbz r10,-3(r27)
	ctx.current_instruction = 0x88184F04;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + -3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184f24
	if (!ctx.cr6.eq) goto loc_88184F24;
	// stw r17,22004(r30)
	ctx.current_instruction = 0x88184F10;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r17.u32);
	// stb r22,22016(r30)
	ctx.current_instruction = 0x88184F14;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r22.u8);
	// stb r22,22017(r30)
	ctx.current_instruction = 0x88184F18;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r22.u8);
	// stb r24,22018(r30)
	ctx.current_instruction = 0x88184F1C;
	REX_STORE_U8(ctx.r30.u32 + 22018, ctx.r24.u8);
	// b 0x88184f78
	goto loc_88184F78;
loc_88184F24:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x88184f54
	if (!ctx.cr6.gt) goto loc_88184F54;
	// lbz r10,-1(r27)
	ctx.current_instruction = 0x88184F2C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184f54
	if (!ctx.cr6.eq) goto loc_88184F54;
	// lbz r10,-2(r27)
	ctx.current_instruction = 0x88184F38;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184f54
	if (!ctx.cr6.eq) goto loc_88184F54;
	// stw r16,22004(r30)
	ctx.current_instruction = 0x88184F44;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r16.u32);
	// stb r22,22016(r30)
	ctx.current_instruction = 0x88184F48;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r22.u8);
	// stb r22,22017(r30)
	ctx.current_instruction = 0x88184F4C;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r22.u8);
	// b 0x88184f78
	goto loc_88184F78;
loc_88184F54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88184f74
	if (ctx.cr6.eq) goto loc_88184F74;
	// lbz r10,-1(r27)
	ctx.current_instruction = 0x88184F5C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88184f74
	if (!ctx.cr6.eq) goto loc_88184F74;
	// stw r24,22004(r30)
	ctx.current_instruction = 0x88184F68;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r24.u32);
	// stb r22,22016(r30)
	ctx.current_instruction = 0x88184F6C;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r22.u8);
	// b 0x88184f78
	goto loc_88184F78;
loc_88184F74:
	// stw r22,22004(r30)
	ctx.current_instruction = 0x88184F74;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r22.u32);
loc_88184F78:
	// lwz r10,22004(r30)
	ctx.current_instruction = 0x88184F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_88184F88:
	// clrlwi r10,r18,24
	ctx.r10.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x881850bc
	if (ctx.cr6.eq) goto loc_881850BC;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x881850bc
	if (ctx.cr6.eq) goto loc_881850BC;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x881850bc
	if (ctx.cr6.eq) goto loc_881850BC;
	// subf r6,r28,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r28.u64;
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// bgt cr6,0x88185050
	if (ctx.cr6.gt) goto loc_88185050;
	// beq cr6,0x88185024
	if (ctx.cr6.eq) goto loc_88185024;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x881852fc
	if (ctx.cr6.eq) goto loc_881852FC;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// beq cr6,0x88184ff8
	if (ctx.cr6.eq) goto loc_88184FF8;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// bne cr6,0x881852fc
	if (!ctx.cr6.eq) goto loc_881852FC;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x88184fe0
	if (!ctx.cr6.eq) goto loc_88184FE0;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x88184fe4
	if (ctx.cr6.eq) goto loc_88184FE4;
loc_88184FE0:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_88184FE4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x88184FF4;
	sub_88184100(ctx, base);
loc_88184FF4:
	// b 0x881852fc
	goto loc_881852FC;
loc_88184FF8:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x8818500c
	if (!ctx.cr6.eq) goto loc_8818500C;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x88185010
	if (ctx.cr6.eq) goto loc_88185010;
loc_8818500C:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_88185010:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x88185020;
	sub_88184100(ctx, base);
loc_88185020:
	// b 0x881852fc
	goto loc_881852FC;
loc_88185024:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x88185038
	if (!ctx.cr6.eq) goto loc_88185038;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x8818503c
	if (ctx.cr6.eq) goto loc_8818503C;
loc_88185038:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_8818503C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x8818504C;
	sub_88184100(ctx, base);
loc_8818504C:
	// b 0x881852fc
	goto loc_881852FC;
loc_88185050:
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bgt cr6,0x881852fc
	if (ctx.cr6.gt) goto loc_881852FC;
	// beq cr6,0x88185090
	if (ctx.cr6.eq) goto loc_88185090;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x881852fc
	if (!ctx.cr6.eq) goto loc_881852FC;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x88185078
	if (!ctx.cr6.eq) goto loc_88185078;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x8818507c
	if (ctx.cr6.eq) goto loc_8818507C;
loc_88185078:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_8818507C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x8818508C;
	sub_88184100(ctx, base);
loc_8818508C:
	// b 0x881852fc
	goto loc_881852FC;
loc_88185090:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x881850a4
	if (!ctx.cr6.eq) goto loc_881850A4;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x881850a8
	if (ctx.cr6.eq) goto loc_881850A8;
loc_881850A4:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_881850A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88184100
	ctx.lr = 0x881850B8;
	sub_88184100(ctx, base);
loc_881850B8:
	// b 0x881852fc
	goto loc_881852FC;
loc_881850BC:
	// subf. r31,r28,r27
	ctx.r31.u64 = ctx.r27.u64 - ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x881850dc
	if (ctx.cr0.eq) goto loc_881850DC;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_881850C8:
	// lbzx r9,r11,r31
	ctx.current_instruction = 0x881850C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x881850dc
	if (!ctx.cr6.eq) goto loc_881850DC;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x881850c8
	if (!ctx.cr0.eq) goto loc_881850C8;
loc_881850DC:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x881850f0
	if (ctx.cr6.eq) goto loc_881850F0;
	// lwz r11,22044(r30)
	ctx.current_instruction = 0x881850E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22044);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
loc_881850F0:
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x8818510c
	if (!ctx.cr6.eq) goto loc_8818510C;
	// lwz r11,21948(r30)
	ctx.current_instruction = 0x881850F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21948);
	// stw r31,21964(r30)
	ctx.current_instruction = 0x881850FC;
	REX_STORE_U32(ctx.r30.u32 + 21964, ctx.r31.u32);
	// stw r23,22052(r30)
	ctx.current_instruction = 0x88185100;
	REX_STORE_U32(ctx.r30.u32 + 22052, ctx.r23.u32);
	// stw r24,22048(r30)
	ctx.current_instruction = 0x88185104;
	REX_STORE_U32(ctx.r30.u32 + 22048, ctx.r24.u32);
	// stw r11,21952(r30)
	ctx.current_instruction = 0x88185108;
	REX_STORE_U32(ctx.r30.u32 + 21952, ctx.r11.u32);
loc_8818510C:
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x88185124
	if (!ctx.cr6.eq) goto loc_88185124;
	// lwz r11,21992(r30)
	ctx.current_instruction = 0x88185114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21992);
	// stw r31,21960(r30)
	ctx.current_instruction = 0x88185118;
	REX_STORE_U32(ctx.r30.u32 + 21960, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21992(r30)
	ctx.current_instruction = 0x88185120;
	REX_STORE_U32(ctx.r30.u32 + 21992, ctx.r11.u32);
loc_88185124:
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8818520c
	if (!ctx.cr6.eq) goto loc_8818520C;
	// lwz r11,22044(r30)
	ctx.current_instruction = 0x88185134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22044);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x881851c0
	if (!ctx.cr6.gt) goto loc_881851C0;
	// lbz r11,0(r28)
	ctx.current_instruction = 0x88185148;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r9,1(r28)
	ctx.current_instruction = 0x88185150;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,22048(r30)
	ctx.current_instruction = 0x8818515C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22048);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	ctx.current_instruction = 0x88185170;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// bl 0x8814ff88
	ctx.lr = 0x8818517C;
	sub_8814FF88(ctx, base);
loc_8818517C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88185280
	if (ctx.cr6.eq) goto loc_88185280;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88185368
	if (!ctx.cr6.eq) goto loc_88185368;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8818518C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// rlwinm r9,r10,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stbx r9,r21,r23
	ctx.current_instruction = 0x881851A0;
	REX_STORE_U8(ctx.r21.u32 + ctx.r23.u32, ctx.r9.u8);
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r29)
	ctx.current_instruction = 0x881851A8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r29,292(r1)
	ctx.current_instruction = 0x881851AC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stbx r7,r21,r11
	ctx.current_instruction = 0x881851B4;
	REX_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r7.u8);
	// stw r22,22044(r30)
	ctx.current_instruction = 0x881851B8;
	REX_STORE_U32(ctx.r30.u32 + 22044, ctx.r22.u32);
	// b 0x881852e8
	goto loc_881852E8;
loc_881851C0:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x881851D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88185370
	if (ctx.cr6.gt) goto loc_88185370;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88185200
	if (!ctx.cr6.gt) goto loc_88185200;
	// addi r10,r30,22015
	ctx.r10.s64 = ctx.r30.s64 + 22015;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r30,22016
	ctx.r9.s64 = ctx.r30.s64 + 22016;
loc_881851F0:
	// lbzx r8,r10,r11
	ctx.current_instruction = 0x881851F0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	ctx.current_instruction = 0x881851F4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x881851f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881851F0;
loc_88185200:
	// lbz r10,0(r28)
	ctx.current_instruction = 0x88185200;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// stw r24,22044(r30)
	ctx.current_instruction = 0x88185204;
	REX_STORE_U32(ctx.r30.u32 + 22044, ctx.r24.u32);
	// b 0x881852d4
	goto loc_881852D4;
loc_8818520C:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x8818528c
	if (!ctx.cr6.gt) goto loc_8818528C;
	// lbz r11,0(r28)
	ctx.current_instruction = 0x88185214;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r9,1(r28)
	ctx.current_instruction = 0x8818521C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,22048(r30)
	ctx.current_instruction = 0x88185228;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 22048);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	ctx.current_instruction = 0x8818523C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// bl 0x8814ff88
	ctx.lr = 0x88185248;
	sub_8814FF88(ctx, base);
loc_88185248:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88185280
	if (ctx.cr6.eq) goto loc_88185280;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x88185368
	if (!ctx.cr6.eq) goto loc_88185368;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x88185258;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// rlwinm r9,r10,31,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// stbx r9,r21,r23
	ctx.current_instruction = 0x8818526C;
	REX_STORE_U8(ctx.r21.u32 + ctx.r23.u32, ctx.r9.u8);
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r29)
	ctx.current_instruction = 0x88185274;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// stbx r7,r21,r11
	ctx.current_instruction = 0x8818527C;
	REX_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r7.u8);
loc_88185280:
	// lwz r29,292(r1)
	ctx.current_instruction = 0x88185280;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r22,22044(r30)
	ctx.current_instruction = 0x88185284;
	REX_STORE_U32(ctx.r30.u32 + 22044, ctx.r22.u32);
	// b 0x881852e8
	goto loc_881852E8;
loc_8818528C:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// stw r24,22044(r30)
	ctx.current_instruction = 0x88185298;
	REX_STORE_U32(ctx.r30.u32 + 22044, ctx.r24.u32);
	// bne cr6,0x881852e8
	if (!ctx.cr6.eq) goto loc_881852E8;
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x881852A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x88185370
	if (ctx.cr6.gt) goto loc_88185370;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881852d0
	if (!ctx.cr6.gt) goto loc_881852D0;
	// addi r10,r30,22015
	ctx.r10.s64 = ctx.r30.s64 + 22015;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r30,22016
	ctx.r9.s64 = ctx.r30.s64 + 22016;
loc_881852C0:
	// lbzx r8,r10,r11
	ctx.current_instruction = 0x881852C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	ctx.current_instruction = 0x881852C4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x881852c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881852C0;
loc_881852D0:
	// lbz r10,0(r28)
	ctx.current_instruction = 0x881852D0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
loc_881852D4:
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x881852D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stb r10,22016(r30)
	ctx.current_instruction = 0x881852DC;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r10.u8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,22004(r30)
	ctx.current_instruction = 0x881852E4;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r9.u32);
loc_881852E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r21,r23
	ctx.r3.u64 = ctx.r21.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x881852F8;
	sub_880547A0(ctx, base);
loc_881852F8:
	// add r23,r31,r23
	ctx.r23.u64 = ctx.r31.u64 + ctx.r23.u64;
loc_881852FC:
	// subf r11,r27,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// bge cr6,0x88184dbc
	if (!ctx.cr6.lt) goto loc_88184DBC;
loc_88185314:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x881853d8
	if (ctx.cr6.eq) goto loc_881853D8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x881853d8
	if (!ctx.cr6.eq) goto loc_881853D8;
	// add r11,r21,r23
	ctx.r11.u64 = ctx.r21.u64 + ctx.r23.u64;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// ble cr6,0x8818537c
	if (!ctx.cr6.gt) goto loc_8818537C;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x88185330;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8818537c
	if (!ctx.cr6.eq) goto loc_8818537C;
	// lbz r10,-2(r11)
	ctx.current_instruction = 0x8818533C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8818537c
	if (!ctx.cr6.eq) goto loc_8818537C;
	// lbz r10,-3(r11)
	ctx.current_instruction = 0x88185348;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8818537c
	if (!ctx.cr6.eq) goto loc_8818537C;
	// stw r17,22004(r30)
	ctx.current_instruction = 0x88185354;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r17.u32);
	// stb r22,22016(r30)
	ctx.current_instruction = 0x88185358;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r22.u8);
	// stb r22,22017(r30)
	ctx.current_instruction = 0x8818535C;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r22.u8);
	// stb r24,22018(r30)
	ctx.current_instruction = 0x88185360;
	REX_STORE_U8(ctx.r30.u32 + 22018, ctx.r24.u8);
	// b 0x881853d0
	goto loc_881853D0;
loc_88185368:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x881853f0
	if (!ctx.cr6.eq) goto loc_881853F0;
loc_88185370:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8818537C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x881853ac
	if (!ctx.cr6.gt) goto loc_881853AC;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x88185384;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881853ac
	if (!ctx.cr6.eq) goto loc_881853AC;
	// lbz r10,-2(r11)
	ctx.current_instruction = 0x88185390;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881853ac
	if (!ctx.cr6.eq) goto loc_881853AC;
	// stw r16,22004(r30)
	ctx.current_instruction = 0x8818539C;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r16.u32);
	// stb r22,22016(r30)
	ctx.current_instruction = 0x881853A0;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r22.u8);
	// stb r22,22017(r30)
	ctx.current_instruction = 0x881853A4;
	REX_STORE_U8(ctx.r30.u32 + 22017, ctx.r22.u8);
	// b 0x881853d0
	goto loc_881853D0;
loc_881853AC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x881853cc
	if (ctx.cr6.eq) goto loc_881853CC;
	// lbz r11,-1(r11)
	ctx.current_instruction = 0x881853B4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881853cc
	if (!ctx.cr6.eq) goto loc_881853CC;
	// stw r24,22004(r30)
	ctx.current_instruction = 0x881853C0;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r24.u32);
	// stb r22,22016(r30)
	ctx.current_instruction = 0x881853C4;
	REX_STORE_U8(ctx.r30.u32 + 22016, ctx.r22.u8);
	// b 0x881853d0
	goto loc_881853D0;
loc_881853CC:
	// stw r22,22004(r30)
	ctx.current_instruction = 0x881853CC;
	REX_STORE_U32(ctx.r30.u32 + 22004, ctx.r22.u32);
loc_881853D0:
	// lwz r11,22004(r30)
	ctx.current_instruction = 0x881853D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22004);
	// subf r23,r11,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r11.u64;
loc_881853D8:
	// stw r21,0(r14)
	ctx.current_instruction = 0x881853D8;
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,0(r29)
	ctx.current_instruction = 0x881853E0;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881853EC:
	// li r3,-9
	ctx.r3.s64 = -9;
loc_881853F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88198578) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88198578;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88198578) {
			switch (rex_dispatch_address) {
				case 0x88198580:
				case 0x881986E8:
				case 0x881986F0:
				case 0x88198748:
				case 0x8819876C:
				case 0x88198790:
				case 0x881987B4:
				case 0x881987D8:
				case 0x88198848:
				case 0x88198874:
				case 0x8819888C:
				case 0x88198894:
				case 0x881988AC:
				case 0x881988DC:
				case 0x8819890C:
				case 0x88198938:
				case 0x8819895C:
				case 0x8819896C:
				case 0x88198990:
				case 0x881989B4:
				case 0x881989D8:
				case 0x88198A04:
				case 0x88198A28:
				case 0x88198A4C:
				case 0x88198A78:
				case 0x88198B58:
				case 0x88198BE4:
				case 0x88198BFC:
				case 0x88198C70:
				case 0x88198CB0:
				case 0x88198CFC:
				case 0x88198D2C:
				case 0x88198D9C:
				case 0x88198DCC:
				case 0x88198E18:
				case 0x88198E3C:
				case 0x88198E64:
				case 0x88198E9C:
				case 0x88198EE8:
				case 0x88198F18:
				case 0x88198F88:
				case 0x88198FB8:
				case 0x88199004:
				case 0x88199028:
				case 0x88199050:
				case 0x88199080:
				case 0x88199108:
				case 0x88199194:
				case 0x881991AC:
				case 0x88199210:
				case 0x88199234:
				case 0x88199260:
				case 0x88199284:
				case 0x881992B0:
				case 0x881992D4:
				case 0x88199300:
				case 0x88199324:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88198578;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88198580: goto loc_88198580;
		case 0x881986E8: goto loc_881986E8;
		case 0x881986F0: goto loc_881986F0;
		case 0x88198748: goto loc_88198748;
		case 0x8819876C: goto loc_8819876C;
		case 0x88198790: goto loc_88198790;
		case 0x881987B4: goto loc_881987B4;
		case 0x881987D8: goto loc_881987D8;
		case 0x88198848: goto loc_88198848;
		case 0x88198874: goto loc_88198874;
		case 0x8819888C: goto loc_8819888C;
		case 0x88198894: goto loc_88198894;
		case 0x881988AC: goto loc_881988AC;
		case 0x881988DC: goto loc_881988DC;
		case 0x8819890C: goto loc_8819890C;
		case 0x88198938: goto loc_88198938;
		case 0x8819895C: goto loc_8819895C;
		case 0x8819896C: goto loc_8819896C;
		case 0x88198990: goto loc_88198990;
		case 0x881989B4: goto loc_881989B4;
		case 0x881989D8: goto loc_881989D8;
		case 0x88198A04: goto loc_88198A04;
		case 0x88198A28: goto loc_88198A28;
		case 0x88198A4C: goto loc_88198A4C;
		case 0x88198A78: goto loc_88198A78;
		case 0x88198B58: goto loc_88198B58;
		case 0x88198BE4: goto loc_88198BE4;
		case 0x88198BFC: goto loc_88198BFC;
		case 0x88198C70: goto loc_88198C70;
		case 0x88198CB0: goto loc_88198CB0;
		case 0x88198CFC: goto loc_88198CFC;
		case 0x88198D2C: goto loc_88198D2C;
		case 0x88198D9C: goto loc_88198D9C;
		case 0x88198DCC: goto loc_88198DCC;
		case 0x88198E18: goto loc_88198E18;
		case 0x88198E3C: goto loc_88198E3C;
		case 0x88198E64: goto loc_88198E64;
		case 0x88198E9C: goto loc_88198E9C;
		case 0x88198EE8: goto loc_88198EE8;
		case 0x88198F18: goto loc_88198F18;
		case 0x88198F88: goto loc_88198F88;
		case 0x88198FB8: goto loc_88198FB8;
		case 0x88199004: goto loc_88199004;
		case 0x88199028: goto loc_88199028;
		case 0x88199050: goto loc_88199050;
		case 0x88199080: goto loc_88199080;
		case 0x88199108: goto loc_88199108;
		case 0x88199194: goto loc_88199194;
		case 0x881991AC: goto loc_881991AC;
		case 0x88199210: goto loc_88199210;
		case 0x88199234: goto loc_88199234;
		case 0x88199260: goto loc_88199260;
		case 0x88199284: goto loc_88199284;
		case 0x881992B0: goto loc_881992B0;
		case 0x881992D4: goto loc_881992D4;
		case 0x88199300: goto loc_88199300;
		case 0x88199324: goto loc_88199324;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88198580;
	__savegprlr_14(ctx, base);
loc_88198580:
	// stwu r1,-1440(r1)
	ctx.current_instruction = 0x88198580;
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// lwz r6,332(r3)
	ctx.current_instruction = 0x88198588;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// lwz r11,20400(r3)
	ctx.current_instruction = 0x88198590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20400);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r9,1524(r1)
	ctx.current_instruction = 0x88198598;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r15,208(r3)
	ctx.current_instruction = 0x881985A0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r19,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r19.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// lwz r8,20404(r3)
	ctx.current_instruction = 0x881985B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20404);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,204(r3)
	ctx.current_instruction = 0x881985C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lbz r7,4(r14)
	ctx.current_instruction = 0x881985CC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r14.u32 + 4);
	// stw r9,112(r1)
	ctx.current_instruction = 0x881985D0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lwz r6,0(r14)
	ctx.current_instruction = 0x881985D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r30,3788(r31)
	ctx.current_instruction = 0x881985F0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// lwz r29,3816(r31)
	ctx.current_instruction = 0x881985F4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3816);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,6608(r31)
	ctx.current_instruction = 0x881985FC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 6608);
	// lwz r21,340(r31)
	ctx.current_instruction = 0x88198600;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r28,3792(r31)
	ctx.current_instruction = 0x88198604;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// add r24,r7,r24
	ctx.r24.u64 = ctx.r7.u64 + ctx.r24.u64;
	// lwz r4,112(r1)
	ctx.current_instruction = 0x8819860C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,3796(r31)
	ctx.current_instruction = 0x88198610;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// mullw r4,r4,r15
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r15.s32);
	// lwz r26,3820(r31)
	ctx.current_instruction = 0x88198618;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// lwz r25,3824(r31)
	ctx.current_instruction = 0x8819861C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// lwz r20,1772(r31)
	ctx.current_instruction = 0x88198620;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// stw r21,120(r1)
	ctx.current_instruction = 0x88198624;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r24,112(r1)
	ctx.current_instruction = 0x88198628;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r15,r6,12,30,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r27,r27,r11
	ctx.r27.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r26,r26,r11
	ctx.r26.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r25,r25,r11
	ctx.r25.u64 = ctx.r25.u64 + ctx.r11.u64;
	// beq cr6,0x88198664
	if (ctx.cr6.eq) goto loc_88198664;
	// rlwinm r21,r6,8,29,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x7;
	// stw r21,120(r1)
	ctx.current_instruction = 0x88198660;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
loc_88198664:
	// lwz r11,396(r31)
	ctx.current_instruction = 0x88198664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88198688
	if (ctx.cr6.eq) goto loc_88198688;
	// rlwinm r11,r6,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3;
	// addi r11,r11,735
	ctx.r11.s64 = ctx.r11.s64 + 735;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,108(r1)
	ctx.current_instruction = 0x88198680;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x88198690
	goto loc_88198690;
loc_88198688:
	// addi r11,r31,2916
	ctx.r11.s64 = ctx.r31.s64 + 2916;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8819868C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_88198690:
	// rlwinm r11,r6,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x881987dc
	if (ctx.cr6.eq) goto loc_881987DC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x881987e4
	if (ctx.cr6.eq) goto loc_881987E4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x881986b4
	if (ctx.cr6.eq) goto loc_881986B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x88198a80
	if (!ctx.cr6.eq) goto loc_88198A80;
loc_881986B4:
	// lwz r24,1532(r1)
	ctx.current_instruction = 0x881986B4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r21,1540(r1)
	ctx.current_instruction = 0x881986BC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881986C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r24,100(r1)
	ctx.current_instruction = 0x881986D4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,96(r1)
	ctx.current_instruction = 0x881986DC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// bne cr6,0x881986ec
	if (!ctx.cr6.eq) goto loc_881986EC;
	// bl 0x881c1c38
	ctx.lr = 0x881986E8;
	sub_881C1C38(ctx, base);
loc_881986E8:
	// b 0x881986f0
	goto loc_881986F0;
loc_881986EC:
	// bl 0x881c1b70
	ctx.lr = 0x881986F0;
	sub_881C1B70(ctx, base);
loc_881986F0:
	// lwz r11,0(r14)
	ctx.current_instruction = 0x881986F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x88198710
	if (!ctx.cr6.eq) goto loc_88198710;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x8819871c
	goto loc_8819871C;
loc_88198710:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8819871C:
	// lwz r11,3960(r31)
	ctx.current_instruction = 0x8819871C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3960);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x88198728;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,100(r1)
	ctx.current_instruction = 0x88198730;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,460(r31)
	ctx.current_instruction = 0x88198738;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// lwz r5,204(r31)
	ctx.current_instruction = 0x8819873C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88198740;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x881c3d98
	ctx.lr = 0x88198748;
	sub_881C3D98(ctx, base);
loc_88198748:
	// lwz r10,22184(r31)
	ctx.current_instruction = 0x88198748;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819875c
	if (ctx.cr6.eq) goto loc_8819875C;
	// stw r24,100(r1)
	ctx.current_instruction = 0x88198754;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r21,96(r1)
	ctx.current_instruction = 0x88198758;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_8819875C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c4410
	ctx.lr = 0x8819876C;
	sub_881C4410(ctx, base);
loc_8819876C:
	// lwz r11,22184(r31)
	ctx.current_instruction = 0x8819876C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88198790
	if (ctx.cr6.eq) goto loc_88198790;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2a68
	ctx.lr = 0x88198790;
	sub_881C2A68(ctx, base);
loc_88198790:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88198794;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x8819879C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r8,100(r1)
	ctx.current_instruction = 0x881987A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881987B4;
	sub_881C2C28(ctx, base);
loc_881987B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,96(r1)
	ctx.current_instruction = 0x881987BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x881987C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,100(r1)
	ctx.current_instruction = 0x881987CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881987D8;
	sub_881C2C28(ctx, base);
loc_881987D8:
	// b 0x88198a78
	goto loc_88198A78;
loc_881987DC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x88198808
	if (!ctx.cr6.eq) goto loc_88198808;
loc_881987E4:
	// lwz r11,1548(r1)
	ctx.current_instruction = 0x881987E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r24,1532(r1)
	ctx.current_instruction = 0x881987E8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r21,1540(r1)
	ctx.current_instruction = 0x881987EC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r10,1556(r1)
	ctx.current_instruction = 0x881987F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// stw r11,104(r1)
	ctx.current_instruction = 0x881987F4;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r24,96(r1)
	ctx.current_instruction = 0x881987F8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r21,100(r1)
	ctx.current_instruction = 0x881987FC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r10,116(r1)
	ctx.current_instruction = 0x88198800;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x88198850
	goto loc_88198850;
loc_88198808:
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x88198808;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,1540(r1)
	ctx.current_instruction = 0x88198814;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stw r9,92(r1)
	ctx.current_instruction = 0x8819881C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x88198820;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r4,1532(r1)
	ctx.current_instruction = 0x8819882C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c4298
	ctx.lr = 0x88198848;
	sub_881C4298(ctx, base);
loc_88198848:
	// lwz r24,96(r1)
	ctx.current_instruction = 0x88198848;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,100(r1)
	ctx.current_instruction = 0x8819884C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_88198850:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88198850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x88198890
	if (!ctx.cr6.eq) goto loc_88198890;
	// bl 0x881c1c38
	ctx.lr = 0x88198874;
	sub_881C1C38(ctx, base);
loc_88198874:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c1c38
	ctx.lr = 0x8819888C;
	sub_881C1C38(ctx, base);
loc_8819888C:
	// b 0x881988ac
	goto loc_881988AC;
loc_88198890:
	// bl 0x881c1b70
	ctx.lr = 0x88198894;
	sub_881C1B70(ctx, base);
loc_88198894:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c1b70
	ctx.lr = 0x881988AC;
	sub_881C1B70(ctx, base);
loc_881988AC:
	// lwz r11,3960(r31)
	ctx.current_instruction = 0x881988AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3960);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r9,100(r1)
	ctx.current_instruction = 0x881988B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x881988C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,460(r31)
	ctx.current_instruction = 0x881988C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x881988D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r1)
	ctx.current_instruction = 0x881988D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x881c3d98
	ctx.lr = 0x881988DC;
	sub_881C3D98(ctx, base);
loc_881988DC:
	// lwz r11,3960(r31)
	ctx.current_instruction = 0x881988DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3960);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r9,116(r1)
	ctx.current_instruction = 0x881988E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,104(r1)
	ctx.current_instruction = 0x881988EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,1024
	ctx.r6.s64 = ctx.r1.s64 + 1024;
	// lwz r10,460(r31)
	ctx.current_instruction = 0x881988F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,204(r31)
	ctx.current_instruction = 0x881988FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88198904;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x881c3d98
	ctx.lr = 0x8819890C;
	sub_881C3D98(ctx, base);
loc_8819890C:
	// lwz r11,3244(r31)
	ctx.current_instruction = 0x8819890C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,1024
	ctx.r5.s64 = ctx.r1.s64 + 1024;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bctrl 
	ctx.lr = 0x88198938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198938:
	// lwz r10,22184(r31)
	ctx.current_instruction = 0x88198938;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8819894c
	if (ctx.cr6.eq) goto loc_8819894C;
	// stw r24,96(r1)
	ctx.current_instruction = 0x88198944;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r21,100(r1)
	ctx.current_instruction = 0x88198948;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
loc_8819894C:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c4410
	ctx.lr = 0x8819895C;
	sub_881C4410(ctx, base);
loc_8819895C:
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c4410
	ctx.lr = 0x8819896C;
	sub_881C4410(ctx, base);
loc_8819896C:
	// lwz r11,22184(r31)
	ctx.current_instruction = 0x8819896C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88198990
	if (ctx.cr6.eq) goto loc_88198990;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2a68
	ctx.lr = 0x88198990;
	sub_881C2A68(ctx, base);
loc_88198990:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88198994;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,100(r1)
	ctx.current_instruction = 0x8819899C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x881989A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881989B4;
	sub_881C2C28(ctx, base);
loc_881989B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,116(r1)
	ctx.current_instruction = 0x881989BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x881989C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r8,104(r1)
	ctx.current_instruction = 0x881989CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2c28
	ctx.lr = 0x881989D8;
	sub_881C2C28(ctx, base);
loc_881989D8:
	// lwz r11,3244(r31)
	ctx.current_instruction = 0x881989D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x88198A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198A04:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88198A0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r9,100(r1)
	ctx.current_instruction = 0x88198A14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,96(r1)
	ctx.current_instruction = 0x88198A1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2c28
	ctx.lr = 0x88198A28;
	sub_881C2C28(ctx, base);
loc_88198A28:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,116(r1)
	ctx.current_instruction = 0x88198A30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88198A38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r8,104(r1)
	ctx.current_instruction = 0x88198A40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881c2c28
	ctx.lr = 0x88198A4C;
	sub_881C2C28(ctx, base);
loc_88198A4C:
	// lwz r11,3244(r31)
	ctx.current_instruction = 0x88198A4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bctrl 
	ctx.lr = 0x88198A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198A78:
	// lwz r21,120(r1)
	ctx.current_instruction = 0x88198A78;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,112(r1)
	ctx.current_instruction = 0x88198A7C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_88198A80:
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,104(r1)
	ctx.current_instruction = 0x88198A88;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r22,r11,26008
	ctx.r22.s64 = ctx.r11.s64 + 26008;
	// addi r23,r1,768
	ctx.r23.s64 = ctx.r1.s64 + 768;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r22,120(r1)
	ctx.current_instruction = 0x88198AA0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// ori r25,r10,32768
	ctx.r25.u64 = ctx.r10.u64 | 32768;
loc_88198AA8:
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// lbzx r11,r27,r11
	ctx.current_instruction = 0x88198AAC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881994d4
	if (ctx.cr6.eq) goto loc_881994D4;
	// lwz r11,0(r14)
	ctx.current_instruction = 0x88198AB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88198c3c
	if (ctx.cr6.eq) goto loc_88198C3C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88198c3c
	if (!ctx.cr6.eq) goto loc_88198C3C;
	// lwz r11,2560(r31)
	ctx.current_instruction = 0x88198AD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x88198AD4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88198af0
	if (!ctx.cr6.eq) goto loc_88198AF0;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r11,20(r30)
	ctx.current_instruction = 0x88198AE8;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x88198c14
	goto loc_88198C14;
loc_88198AF0:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x88198AF0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x88198AF4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x88198AFC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x88198B0C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88198bdc
	if (ctx.cr6.lt) goto loc_88198BDC;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88198B1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x88198B2C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x88198B34;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88198bd4
	if (!ctx.cr6.lt) goto loc_88198BD4;
loc_88198B3C:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x88198B3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x88198B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88198b68
	if (ctx.cr6.lt) goto loc_88198B68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x88198B58;
	sub_88156440(ctx, base);
loc_88198B58:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88198b3c
	if (ctx.cr6.eq) goto loc_88198B3C;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x88198c14
	goto loc_88198C14;
loc_88198B68:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88198B68;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88198B70;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88198B78;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88198B7C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88198B84;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88198B88;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88198B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x88198B94;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x88198B9C;
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
	ctx.current_instruction = 0x88198BB8;
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
	ctx.current_instruction = 0x88198BD0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_88198BD4:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x88198c14
	goto loc_88198C14;
loc_88198BDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x88198BE4;
	sub_88156500(ctx, base);
loc_88198BE4:
	// ld r11,0(r30)
	ctx.current_instruction = 0x88198BE4;
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
	ctx.lr = 0x88198BFC;
	sub_88156500(ctx, base);
loc_88198BFC:
	// add r10,r29,r25
	ctx.r10.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x88198C04;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88198be4
	if (ctx.cr6.lt) goto loc_88198BE4;
loc_88198C14:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x88198C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x88198C18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881997f4
	if (!ctx.cr6.eq) goto loc_881997F4;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bge cr6,0x881997f4
	if (!ctx.cr6.lt) goto loc_881997F4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r22,-32
	ctx.r10.s64 = ctx.r22.s64 + -32;
	// lwzx r15,r11,r22
	ctx.current_instruction = 0x88198C34;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// lwzx r21,r11,r10
	ctx.current_instruction = 0x88198C38;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_88198C3C:
	// add r11,r27,r14
	ctx.r11.u64 = ctx.r27.u64 + ctx.r14.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stb r21,8(r11)
	ctx.current_instruction = 0x88198C44;
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r21.u8);
	// bne cr6,0x88198c8c
	if (!ctx.cr6.eq) goto loc_88198C8C;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88198C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r20,1772(r31)
	ctx.current_instruction = 0x88198C58;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x88198C60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x88198C64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88198C70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198C70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x88198C78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x88198C80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x88199318
	goto loc_88199318;
loc_88198C8C:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x88198e78
	if (!ctx.cr6.eq) goto loc_88198E78;
	// lwz r20,1768(r31)
	ctx.current_instruction = 0x88198C94;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x88198CB0;
	sub_88052D90(ctx, base);
loc_88198CB0:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x88198CB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88198d50
	if (ctx.cr6.eq) goto loc_88198D50;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88198d3c
	if (!ctx.cr6.eq) goto loc_88198D3C;
	// lwz r11,0(r14)
	ctx.current_instruction = 0x88198CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88198d3c
	if (!ctx.cr6.eq) goto loc_88198D3C;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198CD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198CD8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198CDC;
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
	ctx.current_instruction = 0x88198CEC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198CF0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198cfc
	if (!ctx.cr0.lt) goto loc_88198CFC;
	// bl 0x88156678
	ctx.lr = 0x88198CFC;
	sub_88156678(ctx, base);
loc_88198CFC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198de0
	if (!ctx.cr6.eq) goto loc_88198DE0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198D04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198D08;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198D0C;
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
	ctx.current_instruction = 0x88198D1C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198D20;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198d2c
	if (!ctx.cr0.lt) goto loc_88198D2C;
	// bl 0x88156678
	ctx.lr = 0x88198D2C;
	sub_88156678(ctx, base);
loc_88198D2C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198ddc
	if (!ctx.cr6.eq) goto loc_88198DDC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x88198de0
	goto loc_88198DE0;
loc_88198D3C:
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stbx r15,r27,r11
	ctx.current_instruction = 0x88198D48;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r15.u8);
	// b 0x88198df0
	goto loc_88198DF0;
loc_88198D50:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x88198d74
	if (ctx.cr6.eq) goto loc_88198D74;
	// lwz r10,0(r14)
	ctx.current_instruction = 0x88198D58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stbx r9,r27,r11
	ctx.current_instruction = 0x88198D68;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x88198df0
	goto loc_88198DF0;
loc_88198D74:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198D74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198D78;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198D7C;
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
	ctx.current_instruction = 0x88198D8C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198D90;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198d9c
	if (!ctx.cr0.lt) goto loc_88198D9C;
	// bl 0x88156678
	ctx.lr = 0x88198D9C;
	sub_88156678(ctx, base);
loc_88198D9C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198de0
	if (!ctx.cr6.eq) goto loc_88198DE0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198DA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198DA8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198DAC;
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
	ctx.current_instruction = 0x88198DBC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198DC0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198dcc
	if (!ctx.cr0.lt) goto loc_88198DCC;
	// bl 0x88156678
	ctx.lr = 0x88198DCC;
	sub_88156678(ctx, base);
loc_88198DCC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198ddc
	if (!ctx.cr6.eq) goto loc_88198DDC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x88198de0
	goto loc_88198DE0;
loc_88198DDC:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88198DE0:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stbx r9,r27,r11
	ctx.current_instruction = 0x88198DEC;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u8);
loc_88198DF0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88198e3c
	if (ctx.cr6.eq) goto loc_88198E3C;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88198DF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x88198E04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x88198E0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88198E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198E18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x88198E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x88198E2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88198E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198E3C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88199324
	if (ctx.cr6.eq) goto loc_88199324;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88198E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x88198E50;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x88198E58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88198E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88198E64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x88198E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x88199310
	goto loc_88199310;
loc_88198E78:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x88199064
	if (!ctx.cr6.eq) goto loc_88199064;
	// lwz r20,1768(r31)
	ctx.current_instruction = 0x88198E80;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x88052d90
	ctx.lr = 0x88198E9C;
	sub_88052D90(ctx, base);
loc_88198E9C:
	// lwz r11,3408(r31)
	ctx.current_instruction = 0x88198E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88198f3c
	if (ctx.cr6.eq) goto loc_88198F3C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88198f28
	if (!ctx.cr6.eq) goto loc_88198F28;
	// lwz r11,0(r14)
	ctx.current_instruction = 0x88198EB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88198f28
	if (!ctx.cr6.eq) goto loc_88198F28;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198EC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198EC4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198EC8;
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
	ctx.current_instruction = 0x88198ED8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198EDC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198ee8
	if (!ctx.cr0.lt) goto loc_88198EE8;
	// bl 0x88156678
	ctx.lr = 0x88198EE8;
	sub_88156678(ctx, base);
loc_88198EE8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198fcc
	if (!ctx.cr6.eq) goto loc_88198FCC;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198EF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198EF4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198EF8;
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
	ctx.current_instruction = 0x88198F08;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198F0C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198f18
	if (!ctx.cr0.lt) goto loc_88198F18;
	// bl 0x88156678
	ctx.lr = 0x88198F18;
	sub_88156678(ctx, base);
loc_88198F18:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198fc8
	if (!ctx.cr6.eq) goto loc_88198FC8;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x88198fcc
	goto loc_88198FCC;
loc_88198F28:
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// rlwinm r29,r15,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x2;
	// clrlwi r28,r15,31
	ctx.r28.u64 = ctx.r15.u32 & 0x1;
	// stbx r15,r27,r11
	ctx.current_instruction = 0x88198F34;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r15.u8);
	// b 0x88198fdc
	goto loc_88198FDC;
loc_88198F3C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x88198f60
	if (ctx.cr6.eq) goto loc_88198F60;
	// lwz r10,0(r14)
	ctx.current_instruction = 0x88198F44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r29,r9,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stbx r9,r27,r11
	ctx.current_instruction = 0x88198F54;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x88198fdc
	goto loc_88198FDC;
loc_88198F60:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198F60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198F64;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198F68;
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
	ctx.current_instruction = 0x88198F78;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198F7C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198f88
	if (!ctx.cr0.lt) goto loc_88198F88;
	// bl 0x88156678
	ctx.lr = 0x88198F88;
	sub_88156678(ctx, base);
loc_88198F88:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198fcc
	if (!ctx.cr6.eq) goto loc_88198FCC;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88198F90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88198F94;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88198F98;
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
	ctx.current_instruction = 0x88198FA8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x88198FAC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88198fb8
	if (!ctx.cr0.lt) goto loc_88198FB8;
	// bl 0x88156678
	ctx.lr = 0x88198FB8;
	sub_88156678(ctx, base);
loc_88198FB8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x88198fc8
	if (!ctx.cr6.eq) goto loc_88198FC8;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x88198fcc
	goto loc_88198FCC;
loc_88198FC8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88198FCC:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stbx r9,r27,r11
	ctx.current_instruction = 0x88198FD8;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u8);
loc_88198FDC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x88199028
	if (ctx.cr6.eq) goto loc_88199028;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88198FE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x88198FF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x88198FF8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199004:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x8819900C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x88199018;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199028:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x88199324
	if (ctx.cr6.eq) goto loc_88199324;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88199030;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x8819903C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x88199044;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199050:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x88199058;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x88199310
	goto loc_88199310;
loc_88199064:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// bne cr6,0x88199324
	if (!ctx.cr6.eq) goto loc_88199324;
	// lwz r20,1768(r31)
	ctx.current_instruction = 0x8819906C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x88052d90
	ctx.lr = 0x88199080;
	sub_88052D90(ctx, base);
loc_88199080:
	// lwz r11,2480(r31)
	ctx.current_instruction = 0x88199080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,84(r31)
	ctx.current_instruction = 0x88199088;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bne cr6,0x881990a0
	if (!ctx.cr6.eq) goto loc_881990A0;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r11,20(r30)
	ctx.current_instruction = 0x88199098;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x881991c4
	goto loc_881991C4;
loc_881990A0:
	// lbz r4,8(r11)
	ctx.current_instruction = 0x881990A0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r30)
	ctx.current_instruction = 0x881990A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	ctx.current_instruction = 0x881990AC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.current_instruction = 0x881990BC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8819918c
	if (ctx.cr6.lt) goto loc_8819918C;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x881990CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = ctx.r29.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r30)
	ctx.current_instruction = 0x881990DC;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	ctx.current_instruction = 0x881990E4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x88199184
	if (!ctx.cr6.lt) goto loc_88199184;
loc_881990EC:
	// lwz r10,16(r30)
	ctx.current_instruction = 0x881990EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.current_instruction = 0x881990F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88199118
	if (ctx.cr6.lt) goto loc_88199118;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156440
	ctx.lr = 0x88199108;
	sub_88156440(ctx, base);
loc_88199108:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881990ec
	if (ctx.cr6.eq) goto loc_881990EC;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881991c4
	goto loc_881991C4;
loc_88199118:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88199118;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88199120;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88199128;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x8819912C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88199134;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88199138;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88199140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,12(r30)
	ctx.current_instruction = 0x88199144;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8819914C;
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
	ctx.current_instruction = 0x88199168;
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
	ctx.current_instruction = 0x88199180;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
loc_88199184:
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// b 0x881991c4
	goto loc_881991C4;
loc_8819918C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156500
	ctx.lr = 0x88199194;
	sub_88156500(ctx, base);
loc_88199194:
	// ld r11,0(r30)
	ctx.current_instruction = 0x88199194;
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
	ctx.lr = 0x881991AC;
	sub_88156500(ctx, base);
loc_881991AC:
	// add r10,r29,r25
	ctx.r10.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881991B4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r29,r8
	ctx.r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x88199194
	if (ctx.cr6.lt) goto loc_88199194;
loc_881991C4:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x881991C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881991CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881997f4
	if (!ctx.cr6.eq) goto loc_881997F4;
	// addi r11,r14,14
	ctx.r11.s64 = ctx.r14.s64 + 14;
	// lwz r29,108(r1)
	ctx.current_instruction = 0x881991DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r30,r27,r11
	ctx.current_instruction = 0x881991E8;
	REX_STORE_U8(ctx.r27.u32 + ctx.r11.u32, ctx.r30.u8);
	// beq cr6,0x88199234
	if (ctx.cr6.eq) goto loc_88199234;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881991F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881991FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199210:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x88199218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x88199224;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199234:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88199284
	if (ctx.cr6.eq) goto loc_88199284;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88199240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x8819924C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199260:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x88199268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x88199274;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199284:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881992d4
	if (ctx.cr6.eq) goto loc_881992D4;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x88199290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x8819929C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881992B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881992B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x881992B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881992C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881992D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881992D4:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88199324
	if (ctx.cr6.eq) goto loc_88199324;
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881992E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1864(r31)
	ctx.current_instruction = 0x881992EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r1)
	ctx.current_instruction = 0x881992F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199300:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881997ec
	if (!ctx.cr6.eq) goto loc_881997EC;
	// lwz r11,3212(r31)
	ctx.current_instruction = 0x88199308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3212);
	// li r6,3
	ctx.r6.s64 = 3;
loc_88199310:
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x88199310;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// li r4,8
	ctx.r4.s64 = 8;
loc_88199318:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88199324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88199324:
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3200(r31)
	ctx.current_instruction = 0x88199328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// addi r9,r11,11312
	ctx.r9.s64 = ctx.r11.s64 + 11312;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88199358
	if (!ctx.cr6.eq) goto loc_88199358;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r20,-2
	ctx.r10.s64 = ctx.r20.s64 + -2;
	// addi r11,r20,-4
	ctx.r11.s64 = ctx.r20.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88199348:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x88199348;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x88199350;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88199348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88199348;
loc_88199358:
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bge cr6,0x88199374
	if (!ctx.cr6.lt) goto loc_88199374;
	// lwz r30,104(r1)
	ctx.current_instruction = 0x88199364;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x88199390
	goto loc_88199390;
loc_88199374:
	// bne cr6,0x88199384
	if (!ctx.cr6.eq) goto loc_88199384;
	// addi r30,r1,256
	ctx.r30.s64 = ctx.r1.s64 + 256;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// b 0x8819938c
	goto loc_8819938C;
loc_88199384:
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_8819938C:
	// li r28,8
	ctx.r28.s64 = 8;
loc_88199390:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8819939C:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r29,r6,3
	ctx.r29.s64 = ctx.r6.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881993B0:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r30,r4
	ctx.r9.u64 = ctx.r30.u64 + ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lbzx r10,r9,r11
	ctx.current_instruction = 0x881993C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lhz r7,0(r8)
	ctx.current_instruction = 0x881993C4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x881993dc
	if (!ctx.cr0.lt) goto loc_881993DC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x881993e8
	goto loc_881993E8;
loc_881993DC:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881993e8
	if (!ctx.cr6.gt) goto loc_881993E8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881993E8:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,2(r8)
	ctx.current_instruction = 0x881993EC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// stbx r10,r11,r6
	ctx.current_instruction = 0x881993F0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r10,1(r7)
	ctx.current_instruction = 0x881993F8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8819940c
	if (!ctx.cr0.lt) goto loc_8819940C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x88199418
	goto loc_88199418;
loc_8819940C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88199418
	if (!ctx.cr6.gt) goto loc_88199418;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88199418:
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r22,r8,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r8,112(r1)
	ctx.current_instruction = 0x8819942C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lbz r8,2(r7)
	ctx.current_instruction = 0x88199430;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// lhzx r7,r22,r20
	ctx.current_instruction = 0x88199434;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r22.u32 + ctx.r20.u32);
	// lwz r22,112(r1)
	ctx.current_instruction = 0x88199438;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,1(r22)
	ctx.current_instruction = 0x8819943C;
	REX_STORE_U8(ctx.r22.u32 + 1, ctx.r10.u8);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x88199454
	if (!ctx.cr0.lt) goto loc_88199454;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x88199460
	goto loc_88199460;
loc_88199454:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x88199460
	if (!ctx.cr6.gt) goto loc_88199460;
	// li r10,255
	ctx.r10.s64 = 255;
loc_88199460:
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,112(r1)
	ctx.current_instruction = 0x8819946C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,3(r7)
	ctx.current_instruction = 0x88199478;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// lhzx r7,r8,r20
	ctx.current_instruction = 0x8819947C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r20.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,112(r1)
	ctx.current_instruction = 0x88199488;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r22,2(r8)
	ctx.current_instruction = 0x8819948C;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r22.u8);
	// bge 0x8819949c
	if (!ctx.cr0.lt) goto loc_8819949C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x881994a8
	goto loc_881994A8;
loc_8819949C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881994a8
	if (!ctx.cr6.gt) goto loc_881994A8;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881994A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r29,r11
	ctx.current_instruction = 0x881994AC;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881993b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881993B0;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// blt cr6,0x8819939c
	if (ctx.cr6.lt) goto loc_8819939C;
	// lwz r22,120(r1)
	ctx.current_instruction = 0x881994CC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8819956c
	goto loc_8819956C;
loc_881994D4:
	// add r11,r27,r14
	ctx.r11.u64 = ctx.r27.u64 + ctx.r14.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// stb r26,8(r11)
	ctx.current_instruction = 0x881994DC;
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r26.u8);
	// bge cr6,0x881994f4
	if (!ctx.cr6.lt) goto loc_881994F4;
	// lwz r6,104(r1)
	ctx.current_instruction = 0x881994E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x88199510
	goto loc_88199510;
loc_881994F4:
	// bne cr6,0x88199504
	if (!ctx.cr6.eq) goto loc_88199504;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x8819950c
	goto loc_8819950C;
loc_88199504:
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_8819950C:
	// li r3,8
	ctx.r3.s64 = 8;
loc_88199510:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
loc_88199518:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8819952C:
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x8819952C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x88199540
	if (!ctx.cr6.lt) goto loc_88199540;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x8819954c
	goto loc_8819954C;
loc_88199540:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8819954c
	if (!ctx.cr6.gt) goto loc_8819954C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8819954C:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stbx r8,r7,r11
	ctx.current_instruction = 0x88199554;
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8819952c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819952C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// bne 0x88199518
	if (!ctx.cr0.eq) goto loc_88199518;
loc_8819956C:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bge cr6,0x88199598
	if (!ctx.cr6.lt) goto loc_88199598;
	// lwz r11,104(r1)
	ctx.current_instruction = 0x88199574;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8819958c
	if (!ctx.cr6.eq) goto loc_8819958C;
	// addi r23,r23,120
	ctx.r23.s64 = ctx.r23.s64 + 120;
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// b 0x88199594
	goto loc_88199594;
loc_8819958C:
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_88199594:
	// stw r10,104(r1)
	ctx.current_instruction = 0x88199594;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_88199598:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x88198aa8
	if (ctx.cr6.lt) goto loc_88198AA8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_881995AC:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,771
	ctx.r6.s64 = ctx.r1.s64 + 771;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_881995CC:
	// lwz r4,204(r31)
	ctx.current_instruction = 0x881995CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r1,769
	ctx.r3.s64 = ctx.r1.s64 + 769;
	// lbzx r30,r8,r5
	ctx.current_instruction = 0x881995D4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r4,r6,r11
	ctx.current_instruction = 0x881995E0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r3,r7,r3
	ctx.current_instruction = 0x881995E4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r1,770
	ctx.r7.s64 = ctx.r1.s64 + 770;
	// stbx r30,r8,r16
	ctx.current_instruction = 0x881995F0;
	REX_STORE_U8(ctx.r8.u32 + ctx.r16.u32, ctx.r30.u8);
	// lwz r8,204(r31)
	ctx.current_instruction = 0x881995F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r7,r29,r7
	ctx.current_instruction = 0x88199600;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
	// stb r3,1(r8)
	ctx.current_instruction = 0x88199608;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lwz r3,204(r31)
	ctx.current_instruction = 0x8819960C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
	// stb r7,2(r8)
	ctx.current_instruction = 0x8819961C;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lwz r7,204(r31)
	ctx.current_instruction = 0x88199620;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r8,r16
	ctx.r3.u64 = ctx.r8.u64 + ctx.r16.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r4,3(r3)
	ctx.current_instruction = 0x8819963C;
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// bdnz 0x881995cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881995CC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x881995ac
	if (ctx.cr6.lt) goto loc_881995AC;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8819966C:
	// lwz r9,208(r31)
	ctx.current_instruction = 0x8819966C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r6,r1,129
	ctx.r6.s64 = ctx.r1.s64 + 129;
	// lbzx r5,r11,r8
	ctx.current_instruction = 0x88199674;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r4,r1,193
	ctx.r4.s64 = ctx.r1.s64 + 193;
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbzx r9,r11,r7
	ctx.current_instruction = 0x88199680;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r6,r11,r6
	ctx.current_instruction = 0x88199684;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r4,r11,r4
	ctx.current_instruction = 0x88199688;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r5,r3,r18
	ctx.current_instruction = 0x8819968C;
	REX_STORE_U8(ctx.r3.u32 + ctx.r18.u32, ctx.r5.u8);
	// lwz r3,208(r31)
	ctx.current_instruction = 0x88199690;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r5,r3,r10
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stbx r9,r5,r17
	ctx.current_instruction = 0x88199698;
	REX_STORE_U8(ctx.r5.u32 + ctx.r17.u32, ctx.r9.u8);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// addi r30,r1,194
	ctx.r30.s64 = ctx.r1.s64 + 194;
	// addi r29,r1,131
	ctx.r29.s64 = ctx.r1.s64 + 131;
	// addi r28,r1,195
	ctx.r28.s64 = ctx.r1.s64 + 195;
	// addi r27,r1,132
	ctx.r27.s64 = ctx.r1.s64 + 132;
	// lbzx r3,r11,r3
	ctx.current_instruction = 0x881996B0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r26,r1,197
	ctx.r26.s64 = ctx.r1.s64 + 197;
	// addi r25,r1,134
	ctx.r25.s64 = ctx.r1.s64 + 134;
	// addi r24,r1,198
	ctx.r24.s64 = ctx.r1.s64 + 198;
	// lbzx r28,r11,r28
	ctx.current_instruction = 0x881996C0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lbzx r27,r11,r27
	ctx.current_instruction = 0x881996C4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// lbzx r26,r11,r26
	ctx.current_instruction = 0x881996C8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// lbzx r25,r11,r25
	ctx.current_instruction = 0x881996CC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// lbzx r24,r11,r24
	ctx.current_instruction = 0x881996D0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x881996D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + ctx.r18.u64;
	// stb r6,1(r5)
	ctx.current_instruction = 0x881996E0;
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r6.u8);
	// addi r6,r1,196
	ctx.r6.s64 = ctx.r1.s64 + 196;
	// lwz r5,208(r31)
	ctx.current_instruction = 0x881996E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// lbzx r5,r11,r30
	ctx.current_instruction = 0x881996F4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzx r30,r11,r29
	ctx.current_instruction = 0x881996F8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r29,r1,133
	ctx.r29.s64 = ctx.r1.s64 + 133;
	// lbzx r6,r11,r6
	ctx.current_instruction = 0x88199700;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stb r4,1(r9)
	ctx.current_instruction = 0x88199704;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// addi r4,r1,135
	ctx.r4.s64 = ctx.r1.s64 + 135;
	// lwz r9,208(r31)
	ctx.current_instruction = 0x8819970C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// lbzx r29,r11,r29
	ctx.current_instruction = 0x88199718;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r3,2(r9)
	ctx.current_instruction = 0x8819971C;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lwz r3,208(r31)
	ctx.current_instruction = 0x88199720;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
	// stb r5,2(r9)
	ctx.current_instruction = 0x8819972C;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88199730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r18
	ctx.r3.u64 = ctx.r9.u64 + ctx.r18.u64;
	// stb r30,3(r3)
	ctx.current_instruction = 0x8819973C;
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r30.u8);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x88199740;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r17
	ctx.r5.u64 = ctx.r9.u64 + ctx.r17.u64;
	// stb r28,3(r5)
	ctx.current_instruction = 0x8819974C;
	REX_STORE_U8(ctx.r5.u32 + 3, ctx.r28.u8);
	// lwz r3,208(r31)
	ctx.current_instruction = 0x88199750;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
	// stb r27,4(r9)
	ctx.current_instruction = 0x8819975C;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r27.u8);
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88199760;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + ctx.r17.u64;
	// stb r6,4(r3)
	ctx.current_instruction = 0x8819976C;
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x88199770;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r18
	ctx.r6.u64 = ctx.r9.u64 + ctx.r18.u64;
	// stb r29,5(r6)
	ctx.current_instruction = 0x8819977C;
	REX_STORE_U8(ctx.r6.u32 + 5, ctx.r29.u8);
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88199780;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + ctx.r17.u64;
	// stb r26,5(r3)
	ctx.current_instruction = 0x8819978C;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r26.u8);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x88199790;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r18
	ctx.r6.u64 = ctx.r9.u64 + ctx.r18.u64;
	// stb r25,6(r6)
	ctx.current_instruction = 0x8819979C;
	REX_STORE_U8(ctx.r6.u32 + 6, ctx.r25.u8);
	// lwz r5,208(r31)
	ctx.current_instruction = 0x881997A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + ctx.r17.u64;
	// stb r24,6(r3)
	ctx.current_instruction = 0x881997AC;
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r24.u8);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x881997B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r6,r1,199
	ctx.r6.s64 = ctx.r1.s64 + 199;
	// lbzx r5,r11,r4
	ctx.current_instruction = 0x881997B8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbzx r4,r11,r6
	ctx.current_instruction = 0x881997C0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r3,r9,r18
	ctx.r3.u64 = ctx.r9.u64 + ctx.r18.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stb r5,7(r3)
	ctx.current_instruction = 0x881997CC;
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r5.u8);
	// lwz r9,208(r31)
	ctx.current_instruction = 0x881997D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r17
	ctx.r6.u64 = ctx.r9.u64 + ctx.r17.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r4,7(r6)
	ctx.current_instruction = 0x881997E0;
	REX_STORE_U8(ctx.r6.u32 + 7, ctx.r4.u8);
	// bdnz 0x8819966c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819966C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_881997EC:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881997F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C9618) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C9618;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C9618) {
			switch (rex_dispatch_address) {
				case 0x881C9710:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C9618;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C9710: goto loc_881C9710;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881C961C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881C9620;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881C9624;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x881c9634
	if (!ctx.cr6.gt) goto loc_881C9634;
	// li r4,3
	ctx.r4.s64 = 3;
loc_881C9634:
	// lwz r11,21704(r3)
	ctx.current_instruction = 0x881C9634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,14136
	ctx.r11.s64 = ctx.r11.s64 + 14136;
	// bne cr6,0x881c96b8
	if (!ctx.cr6.eq) goto loc_881C96B8;
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
	ctx.current_instruction = 0x881C9660;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r5,21820(r3)
	ctx.current_instruction = 0x881C9678;
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r5.u32);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// lwzx r6,r8,r6
	ctx.current_instruction = 0x881C9680;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// stw r6,21824(r3)
	ctx.current_instruction = 0x881C9688;
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r8,r7
	ctx.current_instruction = 0x881C9690;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,21828(r3)
	ctx.current_instruction = 0x881C9694;
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r10.u32);
	// lwzx r7,r8,r31
	ctx.current_instruction = 0x881C9698;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stw r7,21832(r3)
	ctx.current_instruction = 0x881C969C;
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.current_instruction = 0x881C96A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,21836(r3)
	ctx.current_instruction = 0x881C96A4;
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r8,r5
	ctx.current_instruction = 0x881C96A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r5,21840(r3)
	ctx.current_instruction = 0x881C96AC;
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r8,r11
	ctx.current_instruction = 0x881C96B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x881c9708
	goto loc_881C9708;
loc_881C96B8:
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x881C96BC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r6,21820(r3)
	ctx.current_instruction = 0x881C96CC;
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.current_instruction = 0x881C96D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,21824(r3)
	ctx.current_instruction = 0x881C96E0;
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.current_instruction = 0x881C96E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,21828(r3)
	ctx.current_instruction = 0x881C96E8;
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.current_instruction = 0x881C96EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,21832(r3)
	ctx.current_instruction = 0x881C96F0;
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.current_instruction = 0x881C96F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,21836(r3)
	ctx.current_instruction = 0x881C96F8;
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.current_instruction = 0x881C96FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r5,21840(r3)
	ctx.current_instruction = 0x881C9700;
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.current_instruction = 0x881C9704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_881C9708:
	// stw r11,21844(r3)
	ctx.current_instruction = 0x881C9708;
	REX_STORE_U32(ctx.r3.u32 + 21844, ctx.r11.u32);
	// bl 0x881c8f90
	ctx.lr = 0x881C9710;
	sub_881C8F90(ctx, base);
loc_881C9710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881C9714;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881C971C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881CCF78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CCF78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CCF78) {
			switch (rex_dispatch_address) {
				case 0x881CCF80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CCF78;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CCF80: goto loc_881CCF80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x881CCF80;
	__savegprlr_16(ctx, base);
loc_881CCF80:
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// slw r19,r31,r11
	ctx.r19.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ccfa8
	if (ctx.cr6.eq) goto loc_881CCFA8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881ccfa8
	if (ctx.cr6.eq) goto loc_881CCFA8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x881cd1c0
	if (!ctx.cr6.eq) goto loc_881CD1C0;
loc_881CCFA8:
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
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x881cd000
	if (!ctx.cr6.eq) goto loc_881CD000;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r28,4
	ctx.r28.s64 = 4;
	// beq cr6,0x881ccfdc
	if (ctx.cr6.eq) goto loc_881CCFDC;
	// li r28,6
	ctx.r28.s64 = 6;
loc_881CCFDC:
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-204
	ctx.r8.s64 = ctx.r1.s64 + -204;
	// addi r7,r1,-206
	ctx.r7.s64 = ctx.r1.s64 + -206;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// addi r22,r19,1
	ctx.r22.s64 = ctx.r19.s64 + 1;
	// sthx r18,r9,r8
	ctx.current_instruction = 0x881CCFF4;
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r18.u16);
	// sthx r18,r9,r7
	ctx.current_instruction = 0x881CCFF8;
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r18.u16);
	// b 0x881cd068
	goto loc_881CD068;
loc_881CD000:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881cd034
	if (!ctx.cr6.eq) goto loc_881CD034;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r26,4
	ctx.r26.s64 = 4;
	// beq cr6,0x881cd01c
	if (ctx.cr6.eq) goto loc_881CD01C;
	// li r26,6
	ctx.r26.s64 = 6;
loc_881CD01C:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// subf r25,r10,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r22,r19,3
	ctx.r22.s64 = ctx.r19.s64 + 3;
	// b 0x881cd078
	goto loc_881CD078;
loc_881CD034:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x881cd044
	if (ctx.cr6.eq) goto loc_881CD044;
	// li r9,6
	ctx.r9.s64 = 6;
loc_881CD044:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x881cd054
	if (ctx.cr6.eq) goto loc_881CD054;
	// li r11,6
	ctx.r11.s64 = 6;
loc_881CD054:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r26,7
	ctx.r26.s64 = 7;
	// addi r28,r11,-7
	ctx.r28.s64 = ctx.r11.s64 + -7;
	// subfic r25,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r25.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// addi r22,r19,3
	ctx.r22.s64 = ctx.r19.s64 + 3;
loc_881CD068:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
loc_881CD078:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x881cd1c0
	if (!ctx.cr6.gt) goto loc_881CD1C0;
	// addi r10,r1,-204
	ctx.r10.s64 = ctx.r1.s64 + -204;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r21,r10,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r10.u64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_881CD094:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881cd11c
	if (!ctx.cr6.gt) goto loc_881CD11C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r23)
	ctx.current_instruction = 0x881CD0A0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 6);
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r8,4(r23)
	ctx.current_instruction = 0x881CD0A8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r23.u32 + 4);
	// lhz r31,2(r23)
	ctx.current_instruction = 0x881CD0AC;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// add r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lhz r30,0(r23)
	ctx.current_instruction = 0x881CD0B4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_881CD0D8:
	// lbzx r9,r11,r5
	ctx.current_instruction = 0x881CD0D8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r8,r11,r7
	ctx.current_instruction = 0x881CD0DC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lbzx r17,r11,r4
	ctx.current_instruction = 0x881CD0E4;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r16,0(r11)
	ctx.current_instruction = 0x881CD0E8;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r17,r31
	ctx.r8.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r31.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r16,r30
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// sraw r8,r9,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x881CD114;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x881cd0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CD0D8;
loc_881CD11C:
	// addi r11,r1,-204
	ctx.r11.s64 = ctx.r1.s64 + -204;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
loc_881CD124:
	// lhz r10,-4(r11)
	ctx.current_instruction = 0x881CD124;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r9,0(r29)
	ctx.current_instruction = 0x881CD128;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r8,-2(r11)
	ctx.current_instruction = 0x881CD12C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r6,2(r29)
	ctx.current_instruction = 0x881CD134;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r8,6(r29)
	ctx.current_instruction = 0x881CD140;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r31,2(r11)
	ctx.current_instruction = 0x881CD148;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lhz r5,4(r29)
	ctx.current_instruction = 0x881CD150;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881CD154;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r9,r3,r6
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + ctx.r25.u64;
	// sraw. r10,r6,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x881cd194
	if (!ctx.cr0.lt) goto loc_881CD194;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// b 0x881cd1a0
	goto loc_881CD1A0;
loc_881CD194:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x881cd1a0
	if (!ctx.cr6.gt) goto loc_881CD1A0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881CD1A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// sthx r10,r21,r11
	ctx.current_instruction = 0x881CD1A4;
	REX_STORE_U16(ctx.r21.u32 + ctx.r11.u32, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x881cd124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CD124;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// add r24,r24,r4
	ctx.r24.u64 = ctx.r24.u64 + ctx.r4.u64;
	// addi r21,r21,48
	ctx.r21.s64 = ctx.r21.s64 + 48;
	// bne 0x881cd094
	if (!ctx.cr0.eq) goto loc_881CD094;
loc_881CD1C0:
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CEE98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CEE98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CEE98) {
			switch (rex_dispatch_address) {
				case 0x881CEEA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CEE98;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CEEA0: goto loc_881CEEA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881CEEA0;
	__savegprlr_27(ctx, base);
loc_881CEEA0:
	// lwz r11,48(r3)
	ctx.current_instruction = 0x881CEEA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r6,32(r3)
	ctx.current_instruction = 0x881CEEA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,36(r3)
	ctx.current_instruction = 0x881CEEA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x881CEEB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r31,r27,r7
	ctx.r31.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// divw r29,r31,r11
	ctx.r29.u64 = uint32_t((ctx.r11.s32 && !(ctx.r31.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r31.s32 / ctx.r11.s32 : 0);
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r28,r6,r7
	ctx.r28.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881ceefc
	if (!ctx.cr6.gt) goto loc_881CEEFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_881CEEFC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x881cf09c
	if (!ctx.cr6.gt) goto loc_881CF09C;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x881CEF04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881cef20
	if (ctx.cr6.eq) goto loc_881CEF20;
	// addi r11,r28,-256
	ctx.r11.s64 = ctx.r28.s64 + -256;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x881cef24
	goto loc_881CEF24;
loc_881CEF20:
	// li r8,0
	ctx.r8.s64 = 0;
loc_881CEF24:
	// mullw r11,r28,r4
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// lwz r9,56(r3)
	ctx.current_instruction = 0x881CEF28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add. r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge 0x881cefa0
	if (!ctx.cr0.lt) goto loc_881CEFA0;
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
	// bge cr6,0x881cef94
	if (!ctx.cr6.lt) goto loc_881CEF94;
	// subf r4,r4,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r4.u64;
loc_881CEF68:
	// lwz r11,64(r3)
	ctx.current_instruction = 0x881CEF68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881cef8c
	if (!ctx.cr6.gt) goto loc_881CEF8C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_881CEF7C:
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x881CEF7C;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r8,0(r9)
	ctx.current_instruction = 0x881CEF80;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881cef7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CEF7C;
loc_881CEF8C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x881cef68
	if (!ctx.cr0.eq) goto loc_881CEF68;
loc_881CEF94:
	// mullw r11,r6,r28
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_881CEFA0:
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x881cf008
	if (!ctx.cr6.lt) goto loc_881CF008;
	// subf r30,r4,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r4.u64;
loc_881CEFAC:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lwz r7,64(r3)
	ctx.current_instruction = 0x881CEFB0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
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
	// ble cr6,0x881ceffc
	if (!ctx.cr6.gt) goto loc_881CEFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881CEFD0:
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x881CEFD0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x881CEFD4;
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
	ctx.current_instruction = 0x881CEFF0;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881cefd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CEFD0;
loc_881CEFFC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x881cefac
	if (!ctx.cr0.eq) goto loc_881CEFAC;
loc_881CF008:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x881cf09c
	if (!ctx.cr6.lt) goto loc_881CF09C;
	// subf r4,r29,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r29.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_881CF018:
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// lwz r6,64(r3)
	ctx.current_instruction = 0x881CF01C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
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
	// bge cr6,0x881cf074
	if (!ctx.cr6.lt) goto loc_881CF074;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881cf090
	if (!ctx.cr6.gt) goto loc_881CF090;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881CF044:
	// lbzx r7,r11,r10
	ctx.current_instruction = 0x881CF044;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.current_instruction = 0x881CF048;
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
	ctx.current_instruction = 0x881CF064;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x881cf044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF044;
	// b 0x881cf090
	goto loc_881CF090;
loc_881CF074:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881cf090
	if (!ctx.cr6.gt) goto loc_881CF090;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_881CF084:
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x881CF084;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r9)
	ctx.current_instruction = 0x881CF088;
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881cf084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881CF084;
loc_881CF090:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x881cf018
	if (!ctx.cr0.eq) goto loc_881CF018;
loc_881CF09C:
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DB7E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881DB7E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DB7E0;
	ctx.current_instruction = 0x881DB7E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r4)
	ctx.current_instruction = 0x881DB7E4;
	REX_STORE_U32(ctx.r4.u32 + 116, ctx.r11.u32);
	// stw r11,124(r4)
	ctx.current_instruction = 0x881DB7E8;
	REX_STORE_U32(ctx.r4.u32 + 124, ctx.r11.u32);
	// stw r11,112(r4)
	ctx.current_instruction = 0x881DB7EC;
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// stw r11,120(r4)
	ctx.current_instruction = 0x881DB7F0;
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.current_instruction = 0x881DB7F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881db834
	if (!ctx.cr6.eq) goto loc_881DB834;
	// lhz r11,14(r3)
	ctx.current_instruction = 0x881DB800;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x881db8f8
	if (!ctx.cr6.eq) goto loc_881DB8F8;
loc_881DB80C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,31744
	ctx.r9.s64 = 31744;
	// stw r11,116(r4)
	ctx.current_instruction = 0x881DB818;
	REX_STORE_U32(ctx.r4.u32 + 116, ctx.r11.u32);
	// li r8,992
	ctx.r8.s64 = 992;
	// stw r10,124(r4)
	ctx.current_instruction = 0x881DB820;
	REX_STORE_U32(ctx.r4.u32 + 124, ctx.r10.u32);
	// stw r9,112(r4)
	ctx.current_instruction = 0x881DB824;
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,120(r4)
	ctx.current_instruction = 0x881DB82C;
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DB834:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x881db8f8
	if (!ctx.cr6.eq) goto loc_881DB8F8;
	// lhz r11,14(r3)
	ctx.current_instruction = 0x881DB83C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x881db8c0
	if (!ctx.cr6.eq) goto loc_881DB8C0;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x881DB848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,31744
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31744, ctx.xer);
	// bne cr6,0x881db86c
	if (!ctx.cr6.eq) goto loc_881DB86C;
	// lwz r10,44(r3)
	ctx.current_instruction = 0x881DB854;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,992
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 992, ctx.xer);
	// bne cr6,0x881db86c
	if (!ctx.cr6.eq) goto loc_881DB86C;
	// lwz r10,48(r3)
	ctx.current_instruction = 0x881DB860;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x881db80c
	if (ctx.cr6.eq) goto loc_881DB80C;
loc_881DB86C:
	// cmplwi cr6,r11,63488
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63488, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881DB874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,2016
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2016, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x881DB880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r8,r11,63488
	ctx.r8.u64 = ctx.r11.u64 | 63488;
	// stw r10,116(r4)
	ctx.current_instruction = 0x881DB89C;
	REX_STORE_U32(ctx.r4.u32 + 116, ctx.r10.u32);
	// li r7,2016
	ctx.r7.s64 = 2016;
	// stw r9,124(r4)
	ctx.current_instruction = 0x881DB8A4;
	REX_STORE_U32(ctx.r4.u32 + 124, ctx.r9.u32);
	// stw r8,112(r4)
	ctx.current_instruction = 0x881DB8A8;
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,120(r4)
	ctx.current_instruction = 0x881DB8B0;
	REX_STORE_U32(ctx.r4.u32 + 120, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DB8B8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881DB8C0:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x881db8d0
	if (ctx.cr6.eq) goto loc_881DB8D0;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
loc_881DB8D0:
	// lwz r11,40(r3)
	ctx.current_instruction = 0x881DB8D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x881DB8E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,65280
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65280, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x881DB8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x881db8b8
	if (!ctx.cr6.eq) goto loc_881DB8B8;
loc_881DB8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881DCE18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DCE18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DCE18) {
			switch (rex_dispatch_address) {
				case 0x881DCE20:
				case 0x881DD10C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DCE18;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DCE20: goto loc_881DCE20;
		case 0x881DD10C: goto loc_881DD10C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881DCE20;
	__savegprlr_26(ctx, base);
loc_881DCE20:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881DCE20;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r3)
	ctx.current_instruction = 0x881DCE24;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// lis r9,21849
	ctx.r9.s64 = 1431896064;
	// ori r5,r11,13392
	ctx.r5.u64 = ctx.r11.u64 | 13392;
	// lis r7,22870
	ctx.r7.s64 = 1498808320;
	// lis r6,12593
	ctx.r6.s64 = 825294848;
	// lwz r11,16(r27)
	ctx.current_instruction = 0x881DCE40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lis r4,12849
	ctx.r4.s64 = 842072064;
	// lis r31,22101
	ctx.r31.s64 = 1448411136;
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r8,r10,21849
	ctx.r8.u64 = ctx.r10.u64 | 21849;
	// ori r10,r9,22105
	ctx.r10.u64 = ctx.r9.u64 | 22105;
	// ori r9,r7,22869
	ctx.r9.u64 = ctx.r7.u64 | 22869;
	// ori r26,r6,13392
	ctx.r26.u64 = ctx.r6.u64 | 13392;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r4,22105
	ctx.r6.u64 = ctx.r4.u64 | 22105;
	// ori r28,r31,22857
	ctx.r28.u64 = ctx.r31.u64 | 22857;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x881dceb8
	if (ctx.cr6.gt) goto loc_881DCEB8;
	// beq cr6,0x881dceb0
	if (ctx.cr6.eq) goto loc_881DCEB0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x881dcea0
	if (ctx.cr6.gt) goto loc_881DCEA0;
	// beq cr6,0x881dceb0
	if (ctx.cr6.eq) goto loc_881DCEB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dcee0
	if (ctx.cr6.eq) goto loc_881DCEE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881dcee0
	if (ctx.cr6.eq) goto loc_881DCEE0;
	// b 0x881dcee4
	goto loc_881DCEE4;
loc_881DCEA0:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x881dceb0
	if (ctx.cr6.eq) goto loc_881DCEB0;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881dcee4
	if (!ctx.cr6.eq) goto loc_881DCEE4;
loc_881DCEB0:
	// stw r29,12(r3)
	ctx.current_instruction = 0x881DCEB0;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// b 0x881dcee4
	goto loc_881DCEE4;
loc_881DCEB8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x881dced8
	if (ctx.cr6.gt) goto loc_881DCED8;
	// beq cr6,0x881dceb0
	if (ctx.cr6.eq) goto loc_881DCEB0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dcee0
	if (ctx.cr6.eq) goto loc_881DCEE0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881dcee0
	if (ctx.cr6.eq) goto loc_881DCEE0;
	// b 0x881dcee4
	goto loc_881DCEE4;
loc_881DCED8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881dcee4
	if (!ctx.cr6.eq) goto loc_881DCEE4;
loc_881DCEE0:
	// stw r7,12(r3)
	ctx.current_instruction = 0x881DCEE0;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
loc_881DCEE4:
	// lwz r4,4(r3)
	ctx.current_instruction = 0x881DCEE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r31,r11,22094
	ctx.r31.u64 = ctx.r11.u64 | 22094;
	// lwz r11,16(r4)
	ctx.current_instruction = 0x881DCEF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x881dcf54
	if (ctx.cr6.gt) goto loc_881DCF54;
	// beq cr6,0x881dcf30
	if (ctx.cr6.eq) goto loc_881DCF30;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x881dcf20
	if (ctx.cr6.gt) goto loc_881DCF20;
	// beq cr6,0x881dcf30
	if (ctx.cr6.eq) goto loc_881DCF30;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dcf84
	if (ctx.cr6.eq) goto loc_881DCF84;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881dcf84
	if (ctx.cr6.eq) goto loc_881DCF84;
	// b 0x881dcf34
	goto loc_881DCF34;
loc_881DCF20:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x881dcf30
	if (ctx.cr6.eq) goto loc_881DCF30;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x881dcf34
	if (!ctx.cr6.eq) goto loc_881DCF34;
loc_881DCF30:
	// stw r29,16(r3)
	ctx.current_instruction = 0x881DCF30;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
loc_881DCF34:
	// stw r27,8(r3)
	ctx.current_instruction = 0x881DCF34;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// lwz r11,16(r27)
	ctx.current_instruction = 0x881DCF38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dcf8c
	if (ctx.cr6.eq) goto loc_881DCF8C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881dcf8c
	if (ctx.cr6.eq) goto loc_881DCF8C;
	// stw r29,14472(r3)
	ctx.current_instruction = 0x881DCF4C;
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r29.u32);
	// b 0x881dcfa4
	goto loc_881DCFA4;
loc_881DCF54:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881dcf74
	if (ctx.cr6.gt) goto loc_881DCF74;
	// beq cr6,0x881dcf84
	if (ctx.cr6.eq) goto loc_881DCF84;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dcf30
	if (ctx.cr6.eq) goto loc_881DCF30;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x881dcf84
	if (ctx.cr6.eq) goto loc_881DCF84;
	// b 0x881dcf34
	goto loc_881DCF34;
loc_881DCF74:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x881dcf30
	if (ctx.cr6.eq) goto loc_881DCF30;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881dcf34
	if (!ctx.cr6.eq) goto loc_881DCF34;
loc_881DCF84:
	// stw r7,16(r3)
	ctx.current_instruction = 0x881DCF84;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// b 0x881dcf34
	goto loc_881DCF34;
loc_881DCF8C:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x881DCF8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x881dcfa0
	if (ctx.cr6.gt) goto loc_881DCFA0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_881DCFA0:
	// stw r11,14472(r3)
	ctx.current_instruction = 0x881DCFA0;
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_881DCFA4:
	// lwz r11,4(r27)
	ctx.current_instruction = 0x881DCFA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,14516(r3)
	ctx.current_instruction = 0x881DCFA8;
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.current_instruction = 0x881DCFAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,14520(r3)
	ctx.current_instruction = 0x881DCFBC;
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r7.u32);
	// lwz r11,16(r27)
	ctx.current_instruction = 0x881DCFC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x881dcfec
	if (ctx.cr6.gt) goto loc_881DCFEC;
	// beq cr6,0x881dcffc
	if (ctx.cr6.eq) goto loc_881DCFFC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x881dcffc
	if (ctx.cr6.eq) goto loc_881DCFFC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x881dd00c
	if (!ctx.cr6.eq) goto loc_881DD00C;
	// lwz r11,14516(r3)
	ctx.current_instruction = 0x881DCFE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x881dd004
	goto loc_881DD004;
loc_881DCFEC:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dcffc
	if (ctx.cr6.eq) goto loc_881DCFFC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881dd00c
	if (!ctx.cr6.eq) goto loc_881DD00C;
loc_881DCFFC:
	// lwz r11,14516(r3)
	ctx.current_instruction = 0x881DCFFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_881DD004:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14524(r3)
	ctx.current_instruction = 0x881DD008;
	REX_STORE_U32(ctx.r3.u32 + 14524, ctx.r9.u32);
loc_881DD00C:
	// lwz r11,16(r4)
	ctx.current_instruction = 0x881DD00C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881dd028
	if (ctx.cr6.eq) goto loc_881DD028;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x881dd028
	if (ctx.cr6.eq) goto loc_881DD028;
	// stw r29,14476(r3)
	ctx.current_instruction = 0x881DD020;
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r29.u32);
	// b 0x881dd040
	goto loc_881DD040;
loc_881DD028:
	// lwz r11,8(r4)
	ctx.current_instruction = 0x881DD028;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x881dd03c
	if (ctx.cr6.gt) goto loc_881DD03C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_881DD03C:
	// stw r11,14476(r3)
	ctx.current_instruction = 0x881DD03C;
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
loc_881DD040:
	// lwz r11,4(r4)
	ctx.current_instruction = 0x881DD040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,14480(r3)
	ctx.current_instruction = 0x881DD044;
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.current_instruction = 0x881DD048;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r7,14484(r3)
	ctx.current_instruction = 0x881DD058;
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r7.u32);
	// lwz r11,16(r4)
	ctx.current_instruction = 0x881DD05C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x881dd09c
	if (ctx.cr6.gt) goto loc_881DD09C;
	// beq cr6,0x881dd0ac
	if (ctx.cr6.eq) goto loc_881DD0AC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x881dd0ac
	if (ctx.cr6.eq) goto loc_881DD0AC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x881dd090
	if (ctx.cr6.eq) goto loc_881DD090;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x881dd0bc
	if (!ctx.cr6.eq) goto loc_881DD0BC;
	// lwz r11,14480(r3)
	ctx.current_instruction = 0x881DD084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// stw r11,14488(r3)
	ctx.current_instruction = 0x881DD088;
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r11.u32);
	// b 0x881dd0bc
	goto loc_881DD0BC;
loc_881DD090:
	// lwz r11,14480(r3)
	ctx.current_instruction = 0x881DD090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x881dd0b4
	goto loc_881DD0B4;
loc_881DD09C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x881dd0ac
	if (ctx.cr6.eq) goto loc_881DD0AC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881dd0bc
	if (!ctx.cr6.eq) goto loc_881DD0BC;
loc_881DD0AC:
	// lwz r11,14480(r3)
	ctx.current_instruction = 0x881DD0AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_881DD0B4:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14488(r3)
	ctx.current_instruction = 0x881DD0B8;
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r9.u32);
loc_881DD0BC:
	// lwz r11,14600(r3)
	ctx.current_instruction = 0x881DD0BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x881dd0d0
	if (!ctx.cr6.eq) goto loc_881DD0D0;
	// lwz r7,8(r4)
	ctx.current_instruction = 0x881DD0CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_881DD0D0:
	// lwz r11,14596(r3)
	ctx.current_instruction = 0x881DD0D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x881dd0e4
	if (!ctx.cr6.eq) goto loc_881DD0E4;
	// lwz r6,4(r4)
	ctx.current_instruction = 0x881DD0E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_881DD0E4:
	// lwz r11,14592(r3)
	ctx.current_instruction = 0x881DD0E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881dd0f4
	if (!ctx.cr6.eq) goto loc_881DD0F4;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x881DD0F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
loc_881DD0F4:
	// lwz r4,14588(r3)
	ctx.current_instruction = 0x881DD0F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14588);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881dd104
	if (!ctx.cr6.eq) goto loc_881DD104;
	// lwz r4,4(r27)
	ctx.current_instruction = 0x881DD100;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_881DD104:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x881dbb00
	ctx.lr = 0x881DD10C;
	sub_881DBB00(ctx, base);
loc_881DD10C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0E60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0E60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0E60) {
			switch (rex_dispatch_address) {
				case 0x881E0E68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0E60;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881E0E68: goto loc_881E0E68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E0E68;
	__savegprlr_14(ctx, base);
loc_881E0E68:
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	ctx.current_instruction = 0x881E0E6C;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881E0E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r31,92(r1)
	ctx.current_instruction = 0x881E0E78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r27,r7,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r26,r7,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// divw r28,r27,r10
	ctx.r28.u64 = uint32_t((ctx.r10.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r27.s32 / ctx.r10.s32 : 0);
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
	// srawi r7,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 4;
	// divw r29,r26,r25
	ctx.r29.u64 = uint32_t((ctx.r25.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r25.s32 == -1)) ? ctx.r26.s32 / ctx.r25.s32 : 0);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// rotlwi r7,r27,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// stw r29,-172(r1)
	ctx.current_instruction = 0x881E0EA4;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// srawi r27,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 4;
	// addi r24,r7,-1
	ctx.r24.s64 = ctx.r7.s64 + -1;
	// addze r7,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r7.s64 = temp.s64;
	// lis r23,0
	ctx.r23.s64 = 0;
	// rotlwi r31,r26,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// ori r18,r23,32768
	ctx.r18.u64 = ctx.r23.u64 | 32768;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// andc r27,r10,r24
	ctx.r27.u64 = ctx.r10.u64 & ~ctx.r24.u64;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// andc r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 & ~ctx.r31.u64;
	// subf r30,r18,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r18.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r30,-168(r1)
	ctx.current_instruction = 0x881E0EE4;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// twlgei r27,-1
	if (ctx.r27.s32 == -1 || ctx.r27.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r31,-1
	if (ctx.r31.s32 == -1 || ctx.r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r22,r18,r7
	ctx.r22.u64 = ctx.r7.u64 - ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// bne cr6,0x881e0fe4
	if (!ctx.cr6.eq) goto loc_881E0FE4;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881e10d4
	if (ctx.cr6.lt) goto loc_881E10D4;
	// lwz r16,100(r1)
	ctx.current_instruction = 0x881E0F0C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r15,r29,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r16,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
loc_881E0F18:
	// srawi r8,r17,16
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r17.s32 >> 16;
	// add r11,r17,r29
	ctx.r11.u64 = ctx.r17.u64 + ctx.r29.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881e0fd0
	if (ctx.cr6.lt) goto loc_881E0FD0;
	// lwz r30,76(r1)
	ctx.current_instruction = 0x881E0F38;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r23,r3,r30
	ctx.r23.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r21,r23,r6
	ctx.r21.u64 = ctx.r23.u64 + ctx.r6.u64;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r20,r16,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r28,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_881E0F5C:
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// add r27,r23,r3
	ctx.r27.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lbzx r26,r29,r8
	ctx.current_instruction = 0x881E0F70;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// lbzx r25,r30,r8
	ctx.current_instruction = 0x881E0F78;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r21,r3
	ctx.current_instruction = 0x881E0F80;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// lbzx r27,r27,r5
	ctx.current_instruction = 0x881E0F84;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// rotlwi r31,r3,24
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 24);
	// lbzx r24,r30,r8
	ctx.current_instruction = 0x881E0F8C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// rotlwi r3,r27,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// lbzx r8,r29,r8
	ctx.current_instruction = 0x881E0F94;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// rotlwi r24,r24,16
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 16);
	// rotlwi r27,r8,16
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r8,r25,r3
	ctx.r8.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r25,r24,r31
	ctx.r25.u64 = ctx.r24.u64 + ctx.r31.u64;
	// add r3,r26,r3
	ctx.r3.u64 = ctx.r26.u64 + ctx.r3.u64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
	// or r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 | ctx.r8.u64;
	// or r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 | ctx.r3.u64;
	// stw r8,0(r7)
	ctx.current_instruction = 0x881E0FB8;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stwx r3,r20,r7
	ctx.current_instruction = 0x881E0FBC;
	REX_STORE_U32(ctx.r20.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// ble cr6,0x881e0f5c
	if (!ctx.cr6.gt) goto loc_881E0F5C;
	// lwz r29,-172(r1)
	ctx.current_instruction = 0x881E0FC8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r30,-168(r1)
	ctx.current_instruction = 0x881E0FCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
loc_881E0FD0:
	// add r17,r15,r17
	ctx.r17.u64 = ctx.r15.u64 + ctx.r17.u64;
	// add r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 + ctx.r10.u64;
	// cmpw cr6,r17,r30
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881e0f18
	if (!ctx.cr6.gt) goto loc_881E0F18;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E0FE4:
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881e10d4
	if (ctx.cr6.lt) goto loc_881E10D4;
	// lwz r16,100(r1)
	ctx.current_instruction = 0x881E0FEC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r15,r29,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r16,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
loc_881E0FF8:
	// srawi r7,r17,16
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r17.s32 >> 16;
	// add r11,r17,r29
	ctx.r11.u64 = ctx.r17.u64 + ctx.r29.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// srawi r31,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881e10c4
	if (ctx.cr6.lt) goto loc_881E10C4;
	// lwz r30,76(r1)
	ctx.current_instruction = 0x881E1018;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r23,r16,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r28,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r3,r30
	ctx.r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r7,r9
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r21,r24,r6
	ctx.r21.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r29,r7,r4
	ctx.r29.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r20,r23,2
	ctx.r20.s64 = ctx.r23.s64 + 2;
loc_881E1040:
	// srawi r7,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// add r31,r8,r28
	ctx.r31.u64 = ctx.r8.u64 + ctx.r28.u64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r8,r19,r8
	ctx.r8.u64 = ctx.r19.u64 + ctx.r8.u64;
	// add r27,r24,r3
	ctx.r27.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lbzx r26,r29,r7
	ctx.current_instruction = 0x881E1054;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// lbzx r25,r30,r7
	ctx.current_instruction = 0x881E105C;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// srawi r7,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r21,r3
	ctx.current_instruction = 0x881E1064;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// lbzx r31,r27,r5
	ctx.current_instruction = 0x881E1068;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// lbzx r27,r30,r7
	ctx.current_instruction = 0x881E106C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r7,r29,r7
	ctx.current_instruction = 0x881E1070;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// stb r31,-176(r1)
	ctx.current_instruction = 0x881E1074;
	REX_STORE_U8(ctx.r1.u32 + -176, ctx.r31.u8);
	// rotlwi r31,r3,8
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r3,-176(r1)
	ctx.current_instruction = 0x881E107C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -176);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// clrlwi r26,r25,16
	ctx.r26.u64 = ctx.r25.u32 & 0xFFFF;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// sth r26,0(r11)
	ctx.current_instruction = 0x881E10A0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sthx r3,r23,r11
	ctx.current_instruction = 0x881E10A8;
	REX_STORE_U16(ctx.r23.u32 + ctx.r11.u32, ctx.r3.u16);
	// sth r31,2(r11)
	ctx.current_instruction = 0x881E10AC;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// sthx r7,r11,r20
	ctx.current_instruction = 0x881E10B0;
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r7.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x881e1040
	if (!ctx.cr6.gt) goto loc_881E1040;
	// lwz r29,-172(r1)
	ctx.current_instruction = 0x881E10BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r30,-168(r1)
	ctx.current_instruction = 0x881E10C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
loc_881E10C4:
	// add r17,r15,r17
	ctx.r17.u64 = ctx.r15.u64 + ctx.r17.u64;
	// add r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 + ctx.r10.u64;
	// cmpw cr6,r17,r30
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881e0ff8
	if (!ctx.cr6.gt) goto loc_881E0FF8;
loc_881E10D4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9030) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881E9030);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9030;
	ctx.current_instruction = 0x881E9030;
	// b 0x881ed4c0
	sub_881ED4C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E90A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E90A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E90A0) {
			switch (rex_dispatch_address) {
				case 0x881E90A8:
				case 0x881E90C4:
				case 0x881E9104:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E90A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E90A8: goto loc_881E90A8;
		case 0x881E90C4: goto loc_881E90C4;
		case 0x881E9104: goto loc_881E9104;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881E90A8;
	__savegprlr_29(ctx, base);
loc_881E90A8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881E90A8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,15268
	ctx.r30.s64 = ctx.r11.s64 + 15268;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88243680
	ctx.lr = 0x881E90C4;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_881E90C4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881e90ec
	if (ctx.cr6.eq) goto loc_881E90EC;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r10,r11,15296
	ctx.r10.s64 = ctx.r11.s64 + 15296;
	// lwz r11,4(r10)
	ctx.current_instruction = 0x881E90D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	ctx.current_instruction = 0x881E90D8;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	ctx.current_instruction = 0x881E90DC;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r11)
	ctx.current_instruction = 0x881E90E0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	ctx.current_instruction = 0x881E90E4;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x881e90fc
	goto loc_881E90FC;
loc_881E90EC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881E90EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x881E90F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881E90F4;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881E90F8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_881E90FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88243660
	ctx.lr = 0x881E9104;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_881E9104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E9D98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E9D98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E9D98) {
			switch (rex_dispatch_address) {
				case 0x881E9DA0:
				case 0x881E9E24:
				case 0x881E9E48:
				case 0x881E9E6C:
				case 0x881E9F40:
				case 0x881EA1C0:
				case 0x881EA2DC:
				case 0x881EA300:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E9D98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E9DA0: goto loc_881E9DA0;
		case 0x881E9E24: goto loc_881E9E24;
		case 0x881E9E48: goto loc_881E9E48;
		case 0x881E9E6C: goto loc_881E9E6C;
		case 0x881E9F40: goto loc_881E9F40;
		case 0x881EA1C0: goto loc_881EA1C0;
		case 0x881EA2DC: goto loc_881EA2DC;
		case 0x881EA300: goto loc_881EA300;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881E9DA0;
	__savegprlr_22(ctx, base);
loc_881E9DA0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881E9DA0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.current_instruction = 0x881E9DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881e9dcc
	if (!ctx.cr6.gt) goto loc_881E9DCC;
loc_881E9DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ea310
	goto loc_881EA310;
loc_881E9DCC:
	// lhz r11,0(r27)
	ctx.current_instruction = 0x881E9DCC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.current_instruction = 0x881E9DD4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// beq 0x881e9e84
	if (ctx.cr0.eq) goto loc_881E9E84;
	// subf r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lbz r11,4(r27)
	ctx.current_instruction = 0x881E9DF0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x881E9E18;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.current_instruction = 0x881E9E1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x881e9458
	ctx.lr = 0x881E9E24;
	sub_881E9458(ctx, base);
loc_881E9E24:
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x881e9dc4
	if (ctx.cr0.eq) goto loc_881E9DC4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881E9E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881E9E40;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x881e9740
	ctx.lr = 0x881E9E48;
	sub_881E9740(ctx, base);
loc_881E9E48:
	// lhz r11,0(r27)
	ctx.current_instruction = 0x881E9E48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x881E9E4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r28,5(r3)
	ctx.current_instruction = 0x881E9E54;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x881e9f54
	if (!ctx.cr6.lt) goto loc_881E9F54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881E9E6C;
	sub_881E9B48(ctx, base);
loc_881E9E6C:
	// lwz r10,48(r30)
	ctx.current_instruction = 0x881E9E6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881E9E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r30)
	ctx.current_instruction = 0x881E9E7C;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x881ea310
	goto loc_881EA310;
loc_881E9E84:
	// lbz r28,5(r31)
	ctx.current_instruction = 0x881E9E84;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881e9dc4
	if (!ctx.cr0.eq) goto loc_881E9DC4;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9E90;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881E9E98;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x881e9dc4
	if (ctx.cr6.lt) goto loc_881E9DC4;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881E9EA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881E9EAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881E9EB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881E9EB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881e9f04
	if (!ctx.cr6.eq) goto loc_881E9F04;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881e9f04
	if (!ctx.cr6.eq) goto loc_881E9F04;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881E9EC8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881E9ED0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881e9f04
	if (!ctx.cr6.eq) goto loc_881E9F04;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x881E9ED8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881e9f04
	if (!ctx.cr6.lt) goto loc_881E9F04;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.current_instruction = 0x881E9EF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	ctx.current_instruction = 0x881E9F00;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_881E9F04:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881E9F04;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e9f40
	if (ctx.cr0.eq) goto loc_881E9F40;
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9F10;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x881e9f30
	if (ctx.cr0.eq) goto loc_881E9F30;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881e9f30
	if (!ctx.cr6.gt) goto loc_881E9F30;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_881E9F30:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x88243760
	ctx.lr = 0x881E9F40;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881E9F40:
	// lhz r10,0(r31)
	ctx.current_instruction = 0x881E9F40;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.current_instruction = 0x881E9F44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881E9F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,48(r30)
	ctx.current_instruction = 0x881E9F50;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_881E9F54:
	// lhz r10,0(r27)
	ctx.current_instruction = 0x881E9F54;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// lbz r9,6(r27)
	ctx.current_instruction = 0x881E9F5C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	ctx.current_instruction = 0x881E9F64;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// subf r24,r9,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bgt cr6,0x881e9f80
	if (ctx.cr6.gt) goto loc_881E9F80;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881E9F7C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_881E9F80:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881e9fb8
	if (ctx.cr0.eq) goto loc_881E9FB8;
	// lhz r10,0(r27)
	ctx.current_instruction = 0x881E9F88;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.current_instruction = 0x881E9FA4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// std r10,-16(r9)
	ctx.current_instruction = 0x881E9FA8;
	REX_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	ctx.current_instruction = 0x881E9FAC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,-8(r9)
	ctx.current_instruction = 0x881E9FB0;
	REX_STORE_U64(ctx.r9.u32 + -8, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881E9FB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_881E9FB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x881ea010
	if (!ctx.cr6.eq) goto loc_881EA010;
	// lbz r11,5(r27)
	ctx.current_instruction = 0x881E9FC0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r23.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	ctx.current_instruction = 0x881E9FD8;
	REX_STORE_U8(ctx.r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	ctx.current_instruction = 0x881E9FDC;
	REX_STORE_U8(ctx.r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	ctx.current_instruction = 0x881E9FE0;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// bne 0x881e9ff8
	if (!ctx.cr0.eq) goto loc_881E9FF8;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// sth r11,2(r10)
	ctx.current_instruction = 0x881E9FF0;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x881ea2dc
	goto loc_881EA2DC;
loc_881E9FF8:
	// lbz r11,4(r27)
	ctx.current_instruction = 0x881E9FF8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x881EA004;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r27,64(r11)
	ctx.current_instruction = 0x881EA008;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r27.u32);
	// b 0x881ea2dc
	goto loc_881EA2DC;
loc_881EA010:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r23.u64;
	// sth r9,0(r27)
	ctx.current_instruction = 0x881EA020;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r10,6(r27)
	ctx.current_instruction = 0x881EA028;
	REX_STORE_U8(ctx.r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// sth r9,2(r31)
	ctx.current_instruction = 0x881EA030;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	ctx.current_instruction = 0x881EA034;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 4);
	// stb r11,4(r31)
	ctx.current_instruction = 0x881EA038;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// beq 0x881ea0a0
	if (ctx.cr0.eq) goto loc_881EA0A0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x881EA050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,64(r11)
	ctx.current_instruction = 0x881EA054;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// stb r28,5(r31)
	ctx.current_instruction = 0x881EA058;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA05C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	ctx.current_instruction = 0x881EA060;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	ctx.current_instruction = 0x881EA064;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x881ea0f4
	if (ctx.cr6.lt) goto loc_881EA0F4;
	// lwz r11,384(r30)
	ctx.current_instruction = 0x881EA078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x881ea094
	goto loc_881EA094;
loc_881EA084:
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EA084;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ea2a4
	if (!ctx.cr6.gt) goto loc_881EA2A4;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EA090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_881EA094:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ea084
	if (!ctx.cr6.eq) goto loc_881EA084;
	// b 0x881ea2a4
	goto loc_881EA2A4;
loc_881EA0A0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r28,5(r29)
	ctx.current_instruction = 0x881EA0AC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ea124
	if (ctx.cr0.eq) goto loc_881EA124;
	// andi. r11,r10,239
	ctx.r11.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	ctx.current_instruction = 0x881EA0BC;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA0C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	ctx.current_instruction = 0x881EA0C4;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA0C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,2(r10)
	ctx.current_instruction = 0x881EA0D4;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881EA0D8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	ctx.current_instruction = 0x881EA0E0;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA0E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x881ea0fc
	if (!ctx.cr6.lt) goto loc_881EA0FC;
loc_881EA0F4:
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x881ea244
	goto loc_881EA244;
loc_881EA0FC:
	// lwz r11,384(r30)
	ctx.current_instruction = 0x881EA0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = ctx.r30.s64 + 384;
	// b 0x881ea118
	goto loc_881EA118;
loc_881EA108:
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EA108;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ea2a4
	if (!ctx.cr6.gt) goto loc_881EA2A4;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EA114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_881EA118:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ea108
	if (!ctx.cr6.eq) goto loc_881EA108;
	// b 0x881ea2a4
	goto loc_881EA2A4;
loc_881EA124:
	// lwz r11,12(r29)
	ctx.current_instruction = 0x881EA124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// lwz r10,8(r29)
	ctx.current_instruction = 0x881EA12C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881EA130;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x881EA134;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x881ea184
	if (!ctx.cr6.eq) goto loc_881EA184;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x881ea184
	if (!ctx.cr6.eq) goto loc_881EA184;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881EA148;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	ctx.current_instruction = 0x881EA150;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x881ea184
	if (!ctx.cr6.eq) goto loc_881EA184;
	// lhz r11,0(r29)
	ctx.current_instruction = 0x881EA158;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x881ea184
	if (!ctx.cr6.lt) goto loc_881EA184;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.current_instruction = 0x881EA178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	ctx.current_instruction = 0x881EA180;
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_881EA184:
	// lbz r11,5(r29)
	ctx.current_instruction = 0x881EA184;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881ea1c0
	if (ctx.cr0.eq) goto loc_881EA1C0;
	// lhz r10,0(r29)
	ctx.current_instruction = 0x881EA190;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x881ea1b0
	if (ctx.cr0.eq) goto loc_881EA1B0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x881ea1b0
	if (!ctx.cr6.gt) goto loc_881EA1B0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_881EA1B0:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x88243760
	ctx.lr = 0x881EA1C0;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_881EA1C0:
	// lhz r11,0(r29)
	ctx.current_instruction = 0x881EA1C0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.current_instruction = 0x881EA1C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x881EA1C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	ctx.current_instruction = 0x881EA1D0;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r29)
	ctx.current_instruction = 0x881EA1D4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881EA1DC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r28,5(r31)
	ctx.current_instruction = 0x881EA1E0;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x881EA1E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x881ea2d0
	if (ctx.cr6.gt) goto loc_881EA2D0;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r5,0(r31)
	ctx.current_instruction = 0x881EA1F4;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
	// bne 0x881ea210
	if (!ctx.cr0.eq) goto loc_881EA210;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA1FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,2(r10)
	ctx.current_instruction = 0x881EA208;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x881ea224
	goto loc_881EA224;
loc_881EA210:
	// lbz r11,4(r31)
	ctx.current_instruction = 0x881EA210;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x881EA21C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r31,64(r11)
	ctx.current_instruction = 0x881EA220;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
loc_881EA224:
	// lbz r11,5(r31)
	ctx.current_instruction = 0x881EA224;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	ctx.current_instruction = 0x881EA22C;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x881ea280
	if (!ctx.cr6.lt) goto loc_881EA280;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_881EA244:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881EA24C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ea2a4
	if (!ctx.cr6.eq) goto loc_881EA2A4;
	// lhz r9,0(r31)
	ctx.current_instruction = 0x881EA258;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.current_instruction = 0x881EA270;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	ctx.current_instruction = 0x881EA278;
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x881ea2a4
	goto loc_881EA2A4;
loc_881EA280:
	// lwz r11,384(r30)
	ctx.current_instruction = 0x881EA280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x881ea29c
	goto loc_881EA29C;
loc_881EA28C:
	// lhz r8,-8(r11)
	ctx.current_instruction = 0x881EA28C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x881ea2a4
	if (!ctx.cr6.gt) goto loc_881EA2A4;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x881EA298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_881EA29C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881ea28c
	if (!ctx.cr6.eq) goto loc_881EA28C;
loc_881EA2A4:
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881EA2A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	ctx.current_instruction = 0x881EA2AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	ctx.current_instruction = 0x881EA2B0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	ctx.current_instruction = 0x881EA2B4;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881EA2B8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x881EA2BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r30)
	ctx.current_instruction = 0x881EA2C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	ctx.current_instruction = 0x881EA2C8;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x881ea2dc
	goto loc_881EA2DC;
loc_881EA2D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881e9b48
	ctx.lr = 0x881EA2DC;
	sub_881E9B48(ctx, base);
loc_881EA2DC:
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881ea300
	if (ctx.cr0.eq) goto loc_881EA300;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x881ea300
	if (!ctx.cr6.gt) goto loc_881EA300;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// subf r5,r24,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x88052d90
	ctx.lr = 0x881EA300;
	sub_88052D90(ctx, base);
loc_881EA300:
	// lbz r11,5(r27)
	ctx.current_instruction = 0x881EA300;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	ctx.current_instruction = 0x881EA30C;
	REX_STORE_U8(ctx.r27.u32 + 5, ctx.r11.u8);
loc_881EA310:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_84) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE14);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE14;
	ctx.current_instruction = 0x881EEE14;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_106) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEEC4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEEC4;
	ctx.current_instruction = 0x881EEEC4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_124) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF54);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF54;
	ctx.current_instruction = 0x881EEF54;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_26) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFD8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFD8;
	ctx.current_instruction = 0x881EEFD8;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_83) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0A4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0A4;
	ctx.current_instruction = 0x881EF0A4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_110) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF17C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF17C;
	ctx.current_instruction = 0x881EF17C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881EF5E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EF5E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EF5E0) {
			switch (rex_dispatch_address) {
				case 0x881EF5F0:
				case 0x881EF604:
				case 0x881EF610:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF5E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EF5F0: goto loc_881EF5F0;
		case 0x881EF604: goto loc_881EF604;
		case 0x881EF610: goto loc_881EF610;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EF5E4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881EF5E8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x881f1278
	ctx.lr = 0x881EF5F0;
	sub_881F1278(ctx, base);
loc_881EF5F0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lbz r11,17912(r11)
	ctx.current_instruction = 0x881EF5F4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17912);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x881ef604
	if (ctx.cr0.eq) goto loc_881EF604;
	// bl 0x881f0ea0
	ctx.lr = 0x881EF604;
	sub_881F0EA0(ctx, base);
loc_881EF604:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r3,24320(r11)
	ctx.current_instruction = 0x881EF608;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24320);
	// bl 0x88052278
	ctx.lr = 0x881EF610;
	sub_88052278(ctx, base);
loc_881EF610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EF614;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F0C00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F0C00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0C00;
	ctx.current_instruction = 0x881F0C00;
	// stfd f1,16(r1)
	ctx.current_instruction = 0x881F0C00;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.current_instruction = 0x881F0C04;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	ctx.current_instruction = 0x881F0C08;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// addi r10,r4,1022
	ctx.r10.s64 = ctx.r4.s64 + 1022;
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,-16(r1)
	ctx.current_instruction = 0x881F0C1C;
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.current_instruction = 0x881F0C20;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F12C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F12C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F12C0;
	ctx.current_instruction = 0x881F12C0;
	// lis r12,-30715
	ctx.r12.s64 = -2012938240;
	// lfd f4,-30048(r12)
	ctx.current_instruction = 0x881F12C4;
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r12.u32 + -30048);
	// lis r12,-30715
	ctx.r12.s64 = -2012938240;
	// lfd f5,-30040(r12)
	ctx.current_instruction = 0x881F12CC;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r12.u32 + -30040);
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x881f1300
	if (ctx.cr0.eq) goto loc_881F1300;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	ctx.cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x881f1300
	if (!ctx.cr0.lt) goto loc_881F1300;
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x881f12f8
	if (ctx.cr0.lt) goto loc_881F12F8;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x881f1300
	goto loc_881F1300;
loc_881F12F8:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_881F1300:
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F19C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F19C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F19C8) {
			switch (rex_dispatch_address) {
				case 0x881F1A34:
				case 0x881F1A40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F19C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1A34: goto loc_881F1A34;
		case 0x881F1A40: goto loc_881F1A40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F19CC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F19D0;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881f1a30
	if (ctx.cr6.lt) goto loc_881F1A30;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24036(r11)
	ctx.current_instruction = 0x881F19E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24036);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881f1a30
	if (!ctx.cr6.lt) goto loc_881F1A30;
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
	ctx.current_instruction = 0x881F1A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.current_instruction = 0x881F1A0C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x881f1a30
	if (ctx.cr0.eq) goto loc_881F1A30;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881F1A18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x881f1a30
	if (ctx.cr6.eq) goto loc_881F1A30;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881f1a4c
	goto loc_881F1A4C;
loc_881F1A30:
	// bl 0x880529c8
	ctx.lr = 0x881F1A34;
	sub_880529C8(ctx, base);
loc_881F1A34:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F1A38;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x88052a00
	ctx.lr = 0x881F1A40;
	sub_88052A00(ctx, base);
loc_881F1A40:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_881F1A4C:
	// stw r10,0(r11)
	ctx.current_instruction = 0x881F1A4C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F1A54;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881FC2D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FC2D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FC2D0) {
			switch (rex_dispatch_address) {
				case 0x881FC2D8:
				case 0x881FC2F8:
				case 0x881FC30C:
				case 0x881FC330:
				case 0x881FC348:
				case 0x881FC370:
				case 0x881FC398:
				case 0x881FC3C8:
				case 0x881FC428:
				case 0x881FC434:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FC2D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FC2D8: goto loc_881FC2D8;
		case 0x881FC2F8: goto loc_881FC2F8;
		case 0x881FC30C: goto loc_881FC30C;
		case 0x881FC330: goto loc_881FC330;
		case 0x881FC348: goto loc_881FC348;
		case 0x881FC370: goto loc_881FC370;
		case 0x881FC398: goto loc_881FC398;
		case 0x881FC3C8: goto loc_881FC3C8;
		case 0x881FC428: goto loc_881FC428;
		case 0x881FC434: goto loc_881FC434;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881FC2D8;
	__savegprlr_27(ctx, base);
loc_881FC2D8:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x881FC2D8;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.current_instruction = 0x881FC2DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,2208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2208));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r11,15984
	ctx.r30.s64 = ctx.r11.s64 + 15984;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8820aa10
	ctx.lr = 0x881FC2F8;
	sub_8820AA10(ctx, base);
loc_881FC2F8:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r10)
	ctx.current_instruction = 0x881FC304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881FC30C;
	sub_881FC868(ctx, base);
loc_881FC30C:
	// lhz r9,52(r30)
	ctx.current_instruction = 0x881FC30C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
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
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8820ae30
	ctx.lr = 0x881FC330;
	sub_8820AE30(ctx, base);
loc_881FC330:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc470
	if (!ctx.cr6.eq) goto loc_881FC470;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88242bc0
	ctx.lr = 0x881FC348;
	sub_88242BC0(ctx, base);
loc_881FC348:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc470
	if (!ctx.cr6.eq) goto loc_881FC470;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC350;
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
	// bl 0x8823a8f0
	ctx.lr = 0x881FC370;
	sub_8823A8F0(ctx, base);
loc_881FC370:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc470
	if (!ctx.cr6.eq) goto loc_881FC470;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC378;
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
	// bl 0x88217750
	ctx.lr = 0x881FC398;
	sub_88217750(ctx, base);
loc_881FC398:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc470
	if (!ctx.cr6.eq) goto loc_881FC470;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881FC3A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881fc428
	if (ctx.cr6.eq) goto loc_881FC428;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC3AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8817fd58
	ctx.lr = 0x881FC3C8;
	sub_8817FD58(ctx, base);
loc_881FC3C8:
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881FC3C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.current_instruction = 0x881FC3CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881FC3D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,3780(r31)
	ctx.current_instruction = 0x881FC3E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881FC3E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,220(r31)
	ctx.current_instruction = 0x881FC3EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,1368(r30)
	ctx.current_instruction = 0x881FC3F4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 1368);
	// lwz r29,3776(r31)
	ctx.current_instruction = 0x881FC3F8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// lhz r30,52(r30)
	ctx.current_instruction = 0x881FC400;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r9,r30,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x8817ea48
	ctx.lr = 0x881FC428;
	sub_8817EA48(ctx, base);
loc_881FC428:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881FC434;
	sub_881FCBB0(ctx, base);
loc_881FC434:
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881FC434;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881fc45c
	if (!ctx.cr6.eq) goto loc_881FC45C;
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x881FC440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881fc45c
	if (!ctx.cr6.eq) goto loc_881FC45C;
	// lwz r11,15260(r31)
	ctx.current_instruction = 0x881FC44C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x881fc460
	if (ctx.cr6.eq) goto loc_881FC460;
loc_881FC45C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_881FC460:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,15624(r31)
	ctx.current_instruction = 0x881FC464;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15600(r31)
	ctx.current_instruction = 0x881FC46C;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r10.u32);
loc_881FC470:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88215768) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88215768);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88215768;
	ctx.current_instruction = 0x88215768;
	// std r30,-16(r1)
	ctx.current_instruction = 0x88215768;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8821576C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r8,18(r5)
	ctx.current_instruction = 0x88215774;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhz r7,16(r5)
	ctx.current_instruction = 0x8821577C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 16);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// rlwinm r5,r8,3,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF0;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// rlwinm r4,r7,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF0;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// rlwinm r30,r10,0,29,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lhz r8,52(r11)
	ctx.current_instruction = 0x8821579C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// lhz r11,50(r11)
	ctx.current_instruction = 0x882157A0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 50);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r8,r8,3,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF0;
	// rlwinm r11,r11,3,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF0;
	// beq cr6,0x882157cc
	if (ctx.cr6.eq) goto loc_882157CC;
	// li r9,-17
	ctx.r9.s64 = -17;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x882157d0
	goto loc_882157D0;
loc_882157CC:
	// li r9,-18
	ctx.r9.s64 = -18;
loc_882157D0:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x882157e0
	if (!ctx.cr6.lt) goto loc_882157E0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x882157ec
	goto loc_882157EC;
loc_882157E0:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x882157f0
	if (!ctx.cr6.gt) goto loc_882157F0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_882157EC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_882157F0:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88215800
	if (!ctx.cr6.lt) goto loc_88215800;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x88215818
	goto loc_88215818;
loc_88215800:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88215810
	if (!ctx.cr6.gt) goto loc_88215810;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x88215818
	goto loc_88215818;
loc_88215810:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x88215838
	if (ctx.cr6.eq) goto loc_88215838;
loc_88215818:
	// subf r11,r5,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r5.u64;
	// subf r7,r4,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r3,30
	ctx.r8.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88215838:
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8821583C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88215840;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88217750) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88217750;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88217750) {
			switch (rex_dispatch_address) {
				case 0x88217758:
				case 0x88217A94:
				case 0x88217B7C:
				case 0x88217BC4:
				case 0x88217BDC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88217750;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88217758: goto loc_88217758;
		case 0x88217A94: goto loc_88217A94;
		case 0x88217B7C: goto loc_88217B7C;
		case 0x88217BC4: goto loc_88217BC4;
		case 0x88217BDC: goto loc_88217BDC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88217758;
	__savegprlr_14(ctx, base);
loc_88217758:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x88217758;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,616(r4)
	ctx.current_instruction = 0x8821775C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 616);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,52(r4)
	ctx.current_instruction = 0x88217768;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.current_instruction = 0x8821776C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r5,1312(r4)
	ctx.current_instruction = 0x88217774;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r14,r9,31,1,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,348(r1)
	ctx.current_instruction = 0x88217780;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// stw r11,36(r30)
	ctx.current_instruction = 0x88217784;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r10,428(r29)
	ctx.current_instruction = 0x8821778C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 428);
	// mullw r11,r4,r14
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r14.s32);
	// stw r10,40(r30)
	ctx.current_instruction = 0x88217794;
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// lwz r9,1164(r29)
	ctx.current_instruction = 0x88217798;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1164);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,44(r30)
	ctx.current_instruction = 0x882177A0;
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r4,74(r29)
	ctx.current_instruction = 0x882177A8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r31,76(r29)
	ctx.current_instruction = 0x882177B0;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r14,100(r1)
	ctx.current_instruction = 0x882177B8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,108(r1)
	ctx.current_instruction = 0x882177C0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r4,104(r1)
	ctx.current_instruction = 0x882177C4;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bne cr6,0x88217814
	if (!ctx.cr6.eq) goto loc_88217814;
	// lwz r9,1368(r29)
	ctx.current_instruction = 0x882177CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// lwz r10,22264(r3)
	ctx.current_instruction = 0x882177D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r22,88(r1)
	ctx.current_instruction = 0x882177D8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	ctx.current_instruction = 0x882177DC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// rlwinm r9,r6,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r30)
	ctx.current_instruction = 0x882177E8;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r9,1368(r29)
	ctx.current_instruction = 0x882177EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 1368);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,22276(r3)
	ctx.current_instruction = 0x882177F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22276);
	// stw r22,0(r30)
	ctx.current_instruction = 0x882177FC;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r22,4(r30)
	ctx.current_instruction = 0x88217804;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// sth r22,16(r30)
	ctx.current_instruction = 0x88217808;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r22.u16);
	// stw r3,24(r30)
	ctx.current_instruction = 0x8821780C;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x88217884
	goto loc_88217884;
loc_88217814:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// mullw r10,r14,r7
	ctx.r10.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r27,r31,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r14,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r29
	ctx.current_instruction = 0x88217830;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r26,20(r30)
	ctx.current_instruction = 0x8821783C;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r7,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// stw r5,80(r1)
	ctx.current_instruction = 0x88217848;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// stw r5,88(r1)
	ctx.current_instruction = 0x88217850;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mullw r3,r27,r7
	ctx.r3.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r7.s32);
	// lwz r5,4(r6)
	ctx.current_instruction = 0x88217858;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r3,84(r1)
	ctx.current_instruction = 0x8821785C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r5,24(r30)
	ctx.current_instruction = 0x88217860;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x88217864;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r6)
	ctx.current_instruction = 0x88217868;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,28(r30)
	ctx.current_instruction = 0x8821786C;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lwz r6,12(r6)
	ctx.current_instruction = 0x88217870;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r6,32(r30)
	ctx.current_instruction = 0x88217874;
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r6.u32);
	// stw r9,0(r30)
	ctx.current_instruction = 0x88217878;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	ctx.current_instruction = 0x8821787C;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// sth r11,16(r30)
	ctx.current_instruction = 0x88217880;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
loc_88217884:
	// sth r22,18(r30)
	ctx.current_instruction = 0x88217884;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r22.u16);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// stw r7,96(r1)
	ctx.current_instruction = 0x8821788C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bge cr6,0x88217cb4
	if (!ctx.cr6.lt) goto loc_88217CB4;
	// li r15,16
	ctx.r15.s64 = 16;
	// li r16,32
	ctx.r16.s64 = 32;
	// li r17,48
	ctx.r17.s64 = 48;
	// li r18,64
	ctx.r18.s64 = 64;
	// li r19,80
	ctx.r19.s64 = 80;
	// li r20,96
	ctx.r20.s64 = 96;
	// li r21,112
	ctx.r21.s64 = 112;
loc_882178B0:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x882178B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x882178B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,92(r1)
	ctx.current_instruction = 0x882178BC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// sth r22,18(r30)
	ctx.current_instruction = 0x882178C0;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r22.u16);
	// stw r11,8(r30)
	ctx.current_instruction = 0x882178C4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	ctx.current_instruction = 0x882178C8;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// beq cr6,0x88217c54
	if (ctx.cr6.eq) goto loc_88217C54;
loc_882178D0:
	// ld r10,0(r5)
	ctx.current_instruction = 0x882178D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// rldicl r9,r10,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFF;
	// stw r11,80(r1)
	ctx.current_instruction = 0x882178DC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88217bf0
	if (ctx.cr6.eq) goto loc_88217BF0;
	// rldicl r8,r10,8,56
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFF;
	// lwz r9,388(r29)
	ctx.current_instruction = 0x882178F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 388);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,-10080(r7)
	ctx.current_instruction = 0x88217910;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -10080);
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x882179e4
	if (ctx.cr6.gt) goto loc_882179E4;
	// lis r12,-30687
	ctx.r12.s64 = -2011103232;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31032
	ctx.r12.s64 = ctx.r12.s64 + 31032;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x8821792C;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_88217960;
	case 1:
		goto loc_88217970;
	case 2:
		goto loc_8821797C;
	case 3:
		goto loc_88217984;
	case 4:
		goto loc_882179E4;
	case 5:
		goto loc_882179E4;
	case 6:
		goto loc_882179E4;
	case 7:
		goto loc_882179E4;
	case 8:
		goto loc_88217960;
	case 9:
		goto loc_88217970;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_88217960:
	// lwz r10,560(r29)
	ctx.current_instruction = 0x88217960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 560);
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88217964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88217990
	goto loc_88217990;
loc_88217970:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88217970;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,568(r29)
	ctx.current_instruction = 0x88217974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 568);
	// b 0x8821798c
	goto loc_8821798C;
loc_8821797C:
	// lwz r11,576(r29)
	ctx.current_instruction = 0x8821797C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 576);
	// b 0x88217988
	goto loc_88217988;
loc_88217984:
	// lwz r11,580(r29)
	ctx.current_instruction = 0x88217984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 580);
loc_88217988:
	// lwz r10,12(r30)
	ctx.current_instruction = 0x88217988;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_8821798C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88217990:
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r0,r10
	// lhz r11,90(r29)
	ctx.current_instruction = 0x88217998;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 90);
	// dcbt r11,r10
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// dcbt r9,r10
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r6,r10
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// dcbt r5,r10
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r4,r10
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rotlwi r6,r11,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// dcbt r5,r10
loc_882179E4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,-10080(r7)
	ctx.current_instruction = 0x882179FC;
	REX_STORE_U32(ctx.r7.u32 + -10080, ctx.r11.u32);
loc_88217A00:
	// srawi r26,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r27.s32 >> 2;
	// addi r11,r27,140
	ctx.r11.s64 = ctx.r27.s64 + 140;
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
	// rldicl r9,r25,20,44
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u64, 20) & 0xFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// clrlwi r8,r23,31
	ctx.r8.u64 = ctx.r23.u32 & 0x1;
	// rlwinm r5,r11,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwzx r10,r7,r29
	ctx.current_instruction = 0x88217A24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r9,r6,r30
	ctx.current_instruction = 0x88217A28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x88217bdc
	if (!ctx.cr6.eq) goto loc_88217BDC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88217bdc
	if (ctx.cr6.eq) goto loc_88217BDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88217b80
	if (!ctx.cr6.eq) goto loc_88217B80;
	// lwz r11,24(r30)
	ctx.current_instruction = 0x88217A48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r29,168
	ctx.r5.s64 = ctx.r29.s64 + 168;
	// lwz r4,444(r29)
	ctx.current_instruction = 0x88217A50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 444);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.current_instruction = 0x88217A5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.current_instruction = 0x88217A60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r31,40(r30)
	ctx.current_instruction = 0x88217A68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88217A6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x88217A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r3,24(r30)
	ctx.current_instruction = 0x88217A74;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x88217a9c
	if (ctx.cr6.lt) goto loc_88217A9C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8817db68
	ctx.lr = 0x88217A94;
	sub_8817DB68(ctx, base);
loc_88217A94:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x88217b04
	goto loc_88217B04;
loc_88217A9C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x88217b00
	if (!ctx.cr6.gt) goto loc_88217B00;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88217AA8:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x88217AA8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r15,r3,24,8,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r15,r7
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// lbzx r15,r10,r4
	ctx.current_instruction = 0x88217AD0;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r14,r15,r5
	ctx.current_instruction = 0x88217AE4;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r5.u32);
	// rotlwi r15,r15,1
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// or r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 | ctx.r9.u64;
	// sthx r8,r15,r31
	ctx.current_instruction = 0x88217AF0;
	REX_STORE_U16(ctx.r15.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x88217aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88217AA8;
	// lwz r14,100(r1)
	ctx.current_instruction = 0x88217AF8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r15,16
	ctx.r15.s64 = 16;
loc_88217B00:
	// stw r11,20(r30)
	ctx.current_instruction = 0x88217B00;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_88217B04:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88217b70
	if (!ctx.cr6.eq) goto loc_88217B70;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x88217B0C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r10,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// srawi r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,112(r1)
	ctx.current_instruction = 0x88217B3C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r15
	ea = (ctx.r31.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r16
	ea = (ctx.r31.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r17
	ea = (ctx.r31.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r18
	ea = (ctx.r31.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r19
	ea = (ctx.r31.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r20
	ea = (ctx.r31.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r21
	ea = (ctx.r31.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88217bc4
	goto loc_88217BC4;
loc_88217B70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88217cc0
	ctx.lr = 0x88217B7C;
	sub_88217CC0(ctx, base);
loc_88217B7C:
	// b 0x88217bc4
	goto loc_88217BC4;
loc_88217B80:
	// rldicl r10,r25,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.current_instruction = 0x88217B84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r9,r5,r29
	ctx.r9.u64 = ctx.r5.u64 + ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.current_instruction = 0x88217BA4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.current_instruction = 0x88217BB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88217BC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88217BC4:
	// addi r11,r26,45
	ctx.r11.s64 = ctx.r26.s64 + 45;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhzx r5,r10,r29
	ctx.current_instruction = 0x88217BD4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x88224d90
	ctx.lr = 0x88217BDC;
	sub_88224D90(ctx, base);
loc_88217BDC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r23,r23,31,1,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r25,r25,8,55
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x88217a00
	if (ctx.cr6.lt) goto loc_88217A00;
loc_88217BF0:
	// lhz r10,18(r30)
	ctx.current_instruction = 0x88217BF0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88217BF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.current_instruction = 0x88217BF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// lwz r6,92(r1)
	ctx.current_instruction = 0x88217C04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88217C08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lwz r11,12(r30)
	ctx.current_instruction = 0x88217C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,0(r30)
	ctx.current_instruction = 0x88217C1C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x88217C24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r8,92(r1)
	ctx.current_instruction = 0x88217C2C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r4,4(r30)
	ctx.current_instruction = 0x88217C30;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// cmplw cr6,r8,r14
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r14.u32, ctx.xer);
	// sth r3,18(r30)
	ctx.current_instruction = 0x88217C38;
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r3.u16);
	// stw r10,8(r30)
	ctx.current_instruction = 0x88217C3C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,12(r30)
	ctx.current_instruction = 0x88217C40;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// blt cr6,0x882178d0
	if (ctx.cr6.lt) goto loc_882178D0;
	// lwz r28,348(r1)
	ctx.current_instruction = 0x88217C48;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r4,104(r1)
	ctx.current_instruction = 0x88217C4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,108(r1)
	ctx.current_instruction = 0x88217C50;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_88217C54:
	// lhz r8,16(r30)
	ctx.current_instruction = 0x88217C54;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 16);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88217C5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// lwz r3,96(r1)
	ctx.current_instruction = 0x88217C68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x88217C70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r6,88(r1)
	ctx.current_instruction = 0x88217C78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88217C7C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// sth r7,16(r30)
	ctx.current_instruction = 0x88217C84;
	REX_STORE_U16(ctx.r30.u32 + 16, ctx.r7.u16);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,96(r1)
	ctx.current_instruction = 0x88217C8C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// stw r3,88(r1)
	ctx.current_instruction = 0x88217C94;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lhz r11,50(r29)
	ctx.current_instruction = 0x88217C98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	ctx.current_instruction = 0x88217CA0;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x882178b0
	if (ctx.cr6.lt) goto loc_882178B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88217CB4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821D220) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821D220);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821D220;
	ctx.current_instruction = 0x8821D220;
	uint32_t ea{};
	// li r10,1104
	ctx.r10.s64 = 1104;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v1,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8821b8c0
	sub_8821B8C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821DA20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821DA20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821DA20) {
			switch (rex_dispatch_address) {
				case 0x8821DA28:
				case 0x8821DA4C:
				case 0x8821DA68:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821DA20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821DA28: goto loc_8821DA28;
		case 0x8821DA4C: goto loc_8821DA4C;
		case 0x8821DA68: goto loc_8821DA68;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821DA28;
	__savegprlr_29(ctx, base);
loc_8821DA28:
	// stwu r1,-880(r1)
	ctx.current_instruction = 0x8821DA28;
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821DA4C;
	sub_8821B4B8(ctx, base);
loc_8821DA4C:
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821bd90
	ctx.lr = 0x8821DA68;
	sub_8821BD90(ctx, base);
loc_8821DA68:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821DA70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821DA70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821DA70;
	ctx.current_instruction = 0x8821DA70;
	uint32_t ea{};
	// li r10,1104
	ctx.r10.s64 = 1104;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v1,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8821bb88
	sub_8821BB88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E270) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821E270;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821E270) {
			switch (rex_dispatch_address) {
				case 0x8821E278:
				case 0x8821E29C:
				case 0x8821E2B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821E270;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821E278: goto loc_8821E278;
		case 0x8821E29C: goto loc_8821E29C;
		case 0x8821E2B8: goto loc_8821E2B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821E278;
	__savegprlr_29(ctx, base);
loc_8821E278:
	// stwu r1,-880(r1)
	ctx.current_instruction = 0x8821E278;
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821E29C;
	sub_8821B4B8(ctx, base);
loc_8821E29C:
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8821c030
	ctx.lr = 0x8821E2B8;
	sub_8821C030(ctx, base);
loc_8821E2B8:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821E488) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821E488);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821E488;
	ctx.current_instruction = 0x8821E488;
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x8821E488;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x8821e5c4
	if (!ctx.cr6.eq) goto loc_8821E5C4;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,4
	ctx.r31.s64 = 4;
	// vperm128 v63,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// lwz r9,25784(r9)
	ctx.current_instruction = 0x8821E4BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 25784);
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v62,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vperm128 v59,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v58,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v59,r0,r5
	ctx.current_instruction = 0x8821E4F0;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r5,r31
	ctx.current_instruction = 0x8821E4F4;
	ea = (ctx.r5.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r4
	ctx.current_instruction = 0x8821E4F8;
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r7
	ctx.current_instruction = 0x8821E4FC;
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v57,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v54,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v62,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v53,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r3,0
	ctx.r3.s64 = 0;
	// vperm128 v52,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v53,r10,r5
	ctx.current_instruction = 0x8821E534;
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r8,r31
	ctx.current_instruction = 0x8821E538;
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r4
	ctx.current_instruction = 0x8821E53C;
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r7
	ctx.current_instruction = 0x8821E540;
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v51,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v48,v49,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v62,v50,v51,v3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vperm128 v47,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vperm128 v46,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v47,r0,r8
	ctx.current_instruction = 0x8821E574;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r8,r31
	ctx.current_instruction = 0x8821E578;
	ea = (ctx.r8.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r4
	ctx.current_instruction = 0x8821E57C;
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r7
	ctx.current_instruction = 0x8821E580;
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v45,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v63,v44,v45,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v43,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v42,v41,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v40,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v43,r0,r10
	ctx.current_instruction = 0x8821E5AC;
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r10,r31
	ctx.current_instruction = 0x8821E5B0;
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r4
	ctx.current_instruction = 0x8821E5B4;
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r7
	ctx.current_instruction = 0x8821E5B8;
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8821E5BC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8821E5C4:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v38,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v35,v39,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v36,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v34,v38,v36,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v35,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v34,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v32,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v32,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v60,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v61,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v60,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v56,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v57,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v56,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v53,v55,v54,v4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v52,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v52,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v49,v51,v50,v3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v48,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v45,v47,v46,v2
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v44,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v44,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v41,v42,v43,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v40,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v36,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v39,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v37,v39,v38,v7
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v37,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8821E760;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88224F38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88224F38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88224F38) {
			switch (rex_dispatch_address) {
				case 0x88224F40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88224F38;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88224F40: goto loc_88224F40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88224F40;
	__savegprlr_24(ctx, base);
loc_88224F40:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r30,84(r1)
	ctx.current_instruction = 0x88224F5C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r29,r1,-144
	ctx.r29.s64 = ctx.r1.s64 + -144;
	// lvx128 v59,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-128
	ctx.r28.s64 = ctx.r1.s64 + -128;
	// lvx128 v58,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r27,r1,-144
	ctx.r27.s64 = ctx.r1.s64 + -144;
	// lvx128 v55,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-128
	ctx.r26.s64 = ctx.r1.s64 + -128;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r8,25784(r31)
	ctx.current_instruction = 0x88224FA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 25784);
	// vperm128 v61,v58,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// vperm128 v60,v56,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// stvx128 v63,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-96
	ctx.r24.s64 = ctx.r1.s64 + -96;
	// stvx128 v62,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r8,r30
	ctx.r8.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// vperm128 v54,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r28,1
	ctx.r28.s64 = 1;
	// vperm128 v53,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v61,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v52,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r30,r8,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stvx128 v60,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v51,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v51,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// and r29,r30,r10
	ctx.r29.u64 = ctx.r30.u64 & ctx.r10.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stvx128 v54,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r27,r28,r10
	ctx.r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// stvx128 v53,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v52,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r10,r28,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r29.u8 & 0x3F));
	// lwz r26,-144(r1)
	ctx.current_instruction = 0x88225018;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// lwz r27,-96(r1)
	ctx.current_instruction = 0x88225020;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r29,-128(r1)
	ctx.current_instruction = 0x8822502C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// add r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r28,-112(r1)
	ctx.current_instruction = 0x88225034;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// stw r26,0(r5)
	ctx.current_instruction = 0x88225038;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// stwx r29,r5,r6
	ctx.current_instruction = 0x8822503C;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r28,r3,r5
	ctx.current_instruction = 0x88225040;
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r27,r8,r6
	ctx.current_instruction = 0x88225044;
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r27.u32);
	// bne cr6,0x8822506c
	if (!ctx.cr6.eq) goto loc_8822506C;
	// lwz r29,-140(r1)
	ctx.current_instruction = 0x8822504C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r28,-124(r1)
	ctx.current_instruction = 0x88225050;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r27,-108(r1)
	ctx.current_instruction = 0x88225054;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r26,-92(r1)
	ctx.current_instruction = 0x88225058;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stw r29,4(r5)
	ctx.current_instruction = 0x8822505C;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// stw r28,4(r31)
	ctx.current_instruction = 0x88225060;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,4(r8)
	ctx.current_instruction = 0x88225064;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// stw r26,4(r30)
	ctx.current_instruction = 0x88225068;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_8822506C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x88225160
	if (!ctx.cr6.eq) goto loc_88225160;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// addi r30,r1,-128
	ctx.r30.s64 = ctx.r1.s64 + -128;
	// lvx128 v50,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// lvx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-144
	ctx.r27.s64 = ctx.r1.s64 + -144;
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r25,r1,-144
	ctx.r25.s64 = ctx.r1.s64 + -144;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v49,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-128
	ctx.r28.s64 = ctx.r1.s64 + -128;
	// vperm128 v62,v47,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// rlwinm r26,r3,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v46,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v45,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v62,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-140(r1)
	ctx.current_instruction = 0x882250E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r8,-144(r1)
	ctx.current_instruction = 0x882250E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stwux r8,r5,r26
	ctx.current_instruction = 0x882250EC;
	ea = ctx.r5.u32 + ctx.r26.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stvx128 v45,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-124(r1)
	ctx.current_instruction = 0x882250F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r31,4(r5)
	ctx.current_instruction = 0x882250FC;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
	// lwz r31,-128(r1)
	ctx.current_instruction = 0x88225100;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stwx r31,r5,r6
	ctx.current_instruction = 0x88225104;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// stw r30,4(r8)
	ctx.current_instruction = 0x88225108;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lvx128 v43,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v41,v42,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v62,v43,v44,v4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v63,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v40,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v39,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-140(r1)
	ctx.current_instruction = 0x88225138;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r4,-144(r1)
	ctx.current_instruction = 0x8822513C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stwux r4,r5,r3
	ctx.current_instruction = 0x88225140;
	ea = ctx.r5.u32 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stvx128 v39,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,-124(r1)
	ctx.current_instruction = 0x88225148;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r3,-128(r1)
	ctx.current_instruction = 0x88225150;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stw r7,4(r5)
	ctx.current_instruction = 0x88225154;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stwx r3,r5,r6
	ctx.current_instruction = 0x88225158;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// stw r10,4(r11)
	ctx.current_instruction = 0x8822515C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_88225160:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822A678) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822A678;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822A678) {
			switch (rex_dispatch_address) {
				case 0x8822A680:
				case 0x8822A6E4:
				case 0x8822A7D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822A678;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822A680: goto loc_8822A680;
		case 0x8822A6E4: goto loc_8822A6E4;
		case 0x8822A7D4: goto loc_8822A7D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8822A680;
	__savegprlr_26(ctx, base);
loc_8822A680:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8822A680;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r10,668(r11)
	ctx.current_instruction = 0x8822A690;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r28,r10,30
	ctx.r28.u64 = ctx.r10.u32 & 0x3;
	// lwz r11,24(r6)
	ctx.current_instruction = 0x8822A69C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r5,r3,232
	ctx.r5.s64 = ctx.r3.s64 + 232;
	// lwz r4,632(r3)
	ctx.current_instruction = 0x8822A6A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r8)
	ctx.current_instruction = 0x8822A6B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,4(r8)
	ctx.current_instruction = 0x8822A6B4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r6)
	ctx.current_instruction = 0x8822A6BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// lbz r29,0(r11)
	ctx.current_instruction = 0x8822A6C0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r6)
	ctx.current_instruction = 0x8822A6C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r26,24(r6)
	ctx.current_instruction = 0x8822A6C8;
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r26.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// blt cr6,0x8822a6ec
	if (ctx.cr6.lt) goto loc_8822A6EC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x8817db68
	ctx.lr = 0x8822A6E4;
	sub_8817DB68(ctx, base);
loc_8822A6E4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8822a74c
	goto loc_8822A74C;
loc_8822A6EC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8822a748
	if (!ctx.cr6.gt) goto loc_8822A748;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8822A6F8:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x8822A6F8;
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
	ctx.current_instruction = 0x8822A720;
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
	ctx.current_instruction = 0x8822A734;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// or r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 | ctx.r9.u64;
	// sthx r8,r29,r31
	ctx.current_instruction = 0x8822A740;
	REX_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x8822a6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822A6F8;
loc_8822A748:
	// stw r11,20(r6)
	ctx.current_instruction = 0x8822A748;
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_8822A74C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// bne cr6,0x8822a7bc
	if (!ctx.cr6.eq) goto loc_8822A7BC;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x8822A758;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
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
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
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
	ctx.current_instruction = 0x8822A7A4;
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r9,32(r11)
	ctx.current_instruction = 0x8822A7A8;
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// std r9,16(r11)
	ctx.current_instruction = 0x8822A7AC;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r9,0(r11)
	ctx.current_instruction = 0x8822A7B0;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8822A7BC:
	// rlwinm r11,r28,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x88218590
	ctx.lr = 0x8822A7D4;
	sub_88218590(ctx, base);
loc_8822A7D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8822B588) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822B588;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822B588) {
			switch (rex_dispatch_address) {
				case 0x8822B590:
				case 0x8822B744:
				case 0x8822B780:
				case 0x8822B7A0:
				case 0x8822B7D8:
				case 0x8822B800:
				case 0x8822B834:
				case 0x8822B850:
				case 0x8822B8A0:
				case 0x8822B8C8:
				case 0x8822B900:
				case 0x8822B928:
				case 0x8822B95C:
				case 0x8822B978:
				case 0x8822B9AC:
				case 0x8822BAEC:
				case 0x8822BB0C:
				case 0x8822BB5C:
				case 0x8822BBA8:
				case 0x8822BBD4:
				case 0x8822BBF4:
				case 0x8822BC28:
				case 0x8822BC60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822B588;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822B590: goto loc_8822B590;
		case 0x8822B744: goto loc_8822B744;
		case 0x8822B780: goto loc_8822B780;
		case 0x8822B7A0: goto loc_8822B7A0;
		case 0x8822B7D8: goto loc_8822B7D8;
		case 0x8822B800: goto loc_8822B800;
		case 0x8822B834: goto loc_8822B834;
		case 0x8822B850: goto loc_8822B850;
		case 0x8822B8A0: goto loc_8822B8A0;
		case 0x8822B8C8: goto loc_8822B8C8;
		case 0x8822B900: goto loc_8822B900;
		case 0x8822B928: goto loc_8822B928;
		case 0x8822B95C: goto loc_8822B95C;
		case 0x8822B978: goto loc_8822B978;
		case 0x8822B9AC: goto loc_8822B9AC;
		case 0x8822BAEC: goto loc_8822BAEC;
		case 0x8822BB0C: goto loc_8822BB0C;
		case 0x8822BB5C: goto loc_8822BB5C;
		case 0x8822BBA8: goto loc_8822BBA8;
		case 0x8822BBD4: goto loc_8822BBD4;
		case 0x8822BBF4: goto loc_8822BBF4;
		case 0x8822BC28: goto loc_8822BC28;
		case 0x8822BC60: goto loc_8822BC60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8822B590;
	__savegprlr_14(ctx, base);
loc_8822B590:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x8822B590;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,324(r1)
	ctx.current_instruction = 0x8822B598;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r7,340(r1)
	ctx.current_instruction = 0x8822B59C;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,332(r1)
	ctx.current_instruction = 0x8822B5A8;
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// lwz r5,136(r31)
	ctx.current_instruction = 0x8822B5AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8822B5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8822B5B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,3976(r31)
	ctx.current_instruction = 0x8822B5C0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 3976);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,108(r1)
	ctx.current_instruction = 0x8822B5CC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r8,104(r1)
	ctx.current_instruction = 0x8822B5DC;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x8822B5F0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,116(r1)
	ctx.current_instruction = 0x8822B5F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,124(r1)
	ctx.current_instruction = 0x8822B600;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r11,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,112(r1)
	ctx.current_instruction = 0x8822B60C;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// rlwinm r14,r11,4,0,27
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8822b634
	if (ctx.cr6.eq) goto loc_8822B634;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8822B61C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r28,204(r31)
	ctx.current_instruction = 0x8822B624;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,88(r1)
	ctx.current_instruction = 0x8822B628;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x8822B62C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x8822b644
	goto loc_8822B644;
loc_8822B634:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x8822B63C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,88(r1)
	ctx.current_instruction = 0x8822B640;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8822B644:
	// lwz r9,140(r31)
	ctx.current_instruction = 0x8822B644;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,100(r1)
	ctx.current_instruction = 0x8822B64C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8822B654;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,120(r1)
	ctx.current_instruction = 0x8822B658;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// beq cr6,0x8822ba00
	if (ctx.cr6.eq) goto loc_8822BA00;
	// stw r10,96(r1)
	ctx.current_instruction = 0x8822B660;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x8822b66c
	goto loc_8822B66C;
loc_8822B668:
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8822B668;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8822B66C:
	// lwz r11,21940(r31)
	ctx.current_instruction = 0x8822B66C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8822B674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// beq cr6,0x8822b6b0
	if (ctx.cr6.eq) goto loc_8822B6B0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8822b6a8
	if (!ctx.cr6.lt) goto loc_8822B6A8;
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x8822B688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8822B68C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,4(r7)
	ctx.current_instruction = 0x8822B694;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8822b6a8
	if (!ctx.cr6.eq) goto loc_8822B6A8;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x8822b6c0
	goto loc_8822B6C0;
loc_8822B6A8:
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x8822b6c0
	goto loc_8822B6C0;
loc_8822B6B0:
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subfze r20,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r20.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8822B6C0:
	// lwz r30,100(r1)
	ctx.current_instruction = 0x8822B6C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8822b9d4
	if (ctx.cr6.eq) goto loc_8822B9D4;
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8822B6D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r18,r28,3
	ctx.r18.s64 = ctx.r28.s64 + 3;
	// addi r17,r3,-2
	ctx.r17.s64 = ctx.r3.s64 + -2;
	// addi r16,r11,-2
	ctx.r16.s64 = ctx.r11.s64 + -2;
loc_8822B6E0:
	// add r11,r17,r21
	ctx.r11.u64 = ctx.r17.u64 + ctx.r21.u64;
	// lbz r10,0(r21)
	ctx.current_instruction = 0x8822B6E4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// add r9,r16,r21
	ctx.r9.u64 = ctx.r16.u64 + ctx.r21.u64;
	// lbz r8,1(r21)
	ctx.current_instruction = 0x8822B6EC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + 1);
	// lbz r7,2(r21)
	ctx.current_instruction = 0x8822B6F0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r21.u32 + 2);
	// rlwinm r6,r10,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// lbz r5,3(r21)
	ctx.current_instruction = 0x8822B6F8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + 3);
	// extsb r27,r8
	ctx.r27.s64 = ctx.r8.s8;
	// extsb r24,r7
	ctx.r24.s64 = ctx.r7.s8;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x8822B704;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r23,r5
	ctx.r23.s64 = ctx.r5.s8;
	// lbz r3,2(r9)
	ctx.current_instruction = 0x8822B70C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r11,r4,25
	ctx.r11.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r26,r3,25
	ctx.r26.u64 = ctx.r3.u32 & 0x7F;
	// rlwinm r25,r3,0,0,24
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// bne cr6,0x8822b870
	if (!ctx.cr6.eq) goto loc_8822B870;
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822B724;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B744:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x8822b7d8
	if (!ctx.cr6.eq) goto loc_8822B7D8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8822b780
	if (ctx.cr6.eq) goto loc_8822B780;
	// rlwinm r11,r27,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822B758;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// lwz r9,116(r1)
	ctx.current_instruction = 0x8822B75C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r6,r27,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0x78;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B768;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8822B780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B780:
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822B780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B78C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B7A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B7A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8822b7d8
	if (!ctx.cr6.eq) goto loc_8822B7D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8822b7d8
	if (ctx.cr6.eq) goto loc_8822B7D8;
	// rlwinm r11,r26,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822B7B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// rlwinm r6,r26,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B7BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x8822B7D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B7D8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8822b800
	if (ctx.cr6.eq) goto loc_8822B800;
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822B7E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B7EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B800;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B800:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8822b834
	if (ctx.cr6.eq) goto loc_8822B834;
	// rlwinm r11,r24,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822B80C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// rlwinm r6,r24,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B814;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8822B834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B834:
	// lwz r11,15932(r31)
	ctx.current_instruction = 0x8822B834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B840;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r18,r30
	ctx.r3.u64 = ctx.r18.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822B850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B850:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8822b9ac
	if (ctx.cr6.eq) goto loc_8822B9AC;
	// rlwinm r11,r23,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r23,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8822b994
	goto loc_8822B994;
loc_8822B870:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8822b8a0
	if (ctx.cr6.eq) goto loc_8822B8A0;
	// rlwinm r10,r11,31,1,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r9,15928(r31)
	ctx.current_instruction = 0x8822B87C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// rlwinm r6,r11,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B884;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8822B8A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B8A0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x8822b900
	if (!ctx.cr6.eq) goto loc_8822B900;
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822B8A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B8B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B8C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B8C8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8822b900
	if (!ctx.cr6.eq) goto loc_8822B900;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8822b900
	if (ctx.cr6.eq) goto loc_8822B900;
	// rlwinm r11,r26,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822B8DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// rlwinm r6,r26,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B8E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x8822B900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B900:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8822b928
	if (ctx.cr6.eq) goto loc_8822B928;
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822B908;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B914;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B928:
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8822B928;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8822b93c
	if (ctx.cr6.eq) goto loc_8822B93C;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// bne cr6,0x8822b95c
	if (!ctx.cr6.eq) goto loc_8822B95C;
loc_8822B93C:
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822B93C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B948;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B95C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B95C:
	// lwz r11,15932(r31)
	ctx.current_instruction = 0x8822B95C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B968;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r18,r30
	ctx.r3.u64 = ctx.r18.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822B978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B978:
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8822B978;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8822b98c
	if (ctx.cr6.eq) goto loc_8822B98C;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// bne cr6,0x8822b9ac
	if (!ctx.cr6.eq) goto loc_8822B9AC;
loc_8822B98C:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
loc_8822B994:
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822B994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822B9A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822B9AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822B9AC:
	// lwz r11,108(r1)
	ctx.current_instruction = 0x8822B9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,6
	ctx.r21.s64 = ctx.r21.s64 + 6;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8822b6e0
	if (ctx.cr6.lt) goto loc_8822B6E0;
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8822B9C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,120(r1)
	ctx.current_instruction = 0x8822B9CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,340(r1)
	ctx.current_instruction = 0x8822B9D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8822B9D4:
	// lwz r8,96(r1)
	ctx.current_instruction = 0x8822B9D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,100(r1)
	ctx.current_instruction = 0x8822B9DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,228(r31)
	ctx.current_instruction = 0x8822B9E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// stw r10,92(r1)
	ctx.current_instruction = 0x8822B9E8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r6,96(r1)
	ctx.current_instruction = 0x8822B9F4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r4,100(r1)
	ctx.current_instruction = 0x8822B9F8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// blt cr6,0x8822b668
	if (ctx.cr6.lt) goto loc_8822B668;
loc_8822BA00:
	// lwz r18,140(r31)
	ctx.current_instruction = 0x8822BA00;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r22,324(r1)
	ctx.current_instruction = 0x8822BA08;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,3976(r31)
	ctx.current_instruction = 0x8822BA0C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 3976);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lwz r20,332(r1)
	ctx.current_instruction = 0x8822BA14;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r19,136(r31)
	ctx.current_instruction = 0x8822BA18;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// beq cr6,0x8822bc90
	if (ctx.cr6.eq) goto loc_8822BC90;
	// li r21,0
	ctx.r21.s64 = 0;
loc_8822BA24:
	// lwz r11,21940(r31)
	ctx.current_instruction = 0x8822BA24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8822ba88
	if (ctx.cr6.eq) goto loc_8822BA88;
	// lwz r10,140(r31)
	ctx.current_instruction = 0x8822BA30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8822ba7c
	if (!ctx.cr6.lt) goto loc_8822BA7C;
	// lwz r11,21972(r31)
	ctx.current_instruction = 0x8822BA40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r8,4(r9)
	ctx.current_instruction = 0x8822BA48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8822ba7c
	if (!ctx.cr6.eq) goto loc_8822BA7C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8822ba80
	if (!ctx.cr6.lt) goto loc_8822BA80;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8822BA68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8822ba80
	if (!ctx.cr6.eq) goto loc_8822BA80;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8822baa8
	goto loc_8822BAA8;
loc_8822BA7C:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8822BA80:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8822baa8
	goto loc_8822BAA8;
loc_8822BA88:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8822BA88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// subfc r11,r9,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r26.u64 - ctx.r9.u64;
	// subfze r23,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r23.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r8,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r8.u32;
	ctx.r11.u64 = ctx.r26.u64 - ctx.r8.u64;
	// subfze r24,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r24.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8822BAA8:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8822bc74
	if (ctx.cr6.eq) goto loc_8822BC74;
	// subf r28,r22,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r22.u64;
loc_8822BABC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8822bb0c
	if (!ctx.cr6.eq) goto loc_8822BB0C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8822BAC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,124(r1)
	ctx.current_instruction = 0x8822BACC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,15928(r31)
	ctx.current_instruction = 0x8822BAD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BAD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BADC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8822BAEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BAEC:
	// lwz r8,15928(r31)
	ctx.current_instruction = 0x8822BAEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BAF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BB00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8822BB0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BB0C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8822bba8
	if (!ctx.cr6.eq) goto loc_8822BBA8;
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8822BB14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r9,4(r10)
	ctx.current_instruction = 0x8822BB1C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8822bb5c
	if (ctx.cr6.eq) goto loc_8822BB5C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8822BB34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,15928(r31)
	ctx.current_instruction = 0x8822BB3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// lwz r9,112(r1)
	ctx.current_instruction = 0x8822BB40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BB48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BB50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822BB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BB5C:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x8822BB5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r9,5(r10)
	ctx.current_instruction = 0x8822BB64;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8822bba8
	if (ctx.cr6.eq) goto loc_8822BBA8;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8822BB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,15928(r31)
	ctx.current_instruction = 0x8822BB84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15928);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r8,112(r1)
	ctx.current_instruction = 0x8822BB8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BB94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BB9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8822BBA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BBA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8822bbf4
	if (ctx.cr6.eq) goto loc_8822BBF4;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8822BBB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822BBB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// addi r29,r11,-5
	ctx.r29.s64 = ctx.r11.s64 + -5;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BBC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BBC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822BBD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BBD4:
	// lwz r9,15932(r31)
	ctx.current_instruction = 0x8822BBD4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BBE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BBE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8822BBF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BBF4:
	// lbz r11,4(r25)
	ctx.current_instruction = 0x8822BBF4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8822bc28
	if (ctx.cr6.eq) goto loc_8822BC28;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8822BC04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15932(r31)
	ctx.current_instruction = 0x8822BC0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BC14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BC18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8822BC28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BC28:
	// lbz r11,5(r25)
	ctx.current_instruction = 0x8822BC28;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 5);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8822bc60
	if (ctx.cr6.eq) goto loc_8822BC60;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8822BC38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r9,15932(r31)
	ctx.current_instruction = 0x8822BC40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15932);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,248(r31)
	ctx.current_instruction = 0x8822BC4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8822BC50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8822BC60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822BC60:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,6
	ctx.r25.s64 = ctx.r25.s64 + 6;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8822babc
	if (ctx.cr6.lt) goto loc_8822BABC;
loc_8822BC74:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x8822BC74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8822ba24
	if (ctx.cr6.lt) goto loc_8822BA24;
loc_8822BC90:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

