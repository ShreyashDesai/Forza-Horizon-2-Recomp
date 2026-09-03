#include "forzahorizon2_funcs.4.h"

DEFINE_REX_FUNC(sub_88050058) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050058);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050058;
	ctx.current_instruction = 0x88050058;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,16(r11)
	ctx.current_instruction = 0x88050060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(xstart) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050800);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050800;
	ctx.current_instruction = 0x88050800;
	// b 0x880506a8
	sub_880506A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88050960) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050960;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050960) {
			switch (rex_dispatch_address) {
				case 0x88050984:
				case 0x88050990:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050960;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050984: goto loc_88050984;
		case 0x88050990: goto loc_88050990;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88050964;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88050968;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805096C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30683
	ctx.r31.s64 = -2010841088;
	// lwz r3,104(r31)
	ctx.current_instruction = 0x88050974;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8805098c
	if (ctx.cr6.eq) goto loc_8805098C;
	// bl 0x88243630
	ctx.lr = 0x88050984;
	__imp__KeTlsFree(ctx, base);
loc_88050984:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,104(r31)
	ctx.current_instruction = 0x88050988;
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8805098C:
	// bl 0x88051f28
	ctx.lr = 0x88050990;
	sub_88051F28(ctx, base);
loc_88050990:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88050994;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805099C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880524C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880524C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880524C0) {
			switch (rex_dispatch_address) {
				case 0x880524E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880524C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880524E0: goto loc_880524E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880524C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880524C8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1047
	ctx.r4.u64 = ctx.r4.u64 | 1047;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x88052420
	ctx.lr = 0x880524E0;
	sub_88052420(ctx, base);
loc_880524E0:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x88243650
	ctx.lr = 0x880524E8;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_88052D90) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88052D90);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052D90;
	ctx.current_instruction = 0x88052D90;
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x88052dac
	goto loc_88052DAC;
loc_88052DA0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	ctx.current_instruction = 0x88052DA4;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_88052DAC:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x88052da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_88052DA0;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x88052de0
	if (ctx.cr0.eq) goto loc_88052DE0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_88052DC8:
	// stw r4,0(r6)
	ctx.current_instruction = 0x88052DC8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	ctx.current_instruction = 0x88052DCC;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	ctx.current_instruction = 0x88052DD0;
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	ctx.current_instruction = 0x88052DD4;
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x88052dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052DC8;
loc_88052DE0:
	// rlwinm. r0,r5,30,30,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x88052e0c
	if (ctx.cr0.eq) goto loc_88052E0C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// stw r4,0(r6)
	ctx.current_instruction = 0x88052DEC;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x88052e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88052E0C;
	// stw r4,0(r6)
	ctx.current_instruction = 0x88052DF8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x88052e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_88052E0C;
	// stw r4,0(r6)
	ctx.current_instruction = 0x88052E04;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_88052E0C:
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
	// stb r4,0(r6)
	ctx.current_instruction = 0x88052E18;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stb r4,1(r6)
	ctx.current_instruction = 0x88052E20;
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// stb r4,2(r6)
	ctx.current_instruction = 0x88052E28;
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057AE0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88057AE0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057AE0;
	ctx.current_instruction = 0x88057AE0;
	// lwz r3,56(r3)
	ctx.current_instruction = 0x88057AE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88058310) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88058310;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88058310) {
			switch (rex_dispatch_address) {
				case 0x88058318:
				case 0x8805835C:
				case 0x8805838C:
				case 0x88058440:
				case 0x88058464:
				case 0x88058484:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88058310;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88058318: goto loc_88058318;
		case 0x8805835C: goto loc_8805835C;
		case 0x8805838C: goto loc_8805838C;
		case 0x88058440: goto loc_88058440;
		case 0x88058464: goto loc_88058464;
		case 0x88058484: goto loc_88058484;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88058318;
	__savegprlr_27(ctx, base);
loc_88058318:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88058318;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	ctx.current_instruction = 0x8805832C;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_88058340:
	// sthu r9,2(r11)
	ctx.current_instruction = 0x88058340;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x88058340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88058340;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88058348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.current_instruction = 0x88058350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805835C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805835C:
	// lwz r9,4(r27)
	ctx.current_instruction = 0x8805835C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,660(r31)
	ctx.current_instruction = 0x88058368;
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// blt cr6,0x88058470
	if (ctx.cr6.lt) goto loc_88058470;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88058490
	if (ctx.cr6.eq) goto loc_88058490;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88058378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88058380;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805838C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805838C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,656(r31)
	ctx.current_instruction = 0x88058390;
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r28.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,0(r11)
	ctx.current_instruction = 0x880583A4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,4(r11)
	ctx.current_instruction = 0x880583AC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// ori r5,r9,44100
	ctx.r5.u64 = ctx.r9.u64 | 44100;
	// stw r30,8(r11)
	ctx.current_instruction = 0x880583B4;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,12(r11)
	ctx.current_instruction = 0x880583BC;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// ori r3,r8,45328
	ctx.r3.u64 = ctx.r8.u64 | 45328;
	// sth r30,16(r11)
	ctx.current_instruction = 0x880583C4;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r30.u16);
	// stw r10,652(r31)
	ctx.current_instruction = 0x880583C8;
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// sth r6,82(r1)
	ctx.current_instruction = 0x880583CC;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880583D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// sth r10,80(r1)
	ctx.current_instruction = 0x880583D4;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r7,94(r1)
	ctx.current_instruction = 0x880583D8;
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// sth r4,92(r1)
	ctx.current_instruction = 0x880583DC;
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r4.u16);
	// stw r3,88(r1)
	ctx.current_instruction = 0x880583E0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,8(r27)
	ctx.current_instruction = 0x880583E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880583f4
	if (!ctx.cr6.eq) goto loc_880583F4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_880583F4:
	// stw r11,636(r31)
	ctx.current_instruction = 0x880583F4;
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r6,660(r31)
	ctx.current_instruction = 0x880583FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 660);
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// lwz r30,0(r28)
	ctx.current_instruction = 0x88058404;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// addi r8,r9,2832
	ctx.r8.s64 = ctx.r9.s64 + 2832;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f1,6708(r11)
	ctx.current_instruction = 0x88058418;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// lwz r7,32(r30)
	ctx.current_instruction = 0x88058424;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// ori r6,r11,2
	ctx.r6.u64 = ctx.r11.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88058440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88058440:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88058470
	if (ctx.cr6.lt) goto loc_88058470;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805844C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.current_instruction = 0x88058454;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x88058458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88058464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88058464:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88058484
	if (!ctx.cr6.lt) goto loc_88058484;
loc_88058470:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88058470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.current_instruction = 0x88058478;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88058484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88058484:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88058490:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x88058470
	goto loc_88058470;
}

DEFINE_REX_FUNC(sub_8805BD38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805BD38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805BD38) {
			switch (rex_dispatch_address) {
				case 0x8805BD64:
				case 0x8805BD6C:
				case 0x8805BD74:
				case 0x8805BD7C:
				case 0x8805BD84:
				case 0x8805BDA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BD38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805BD64: goto loc_8805BD64;
		case 0x8805BD6C: goto loc_8805BD6C;
		case 0x8805BD74: goto loc_8805BD74;
		case 0x8805BD7C: goto loc_8805BD7C;
		case 0x8805BD84: goto loc_8805BD84;
		case 0x8805BDA0: goto loc_8805BDA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805BD3C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805BD40;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805BD44;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805BD48;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,8768
	ctx.r10.s64 = ctx.r11.s64 + 8768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x8805BD5C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8805b1c8
	ctx.lr = 0x8805BD64;
	sub_8805B1C8(ctx, base);
loc_8805BD64:
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x88067c60
	ctx.lr = 0x8805BD6C;
	sub_88067C60(ctx, base);
loc_8805BD6C:
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x88067c60
	ctx.lr = 0x8805BD74;
	sub_88067C60(ctx, base);
loc_8805BD74:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x88067c60
	ctx.lr = 0x8805BD7C;
	sub_88067C60(ctx, base);
loc_8805BD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8805BD84;
	sub_88062000(ctx, base);
loc_8805BD84:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8805bda4
	if (ctx.cr6.eq) goto loc_8805BDA4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// bl 0x88050358
	ctx.lr = 0x8805BDA0;
	sub_88050358(ctx, base);
loc_8805BDA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8805BDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805BDA8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805BDB0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805BDB4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805CD88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805CD88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805CD88) {
			switch (rex_dispatch_address) {
				case 0x8805CD90:
				case 0x8805CDC4:
				case 0x8805CE88:
				case 0x8805CEA8:
				case 0x8805CF58:
				case 0x8805CF88:
				case 0x8805CFA0:
				case 0x8805CFC0:
				case 0x8805CFEC:
				case 0x8805D004:
				case 0x8805D010:
				case 0x8805D048:
				case 0x8805D068:
				case 0x8805D0AC:
				case 0x8805D0C0:
				case 0x8805D0E0:
				case 0x8805D0FC:
				case 0x8805D118:
				case 0x8805D124:
				case 0x8805D140:
				case 0x8805D1AC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805CD88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805CD90: goto loc_8805CD90;
		case 0x8805CDC4: goto loc_8805CDC4;
		case 0x8805CE88: goto loc_8805CE88;
		case 0x8805CEA8: goto loc_8805CEA8;
		case 0x8805CF58: goto loc_8805CF58;
		case 0x8805CF88: goto loc_8805CF88;
		case 0x8805CFA0: goto loc_8805CFA0;
		case 0x8805CFC0: goto loc_8805CFC0;
		case 0x8805CFEC: goto loc_8805CFEC;
		case 0x8805D004: goto loc_8805D004;
		case 0x8805D010: goto loc_8805D010;
		case 0x8805D048: goto loc_8805D048;
		case 0x8805D068: goto loc_8805D068;
		case 0x8805D0AC: goto loc_8805D0AC;
		case 0x8805D0C0: goto loc_8805D0C0;
		case 0x8805D0E0: goto loc_8805D0E0;
		case 0x8805D0FC: goto loc_8805D0FC;
		case 0x8805D118: goto loc_8805D118;
		case 0x8805D124: goto loc_8805D124;
		case 0x8805D140: goto loc_8805D140;
		case 0x8805D1AC: goto loc_8805D1AC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x8805CD90;
	__savegprlr_21(ctx, base);
loc_8805CD90:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x8805CD90;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.current_instruction = 0x8805CD94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805cdcc
	if (ctx.cr6.eq) goto loc_8805CDCC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805CDB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.current_instruction = 0x8805CDB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805CDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CDC4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_8805CDCC:
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r24,48(r31)
	ctx.current_instruction = 0x8805CDD4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,0(r25)
	ctx.current_instruction = 0x8805CDDC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// ld r9,88(r31)
	ctx.current_instruction = 0x8805CDE0;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// ld r11,64(r31)
	ctx.current_instruction = 0x8805CDE4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,56(r31)
	ctx.current_instruction = 0x8805CDE8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8805ce0c
	if (ctx.cr6.lt) goto loc_8805CE0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	ctx.current_instruction = 0x8805CE00;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_8805CE0C:
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrldi r7,r22,32
	ctx.r7.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x8805ce34
	if (!ctx.cr6.lt) goto loc_8805CE34;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8805CE34:
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8805d1e4
	if (ctx.cr6.eq) goto loc_8805D1E4;
loc_8805CE40:
	// ld r9,64(r31)
	ctx.current_instruction = 0x8805CE40;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,56(r31)
	ctx.current_instruction = 0x8805CE44;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 56);
	// ld r11,88(r31)
	ctx.current_instruction = 0x8805CE48;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x8805d1e0
	if (!ctx.cr6.lt) goto loc_8805D1E0;
	// ld r10,72(r31)
	ctx.current_instruction = 0x8805CE58;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8805ce74
	if (ctx.cr6.lt) goto loc_8805CE74;
	// ld r9,80(r31)
	ctx.current_instruction = 0x8805CE64;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8805cec0
	if (ctx.cr6.lt) goto loc_8805CEC0;
loc_8805CE74:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805CE74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.current_instruction = 0x8805CE7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805CE88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CE88:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805d1e4
	if (ctx.cr6.lt) goto loc_8805D1E4;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805CE94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.current_instruction = 0x8805CE9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805CEA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CEA8:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805d1e4
	if (ctx.cr6.lt) goto loc_8805D1E4;
	// lwz r11,48(r31)
	ctx.current_instruction = 0x8805CEB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805d1e4
	if (!ctx.cr6.eq) goto loc_8805D1E4;
loc_8805CEC0:
	// ld r11,88(r31)
	ctx.current_instruction = 0x8805CEC0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// ld r10,72(r31)
	ctx.current_instruction = 0x8805CEC4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r9,104(r31)
	ctx.current_instruction = 0x8805CEC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r11,112(r31)
	ctx.current_instruction = 0x8805CED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 ? ctx.r8.u64 / ctx.r9.u64 : 0;
	// rotlwi r29,r7,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8805cf18
	if (!ctx.cr6.gt) goto loc_8805CF18;
	// subf. r10,r11,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x8805cf44
	if (ctx.cr0.eq) goto loc_8805CF44;
loc_8805CEF4:
	// lwz r10,128(r31)
	ctx.current_instruction = 0x8805CEF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x8805CEFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,128(r31)
	ctx.current_instruction = 0x8805CF00;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r8,112(r31)
	ctx.current_instruction = 0x8805CF04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// subf r7,r8,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r8.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8805cef4
	if (ctx.cr6.lt) goto loc_8805CEF4;
	// b 0x8805cf44
	goto loc_8805CF44;
loc_8805CF18:
	// subf. r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x8805cf44
	if (ctx.cr0.eq) goto loc_8805CF44;
loc_8805CF24:
	// lwz r10,128(r31)
	ctx.current_instruction = 0x8805CF24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8805CF2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,128(r31)
	ctx.current_instruction = 0x8805CF30;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r8,112(r31)
	ctx.current_instruction = 0x8805CF34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// subf r7,r29,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r29.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8805cf24
	if (ctx.cr6.lt) goto loc_8805CF24;
loc_8805CF44:
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805CF44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805CF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.current_instruction = 0x8805CF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805CF58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CF58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805d1e0
	if (!ctx.cr6.eq) goto loc_8805D1E0;
	// lwz r11,116(r31)
	ctx.current_instruction = 0x8805CF60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// stw r29,112(r31)
	ctx.current_instruction = 0x8805CF64;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8805d0c4
	if (ctx.cr6.lt) goto loc_8805D0C4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8805CF74:
	// lwz r3,132(r31)
	ctx.current_instruction = 0x8805CF74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805CF78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8805CF7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805CF88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CF88:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8805CF8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x881eccf0
	ctx.lr = 0x8805CFA0;
	sub_881ECCF0(ctx, base);
loc_8805CFA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805d0a8
	if (ctx.cr6.eq) goto loc_8805D0A8;
	// lwz r3,132(r31)
	ctx.current_instruction = 0x8805CFA8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805CFB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.current_instruction = 0x8805CFB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805CFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CFC0:
	// ld r10,80(r31)
	ctx.current_instruction = 0x8805CFC0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 80);
	// ld r11,72(r31)
	ctx.current_instruction = 0x8805CFC4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r8,r11,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,8(r30)
	ctx.current_instruction = 0x8805CFD0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r8,12(r30)
	ctx.current_instruction = 0x8805CFD4;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r3,132(r31)
	ctx.current_instruction = 0x8805CFD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r7,0(r3)
	ctx.current_instruction = 0x8805CFDC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.current_instruction = 0x8805CFE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8805CFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805CFEC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,104(r31)
	ctx.current_instruction = 0x8805CFF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8805CFFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x881ecb70
	ctx.lr = 0x8805D004;
	sub_881ECB70(ctx, base);
loc_8805D004:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805d068
	if (!ctx.cr6.eq) goto loc_8805D068;
	// bl 0x881e9030
	ctx.lr = 0x8805D010;
	sub_881E9030(ctx, base);
loc_8805D010:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x8805d02c
	if (!ctx.cr6.eq) goto loc_8805D02C;
	// lwz r3,132(r31)
	ctx.current_instruction = 0x8805D018;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D01C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.current_instruction = 0x8805D020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8805d060
	goto loc_8805D060;
loc_8805D02C:
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8805d068
	if (ctx.cr6.eq) goto loc_8805D068;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8805D03C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D048:
	// lwz r9,132(r31)
	ctx.current_instruction = 0x8805D048;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8805D054;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.current_instruction = 0x8805D058;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8805D060:
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x8805D068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D068:
	// ld r11,72(r31)
	ctx.current_instruction = 0x8805D068;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,104(r31)
	ctx.current_instruction = 0x8805D070;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,132(r31)
	ctx.current_instruction = 0x8805D074;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r9,112(r31)
	ctx.current_instruction = 0x8805D078;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// std r7,72(r31)
	ctx.current_instruction = 0x8805D084;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r7.u64);
	// lwz r5,8(r8)
	ctx.current_instruction = 0x8805D088;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,112(r31)
	ctx.current_instruction = 0x8805D08C;
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r5,132(r31)
	ctx.current_instruction = 0x8805D090;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// lwz r4,116(r31)
	ctx.current_instruction = 0x8805D094;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// subf r3,r4,r29
	ctx.r3.u64 = ctx.r29.u64 - ctx.r4.u64;
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8805cf74
	if (!ctx.cr6.gt) goto loc_8805CF74;
	// b 0x8805d0c4
	goto loc_8805D0C4;
loc_8805D0A8:
	// bl 0x881e9030
	ctx.lr = 0x8805D0AC;
	sub_881E9030(ctx, base);
loc_8805D0AC:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D0AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8805D0B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D0C0:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8805D0C4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x8805d1e4
	if (ctx.cr6.lt) goto loc_8805D1E4;
	// lwz r3,128(r31)
	ctx.current_instruction = 0x8805D0CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805D0D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8805D0D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D0E0:
	// lwz r9,128(r31)
	ctx.current_instruction = 0x8805D0E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.current_instruction = 0x8805D0EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,40(r8)
	ctx.current_instruction = 0x8805D0F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8805D0FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D0FC:
	// stw r24,80(r1)
	ctx.current_instruction = 0x8805D0FC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8805D110;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x881eccf0
	ctx.lr = 0x8805D118;
	sub_881ECCF0(ctx, base);
loc_8805D118:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805d144
	if (!ctx.cr6.eq) goto loc_8805D144;
	// bl 0x881e9030
	ctx.lr = 0x8805D124;
	sub_881E9030(ctx, base);
loc_8805D124:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x8805d144
	if (ctx.cr6.eq) goto loc_8805D144;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805D12C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.current_instruction = 0x8805D134;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805D140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805D140:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8805D144:
	// lwz r11,104(r31)
	ctx.current_instruction = 0x8805D144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,112(r31)
	ctx.current_instruction = 0x8805D148;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// ld r9,88(r31)
	ctx.current_instruction = 0x8805D14C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// ld r8,72(r31)
	ctx.current_instruction = 0x8805D150;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r4,r7,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r30,r10,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8805d178
	if (!ctx.cr6.gt) goto loc_8805D178;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8805D178:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8805D178;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8805d1e0
	if (ctx.cr6.lt) goto loc_8805D1E0;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8805d1e0
	if (ctx.cr0.eq) goto loc_8805D1E0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8805d198
	if (!ctx.cr6.gt) goto loc_8805D198;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8805D198:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805D198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x880547a0
	ctx.lr = 0x8805D1AC;
	sub_880547A0(ctx, base);
loc_8805D1AC:
	// ld r10,88(r31)
	ctx.current_instruction = 0x8805D1AC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 88);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// std r11,88(r31)
	ctx.current_instruction = 0x8805D1C0;
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805D1C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,0(r25)
	ctx.current_instruction = 0x8805D1CC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8805d1e4
	if (ctx.cr6.lt) goto loc_8805D1E4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8805ce40
	if (!ctx.cr6.eq) goto loc_8805CE40;
	// b 0x8805d1e4
	goto loc_8805D1E4;
loc_8805D1E0:
	// stw r21,48(r31)
	ctx.current_instruction = 0x8805D1E0;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_8805D1E4:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x8805D1E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8805d1f8
	if (ctx.cr6.lt) goto loc_8805D1F8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x8805d1fc
	if (!ctx.cr6.lt) goto loc_8805D1FC;
loc_8805D1F8:
	// stw r21,48(r31)
	ctx.current_instruction = 0x8805D1F8;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_8805D1FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806BF78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806BF78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806BF78;
	ctx.current_instruction = 0x8806BF78;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r3)
	ctx.current_instruction = 0x8806BF80;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x8806BF84;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x8806BF88;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// std r11,56(r3)
	ctx.current_instruction = 0x8806BF8C;
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	ctx.current_instruction = 0x8806BF90;
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// stw r10,92(r3)
	ctx.current_instruction = 0x8806BF94;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// std r11,72(r3)
	ctx.current_instruction = 0x8806BF98;
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// std r11,80(r3)
	ctx.current_instruction = 0x8806BF9C;
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// stw r11,88(r3)
	ctx.current_instruction = 0x8806BFA0;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806C380) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806C380);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806C380;
	ctx.current_instruction = 0x8806C380;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7868(r3)
	ctx.current_instruction = 0x8806C384;
	REX_STORE_U32(ctx.r3.u32 + 7868, ctx.r11.u32);
	// stw r11,7764(r3)
	ctx.current_instruction = 0x8806C388;
	REX_STORE_U32(ctx.r3.u32 + 7764, ctx.r11.u32);
	// stw r11,7768(r3)
	ctx.current_instruction = 0x8806C38C;
	REX_STORE_U32(ctx.r3.u32 + 7768, ctx.r11.u32);
	// stw r11,7772(r3)
	ctx.current_instruction = 0x8806C390;
	REX_STORE_U32(ctx.r3.u32 + 7772, ctx.r11.u32);
	// stw r11,19200(r3)
	ctx.current_instruction = 0x8806C394;
	REX_STORE_U32(ctx.r3.u32 + 19200, ctx.r11.u32);
	// stw r11,19112(r3)
	ctx.current_instruction = 0x8806C398;
	REX_STORE_U32(ctx.r3.u32 + 19112, ctx.r11.u32);
	// stw r11,19196(r3)
	ctx.current_instruction = 0x8806C39C;
	REX_STORE_U32(ctx.r3.u32 + 19196, ctx.r11.u32);
	// stw r11,19204(r3)
	ctx.current_instruction = 0x8806C3A0;
	REX_STORE_U32(ctx.r3.u32 + 19204, ctx.r11.u32);
	// stw r11,7612(r3)
	ctx.current_instruction = 0x8806C3A4;
	REX_STORE_U32(ctx.r3.u32 + 7612, ctx.r11.u32);
	// stw r11,7608(r3)
	ctx.current_instruction = 0x8806C3A8;
	REX_STORE_U32(ctx.r3.u32 + 7608, ctx.r11.u32);
	// stw r11,7604(r3)
	ctx.current_instruction = 0x8806C3AC;
	REX_STORE_U32(ctx.r3.u32 + 7604, ctx.r11.u32);
	// stw r11,7624(r3)
	ctx.current_instruction = 0x8806C3B0;
	REX_STORE_U32(ctx.r3.u32 + 7624, ctx.r11.u32);
	// stw r11,7664(r3)
	ctx.current_instruction = 0x8806C3B4;
	REX_STORE_U32(ctx.r3.u32 + 7664, ctx.r11.u32);
	// stw r11,7780(r3)
	ctx.current_instruction = 0x8806C3B8;
	REX_STORE_U32(ctx.r3.u32 + 7780, ctx.r11.u32);
	// stw r11,7784(r3)
	ctx.current_instruction = 0x8806C3BC;
	REX_STORE_U32(ctx.r3.u32 + 7784, ctx.r11.u32);
	// stw r11,7788(r3)
	ctx.current_instruction = 0x8806C3C0;
	REX_STORE_U32(ctx.r3.u32 + 7788, ctx.r11.u32);
	// stw r11,7792(r3)
	ctx.current_instruction = 0x8806C3C4;
	REX_STORE_U32(ctx.r3.u32 + 7792, ctx.r11.u32);
	// stw r11,7796(r3)
	ctx.current_instruction = 0x8806C3C8;
	REX_STORE_U32(ctx.r3.u32 + 7796, ctx.r11.u32);
	// stw r11,7800(r3)
	ctx.current_instruction = 0x8806C3CC;
	REX_STORE_U32(ctx.r3.u32 + 7800, ctx.r11.u32);
	// stw r11,7776(r3)
	ctx.current_instruction = 0x8806C3D0;
	REX_STORE_U32(ctx.r3.u32 + 7776, ctx.r11.u32);
	// stw r11,7832(r3)
	ctx.current_instruction = 0x8806C3D4;
	REX_STORE_U32(ctx.r3.u32 + 7832, ctx.r11.u32);
	// stw r11,6808(r3)
	ctx.current_instruction = 0x8806C3D8;
	REX_STORE_U32(ctx.r3.u32 + 6808, ctx.r11.u32);
	// stw r11,6812(r3)
	ctx.current_instruction = 0x8806C3DC;
	REX_STORE_U32(ctx.r3.u32 + 6812, ctx.r11.u32);
	// stw r11,6816(r3)
	ctx.current_instruction = 0x8806C3E0;
	REX_STORE_U32(ctx.r3.u32 + 6816, ctx.r11.u32);
	// stw r11,6820(r3)
	ctx.current_instruction = 0x8806C3E4;
	REX_STORE_U32(ctx.r3.u32 + 6820, ctx.r11.u32);
	// stw r11,6824(r3)
	ctx.current_instruction = 0x8806C3E8;
	REX_STORE_U32(ctx.r3.u32 + 6824, ctx.r11.u32);
	// stw r11,6836(r3)
	ctx.current_instruction = 0x8806C3EC;
	REX_STORE_U32(ctx.r3.u32 + 6836, ctx.r11.u32);
	// stw r11,6840(r3)
	ctx.current_instruction = 0x8806C3F0;
	REX_STORE_U32(ctx.r3.u32 + 6840, ctx.r11.u32);
	// stw r11,2268(r3)
	ctx.current_instruction = 0x8806C3F4;
	REX_STORE_U32(ctx.r3.u32 + 2268, ctx.r11.u32);
	// stw r11,772(r3)
	ctx.current_instruction = 0x8806C3F8;
	REX_STORE_U32(ctx.r3.u32 + 772, ctx.r11.u32);
	// stw r11,3460(r3)
	ctx.current_instruction = 0x8806C3FC;
	REX_STORE_U32(ctx.r3.u32 + 3460, ctx.r11.u32);
	// stw r11,3464(r3)
	ctx.current_instruction = 0x8806C400;
	REX_STORE_U32(ctx.r3.u32 + 3464, ctx.r11.u32);
	// stw r11,3492(r3)
	ctx.current_instruction = 0x8806C404;
	REX_STORE_U32(ctx.r3.u32 + 3492, ctx.r11.u32);
	// stw r11,3020(r3)
	ctx.current_instruction = 0x8806C408;
	REX_STORE_U32(ctx.r3.u32 + 3020, ctx.r11.u32);
	// stw r11,3592(r3)
	ctx.current_instruction = 0x8806C40C;
	REX_STORE_U32(ctx.r3.u32 + 3592, ctx.r11.u32);
	// stw r11,3596(r3)
	ctx.current_instruction = 0x8806C410;
	REX_STORE_U32(ctx.r3.u32 + 3596, ctx.r11.u32);
	// stw r11,4428(r3)
	ctx.current_instruction = 0x8806C414;
	REX_STORE_U32(ctx.r3.u32 + 4428, ctx.r11.u32);
	// stw r11,4432(r3)
	ctx.current_instruction = 0x8806C418;
	REX_STORE_U32(ctx.r3.u32 + 4432, ctx.r11.u32);
	// stw r11,4460(r3)
	ctx.current_instruction = 0x8806C41C;
	REX_STORE_U32(ctx.r3.u32 + 4460, ctx.r11.u32);
	// stw r11,3988(r3)
	ctx.current_instruction = 0x8806C420;
	REX_STORE_U32(ctx.r3.u32 + 3988, ctx.r11.u32);
	// stw r11,4560(r3)
	ctx.current_instruction = 0x8806C424;
	REX_STORE_U32(ctx.r3.u32 + 4560, ctx.r11.u32);
	// stw r11,4564(r3)
	ctx.current_instruction = 0x8806C428;
	REX_STORE_U32(ctx.r3.u32 + 4564, ctx.r11.u32);
	// stw r11,5396(r3)
	ctx.current_instruction = 0x8806C42C;
	REX_STORE_U32(ctx.r3.u32 + 5396, ctx.r11.u32);
	// stw r11,5400(r3)
	ctx.current_instruction = 0x8806C430;
	REX_STORE_U32(ctx.r3.u32 + 5400, ctx.r11.u32);
	// stw r11,5428(r3)
	ctx.current_instruction = 0x8806C434;
	REX_STORE_U32(ctx.r3.u32 + 5428, ctx.r11.u32);
	// stw r11,4956(r3)
	ctx.current_instruction = 0x8806C438;
	REX_STORE_U32(ctx.r3.u32 + 4956, ctx.r11.u32);
	// stw r11,5528(r3)
	ctx.current_instruction = 0x8806C43C;
	REX_STORE_U32(ctx.r3.u32 + 5528, ctx.r11.u32);
	// stw r11,5532(r3)
	ctx.current_instruction = 0x8806C440;
	REX_STORE_U32(ctx.r3.u32 + 5532, ctx.r11.u32);
	// stw r11,6364(r3)
	ctx.current_instruction = 0x8806C444;
	REX_STORE_U32(ctx.r3.u32 + 6364, ctx.r11.u32);
	// stw r11,6368(r3)
	ctx.current_instruction = 0x8806C448;
	REX_STORE_U32(ctx.r3.u32 + 6368, ctx.r11.u32);
	// stw r11,6396(r3)
	ctx.current_instruction = 0x8806C44C;
	REX_STORE_U32(ctx.r3.u32 + 6396, ctx.r11.u32);
	// stw r11,5924(r3)
	ctx.current_instruction = 0x8806C450;
	REX_STORE_U32(ctx.r3.u32 + 5924, ctx.r11.u32);
	// stw r11,6496(r3)
	ctx.current_instruction = 0x8806C454;
	REX_STORE_U32(ctx.r3.u32 + 6496, ctx.r11.u32);
	// stw r11,6500(r3)
	ctx.current_instruction = 0x8806C458;
	REX_STORE_U32(ctx.r3.u32 + 6500, ctx.r11.u32);
	// stw r11,3400(r3)
	ctx.current_instruction = 0x8806C45C;
	REX_STORE_U32(ctx.r3.u32 + 3400, ctx.r11.u32);
	// stw r11,3404(r3)
	ctx.current_instruction = 0x8806C460;
	REX_STORE_U32(ctx.r3.u32 + 3404, ctx.r11.u32);
	// stw r11,3408(r3)
	ctx.current_instruction = 0x8806C464;
	REX_STORE_U32(ctx.r3.u32 + 3408, ctx.r11.u32);
	// stw r11,3396(r3)
	ctx.current_instruction = 0x8806C468;
	REX_STORE_U32(ctx.r3.u32 + 3396, ctx.r11.u32);
	// stw r11,3016(r3)
	ctx.current_instruction = 0x8806C46C;
	REX_STORE_U32(ctx.r3.u32 + 3016, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806FF18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806FF18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806FF18;
	ctx.current_instruction = 0x8806FF18;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,11424
	ctx.r9.s64 = ctx.r11.s64 + 11424;
	// lwzx r7,r10,r9
	ctx.current_instruction = 0x8806FF24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r6,r7,r4
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// addis r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 131072;
	// srawi r4,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 18;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88070410) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88070410;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88070410) {
			switch (rex_dispatch_address) {
				case 0x88070418:
				case 0x8807043C:
				case 0x88070460:
				case 0x88070470:
				case 0x88070480:
				case 0x88070490:
				case 0x880704B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88070410;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88070418: goto loc_88070418;
		case 0x8807043C: goto loc_8807043C;
		case 0x88070460: goto loc_88070460;
		case 0x88070470: goto loc_88070470;
		case 0x88070480: goto loc_88070480;
		case 0x88070490: goto loc_88070490;
		case 0x880704B0: goto loc_880704B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88070418;
	__savegprlr_29(ctx, base);
loc_88070418:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88070418;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1280(r3)
	ctx.current_instruction = 0x8807041C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7868(r3)
	ctx.current_instruction = 0x88070424;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880704a8
	if (ctx.cr6.eq) goto loc_880704A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x8807043C;
	sub_880E6960(ctx, base);
loc_8807043C:
	// lwz r11,1348(r31)
	ctx.current_instruction = 0x8807043C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880704b0
	if (!ctx.cr6.gt) goto loc_880704B0;
	// addi r30,r31,1272
	ctx.r30.s64 = ctx.r31.s64 + 1272;
loc_88070450:
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r4,20(r30)
	ctx.current_instruction = 0x88070454;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88070458;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88070460;
	sub_880E6960(ctx, base);
loc_88070460:
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88070464;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,24(r30)
	ctx.current_instruction = 0x88070468;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x880e6960
	ctx.lr = 0x88070470;
	sub_880E6960(ctx, base);
loc_88070470:
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88070474;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r4,12(r30)
	ctx.current_instruction = 0x88070478;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x880e6960
	ctx.lr = 0x88070480;
	sub_880E6960(ctx, base);
loc_88070480:
	// li r5,14
	ctx.r5.s64 = 14;
	// lwzu r4,16(r30)
	ctx.current_instruction = 0x88070484;
	ea = 16 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x88070488;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x88070490;
	sub_880E6960(ctx, base);
loc_88070490:
	// lwz r11,1348(r31)
	ctx.current_instruction = 0x88070490;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1348);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88070450
	if (ctx.cr6.lt) goto loc_88070450;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880704A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880704B0;
	sub_880E6960(ctx, base);
loc_880704B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88072B88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88072B88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88072B88) {
			switch (rex_dispatch_address) {
				case 0x88072B90:
				case 0x88072C08:
				case 0x88072C10:
				case 0x88072C24:
				case 0x88072C2C:
				case 0x88072C34:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88072B88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88072B90: goto loc_88072B90;
		case 0x88072C08: goto loc_88072C08;
		case 0x88072C10: goto loc_88072C10;
		case 0x88072C24: goto loc_88072C24;
		case 0x88072C2C: goto loc_88072C2C;
		case 0x88072C34: goto loc_88072C34;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88072B90;
	__savegprlr_29(ctx, base);
loc_88072B90:
	// stfd f30,-48(r1)
	ctx.current_instruction = 0x88072B90;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	ctx.current_instruction = 0x88072B94;
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88072B98;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28568(r3)
	ctx.current_instruction = 0x88072B9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28568);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88072c1c
	if (ctx.cr6.eq) goto loc_88072C1C;
	// lwz r11,30152(r3)
	ctx.current_instruction = 0x88072BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88072c1c
	if (ctx.cr6.eq) goto loc_88072C1C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r31,r3,29412
	ctx.r31.s64 = ctx.r3.s64 + 29412;
	// li r30,73
	ctx.r30.s64 = 73;
	// lfd f30,12296(r11)
	ctx.current_instruction = 0x88072BC8;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 12296);
	// lfd f31,1488(r10)
	ctx.current_instruction = 0x88072BCC;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 1488);
loc_88072BD0:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88072BD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,30152(r29)
	ctx.current_instruction = 0x88072BD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 30152);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,88(r1)
	ctx.current_instruction = 0x88072BE0;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x88072BE4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	ctx.current_instruction = 0x88072BE8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88072BEC;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x88072c10
	if (ctx.cr6.eq) goto loc_88072C10;
	// bl 0x881ef2e8
	ctx.lr = 0x88072C08;
	sub_881EF2E8(ctx, base);
loc_88072C08:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x881ef2e8
	ctx.lr = 0x88072C10;
	sub_881EF2E8(ctx, base);
loc_88072C10:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x88072bd0
	if (!ctx.cr0.eq) goto loc_88072BD0;
loc_88072C1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88071e98
	ctx.lr = 0x88072C24;
	sub_88071E98(ctx, base);
loc_88072C24:
	// addi r3,r29,30344
	ctx.r3.s64 = ctx.r29.s64 + 30344;
	// bl 0x88061460
	ctx.lr = 0x88072C2C;
	sub_88061460(ctx, base);
loc_88072C2C:
	// addi r3,r29,30308
	ctx.r3.s64 = ctx.r29.s64 + 30308;
	// bl 0x88061460
	ctx.lr = 0x88072C34;
	sub_88061460(ctx, base);
loc_88072C34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.current_instruction = 0x88072C38;
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.current_instruction = 0x88072C3C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88078478) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88078478);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88078478;
	ctx.current_instruction = 0x88078478;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88078478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x88078480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// bne cr6,0x880784b4
	if (!ctx.cr6.eq) goto loc_880784B4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880784a8
	if (ctx.cr6.eq) goto loc_880784A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880784a8
	if (ctx.cr6.eq) goto loc_880784A8;
	// lwz r11,1560(r3)
	ctx.current_instruction = 0x88078498;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1560);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,1560(r3)
	ctx.current_instruction = 0x880784A0;
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880784A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1560(r3)
	ctx.current_instruction = 0x880784AC;
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880784B4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880784f4
	if (!ctx.cr6.eq) goto loc_880784F4;
	// lwz r11,20256(r3)
	ctx.current_instruction = 0x880784BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880784a8
	if (ctx.cr6.eq) goto loc_880784A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880784a8
	if (ctx.cr6.eq) goto loc_880784A8;
	// lwz r11,8172(r3)
	ctx.current_instruction = 0x880784D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,1560(r3)
	ctx.current_instruction = 0x880784DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1560);
	// lwz r10,19220(r3)
	ctx.current_instruction = 0x880784E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 19220);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r8,1560(r3)
	ctx.current_instruction = 0x880784EC;
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880784F4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,20256(r3)
	ctx.current_instruction = 0x880784FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88078510
	if (ctx.cr6.eq) goto loc_88078510;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88078510:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1560(r3)
	ctx.current_instruction = 0x88078514;
	REX_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807C328) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807C328);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807C328;
	ctx.current_instruction = 0x8807C328;
	// lwz r11,12(r3)
	ctx.current_instruction = 0x8807C328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8807c3a0
	if (ctx.cr6.eq) goto loc_8807C3A0;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8807c3a0
	if (ctx.cr6.lt) goto loc_8807C3A0;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8807C344;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x8807C348;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,8(r11)
	ctx.current_instruction = 0x8807C350;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bne cr6,0x8807c360
	if (!ctx.cr6.eq) goto loc_8807C360;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,12(r11)
	ctx.current_instruction = 0x8807C35C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_8807C360:
	// stw r4,4(r10)
	ctx.current_instruction = 0x8807C360;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x8807C364;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	ctx.current_instruction = 0x8807C368;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x8807C36C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,0(r11)
	ctx.current_instruction = 0x8807C374;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8807c380
	if (!ctx.cr6.eq) goto loc_8807C380;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8807C37C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8807C380:
	// lwz r10,16(r11)
	ctx.current_instruction = 0x8807C380;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	ctx.current_instruction = 0x8807C38C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.current_instruction = 0x8807C390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r9)
	ctx.current_instruction = 0x8807C398;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8807C3A0:
	// li r3,-100
	ctx.r3.s64 = -100;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807D048) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807D048);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D048;
	ctx.current_instruction = 0x8807D048;
	PPCRegister temp{};
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,28(r3)
	ctx.current_instruction = 0x8807D04C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lfs f12,6728(r11)
	ctx.current_instruction = 0x8807D05C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12440(r9)
	ctx.current_instruction = 0x8807D060;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12436(r8)
	ctx.current_instruction = 0x8807D064;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12436);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8807d128
	if (ctx.cr6.lt) goto loc_8807D128;
	// lwz r11,20(r3)
	ctx.current_instruction = 0x8807D06C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807d07c
	if (!ctx.cr6.eq) goto loc_8807D07C;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8807D07C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8807d090
	if (ctx.cr6.eq) goto loc_8807D090;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x8807d098
	goto loc_8807D098;
loc_8807D090:
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8807D098:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8807D09C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r5,4(r7)
	ctx.current_instruction = 0x8807D0BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,4(r6)
	ctx.current_instruction = 0x8807D0C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f11,0(r5)
	ctx.current_instruction = 0x8807D0C4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,0(r4)
	ctx.current_instruction = 0x8807D0CC;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f8,0(r4)
	ctx.current_instruction = 0x8807D0D4;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f7,0(r5)
	ctx.current_instruction = 0x8807D0D8;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f4,0(r5)
	ctx.current_instruction = 0x8807D0E4;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8807D0E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8807D0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lwz r9,4(r9)
	ctx.current_instruction = 0x8807D0FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f3,8(r10)
	ctx.current_instruction = 0x8807D100;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r9)
	ctx.current_instruction = 0x8807D104;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f11,f3,f13,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f11,8(r9)
	ctx.current_instruction = 0x8807D110;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f10,8(r10)
	ctx.current_instruction = 0x8807D114;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f8,8(r10)
	ctx.current_instruction = 0x8807D120;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// b 0x8807d12c
	goto loc_8807D12C;
loc_8807D128:
	// lwz r11,-16(r1)
	ctx.current_instruction = 0x8807D128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
loc_8807D12C:
	// lwz r10,28(r3)
	ctx.current_instruction = 0x8807D12C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8807d1ac
	if (ctx.cr6.lt) goto loc_8807D1AC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807d148
	if (!ctx.cr6.eq) goto loc_8807D148;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8807D148:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8807D14C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r5,4(r7)
	ctx.current_instruction = 0x8807D170;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,4(r6)
	ctx.current_instruction = 0x8807D174;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f11,0(r5)
	ctx.current_instruction = 0x8807D178;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	ctx.current_instruction = 0x8807D17C;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r4)
	ctx.current_instruction = 0x8807D184;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r9,0(r3)
	ctx.current_instruction = 0x8807D188;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.current_instruction = 0x8807D194;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,4(r9)
	ctx.current_instruction = 0x8807D198;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f8,8(r8)
	ctx.current_instruction = 0x8807D19C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r7)
	ctx.current_instruction = 0x8807D1A0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,12(r7)
	ctx.current_instruction = 0x8807D1A8;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
loc_8807D1AC:
	// lwz r10,28(r3)
	ctx.current_instruction = 0x8807D1AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8807d1c8
	if (!ctx.cr6.eq) goto loc_8807D1C8;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x8807D1C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8807D1C8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8807D1CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.current_instruction = 0x8807D1F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r8,4(r6)
	ctx.current_instruction = 0x8807D1F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f11,4(r11)
	ctx.current_instruction = 0x8807D1F8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,4(r8)
	ctx.current_instruction = 0x8807D200;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f8,4(r8)
	ctx.current_instruction = 0x8807D208;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f7,4(r11)
	ctx.current_instruction = 0x8807D20C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f5,4(r11)
	ctx.current_instruction = 0x8807D218;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8807D21C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r5)
	ctx.current_instruction = 0x8807D228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,4(r4)
	ctx.current_instruction = 0x8807D22C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f4,12(r10)
	ctx.current_instruction = 0x8807D230;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r11)
	ctx.current_instruction = 0x8807D234;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f1,f4,f0,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f1,12(r10)
	ctx.current_instruction = 0x8807D240;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,12(r11)
	ctx.current_instruction = 0x8807D244;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f12,12(r11)
	ctx.current_instruction = 0x8807D250;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88084A90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88084A90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88084A90) {
			switch (rex_dispatch_address) {
				case 0x88084A98:
				case 0x88084B04:
				case 0x88084B28:
				case 0x88084B48:
				case 0x88084B8C:
				case 0x88084BA4:
				case 0x88084BB4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88084A90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88084A98: goto loc_88084A98;
		case 0x88084B04: goto loc_88084B04;
		case 0x88084B28: goto loc_88084B28;
		case 0x88084B48: goto loc_88084B48;
		case 0x88084B8C: goto loc_88084B8C;
		case 0x88084BA4: goto loc_88084BA4;
		case 0x88084BB4: goto loc_88084BB4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88084A98;
	__savegprlr_25(ctx, base);
loc_88084A98:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88084A98;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x88084A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r10,4(r4)
	ctx.current_instruction = 0x88084AA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	ctx.current_instruction = 0x88084AB4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// stw r29,84(r1)
	ctx.current_instruction = 0x88084ABC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r10,88(r1)
	ctx.current_instruction = 0x88084AC8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// stw r7,92(r1)
	ctx.current_instruction = 0x88084AD4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bne cr6,0x88084af0
	if (!ctx.cr6.eq) goto loc_88084AF0;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,13392
	ctx.r9.u64 = ctx.r11.u64 | 13392;
	// sth r10,14(r5)
	ctx.current_instruction = 0x88084AE8;
	REX_STORE_U16(ctx.r5.u32 + 14, ctx.r10.u16);
	// stw r9,16(r5)
	ctx.current_instruction = 0x88084AEC;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
loc_88084AF0:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,14720
	ctx.r3.s64 = 14720;
	// ori r25,r11,32768
	ctx.r25.u64 = ctx.r11.u64 | 32768;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x88050340
	ctx.lr = 0x88084B04;
	sub_88050340(ctx, base);
loc_88084B04:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88084b64
	if (ctx.cr6.eq) goto loc_88084B64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,14600(r3)
	ctx.current_instruction = 0x88084B14;
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r29.u32);
	// stw r29,14596(r3)
	ctx.current_instruction = 0x88084B18;
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r29.u32);
	// stw r11,14608(r3)
	ctx.current_instruction = 0x88084B1C;
	REX_STORE_U32(ctx.r3.u32 + 14608, ctx.r11.u32);
	// stw r11,14604(r3)
	ctx.current_instruction = 0x88084B20;
	REX_STORE_U32(ctx.r3.u32 + 14604, ctx.r11.u32);
	// bl 0x880ca638
	ctx.lr = 0x88084B28;
	sub_880CA638(ctx, base);
loc_88084B28:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r7,80(r1)
	ctx.current_instruction = 0x88084B30;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r8,88(r1)
	ctx.current_instruction = 0x88084B38;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88061d18
	ctx.lr = 0x88084B48;
	sub_88061D18(ctx, base);
loc_88084B48:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88084B48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88084b78
	if (!ctx.cr6.eq) goto loc_88084B78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,14616(r31)
	ctx.current_instruction = 0x88084B58;
	REX_STORE_U32(ctx.r31.u32 + 14616, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88084B64:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	ctx.current_instruction = 0x88084B6C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88084B78:
	// lwz r3,0(r31)
	ctx.current_instruction = 0x88084B78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88084b90
	if (ctx.cr6.eq) goto loc_88084B90;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x88050358
	ctx.lr = 0x88084B8C;
	sub_88050358(ctx, base);
loc_88084B8C:
	// stw r29,0(r31)
	ctx.current_instruction = 0x88084B8C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_88084B90:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x88084B90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88084ba8
	if (ctx.cr6.eq) goto loc_88084BA8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x88050358
	ctx.lr = 0x88084BA4;
	sub_88050358(ctx, base);
loc_88084BA4:
	// stw r29,4(r31)
	ctx.current_instruction = 0x88084BA4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_88084BA8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x88084BB4;
	sub_88050358(ctx, base);
loc_88084BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808B7E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8808B7E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8808B7E8) {
			switch (rex_dispatch_address) {
				case 0x8808B7F0:
				case 0x8808B9DC:
				case 0x8808B9F8:
				case 0x8808BAC8:
				case 0x8808BAE4:
				case 0x8808BBC8:
				case 0x8808BBE4:
				case 0x8808BCB8:
				case 0x8808BCD4:
				case 0x8808BDB4:
				case 0x8808BDD0:
				case 0x8808BE8C:
				case 0x8808BEA8:
				case 0x8808BF48:
				case 0x8808BF64:
				case 0x8808C028:
				case 0x8808C044:
				case 0x8808C0FC:
				case 0x8808C118:
				case 0x8808C1BC:
				case 0x8808C1D8:
				case 0x8808C2AC:
				case 0x8808C2C8:
				case 0x8808C388:
				case 0x8808C3A4:
				case 0x8808C444:
				case 0x8808C460:
				case 0x8808C51C:
				case 0x8808C538:
				case 0x8808C5F0:
				case 0x8808C60C:
				case 0x8808C6B0:
				case 0x8808C6CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8808B7E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8808B7F0: goto loc_8808B7F0;
		case 0x8808B9DC: goto loc_8808B9DC;
		case 0x8808B9F8: goto loc_8808B9F8;
		case 0x8808BAC8: goto loc_8808BAC8;
		case 0x8808BAE4: goto loc_8808BAE4;
		case 0x8808BBC8: goto loc_8808BBC8;
		case 0x8808BBE4: goto loc_8808BBE4;
		case 0x8808BCB8: goto loc_8808BCB8;
		case 0x8808BCD4: goto loc_8808BCD4;
		case 0x8808BDB4: goto loc_8808BDB4;
		case 0x8808BDD0: goto loc_8808BDD0;
		case 0x8808BE8C: goto loc_8808BE8C;
		case 0x8808BEA8: goto loc_8808BEA8;
		case 0x8808BF48: goto loc_8808BF48;
		case 0x8808BF64: goto loc_8808BF64;
		case 0x8808C028: goto loc_8808C028;
		case 0x8808C044: goto loc_8808C044;
		case 0x8808C0FC: goto loc_8808C0FC;
		case 0x8808C118: goto loc_8808C118;
		case 0x8808C1BC: goto loc_8808C1BC;
		case 0x8808C1D8: goto loc_8808C1D8;
		case 0x8808C2AC: goto loc_8808C2AC;
		case 0x8808C2C8: goto loc_8808C2C8;
		case 0x8808C388: goto loc_8808C388;
		case 0x8808C3A4: goto loc_8808C3A4;
		case 0x8808C444: goto loc_8808C444;
		case 0x8808C460: goto loc_8808C460;
		case 0x8808C51C: goto loc_8808C51C;
		case 0x8808C538: goto loc_8808C538;
		case 0x8808C5F0: goto loc_8808C5F0;
		case 0x8808C60C: goto loc_8808C60C;
		case 0x8808C6B0: goto loc_8808C6B0;
		case 0x8808C6CC: goto loc_8808C6CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x8808B7F0;
	__savegprlr_15(ctx, base);
loc_8808B7F0:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8808B7F0;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// lwz r8,396(r1)
	ctx.current_instruction = 0x8808B7F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r22,324(r1)
	ctx.current_instruction = 0x8808B7FC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,340(r1)
	ctx.current_instruction = 0x8808B808;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r28,332(r1)
	ctx.current_instruction = 0x8808B80C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r18,12(r8)
	ctx.current_instruction = 0x8808B818;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// neg r3,r22
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r22.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8808b88c
	if (ctx.cr6.eq) goto loc_8808B88C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8808b88c
	if (ctx.cr6.gt) goto loc_8808B88C;
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
loc_8808B864:
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r27
	ctx.current_instruction = 0x8808B86C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8808b884
	if (!ctx.cr6.lt) goto loc_8808B884;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8808B884:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x8808b864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8808B864;
loc_8808B88C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8808b8c0
	if (ctx.cr6.eq) goto loc_8808B8C0;
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
	ctx.current_instruction = 0x8808B8A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8808b8c0
	if (!ctx.cr6.lt) goto loc_8808B8C0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8808B8C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8808b8f4
	if (ctx.cr6.eq) goto loc_8808B8F4;
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
	ctx.current_instruction = 0x8808B8DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8808b8f4
	if (!ctx.cr6.lt) goto loc_8808B8F4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8808B8F4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808b94c
	if (ctx.cr6.eq) goto loc_8808B94C;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x8808b94c
	if (ctx.cr6.gt) goto loc_8808B94C;
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
loc_8808B924:
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808B92C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8808b944
	if (!ctx.cr6.lt) goto loc_8808B944;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8808B944:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8808b924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8808B924;
loc_8808B94C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r20,16
	ctx.r20.s64 = 16;
	// beq cr6,0x8808c250
	if (ctx.cr6.eq) goto loc_8808C250;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8808bd58
	if (ctx.cr6.eq) goto loc_8808BD58;
	// lwz r27,388(r1)
	ctx.current_instruction = 0x8808B960;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lwz r25,372(r1)
	ctx.current_instruction = 0x8808B968;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,348(r1)
	ctx.current_instruction = 0x8808B96C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// bne cr6,0x8808bb64
	if (!ctx.cr6.eq) goto loc_8808BB64;
	// lwz r22,380(r1)
	ctx.current_instruction = 0x8808B974;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8808ba74
	if (!ctx.cr6.eq) goto loc_8808BA74;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808B980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r29,-2
	ctx.r29.s64 = -2;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
loc_8808B998:
	// add r11,r29,r22
	ctx.r11.u64 = ctx.r29.u64 + ctx.r22.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r23,r10,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808B9AC:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808B9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808B9B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808B9C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808B9C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808B9D0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B9DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B9DC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808B9F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B9F8:
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
	// bgt cr6,0x8808ba40
	if (ctx.cr6.gt) goto loc_8808BA40;
	// cmpwi cr6,r23,158
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 158, ctx.xer);
	// bgt cr6,0x8808ba40
	if (ctx.cr6.gt) goto loc_8808BA40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8808BA20;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8808BA24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BA30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BA34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808ba48
	goto loc_8808BA48;
loc_8808BA40:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BA40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BA48:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808ba60
	if (!ctx.cr6.lt) goto loc_8808BA60;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
loc_8808BA60:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808b9ac
	if (ctx.cr0.lt) goto loc_8808B9AC;
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8808b998
	if (ctx.cr0.lt) goto loc_8808B998;
	// b 0x8808c744
	goto loc_8808C744;
loc_8808BA74:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r23,r21,-1
	ctx.r23.s64 = ctx.r21.s64 + -1;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
loc_8808BA84:
	// add r11,r29,r22
	ctx.r11.u64 = ctx.r29.u64 + ctx.r22.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808BA98:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808BA98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808BAA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808BAAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808BAB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808BABC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808BAC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BAC8:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808BAE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BAE4:
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
	// bgt cr6,0x8808bb2c
	if (ctx.cr6.gt) goto loc_8808BB2C;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// bgt cr6,0x8808bb2c
	if (ctx.cr6.gt) goto loc_8808BB2C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8808BB0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8808BB10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BB1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BB20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808bb34
	goto loc_8808BB34;
loc_8808BB2C:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BB2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BB34:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808bb4c
	if (!ctx.cr6.lt) goto loc_8808BB4C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
loc_8808BB4C:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808ba98
	if (ctx.cr0.lt) goto loc_8808BA98;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x8808ba84
	if (!ctx.cr6.gt) goto loc_8808BA84;
	// b 0x8808c744
	goto loc_8808C744;
loc_8808BB64:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x8808bc64
	if (!ctx.cr6.eq) goto loc_8808BC64;
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808BB6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r29,-2
	ctx.r29.s64 = -2;
	// lwz r22,380(r1)
	ctx.current_instruction = 0x8808BB74;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r23,r11,r21
	ctx.r23.u64 = ctx.r21.u64 - ctx.r11.u64;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
loc_8808BB84:
	// add r11,r29,r22
	ctx.r11.u64 = ctx.r29.u64 + ctx.r22.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808BB98:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808BB98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808BBA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808BBAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808BBB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808BBBC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808BBC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BBC8:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808BBE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BBE4:
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
	// bgt cr6,0x8808bc2c
	if (ctx.cr6.gt) goto loc_8808BC2C;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// bgt cr6,0x8808bc2c
	if (ctx.cr6.gt) goto loc_8808BC2C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8808BC0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8808BC10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BC1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BC20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808bc34
	goto loc_8808BC34;
loc_8808BC2C:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BC34:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808bc4c
	if (!ctx.cr6.lt) goto loc_8808BC4C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
loc_8808BC4C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x8808bb98
	if (!ctx.cr6.gt) goto loc_8808BB98;
	// addic. r29,r29,1
	ctx.xer.ca = ctx.r29.u32 > 4294967294;
	ctx.r29.s64 = ctx.r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8808bb84
	if (ctx.cr0.lt) goto loc_8808BB84;
	// b 0x8808c744
	goto loc_8808C744;
loc_8808BC64:
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// lwz r23,380(r1)
	ctx.current_instruction = 0x8808BC68;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r26,r11,6848
	ctx.r26.s64 = ctx.r11.s64 + 6848;
loc_8808BC74:
	// add r11,r29,r23
	ctx.r11.u64 = ctx.r29.u64 + ctx.r23.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8808BC88:
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808BC88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808BC94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808BC9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808BCA4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808BCAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808BCB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BCB8:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808BCD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BCD4:
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
	// bgt cr6,0x8808bd1c
	if (ctx.cr6.gt) goto loc_8808BD1C;
	// cmpwi cr6,r24,158
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 158, ctx.xer);
	// bgt cr6,0x8808bd1c
	if (ctx.cr6.gt) goto loc_8808BD1C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8808BCFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8808BD00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BD0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BD10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808bd24
	goto loc_8808BD24;
loc_8808BD1C:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BD1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BD24:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808bd3c
	if (!ctx.cr6.lt) goto loc_8808BD3C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
loc_8808BD3C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x8808bc88
	if (!ctx.cr6.gt) goto loc_8808BC88;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x8808bc74
	if (!ctx.cr6.gt) goto loc_8808BC74;
	// b 0x8808c744
	goto loc_8808C744;
loc_8808BD58:
	// lwz r29,348(r1)
	ctx.current_instruction = 0x8808BD58;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// bne cr6,0x8808bfdc
	if (!ctx.cr6.eq) goto loc_8808BFDC;
	// lwz r27,388(r1)
	ctx.current_instruction = 0x8808BD68;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r23,380(r1)
	ctx.current_instruction = 0x8808BD70;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
	// lwz r25,372(r1)
	ctx.current_instruction = 0x8808BD78;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// beq cr6,0x8808be48
	if (ctx.cr6.eq) goto loc_8808BE48;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808BD80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r30,2488(r31)
	ctx.current_instruction = 0x8808BD88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,-2
	ctx.r7.s64 = -2;
	// subf r11,r4,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r4.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808BD94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808BD9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808BDA4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8808BDB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BDB4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808BDD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BDD0:
	// addi r11,r25,-2
	ctx.r11.s64 = ctx.r25.s64 + -2;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
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
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808be28
	if (ctx.cr6.gt) goto loc_8808BE28;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808be28
	if (ctx.cr6.gt) goto loc_8808BE28;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8808BE08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808BE0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BE18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BE1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808be30
	goto loc_8808BE30;
loc_8808BE28:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BE28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BE30:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808be48
	if (!ctx.cr6.lt) goto loc_8808BE48;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,-1
	ctx.r15.s64 = -1;
loc_8808BE48:
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
loc_8808BE5C:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808BE5C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808BE64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808BE70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808BE78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808BE80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808BE8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BE8C:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808BEA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BEA8:
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
	// bgt cr6,0x8808bef0
	if (ctx.cr6.gt) goto loc_8808BEF0;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x8808bef0
	if (ctx.cr6.gt) goto loc_8808BEF0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8808BED0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808BED4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BEE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BEE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808bef8
	goto loc_8808BEF8;
loc_8808BEF0:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BEF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BEF8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808bf10
	if (!ctx.cr6.lt) goto loc_8808BF10;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// li r15,0
	ctx.r15.s64 = 0;
loc_8808BF10:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808be5c
	if (ctx.cr0.lt) goto loc_8808BE5C;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808BF18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808BF20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808BF2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808BF34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808BF3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808BF48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BF48:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808BF64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808BF64:
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
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
	// bgt cr6,0x8808bfbc
	if (ctx.cr6.gt) goto loc_8808BFBC;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808bfbc
	if (ctx.cr6.gt) goto loc_8808BFBC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8808BF9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808BFA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808BFAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808BFB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808bfc4
	goto loc_8808BFC4;
loc_8808BFBC:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808BFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808BFC4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c744
	if (!ctx.cr6.lt) goto loc_8808C744;
	// li r16,-2
	ctx.r16.s64 = -2;
	// li r15,1
	ctx.r15.s64 = 1;
	// b 0x8808c740
	goto loc_8808C740;
loc_8808BFDC:
	// lwz r28,388(r1)
	ctx.current_instruction = 0x8808BFDC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r24,380(r1)
	ctx.current_instruction = 0x8808BFE4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r27,r11,6848
	ctx.r27.s64 = ctx.r11.s64 + 6848;
	// lwz r26,372(r1)
	ctx.current_instruction = 0x8808BFEC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// beq cr6,0x8808c0bc
	if (ctx.cr6.eq) goto loc_8808C0BC;
	// lwz r3,1380(r31)
	ctx.current_instruction = 0x8808BFF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808BFFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C008;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C010;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C018;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// subf r3,r3,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C028:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C044:
	// addi r11,r26,2
	ctx.r11.s64 = ctx.r26.s64 + 2;
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
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
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808c09c
	if (ctx.cr6.gt) goto loc_8808C09C;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808c09c
	if (ctx.cr6.gt) goto loc_8808C09C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8808C07C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8808C080;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x8808C08C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x8808C090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c0a4
	goto loc_8808C0A4;
loc_8808C09C:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8808C09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C0A4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c0bc
	if (!ctx.cr6.lt) goto loc_8808C0BC;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,-1
	ctx.r15.s64 = -1;
loc_8808C0BC:
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r25,r11,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8808C0CC:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C0CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C0E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C0E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C0F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C0FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C0FC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C118:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808c160
	if (ctx.cr6.gt) goto loc_8808C160;
	// cmpwi cr6,r25,158
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 158, ctx.xer);
	// bgt cr6,0x8808c160
	if (ctx.cr6.gt) goto loc_8808C160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8808C140;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8808C144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x8808C150;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x8808C154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c168
	goto loc_8808C168;
loc_8808C160:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8808C160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C168:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c180
	if (!ctx.cr6.lt) goto loc_8808C180;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// li r15,0
	ctx.r15.s64 = 0;
loc_8808C180:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x8808c0cc
	if (!ctx.cr6.gt) goto loc_8808C0CC;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C18C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C1A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C1A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C1B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C1BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C1BC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C1D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C1D8:
	// addi r10,r26,2
	ctx.r10.s64 = ctx.r26.s64 + 2;
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
	// bgt cr6,0x8808c230
	if (ctx.cr6.gt) goto loc_8808C230;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808c230
	if (ctx.cr6.gt) goto loc_8808C230;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8808C210;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8808C214;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r28
	ctx.current_instruction = 0x8808C220;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r11,r6,r28
	ctx.current_instruction = 0x8808C224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c238
	goto loc_8808C238;
loc_8808C230:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8808C230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C238:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c744
	if (!ctx.cr6.lt) goto loc_8808C744;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r15,1
	ctx.r15.s64 = 1;
	// b 0x8808c740
	goto loc_8808C740;
loc_8808C250:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r29,348(r1)
	ctx.current_instruction = 0x8808C254;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// bne cr6,0x8808c4d4
	if (!ctx.cr6.eq) goto loc_8808C4D4;
	// lwz r26,388(r1)
	ctx.current_instruction = 0x8808C260;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r25,380(r1)
	ctx.current_instruction = 0x8808C268;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r24,r11,6848
	ctx.r24.s64 = ctx.r11.s64 + 6848;
	// lwz r23,372(r1)
	ctx.current_instruction = 0x8808C270;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// beq cr6,0x8808c340
	if (ctx.cr6.eq) goto loc_8808C340;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C278;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r30,2488(r31)
	ctx.current_instruction = 0x8808C280;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,-1
	ctx.r7.s64 = -1;
	// subf r11,r4,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r4.u64;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C28C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C294;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C29C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8808C2AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C2AC:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C2C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C2C8:
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
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
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808c320
	if (ctx.cr6.gt) goto loc_8808C320;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808c320
	if (ctx.cr6.gt) goto loc_8808C320;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8808C300;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808C304;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x8808C310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8808C314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c328
	goto loc_8808C328;
loc_8808C320:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8808C320;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C328:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c340
	if (!ctx.cr6.lt) goto loc_8808C340;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-1
	ctx.r16.s64 = -1;
	// li r15,-2
	ctx.r15.s64 = -2;
loc_8808C340:
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// lwz r10,1380(r31)
	ctx.current_instruction = 0x8808C344;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r30,-2
	ctx.r30.s64 = -2;
	// xor r9,r23,r11
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// subf r27,r10,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r10.u64;
	// subf r28,r11,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_8808C358:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C358;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C36C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C374;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C37C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C388:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C3A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C3A4:
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
	// bgt cr6,0x8808c3ec
	if (ctx.cr6.gt) goto loc_8808C3EC;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808c3ec
	if (ctx.cr6.gt) goto loc_8808C3EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8808C3CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808C3D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x8808C3DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x8808C3E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c3f4
	goto loc_8808C3F4;
loc_8808C3EC:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8808C3EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C3F4:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c40c
	if (!ctx.cr6.lt) goto loc_8808C40C;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
loc_8808C40C:
	// addic. r30,r30,1
	ctx.xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8808c358
	if (ctx.cr0.lt) goto loc_8808C358;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,-2
	ctx.r8.s64 = -2;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C428;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C430;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C438;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C444:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C460:
	// addi r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 1;
	// addi r9,r25,-2
	ctx.r9.s64 = ctx.r25.s64 + -2;
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
	// bgt cr6,0x8808c4b8
	if (ctx.cr6.gt) goto loc_8808C4B8;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808c4b8
	if (ctx.cr6.gt) goto loc_8808C4B8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8808C498;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8808C49C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.current_instruction = 0x8808C4A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8808C4AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c4c0
	goto loc_8808C4C0;
loc_8808C4B8:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8808C4B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C4C0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c744
	if (!ctx.cr6.lt) goto loc_8808C744;
	// li r15,-2
	ctx.r15.s64 = -2;
	// b 0x8808c73c
	goto loc_8808C73C;
loc_8808C4D4:
	// lwz r27,388(r1)
	ctx.current_instruction = 0x8808C4D4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r26,380(r1)
	ctx.current_instruction = 0x8808C4DC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r25,r11,6848
	ctx.r25.s64 = ctx.r11.s64 + 6848;
	// lwz r24,372(r1)
	ctx.current_instruction = 0x8808C4E4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// beq cr6,0x8808c5b0
	if (ctx.cr6.eq) goto loc_8808C5B0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C4EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C4F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C508;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r21,-1
	ctx.r3.s64 = ctx.r21.s64 + -1;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C510;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C51C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C51C:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C538:
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// addi r9,r26,2
	ctx.r9.s64 = ctx.r26.s64 + 2;
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
	// bgt cr6,0x8808c590
	if (ctx.cr6.gt) goto loc_8808C590;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808c590
	if (ctx.cr6.gt) goto loc_8808C590;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x8808C570;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8808C574;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808C580;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808C584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c598
	goto loc_8808C598;
loc_8808C590:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808C590;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C598:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c5b0
	if (!ctx.cr6.lt) goto loc_8808C5B0;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,-1
	ctx.r16.s64 = -1;
	// li r15,2
	ctx.r15.s64 = 2;
loc_8808C5B0:
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// li r30,1
	ctx.r30.s64 = 1;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r28,r11,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8808C5C0:
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C5C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C5C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C5D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C5DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C5E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C5F0:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C60C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C60C:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x8808c654
	if (ctx.cr6.gt) goto loc_8808C654;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8808c654
	if (ctx.cr6.gt) goto loc_8808C654;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x8808C634;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8808C638;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x8808C644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x8808C648;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c65c
	goto loc_8808C65C;
loc_8808C654:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808C654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C65C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c674
	if (!ctx.cr6.lt) goto loc_8808C674;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
loc_8808C674:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x8808c5c0
	if (!ctx.cr6.gt) goto loc_8808C5C0;
	// stw r20,84(r1)
	ctx.current_instruction = 0x8808C680;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808C688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808C694;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,2308(r31)
	ctx.current_instruction = 0x8808C69C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808C6A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808C6B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C6B0:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8808C6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808C6CC:
	// addi r10,r24,1
	ctx.r10.s64 = ctx.r24.s64 + 1;
	// addi r9,r26,2
	ctx.r9.s64 = ctx.r26.s64 + 2;
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
	// bgt cr6,0x8808c724
	if (ctx.cr6.gt) goto loc_8808C724;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8808c724
	if (ctx.cr6.gt) goto loc_8808C724;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x8808C704;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r8,r10,r25
	ctx.current_instruction = 0x8808C708;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r27
	ctx.current_instruction = 0x8808C714;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r11,r6,r27
	ctx.current_instruction = 0x8808C718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8808c72c
	goto loc_8808C72C;
loc_8808C724:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8808C724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8808C72C:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x8808c744
	if (!ctx.cr6.lt) goto loc_8808C744;
	// li r15,2
	ctx.r15.s64 = 2;
loc_8808C73C:
	// li r16,1
	ctx.r16.s64 = 1;
loc_8808C740:
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
loc_8808C744:
	// lwz r11,404(r1)
	ctx.current_instruction = 0x8808C744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r10,412(r1)
	ctx.current_instruction = 0x8808C748;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r9,420(r1)
	ctx.current_instruction = 0x8808C74C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// stw r16,0(r11)
	ctx.current_instruction = 0x8808C750;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r15,0(r10)
	ctx.current_instruction = 0x8808C754;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r15.u32);
	// stw r17,0(r9)
	ctx.current_instruction = 0x8808C758;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C76B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C76B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C76B8) {
			switch (rex_dispatch_address) {
				case 0x880C76C0:
				case 0x880C76E0:
				case 0x880C7850:
				case 0x880C787C:
				case 0x880C78A8:
				case 0x880C7A3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C76B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C76C0: goto loc_880C76C0;
		case 0x880C76E0: goto loc_880C76E0;
		case 0x880C7850: goto loc_880C7850;
		case 0x880C787C: goto loc_880C787C;
		case 0x880C78A8: goto loc_880C78A8;
		case 0x880C7A3C: goto loc_880C7A3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880C76C0;
	__savegprlr_20(ctx, base);
loc_880C76C0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880C76C0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880c7a58
	if (ctx.cr6.eq) goto loc_880C7A58;
	// lwz r31,352(r3)
	ctx.current_instruction = 0x880C76D0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880c7a58
	if (ctx.cr6.eq) goto loc_880C7A58;
	// bl 0x880c6d40
	ctx.lr = 0x880C76E0;
	sub_880C6D40(ctx, base);
loc_880C76E0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880c78c4
	if (!ctx.cr6.eq) goto loc_880C78C4;
	// lwz r9,4(r8)
	ctx.current_instruction = 0x880C76E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r30,r7,22857
	ctx.r30.u64 = ctx.r7.u64 | 22857;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r3,16(r9)
	ctx.current_instruction = 0x880C7700;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x880c774c
	if (ctx.cr6.eq) goto loc_880C774C;
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x880c774c
	if (ctx.cr6.eq) goto loc_880C774C;
	// lis r30,12849
	ctx.r30.s64 = 842072064;
	// ori r30,r30,22105
	ctx.r30.u64 = ctx.r30.u64 | 22105;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x880c7824
	if (!ctx.cr6.eq) goto loc_880C7824;
loc_880C774C:
	// lwz r11,40(r8)
	ctx.current_instruction = 0x880C774C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,16(r8)
	ctx.current_instruction = 0x880C7754;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r6,20(r8)
	ctx.current_instruction = 0x880C775C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r9,44(r8)
	ctx.current_instruction = 0x880C7764;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r23.s64 = temp.s64;
	// lwz r5,12(r8)
	ctx.current_instruction = 0x880C7778;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// addze r29,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r7,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 1;
	// addze r22,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r22.s64 = temp.s64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// bne cr6,0x880c77dc
	if (!ctx.cr6.eq) goto loc_880C77DC;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r6,8(r8)
	ctx.current_instruction = 0x880C779C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// add r30,r9,r7
	ctx.r30.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r5,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// b 0x880c7824
	goto loc_880C7824;
loc_880C77DC:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lwz r7,8(r8)
	ctx.current_instruction = 0x880C77E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r30.s64 = temp.s64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r3,r28,r11
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_880C7824:
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r26,r6,r4
	ctx.r26.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x880c7860
	if (!ctx.cr6.gt) goto loc_880C7860;
loc_880C7840:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7850;
	sub_880547A0(ctx, base);
loc_880C7850:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// bne 0x880c7840
	if (!ctx.cr0.eq) goto loc_880C7840;
loc_880C7860:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880c788c
	if (!ctx.cr6.gt) goto loc_880C788C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_880C786C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C787C;
	sub_880547A0(ctx, base);
loc_880C787C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bne 0x880c786c
	if (!ctx.cr0.eq) goto loc_880C786C;
loc_880C788C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880c7a4c
	if (!ctx.cr6.gt) goto loc_880C7A4C;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_880C7898:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C78A8;
	sub_880547A0(ctx, base);
loc_880C78A8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r31,r21,r31
	ctx.r31.u64 = ctx.r21.u64 + ctx.r31.u64;
	// bne 0x880c7898
	if (!ctx.cr0.eq) goto loc_880C7898;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C78C4:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x880c7a58
	if (!ctx.cr6.eq) goto loc_880C7A58;
	// lwz r29,4(r8)
	ctx.current_instruction = 0x880C78CC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,40(r8)
	ctx.current_instruction = 0x880C78D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lhz r10,14(r29)
	ctx.current_instruction = 0x880C78D4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// mullw. r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x880c78e4
	if (ctx.cr0.gt) goto loc_880C78E4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_880C78E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bgt cr6,0x880c78f4
	if (ctx.cr6.gt) goto loc_880C78F4;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_880C78F4:
	// lwz r30,16(r8)
	ctx.current_instruction = 0x880C78F4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r28,r11,31
	ctx.r28.s64 = ctx.r11.s64 + 31;
	// lwz r9,20(r8)
	ctx.current_instruction = 0x880C78FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r30,r10
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r30,r28,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r28,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 3;
	// mullw r11,r30,r7
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// addze r27,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// bne cr6,0x880c7954
	if (!ctx.cr6.eq) goto loc_880C7954;
	// lwz r7,16(r29)
	ctx.current_instruction = 0x880C7938;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x880c7954
	if (ctx.cr6.gt) goto loc_880C7954;
	// lwz r7,8(r29)
	ctx.current_instruction = 0x880C7944;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880c7954
	if (!ctx.cr6.gt) goto loc_880C7954;
	// li r3,1
	ctx.r3.s64 = 1;
loc_880C7954:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x880c79bc
	if (!ctx.cr6.eq) goto loc_880C79BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c7984
	if (!ctx.cr6.eq) goto loc_880C7984;
	// lwz r9,8(r8)
	ctx.current_instruction = 0x880C7968;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.current_instruction = 0x880C796C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
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
	// b 0x880c7a18
	goto loc_880C7A18;
loc_880C7984:
	// lwz r7,44(r8)
	ctx.current_instruction = 0x880C7984;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r3,8(r8)
	ctx.current_instruction = 0x880C7988;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,12(r8)
	ctx.current_instruction = 0x880C7990;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
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
	// b 0x880c7a1c
	goto loc_880C7A1C;
loc_880C79BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c79e4
	if (!ctx.cr6.eq) goto loc_880C79E4;
	// lwz r7,8(r8)
	ctx.current_instruction = 0x880C79C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.current_instruction = 0x880C79C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
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
	// b 0x880c7a18
	goto loc_880C7A18;
loc_880C79E4:
	// lwz r7,44(r8)
	ctx.current_instruction = 0x880C79E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r6,12(r8)
	ctx.current_instruction = 0x880C79E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,8(r8)
	ctx.current_instruction = 0x880C79F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
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
loc_880C7A18:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_880C7A1C:
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880c7a4c
	if (!ctx.cr6.gt) goto loc_880C7A4C;
loc_880C7A2C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7A3C;
	sub_880547A0(ctx, base);
loc_880C7A3C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne 0x880c7a2c
	if (!ctx.cr0.eq) goto loc_880C7A2C;
loc_880C7A4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C7A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB840) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB840;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB840) {
			switch (rex_dispatch_address) {
				case 0x880CB848:
				case 0x880CB870:
				case 0x880CB8B8:
				case 0x880CB8D0:
				case 0x880CB944:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB840;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB848: goto loc_880CB848;
		case 0x880CB870: goto loc_880CB870;
		case 0x880CB8B8: goto loc_880CB8B8;
		case 0x880CB8D0: goto loc_880CB8D0;
		case 0x880CB944: goto loc_880CB944;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CB848;
	__savegprlr_29(ctx, base);
loc_880CB848:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CB848;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880CB84C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,84(r1)
	ctx.current_instruction = 0x880CB85C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,88(r1)
	ctx.current_instruction = 0x880CB864;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stb r29,80(r1)
	ctx.current_instruction = 0x880CB868;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x880cb758
	ctx.lr = 0x880CB870;
	sub_880CB758(ctx, base);
loc_880CB870:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880cb928
	if (ctx.cr6.eq) goto loc_880CB928;
	// lbz r31,80(r1)
	ctx.current_instruction = 0x880CB880;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_880CB884:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cb928
	if (ctx.cr6.lt) goto loc_880CB928;
	// lwz r3,148(r1)
	ctx.current_instruction = 0x880CB88C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,520(r3)
	ctx.current_instruction = 0x880CB894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880cb8b8
	if (ctx.cr6.eq) goto loc_880CB8B8;
	// rlwinm r10,r31,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// lwz r6,524(r3)
	ctx.current_instruction = 0x880CB8A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r4,r10,r3
	ctx.current_instruction = 0x880CB8B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bctrl 
	ctx.lr = 0x880CB8B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CB8B8:
	// rlwinm r11,r31,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FC;
	// lwz r3,508(r30)
	ctx.current_instruction = 0x880CB8BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x880cb318
	ctx.lr = 0x880CB8D0;
	sub_880CB318(ctx, base);
loc_880CB8D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cb8dc
	if (ctx.cr6.lt) goto loc_880CB8DC;
	// stw r29,0(r31)
	ctx.current_instruction = 0x880CB8D8;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_880CB8DC:
	// lwz r8,148(r1)
	ctx.current_instruction = 0x880CB8DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r10,512(r8)
	ctx.current_instruction = 0x880CB8E0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 512);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
loc_880CB8EC:
	// bge cr6,0x880cb92c
	if (!ctx.cr6.lt) goto loc_880CB92C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r8
	ctx.current_instruction = 0x880CB8F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880cb914
	if (!ctx.cr6.eq) goto loc_880CB914;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// b 0x880cb8ec
	goto loc_880CB8EC;
loc_880CB914:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,512(r8)
	ctx.current_instruction = 0x880CB920;
	REX_STORE_U8(ctx.r8.u32 + 512, ctx.r10.u8);
	// b 0x880cb884
	goto loc_880CB884;
loc_880CB928:
	// lwz r8,148(r1)
	ctx.current_instruction = 0x880CB928;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_880CB92C:
	// stb r29,512(r8)
	ctx.current_instruction = 0x880CB92C;
	REX_STORE_U8(ctx.r8.u32 + 512, ctx.r29.u8);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,148(r1)
	ctx.current_instruction = 0x880CB938;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,508(r11)
	ctx.current_instruction = 0x880CB93C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// bl 0x880cb318
	ctx.lr = 0x880CB944;
	sub_880CB318(ctx, base);
loc_880CB944:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CD8C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CD8C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CD8C0) {
			switch (rex_dispatch_address) {
				case 0x880CD8FC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CD8C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CD8FC: goto loc_880CD8FC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CD8C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880CD8C8;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880CD8CC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880CD8D0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r11,0(r3)
	ctx.current_instruction = 0x880CD8D8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r6,32
	ctx.r10.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stw r9,80(r1)
	ctx.current_instruction = 0x880CD8E0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CD8FC;
	sub_8805ADC8(ctx, base);
loc_880CD8FC:
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// beq cr6,0x880cd90c
	if (ctx.cr6.eq) goto loc_880CD90C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x880cda48
	goto loc_880CDA48;
loc_880CD90C:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CD90C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r4,3(r11)
	ctx.current_instruction = 0x880CD918;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880CD91C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CD924;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD928;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD934;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,0(r31)
	ctx.current_instruction = 0x880CD948;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD94C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CD950;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD960;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// sth r7,4(r31)
	ctx.current_instruction = 0x880CD964;
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD968;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880CD96C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,6(r31)
	ctx.current_instruction = 0x880CD978;
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lbzu r8,2(r11)
	ctx.current_instruction = 0x880CD97C;
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD980;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r8,8(r31)
	ctx.current_instruction = 0x880CD984;
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lbzu r7,1(r11)
	ctx.current_instruction = 0x880CD988;
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD98C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r7,9(r31)
	ctx.current_instruction = 0x880CD990;
	REX_STORE_U8(ctx.r31.u32 + 9, ctx.r7.u8);
	// lbzu r4,1(r11)
	ctx.current_instruction = 0x880CD994;
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD998;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r4,10(r31)
	ctx.current_instruction = 0x880CD99C;
	REX_STORE_U8(ctx.r31.u32 + 10, ctx.r4.u8);
	// lbzu r3,1(r11)
	ctx.current_instruction = 0x880CD9A0;
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r3,11(r31)
	ctx.current_instruction = 0x880CD9A4;
	REX_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD9A8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r10,1(r11)
	ctx.current_instruction = 0x880CD9AC;
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,12(r31)
	ctx.current_instruction = 0x880CD9B0;
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD9B4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880CD9B8;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD9BC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r9,13(r31)
	ctx.current_instruction = 0x880CD9C0;
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r9.u8);
	// lbzu r8,1(r11)
	ctx.current_instruction = 0x880CD9C4;
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD9C8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r8,14(r31)
	ctx.current_instruction = 0x880CD9CC;
	REX_STORE_U8(ctx.r31.u32 + 14, ctx.r8.u8);
	// lbzu r7,1(r11)
	ctx.current_instruction = 0x880CD9D0;
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,15(r31)
	ctx.current_instruction = 0x880CD9D8;
	REX_STORE_U8(ctx.r31.u32 + 15, ctx.r7.u8);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CD9DC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x880CD9E0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880CD9E4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,3(r11)
	ctx.current_instruction = 0x880CD9E8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880CD9F4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,0(r30)
	ctx.current_instruction = 0x880CDA08;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lbz r8,6(r11)
	ctx.current_instruction = 0x880CDA0C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lwz r7,0(r30)
	ctx.current_instruction = 0x880CDA10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r9,5(r11)
	ctx.current_instruction = 0x880CDA14;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,7(r11)
	ctx.current_instruction = 0x880CDA18;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r11)
	ctx.current_instruction = 0x880CDA24;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subfc r11,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// and r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 & ctx.r5.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,4(r30)
	ctx.current_instruction = 0x880CDA44;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
loc_880CDA48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CDA4C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880CDA54;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880CDA58;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D2668) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D2668;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D2668) {
			switch (rex_dispatch_address) {
				case 0x880D2670:
				case 0x880D2810:
				case 0x880D2858:
				case 0x880D286C:
				case 0x880D28D0:
				case 0x880D2910:
				case 0x880D2964:
				case 0x880D2978:
				case 0x880D2A34:
				case 0x880D2B70:
				case 0x880D2BFC:
				case 0x880D2C60:
				case 0x880D2DE4:
				case 0x880D2EE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D2668;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D2670: goto loc_880D2670;
		case 0x880D2810: goto loc_880D2810;
		case 0x880D2858: goto loc_880D2858;
		case 0x880D286C: goto loc_880D286C;
		case 0x880D28D0: goto loc_880D28D0;
		case 0x880D2910: goto loc_880D2910;
		case 0x880D2964: goto loc_880D2964;
		case 0x880D2978: goto loc_880D2978;
		case 0x880D2A34: goto loc_880D2A34;
		case 0x880D2B70: goto loc_880D2B70;
		case 0x880D2BFC: goto loc_880D2BFC;
		case 0x880D2C60: goto loc_880D2C60;
		case 0x880D2DE4: goto loc_880D2DE4;
		case 0x880D2EE4: goto loc_880D2EE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x880D2670;
	__savegprlr_15(ctx, base);
loc_880D2670:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880D2670;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// li r16,2
	ctx.r16.s64 = 2;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r15,3
	ctx.r15.s64 = 3;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d2f04
	if (ctx.cr6.eq) goto loc_880D2F04;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880d2f04
	if (ctx.cr6.eq) goto loc_880D2F04;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D26A0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880d2f04
	if (ctx.cr6.eq) goto loc_880D2F04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r28,0(r4)
	ctx.current_instruction = 0x880D26B0;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r28.u16);
	// beq cr6,0x880d26bc
	if (ctx.cr6.eq) goto loc_880D26BC;
	// sth r28,0(r5)
	ctx.current_instruction = 0x880D26B8;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r28.u16);
loc_880D26BC:
	// lis r11,-32764
	ctx.r11.s64 = -2147221504;
	// li r25,32767
	ctx.r25.s64 = 32767;
	// li r22,5
	ctx.r22.s64 = 5;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r24,r11,4
	ctx.r24.u64 = ctx.r11.u64 | 4;
	// li r26,8
	ctx.r26.s64 = 8;
	// li r17,4
	ctx.r17.s64 = 4;
	// li r23,7
	ctx.r23.s64 = 7;
	// li r21,6
	ctx.r21.s64 = 6;
loc_880D26E0:
	// lwz r11,32(r29)
	ctx.current_instruction = 0x880D26E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x880d26e0
	if (ctx.cr6.gt) goto loc_880D26E0;
	// lis r12,-30707
	ctx.r12.s64 = -2012413952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9988
	ctx.r12.s64 = ctx.r12.s64 + 9988;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x880D26F8;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_880D2A70;
	case 1:
		goto loc_880D26E0;
	case 2:
		goto loc_880D2A90;
	case 3:
		goto loc_880D2B5C;
	case 4:
		goto loc_880D272C;
	case 5:
		goto loc_880D27F8;
	case 6:
		goto loc_880D28AC;
	case 7:
		goto loc_880D28EC;
	case 8:
		goto loc_880D2930;
	case 9:
		goto loc_880D29FC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_880D272C:
	// lwz r11,216(r29)
	ctx.current_instruction = 0x880D272C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d27a0
	if (!ctx.cr6.eq) goto loc_880D27A0;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D2738;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d278c
	if (!ctx.cr6.gt) goto loc_880D278C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D2750:
	// lwz r8,584(r31)
	ctx.current_instruction = 0x880D2750;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D2758;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r8
	ctx.current_instruction = 0x880D2764;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r25,112(r3)
	ctx.current_instruction = 0x880D2778;
	REX_STORE_U16(ctx.r3.u32 + 112, ctx.r25.u16);
	// lhz r9,580(r31)
	ctx.current_instruction = 0x880D277C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d2750
	if (ctx.cr6.lt) goto loc_880D2750;
loc_880D278C:
	// stw r22,32(r29)
	ctx.current_instruction = 0x880D278C;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r22.u32);
	// stw r28,36(r29)
	ctx.current_instruction = 0x880D2790;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r28.u32);
	// stw r28,40(r29)
	ctx.current_instruction = 0x880D2794;
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// sth r28,150(r29)
	ctx.current_instruction = 0x880D2798;
	REX_STORE_U16(ctx.r29.u32 + 150, ctx.r28.u16);
	// sth r28,152(r29)
	ctx.current_instruction = 0x880D279C;
	REX_STORE_U16(ctx.r29.u32 + 152, ctx.r28.u16);
loc_880D27A0:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x880D27A0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880d27f4
	if (!ctx.cr6.gt) goto loc_880D27F4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D27B8:
	// lwz r8,584(r31)
	ctx.current_instruction = 0x880D27B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D27C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r8
	ctx.current_instruction = 0x880D27CC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r20,490(r3)
	ctx.current_instruction = 0x880D27E0;
	REX_STORE_U16(ctx.r3.u32 + 490, ctx.r20.u16);
	// lhz r9,580(r31)
	ctx.current_instruction = 0x880D27E4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d27b8
	if (ctx.cr6.lt) goto loc_880D27B8;
loc_880D27F4:
	// sth r20,730(r31)
	ctx.current_instruction = 0x880D27F4;
	REX_STORE_U16(ctx.r31.u32 + 730, ctx.r20.u16);
loc_880D27F8:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D27F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,176(r11)
	ctx.current_instruction = 0x880D2800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d284c
	if (!ctx.cr6.eq) goto loc_880D284C;
	// bl 0x88132ee8
	ctx.lr = 0x880D2810;
	sub_88132EE8(ctx, base);
loc_880D2810:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_880D2814:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x880d2f0c
	if (ctx.cr6.lt) goto loc_880D2F0C;
	// lwz r11,36(r29)
	ctx.current_instruction = 0x880D281C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x880d28ac
	if (!ctx.cr6.eq) goto loc_880D28AC;
	// lwz r11,216(r29)
	ctx.current_instruction = 0x880D2828;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d28a0
	if (ctx.cr6.eq) goto loc_880D28A0;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D2834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.current_instruction = 0x880D2838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d2894
	if (!ctx.cr6.eq) goto loc_880D2894;
	// stw r23,32(r29)
	ctx.current_instruction = 0x880D2844;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D284C:
	// lwz r11,504(r29)
	ctx.current_instruction = 0x880D284C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880D2858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880D2858:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x880d2814
	if (!ctx.cr6.eq) goto loc_880D2814;
	// addi r3,r29,224
	ctx.r3.s64 = ctx.r29.s64 + 224;
	// bl 0x8812be50
	ctx.lr = 0x880D286C;
	sub_8812BE50(ctx, base);
loc_880D286C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880d2f0c
	if (ctx.cr6.eq) goto loc_880D2F0C;
	// lwz r11,704(r29)
	ctx.current_instruction = 0x880D2874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2f0c
	if (ctx.cr6.eq) goto loc_880D2F0C;
	// stw r26,32(r29)
	ctx.current_instruction = 0x880D2880;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r26.u32);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// stw r20,216(r29)
	ctx.current_instruction = 0x880D2888;
	REX_STORE_U32(ctx.r29.u32 + 216, ctx.r20.u32);
	// sth r28,16(r29)
	ctx.current_instruction = 0x880D288C;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r28.u16);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D2894:
	// lbz r11,144(r29)
	ctx.current_instruction = 0x880D2894;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d28a8
	if (ctx.cr6.eq) goto loc_880D28A8;
loc_880D28A0:
	// stw r26,32(r29)
	ctx.current_instruction = 0x880D28A0;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r26.u32);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D28A8:
	// stw r21,32(r29)
	ctx.current_instruction = 0x880D28A8;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r21.u32);
loc_880D28AC:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D28AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880d28e8
	if (ctx.cr6.lt) goto loc_880D28E8;
	// addi r30,r29,224
	ctx.r30.s64 = ctx.r29.s64 + 224;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880D28BC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_880D28C0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x880D28D0;
	sub_8812C528(ctx, base);
loc_880D28D0:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d2f0c
	if (ctx.cr6.lt) goto loc_880D2F0C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880D28DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880d28c0
	if (!ctx.cr6.eq) goto loc_880D28C0;
loc_880D28E8:
	// stw r23,32(r29)
	ctx.current_instruction = 0x880D28E8;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r23.u32);
loc_880D28EC:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D28EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d2908
	if (ctx.cr6.gt) goto loc_880D2908;
	// lhz r11,16(r29)
	ctx.current_instruction = 0x880D28F8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,16(r29)
	ctx.current_instruction = 0x880D2900;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r10.u16);
	// b 0x880d2914
	goto loc_880D2914;
loc_880D2908:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c948
	ctx.lr = 0x880D2910;
	sub_8812C948(ctx, base);
loc_880D2910:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_880D2914:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x880d2f0c
	if (ctx.cr6.lt) goto loc_880D2F0C;
	// lwz r11,704(r29)
	ctx.current_instruction = 0x880D291C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d292c
	if (ctx.cr6.eq) goto loc_880D292C;
	// sth r28,16(r29)
	ctx.current_instruction = 0x880D2928;
	REX_STORE_U16(ctx.r29.u32 + 16, ctx.r28.u16);
loc_880D292C:
	// stw r26,32(r29)
	ctx.current_instruction = 0x880D292C;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r26.u32);
loc_880D2930:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x880d293c
	if (!ctx.cr6.eq) goto loc_880D293C;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
loc_880D293C:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D293C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.current_instruction = 0x880D2944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880d2974
	if (!ctx.cr6.eq) goto loc_880D2974;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,708(r29)
	ctx.current_instruction = 0x880D2954;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x88126f68
	ctx.lr = 0x880D2964;
	sub_88126F68(ctx, base);
loc_880D2964:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x880d2978
	if (ctx.cr6.eq) goto loc_880D2978;
	// sth r28,0(r19)
	ctx.current_instruction = 0x880D296C;
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r28.u16);
	// b 0x880d2978
	goto loc_880D2978;
loc_880D2974:
	// bl 0x88130c18
	ctx.lr = 0x880D2978;
	sub_88130C18(ctx, base);
loc_880D2978:
	// lhz r11,220(r29)
	ctx.current_instruction = 0x880D2978;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 220);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,220(r29)
	ctx.current_instruction = 0x880D2980;
	REX_STORE_U16(ctx.r29.u32 + 220, ctx.r10.u16);
	// lhz r8,580(r31)
	ctx.current_instruction = 0x880D2984;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880d29fc
	if (!ctx.cr6.gt) goto loc_880D29FC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_880D299C:
	// lwz r8,584(r31)
	ctx.current_instruction = 0x880D299C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.current_instruction = 0x880D29A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r7,r11,r8
	ctx.current_instruction = 0x880D29A4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,424(r11)
	ctx.current_instruction = 0x880D29B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,114(r11)
	ctx.current_instruction = 0x880D29B8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r3,0(r5)
	ctx.current_instruction = 0x880D29C0;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880d2d2c
	if (!ctx.cr6.lt) goto loc_880D2D2C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// sth r7,114(r11)
	ctx.current_instruction = 0x880D29E0;
	REX_STORE_U16(ctx.r11.u32 + 114, ctx.r7.u16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,580(r31)
	ctx.current_instruction = 0x880D29EC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x880d299c
	if (ctx.cr6.lt) goto loc_880D299C;
loc_880D29FC:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D29FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.current_instruction = 0x880D2A00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d2a34
	if (!ctx.cr6.eq) goto loc_880D2A34;
	// lwz r10,72(r31)
	ctx.current_instruction = 0x880D2A0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880d2a34
	if (!ctx.cr6.eq) goto loc_880D2A34;
	// lbz r10,144(r29)
	ctx.current_instruction = 0x880D2A18;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880d2a28
	if (ctx.cr6.eq) goto loc_880D2A28;
	// stw r20,372(r11)
	ctx.current_instruction = 0x880D2A24;
	REX_STORE_U32(ctx.r11.u32 + 372, ctx.r20.u32);
loc_880D2A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,708(r29)
	ctx.current_instruction = 0x880D2A2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// bl 0x8812dd90
	ctx.lr = 0x880D2A34;
	sub_8812DD90(ctx, base);
loc_880D2A34:
	// lwz r11,216(r29)
	ctx.current_instruction = 0x880D2A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2efc
	if (ctx.cr6.eq) goto loc_880D2EFC;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D2A40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,176(r11)
	ctx.current_instruction = 0x880D2A44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880d2e1c
	if (!ctx.cr6.eq) goto loc_880D2E1C;
	// lwz r10,392(r31)
	ctx.current_instruction = 0x880D2A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.current_instruction = 0x880D2A54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d2bbc
	if (!ctx.cr6.gt) goto loc_880D2BBC;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	ctx.current_instruction = 0x880D2A68;
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D2A70:
	// lwz r11,164(r29)
	ctx.current_instruction = 0x880D2A70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 164);
	// stw r16,32(r29)
	ctx.current_instruction = 0x880D2A74;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r16.u32);
	// stw r16,52(r29)
	ctx.current_instruction = 0x880D2A78;
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r16.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d26e0
	if (!ctx.cr6.gt) goto loc_880D26E0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r29)
	ctx.current_instruction = 0x880D2A88;
	REX_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D2A90:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x880D2A90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,440(r11)
	ctx.current_instruction = 0x880D2A94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,440(r11)
	ctx.current_instruction = 0x880D2A9C;
	REX_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// stw r28,216(r29)
	ctx.current_instruction = 0x880D2AA0;
	REX_STORE_U32(ctx.r29.u32 + 216, ctx.r28.u32);
	// sth r28,220(r29)
	ctx.current_instruction = 0x880D2AA4;
	REX_STORE_U16(ctx.r29.u32 + 220, ctx.r28.u16);
	// stw r28,380(r31)
	ctx.current_instruction = 0x880D2AA8;
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
	// stw r28,288(r29)
	ctx.current_instruction = 0x880D2AAC;
	REX_STORE_U32(ctx.r29.u32 + 288, ctx.r28.u32);
	// lwz r9,0(r29)
	ctx.current_instruction = 0x880D2AB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,176(r9)
	ctx.current_instruction = 0x880D2AB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 176);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x880d2ac8
	if (!ctx.cr6.eq) goto loc_880D2AC8;
	// sth r28,210(r31)
	ctx.current_instruction = 0x880D2AC0;
	REX_STORE_U16(ctx.r31.u32 + 210, ctx.r28.u16);
	// b 0x880d2b04
	goto loc_880D2B04;
loc_880D2AC8:
	// lwz r10,392(r31)
	ctx.current_instruction = 0x880D2AC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r11,388(r31)
	ctx.current_instruction = 0x880D2ACC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880d2ae8
	if (!ctx.cr6.gt) goto loc_880D2AE8;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,0(r18)
	ctx.current_instruction = 0x880D2AE0;
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r10.u16);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D2AE8:
	// lwz r10,468(r31)
	ctx.current_instruction = 0x880D2AE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d2b04
	if (ctx.cr6.lt) goto loc_880D2B04;
	// stw r28,392(r31)
	ctx.current_instruction = 0x880D2AFC;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r28,388(r31)
	ctx.current_instruction = 0x880D2B00;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
loc_880D2B04:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x880D2B04;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2b54
	if (ctx.cr6.eq) goto loc_880D2B54;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_880D2B14:
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D2B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r28,114(r10)
	ctx.current_instruction = 0x880D2B20;
	REX_STORE_U16(ctx.r10.u32 + 114, ctx.r28.u16);
	// lwz r9,176(r31)
	ctx.current_instruction = 0x880D2B24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880d2b3c
	if (!ctx.cr6.eq) goto loc_880D2B3C;
	// lwz r10,356(r31)
	ctx.current_instruction = 0x880D2B30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	ctx.current_instruction = 0x880D2B38;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
loc_880D2B3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,34(r31)
	ctx.current_instruction = 0x880D2B40;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d2b14
	if (ctx.cr6.lt) goto loc_880D2B14;
loc_880D2B54:
	// stw r15,32(r29)
	ctx.current_instruction = 0x880D2B54;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r15.u32);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D2B5C:
	// lhz r11,16(r29)
	ctx.current_instruction = 0x880D2B5C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2ef4
	if (ctx.cr6.eq) goto loc_880D2EF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812ecc8
	ctx.lr = 0x880D2B70;
	sub_8812ECC8(ctx, base);
loc_880D2B70:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d2f0c
	if (ctx.cr6.lt) goto loc_880D2F0C;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x880D2B7C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2bb4
	if (ctx.cr6.eq) goto loc_880D2BB4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_880D2B8C:
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D2B8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r28,116(r10)
	ctx.current_instruction = 0x880D2BA0;
	REX_STORE_U16(ctx.r10.u32 + 116, ctx.r28.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r8,34(r31)
	ctx.current_instruction = 0x880D2BA8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880d2b8c
	if (ctx.cr6.lt) goto loc_880D2B8C;
loc_880D2BB4:
	// stw r17,32(r29)
	ctx.current_instruction = 0x880D2BB4;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r17.u32);
	// b 0x880d26e0
	goto loc_880D26E0;
loc_880D2BBC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880d2e8c
	if (ctx.cr6.lt) goto loc_880D2E8C;
	// lwz r10,468(r31)
	ctx.current_instruction = 0x880D2BC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x880d2e8c
	if (!ctx.cr6.lt) goto loc_880D2E8C;
	// lwz r9,708(r29)
	ctx.current_instruction = 0x880D2BD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d2bf0
	if (ctx.cr6.eq) goto loc_880D2BF0;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,88(r1)
	ctx.current_instruction = 0x880D2BE8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x880d2c00
	goto loc_880D2C00;
loc_880D2BF0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88126d28
	ctx.lr = 0x880D2BFC;
	sub_88126D28(ctx, base);
loc_880D2BFC:
	// lwz r9,88(r1)
	ctx.current_instruction = 0x880D2BFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_880D2C00:
	// lwz r10,388(r31)
	ctx.current_instruction = 0x880D2C00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r11,360(r31)
	ctx.current_instruction = 0x880D2C04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,392(r31)
	ctx.current_instruction = 0x880D2C0C;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x880D2C10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880d2cc4
	if (!ctx.cr6.gt) goto loc_880D2CC4;
	// lwz r7,708(r29)
	ctx.current_instruction = 0x880D2C1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x880d2cc4
	if (!ctx.cr6.eq) goto loc_880D2CC4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d2c48
	if (ctx.cr6.lt) goto loc_880D2C48;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x880D2C38;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,392(r31)
	ctx.current_instruction = 0x880D2C3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// stw r8,388(r31)
	ctx.current_instruction = 0x880D2C40;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// b 0x880d2c58
	goto loc_880D2C58;
loc_880D2C48:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x880D2C48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,388(r31)
	ctx.current_instruction = 0x880D2C50;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r28,0(r11)
	ctx.current_instruction = 0x880D2C54;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_880D2C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88126e88
	ctx.lr = 0x880D2C60;
	sub_88126E88(ctx, base);
loc_880D2C60:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D2C60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880d2cc4
	if (ctx.cr6.lt) goto loc_880D2CC4;
	// lwz r11,380(r31)
	ctx.current_instruction = 0x880D2C6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2cc4
	if (ctx.cr6.eq) goto loc_880D2CC4;
	// lwz r10,444(r31)
	ctx.current_instruction = 0x880D2C78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d2c90
	if (ctx.cr6.eq) goto loc_880D2C90;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x880D2C84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x880d2ca4
	goto loc_880D2CA4;
loc_880D2C90:
	// lwz r10,448(r31)
	ctx.current_instruction = 0x880D2C90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880d2ca4
	if (ctx.cr6.eq) goto loc_880D2CA4;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x880D2C9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_880D2CA4:
	// lwz r10,392(r31)
	ctx.current_instruction = 0x880D2CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r9,388(r31)
	ctx.current_instruction = 0x880D2CA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880d2cc4
	if (!ctx.cr6.lt) goto loc_880D2CC4;
	// stw r28,388(r31)
	ctx.current_instruction = 0x880D2CB8;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
	// stw r28,392(r31)
	ctx.current_instruction = 0x880D2CBC;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r28,380(r31)
	ctx.current_instruction = 0x880D2CC0;
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
loc_880D2CC4:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D2CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880d2d1c
	if (ctx.cr6.lt) goto loc_880D2D1C;
	// lwz r11,708(r29)
	ctx.current_instruction = 0x880D2CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d2d1c
	if (!ctx.cr6.eq) goto loc_880D2D1C;
	// lwz r11,444(r31)
	ctx.current_instruction = 0x880D2CDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2cf8
	if (ctx.cr6.eq) goto loc_880D2CF8;
	// lwz r11,380(r31)
	ctx.current_instruction = 0x880D2CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,456(r31)
	ctx.current_instruction = 0x880D2CEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x880d2d10
	goto loc_880D2D10;
loc_880D2CF8:
	// lwz r11,448(r31)
	ctx.current_instruction = 0x880D2CF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,380(r31)
	ctx.current_instruction = 0x880D2D00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// beq cr6,0x880d2d10
	if (ctx.cr6.eq) goto loc_880D2D10;
	// lwz r10,456(r31)
	ctx.current_instruction = 0x880D2D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_880D2D10:
	// lwz r10,392(r31)
	ctx.current_instruction = 0x880D2D10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,392(r31)
	ctx.current_instruction = 0x880D2D18;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r9.u32);
loc_880D2D1C:
	// lwz r11,392(r31)
	ctx.current_instruction = 0x880D2D1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.current_instruction = 0x880D2D20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880d2d38
	if (!ctx.cr6.lt) goto loc_880D2D38;
loc_880D2D2C:
	// lis r27,-32764
	ctx.r27.s64 = -2147221504;
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x880d2f0c
	goto loc_880D2F0C;
loc_880D2D38:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r11,0(r18)
	ctx.current_instruction = 0x880D2D3C;
	REX_STORE_U16(ctx.r18.u32 + 0, ctx.r11.u16);
	// lwz r9,76(r31)
	ctx.current_instruction = 0x880D2D40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d2e1c
	if (ctx.cr6.eq) goto loc_880D2E1C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x880d2d58
	if (!ctx.cr6.eq) goto loc_880D2D58;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
loc_880D2D58:
	// sth r28,0(r19)
	ctx.current_instruction = 0x880D2D58;
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r28.u16);
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D2D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d2e04
	if (ctx.cr6.gt) goto loc_880D2E04;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x880D2D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,444(r31)
	ctx.current_instruction = 0x880D2D6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,424(r11)
	ctx.current_instruction = 0x880D2D74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r8,8(r9)
	ctx.current_instruction = 0x880D2D78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r5,-2(r8)
	ctx.current_instruction = 0x880D2D7C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r6,0(r8)
	ctx.current_instruction = 0x880D2D80;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// beq cr6,0x880d2da4
	if (ctx.cr6.eq) goto loc_880D2DA4;
	// lwz r11,456(r31)
	ctx.current_instruction = 0x880D2D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r6,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r6.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r5,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r5.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x880d2dd0
	goto loc_880D2DD0;
loc_880D2DA4:
	// lwz r11,448(r31)
	ctx.current_instruction = 0x880D2DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2dd0
	if (ctx.cr6.eq) goto loc_880D2DD0;
	// lwz r11,456(r31)
	ctx.current_instruction = 0x880D2DB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r5,r9,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
loc_880D2DD0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812d818
	ctx.lr = 0x880D2DE4;
	sub_8812D818(ctx, base);
loc_880D2DE4:
	// lhz r11,0(r19)
	ctx.current_instruction = 0x880D2DE4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// lhz r10,82(r1)
	ctx.current_instruction = 0x880D2DE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r9,84(r1)
	ctx.current_instruction = 0x880D2DF0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r6,0(r19)
	ctx.current_instruction = 0x880D2E00;
	REX_STORE_U16(ctx.r19.u32 + 0, ctx.r6.u16);
loc_880D2E04:
	// stw r28,76(r31)
	ctx.current_instruction = 0x880D2E04;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lhz r11,0(r19)
	ctx.current_instruction = 0x880D2E08;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 0);
	// ld r10,184(r29)
	ctx.current_instruction = 0x880D2E0C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,184(r29)
	ctx.current_instruction = 0x880D2E18;
	REX_STORE_U64(ctx.r29.u32 + 184, ctx.r10.u64);
loc_880D2E1C:
	// lwz r11,212(r31)
	ctx.current_instruction = 0x880D2E1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2ec4
	if (ctx.cr6.eq) goto loc_880D2EC4;
	// lhz r11,34(r31)
	ctx.current_instruction = 0x880D2E28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2ec4
	if (ctx.cr6.eq) goto loc_880D2EC4;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_880D2E38:
	// lwz r10,320(r31)
	ctx.current_instruction = 0x880D2E38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// lwz r9,60(r31)
	ctx.current_instruction = 0x880D2E40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lwz r11,424(r7)
	ctx.current_instruction = 0x880D2E4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 424);
	// lhz r6,0(r11)
	ctx.current_instruction = 0x880D2E50;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// bgt cr6,0x880d2e98
	if (ctx.cr6.gt) goto loc_880D2E98;
	// lwz r10,8(r11)
	ctx.current_instruction = 0x880D2E5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,-2(r7)
	ctx.current_instruction = 0x880D2E68;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + -2);
	// sth r6,-2(r10)
	ctx.current_instruction = 0x880D2E6C;
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r6.u16);
	// lwz r5,8(r11)
	ctx.current_instruction = 0x880D2E70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r4,r5,r9
	ctx.current_instruction = 0x880D2E74;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sth r4,0(r5)
	ctx.current_instruction = 0x880D2E78;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lwz r3,12(r11)
	ctx.current_instruction = 0x880D2E7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// sth r28,0(r3)
	ctx.current_instruction = 0x880D2E80;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r28.u16);
	// sth r20,0(r11)
	ctx.current_instruction = 0x880D2E84;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r20.u16);
	// b 0x880d2eac
	goto loc_880D2EAC;
loc_880D2E8C:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x880d2f0c
	goto loc_880D2F0C;
loc_880D2E98:
	// lwz r11,8(r11)
	ctx.current_instruction = 0x880D2E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r9,-2(r10)
	ctx.current_instruction = 0x880D2EA4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,-2(r11)
	ctx.current_instruction = 0x880D2EA8;
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
loc_880D2EAC:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lhz r10,34(r31)
	ctx.current_instruction = 0x880D2EB0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880d2e38
	if (ctx.cr6.lt) goto loc_880D2E38;
loc_880D2EC4:
	// stw r20,52(r29)
	ctx.current_instruction = 0x880D2EC4;
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r20.u32);
	// stw r16,32(r29)
	ctx.current_instruction = 0x880D2EC8;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r16.u32);
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D2ECC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x880d2ee4
	if (!ctx.cr6.gt) goto loc_880D2EE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c990
	ctx.lr = 0x880D2EE4;
	sub_8812C990(ctx, base);
loc_880D2EE4:
	// lhz r11,16(r29)
	ctx.current_instruction = 0x880D2EE4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x880d2f0c
	if (ctx.cr6.gt) goto loc_880D2F0C;
loc_880D2EF4:
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// b 0x880d2f0c
	goto loc_880D2F0C;
loc_880D2EFC:
	// stw r17,32(r29)
	ctx.current_instruction = 0x880D2EFC;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r17.u32);
	// b 0x880d2f0c
	goto loc_880D2F0C;
loc_880D2F04:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
loc_880D2F0C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x880d2f38
	if (ctx.cr6.eq) goto loc_880D2F38;
	// lhz r11,0(r18)
	ctx.current_instruction = 0x880D2F14;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d2f38
	if (ctx.cr6.eq) goto loc_880D2F38;
	// stw r15,692(r29)
	ctx.current_instruction = 0x880D2F20;
	REX_STORE_U32(ctx.r29.u32 + 692, ctx.r15.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r11,0(r18)
	ctx.current_instruction = 0x880D2F28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 0);
	// stw r11,700(r29)
	ctx.current_instruction = 0x880D2F2C;
	REX_STORE_U32(ctx.r29.u32 + 700, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_880D2F38:
	// stw r16,692(r29)
	ctx.current_instruction = 0x880D2F38;
	REX_STORE_U32(ctx.r29.u32 + 692, ctx.r16.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E68E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E68E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E68E0;
	ctx.current_instruction = 0x880E68E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	ctx.current_instruction = 0x880E68E4;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r4,0(r3)
	ctx.current_instruction = 0x880E68E8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r4,8(r3)
	ctx.current_instruction = 0x880E68EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r6,44(r3)
	ctx.current_instruction = 0x880E68F0;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x880E68F4;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	ctx.current_instruction = 0x880E68F8;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E6B40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E6B40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E6B40) {
			switch (rex_dispatch_address) {
				case 0x880E6B48:
				case 0x880E6BA0:
				case 0x880E6BE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E6B40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E6B48: goto loc_880E6B48;
		case 0x880E6BA0: goto loc_880E6BA0;
		case 0x880E6BE8: goto loc_880E6BE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880E6B48;
	__savegprlr_28(ctx, base);
loc_880E6B48:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880E6B48;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.current_instruction = 0x880E6B4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880E6B54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,32
	ctx.r28.s64 = 32;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x880e6b84
	if (!ctx.cr6.gt) goto loc_880E6B84;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x880E6B68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,16(r3)
	ctx.current_instruction = 0x880E6B70;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r29,12(r3)
	ctx.current_instruction = 0x880E6B74;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,4(r3)
	ctx.current_instruction = 0x880E6B78;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r10,56(r3)
	ctx.current_instruction = 0x880E6B7C;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r11,8(r3)
	ctx.current_instruction = 0x880E6B80;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_880E6B84:
	// lwz r11,44(r31)
	ctx.current_instruction = 0x880E6B84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e6ba0
	if (ctx.cr6.eq) goto loc_880E6BA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e6960
	ctx.lr = 0x880E6BA0;
	sub_880E6960(ctx, base);
loc_880E6BA0:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x880E6BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x880e6c3c
	if (ctx.cr6.eq) goto loc_880E6C3C;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880e6c3c
	if (!ctx.cr6.gt) goto loc_880E6C3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_880E6BC4:
	// lwz r11,44(r31)
	ctx.current_instruction = 0x880E6BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880e6c04
	if (ctx.cr6.eq) goto loc_880E6C04;
	// lwz r7,8(r31)
	ctx.current_instruction = 0x880E6BD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,12(r31)
	ctx.current_instruction = 0x880E6BD8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x880e6840
	ctx.lr = 0x880E6BE8;
	sub_880E6840(ctx, base);
loc_880E6BE8:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x880E6BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x880E6BEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r11,8(r31)
	ctx.current_instruction = 0x880E6BF8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x880e6c24
	goto loc_880E6C24;
loc_880E6C04:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x880E6C04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,12(r31)
	ctx.current_instruction = 0x880E6C08;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// stb r10,0(r11)
	ctx.current_instruction = 0x880E6C0C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x880E6C10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x880E6C14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	ctx.current_instruction = 0x880E6C20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_880E6C24:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x880E6C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r9,4(r31)
	ctx.current_instruction = 0x880E6C2C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r10,12(r31)
	ctx.current_instruction = 0x880E6C34;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne 0x880e6bc4
	if (!ctx.cr0.eq) goto loc_880E6BC4;
loc_880E6C3C:
	// stw r28,16(r31)
	ctx.current_instruction = 0x880E6C3C;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r29,12(r31)
	ctx.current_instruction = 0x880E6C40;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EB120) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EB120);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EB120;
	ctx.current_instruction = 0x880EB120;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,7200(r11)
	ctx.current_instruction = 0x880EB12C;
	REX_STORE_U32(ctx.r11.u32 + 7200, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EB1E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EB1E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EB1E0;
	ctx.current_instruction = 0x880EB1E0;
	uint32_t ea{};
	// lwz r11,7208(r3)
	ctx.current_instruction = 0x880EB1E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880eb2e8
	if (!ctx.cr6.gt) goto loc_880EB2E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880eb214
	if (ctx.cr6.eq) goto loc_880EB214;
	// ld r11,16(r5)
	ctx.current_instruction = 0x880EB1F4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// ld r10,24(r5)
	ctx.current_instruction = 0x880EB1F8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,0(r5)
	ctx.current_instruction = 0x880EB1FC;
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	ctx.current_instruction = 0x880EB200;
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// ld r8,16(r6)
	ctx.current_instruction = 0x880EB204;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// ld r9,24(r6)
	ctx.current_instruction = 0x880EB208;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r9,8(r6)
	ctx.current_instruction = 0x880EB20C;
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// std r8,0(r6)
	ctx.current_instruction = 0x880EB210;
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
loc_880EB214:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lwz r8,7208(r3)
	ctx.current_instruction = 0x880EB218;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 7208);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x880eb2bc
	if (ctx.cr6.eq) goto loc_880EB2BC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x880eb280
	if (ctx.cr6.eq) goto loc_880EB280;
	// ld r7,0(r9)
	ctx.current_instruction = 0x880EB234;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,0(r10)
	ctx.current_instruction = 0x880EB240;
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r7,0(r11)
	ctx.current_instruction = 0x880EB244;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r7,0(r4)
	ctx.current_instruction = 0x880EB248;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// ldu r7,8(r9)
	ctx.current_instruction = 0x880EB24C;
	ea = 8 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r7,8(r10)
	ctx.current_instruction = 0x880EB250;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// stdu r7,8(r11)
	ctx.current_instruction = 0x880EB254;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// std r7,8(r4)
	ctx.current_instruction = 0x880EB258;
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ldu r7,8(r9)
	ctx.current_instruction = 0x880EB25C;
	ea = 8 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r7,8(r10)
	ctx.current_instruction = 0x880EB260;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// stdu r7,8(r11)
	ctx.current_instruction = 0x880EB264;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// stdu r7,8(r8)
	ctx.current_instruction = 0x880EB268;
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// ld r6,8(r9)
	ctx.current_instruction = 0x880EB26C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stdu r6,8(r10)
	ctx.current_instruction = 0x880EB270;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r10.u32 = ea;
	// stdu r6,8(r11)
	ctx.current_instruction = 0x880EB274;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r11.u32 = ea;
	// std r6,8(r8)
	ctx.current_instruction = 0x880EB278;
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EB280:
	// ld r8,0(r10)
	ctx.current_instruction = 0x880EB280;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,0(r11)
	ctx.current_instruction = 0x880EB28C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r8,0(r4)
	ctx.current_instruction = 0x880EB290;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// ldu r8,8(r10)
	ctx.current_instruction = 0x880EB294;
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r11)
	ctx.current_instruction = 0x880EB298;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// std r8,8(r4)
	ctx.current_instruction = 0x880EB29C;
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ldu r8,8(r10)
	ctx.current_instruction = 0x880EB2A0;
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r11)
	ctx.current_instruction = 0x880EB2A4;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// stdu r8,8(r9)
	ctx.current_instruction = 0x880EB2A8;
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// ld r7,8(r10)
	ctx.current_instruction = 0x880EB2AC;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stdu r7,8(r11)
	ctx.current_instruction = 0x880EB2B0;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// std r7,8(r9)
	ctx.current_instruction = 0x880EB2B4;
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EB2BC:
	// ld r9,0(r11)
	ctx.current_instruction = 0x880EB2BC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,0(r4)
	ctx.current_instruction = 0x880EB2C8;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// ldu r8,8(r11)
	ctx.current_instruction = 0x880EB2CC;
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// std r8,8(r4)
	ctx.current_instruction = 0x880EB2D0;
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// ldu r7,8(r11)
	ctx.current_instruction = 0x880EB2D4;
	ea = 8 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r7,8(r10)
	ctx.current_instruction = 0x880EB2D8;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r10.u32 = ea;
	// ld r6,8(r11)
	ctx.current_instruction = 0x880EB2DC;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r10)
	ctx.current_instruction = 0x880EB2E0;
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EB2E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880ED960) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880ED960;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880ED960) {
			switch (rex_dispatch_address) {
				case 0x880ED968:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ED960;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880ED968: goto loc_880ED968;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880ED968;
	__savegprlr_20(ctx, base);
loc_880ED968:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r5,46
	ctx.r11.s64 = ctx.r5.s64 + 46;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880ED978:
	// lhz r9,-46(r11)
	ctx.current_instruction = 0x880ED978;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -46);
	// lhz r8,-38(r11)
	ctx.current_instruction = 0x880ED97C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -38);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r4,-6(r11)
	ctx.current_instruction = 0x880ED984;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r31,-14(r11)
	ctx.current_instruction = 0x880ED98C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,10(r11)
	ctx.current_instruction = 0x880ED994;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r27,-22(r11)
	ctx.current_instruction = 0x880ED99C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + -22);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lhz r21,-30(r11)
	ctx.current_instruction = 0x880ED9A4;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r11.u32 + -30);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lhzu r4,2(r11)
	ctx.current_instruction = 0x880ED9AC;
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r26,r8,r5
	ctx.r26.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r24,r6,r5
	ctx.r24.u64 = ctx.r6.u64 + ctx.r5.u64;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r9,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r8,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r7,r27
	ctx.r7.s64 = ctx.r27.s16;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r27,r9,r25
	ctx.r27.u64 = ctx.r25.u64 - ctx.r9.u64;
	// rlwinm r22,r9,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r8,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r8.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r20,r6,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r22,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r22.u64;
	// rlwinm r23,r7,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r7,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r26,r27
	ctx.r30.u64 = ctx.r26.u64 + ctx.r27.u64;
	// subf r26,r23,r6
	ctx.r26.u64 = ctx.r6.u64 - ctx.r23.u64;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r7,r5
	ctx.r27.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r23,r7,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r7.u64;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r5,r23,r24
	ctx.r5.u64 = ctx.r23.u64 + ctx.r24.u64;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// rlwinm r22,r26,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r29,r31
	ctx.r29.s64 = ctx.r31.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r30,r27,r20
	ctx.r30.u64 = ctx.r20.u64 - ctx.r27.u64;
	// rlwinm r28,r25,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r26,r8,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r6,r22,r7
	ctx.r6.u64 = ctx.r22.u64 + ctx.r7.u64;
	// extsh r9,r21
	ctx.r9.s64 = ctx.r21.s16;
	// subf r29,r28,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r28.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r9,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r26,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r26.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// rlwinm r30,r5,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r7,r28
	ctx.r7.s64 = ctx.r28.s16;
	// add r29,r9,r6
	ctx.r29.u64 = ctx.r9.u64 + ctx.r6.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r28,r4,r7
	ctx.r28.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r27,r8,r31
	ctx.r27.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r29,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 3;
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// sth r29,2(r10)
	ctx.current_instruction = 0x880EDB34;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r29.u16);
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// srawi r31,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 3;
	// srawi r4,r27,3
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 3;
	// subf r6,r6,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r6.u64;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// sth r4,8(r10)
	ctx.current_instruction = 0x880EDB4C;
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// srawi r7,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 3;
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// sth r5,12(r10)
	ctx.current_instruction = 0x880EDB68;
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r5.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r30,4(r10)
	ctx.current_instruction = 0x880EDB70;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r30.u16);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// sth r31,6(r10)
	ctx.current_instruction = 0x880EDB78;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r31.u16);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// sth r8,10(r10)
	ctx.current_instruction = 0x880EDB80;
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r8.u16);
	// sth r4,14(r10)
	ctx.current_instruction = 0x880EDB84;
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r4.u16);
	// sthu r9,16(r10)
	ctx.current_instruction = 0x880EDB88;
	ea = 16 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880ed978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ED978;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,46
	ctx.r11.s64 = ctx.r3.s64 + 46;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880EDB9C:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x880EDB9C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,-46(r11)
	ctx.current_instruction = 0x880EDBA0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -46);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r7,-14(r11)
	ctx.current_instruction = 0x880EDBA8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -14);
	// lhz r6,-30(r11)
	ctx.current_instruction = 0x880EDBAC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + -30);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// mulli r30,r10,11
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(11));
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r5,r9,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r30,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r30.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r3,r8,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r8,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 6;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r6,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 6;
	// srawi r5,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 6;
	// srawi r4,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 6;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// sth r3,-46(r11)
	ctx.current_instruction = 0x880EDC58;
	REX_STORE_U16(ctx.r11.u32 + -46, ctx.r3.u16);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// sth r10,-30(r11)
	ctx.current_instruction = 0x880EDC60;
	REX_STORE_U16(ctx.r11.u32 + -30, ctx.r10.u16);
	// sth r9,-14(r11)
	ctx.current_instruction = 0x880EDC64;
	REX_STORE_U16(ctx.r11.u32 + -14, ctx.r9.u16);
	// sthu r8,2(r11)
	ctx.current_instruction = 0x880EDC68;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x880edb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EDB9C;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F58A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F58A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F58A0;
	ctx.current_instruction = 0x880F58A0;
	// lhz r11,0(r3)
	ctx.current_instruction = 0x880F58A0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// lwz r10,40(r6)
	ctx.current_instruction = 0x880F58A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r9,0(r6)
	ctx.current_instruction = 0x880F58B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r6)
	ctx.current_instruction = 0x880F58B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r6,0(r4)
	ctx.current_instruction = 0x880F58BC;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880F58D8:
	// lhzx r10,r7,r11
	ctx.current_instruction = 0x880F58D8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880f5910
	if (ctx.cr6.eq) goto loc_880F5910;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bge cr6,0x880f5900
	if (!ctx.cr6.lt) goto loc_880F5900;
	// subf r5,r8,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r11)
	ctx.current_instruction = 0x880F58F8;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// b 0x880f5914
	goto loc_880F5914;
loc_880F5900:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// sth r5,0(r11)
	ctx.current_instruction = 0x880F5908;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// b 0x880f5914
	goto loc_880F5914;
loc_880F5910:
	// sth r6,0(r11)
	ctx.current_instruction = 0x880F5910;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_880F5914:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x880f58d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F58D8;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F5FB8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F5FB8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F5FB8;
	ctx.current_instruction = 0x880F5FB8;
	// lhz r9,0(r5)
	ctx.current_instruction = 0x880F5FB8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r8,2(r4)
	ctx.current_instruction = 0x880F5FC8;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// sth r9,0(r4)
	ctx.current_instruction = 0x880F5FD0;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// ble cr6,0x880f6034
	if (!ctx.cr6.gt) goto loc_880F6034;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F5FE4:
	// lwz r9,0(r8)
	ctx.current_instruction = 0x880F5FE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r7,r5
	ctx.current_instruction = 0x880F5FEC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880f6004
	if (!ctx.cr6.eq) goto loc_880F6004;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// b 0x880f602c
	goto loc_880F602C;
loc_880F6004:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r4
	ctx.current_instruction = 0x880F6018;
	REX_STORE_U16(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u16);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// sthx r10,r7,r4
	ctx.current_instruction = 0x880F6024;
	REX_STORE_U16(ctx.r7.u32 + ctx.r4.u32, ctx.r10.u16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_880F602C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x880f5fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F5FE4;
loc_880F6034:
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F85F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F85F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F85F0) {
			switch (rex_dispatch_address) {
				case 0x880F85F8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F85F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x880F85F8: goto loc_880F85F8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x880F85F8;
	__savegprlr_21(ctx, base);
loc_880F85F8:
	// lwz r22,92(r1)
	ctx.current_instruction = 0x880F85F8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// neg r31,r9
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwz r21,84(r1)
	ctx.current_instruction = 0x880F8604;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r6,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r22.u64;
	// clrlwi r31,r31,28
	ctx.r31.u64 = ctx.r31.u32 & 0xF;
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r3,r3,0,27,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1C;
	// addi r26,r11,-32
	ctx.r26.s64 = ctx.r11.s64 + -32;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r3,r3,0,29,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r24,r9,64
	ctx.r24.s64 = ctx.r9.s64 + 64;
	// addi r23,r3,20
	ctx.r23.s64 = ctx.r3.s64 + 20;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x880f86d8
	if (!ctx.cr6.lt) goto loc_880F86D8;
	// subf r27,r26,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r26.u64;
	// subf r25,r4,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_880F8648:
	// lbzx r9,r27,r30
	ctx.current_instruction = 0x880F8648;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r4,0(r6)
	ctx.current_instruction = 0x880F8650;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rldicr r29,r9,8,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r28,r4,8,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// rldicr r29,r9,16,47
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r28,r4,16,47
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 | ctx.r9.u64;
	// or r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 | ctx.r4.u64;
	// rldicr r29,r9,32,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r28,r4,32,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 | ctx.r9.u64;
	// or r28,r28,r4
	ctx.r28.u64 = ctx.r28.u64 | ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880f86a8
	if (!ctx.cr6.gt) goto loc_880F86A8;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_880F8698:
	// lbz r4,0(r6)
	ctx.current_instruction = 0x880F8698;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stbx r4,r9,r11
	ctx.current_instruction = 0x880F869C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880f8698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F8698;
loc_880F86A8:
	// li r4,4
	ctx.r4.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_880F86B8:
	// stdx r29,r11,r30
	ctx.current_instruction = 0x880F86B8;
	REX_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u64);
	// stdx r28,r9,r11
	ctx.current_instruction = 0x880F86BC;
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x880f86b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F86B8;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + ctx.r21.u64;
	// bne 0x880f8648
	if (!ctx.cr0.eq) goto loc_880F8648;
loc_880F86D8:
	// srawi r6,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r24.s32 >> 3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880f8728
	if (ctx.cr6.eq) goto loc_880F8728;
	// mullw r11,r23,r21
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r21.s32);
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x880f8728
	if (!ctx.cr6.gt) goto loc_880F8728;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_880F86FC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880f871c
	if (!ctx.cr6.gt) goto loc_880F871C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880F870C:
	// ld r7,0(r11)
	ctx.current_instruction = 0x880F870C;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r7,r10,r11
	ctx.current_instruction = 0x880F8710;
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x880f870c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F870C;
loc_880F871C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bne 0x880f86fc
	if (!ctx.cr0.eq) goto loc_880F86FC;
loc_880F8728:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880f878c
	if (ctx.cr6.eq) goto loc_880F878C;
	// subf r8,r21,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r21.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// neg r11,r5
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// beq cr6,0x880f8748
	if (ctx.cr6.eq) goto loc_880F8748;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x880f874c
	goto loc_880F874C;
loc_880F8748:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_880F874C:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880f878c
	if (!ctx.cr6.gt) goto loc_880F878C;
	// subf r10,r8,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r8.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_880F8760:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880f8780
	if (!ctx.cr6.gt) goto loc_880F8780;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880F8770:
	// ld r7,0(r11)
	ctx.current_instruction = 0x880F8770;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r7,r10,r11
	ctx.current_instruction = 0x880F8774;
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x880f8770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F8770;
loc_880F8780:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bne 0x880f8760
	if (!ctx.cr0.eq) goto loc_880F8760;
loc_880F878C:
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FA390) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FA390;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FA390) {
			switch (rex_dispatch_address) {
				case 0x880FA3D8:
				case 0x880FA3E0:
				case 0x880FA3F0:
				case 0x880FA400:
				case 0x880FA410:
				case 0x880FA420:
				case 0x880FA430:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FA390;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FA3D8: goto loc_880FA3D8;
		case 0x880FA3E0: goto loc_880FA3E0;
		case 0x880FA3F0: goto loc_880FA3F0;
		case 0x880FA400: goto loc_880FA400;
		case 0x880FA410: goto loc_880FA410;
		case 0x880FA420: goto loc_880FA420;
		case 0x880FA430: goto loc_880FA430;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880FA394;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880FA398;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880FA39C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880fa3c0
	if (ctx.cr6.eq) goto loc_880FA3C0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fa430
	if (ctx.cr6.eq) goto loc_880FA430;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x880fa428
	goto loc_880FA428;
loc_880FA3C0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fa430
	if (ctx.cr6.eq) goto loc_880FA430;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA3CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880FA3D8;
	sub_880E6960(ctx, base);
loc_880FA3D8:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA3D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6c50
	ctx.lr = 0x880FA3E0;
	sub_880E6C50(ctx, base);
loc_880FA3E0:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,171
	ctx.r4.s64 = 171;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA3E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA3F0;
	sub_880E6960(ctx, base);
loc_880FA3F0:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA3F8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA400;
	sub_880E6960(ctx, base);
loc_880FA400:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA408;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA410;
	sub_880E6960(ctx, base);
loc_880FA410:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA418;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA420;
	sub_880E6960(ctx, base);
loc_880FA420:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,27
	ctx.r4.s64 = 27;
loc_880FA428:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FA428;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FA430;
	sub_880E6960(ctx, base);
loc_880FA430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880FA434;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880FA43C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FE498) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FE498;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FE498) {
			switch (rex_dispatch_address) {
				case 0x880FE4A0:
				case 0x880FE52C:
				case 0x880FE550:
				case 0x880FE5A4:
				case 0x880FE5F4:
				case 0x880FE668:
				case 0x880FE674:
				case 0x880FE6A0:
				case 0x880FE720:
				case 0x880FE72C:
				case 0x880FE75C:
				case 0x880FE884:
				case 0x880FE8E0:
				case 0x880FE9D4:
				case 0x880FEA30:
				case 0x880FEAA8:
				case 0x880FEAB4:
				case 0x880FEAE4:
				case 0x880FEB48:
				case 0x880FEB58:
				case 0x880FEB7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FE498;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FE4A0: goto loc_880FE4A0;
		case 0x880FE52C: goto loc_880FE52C;
		case 0x880FE550: goto loc_880FE550;
		case 0x880FE5A4: goto loc_880FE5A4;
		case 0x880FE5F4: goto loc_880FE5F4;
		case 0x880FE668: goto loc_880FE668;
		case 0x880FE674: goto loc_880FE674;
		case 0x880FE6A0: goto loc_880FE6A0;
		case 0x880FE720: goto loc_880FE720;
		case 0x880FE72C: goto loc_880FE72C;
		case 0x880FE75C: goto loc_880FE75C;
		case 0x880FE884: goto loc_880FE884;
		case 0x880FE8E0: goto loc_880FE8E0;
		case 0x880FE9D4: goto loc_880FE9D4;
		case 0x880FEA30: goto loc_880FEA30;
		case 0x880FEAA8: goto loc_880FEAA8;
		case 0x880FEAB4: goto loc_880FEAB4;
		case 0x880FEAE4: goto loc_880FEAE4;
		case 0x880FEB48: goto loc_880FEB48;
		case 0x880FEB58: goto loc_880FEB58;
		case 0x880FEB7C: goto loc_880FEB7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880FE4A0;
	__savegprlr_19(ctx, base);
loc_880FE4A0:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880FE4A0;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,7044(r3)
	ctx.current_instruction = 0x880FE4A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 7044);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,2244(r3)
	ctx.current_instruction = 0x880FE4AC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2244);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x880fe4c4
	if (!ctx.cr6.eq) goto loc_880FE4C4;
	// lwz r29,6792(r3)
	ctx.current_instruction = 0x880FE4B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 6792);
	// lwz r30,2248(r3)
	ctx.current_instruction = 0x880FE4BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2248);
	// b 0x880fe4d4
	goto loc_880FE4D4;
loc_880FE4C4:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x880fe4d4
	if (!ctx.cr6.eq) goto loc_880FE4D4;
	// lwz r29,21136(r31)
	ctx.current_instruction = 0x880FE4CC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 21136);
	// lwz r30,28412(r31)
	ctx.current_instruction = 0x880FE4D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28412);
loc_880FE4D4:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880FE4D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fe4f4
	if (!ctx.cr6.gt) goto loc_880FE4F4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x880fe4f4
	if (!ctx.cr6.eq) goto loc_880FE4F4;
	// lwz r29,7836(r31)
	ctx.current_instruction = 0x880FE4E8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7836);
	// lwz r30,2256(r31)
	ctx.current_instruction = 0x880FE4EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 2256);
	// b 0x880fe518
	goto loc_880FE518;
loc_880FE4F4:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x880fe508
	if (!ctx.cr6.eq) goto loc_880FE508;
	// lwz r29,28416(r31)
	ctx.current_instruction = 0x880FE4FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28416);
	// lwz r30,28408(r31)
	ctx.current_instruction = 0x880FE500;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28408);
	// b 0x880fe518
	goto loc_880FE518;
loc_880FE508:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x880fe518
	if (!ctx.cr6.eq) goto loc_880FE518;
	// lwz r29,28424(r31)
	ctx.current_instruction = 0x880FE510;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28424);
	// lwz r30,28420(r31)
	ctx.current_instruction = 0x880FE514;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 28420);
loc_880FE518:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,728(r31)
	ctx.current_instruction = 0x880FE51C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE524;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FE52C;
	sub_880E6960(ctx, base);
loc_880FE52C:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE534;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r11,r11,2752
	ctx.r11.s64 = ctx.r11.s64 + 2752;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x880FE544;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x880FE548;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FE550;
	sub_880E6960(ctx, base);
loc_880FE550:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x880feb8c
	if (ctx.cr6.gt) goto loc_880FEB8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fe580
	if (ctx.cr6.eq) goto loc_880FE580;
	// bdz 0x880fe57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880FE57C;
	// bdz 0x880fe788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880FE788;
	// bdz 0x880fe784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880FE784;
	// bdz 0x880fe60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_880FE60C;
	// b 0x880fe6c8
	goto loc_880FE6C8;
loc_880FE57C:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_880FE580:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880FE580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fe5a4
	if (ctx.cr6.eq) goto loc_880FE5A4;
	// lbz r11,0(r29)
	ctx.current_instruction = 0x880FE590;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE598;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x880e6960
	ctx.lr = 0x880FE5A4;
	sub_880E6960(ctx, base);
loc_880FE5A4:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880FE5A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880feb8c
	if (!ctx.cr6.lt) goto loc_880FEB8C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// addi r28,r11,23388
	ctx.r28.s64 = ctx.r11.s64 + 23388;
	// addi r27,r10,13216
	ctx.r27.s64 = ctx.r10.s64 + 13216;
loc_880FE5C8:
	// lbzx r11,r26,r30
	ctx.current_instruction = 0x880FE5C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// lbzx r10,r30,r29
	ctx.current_instruction = 0x880FE5CC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE5D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r27
	ctx.current_instruction = 0x880FE5E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r4,r8,r28
	ctx.current_instruction = 0x880FE5EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FE5F4;
	sub_880E6960(ctx, base);
loc_880FE5F4:
	// lwz r7,728(r31)
	ctx.current_instruction = 0x880FE5F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880fe5c8
	if (ctx.cr6.lt) goto loc_880FE5C8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880FE60C:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880FE60C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880feb8c
	if (!ctx.cr6.gt) goto loc_880FEB8C;
loc_880FE61C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FE61C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x880fe650
	if (!ctx.cr6.gt) goto loc_880FE650;
	// mullw r8,r10,r28
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_880FE634:
	// lbzx r9,r9,r29
	ctx.current_instruction = 0x880FE634;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880fe650
	if (!ctx.cr6.eq) goto loc_880FE650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x880fe634
	if (ctx.cr6.lt) goto loc_880FE634;
loc_880FE650:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE650;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x880fe66c
	if (!ctx.cr6.eq) goto loc_880FE66C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880FE668;
	sub_880E6960(ctx, base);
loc_880FE668:
	// b 0x880fe6b0
	goto loc_880FE6B0;
loc_880FE66C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x880FE674;
	sub_880E6960(ctx, base);
loc_880FE674:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FE674;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fe6b0
	if (!ctx.cr6.gt) goto loc_880FE6B0;
loc_880FE684:
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE688;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbzx r10,r11,r29
	ctx.current_instruction = 0x880FE694;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x880e6960
	ctx.lr = 0x880FE6A0;
	sub_880E6960(ctx, base);
loc_880FE6A0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FE6A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fe684
	if (ctx.cr6.lt) goto loc_880FE684;
loc_880FE6B0:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880FE6B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fe61c
	if (ctx.cr6.lt) goto loc_880FE61C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880FE6C8:
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880FE6C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880feb8c
	if (!ctx.cr6.gt) goto loc_880FEB8C;
loc_880FE6D8:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FE6D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880fe708
	if (!ctx.cr6.gt) goto loc_880FE708;
loc_880FE6E8:
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbzx r7,r10,r29
	ctx.current_instruction = 0x880FE6F0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880fe708
	if (!ctx.cr6.eq) goto loc_880FE708;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880fe6e8
	if (ctx.cr6.lt) goto loc_880FE6E8;
loc_880FE708:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE708;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x880fe724
	if (!ctx.cr6.eq) goto loc_880FE724;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880FE720;
	sub_880E6960(ctx, base);
loc_880FE720:
	// b 0x880fe76c
	goto loc_880FE76C;
loc_880FE724:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x880FE72C;
	sub_880E6960(ctx, base);
loc_880FE72C:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880FE72C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880fe76c
	if (!ctx.cr6.gt) goto loc_880FE76C;
loc_880FE73C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FE73C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE744;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r9,r10,r29
	ctx.current_instruction = 0x880FE750;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x880e6960
	ctx.lr = 0x880FE75C;
	sub_880E6960(ctx, base);
loc_880FE75C:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FE75C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880fe73c
	if (ctx.cr6.lt) goto loc_880FE73C;
loc_880FE76C:
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880FE76C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880fe6d8
	if (ctx.cr6.lt) goto loc_880FE6D8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880FE784:
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
loc_880FE788:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r9,724(r31)
	ctx.current_instruction = 0x880FE78C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// mulhwu r8,r9,r10
	ctx.r8.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf. r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x880fe904
	if (!ctx.cr0.eq) goto loc_880FE904;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FE7B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mulhwu r8,r11,r10
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf. r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x880fe904
	if (ctx.cr0.eq) goto loc_880FE904;
	// clrlwi r20,r11,31
	ctx.r20.u64 = ctx.r11.u32 & 0x1;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880fea50
	if (!ctx.cr6.gt) goto loc_880FEA50;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// addi r22,r10,23356
	ctx.r22.s64 = ctx.r10.s64 + 23356;
	// addi r25,r9,12704
	ctx.r25.s64 = ctx.r9.s64 + 12704;
loc_880FE7EC:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880fe8f0
	if (!ctx.cr6.lt) goto loc_880FE8F0;
	// addi r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 1;
loc_880FE7FC:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FE7FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r25,4
	ctx.r28.s64 = ctx.r25.s64 + 4;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE804;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r10,r23
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbzx r9,r27,r11
	ctx.current_instruction = 0x880FE810;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r8,r11,r29
	ctx.current_instruction = 0x880FE814;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r27,r11
	ctx.current_instruction = 0x880FE828;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r5,r11,r29
	ctx.current_instruction = 0x880FE830;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r27,r11
	ctx.current_instruction = 0x880FE844;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r5,r11,r29
	ctx.current_instruction = 0x880FE84C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r26,r9,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r25
	ctx.current_instruction = 0x880FE878;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r5,r30,r28
	ctx.current_instruction = 0x880FE87C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FE884;
	sub_880E6960(ctx, base);
loc_880FE884:
	// lwzx r8,r30,r28
	ctx.current_instruction = 0x880FE884;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x880fe8e0
	if (!ctx.cr6.eq) goto loc_880FE8E0;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE894;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r9,r11,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r22
	ctx.current_instruction = 0x880FE8A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwzx r9,r8,r22
	ctx.current_instruction = 0x880FE8A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x880fe8c4
	if (!ctx.cr6.eq) goto loc_880FE8C4;
	// li r5,5
	ctx.r5.s64 = 5;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// b 0x880fe8dc
	goto loc_880FE8DC;
loc_880FE8C4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// xori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 ^ 126;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.current_instruction = 0x880FE8D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r8,r25
	ctx.current_instruction = 0x880FE8D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
loc_880FE8DC:
	// bl 0x880e6960
	ctx.lr = 0x880FE8E0;
	sub_880E6960(ctx, base);
loc_880FE8E0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FE8E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fe7fc
	if (ctx.cr6.lt) goto loc_880FE7FC;
loc_880FE8F0:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x880FE8F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880fe7ec
	if (ctx.cr6.lt) goto loc_880FE7EC;
	// b 0x880fea50
	goto loc_880FEA50;
loc_880FE904:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FE904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// clrlwi r19,r9,31
	ctx.r19.u64 = ctx.r9.u32 & 0x1;
	// mulhwu r10,r11,r10
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r20,r9,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r9.u64;
	// bge cr6,0x880fea50
	if (!ctx.cr6.lt) goto loc_880FEA50;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r21,r9,23356
	ctx.r21.s64 = ctx.r9.s64 + 23356;
	// addi r26,r10,12704
	ctx.r26.s64 = ctx.r10.s64 + 12704;
loc_880FE93C:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880fea40
	if (!ctx.cr6.lt) goto loc_880FEA40;
	// addi r25,r29,2
	ctx.r25.s64 = ctx.r29.s64 + 2;
	// addi r24,r29,1
	ctx.r24.s64 = ctx.r29.s64 + 1;
loc_880FE950:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FE950;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE958;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r10,r22
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbzx r9,r25,r11
	ctx.current_instruction = 0x880FE964;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// lbzx r8,r24,r11
	ctx.current_instruction = 0x880FE968;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// lbzx r7,r11,r29
	ctx.current_instruction = 0x880FE96C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// lbzx r5,r25,r11
	ctx.current_instruction = 0x880FE984;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r24,r11
	ctx.current_instruction = 0x880FE98C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lbzx r7,r11,r29
	ctx.current_instruction = 0x880FE994;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r27,r4,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r26
	ctx.current_instruction = 0x880FE9C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r5,r30,r28
	ctx.current_instruction = 0x880FE9CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FE9D4;
	sub_880E6960(ctx, base);
loc_880FE9D4:
	// lwzx r3,r30,r28
	ctx.current_instruction = 0x880FE9D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x880fea30
	if (!ctx.cr6.eq) goto loc_880FEA30;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FE9E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r9,r11,2,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r21
	ctx.current_instruction = 0x880FE9F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// lwzx r9,r8,r21
	ctx.current_instruction = 0x880FE9F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x880fea14
	if (!ctx.cr6.eq) goto loc_880FEA14;
	// li r5,5
	ctx.r5.s64 = 5;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// b 0x880fea2c
	goto loc_880FEA2C;
loc_880FEA14:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// xori r9,r11,126
	ctx.r9.u64 = ctx.r11.u64 ^ 126;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r10
	ctx.current_instruction = 0x880FEA24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r4,r8,r26
	ctx.current_instruction = 0x880FEA28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
loc_880FEA2C:
	// bl 0x880e6960
	ctx.lr = 0x880FEA30;
	sub_880E6960(ctx, base);
loc_880FEA30:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FEA30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r23,r23,3
	ctx.r23.s64 = ctx.r23.s64 + 3;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880fe950
	if (ctx.cr6.lt) goto loc_880FE950;
loc_880FEA40:
	// lwz r10,724(r31)
	ctx.current_instruction = 0x880FEA40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880fe93c
	if (ctx.cr6.lt) goto loc_880FE93C;
loc_880FEA50:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880feb00
	if (!ctx.cr6.gt) goto loc_880FEB00;
loc_880FEA5C:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FEA5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880fea90
	if (!ctx.cr6.gt) goto loc_880FEA90;
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880FEA6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
loc_880FEA70:
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbzx r7,r10,r29
	ctx.current_instruction = 0x880FEA78;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x880fea90
	if (!ctx.cr6.eq) goto loc_880FEA90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880fea70
	if (ctx.cr6.lt) goto loc_880FEA70;
loc_880FEA90:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FEA90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x880feaac
	if (!ctx.cr6.eq) goto loc_880FEAAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880FEAA8;
	sub_880E6960(ctx, base);
loc_880FEAA8:
	// b 0x880feaf4
	goto loc_880FEAF4;
loc_880FEAAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x880FEAB4;
	sub_880E6960(ctx, base);
loc_880FEAB4:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880FEAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880feaf4
	if (!ctx.cr6.gt) goto loc_880FEAF4;
loc_880FEAC4:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FEAC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FEACC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbzx r9,r10,r29
	ctx.current_instruction = 0x880FEAD8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x880e6960
	ctx.lr = 0x880FEAE4;
	sub_880E6960(ctx, base);
loc_880FEAE4:
	// lwz r8,724(r31)
	ctx.current_instruction = 0x880FEAE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880feac4
	if (ctx.cr6.lt) goto loc_880FEAC4;
loc_880FEAF4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880fea5c
	if (ctx.cr6.lt) goto loc_880FEA5C;
loc_880FEB00:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x880feb8c
	if (ctx.cr6.eq) goto loc_880FEB8C;
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FEB08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r10
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880feb30
	if (!ctx.cr6.lt) goto loc_880FEB30;
loc_880FEB18:
	// lbzx r9,r11,r29
	ctx.current_instruction = 0x880FEB18;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880feb30
	if (!ctx.cr6.eq) goto loc_880FEB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880feb18
	if (ctx.cr6.lt) goto loc_880FEB18;
loc_880FEB30:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FEB30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x880feb50
	if (!ctx.cr6.eq) goto loc_880FEB50;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880e6960
	ctx.lr = 0x880FEB48;
	sub_880E6960(ctx, base);
loc_880FEB48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
loc_880FEB50:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880e6960
	ctx.lr = 0x880FEB58;
	sub_880E6960(ctx, base);
loc_880FEB58:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FEB58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x880feb8c
	if (!ctx.cr6.lt) goto loc_880FEB8C;
loc_880FEB68:
	// lbzx r11,r30,r29
	ctx.current_instruction = 0x880FEB68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FEB70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x880e6960
	ctx.lr = 0x880FEB7C;
	sub_880E6960(ctx, base);
loc_880FEB7C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FEB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880feb68
	if (ctx.cr6.lt) goto loc_880FEB68;
loc_880FEB8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810ED80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810ED80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810ED80) {
			switch (rex_dispatch_address) {
				case 0x8810ED88:
				case 0x8810EDF8:
				case 0x8810EE4C:
				case 0x8810EE5C:
				case 0x8810EE90:
				case 0x8810EEA8:
				case 0x8810EED0:
				case 0x8810EEE0:
				case 0x8810EEF0:
				case 0x8810EF04:
				case 0x8810EF1C:
				case 0x8810EF38:
				case 0x8810EF48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810ED80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810ED88: goto loc_8810ED88;
		case 0x8810EDF8: goto loc_8810EDF8;
		case 0x8810EE4C: goto loc_8810EE4C;
		case 0x8810EE5C: goto loc_8810EE5C;
		case 0x8810EE90: goto loc_8810EE90;
		case 0x8810EEA8: goto loc_8810EEA8;
		case 0x8810EED0: goto loc_8810EED0;
		case 0x8810EEE0: goto loc_8810EEE0;
		case 0x8810EEF0: goto loc_8810EEF0;
		case 0x8810EF04: goto loc_8810EF04;
		case 0x8810EF1C: goto loc_8810EF1C;
		case 0x8810EF38: goto loc_8810EF38;
		case 0x8810EF48: goto loc_8810EF48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8810ED88;
	__savegprlr_27(ctx, base);
loc_8810ED88:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8810ED88;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// lwz r10,20132(r3)
	ctx.current_instruction = 0x8810ED90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// xor r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// subf r28,r11,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r11.u64;
	// bgt cr6,0x8810ee00
	if (ctx.cr6.gt) goto loc_8810EE00;
	// lwz r11,20140(r3)
	ctx.current_instruction = 0x8810EDB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20140);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x8810EDBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8810ee5c
	if (!ctx.cr6.gt) goto loc_8810EE5C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,20176(r3)
	ctx.current_instruction = 0x8810EDD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20176);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bgt cr6,0x8810eeb8
	if (ctx.cr6.gt) goto loc_8810EEB8;
	// lwz r9,20160(r31)
	ctx.current_instruction = 0x8810EDDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20160);
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8810EDEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x8810EDF0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810EDF8;
	sub_880E6960(ctx, base);
loc_8810EDF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8810ee50
	goto loc_8810EE50;
loc_8810EE00:
	// lwz r11,20136(r31)
	ctx.current_instruction = 0x8810EE00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20136);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8810eeb0
	if (ctx.cr6.gt) goto loc_8810EEB0;
	// lwz r11,20144(r31)
	ctx.current_instruction = 0x8810EE0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20144);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.current_instruction = 0x8810EE14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8810eeb0
	if (ctx.cr6.gt) goto loc_8810EEB0;
	// lwz r10,20160(r31)
	ctx.current_instruction = 0x8810EE24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20160);
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// lwz r9,20176(r31)
	ctx.current_instruction = 0x8810EE2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r4,r10,r9
	ctx.current_instruction = 0x8810EE40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8810EE44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x880e6960
	ctx.lr = 0x8810EE4C;
	sub_880E6960(ctx, base);
loc_8810EE4C:
	// li r5,2
	ctx.r5.s64 = 2;
loc_8810EE50:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EE5C;
	sub_880E6960(ctx, base);
loc_8810EE5C:
	// lwz r11,20148(r31)
	ctx.current_instruction = 0x8810EE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20148);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20176(r31)
	ctx.current_instruction = 0x8810EE64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r11,r9
	ctx.current_instruction = 0x8810EE6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8810EE84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x8810EE88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810EE90;
	sub_880E6960(ctx, base);
loc_8810EE90:
	// neg r7,r27
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// orc r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 | ~ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x8810EEA8;
	sub_880E6960(ctx, base);
loc_8810EEA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8810EEB0:
	// lwz r10,20176(r31)
	ctx.current_instruction = 0x8810EEB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8810EEB8:
	// lwz r11,20160(r31)
	ctx.current_instruction = 0x8810EEB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20160);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8810EEC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x8810EEC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x8810EED0;
	sub_880E6960(ctx, base);
loc_8810EED0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EEE0;
	sub_880E6960(ctx, base);
loc_8810EEE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EEF0;
	sub_880E6960(ctx, base);
loc_8810EEF0:
	// lwz r11,1544(r31)
	ctx.current_instruction = 0x8810EEF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8810ef0c
	if (ctx.cr6.eq) goto loc_8810EF0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810e8a0
	ctx.lr = 0x8810EF04;
	sub_8810E8A0(ctx, base);
loc_8810EF04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1544(r31)
	ctx.current_instruction = 0x8810EF08;
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_8810EF0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,1552(r31)
	ctx.current_instruction = 0x8810EF10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1552);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x8810EF1C;
	sub_880E6960(ctx, base);
loc_8810EF1C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x8810ef34
	if (ctx.cr6.lt) goto loc_8810EF34;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8810EF34:
	// bl 0x880e6960
	ctx.lr = 0x8810EF38;
	sub_880E6960(ctx, base);
loc_8810EF38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1548(r31)
	ctx.current_instruction = 0x8810EF40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1548);
	// bl 0x880e6960
	ctx.lr = 0x8810EF48;
	sub_880E6960(ctx, base);
loc_8810EF48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88113868) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88113868;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88113868) {
			switch (rex_dispatch_address) {
				case 0x88113870:
				case 0x88113AD8:
				case 0x88113BB8:
				case 0x88113BE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88113868;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88113870: goto loc_88113870;
		case 0x88113AD8: goto loc_88113AD8;
		case 0x88113BB8: goto loc_88113BB8;
		case 0x88113BE8: goto loc_88113BE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88113870;
	__savegprlr_24(ctx, base);
loc_88113870:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88113870;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,116(r3)
	ctx.current_instruction = 0x88113878;
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,120(r3)
	ctx.current_instruction = 0x88113880;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r6,124(r3)
	ctx.current_instruction = 0x88113888;
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r6.u32);
	// bge cr6,0x88113894
	if (!ctx.cr6.lt) goto loc_88113894;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_88113894:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x88113c48
	if (ctx.cr6.lt) goto loc_88113C48;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88113c48
	if (ctx.cr6.eq) goto loc_88113C48;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88113c48
	if (ctx.cr6.eq) goto loc_88113C48;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x88113c48
	if (ctx.cr6.eq) goto loc_88113C48;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88113c48
	if (ctx.cr6.eq) goto loc_88113C48;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88113c48
	if (ctx.cr6.eq) goto loc_88113C48;
	// lwz r11,128(r31)
	ctx.current_instruction = 0x881138C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88113c48
	if (ctx.cr6.eq) goto loc_88113C48;
	// lwz r24,96(r31)
	ctx.current_instruction = 0x881138D0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x88113c48
	if (!ctx.cr6.eq) goto loc_88113C48;
	// lwz r25,100(r31)
	ctx.current_instruction = 0x881138DC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88113c48
	if (!ctx.cr6.eq) goto loc_88113C48;
	// lwz r10,88(r31)
	ctx.current_instruction = 0x881138E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,4(r27)
	ctx.current_instruction = 0x881138EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88113c48
	if (!ctx.cr6.eq) goto loc_88113C48;
	// lwz r10,92(r31)
	ctx.current_instruction = 0x881138F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,8(r27)
	ctx.current_instruction = 0x881138FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88113c48
	if (!ctx.cr6.eq) goto loc_88113C48;
	// stw r11,132(r31)
	ctx.current_instruction = 0x88113908;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,16(r27)
	ctx.current_instruction = 0x88113910;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88113a20
	if (ctx.cr6.eq) goto loc_88113A20;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r8,r11,21849
	ctx.r8.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88113940
	if (!ctx.cr6.eq) goto loc_88113940;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,5552
	ctx.r7.s64 = ctx.r11.s64 + 5552;
	// addi r4,r8,7152
	ctx.r4.s64 = ctx.r8.s64 + 7152;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113940:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r8,r11,22869
	ctx.r8.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x88113964
	if (!ctx.cr6.eq) goto loc_88113964;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,7720
	ctx.r7.s64 = ctx.r11.s64 + 7720;
	// addi r4,r8,7152
	ctx.r4.s64 = ctx.r8.s64 + 7152;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113964:
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r8,r11,12598
	ctx.r8.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88113988
	if (!ctx.cr6.eq) goto loc_88113988;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,6024
	ctx.r7.s64 = ctx.r11.s64 + 6024;
	// addi r4,r8,6568
	ctx.r4.s64 = ctx.r8.s64 + 6568;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113988:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x881139cc
	if (!ctx.cr6.eq) goto loc_881139CC;
	// lhz r11,14(r27)
	ctx.current_instruction = 0x88113990;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x881139b0
	if (!ctx.cr6.eq) goto loc_881139B0;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,12160
	ctx.r7.s64 = ctx.r11.s64 + 12160;
	// addi r4,r8,12728
	ctx.r4.s64 = ctx.r8.s64 + 12728;
	// b 0x88113a90
	goto loc_88113A90;
loc_881139B0:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x88113a98
	if (!ctx.cr6.eq) goto loc_88113A98;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,10632
	ctx.r7.s64 = ctx.r11.s64 + 10632;
	// addi r4,r8,11120
	ctx.r4.s64 = ctx.r8.s64 + 11120;
	// b 0x88113a90
	goto loc_88113A90;
loc_881139CC:
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r8,r11,21846
	ctx.r8.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x881139f0
	if (!ctx.cr6.eq) goto loc_881139F0;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,10632
	ctx.r7.s64 = ctx.r11.s64 + 10632;
	// addi r4,r8,11120
	ctx.r4.s64 = ctx.r8.s64 + 11120;
	// b 0x88113a90
	goto loc_88113A90;
loc_881139F0:
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// stw r9,108(r31)
	ctx.current_instruction = 0x881139F4;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// ori r8,r11,12850
	ctx.r8.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88113a0c
	if (!ctx.cr6.eq) goto loc_88113A0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r31)
	ctx.current_instruction = 0x88113A08;
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_88113A0C:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,8200
	ctx.r7.s64 = ctx.r11.s64 + 8200;
	// addi r4,r8,9016
	ctx.r4.s64 = ctx.r8.s64 + 9016;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113A20:
	// lhz r11,14(r27)
	ctx.current_instruction = 0x88113A20;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x88113a40
	if (!ctx.cr6.eq) goto loc_88113A40;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,11712
	ctx.r7.s64 = ctx.r11.s64 + 11712;
	// addi r4,r8,11120
	ctx.r4.s64 = ctx.r8.s64 + 11120;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113A40:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x88113a5c
	if (!ctx.cr6.eq) goto loc_88113A5C;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,10632
	ctx.r7.s64 = ctx.r11.s64 + 10632;
	// addi r4,r8,11120
	ctx.r4.s64 = ctx.r8.s64 + 11120;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113A5C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x88113a78
	if (!ctx.cr6.eq) goto loc_88113A78;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,12160
	ctx.r7.s64 = ctx.r11.s64 + 12160;
	// addi r4,r8,12728
	ctx.r4.s64 = ctx.r8.s64 + 12728;
	// b 0x88113a90
	goto loc_88113A90;
loc_88113A78:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x88113a98
	if (!ctx.cr6.eq) goto loc_88113A98;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// addi r7,r11,13632
	ctx.r7.s64 = ctx.r11.s64 + 13632;
	// addi r4,r8,13928
	ctx.r4.s64 = ctx.r8.s64 + 13928;
loc_88113A90:
	// stw r7,76(r31)
	ctx.current_instruction = 0x88113A90;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stw r4,80(r31)
	ctx.current_instruction = 0x88113A94;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
loc_88113A98:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x88113A98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// stw r11,92(r31)
	ctx.current_instruction = 0x88113A9C;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r8,4(r27)
	ctx.current_instruction = 0x88113AA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,88(r31)
	ctx.current_instruction = 0x88113AA8;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// stw r9,68(r31)
	ctx.current_instruction = 0x88113AB0;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r9,72(r31)
	ctx.current_instruction = 0x88113AB4;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// bne cr6,0x88113ae4
	if (!ctx.cr6.eq) goto loc_88113AE4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88113ae4
	if (!ctx.cr6.eq) goto loc_88113AE4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,20(r27)
	ctx.current_instruction = 0x88113ACC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x880547a0
	ctx.lr = 0x88113AD8;
	sub_880547A0(ctx, base);
loc_88113AD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88113AE4:
	// lwz r28,136(r31)
	ctx.current_instruction = 0x88113AE4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// lis r8,12849
	ctx.r8.s64 = 842072064;
	// lis r4,22101
	ctx.r4.s64 = 1448411136;
	// lis r3,12338
	ctx.r3.s64 = 808583168;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// ori r8,r8,22105
	ctx.r8.u64 = ctx.r8.u64 | 22105;
	// ori r30,r4,22857
	ctx.r30.u64 = ctx.r4.u64 | 22857;
	// ori r29,r3,13385
	ctx.r29.u64 = ctx.r3.u64 | 13385;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88113b68
	if (!ctx.cr6.eq) goto loc_88113B68;
	// lwz r11,92(r31)
	ctx.current_instruction = 0x88113B14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x88113b68
	if (!ctx.cr6.eq) goto loc_88113B68;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88113b40
	if (!ctx.cr6.eq) goto loc_88113B40;
	// lhz r11,14(r27)
	ctx.current_instruction = 0x88113B28;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x88113b60
	if (!ctx.cr6.lt) goto loc_88113B60;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x88113b60
	if (ctx.cr6.eq) goto loc_88113B60;
	// b 0x88113b68
	goto loc_88113B68;
loc_88113B40:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88113b60
	if (ctx.cr6.eq) goto loc_88113B60;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x88113b60
	if (ctx.cr6.eq) goto loc_88113B60;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x88113b60
	if (ctx.cr6.eq) goto loc_88113B60;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88113b68
	if (!ctx.cr6.eq) goto loc_88113B68;
loc_88113B60:
	// stw r6,132(r31)
	ctx.current_instruction = 0x88113B60;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// stw r26,72(r31)
	ctx.current_instruction = 0x88113B64;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
loc_88113B68:
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x88113b8c
	if (!ctx.cr6.eq) goto loc_88113B8C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88113bf4
	if (!ctx.cr6.eq) goto loc_88113BF4;
	// lhz r11,14(r27)
	ctx.current_instruction = 0x88113B78;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x88113c14
	if (!ctx.cr6.lt) goto loc_88113C14;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x88113c14
	if (ctx.cr6.eq) goto loc_88113C14;
loc_88113B8C:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x88113B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88113bb8
	if (!ctx.cr6.eq) goto loc_88113BB8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x88113bb8
	if (!ctx.cr6.eq) goto loc_88113BB8;
	// lwz r11,76(r31)
	ctx.current_instruction = 0x88113BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,92(r31)
	ctx.current_instruction = 0x88113BAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88113BB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88113BB8:
	// lwz r11,72(r31)
	ctx.current_instruction = 0x88113BB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r31)
	ctx.current_instruction = 0x88113BC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x88113c30
	if (ctx.cr6.eq) goto loc_88113C30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x88113c3c
	if (!ctx.cr6.eq) goto loc_88113C3C;
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88113BD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,100(r31)
	ctx.current_instruction = 0x88113BDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88113BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88113BE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88113BF4:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x88113c14
	if (ctx.cr6.eq) goto loc_88113C14;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x88113c14
	if (ctx.cr6.eq) goto loc_88113C14;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x88113c14
	if (ctx.cr6.eq) goto loc_88113C14;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88113b8c
	if (!ctx.cr6.eq) goto loc_88113B8C;
loc_88113C14:
	// lwz r11,84(r31)
	ctx.current_instruction = 0x88113C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x88113c24
	if (!ctx.cr6.gt) goto loc_88113C24;
	// stw r26,68(r31)
	ctx.current_instruction = 0x88113C20;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
loc_88113C24:
	// stw r5,132(r31)
	ctx.current_instruction = 0x88113C24;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// stw r26,68(r31)
	ctx.current_instruction = 0x88113C28;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// b 0x88113bb8
	goto loc_88113BB8;
loc_88113C30:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x88113c3c
	if (!ctx.cr6.gt) goto loc_88113C3C;
	// stw r26,72(r31)
	ctx.current_instruction = 0x88113C38;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
loc_88113C3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88113C48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E480) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811E480;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811E480) {
			switch (rex_dispatch_address) {
				case 0x8811E4B8:
				case 0x8811E4C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811E480;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811E4B8: goto loc_8811E4B8;
		case 0x8811E4C8: goto loc_8811E4C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8811E484;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8811E488;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8811E48C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8811E490;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r4)
	ctx.current_instruction = 0x8811E494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r31,r4,72
	ctx.r31.s64 = ctx.r4.s64 + 72;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e4c8
	if (ctx.cr6.eq) goto loc_8811E4C8;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,224(r6)
	ctx.current_instruction = 0x8811E4AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811E4B8;
	sub_880CB318(ctx, base);
loc_8811E4B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r30)
	ctx.current_instruction = 0x8811E4C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E4C8;
	sub_880CB318(ctx, base);
loc_8811E4C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8811E4D0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8811E4D8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8811E4DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8811F020) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811F020;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811F020) {
			switch (rex_dispatch_address) {
				case 0x8811F028:
				case 0x8811F0AC:
				case 0x8811F0C8:
				case 0x8811F174:
				case 0x8811F1E8:
				case 0x8811F254:
				case 0x8811F2AC:
				case 0x8811F324:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811F020;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811F028: goto loc_8811F028;
		case 0x8811F0AC: goto loc_8811F0AC;
		case 0x8811F0C8: goto loc_8811F0C8;
		case 0x8811F174: goto loc_8811F174;
		case 0x8811F1E8: goto loc_8811F1E8;
		case 0x8811F254: goto loc_8811F254;
		case 0x8811F2AC: goto loc_8811F2AC;
		case 0x8811F324: goto loc_8811F324;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8811F028;
	__savegprlr_25(ctx, base);
loc_8811F028:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8811F028;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,28(r3)
	ctx.current_instruction = 0x8811F02C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	ctx.current_instruction = 0x8811F03C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x8811F044;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r31,88(r1)
	ctx.current_instruction = 0x8811F04C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// beq cr6,0x8811f07c
	if (ctx.cr6.eq) goto loc_8811F07C;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x8811f07c
	if (ctx.cr6.gt) goto loc_8811F07C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8811f07c
	if (ctx.cr6.lt) goto loc_8811F07C;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x8811f07c
	if (ctx.cr6.gt) goto loc_8811F07C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8811f090
	if (!ctx.cr6.lt) goto loc_8811F090;
loc_8811F07C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8811F090:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8811f07c
	if (ctx.cr6.eq) goto loc_8811F07C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r28)
	ctx.current_instruction = 0x8811F09C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 148);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x8811F0AC;
	sub_880CB730(ctx, base);
loc_8811F0AC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f338
	if (ctx.cr6.lt) goto loc_8811F338;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r28)
	ctx.current_instruction = 0x8811F0BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880cb730
	ctx.lr = 0x8811F0C8;
	sub_880CB730(ctx, base);
loc_8811F0C8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f338
	if (ctx.cr6.lt) goto loc_8811F338;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F0D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811F0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8811f20c
	if (ctx.cr6.eq) goto loc_8811F20C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811f20c
	if (ctx.cr6.eq) goto loc_8811F20C;
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811F0EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r9)
	ctx.current_instruction = 0x8811F0F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8811f20c
	if (ctx.cr6.eq) goto loc_8811F20C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8811f20c
	if (ctx.cr6.eq) goto loc_8811F20C;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8811f178
	if (!ctx.cr6.eq) goto loc_8811F178;
	// lwz r10,76(r9)
	ctx.current_instruction = 0x8811F110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811f178
	if (ctx.cr6.eq) goto loc_8811F178;
	// stw r31,4(r9)
	ctx.current_instruction = 0x8811F11C;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811F124;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,8(r11)
	ctx.current_instruction = 0x8811F12C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811F130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r10)
	ctx.current_instruction = 0x8811F134;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811F138;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r9)
	ctx.current_instruction = 0x8811F13C;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x8811F140;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r8)
	ctx.current_instruction = 0x8811F144;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8811F148;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r7)
	ctx.current_instruction = 0x8811F14C;
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r31.u8);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x8811F150;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r6)
	ctx.current_instruction = 0x8811F154;
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x8811F158;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r4)
	ctx.current_instruction = 0x8811F15C;
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811F160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,76(r11)
	ctx.current_instruction = 0x8811F164;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811F168;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r10)
	ctx.current_instruction = 0x8811F16C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8811eaf8
	ctx.lr = 0x8811F174;
	sub_8811EAF8(ctx, base);
loc_8811F174:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8811F178:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811F178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8811f1ec
	if (!ctx.cr6.eq) goto loc_8811F1EC;
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8811F184;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811f1ec
	if (ctx.cr6.eq) goto loc_8811F1EC;
	// stw r31,4(r11)
	ctx.current_instruction = 0x8811F190;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F19C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,8(r11)
	ctx.current_instruction = 0x8811F1A0;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811F1A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r10)
	ctx.current_instruction = 0x8811F1A8;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811F1AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,20(r9)
	ctx.current_instruction = 0x8811F1B0;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r31.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811F1B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r8)
	ctx.current_instruction = 0x8811F1B8;
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811F1BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r7)
	ctx.current_instruction = 0x8811F1C0;
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r31.u8);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811F1C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r6)
	ctx.current_instruction = 0x8811F1C8;
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8811F1CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,40(r4)
	ctx.current_instruction = 0x8811F1D0;
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F1D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,76(r11)
	ctx.current_instruction = 0x8811F1D8;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811F1DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,0(r10)
	ctx.current_instruction = 0x8811F1E0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8811eaf8
	ctx.lr = 0x8811F1E8;
	sub_8811EAF8(ctx, base);
loc_8811F1E8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F1E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8811F1EC:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811F1EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8811f330
	if (ctx.cr6.gt) goto loc_8811F330;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8811f220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8811F220;
	// bdzf 4*cr6+eq,0x8811f20c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8811F20C;
	// bne cr6,0x8811f23c
	if (!ctx.cr6.eq) goto loc_8811F23C;
loc_8811F20C:
	// lis r29,-32688
	ctx.r29.s64 = -2142240768;
	// ori r29,r29,160
	ctx.r29.u64 = ctx.r29.u64 | 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8811F220:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8811F224;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811F228;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,28(r9)
	ctx.current_instruction = 0x8811F22C;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r30.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811F230;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,32(r8)
	ctx.current_instruction = 0x8811F234;
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r26.u8);
	// b 0x8811f2ac
	goto loc_8811F2AC;
loc_8811F23C:
	// stw r31,4(r11)
	ctx.current_instruction = 0x8811F23C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,148(r28)
	ctx.current_instruction = 0x8811F244;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 148);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,32(r11)
	ctx.current_instruction = 0x8811F24C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// bl 0x880cb730
	ctx.lr = 0x8811F254;
	sub_880CB730(ctx, base);
loc_8811F254:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811f338
	if (ctx.cr6.lt) goto loc_8811F338;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x8811F260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8811F270;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x8811F274;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,28(r9)
	ctx.current_instruction = 0x8811F278;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r30.u32);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x8811F27C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r8)
	ctx.current_instruction = 0x8811F280;
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r26.u8);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811F284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r25,32(r11)
	ctx.current_instruction = 0x8811F288;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// stw r31,28(r11)
	ctx.current_instruction = 0x8811F28C;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811F290;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r7)
	ctx.current_instruction = 0x8811F294;
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r31.u8);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811F298;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r6)
	ctx.current_instruction = 0x8811F29C;
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8811F2A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,0(r4)
	ctx.current_instruction = 0x8811F2A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x8811eaf8
	ctx.lr = 0x8811F2AC;
	sub_8811EAF8(ctx, base);
loc_8811F2AC:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811F2AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811F2B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8811f330
	if (ctx.cr6.gt) goto loc_8811F330;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8811f20c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8811F20C;
	// bdzf 4*cr6+eq,0x8811f2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8811F2F4;
	// bne cr6,0x8811f20c
	if (!ctx.cr6.eq) goto loc_8811F20C;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8811F2D8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811F2DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r9)
	ctx.current_instruction = 0x8811F2E0;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r30.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x8811F2E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r25,32(r8)
	ctx.current_instruction = 0x8811F2E8;
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8811F2F4:
	// stw r30,4(r11)
	ctx.current_instruction = 0x8811F2F4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811F300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	ctx.current_instruction = 0x8811F304;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811F308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r10)
	ctx.current_instruction = 0x8811F30C;
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r31.u8);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811F310;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r9)
	ctx.current_instruction = 0x8811F314;
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x8811F318;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r8)
	ctx.current_instruction = 0x8811F31C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bl 0x8811eaf8
	ctx.lr = 0x8811F324;
	sub_8811EAF8(ctx, base);
loc_8811F324:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8811F330:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_8811F338:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125578) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88125578);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125578;
	ctx.current_instruction = 0x88125578;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	ctx.current_instruction = 0x8812557C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	ctx.current_instruction = 0x88125580;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.current_instruction = 0x88125584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88125588;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8812558C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881255e0
	if (ctx.cr6.eq) goto loc_881255E0;
loc_88125598:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x88125598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.current_instruction = 0x8812559C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x881255c0
	if (ctx.cr6.gt) goto loc_881255C0;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x881255A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x881255d4
	if (ctx.cr6.lt) goto loc_881255D4;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x881255e0
	if (ctx.cr6.lt) goto loc_881255E0;
loc_881255C0:
	// lwz r9,4(r9)
	ctx.current_instruction = 0x881255C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88125598
	if (!ctx.cr6.eq) goto loc_88125598;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881255D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	ctx.current_instruction = 0x881255D8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	ctx.current_instruction = 0x881255DC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_881255E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881264E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881264E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881264E8) {
			switch (rex_dispatch_address) {
				case 0x881264F0:
				case 0x88126550:
				case 0x88126564:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881264E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881264F0: goto loc_881264F0;
		case 0x88126550: goto loc_88126550;
		case 0x88126564: goto loc_88126564;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881264F0;
	__savegprlr_24(ctx, base);
loc_881264F0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881264F0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x881264F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88126594
	if (ctx.cr6.eq) goto loc_88126594;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r25,4
	ctx.r25.s64 = 4;
loc_88126518:
	// mulli r11,r28,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(1776));
	// stw r24,80(r1)
	ctx.current_instruction = 0x8812651C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// sth r25,182(r29)
	ctx.current_instruction = 0x88126528;
	REX_STORE_U16(ctx.r29.u32 + 182, ctx.r25.u16);
loc_8812652C:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881410a0
	ctx.lr = 0x88126550;
	sub_881410A0(ctx, base);
loc_88126550:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88126594
	if (ctx.cr6.lt) goto loc_88126594;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88141d38
	ctx.lr = 0x88126564;
	sub_88141D38(ctx, base);
loc_88126564:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88126594
	if (ctx.cr6.lt) goto loc_88126594;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8812652c
	if (ctx.cr6.lt) goto loc_8812652C;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lhz r10,34(r27)
	ctx.current_instruction = 0x88126580;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88126518
	if (ctx.cr6.lt) goto loc_88126518;
loc_88126594:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88128B48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88128B48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88128B48) {
			switch (rex_dispatch_address) {
				case 0x88128B50:
				case 0x88128B9C:
				case 0x88128BAC:
				case 0x88128BBC:
				case 0x88128BCC:
				case 0x88128BDC:
				case 0x88128BEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88128B48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88128B50: goto loc_88128B50;
		case 0x88128B9C: goto loc_88128B9C;
		case 0x88128BAC: goto loc_88128BAC;
		case 0x88128BBC: goto loc_88128BBC;
		case 0x88128BCC: goto loc_88128BCC;
		case 0x88128BDC: goto loc_88128BDC;
		case 0x88128BEC: goto loc_88128BEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x88128B50;
	__savegprlr_24(ctx, base);
loc_88128B50:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88128B50;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x88128B54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,356(r1)
	ctx.current_instruction = 0x88128B5C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	ctx.current_instruction = 0x88128B60;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lhz r28,342(r1)
	ctx.current_instruction = 0x88128B64;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 342);
	// lhz r27,334(r1)
	ctx.current_instruction = 0x88128B68;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 334);
	// lwz r26,324(r1)
	ctx.current_instruction = 0x88128B6C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,316(r1)
	ctx.current_instruction = 0x88128B70;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	ctx.current_instruction = 0x88128B74;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,140(r1)
	ctx.current_instruction = 0x88128B78;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x88128B7C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	ctx.current_instruction = 0x88128B80;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// sth r28,118(r1)
	ctx.current_instruction = 0x88128B84;
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r28.u16);
	// sth r27,110(r1)
	ctx.current_instruction = 0x88128B88;
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r27.u16);
	// stw r26,100(r1)
	ctx.current_instruction = 0x88128B8C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r25,92(r1)
	ctx.current_instruction = 0x88128B90;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r24,84(r1)
	ctx.current_instruction = 0x88128B94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x88126210
	ctx.lr = 0x88128B9C;
	sub_88126210(ctx, base);
loc_88128B9C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88128bec
	if (ctx.cr6.lt) goto loc_88128BEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881283b8
	ctx.lr = 0x88128BAC;
	sub_881283B8(ctx, base);
loc_88128BAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88128bec
	if (ctx.cr6.lt) goto loc_88128BEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88128a58
	ctx.lr = 0x88128BBC;
	sub_88128A58(ctx, base);
loc_88128BBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88128bec
	if (ctx.cr6.lt) goto loc_88128BEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881265a0
	ctx.lr = 0x88128BCC;
	sub_881265A0(ctx, base);
loc_88128BCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88128bec
	if (ctx.cr6.lt) goto loc_88128BEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88126b90
	ctx.lr = 0x88128BDC;
	sub_88126B90(ctx, base);
loc_88128BDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88128bec
	if (ctx.cr6.lt) goto loc_88128BEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88126be8
	ctx.lr = 0x88128BEC;
	sub_88126BE8(ctx, base);
loc_88128BEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8812BB00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812BB00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812BB00) {
			switch (rex_dispatch_address) {
				case 0x8812BB78:
				case 0x8812BBEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812BB00;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812BB78: goto loc_8812BB78;
		case 0x8812BBEC: goto loc_8812BBEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812BB04;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8812BB08;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8812BB0C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8812BB10;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x8812BB14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8812bbd0
	if (!ctx.cr6.eq) goto loc_8812BBD0;
	// lwz r11,40(r3)
	ctx.current_instruction = 0x8812BB28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x8812bbd0
	if (ctx.cr6.gt) goto loc_8812BBD0;
	// lwz r11,32(r3)
	ctx.current_instruction = 0x8812BB3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8812bc30
	if (!ctx.cr6.gt) goto loc_8812BC30;
loc_8812BB48:
	// lwz r11,40(r31)
	ctx.current_instruction = 0x8812BB48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x8812bc30
	if (ctx.cr6.gt) goto loc_8812BC30;
	// lwz r11,28(r31)
	ctx.current_instruction = 0x8812BB5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,84(r31)
	ctx.current_instruction = 0x8812BB60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.current_instruction = 0x8812BB68;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	ctx.current_instruction = 0x8812BB6C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812BB78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812BB78:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,36(r31)
	ctx.current_instruction = 0x8812BB7C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// subfic r6,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// slw r5,r8,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r4,40(r31)
	ctx.current_instruction = 0x8812BB88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8812BB8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// slw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// subf r10,r30,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r30.u64;
	// srw r7,r9,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r3.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r6,32(r31)
	ctx.current_instruction = 0x8812BBB0;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r5,36(r31)
	ctx.current_instruction = 0x8812BBB8;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,40(r31)
	ctx.current_instruction = 0x8812BBC0;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bgt cr6,0x8812bb48
	if (ctx.cr6.gt) goto loc_8812BB48;
	// b 0x8812bc30
	goto loc_8812BC30;
loc_8812BBD0:
	// lwz r11,28(r31)
	ctx.current_instruction = 0x8812BBD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,84(r31)
	ctx.current_instruction = 0x8812BBD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.current_instruction = 0x8812BBDC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	ctx.current_instruction = 0x8812BBE0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812BBEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812BBEC:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r7,44(r31)
	ctx.current_instruction = 0x8812BBF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// slw r5,r8,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r4,48(r31)
	ctx.current_instruction = 0x8812BBFC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// lwz r10,32(r31)
	ctx.current_instruction = 0x8812BC04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// subfic r6,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// slw r9,r7,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// subf r11,r30,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r30.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r7,32(r31)
	ctx.current_instruction = 0x8812BC24;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,44(r31)
	ctx.current_instruction = 0x8812BC28;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r5,48(r31)
	ctx.current_instruction = 0x8812BC2C;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_8812BC30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8812BC34;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8812BC3C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8812BC40;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88132EE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88132EE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88132EE8) {
			switch (rex_dispatch_address) {
				case 0x88132EF0:
				case 0x88132F5C:
				case 0x88133000:
				case 0x881330CC:
				case 0x881331A8:
				case 0x881332B4:
				case 0x881332D0:
				case 0x8813341C:
				case 0x88133430:
				case 0x8813349C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88132EE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88132EF0: goto loc_88132EF0;
		case 0x88132F5C: goto loc_88132F5C;
		case 0x88133000: goto loc_88133000;
		case 0x881330CC: goto loc_881330CC;
		case 0x881331A8: goto loc_881331A8;
		case 0x881332B4: goto loc_881332B4;
		case 0x881332D0: goto loc_881332D0;
		case 0x8813341C: goto loc_8813341C;
		case 0x88133430: goto loc_88133430;
		case 0x8813349C: goto loc_8813349C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88132EF0;
	__savegprlr_18(ctx, base);
loc_88132EF0:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88132EF0;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.current_instruction = 0x88132EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x88132EFC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x88133674
	if (ctx.cr6.eq) goto loc_88133674;
	// li r20,3
	ctx.r20.s64 = 3;
	// li r18,6
	ctx.r18.s64 = 6;
	// li r21,7
	ctx.r21.s64 = 7;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r19,8
	ctx.r19.s64 = 8;
loc_88132F24:
	// lwz r11,36(r28)
	ctx.current_instruction = 0x88132F24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x88133654
	if (ctx.cr6.gt) goto loc_88133654;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88133654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133654;
	// bdzf 4*cr6+eq,0x88133654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133654;
	// bdzf 4*cr6+eq,0x88132f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88132F90;
	// bdzf 4*cr6+eq,0x88133654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133654;
	// bdzf 4*cr6+eq,0x88133654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133654;
	// bdzf 4*cr6+eq,0x88133134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88133134;
	// bne cr6,0x881334c4
	if (!ctx.cr6.eq) goto loc_881334C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88131478
	ctx.lr = 0x88132F5C;
	sub_88131478(ctx, base);
loc_88132F5C:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133674
	if (ctx.cr6.lt) goto loc_88133674;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x88132F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r20,36(r28)
	ctx.current_instruction = 0x88132F6C;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r20.u32);
	// sth r24,150(r28)
	ctx.current_instruction = 0x88132F70;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r24.u16);
	// stw r24,72(r28)
	ctx.current_instruction = 0x88132F74;
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r24.u32);
	// sth r24,148(r28)
	ctx.current_instruction = 0x88132F78;
	REX_STORE_U16(ctx.r28.u32 + 148, ctx.r24.u16);
	// sth r24,202(r11)
	ctx.current_instruction = 0x88132F7C;
	REX_STORE_U16(ctx.r11.u32 + 202, ctx.r24.u16);
	// stw r24,76(r28)
	ctx.current_instruction = 0x88132F80;
	REX_STORE_U32(ctx.r28.u32 + 76, ctx.r24.u32);
	// stw r24,200(r28)
	ctx.current_instruction = 0x88132F84;
	REX_STORE_U32(ctx.r28.u32 + 200, ctx.r24.u32);
	// stw r24,208(r28)
	ctx.current_instruction = 0x88132F88;
	REX_STORE_U32(ctx.r28.u32 + 208, ctx.r24.u32);
	// b 0x88133654
	goto loc_88133654;
loc_88132F90:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88132F90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88133078
	if (!ctx.cr6.eq) goto loc_88133078;
	// lwz r11,20(r28)
	ctx.current_instruction = 0x88132F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8813366c
	if (ctx.cr6.eq) goto loc_8813366C;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88132FA8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r28)
	ctx.current_instruction = 0x88132FAC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8813306c
	if (!ctx.cr6.lt) goto loc_8813306C;
loc_88132FC0:
	// lhz r11,150(r28)
	ctx.current_instruction = 0x88132FC0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// lwz r10,584(r31)
	ctx.current_instruction = 0x88132FC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88132FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.current_instruction = 0x88132FD4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.current_instruction = 0x88132FE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8813300c
	if (ctx.cr6.eq) goto loc_8813300C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88132948
	ctx.lr = 0x88133000;
	sub_88132948(ctx, base);
loc_88133000:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133674
	if (ctx.cr6.lt) goto loc_88133674;
loc_8813300C:
	// lwz r11,0(r28)
	ctx.current_instruction = 0x8813300C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,118(r30)
	ctx.current_instruction = 0x88133010;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r8,202(r11)
	ctx.current_instruction = 0x88133018;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 202);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8813366c
	if (ctx.cr6.gt) goto loc_8813366C;
	// stw r24,72(r28)
	ctx.current_instruction = 0x88133028;
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r24.u32);
	// sth r24,148(r28)
	ctx.current_instruction = 0x8813302C;
	REX_STORE_U16(ctx.r28.u32 + 148, ctx.r24.u16);
	// sth r24,202(r11)
	ctx.current_instruction = 0x88133030;
	REX_STORE_U16(ctx.r11.u32 + 202, ctx.r24.u16);
	// lhz r11,150(r28)
	ctx.current_instruction = 0x88133034;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r24,76(r28)
	ctx.current_instruction = 0x88133040;
	REX_STORE_U32(ctx.r28.u32 + 76, ctx.r24.u32);
	// stw r24,200(r28)
	ctx.current_instruction = 0x88133044;
	REX_STORE_U32(ctx.r28.u32 + 200, ctx.r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r24,208(r28)
	ctx.current_instruction = 0x8813304C;
	REX_STORE_U32(ctx.r28.u32 + 208, ctx.r24.u32);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r28)
	ctx.current_instruction = 0x88133054;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r9.u16);
	// lhz r7,580(r31)
	ctx.current_instruction = 0x88133058;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88132fc0
	if (ctx.cr6.lt) goto loc_88132FC0;
loc_8813306C:
	// stw r18,36(r28)
	ctx.current_instruction = 0x8813306C;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r18.u32);
	// sth r24,150(r28)
	ctx.current_instruction = 0x88133070;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r24.u16);
	// b 0x88133654
	goto loc_88133654;
loc_88133078:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813312c
	if (!ctx.cr6.eq) goto loc_8813312C;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88133080;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,150(r28)
	ctx.current_instruction = 0x88133084;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88133128
	if (!ctx.cr6.lt) goto loc_88133128;
loc_88133098:
	// lhz r11,150(r28)
	ctx.current_instruction = 0x88133098;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,584(r31)
	ctx.current_instruction = 0x881330A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x881330AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.current_instruction = 0x881330B4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x88132628
	ctx.lr = 0x881330CC;
	sub_88132628(ctx, base);
loc_881330CC:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88133674
	if (ctx.cr6.lt) goto loc_88133674;
	// lwz r11,0(r28)
	ctx.current_instruction = 0x881330D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,118(r30)
	ctx.current_instruction = 0x881330DC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r8,202(r11)
	ctx.current_instruction = 0x881330E4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 202);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8813366c
	if (ctx.cr6.gt) goto loc_8813366C;
	// stw r24,72(r28)
	ctx.current_instruction = 0x881330F4;
	REX_STORE_U32(ctx.r28.u32 + 72, ctx.r24.u32);
	// sth r24,202(r11)
	ctx.current_instruction = 0x881330F8;
	REX_STORE_U16(ctx.r11.u32 + 202, ctx.r24.u16);
	// lhz r11,150(r28)
	ctx.current_instruction = 0x881330FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r28)
	ctx.current_instruction = 0x88133110;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r31)
	ctx.current_instruction = 0x88133114;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88133098
	if (ctx.cr6.lt) goto loc_88133098;
loc_88133128:
	// stw r21,36(r28)
	ctx.current_instruction = 0x88133128;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r21.u32);
loc_8813312C:
	// sth r24,150(r28)
	ctx.current_instruction = 0x8813312C;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r24.u16);
	// b 0x88133654
	goto loc_88133654;
loc_88133134:
	// sth r24,150(r28)
	ctx.current_instruction = 0x88133134;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r24.u16);
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88133138;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881331d8
	if (!ctx.cr6.gt) goto loc_881331D8;
loc_88133148:
	// lhz r11,150(r28)
	ctx.current_instruction = 0x88133148;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// lwz r10,584(r31)
	ctx.current_instruction = 0x8813314C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88133154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.current_instruction = 0x8813315C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.current_instruction = 0x8813316C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x881331ac
	if (!ctx.cr6.eq) goto loc_881331AC;
	// lwz r10,424(r30)
	ctx.current_instruction = 0x88133178;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,118(r30)
	ctx.current_instruction = 0x88133180;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// lwz r11,56(r30)
	ctx.current_instruction = 0x88133184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r7,12(r10)
	ctx.current_instruction = 0x8813318C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,0(r7)
	ctx.current_instruction = 0x88133194;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x88052d90
	ctx.lr = 0x881331A8;
	sub_88052D90(ctx, base);
loc_881331A8:
	// stw r24,48(r30)
	ctx.current_instruction = 0x881331A8;
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r24.u32);
loc_881331AC:
	// lhz r11,150(r28)
	ctx.current_instruction = 0x881331AC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r28)
	ctx.current_instruction = 0x881331C0;
	REX_STORE_U16(ctx.r28.u32 + 150, ctx.r9.u16);
	// lhz r7,580(r31)
	ctx.current_instruction = 0x881331C4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88133148
	if (ctx.cr6.lt) goto loc_88133148;
loc_881331D8:
	// lwz r10,656(r31)
	ctx.current_instruction = 0x881331D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 656);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88133338
	if (!ctx.cr6.eq) goto loc_88133338;
	// lwz r8,584(r31)
	ctx.current_instruction = 0x881331E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.current_instruction = 0x881331E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhz r10,34(r31)
	ctx.current_instruction = 0x881331EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r30,364(r31)
	ctx.current_instruction = 0x881331F0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r27,368(r31)
	ctx.current_instruction = 0x881331F4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lhz r7,0(r8)
	ctx.current_instruction = 0x881331FC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r8,r6,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r4,118(r5)
	ctx.current_instruction = 0x8813320C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r25,r4
	ctx.r25.s64 = ctx.r4.s16;
	// bne cr6,0x8813366c
	if (!ctx.cr6.eq) goto loc_8813366C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x88133338
	if (!ctx.cr6.gt) goto loc_88133338;
	// addi r26,r31,664
	ctx.r26.s64 = ctx.r31.s64 + 664;
loc_88133228:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88133294
	if (!ctx.cr6.gt) goto loc_88133294;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_88133234:
	// lwz r11,320(r31)
	ctx.current_instruction = 0x88133234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,424(r11)
	ctx.current_instruction = 0x88133244;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,56(r11)
	ctx.current_instruction = 0x88133248;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r6,12(r8)
	ctx.current_instruction = 0x8813324C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r5,0(r6)
	ctx.current_instruction = 0x88133250;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r7
	ctx.current_instruction = 0x88133260;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stwx r8,r10,r30
	ctx.current_instruction = 0x88133264;
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.current_instruction = 0x88133268;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8813327c
	if (!ctx.cr6.eq) goto loc_8813327C;
	// stwx r24,r10,r27
	ctx.current_instruction = 0x88133274;
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r24.u32);
	// b 0x88133280
	goto loc_88133280;
loc_8813327C:
	// stwx r22,r10,r27
	ctx.current_instruction = 0x8813327C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r22.u32);
loc_88133280:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88133284;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88133234
	if (ctx.cr6.lt) goto loc_88133234;
loc_88133294:
	// lwz r11,500(r31)
	ctx.current_instruction = 0x88133294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 500);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881332B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881332B4:
	// lwz r10,504(r31)
	ctx.current_instruction = 0x881332B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 504);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881332D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881332D0:
	// lhz r10,34(r31)
	ctx.current_instruction = 0x881332D0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8813332c
	if (!ctx.cr6.gt) goto loc_8813332C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_881332E4:
	// lwz r8,320(r31)
	ctx.current_instruction = 0x881332E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// lwzx r7,r9,r30
	ctx.current_instruction = 0x881332EC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r4,424(r10)
	ctx.current_instruction = 0x881332FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,56(r10)
	ctx.current_instruction = 0x88133304;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,12(r4)
	ctx.current_instruction = 0x88133308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r8,0(r10)
	ctx.current_instruction = 0x8813330C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r3
	ctx.current_instruction = 0x8813331C;
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r10,34(r31)
	ctx.current_instruction = 0x88133320;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881332e4
	if (ctx.cr6.lt) goto loc_881332E4;
loc_8813332C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x88133228
	if (ctx.cr6.lt) goto loc_88133228;
loc_88133338:
	// lwz r11,184(r31)
	ctx.current_instruction = 0x88133338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881333f4
	if (!ctx.cr6.eq) goto loc_881333F4;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88133344;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x881333f4
	if (!ctx.cr6.eq) goto loc_881333F4;
	// lwz r11,584(r31)
	ctx.current_instruction = 0x88133350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x88133354;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x88133358;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x8813335C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// mulli r9,r6,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,424(r11)
	ctx.current_instruction = 0x88133378;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r4,424(r10)
	ctx.current_instruction = 0x8813337C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// lhz r3,118(r11)
	ctx.current_instruction = 0x88133380;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// lwz r7,56(r11)
	ctx.current_instruction = 0x88133384;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,56(r10)
	ctx.current_instruction = 0x88133388;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwz r11,12(r5)
	ctx.current_instruction = 0x88133390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,12(r4)
	ctx.current_instruction = 0x88133394;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r6,0(r11)
	ctx.current_instruction = 0x8813339C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,0(r8)
	ctx.current_instruction = 0x881333A0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x881333f4
	if (ctx.cr6.eq) goto loc_881333F4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_881333C8:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881333C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x881333CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stwx r6,r10,r11
	ctx.current_instruction = 0x881333D8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x881333E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,0(r11)
	ctx.current_instruction = 0x881333E8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881333c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881333C8;
loc_881333F4:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x881333F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// lhz r10,34(r31)
	ctx.current_instruction = 0x881333F8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8813366c
	if (!ctx.cr6.eq) goto loc_8813366C;
	// lwz r11,180(r31)
	ctx.current_instruction = 0x88133408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813341c
	if (!ctx.cr6.eq) goto loc_8813341C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812ab28
	ctx.lr = 0x8813341C;
	sub_8812AB28(ctx, base);
loc_8813341C:
	// lhz r11,208(r31)
	ctx.current_instruction = 0x8813341C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x88133430
	if (ctx.cr6.eq) goto loc_88133430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8812aa88
	ctx.lr = 0x88133430;
	sub_8812AA88(ctx, base);
loc_88133430:
	// lwz r11,120(r31)
	ctx.current_instruction = 0x88133430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881334bc
	if (!ctx.cr6.eq) goto loc_881334BC;
	// lwz r11,164(r31)
	ctx.current_instruction = 0x8813343C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881334bc
	if (!ctx.cr6.eq) goto loc_881334BC;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x88133448;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881334bc
	if (!ctx.cr6.gt) goto loc_881334BC;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_88133460:
	// lwz r8,584(r31)
	ctx.current_instruction = 0x88133460;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,320(r31)
	ctx.current_instruction = 0x88133468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhz r9,168(r31)
	ctx.current_instruction = 0x8813346C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 168);
	// lhzx r7,r11,r8
	ctx.current_instruction = 0x88133470;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,1456
	ctx.r7.s64 = ctx.r11.s64 + 1456;
	// addi r5,r11,1616
	ctx.r5.s64 = ctx.r11.s64 + 1616;
	// lwz r4,56(r11)
	ctx.current_instruction = 0x88133488;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r11,118(r11)
	ctx.current_instruction = 0x8813348C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// bl 0x8812ae68
	ctx.lr = 0x8813349C;
	sub_8812AE68(ctx, base);
loc_8813349C:
	// lhz r8,580(r31)
	ctx.current_instruction = 0x8813349C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88133460
	if (ctx.cr6.lt) goto loc_88133460;
loc_881334BC:
	// stw r21,36(r28)
	ctx.current_instruction = 0x881334BC;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r21.u32);
	// b 0x88133654
	goto loc_88133654;
loc_881334C4:
	// lbz r11,200(r31)
	ctx.current_instruction = 0x881334C4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8813356c
	if (ctx.cr6.eq) goto loc_8813356C;
	// lhz r11,580(r31)
	ctx.current_instruction = 0x881334D0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8813356c
	if (!ctx.cr6.gt) goto loc_8813356C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_881334E8:
	// lwz r9,584(r31)
	ctx.current_instruction = 0x881334E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.current_instruction = 0x881334EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r7,r11,r9
	ctx.current_instruction = 0x881334F0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,424(r11)
	ctx.current_instruction = 0x88133500;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,118(r11)
	ctx.current_instruction = 0x88133504;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// lwz r9,56(r11)
	ctx.current_instruction = 0x88133508;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r3,12(r5)
	ctx.current_instruction = 0x88133510;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r10,0(r3)
	ctx.current_instruction = 0x88133518;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x8813354c
	if (!ctx.cr6.gt) goto loc_8813354C;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88133534:
	// lbz r11,200(r31)
	ctx.current_instruction = 0x88133534;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x88133538;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// stwu r6,4(r10)
	ctx.current_instruction = 0x88133544;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88133534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88133534;
loc_8813354C:
	// lhz r10,580(r31)
	ctx.current_instruction = 0x8813354C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x881334e8
	if (ctx.cr6.lt) goto loc_881334E8;
loc_8813356C:
	// lhz r11,580(r31)
	ctx.current_instruction = 0x8813356C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881335e4
	if (!ctx.cr6.gt) goto loc_881335E4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_88133584:
	// lwz r10,584(r31)
	ctx.current_instruction = 0x88133584;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,320(r31)
	ctx.current_instruction = 0x8813358C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r9,r10
	ctx.current_instruction = 0x88133594;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,424(r10)
	ctx.current_instruction = 0x881335A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// lhz r10,114(r10)
	ctx.current_instruction = 0x881335AC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 114);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,12(r3)
	ctx.current_instruction = 0x881335B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r3)
	ctx.current_instruction = 0x881335BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r4,0(r7)
	ctx.current_instruction = 0x881335C0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhzx r3,r6,r5
	ctx.current_instruction = 0x881335C4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sth r8,0(r7)
	ctx.current_instruction = 0x881335D0;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.current_instruction = 0x881335D4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88133584
	if (ctx.cr6.lt) goto loc_88133584;
loc_881335E4:
	// lwz r11,176(r31)
	ctx.current_instruction = 0x881335E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88133650
	if (!ctx.cr6.eq) goto loc_88133650;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88133650
	if (!ctx.cr6.gt) goto loc_88133650;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_88133600:
	// lwz r10,584(r31)
	ctx.current_instruction = 0x88133600;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r6,320(r31)
	ctx.current_instruction = 0x88133608;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r9,356(r31)
	ctx.current_instruction = 0x88133610;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lhzx r4,r8,r10
	ctx.current_instruction = 0x88133614;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mulli r7,r3,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1776));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,118(r7)
	ctx.current_instruction = 0x8813362C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 118);
	// lwzx r6,r10,r9
	ctx.current_instruction = 0x88133630;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r4,r10,r9
	ctx.current_instruction = 0x8813363C;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lhz r3,580(r31)
	ctx.current_instruction = 0x88133640;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88133600
	if (ctx.cr6.lt) goto loc_88133600;
loc_88133650:
	// stw r19,36(r28)
	ctx.current_instruction = 0x88133650;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r19.u32);
loc_88133654:
	// lwz r11,36(r28)
	ctx.current_instruction = 0x88133654;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x88132f24
	if (!ctx.cr6.eq) goto loc_88132F24;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8813366C:
	// lis r23,-32764
	ctx.r23.s64 = -2147221504;
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
loc_88133674:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88144E20) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88144E20;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88144E20) {
			switch (rex_dispatch_address) {
				case 0x88144E28:
				case 0x88144E48:
				case 0x88144E60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88144E20;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88144E28: goto loc_88144E28;
		case 0x88144E48: goto loc_88144E48;
		case 0x88144E60: goto loc_88144E60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88144E28;
	__savegprlr_29(ctx, base);
loc_88144E28:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88144E28;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x88144cb8
	ctx.lr = 0x88144E48;
	sub_88144CB8(ctx, base);
loc_88144E48:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88144960
	ctx.lr = 0x88144E60;
	sub_88144960(ctx, base);
loc_88144E60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881465D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881465D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881465D8) {
			switch (rex_dispatch_address) {
				case 0x881465E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881465D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881465E0: goto loc_881465E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881465E0;
	__savegprlr_18(ctx, base);
loc_881465E0:
	// lhz r11,110(r3)
	ctx.current_instruction = 0x881465E0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x881465EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// slw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f0,6708(r7)
	ctx.current_instruction = 0x88146604;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,-192(r1)
	ctx.current_instruction = 0x8814660C;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r11.u64);
	// lfd f13,-192(r1)
	ctx.current_instruction = 0x88146610;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,-144(r1)
	ctx.current_instruction = 0x88146628;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	ctx.current_instruction = 0x8814662C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	ctx.current_instruction = 0x88146630;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	ctx.current_instruction = 0x88146634;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// beq cr6,0x881468e4
	if (ctx.cr6.eq) goto loc_881468E4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x881466c0
	if (ctx.cr6.eq) goto loc_881466C0;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x88146b34
	if (!ctx.cr6.gt) goto loc_88146B34;
	// li r4,0
	ctx.r4.s64 = 0;
loc_88146654:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881466a4
	if (!ctx.cr6.gt) goto loc_881466A4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88146670:
	// lwz r9,320(r3)
	ctx.current_instruction = 0x88146670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.current_instruction = 0x88146688;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.current_instruction = 0x8814668C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ctx.current_instruction = 0x88146694;
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x88146698;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88146670
	if (ctx.cr6.lt) goto loc_88146670;
loc_881466A4:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88146654
	if (ctx.cr6.lt) goto loc_88146654;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_881466C0:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r9,320(r3)
	ctx.current_instruction = 0x881466C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r5,r11,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r10,60(r9)
	ctx.current_instruction = 0x881466DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// lwz r9,1836(r9)
	ctx.current_instruction = 0x881466E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subf r4,r27,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsh r26,r4
	ctx.r26.s64 = ctx.r4.s16;
	// beq cr6,0x88146860
	if (ctx.cr6.eq) goto loc_88146860;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x88146860
	if (!ctx.cr6.gt) goto loc_88146860;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r30,48
	ctx.r30.s64 = 48;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8814671C:
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// addi r25,r11,7
	ctx.r25.s64 = ctx.r11.s64 + 7;
	// vor128 v62,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r23,r4,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v61,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v60,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,-192
	ctx.r21.s64 = ctx.r1.s64 + -192;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lfsx f10,r23,r10
	ctx.current_instruction = 0x88146748;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r11,6
	ctx.r31.s64 = ctx.r11.s64 + 6;
	// lfsx f6,r23,r9
	ctx.current_instruction = 0x88146750;
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r23,r11,3
	ctx.r23.s64 = ctx.r11.s64 + 3;
	// lfsx f8,r25,r10
	ctx.current_instruction = 0x88146758;
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r25,r9
	ctx.current_instruction = 0x88146760;
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r25,r23,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r10
	ctx.current_instruction = 0x88146768;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r1,-192
	ctx.r23.s64 = ctx.r1.s64 + -192;
	// lfsx f12,r6,r9
	ctx.current_instruction = 0x88146770;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stfs f13,-192(r1)
	ctx.current_instruction = 0x88146778;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,-188(r1)
	ctx.current_instruction = 0x88146780;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfsx f11,r24,r10
	ctx.current_instruction = 0x88146788;
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r22,r1,-144
	ctx.r22.s64 = ctx.r1.s64 + -144;
	// lfsx f7,r24,r9
	ctx.current_instruction = 0x88146790;
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// lfs f3,4(r5)
	ctx.current_instruction = 0x88146798;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r31,r10
	ctx.current_instruction = 0x881467A4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// stfs f11,-160(r1)
	ctx.current_instruction = 0x881467AC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// lfsx f5,r31,r9
	ctx.current_instruction = 0x881467B0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r1,-176
	ctx.r20.s64 = ctx.r1.s64 + -176;
	// lfs f2,4(r4)
	ctx.current_instruction = 0x881467B8;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r18,r1,-144
	ctx.r18.s64 = ctx.r1.s64 + -144;
	// lfsx f13,r25,r10
	ctx.current_instruction = 0x881467C0;
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r1,-160
	ctx.r19.s64 = ctx.r1.s64 + -160;
	// lfsx f1,r24,r10
	ctx.current_instruction = 0x881467C8;
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lfsx f12,r24,r9
	ctx.current_instruction = 0x881467D0;
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r25,r9
	ctx.current_instruction = 0x881467D4;
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// stfs f9,-144(r1)
	ctx.current_instruction = 0x881467DC;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f8,-136(r1)
	ctx.current_instruction = 0x881467E0;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stfs f5,-140(r1)
	ctx.current_instruction = 0x881467E8;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// stfs f4,-132(r1)
	ctx.current_instruction = 0x881467F0;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f3,-184(r1)
	ctx.current_instruction = 0x881467F4;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// stfs f2,-180(r1)
	ctx.current_instruction = 0x881467F8;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f1,-176(r1)
	ctx.current_instruction = 0x881467FC;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f13,-168(r1)
	ctx.current_instruction = 0x88146800;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f12,-172(r1)
	ctx.current_instruction = 0x88146804;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f11,-164(r1)
	ctx.current_instruction = 0x88146808;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// lvx128 v9,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,-152(r1)
	ctx.current_instruction = 0x88146818;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f7,-156(r1)
	ctx.current_instruction = 0x8814681C;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f6,-148(r1)
	ctx.current_instruction = 0x88146820;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// lvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v61,v10,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v61.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddcfp128 v62,v11,v62,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v62.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v61,r8,r29
	ea = (ctx.r8.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v61,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v60,v9,v60,v0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v60.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v62,r8,r28
	ea = (ctx.r8.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r8,r30
	ea = (ctx.r8.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v62,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x8814671c
	if (ctx.cr6.lt) goto loc_8814671C;
loc_88146860:
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88146b34
	if (!ctx.cr6.lt) goto loc_88146B34;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x88146874;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
loc_88146878:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881468c8
	if (!ctx.cr6.gt) goto loc_881468C8;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88146894:
	// lwz r9,320(r3)
	ctx.current_instruction = 0x88146894;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.current_instruction = 0x881468AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.current_instruction = 0x881468B0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ctx.current_instruction = 0x881468B8;
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x881468BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88146894
	if (ctx.cr6.lt) goto loc_88146894;
loc_881468C8:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88146878
	if (ctx.cr6.lt) goto loc_88146878;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_881468E4:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r10,320(r3)
	ctx.current_instruction = 0x881468E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r6,r11,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r10,60(r10)
	ctx.current_instruction = 0x88146900;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// beq cr6,0x88146ab8
	if (ctx.cr6.eq) goto loc_88146AB8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88146ab8
	if (!ctx.cr6.gt) goto loc_88146AB8;
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r30,48
	ctx.r30.s64 = 48;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88146938:
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,-192
	ctx.r27.s64 = ctx.r1.s64 + -192;
	// addi r26,r11,6
	ctx.r26.s64 = ctx.r11.s64 + 6;
	// lfsx f11,r4,r10
	ctx.current_instruction = 0x8814695C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r11,7
	ctx.r25.s64 = ctx.r11.s64 + 7;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r9)
	ctx.current_instruction = 0x88146968;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	ctx.current_instruction = 0x8814696C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// lfsx f10,r31,r10
	ctx.current_instruction = 0x88146974;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,-192(r1)
	ctx.current_instruction = 0x8814697C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r25,r11,5
	ctx.r25.s64 = ctx.r11.s64 + 5;
	// stfs f12,-188(r1)
	ctx.current_instruction = 0x88146984;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stfs f11,-184(r1)
	ctx.current_instruction = 0x8814698C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r24,r1,-176
	ctx.r24.s64 = ctx.r1.s64 + -176;
	// stfs f10,-180(r1)
	ctx.current_instruction = 0x88146994;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v12,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f9,r4,r10
	ctx.current_instruction = 0x881469AC;
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r23,r11,11
	ctx.r23.s64 = ctx.r11.s64 + 11;
	// lfsx f7,r9,r10
	ctx.current_instruction = 0x881469B4;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// stvx128 v63,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f8,r31,r10
	ctx.current_instruction = 0x881469C4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// lfsx f6,r27,r10
	ctx.current_instruction = 0x881469CC;
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 9;
	// stfs f8,-164(r1)
	ctx.current_instruction = 0x881469D4;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f6,-172(r1)
	ctx.current_instruction = 0x881469DC;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f7,-176(r1)
	ctx.current_instruction = 0x881469E4;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// rlwinm r23,r22,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,-168(r1)
	ctx.current_instruction = 0x881469EC;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r25,r11,10
	ctx.r25.s64 = ctx.r11.s64 + 10;
	// lvx128 v12,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r8,r28
	ea = (ctx.r8.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r4,r10
	ctx.current_instruction = 0x88146A04;
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// lfsx f2,r26,r10
	ctx.current_instruction = 0x88146A0C;
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi r22,r1,-160
	ctx.r22.s64 = ctx.r1.s64 + -160;
	// lfsx f3,r23,r10
	ctx.current_instruction = 0x88146A14;
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r20,r11,14
	ctx.r20.s64 = ctx.r11.s64 + 14;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f5,r25,r10
	ctx.current_instruction = 0x88146A24;
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// stfs f5,-152(r1)
	ctx.current_instruction = 0x88146A2C;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f2,-156(r1)
	ctx.current_instruction = 0x88146A34;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// stfs f3,-160(r1)
	ctx.current_instruction = 0x88146A3C;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r24,r11,12
	ctx.r24.s64 = ctx.r11.s64 + 12;
	// stfs f4,-148(r1)
	ctx.current_instruction = 0x88146A44;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r21,r11,13
	ctx.r21.s64 = ctx.r11.s64 + 13;
	// lvx128 v12,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r19,r11,15
	ctx.r19.s64 = ctx.r11.s64 + 15;
	// stvx128 v63,r8,r29
	ea = (ctx.r8.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-144
	ctx.r27.s64 = ctx.r1.s64 + -144;
	// lfsx f1,r9,r10
	ctx.current_instruction = 0x88146A60;
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stvx128 v63,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r21,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r19,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// lfsx f13,r25,r10
	ctx.current_instruction = 0x88146A80;
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-140(r1)
	ctx.current_instruction = 0x88146A84;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f12,r26,r10
	ctx.current_instruction = 0x88146A8C;
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r4,r10
	ctx.current_instruction = 0x88146A90;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-144(r1)
	ctx.current_instruction = 0x88146A94;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f1,-136(r1)
	ctx.current_instruction = 0x88146A98;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f12,-132(r1)
	ctx.current_instruction = 0x88146A9C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lvx128 v12,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r8,r30
	ea = (ctx.r8.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x88146938
	if (ctx.cr6.lt) goto loc_88146938;
loc_88146AB8:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// add r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x88146b34
	if (!ctx.cr6.lt) goto loc_88146B34;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x88146ACC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
loc_88146AD0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88146b20
	if (!ctx.cr6.gt) goto loc_88146B20;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_88146AEC:
	// lwz r9,320(r3)
	ctx.current_instruction = 0x88146AEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.current_instruction = 0x88146B04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.current_instruction = 0x88146B08;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ctx.current_instruction = 0x88146B10;
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.current_instruction = 0x88146B14;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88146aec
	if (ctx.cr6.lt) goto loc_88146AEC;
loc_88146B20:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x88146ad0
	if (ctx.cr6.lt) goto loc_88146AD0;
loc_88146B34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881516E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881516E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881516E0) {
			switch (rex_dispatch_address) {
				case 0x881516E8:
				case 0x88151744:
				case 0x881517BC:
				case 0x8815181C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881516E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881516E8: goto loc_881516E8;
		case 0x88151744: goto loc_88151744;
		case 0x881517BC: goto loc_881517BC;
		case 0x8815181C: goto loc_8815181C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881516E8;
	__savegprlr_25(ctx, base);
loc_881516E8:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881516E8;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,24688(r3)
	ctx.current_instruction = 0x881516EC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,712(r29)
	ctx.current_instruction = 0x88151704;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881517c8
	if (ctx.cr6.eq) goto loc_881517C8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x881517bc
	if (ctx.cr6.lt) goto loc_881517BC;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x881517bc
	if (ctx.cr6.gt) goto loc_881517BC;
	// lwz r11,24708(r3)
	ctx.current_instruction = 0x88151720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,0(r11)
	ctx.current_instruction = 0x88151728;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x881517bc
	if (ctx.cr6.eq) goto loc_881517BC;
	// lwz r11,22272(r29)
	ctx.current_instruction = 0x88151730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 22272);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x881517bc
	if (!ctx.cr6.lt) goto loc_881517BC;
	// lwz r3,168(r29)
	ctx.current_instruction = 0x8815173C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 168);
	// bl 0x8815d4c8
	ctx.lr = 0x88151744;
	sub_8815D4C8(ctx, base);
loc_88151744:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,24708(r31)
	ctx.current_instruction = 0x88151748;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	ctx.current_instruction = 0x88151754;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x881517bc
	if (ctx.cr6.eq) goto loc_881517BC;
	// lwz r10,24708(r31)
	ctx.current_instruction = 0x8815175C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24708);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r9,0(r10)
	ctx.current_instruction = 0x88151770;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	ctx.current_instruction = 0x88151774;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x88151778;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x881517bc
	if (ctx.cr6.eq) goto loc_881517BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881517bc
	if (ctx.cr6.eq) goto loc_881517BC;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// bne cr6,0x881517bc
	if (!ctx.cr6.eq) goto loc_881517BC;
	// lwz r10,22268(r29)
	ctx.current_instruction = 0x88151790;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 22268);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x881517bc
	if (ctx.cr6.gt) goto loc_881517BC;
	// subfic r10,r26,291
	ctx.xer.ca = ctx.r26.u32 <= 291;
	ctx.r10.u64 = static_cast<uint64_t>(291) - ctx.r26.u64;
	// stw r28,0(r3)
	ctx.current_instruction = 0x881517A0;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x881517A4;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,8(r3)
	ctx.current_instruction = 0x881517AC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x880547a0
	ctx.lr = 0x881517BC;
	sub_880547A0(ctx, base);
loc_881517BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881517C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,22036(r31)
	ctx.current_instruction = 0x881517CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22036);
	// slw r9,r11,r26
	ctx.r9.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r26.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881517bc
	if (ctx.cr6.eq) goto loc_881517BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,22032(r31)
	ctx.current_instruction = 0x881517E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22032);
	// stw r31,84(r1)
	ctx.current_instruction = 0x881517E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r9,r11,45384
	ctx.r9.u64 = ctx.r11.u64 | 45384;
	// stw r26,92(r1)
	ctx.current_instruction = 0x881517F4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r28,96(r1)
	ctx.current_instruction = 0x881517F8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r27,100(r1)
	ctx.current_instruction = 0x881517FC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r10,80(r1)
	ctx.current_instruction = 0x88151800;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r25,104(r1)
	ctx.current_instruction = 0x88151804;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// lwzx r8,r31,r9
	ctx.current_instruction = 0x88151808;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stw r8,88(r1)
	ctx.current_instruction = 0x8815180C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,192(r29)
	ctx.current_instruction = 0x88151810;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 192);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8815181C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8815181C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88156E80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88156E80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88156E80) {
			switch (rex_dispatch_address) {
				case 0x88156E88:
				case 0x88156EA8:
				case 0x88156EC0:
				case 0x88156ED8:
				case 0x88156EF0:
				case 0x88156F08:
				case 0x88156F24:
				case 0x88156F3C:
				case 0x88156F54:
				case 0x88156F78:
				case 0x88156F90:
				case 0x88156FA8:
				case 0x88156FC0:
				case 0x88156FD8:
				case 0x88156FFC:
				case 0x88157014:
				case 0x8815702C:
				case 0x88157044:
				case 0x88157054:
				case 0x88157060:
				case 0x8815706C:
				case 0x88157078:
				case 0x88157084:
				case 0x88157094:
				case 0x881570AC:
				case 0x881570E4:
				case 0x881570F0:
				case 0x88157104:
				case 0x88157114:
				case 0x88157128:
				case 0x88157140:
				case 0x88157154:
				case 0x88157164:
				case 0x88157178:
				case 0x88157190:
				case 0x881571A4:
				case 0x881571B4:
				case 0x881571C8:
				case 0x881571E8:
				case 0x88157200:
				case 0x88157218:
				case 0x88157230:
				case 0x88157248:
				case 0x88157260:
				case 0x88157278:
				case 0x88157290:
				case 0x881572C0:
				case 0x881572E4:
				case 0x88157308:
				case 0x88157328:
				case 0x88157374:
				case 0x8815738C:
				case 0x881573A4:
				case 0x881573BC:
				case 0x881573D4:
				case 0x881573EC:
				case 0x8815741C:
				case 0x88157434:
				case 0x88157450:
				case 0x88157468:
				case 0x88157480:
				case 0x88157498:
				case 0x881574B0:
				case 0x881574C8:
				case 0x881574E0:
				case 0x881574F8:
				case 0x88157510:
				case 0x88157528:
				case 0x8815754C:
				case 0x88157570:
				case 0x88157588:
				case 0x881575A0:
				case 0x881575B8:
				case 0x881575D0:
				case 0x881575E8:
				case 0x88157608:
				case 0x88157614:
				case 0x8815761C:
				case 0x88157628:
				case 0x88157634:
				case 0x88157640:
				case 0x8815764C:
				case 0x88157658:
				case 0x88157664:
				case 0x88157670:
				case 0x8815767C:
				case 0x88157688:
				case 0x88157694:
				case 0x881576A0:
				case 0x881576AC:
				case 0x881576B8:
				case 0x881576C4:
				case 0x881576D0:
				case 0x881576DC:
				case 0x881576E8:
				case 0x881576F4:
				case 0x88157700:
				case 0x8815770C:
				case 0x88157718:
				case 0x88157724:
				case 0x88157730:
				case 0x8815773C:
				case 0x88157748:
				case 0x88157754:
				case 0x88157760:
				case 0x8815776C:
				case 0x88157778:
				case 0x88157784:
				case 0x88157790:
				case 0x8815779C:
				case 0x881577A8:
				case 0x881577B4:
				case 0x881577C0:
				case 0x881577CC:
				case 0x881577E4:
				case 0x881577F0:
				case 0x881577FC:
				case 0x88157808:
				case 0x88157814:
				case 0x88157820:
				case 0x8815782C:
				case 0x88157838:
				case 0x88157844:
				case 0x88157850:
				case 0x8815785C:
				case 0x88157868:
				case 0x88157874:
				case 0x88157880:
				case 0x8815788C:
				case 0x88157898:
				case 0x881578A4:
				case 0x881578B0:
				case 0x881578BC:
				case 0x881578C8:
				case 0x881578D4:
				case 0x881578E0:
				case 0x881578EC:
				case 0x881578F8:
				case 0x88157904:
				case 0x88157910:
				case 0x8815791C:
				case 0x88157928:
				case 0x88157934:
				case 0x88157940:
				case 0x8815794C:
				case 0x88157958:
				case 0x88157964:
				case 0x88157970:
				case 0x8815797C:
				case 0x88157988:
				case 0x88157994:
				case 0x881579A0:
				case 0x881579AC:
				case 0x881579B8:
				case 0x881579C4:
				case 0x881579D0:
				case 0x881579DC:
				case 0x881579E8:
				case 0x881579F4:
				case 0x88157A00:
				case 0x88157A0C:
				case 0x88157A18:
				case 0x88157A24:
				case 0x88157A30:
				case 0x88157A3C:
				case 0x88157A48:
				case 0x88157A5C:
				case 0x88157A74:
				case 0x88157A80:
				case 0x88157A98:
				case 0x88157AB4:
				case 0x88157AD0:
				case 0x88157AEC:
				case 0x88157B08:
				case 0x88157B24:
				case 0x88157B40:
				case 0x88157B5C:
				case 0x88157B74:
				case 0x88157B8C:
				case 0x88157BA4:
				case 0x88157BBC:
				case 0x88157BD4:
				case 0x88157BEC:
				case 0x88157C04:
				case 0x88157C1C:
				case 0x88157C34:
				case 0x88157C58:
				case 0x88157C70:
				case 0x88157C88:
				case 0x88157CAC:
				case 0x88157CC4:
				case 0x88157CDC:
				case 0x88157CF0:
				case 0x88157D08:
				case 0x88157D20:
				case 0x88157D40:
				case 0x88157D60:
				case 0x88157D80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88156E80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88156E88: goto loc_88156E88;
		case 0x88156EA8: goto loc_88156EA8;
		case 0x88156EC0: goto loc_88156EC0;
		case 0x88156ED8: goto loc_88156ED8;
		case 0x88156EF0: goto loc_88156EF0;
		case 0x88156F08: goto loc_88156F08;
		case 0x88156F24: goto loc_88156F24;
		case 0x88156F3C: goto loc_88156F3C;
		case 0x88156F54: goto loc_88156F54;
		case 0x88156F78: goto loc_88156F78;
		case 0x88156F90: goto loc_88156F90;
		case 0x88156FA8: goto loc_88156FA8;
		case 0x88156FC0: goto loc_88156FC0;
		case 0x88156FD8: goto loc_88156FD8;
		case 0x88156FFC: goto loc_88156FFC;
		case 0x88157014: goto loc_88157014;
		case 0x8815702C: goto loc_8815702C;
		case 0x88157044: goto loc_88157044;
		case 0x88157054: goto loc_88157054;
		case 0x88157060: goto loc_88157060;
		case 0x8815706C: goto loc_8815706C;
		case 0x88157078: goto loc_88157078;
		case 0x88157084: goto loc_88157084;
		case 0x88157094: goto loc_88157094;
		case 0x881570AC: goto loc_881570AC;
		case 0x881570E4: goto loc_881570E4;
		case 0x881570F0: goto loc_881570F0;
		case 0x88157104: goto loc_88157104;
		case 0x88157114: goto loc_88157114;
		case 0x88157128: goto loc_88157128;
		case 0x88157140: goto loc_88157140;
		case 0x88157154: goto loc_88157154;
		case 0x88157164: goto loc_88157164;
		case 0x88157178: goto loc_88157178;
		case 0x88157190: goto loc_88157190;
		case 0x881571A4: goto loc_881571A4;
		case 0x881571B4: goto loc_881571B4;
		case 0x881571C8: goto loc_881571C8;
		case 0x881571E8: goto loc_881571E8;
		case 0x88157200: goto loc_88157200;
		case 0x88157218: goto loc_88157218;
		case 0x88157230: goto loc_88157230;
		case 0x88157248: goto loc_88157248;
		case 0x88157260: goto loc_88157260;
		case 0x88157278: goto loc_88157278;
		case 0x88157290: goto loc_88157290;
		case 0x881572C0: goto loc_881572C0;
		case 0x881572E4: goto loc_881572E4;
		case 0x88157308: goto loc_88157308;
		case 0x88157328: goto loc_88157328;
		case 0x88157374: goto loc_88157374;
		case 0x8815738C: goto loc_8815738C;
		case 0x881573A4: goto loc_881573A4;
		case 0x881573BC: goto loc_881573BC;
		case 0x881573D4: goto loc_881573D4;
		case 0x881573EC: goto loc_881573EC;
		case 0x8815741C: goto loc_8815741C;
		case 0x88157434: goto loc_88157434;
		case 0x88157450: goto loc_88157450;
		case 0x88157468: goto loc_88157468;
		case 0x88157480: goto loc_88157480;
		case 0x88157498: goto loc_88157498;
		case 0x881574B0: goto loc_881574B0;
		case 0x881574C8: goto loc_881574C8;
		case 0x881574E0: goto loc_881574E0;
		case 0x881574F8: goto loc_881574F8;
		case 0x88157510: goto loc_88157510;
		case 0x88157528: goto loc_88157528;
		case 0x8815754C: goto loc_8815754C;
		case 0x88157570: goto loc_88157570;
		case 0x88157588: goto loc_88157588;
		case 0x881575A0: goto loc_881575A0;
		case 0x881575B8: goto loc_881575B8;
		case 0x881575D0: goto loc_881575D0;
		case 0x881575E8: goto loc_881575E8;
		case 0x88157608: goto loc_88157608;
		case 0x88157614: goto loc_88157614;
		case 0x8815761C: goto loc_8815761C;
		case 0x88157628: goto loc_88157628;
		case 0x88157634: goto loc_88157634;
		case 0x88157640: goto loc_88157640;
		case 0x8815764C: goto loc_8815764C;
		case 0x88157658: goto loc_88157658;
		case 0x88157664: goto loc_88157664;
		case 0x88157670: goto loc_88157670;
		case 0x8815767C: goto loc_8815767C;
		case 0x88157688: goto loc_88157688;
		case 0x88157694: goto loc_88157694;
		case 0x881576A0: goto loc_881576A0;
		case 0x881576AC: goto loc_881576AC;
		case 0x881576B8: goto loc_881576B8;
		case 0x881576C4: goto loc_881576C4;
		case 0x881576D0: goto loc_881576D0;
		case 0x881576DC: goto loc_881576DC;
		case 0x881576E8: goto loc_881576E8;
		case 0x881576F4: goto loc_881576F4;
		case 0x88157700: goto loc_88157700;
		case 0x8815770C: goto loc_8815770C;
		case 0x88157718: goto loc_88157718;
		case 0x88157724: goto loc_88157724;
		case 0x88157730: goto loc_88157730;
		case 0x8815773C: goto loc_8815773C;
		case 0x88157748: goto loc_88157748;
		case 0x88157754: goto loc_88157754;
		case 0x88157760: goto loc_88157760;
		case 0x8815776C: goto loc_8815776C;
		case 0x88157778: goto loc_88157778;
		case 0x88157784: goto loc_88157784;
		case 0x88157790: goto loc_88157790;
		case 0x8815779C: goto loc_8815779C;
		case 0x881577A8: goto loc_881577A8;
		case 0x881577B4: goto loc_881577B4;
		case 0x881577C0: goto loc_881577C0;
		case 0x881577CC: goto loc_881577CC;
		case 0x881577E4: goto loc_881577E4;
		case 0x881577F0: goto loc_881577F0;
		case 0x881577FC: goto loc_881577FC;
		case 0x88157808: goto loc_88157808;
		case 0x88157814: goto loc_88157814;
		case 0x88157820: goto loc_88157820;
		case 0x8815782C: goto loc_8815782C;
		case 0x88157838: goto loc_88157838;
		case 0x88157844: goto loc_88157844;
		case 0x88157850: goto loc_88157850;
		case 0x8815785C: goto loc_8815785C;
		case 0x88157868: goto loc_88157868;
		case 0x88157874: goto loc_88157874;
		case 0x88157880: goto loc_88157880;
		case 0x8815788C: goto loc_8815788C;
		case 0x88157898: goto loc_88157898;
		case 0x881578A4: goto loc_881578A4;
		case 0x881578B0: goto loc_881578B0;
		case 0x881578BC: goto loc_881578BC;
		case 0x881578C8: goto loc_881578C8;
		case 0x881578D4: goto loc_881578D4;
		case 0x881578E0: goto loc_881578E0;
		case 0x881578EC: goto loc_881578EC;
		case 0x881578F8: goto loc_881578F8;
		case 0x88157904: goto loc_88157904;
		case 0x88157910: goto loc_88157910;
		case 0x8815791C: goto loc_8815791C;
		case 0x88157928: goto loc_88157928;
		case 0x88157934: goto loc_88157934;
		case 0x88157940: goto loc_88157940;
		case 0x8815794C: goto loc_8815794C;
		case 0x88157958: goto loc_88157958;
		case 0x88157964: goto loc_88157964;
		case 0x88157970: goto loc_88157970;
		case 0x8815797C: goto loc_8815797C;
		case 0x88157988: goto loc_88157988;
		case 0x88157994: goto loc_88157994;
		case 0x881579A0: goto loc_881579A0;
		case 0x881579AC: goto loc_881579AC;
		case 0x881579B8: goto loc_881579B8;
		case 0x881579C4: goto loc_881579C4;
		case 0x881579D0: goto loc_881579D0;
		case 0x881579DC: goto loc_881579DC;
		case 0x881579E8: goto loc_881579E8;
		case 0x881579F4: goto loc_881579F4;
		case 0x88157A00: goto loc_88157A00;
		case 0x88157A0C: goto loc_88157A0C;
		case 0x88157A18: goto loc_88157A18;
		case 0x88157A24: goto loc_88157A24;
		case 0x88157A30: goto loc_88157A30;
		case 0x88157A3C: goto loc_88157A3C;
		case 0x88157A48: goto loc_88157A48;
		case 0x88157A5C: goto loc_88157A5C;
		case 0x88157A74: goto loc_88157A74;
		case 0x88157A80: goto loc_88157A80;
		case 0x88157A98: goto loc_88157A98;
		case 0x88157AB4: goto loc_88157AB4;
		case 0x88157AD0: goto loc_88157AD0;
		case 0x88157AEC: goto loc_88157AEC;
		case 0x88157B08: goto loc_88157B08;
		case 0x88157B24: goto loc_88157B24;
		case 0x88157B40: goto loc_88157B40;
		case 0x88157B5C: goto loc_88157B5C;
		case 0x88157B74: goto loc_88157B74;
		case 0x88157B8C: goto loc_88157B8C;
		case 0x88157BA4: goto loc_88157BA4;
		case 0x88157BBC: goto loc_88157BBC;
		case 0x88157BD4: goto loc_88157BD4;
		case 0x88157BEC: goto loc_88157BEC;
		case 0x88157C04: goto loc_88157C04;
		case 0x88157C1C: goto loc_88157C1C;
		case 0x88157C34: goto loc_88157C34;
		case 0x88157C58: goto loc_88157C58;
		case 0x88157C70: goto loc_88157C70;
		case 0x88157C88: goto loc_88157C88;
		case 0x88157CAC: goto loc_88157CAC;
		case 0x88157CC4: goto loc_88157CC4;
		case 0x88157CDC: goto loc_88157CDC;
		case 0x88157CF0: goto loc_88157CF0;
		case 0x88157D08: goto loc_88157D08;
		case 0x88157D20: goto loc_88157D20;
		case 0x88157D40: goto loc_88157D40;
		case 0x88157D60: goto loc_88157D60;
		case 0x88157D80: goto loc_88157D80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88156E88;
	__savegprlr_25(ctx, base);
loc_88156E88:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88156E88;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,15436(r3)
	ctx.current_instruction = 0x88156E90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 15436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,24688(r31)
	ctx.current_instruction = 0x88156E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x88156ea8
	if (ctx.cr6.eq) goto loc_88156EA8;
	// bl 0x88177c20
	ctx.lr = 0x88156EA8;
	sub_88177C20(ctx, base);
loc_88156EA8:
	// lwz r4,15448(r31)
	ctx.current_instruction = 0x88156EA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15448);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156ec4
	if (ctx.cr6.eq) goto loc_88156EC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156EC0;
	sub_8815E528(ctx, base);
loc_88156EC0:
	// stw r30,15448(r31)
	ctx.current_instruction = 0x88156EC0;
	REX_STORE_U32(ctx.r31.u32 + 15448, ctx.r30.u32);
loc_88156EC4:
	// lwz r4,15456(r31)
	ctx.current_instruction = 0x88156EC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15456);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156edc
	if (ctx.cr6.eq) goto loc_88156EDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156ED8;
	sub_8815E528(ctx, base);
loc_88156ED8:
	// stw r30,15456(r31)
	ctx.current_instruction = 0x88156ED8;
	REX_STORE_U32(ctx.r31.u32 + 15456, ctx.r30.u32);
loc_88156EDC:
	// lwz r4,80(r31)
	ctx.current_instruction = 0x88156EDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156ef4
	if (ctx.cr6.eq) goto loc_88156EF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156EF0;
	sub_8815E528(ctx, base);
loc_88156EF0:
	// stw r30,80(r31)
	ctx.current_instruction = 0x88156EF0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_88156EF4:
	// lwz r4,1884(r31)
	ctx.current_instruction = 0x88156EF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1884);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156f0c
	if (ctx.cr6.eq) goto loc_88156F0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156F08;
	sub_8815E528(ctx, base);
loc_88156F08:
	// stw r30,1884(r31)
	ctx.current_instruction = 0x88156F08;
	REX_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
loc_88156F0C:
	// lwz r4,22272(r31)
	ctx.current_instruction = 0x88156F0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22272);
	// stw r30,1888(r31)
	ctx.current_instruction = 0x88156F10;
	REX_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156f28
	if (ctx.cr6.eq) goto loc_88156F28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156F24;
	sub_8815E530(ctx, base);
loc_88156F24:
	// stw r30,22272(r31)
	ctx.current_instruction = 0x88156F24;
	REX_STORE_U32(ctx.r31.u32 + 22272, ctx.r30.u32);
loc_88156F28:
	// lwz r4,22276(r31)
	ctx.current_instruction = 0x88156F28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156f40
	if (ctx.cr6.eq) goto loc_88156F40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156F3C;
	sub_8815E530(ctx, base);
loc_88156F3C:
	// stw r30,22276(r31)
	ctx.current_instruction = 0x88156F3C;
	REX_STORE_U32(ctx.r31.u32 + 22276, ctx.r30.u32);
loc_88156F40:
	// lwz r4,22280(r31)
	ctx.current_instruction = 0x88156F40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156f58
	if (ctx.cr6.eq) goto loc_88156F58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156F54;
	sub_8815E530(ctx, base);
loc_88156F54:
	// stw r30,22280(r31)
	ctx.current_instruction = 0x88156F54;
	REX_STORE_U32(ctx.r31.u32 + 22280, ctx.r30.u32);
loc_88156F58:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88156F58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x88156f94
	if (ctx.cr6.lt) goto loc_88156F94;
	// lwz r4,356(r31)
	ctx.current_instruction = 0x88156F64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156f7c
	if (ctx.cr6.eq) goto loc_88156F7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156F78;
	sub_8815E528(ctx, base);
loc_88156F78:
	// stw r30,356(r31)
	ctx.current_instruction = 0x88156F78;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
loc_88156F7C:
	// lwz r4,15280(r31)
	ctx.current_instruction = 0x88156F7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156f94
	if (ctx.cr6.eq) goto loc_88156F94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156F90;
	sub_8815E528(ctx, base);
loc_88156F90:
	// stw r30,15280(r31)
	ctx.current_instruction = 0x88156F90;
	REX_STORE_U32(ctx.r31.u32 + 15280, ctx.r30.u32);
loc_88156F94:
	// lwz r4,21944(r31)
	ctx.current_instruction = 0x88156F94;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156fac
	if (ctx.cr6.eq) goto loc_88156FAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156FA8;
	sub_8815E528(ctx, base);
loc_88156FA8:
	// stw r30,21944(r31)
	ctx.current_instruction = 0x88156FA8;
	REX_STORE_U32(ctx.r31.u32 + 21944, ctx.r30.u32);
loc_88156FAC:
	// lwz r4,21972(r31)
	ctx.current_instruction = 0x88156FAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156fc4
	if (ctx.cr6.eq) goto loc_88156FC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156FC0;
	sub_8815E528(ctx, base);
loc_88156FC0:
	// stw r30,21972(r31)
	ctx.current_instruction = 0x88156FC0;
	REX_STORE_U32(ctx.r31.u32 + 21972, ctx.r30.u32);
loc_88156FC4:
	// lwz r4,21956(r31)
	ctx.current_instruction = 0x88156FC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88156fdc
	if (ctx.cr6.eq) goto loc_88156FDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88156FD8;
	sub_8815E528(ctx, base);
loc_88156FD8:
	// stw r30,21956(r31)
	ctx.current_instruction = 0x88156FD8;
	REX_STORE_U32(ctx.r31.u32 + 21956, ctx.r30.u32);
loc_88156FDC:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88156FDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88157030
	if (!ctx.cr6.eq) goto loc_88157030;
	// lwz r4,20696(r31)
	ctx.current_instruction = 0x88156FE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20696);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157000
	if (ctx.cr6.eq) goto loc_88157000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88156FFC;
	sub_8815E530(ctx, base);
loc_88156FFC:
	// stw r30,20696(r31)
	ctx.current_instruction = 0x88156FFC;
	REX_STORE_U32(ctx.r31.u32 + 20696, ctx.r30.u32);
loc_88157000:
	// lwz r4,20700(r31)
	ctx.current_instruction = 0x88157000;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20700);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157018
	if (ctx.cr6.eq) goto loc_88157018;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157014;
	sub_8815E530(ctx, base);
loc_88157014:
	// stw r30,20700(r31)
	ctx.current_instruction = 0x88157014;
	REX_STORE_U32(ctx.r31.u32 + 20700, ctx.r30.u32);
loc_88157018:
	// lwz r4,20704(r31)
	ctx.current_instruction = 0x88157018;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20704);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157030
	if (ctx.cr6.eq) goto loc_88157030;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815702C;
	sub_8815E530(ctx, base);
loc_8815702C:
	// stw r30,20704(r31)
	ctx.current_instruction = 0x8815702C;
	REX_STORE_U32(ctx.r31.u32 + 20704, ctx.r30.u32);
loc_88157030:
	// lwz r4,22344(r31)
	ctx.current_instruction = 0x88157030;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22344);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157048
	if (ctx.cr6.eq) goto loc_88157048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157044;
	sub_8815E528(ctx, base);
loc_88157044:
	// stw r30,22344(r31)
	ctx.current_instruction = 0x88157044;
	REX_STORE_U32(ctx.r31.u32 + 22344, ctx.r30.u32);
loc_88157048:
	// addi r4,r31,22360
	ctx.r4.s64 = ctx.r31.s64 + 22360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157054;
	sub_881B5A30(ctx, base);
loc_88157054:
	// addi r4,r31,22372
	ctx.r4.s64 = ctx.r31.s64 + 22372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157060;
	sub_881B5A30(ctx, base);
loc_88157060:
	// addi r4,r31,22384
	ctx.r4.s64 = ctx.r31.s64 + 22384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815706C;
	sub_881B5A30(ctx, base);
loc_8815706C:
	// addi r4,r31,22396
	ctx.r4.s64 = ctx.r31.s64 + 22396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157078;
	sub_881B5A30(ctx, base);
loc_88157078:
	// addi r4,r31,22348
	ctx.r4.s64 = ctx.r31.s64 + 22348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157084;
	sub_881B5A30(ctx, base);
loc_88157084:
	// lwz r3,21656(r31)
	ctx.current_instruction = 0x88157084;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88157098
	if (ctx.cr6.eq) goto loc_88157098;
	// bl 0x881aa710
	ctx.lr = 0x88157094;
	sub_881AA710(ctx, base);
loc_88157094:
	// stw r30,21656(r31)
	ctx.current_instruction = 0x88157094;
	REX_STORE_U32(ctx.r31.u32 + 21656, ctx.r30.u32);
loc_88157098:
	// lwz r4,1876(r31)
	ctx.current_instruction = 0x88157098;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1876);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881570b0
	if (ctx.cr6.eq) goto loc_881570B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881570AC;
	sub_8815E528(ctx, base);
loc_881570AC:
	// stw r30,1876(r31)
	ctx.current_instruction = 0x881570AC;
	REX_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
loc_881570B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45252
	ctx.r10.u64 = ctx.r11.u64 | 45252;
	// lwzx r9,r31,r10
	ctx.current_instruction = 0x881570B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881571d4
	if (!ctx.cr6.eq) goto loc_881571D4;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881570C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,3744(r31)
	ctx.current_instruction = 0x881570C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881570e8
	if (ctx.cr6.eq) goto loc_881570E8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157108
	if (ctx.cr6.eq) goto loc_88157108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881570E4;
	sub_8815E528(ctx, base);
loc_881570E4:
	// b 0x88157108
	goto loc_88157108;
loc_881570E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88156df8
	ctx.lr = 0x881570F0;
	sub_88156DF8(ctx, base);
loc_881570F0:
	// lwz r4,3744(r31)
	ctx.current_instruction = 0x881570F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157108
	if (ctx.cr6.eq) goto loc_88157108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157104;
	sub_8815E530(ctx, base);
loc_88157104:
	// stw r30,3744(r31)
	ctx.current_instruction = 0x88157104;
	REX_STORE_U32(ctx.r31.u32 + 3744, ctx.r30.u32);
loc_88157108:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,3752(r31)
	ctx.current_instruction = 0x8815710C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// bl 0x88156df8
	ctx.lr = 0x88157114;
	sub_88156DF8(ctx, base);
loc_88157114:
	// lwz r4,3752(r31)
	ctx.current_instruction = 0x88157114;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815712c
	if (ctx.cr6.eq) goto loc_8815712C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157128;
	sub_8815E530(ctx, base);
loc_88157128:
	// stw r30,3752(r31)
	ctx.current_instruction = 0x88157128;
	REX_STORE_U32(ctx.r31.u32 + 3752, ctx.r30.u32);
loc_8815712C:
	// stw r30,3752(r31)
	ctx.current_instruction = 0x8815712C;
	REX_STORE_U32(ctx.r31.u32 + 3752, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,3744(r31)
	ctx.current_instruction = 0x88157134;
	REX_STORE_U32(ctx.r31.u32 + 3744, ctx.r30.u32);
	// lwz r4,3748(r31)
	ctx.current_instruction = 0x88157138;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// bl 0x88156df8
	ctx.lr = 0x88157140;
	sub_88156DF8(ctx, base);
loc_88157140:
	// lwz r4,3748(r31)
	ctx.current_instruction = 0x88157140;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157158
	if (ctx.cr6.eq) goto loc_88157158;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157154;
	sub_8815E530(ctx, base);
loc_88157154:
	// stw r30,3748(r31)
	ctx.current_instruction = 0x88157154;
	REX_STORE_U32(ctx.r31.u32 + 3748, ctx.r30.u32);
loc_88157158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,3756(r31)
	ctx.current_instruction = 0x8815715C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// bl 0x88156df8
	ctx.lr = 0x88157164;
	sub_88156DF8(ctx, base);
loc_88157164:
	// lwz r4,3756(r31)
	ctx.current_instruction = 0x88157164;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815717c
	if (ctx.cr6.eq) goto loc_8815717C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157178;
	sub_8815E530(ctx, base);
loc_88157178:
	// stw r30,3756(r31)
	ctx.current_instruction = 0x88157178;
	REX_STORE_U32(ctx.r31.u32 + 3756, ctx.r30.u32);
loc_8815717C:
	// stw r30,3748(r31)
	ctx.current_instruction = 0x8815717C;
	REX_STORE_U32(ctx.r31.u32 + 3748, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,3756(r31)
	ctx.current_instruction = 0x88157184;
	REX_STORE_U32(ctx.r31.u32 + 3756, ctx.r30.u32);
	// lwz r4,3760(r31)
	ctx.current_instruction = 0x88157188;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// bl 0x88156df8
	ctx.lr = 0x88157190;
	sub_88156DF8(ctx, base);
loc_88157190:
	// lwz r4,3760(r31)
	ctx.current_instruction = 0x88157190;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3760);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881571a8
	if (ctx.cr6.eq) goto loc_881571A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881571A4;
	sub_8815E530(ctx, base);
loc_881571A4:
	// stw r30,3760(r31)
	ctx.current_instruction = 0x881571A4;
	REX_STORE_U32(ctx.r31.u32 + 3760, ctx.r30.u32);
loc_881571A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,3764(r31)
	ctx.current_instruction = 0x881571AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// bl 0x88156df8
	ctx.lr = 0x881571B4;
	sub_88156DF8(ctx, base);
loc_881571B4:
	// lwz r4,3764(r31)
	ctx.current_instruction = 0x881571B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881571cc
	if (ctx.cr6.eq) goto loc_881571CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881571C8;
	sub_8815E530(ctx, base);
loc_881571C8:
	// stw r30,3764(r31)
	ctx.current_instruction = 0x881571C8;
	REX_STORE_U32(ctx.r31.u32 + 3764, ctx.r30.u32);
loc_881571CC:
	// stw r30,3764(r31)
	ctx.current_instruction = 0x881571CC;
	REX_STORE_U32(ctx.r31.u32 + 3764, ctx.r30.u32);
	// stw r30,3760(r31)
	ctx.current_instruction = 0x881571D0;
	REX_STORE_U32(ctx.r31.u32 + 3760, ctx.r30.u32);
loc_881571D4:
	// lwz r4,268(r31)
	ctx.current_instruction = 0x881571D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881571ec
	if (ctx.cr6.eq) goto loc_881571EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881571E8;
	sub_8815E530(ctx, base);
loc_881571E8:
	// stw r30,268(r31)
	ctx.current_instruction = 0x881571E8;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_881571EC:
	// lwz r4,276(r31)
	ctx.current_instruction = 0x881571EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157204
	if (ctx.cr6.eq) goto loc_88157204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157200;
	sub_8815E530(ctx, base);
loc_88157200:
	// stw r30,276(r31)
	ctx.current_instruction = 0x88157200;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_88157204:
	// lwz r4,1904(r31)
	ctx.current_instruction = 0x88157204;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1904);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815721c
	if (ctx.cr6.eq) goto loc_8815721C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157218;
	sub_8815E528(ctx, base);
loc_88157218:
	// stw r30,1904(r31)
	ctx.current_instruction = 0x88157218;
	REX_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
loc_8815721C:
	// lwz r4,1908(r31)
	ctx.current_instruction = 0x8815721C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1908);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157234
	if (ctx.cr6.eq) goto loc_88157234;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157230;
	sub_8815E528(ctx, base);
loc_88157230:
	// stw r30,1908(r31)
	ctx.current_instruction = 0x88157230;
	REX_STORE_U32(ctx.r31.u32 + 1908, ctx.r30.u32);
loc_88157234:
	// lwz r4,1912(r31)
	ctx.current_instruction = 0x88157234;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1912);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815724c
	if (ctx.cr6.eq) goto loc_8815724C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157248;
	sub_8815E528(ctx, base);
loc_88157248:
	// stw r30,1912(r31)
	ctx.current_instruction = 0x88157248;
	REX_STORE_U32(ctx.r31.u32 + 1912, ctx.r30.u32);
loc_8815724C:
	// lwz r4,1916(r31)
	ctx.current_instruction = 0x8815724C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1916);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157264
	if (ctx.cr6.eq) goto loc_88157264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157260;
	sub_8815E528(ctx, base);
loc_88157260:
	// stw r30,1916(r31)
	ctx.current_instruction = 0x88157260;
	REX_STORE_U32(ctx.r31.u32 + 1916, ctx.r30.u32);
loc_88157264:
	// lwz r4,3972(r31)
	ctx.current_instruction = 0x88157264;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815727c
	if (ctx.cr6.eq) goto loc_8815727C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157278;
	sub_8815E530(ctx, base);
loc_88157278:
	// stw r30,3972(r31)
	ctx.current_instruction = 0x88157278;
	REX_STORE_U32(ctx.r31.u32 + 3972, ctx.r30.u32);
loc_8815727C:
	// lwz r4,22284(r31)
	ctx.current_instruction = 0x8815727C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157294
	if (ctx.cr6.eq) goto loc_88157294;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157290;
	sub_8815E530(ctx, base);
loc_88157290:
	// stw r30,22284(r31)
	ctx.current_instruction = 0x88157290;
	REX_STORE_U32(ctx.r31.u32 + 22284, ctx.r30.u32);
loc_88157294:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_88157298:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r25,r26,11437
	ctx.r25.s64 = ctx.r26.s64 + 11437;
loc_881572A0:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addi r11,r11,11413
	ctx.r11.s64 = ctx.r11.s64 + 11413;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r31
	ctx.current_instruction = 0x881572AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881572c4
	if (ctx.cr6.eq) goto loc_881572C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881572C0;
	sub_8815E528(ctx, base);
loc_881572C0:
	// stwx r30,r28,r31
	ctx.current_instruction = 0x881572C0;
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r30.u32);
loc_881572C4:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addi r11,r11,11421
	ctx.r11.s64 = ctx.r11.s64 + 11421;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r31
	ctx.current_instruction = 0x881572D0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881572e8
	if (ctx.cr6.eq) goto loc_881572E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881572E4;
	sub_8815E528(ctx, base);
loc_881572E4:
	// stwx r30,r28,r31
	ctx.current_instruction = 0x881572E4;
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r30.u32);
loc_881572E8:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addi r11,r11,11429
	ctx.r11.s64 = ctx.r11.s64 + 11429;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r31
	ctx.current_instruction = 0x881572F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815730c
	if (ctx.cr6.eq) goto loc_8815730C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157308;
	sub_8815E528(ctx, base);
loc_88157308:
	// stwx r30,r28,r31
	ctx.current_instruction = 0x88157308;
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8815730C:
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r31
	ctx.current_instruction = 0x88157314;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815732c
	if (ctx.cr6.eq) goto loc_8815732C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157328;
	sub_8815E528(ctx, base);
loc_88157328:
	// stwx r30,r28,r31
	ctx.current_instruction = 0x88157328;
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8815732C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x881572a0
	if (ctx.cr6.lt) goto loc_881572A0;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// blt cr6,0x88157298
	if (ctx.cr6.lt) goto loc_88157298;
	// lwz r11,24688(r31)
	ctx.current_instruction = 0x88157344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.current_instruction = 0x88157348;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8815743c
	if (ctx.cr6.eq) goto loc_8815743C;
	// lwz r11,17376(r11)
	ctx.current_instruction = 0x88157354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x881573f0
	if (!ctx.cr6.eq) goto loc_881573F0;
	// lwz r4,3084(r31)
	ctx.current_instruction = 0x88157360;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157378
	if (ctx.cr6.eq) goto loc_88157378;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157374;
	sub_8815E530(ctx, base);
loc_88157374:
	// stw r30,3084(r31)
	ctx.current_instruction = 0x88157374;
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r30.u32);
loc_88157378:
	// lwz r4,15272(r31)
	ctx.current_instruction = 0x88157378;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157390
	if (ctx.cr6.eq) goto loc_88157390;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815738C;
	sub_8815E530(ctx, base);
loc_8815738C:
	// stw r30,15272(r31)
	ctx.current_instruction = 0x8815738C;
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r30.u32);
loc_88157390:
	// lwz r4,15332(r31)
	ctx.current_instruction = 0x88157390;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881573a8
	if (ctx.cr6.eq) goto loc_881573A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881573A4;
	sub_8815E530(ctx, base);
loc_881573A4:
	// stw r30,15332(r31)
	ctx.current_instruction = 0x881573A4;
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r30.u32);
loc_881573A8:
	// lwz r4,15356(r31)
	ctx.current_instruction = 0x881573A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881573c0
	if (ctx.cr6.eq) goto loc_881573C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881573BC;
	sub_8815E530(ctx, base);
loc_881573BC:
	// stw r30,15356(r31)
	ctx.current_instruction = 0x881573BC;
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r30.u32);
loc_881573C0:
	// lwz r4,1776(r31)
	ctx.current_instruction = 0x881573C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881573d8
	if (ctx.cr6.eq) goto loc_881573D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881573D4;
	sub_8815E530(ctx, base);
loc_881573D4:
	// stw r30,1776(r31)
	ctx.current_instruction = 0x881573D4;
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
loc_881573D8:
	// lwz r4,1784(r31)
	ctx.current_instruction = 0x881573D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157408
	if (ctx.cr6.eq) goto loc_88157408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881573EC;
	sub_8815E530(ctx, base);
loc_881573EC:
	// b 0x88157404
	goto loc_88157404;
loc_881573F0:
	// stw r30,3084(r31)
	ctx.current_instruction = 0x881573F0;
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r30.u32);
	// stw r30,15332(r31)
	ctx.current_instruction = 0x881573F4;
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r30.u32);
	// stw r30,15356(r31)
	ctx.current_instruction = 0x881573F8;
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r30.u32);
	// stw r30,15272(r31)
	ctx.current_instruction = 0x881573FC;
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r30.u32);
	// stw r30,1776(r31)
	ctx.current_instruction = 0x88157400;
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
loc_88157404:
	// stw r30,1784(r31)
	ctx.current_instruction = 0x88157404;
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
loc_88157408:
	// lwz r4,15340(r31)
	ctx.current_instruction = 0x88157408;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157420
	if (ctx.cr6.eq) goto loc_88157420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815741C;
	sub_8815E530(ctx, base);
loc_8815741C:
	// stw r30,15340(r31)
	ctx.current_instruction = 0x8815741C;
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r30.u32);
loc_88157420:
	// lwz r4,15348(r31)
	ctx.current_instruction = 0x88157420;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881574fc
	if (ctx.cr6.eq) goto loc_881574FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157434;
	sub_8815E530(ctx, base);
loc_88157434:
	// stw r30,15348(r31)
	ctx.current_instruction = 0x88157434;
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r30.u32);
	// b 0x881574fc
	goto loc_881574FC;
loc_8815743C:
	// lwz r4,3084(r31)
	ctx.current_instruction = 0x8815743C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3084);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157454
	if (ctx.cr6.eq) goto loc_88157454;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157450;
	sub_8815E530(ctx, base);
loc_88157450:
	// stw r30,3084(r31)
	ctx.current_instruction = 0x88157450;
	REX_STORE_U32(ctx.r31.u32 + 3084, ctx.r30.u32);
loc_88157454:
	// lwz r4,15272(r31)
	ctx.current_instruction = 0x88157454;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815746c
	if (ctx.cr6.eq) goto loc_8815746C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157468;
	sub_8815E530(ctx, base);
loc_88157468:
	// stw r30,15272(r31)
	ctx.current_instruction = 0x88157468;
	REX_STORE_U32(ctx.r31.u32 + 15272, ctx.r30.u32);
loc_8815746C:
	// lwz r4,15332(r31)
	ctx.current_instruction = 0x8815746C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157484
	if (ctx.cr6.eq) goto loc_88157484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157480;
	sub_8815E530(ctx, base);
loc_88157480:
	// stw r30,15332(r31)
	ctx.current_instruction = 0x88157480;
	REX_STORE_U32(ctx.r31.u32 + 15332, ctx.r30.u32);
loc_88157484:
	// lwz r4,15356(r31)
	ctx.current_instruction = 0x88157484;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815749c
	if (ctx.cr6.eq) goto loc_8815749C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157498;
	sub_8815E530(ctx, base);
loc_88157498:
	// stw r30,15356(r31)
	ctx.current_instruction = 0x88157498;
	REX_STORE_U32(ctx.r31.u32 + 15356, ctx.r30.u32);
loc_8815749C:
	// lwz r4,15340(r31)
	ctx.current_instruction = 0x8815749C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881574b4
	if (ctx.cr6.eq) goto loc_881574B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881574B0;
	sub_8815E530(ctx, base);
loc_881574B0:
	// stw r30,15340(r31)
	ctx.current_instruction = 0x881574B0;
	REX_STORE_U32(ctx.r31.u32 + 15340, ctx.r30.u32);
loc_881574B4:
	// lwz r4,15348(r31)
	ctx.current_instruction = 0x881574B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881574cc
	if (ctx.cr6.eq) goto loc_881574CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881574C8;
	sub_8815E530(ctx, base);
loc_881574C8:
	// stw r30,15348(r31)
	ctx.current_instruction = 0x881574C8;
	REX_STORE_U32(ctx.r31.u32 + 15348, ctx.r30.u32);
loc_881574CC:
	// lwz r4,1776(r31)
	ctx.current_instruction = 0x881574CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881574e4
	if (ctx.cr6.eq) goto loc_881574E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881574E0;
	sub_8815E530(ctx, base);
loc_881574E0:
	// stw r30,1776(r31)
	ctx.current_instruction = 0x881574E0;
	REX_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
loc_881574E4:
	// lwz r4,1784(r31)
	ctx.current_instruction = 0x881574E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881574fc
	if (ctx.cr6.eq) goto loc_881574FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881574F8;
	sub_8815E530(ctx, base);
loc_881574F8:
	// stw r30,1784(r31)
	ctx.current_instruction = 0x881574F8;
	REX_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
loc_881574FC:
	// lwz r4,280(r31)
	ctx.current_instruction = 0x881574FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157514
	if (ctx.cr6.eq) goto loc_88157514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157510;
	sub_8815E530(ctx, base);
loc_88157510:
	// stw r30,280(r31)
	ctx.current_instruction = 0x88157510;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_88157514:
	// lwz r4,272(r31)
	ctx.current_instruction = 0x88157514;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815752c
	if (ctx.cr6.eq) goto loc_8815752C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157528;
	sub_8815E530(ctx, base);
loc_88157528:
	// stw r30,272(r31)
	ctx.current_instruction = 0x88157528;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
loc_8815752C:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8815752C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88157550
	if (!ctx.cr6.eq) goto loc_88157550;
	// lwz r4,3088(r31)
	ctx.current_instruction = 0x88157538;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157550
	if (ctx.cr6.eq) goto loc_88157550;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x8815754C;
	sub_8815E530(ctx, base);
loc_8815754C:
	// stw r30,3088(r31)
	ctx.current_instruction = 0x8815754C;
	REX_STORE_U32(ctx.r31.u32 + 3088, ctx.r30.u32);
loc_88157550:
	// lwz r11,14852(r31)
	ctx.current_instruction = 0x88157550;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881575bc
	if (ctx.cr6.eq) goto loc_881575BC;
	// lwz r4,14872(r31)
	ctx.current_instruction = 0x8815755C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14872);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157574
	if (ctx.cr6.eq) goto loc_88157574;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157570;
	sub_8815E530(ctx, base);
loc_88157570:
	// stw r30,14872(r31)
	ctx.current_instruction = 0x88157570;
	REX_STORE_U32(ctx.r31.u32 + 14872, ctx.r30.u32);
loc_88157574:
	// lwz r4,14876(r31)
	ctx.current_instruction = 0x88157574;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14876);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815758c
	if (ctx.cr6.eq) goto loc_8815758C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157588;
	sub_8815E528(ctx, base);
loc_88157588:
	// stw r30,14876(r31)
	ctx.current_instruction = 0x88157588;
	REX_STORE_U32(ctx.r31.u32 + 14876, ctx.r30.u32);
loc_8815758C:
	// lwz r4,14880(r31)
	ctx.current_instruction = 0x8815758C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14880);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881575a4
	if (ctx.cr6.eq) goto loc_881575A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881575A0;
	sub_8815E528(ctx, base);
loc_881575A0:
	// stw r30,14880(r31)
	ctx.current_instruction = 0x881575A0;
	REX_STORE_U32(ctx.r31.u32 + 14880, ctx.r30.u32);
loc_881575A4:
	// lwz r4,3768(r31)
	ctx.current_instruction = 0x881575A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881575bc
	if (ctx.cr6.eq) goto loc_881575BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881575B8;
	sub_8815E528(ctx, base);
loc_881575B8:
	// stw r30,3768(r31)
	ctx.current_instruction = 0x881575B8;
	REX_STORE_U32(ctx.r31.u32 + 3768, ctx.r30.u32);
loc_881575BC:
	// lwz r4,1896(r31)
	ctx.current_instruction = 0x881575BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1896);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881575d4
	if (ctx.cr6.eq) goto loc_881575D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x881575D0;
	sub_8815E530(ctx, base);
loc_881575D0:
	// stw r30,1896(r31)
	ctx.current_instruction = 0x881575D0;
	REX_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
loc_881575D4:
	// lwz r4,1900(r31)
	ctx.current_instruction = 0x881575D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1900);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881575ec
	if (ctx.cr6.eq) goto loc_881575EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x881575E8;
	sub_8815E528(ctx, base);
loc_881575E8:
	// stw r30,1900(r31)
	ctx.current_instruction = 0x881575E8;
	REX_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
loc_881575EC:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881575EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// stw r30,15832(r31)
	ctx.current_instruction = 0x881575F0;
	REX_STORE_U32(ctx.r31.u32 + 15832, ctx.r30.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8815761c
	if (ctx.cr6.lt) goto loc_8815761C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1976(r31)
	ctx.current_instruction = 0x88157600;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1976);
	// bl 0x881b5830
	ctx.lr = 0x88157608;
	sub_881B5830(ctx, base);
loc_88157608:
	// stw r30,1976(r31)
	ctx.current_instruction = 0x88157608;
	REX_STORE_U32(ctx.r31.u32 + 1976, ctx.r30.u32);
	// addi r3,r31,1968
	ctx.r3.s64 = ctx.r31.s64 + 1968;
	// bl 0x881b3a08
	ctx.lr = 0x88157614;
	sub_881B3A08(ctx, base);
loc_88157614:
	// addi r3,r31,1972
	ctx.r3.s64 = ctx.r31.s64 + 1972;
	// bl 0x881b4370
	ctx.lr = 0x8815761C;
	sub_881B4370(ctx, base);
loc_8815761C:
	// addi r4,r31,1992
	ctx.r4.s64 = ctx.r31.s64 + 1992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157628;
	sub_881B5A30(ctx, base);
loc_88157628:
	// addi r4,r31,2004
	ctx.r4.s64 = ctx.r31.s64 + 2004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157634;
	sub_881B5A30(ctx, base);
loc_88157634:
	// addi r4,r31,2044
	ctx.r4.s64 = ctx.r31.s64 + 2044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157640;
	sub_881B5A30(ctx, base);
loc_88157640:
	// addi r4,r31,2056
	ctx.r4.s64 = ctx.r31.s64 + 2056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815764C;
	sub_881B5A30(ctx, base);
loc_8815764C:
	// addi r4,r31,2068
	ctx.r4.s64 = ctx.r31.s64 + 2068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157658;
	sub_881B5A30(ctx, base);
loc_88157658:
	// addi r4,r31,2080
	ctx.r4.s64 = ctx.r31.s64 + 2080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157664;
	sub_881B5A30(ctx, base);
loc_88157664:
	// addi r4,r31,2120
	ctx.r4.s64 = ctx.r31.s64 + 2120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157670;
	sub_881B5A30(ctx, base);
loc_88157670:
	// addi r4,r31,2132
	ctx.r4.s64 = ctx.r31.s64 + 2132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815767C;
	sub_881B5A30(ctx, base);
loc_8815767C:
	// addi r4,r31,2148
	ctx.r4.s64 = ctx.r31.s64 + 2148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157688;
	sub_881B5A30(ctx, base);
loc_88157688:
	// addi r4,r31,2160
	ctx.r4.s64 = ctx.r31.s64 + 2160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157694;
	sub_881B5A30(ctx, base);
loc_88157694:
	// addi r4,r31,2172
	ctx.r4.s64 = ctx.r31.s64 + 2172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576A0;
	sub_881B5A30(ctx, base);
loc_881576A0:
	// addi r4,r31,2184
	ctx.r4.s64 = ctx.r31.s64 + 2184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576AC;
	sub_881B5A30(ctx, base);
loc_881576AC:
	// addi r4,r31,2196
	ctx.r4.s64 = ctx.r31.s64 + 2196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576B8;
	sub_881B5A30(ctx, base);
loc_881576B8:
	// addi r4,r31,2208
	ctx.r4.s64 = ctx.r31.s64 + 2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576C4;
	sub_881B5A30(ctx, base);
loc_881576C4:
	// addi r4,r31,2220
	ctx.r4.s64 = ctx.r31.s64 + 2220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576D0;
	sub_881B5A30(ctx, base);
loc_881576D0:
	// addi r4,r31,2232
	ctx.r4.s64 = ctx.r31.s64 + 2232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576DC;
	sub_881B5A30(ctx, base);
loc_881576DC:
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576E8;
	sub_881B5A30(ctx, base);
loc_881576E8:
	// addi r4,r31,2432
	ctx.r4.s64 = ctx.r31.s64 + 2432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881576F4;
	sub_881B5A30(ctx, base);
loc_881576F4:
	// addi r4,r31,2256
	ctx.r4.s64 = ctx.r31.s64 + 2256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157700;
	sub_881B5A30(ctx, base);
loc_88157700:
	// addi r4,r31,2284
	ctx.r4.s64 = ctx.r31.s64 + 2284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815770C;
	sub_881B5A30(ctx, base);
loc_8815770C:
	// addi r4,r31,2296
	ctx.r4.s64 = ctx.r31.s64 + 2296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157718;
	sub_881B5A30(ctx, base);
loc_88157718:
	// addi r4,r31,2308
	ctx.r4.s64 = ctx.r31.s64 + 2308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157724;
	sub_881B5A30(ctx, base);
loc_88157724:
	// addi r4,r31,2320
	ctx.r4.s64 = ctx.r31.s64 + 2320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157730;
	sub_881B5A30(ctx, base);
loc_88157730:
	// addi r4,r31,2332
	ctx.r4.s64 = ctx.r31.s64 + 2332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815773C;
	sub_881B5A30(ctx, base);
loc_8815773C:
	// addi r4,r31,2344
	ctx.r4.s64 = ctx.r31.s64 + 2344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157748;
	sub_881B5A30(ctx, base);
loc_88157748:
	// addi r4,r31,2356
	ctx.r4.s64 = ctx.r31.s64 + 2356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157754;
	sub_881B5A30(ctx, base);
loc_88157754:
	// addi r4,r31,2368
	ctx.r4.s64 = ctx.r31.s64 + 2368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157760;
	sub_881B5A30(ctx, base);
loc_88157760:
	// addi r4,r31,2444
	ctx.r4.s64 = ctx.r31.s64 + 2444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815776C;
	sub_881B5A30(ctx, base);
loc_8815776C:
	// addi r4,r31,2456
	ctx.r4.s64 = ctx.r31.s64 + 2456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157778;
	sub_881B5A30(ctx, base);
loc_88157778:
	// addi r4,r31,2468
	ctx.r4.s64 = ctx.r31.s64 + 2468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157784;
	sub_881B5A30(ctx, base);
loc_88157784:
	// addi r4,r31,2484
	ctx.r4.s64 = ctx.r31.s64 + 2484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157790;
	sub_881B5A30(ctx, base);
loc_88157790:
	// addi r4,r31,2496
	ctx.r4.s64 = ctx.r31.s64 + 2496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815779C;
	sub_881B5A30(ctx, base);
loc_8815779C:
	// addi r4,r31,2508
	ctx.r4.s64 = ctx.r31.s64 + 2508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577A8;
	sub_881B5A30(ctx, base);
loc_881577A8:
	// addi r4,r31,2524
	ctx.r4.s64 = ctx.r31.s64 + 2524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577B4;
	sub_881B5A30(ctx, base);
loc_881577B4:
	// addi r4,r31,2536
	ctx.r4.s64 = ctx.r31.s64 + 2536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577C0;
	sub_881B5A30(ctx, base);
loc_881577C0:
	// addi r4,r31,2548
	ctx.r4.s64 = ctx.r31.s64 + 2548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577CC;
	sub_881B5A30(ctx, base);
loc_881577CC:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881577CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88157a78
	if (!ctx.cr6.eq) goto loc_88157A78;
	// addi r4,r31,20788
	ctx.r4.s64 = ctx.r31.s64 + 20788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577E4;
	sub_881B5A30(ctx, base);
loc_881577E4:
	// addi r4,r31,20800
	ctx.r4.s64 = ctx.r31.s64 + 20800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577F0;
	sub_881B5A30(ctx, base);
loc_881577F0:
	// addi r4,r31,20812
	ctx.r4.s64 = ctx.r31.s64 + 20812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881577FC;
	sub_881B5A30(ctx, base);
loc_881577FC:
	// addi r4,r31,20824
	ctx.r4.s64 = ctx.r31.s64 + 20824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157808;
	sub_881B5A30(ctx, base);
loc_88157808:
	// addi r4,r31,20852
	ctx.r4.s64 = ctx.r31.s64 + 20852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157814;
	sub_881B5A30(ctx, base);
loc_88157814:
	// addi r4,r31,20864
	ctx.r4.s64 = ctx.r31.s64 + 20864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157820;
	sub_881B5A30(ctx, base);
loc_88157820:
	// addi r4,r31,20876
	ctx.r4.s64 = ctx.r31.s64 + 20876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815782C;
	sub_881B5A30(ctx, base);
loc_8815782C:
	// addi r4,r31,20888
	ctx.r4.s64 = ctx.r31.s64 + 20888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157838;
	sub_881B5A30(ctx, base);
loc_88157838:
	// addi r4,r31,21008
	ctx.r4.s64 = ctx.r31.s64 + 21008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157844;
	sub_881B5A30(ctx, base);
loc_88157844:
	// addi r4,r31,21020
	ctx.r4.s64 = ctx.r31.s64 + 21020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157850;
	sub_881B5A30(ctx, base);
loc_88157850:
	// addi r4,r31,21032
	ctx.r4.s64 = ctx.r31.s64 + 21032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815785C;
	sub_881B5A30(ctx, base);
loc_8815785C:
	// addi r4,r31,21044
	ctx.r4.s64 = ctx.r31.s64 + 21044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157868;
	sub_881B5A30(ctx, base);
loc_88157868:
	// addi r4,r31,21056
	ctx.r4.s64 = ctx.r31.s64 + 21056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157874;
	sub_881B5A30(ctx, base);
loc_88157874:
	// addi r4,r31,21068
	ctx.r4.s64 = ctx.r31.s64 + 21068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157880;
	sub_881B5A30(ctx, base);
loc_88157880:
	// addi r4,r31,21080
	ctx.r4.s64 = ctx.r31.s64 + 21080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815788C;
	sub_881B5A30(ctx, base);
loc_8815788C:
	// addi r4,r31,21092
	ctx.r4.s64 = ctx.r31.s64 + 21092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157898;
	sub_881B5A30(ctx, base);
loc_88157898:
	// addi r4,r31,21104
	ctx.r4.s64 = ctx.r31.s64 + 21104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578A4;
	sub_881B5A30(ctx, base);
loc_881578A4:
	// addi r4,r31,21116
	ctx.r4.s64 = ctx.r31.s64 + 21116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578B0;
	sub_881B5A30(ctx, base);
loc_881578B0:
	// addi r4,r31,21128
	ctx.r4.s64 = ctx.r31.s64 + 21128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578BC;
	sub_881B5A30(ctx, base);
loc_881578BC:
	// addi r4,r31,21140
	ctx.r4.s64 = ctx.r31.s64 + 21140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578C8;
	sub_881B5A30(ctx, base);
loc_881578C8:
	// addi r4,r31,21152
	ctx.r4.s64 = ctx.r31.s64 + 21152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578D4;
	sub_881B5A30(ctx, base);
loc_881578D4:
	// addi r4,r31,21164
	ctx.r4.s64 = ctx.r31.s64 + 21164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578E0;
	sub_881B5A30(ctx, base);
loc_881578E0:
	// addi r4,r31,21176
	ctx.r4.s64 = ctx.r31.s64 + 21176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578EC;
	sub_881B5A30(ctx, base);
loc_881578EC:
	// addi r4,r31,21188
	ctx.r4.s64 = ctx.r31.s64 + 21188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881578F8;
	sub_881B5A30(ctx, base);
loc_881578F8:
	// addi r4,r31,21200
	ctx.r4.s64 = ctx.r31.s64 + 21200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157904;
	sub_881B5A30(ctx, base);
loc_88157904:
	// addi r4,r31,21212
	ctx.r4.s64 = ctx.r31.s64 + 21212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157910;
	sub_881B5A30(ctx, base);
loc_88157910:
	// addi r4,r31,21224
	ctx.r4.s64 = ctx.r31.s64 + 21224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815791C;
	sub_881B5A30(ctx, base);
loc_8815791C:
	// addi r4,r31,21236
	ctx.r4.s64 = ctx.r31.s64 + 21236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157928;
	sub_881B5A30(ctx, base);
loc_88157928:
	// addi r4,r31,21248
	ctx.r4.s64 = ctx.r31.s64 + 21248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157934;
	sub_881B5A30(ctx, base);
loc_88157934:
	// addi r4,r31,21260
	ctx.r4.s64 = ctx.r31.s64 + 21260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157940;
	sub_881B5A30(ctx, base);
loc_88157940:
	// addi r4,r31,21272
	ctx.r4.s64 = ctx.r31.s64 + 21272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815794C;
	sub_881B5A30(ctx, base);
loc_8815794C:
	// addi r4,r31,21284
	ctx.r4.s64 = ctx.r31.s64 + 21284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157958;
	sub_881B5A30(ctx, base);
loc_88157958:
	// addi r4,r31,21296
	ctx.r4.s64 = ctx.r31.s64 + 21296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157964;
	sub_881B5A30(ctx, base);
loc_88157964:
	// addi r4,r31,21308
	ctx.r4.s64 = ctx.r31.s64 + 21308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157970;
	sub_881B5A30(ctx, base);
loc_88157970:
	// addi r4,r31,21320
	ctx.r4.s64 = ctx.r31.s64 + 21320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x8815797C;
	sub_881B5A30(ctx, base);
loc_8815797C:
	// addi r4,r31,21332
	ctx.r4.s64 = ctx.r31.s64 + 21332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157988;
	sub_881B5A30(ctx, base);
loc_88157988:
	// addi r4,r31,21344
	ctx.r4.s64 = ctx.r31.s64 + 21344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157994;
	sub_881B5A30(ctx, base);
loc_88157994:
	// addi r4,r31,21356
	ctx.r4.s64 = ctx.r31.s64 + 21356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579A0;
	sub_881B5A30(ctx, base);
loc_881579A0:
	// addi r4,r31,21368
	ctx.r4.s64 = ctx.r31.s64 + 21368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579AC;
	sub_881B5A30(ctx, base);
loc_881579AC:
	// addi r4,r31,21380
	ctx.r4.s64 = ctx.r31.s64 + 21380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579B8;
	sub_881B5A30(ctx, base);
loc_881579B8:
	// addi r4,r31,21392
	ctx.r4.s64 = ctx.r31.s64 + 21392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579C4;
	sub_881B5A30(ctx, base);
loc_881579C4:
	// addi r4,r31,21404
	ctx.r4.s64 = ctx.r31.s64 + 21404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579D0;
	sub_881B5A30(ctx, base);
loc_881579D0:
	// addi r4,r31,21416
	ctx.r4.s64 = ctx.r31.s64 + 21416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579DC;
	sub_881B5A30(ctx, base);
loc_881579DC:
	// addi r4,r31,21428
	ctx.r4.s64 = ctx.r31.s64 + 21428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579E8;
	sub_881B5A30(ctx, base);
loc_881579E8:
	// addi r4,r31,21440
	ctx.r4.s64 = ctx.r31.s64 + 21440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x881579F4;
	sub_881B5A30(ctx, base);
loc_881579F4:
	// addi r4,r31,21452
	ctx.r4.s64 = ctx.r31.s64 + 21452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A00;
	sub_881B5A30(ctx, base);
loc_88157A00:
	// addi r4,r31,21464
	ctx.r4.s64 = ctx.r31.s64 + 21464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A0C;
	sub_881B5A30(ctx, base);
loc_88157A0C:
	// addi r4,r31,21476
	ctx.r4.s64 = ctx.r31.s64 + 21476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A18;
	sub_881B5A30(ctx, base);
loc_88157A18:
	// addi r4,r31,21488
	ctx.r4.s64 = ctx.r31.s64 + 21488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A24;
	sub_881B5A30(ctx, base);
loc_88157A24:
	// addi r4,r31,21500
	ctx.r4.s64 = ctx.r31.s64 + 21500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A30;
	sub_881B5A30(ctx, base);
loc_88157A30:
	// addi r4,r31,21512
	ctx.r4.s64 = ctx.r31.s64 + 21512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A3C;
	sub_881B5A30(ctx, base);
loc_88157A3C:
	// addi r4,r31,21524
	ctx.r4.s64 = ctx.r31.s64 + 21524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5a30
	ctx.lr = 0x88157A48;
	sub_881B5A30(ctx, base);
loc_88157A48:
	// lwz r4,22020(r31)
	ctx.current_instruction = 0x88157A48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22020);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157a60
	if (ctx.cr6.eq) goto loc_88157A60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157A5C;
	sub_8815E528(ctx, base);
loc_88157A5C:
	// stw r30,22020(r31)
	ctx.current_instruction = 0x88157A5C;
	REX_STORE_U32(ctx.r31.u32 + 22020, ctx.r30.u32);
loc_88157A60:
	// lwz r4,22024(r31)
	ctx.current_instruction = 0x88157A60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22024);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157a78
	if (ctx.cr6.eq) goto loc_88157A78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157A74;
	sub_8815E528(ctx, base);
loc_88157A74:
	// stw r30,22024(r31)
	ctx.current_instruction = 0x88157A74;
	REX_STORE_U32(ctx.r31.u32 + 22024, ctx.r30.u32);
loc_88157A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881839f0
	ctx.lr = 0x88157A80;
	sub_881839F0(ctx, base);
loc_88157A80:
	// lwz r4,2864(r31)
	ctx.current_instruction = 0x88157A80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2864);
	// addi r28,r31,2828
	ctx.r28.s64 = ctx.r31.s64 + 2828;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157a9c
	if (ctx.cr6.eq) goto loc_88157A9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157A98;
	sub_8815E528(ctx, base);
loc_88157A98:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157A98;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157A9C:
	// lwz r4,2908(r31)
	ctx.current_instruction = 0x88157A9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2908);
	// addi r28,r31,2872
	ctx.r28.s64 = ctx.r31.s64 + 2872;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ab8
	if (ctx.cr6.eq) goto loc_88157AB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157AB4;
	sub_8815E528(ctx, base);
loc_88157AB4:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157AB4;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157AB8:
	// lwz r4,2820(r31)
	ctx.current_instruction = 0x88157AB8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2820);
	// addi r28,r31,2784
	ctx.r28.s64 = ctx.r31.s64 + 2784;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ad4
	if (ctx.cr6.eq) goto loc_88157AD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157AD0;
	sub_8815E528(ctx, base);
loc_88157AD0:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157AD0;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157AD4:
	// lwz r4,2776(r31)
	ctx.current_instruction = 0x88157AD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2776);
	// addi r28,r31,2740
	ctx.r28.s64 = ctx.r31.s64 + 2740;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157af0
	if (ctx.cr6.eq) goto loc_88157AF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157AEC;
	sub_8815E528(ctx, base);
loc_88157AEC:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157AEC;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157AF0:
	// lwz r4,2732(r31)
	ctx.current_instruction = 0x88157AF0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2732);
	// addi r28,r31,2696
	ctx.r28.s64 = ctx.r31.s64 + 2696;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157b0c
	if (ctx.cr6.eq) goto loc_88157B0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157B08;
	sub_8815E528(ctx, base);
loc_88157B08:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157B08;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157B0C:
	// lwz r4,2688(r31)
	ctx.current_instruction = 0x88157B0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2688);
	// addi r28,r31,2652
	ctx.r28.s64 = ctx.r31.s64 + 2652;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157b28
	if (ctx.cr6.eq) goto loc_88157B28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157B24;
	sub_8815E528(ctx, base);
loc_88157B24:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157B24;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157B28:
	// lwz r4,2644(r31)
	ctx.current_instruction = 0x88157B28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2644);
	// addi r28,r31,2608
	ctx.r28.s64 = ctx.r31.s64 + 2608;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157b44
	if (ctx.cr6.eq) goto loc_88157B44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157B40;
	sub_8815E528(ctx, base);
loc_88157B40:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157B40;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157B44:
	// lwz r4,2600(r31)
	ctx.current_instruction = 0x88157B44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// addi r28,r31,2564
	ctx.r28.s64 = ctx.r31.s64 + 2564;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157b60
	if (ctx.cr6.eq) goto loc_88157B60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157B5C;
	sub_8815E528(ctx, base);
loc_88157B5C:
	// stw r30,36(r28)
	ctx.current_instruction = 0x88157B5C;
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r30.u32);
loc_88157B60:
	// lwz r4,356(r31)
	ctx.current_instruction = 0x88157B60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157b78
	if (ctx.cr6.eq) goto loc_88157B78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157B74;
	sub_8815E528(ctx, base);
loc_88157B74:
	// stw r30,356(r31)
	ctx.current_instruction = 0x88157B74;
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
loc_88157B78:
	// lwz r4,364(r31)
	ctx.current_instruction = 0x88157B78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157b90
	if (ctx.cr6.eq) goto loc_88157B90;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157B8C;
	sub_8815E528(ctx, base);
loc_88157B8C:
	// stw r30,364(r31)
	ctx.current_instruction = 0x88157B8C;
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
loc_88157B90:
	// lwz r4,360(r31)
	ctx.current_instruction = 0x88157B90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157ba8
	if (ctx.cr6.eq) goto loc_88157BA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157BA4;
	sub_8815E528(ctx, base);
loc_88157BA4:
	// stw r30,360(r31)
	ctx.current_instruction = 0x88157BA4;
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
loc_88157BA8:
	// lwz r4,368(r31)
	ctx.current_instruction = 0x88157BA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157bc0
	if (ctx.cr6.eq) goto loc_88157BC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157BBC;
	sub_8815E528(ctx, base);
loc_88157BBC:
	// stw r30,368(r31)
	ctx.current_instruction = 0x88157BBC;
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
loc_88157BC0:
	// lwz r4,372(r31)
	ctx.current_instruction = 0x88157BC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157bd8
	if (ctx.cr6.eq) goto loc_88157BD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157BD4;
	sub_8815E528(ctx, base);
loc_88157BD4:
	// stw r30,372(r31)
	ctx.current_instruction = 0x88157BD4;
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
loc_88157BD8:
	// lwz r4,376(r31)
	ctx.current_instruction = 0x88157BD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157bf0
	if (ctx.cr6.eq) goto loc_88157BF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157BEC;
	sub_8815E528(ctx, base);
loc_88157BEC:
	// stw r30,376(r31)
	ctx.current_instruction = 0x88157BEC;
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
loc_88157BF0:
	// lwz r4,388(r31)
	ctx.current_instruction = 0x88157BF0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157c08
	if (ctx.cr6.eq) goto loc_88157C08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157C04;
	sub_8815E528(ctx, base);
loc_88157C04:
	// stw r30,388(r31)
	ctx.current_instruction = 0x88157C04;
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
loc_88157C08:
	// lwz r4,392(r31)
	ctx.current_instruction = 0x88157C08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157c20
	if (ctx.cr6.eq) goto loc_88157C20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157C1C;
	sub_8815E528(ctx, base);
loc_88157C1C:
	// stw r30,392(r31)
	ctx.current_instruction = 0x88157C1C;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
loc_88157C20:
	// lwz r4,15280(r31)
	ctx.current_instruction = 0x88157C20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157c38
	if (ctx.cr6.eq) goto loc_88157C38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157C34;
	sub_8815E528(ctx, base);
loc_88157C34:
	// stw r30,15280(r31)
	ctx.current_instruction = 0x88157C34;
	REX_STORE_U32(ctx.r31.u32 + 15280, ctx.r30.u32);
loc_88157C38:
	// lwz r11,4012(r31)
	ctx.current_instruction = 0x88157C38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88157cc8
	if (ctx.cr6.eq) goto loc_88157CC8;
	// lwz r4,464(r31)
	ctx.current_instruction = 0x88157C44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157c5c
	if (ctx.cr6.eq) goto loc_88157C5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157C58;
	sub_8815E530(ctx, base);
loc_88157C58:
	// stw r30,464(r31)
	ctx.current_instruction = 0x88157C58;
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
loc_88157C5C:
	// lwz r4,15248(r31)
	ctx.current_instruction = 0x88157C5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15248);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157c74
	if (ctx.cr6.eq) goto loc_88157C74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157C70;
	sub_8815E530(ctx, base);
loc_88157C70:
	// stw r30,15248(r31)
	ctx.current_instruction = 0x88157C70;
	REX_STORE_U32(ctx.r31.u32 + 15248, ctx.r30.u32);
loc_88157C74:
	// lwz r4,3012(r31)
	ctx.current_instruction = 0x88157C74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3012);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157c8c
	if (ctx.cr6.eq) goto loc_88157C8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157C88;
	sub_8815E530(ctx, base);
loc_88157C88:
	// stw r30,3012(r31)
	ctx.current_instruction = 0x88157C88;
	REX_STORE_U32(ctx.r31.u32 + 3012, ctx.r30.u32);
loc_88157C8C:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88157C8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88157cb0
	if (!ctx.cr6.eq) goto loc_88157CB0;
	// lwz r4,3088(r31)
	ctx.current_instruction = 0x88157C98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157cb0
	if (ctx.cr6.eq) goto loc_88157CB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157CAC;
	sub_8815E530(ctx, base);
loc_88157CAC:
	// stw r30,3088(r31)
	ctx.current_instruction = 0x88157CAC;
	REX_STORE_U32(ctx.r31.u32 + 3088, ctx.r30.u32);
loc_88157CB0:
	// lwz r4,15304(r31)
	ctx.current_instruction = 0x88157CB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15304);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157cc8
	if (ctx.cr6.eq) goto loc_88157CC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157CC4;
	sub_8815E528(ctx, base);
loc_88157CC4:
	// stw r30,15304(r31)
	ctx.current_instruction = 0x88157CC4;
	REX_STORE_U32(ctx.r31.u32 + 15304, ctx.r30.u32);
loc_88157CC8:
	// lwz r4,15268(r31)
	ctx.current_instruction = 0x88157CC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157cf4
	if (ctx.cr6.eq) goto loc_88157CF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881b3540
	ctx.lr = 0x88157CDC;
	sub_881B3540(ctx, base);
loc_88157CDC:
	// lwz r4,15268(r31)
	ctx.current_instruction = 0x88157CDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15268);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157cf4
	if (ctx.cr6.eq) goto loc_88157CF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157CF0;
	sub_8815E528(ctx, base);
loc_88157CF0:
	// stw r30,15268(r31)
	ctx.current_instruction = 0x88157CF0;
	REX_STORE_U32(ctx.r31.u32 + 15268, ctx.r30.u32);
loc_88157CF4:
	// lwz r4,23972(r31)
	ctx.current_instruction = 0x88157CF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 23972);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157d0c
	if (ctx.cr6.eq) goto loc_88157D0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157D08;
	sub_8815E528(ctx, base);
loc_88157D08:
	// stw r30,23972(r31)
	ctx.current_instruction = 0x88157D08;
	REX_STORE_U32(ctx.r31.u32 + 23972, ctx.r30.u32);
loc_88157D0C:
	// lwz r4,22124(r31)
	ctx.current_instruction = 0x88157D0C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 22124);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157d24
	if (ctx.cr6.eq) goto loc_88157D24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157D20;
	sub_8815E528(ctx, base);
loc_88157D20:
	// stw r30,22124(r31)
	ctx.current_instruction = 0x88157D20;
	REX_STORE_U32(ctx.r31.u32 + 22124, ctx.r30.u32);
loc_88157D24:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20080
	ctx.r28.s64 = ctx.r28.s64 + -20080;
	// lwz r4,0(r28)
	ctx.current_instruction = 0x88157D2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157d44
	if (ctx.cr6.eq) goto loc_88157D44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157D40;
	sub_8815E528(ctx, base);
loc_88157D40:
	// stw r30,0(r28)
	ctx.current_instruction = 0x88157D40;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_88157D44:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20060
	ctx.r28.s64 = ctx.r28.s64 + -20060;
	// lwz r4,0(r28)
	ctx.current_instruction = 0x88157D4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157d64
	if (ctx.cr6.eq) goto loc_88157D64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e530
	ctx.lr = 0x88157D60;
	sub_8815E530(ctx, base);
loc_88157D60:
	// stw r30,0(r28)
	ctx.current_instruction = 0x88157D60;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_88157D64:
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,-20056
	ctx.r31.s64 = ctx.r31.s64 + -20056;
	// lwz r4,0(r31)
	ctx.current_instruction = 0x88157D6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88157d84
	if (ctx.cr6.eq) goto loc_88157D84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815e528
	ctx.lr = 0x88157D80;
	sub_8815E528(ctx, base);
loc_88157D80:
	// stw r30,0(r31)
	ctx.current_instruction = 0x88157D80;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_88157D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88188368) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88188368);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88188368;
	ctx.current_instruction = 0x88188368;
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x88188434
	if (!ctx.cr6.eq) goto loc_88188434;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88188424
	if (ctx.cr6.eq) goto loc_88188424;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x88188424
	if (ctx.cr6.eq) goto loc_88188424;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818842c
	if (ctx.cr6.eq) goto loc_8818842C;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818842c
	if (ctx.cr6.eq) goto loc_8818842C;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8818842c
	if (ctx.cr6.eq) goto loc_8818842C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818840c
	if (ctx.cr6.eq) goto loc_8818840C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818840c
	if (ctx.cr6.eq) goto loc_8818840C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8818840c
	if (ctx.cr6.eq) goto loc_8818840C;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88188424
	if (!ctx.cr6.eq) goto loc_88188424;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x88188424
	if (ctx.cr0.eq) goto loc_88188424;
loc_88188404:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8818840C:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188404
	if (!ctx.cr6.eq) goto loc_88188404;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188404
	if (!ctx.cr6.eq) goto loc_88188404;
loc_88188424:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8818842C:
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88188434:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88188510
	if (ctx.cr6.eq) goto loc_88188510;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x88188510
	if (ctx.cr6.eq) goto loc_88188510;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884ec
	if (ctx.cr6.eq) goto loc_881884EC;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884ec
	if (ctx.cr6.eq) goto loc_881884EC;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884c8
	if (ctx.cr6.eq) goto loc_881884C8;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884c8
	if (ctx.cr6.eq) goto loc_881884C8;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x881884c8
	if (ctx.cr6.eq) goto loc_881884C8;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88188424
	if (!ctx.cr6.eq) goto loc_88188424;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188508
	if (!ctx.cr6.eq) goto loc_88188508;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881884C8:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881884e4
	if (!ctx.cr6.eq) goto loc_881884E4;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_881884E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881884EC:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88188508
	if (!ctx.cr6.eq) goto loc_88188508;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_88188508:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88188510:
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8818C4A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8818C4A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8818C4A8) {
			switch (rex_dispatch_address) {
				case 0x8818C4B0:
				case 0x8818C4D8:
				case 0x8818C4F0:
				case 0x8818C558:
				case 0x8818C57C:
				case 0x8818C594:
				case 0x8818C59C:
				case 0x8818C5E4:
				case 0x8818C5FC:
				case 0x8818C604:
				case 0x8818C618:
				case 0x8818C69C:
				case 0x8818C6A4:
				case 0x8818C6D8:
				case 0x8818C6E0:
				case 0x8818C6F4:
				case 0x8818C6FC:
				case 0x8818C708:
				case 0x8818C724:
				case 0x8818C738:
				case 0x8818C750:
				case 0x8818C76C:
				case 0x8818C7C4:
				case 0x8818C7CC:
				case 0x8818C7EC:
				case 0x8818C808:
				case 0x8818C834:
				case 0x8818C83C:
				case 0x8818C860:
				case 0x8818C880:
				case 0x8818C8A0:
				case 0x8818C8F4:
				case 0x8818C944:
				case 0x8818C958:
				case 0x8818C960:
				case 0x8818CA08:
				case 0x8818CA10:
				case 0x8818CA30:
				case 0x8818CA38:
				case 0x8818CA78:
				case 0x8818CB1C:
				case 0x8818CB94:
				case 0x8818CBC8:
				case 0x8818CBD8:
				case 0x8818CC7C:
				case 0x8818CCF4:
				case 0x8818CD28:
				case 0x8818CDCC:
				case 0x8818CE88:
				case 0x8818CEBC:
				case 0x8818CF0C:
				case 0x8818CF40:
				case 0x8818CFB4:
				case 0x8818D01C:
				case 0x8818D050:
				case 0x8818D0A4:
				case 0x8818D0C8:
				case 0x8818D0E0:
				case 0x8818D0E8:
				case 0x8818D130:
				case 0x8818D148:
				case 0x8818D180:
				case 0x8818D1A0:
				case 0x8818D1C4:
				case 0x8818D1DC:
				case 0x8818D200:
				case 0x8818D218:
				case 0x8818D29C:
				case 0x8818D2EC:
				case 0x8818D300:
				case 0x8818D308:
				case 0x8818D330:
				case 0x8818D354:
				case 0x8818D36C:
				case 0x8818D374:
				case 0x8818D3BC:
				case 0x8818D3C4:
				case 0x8818D3E4:
				case 0x8818D3EC:
				case 0x8818D404:
				case 0x8818D40C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8818C4A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8818C4B0: goto loc_8818C4B0;
		case 0x8818C4D8: goto loc_8818C4D8;
		case 0x8818C4F0: goto loc_8818C4F0;
		case 0x8818C558: goto loc_8818C558;
		case 0x8818C57C: goto loc_8818C57C;
		case 0x8818C594: goto loc_8818C594;
		case 0x8818C59C: goto loc_8818C59C;
		case 0x8818C5E4: goto loc_8818C5E4;
		case 0x8818C5FC: goto loc_8818C5FC;
		case 0x8818C604: goto loc_8818C604;
		case 0x8818C618: goto loc_8818C618;
		case 0x8818C69C: goto loc_8818C69C;
		case 0x8818C6A4: goto loc_8818C6A4;
		case 0x8818C6D8: goto loc_8818C6D8;
		case 0x8818C6E0: goto loc_8818C6E0;
		case 0x8818C6F4: goto loc_8818C6F4;
		case 0x8818C6FC: goto loc_8818C6FC;
		case 0x8818C708: goto loc_8818C708;
		case 0x8818C724: goto loc_8818C724;
		case 0x8818C738: goto loc_8818C738;
		case 0x8818C750: goto loc_8818C750;
		case 0x8818C76C: goto loc_8818C76C;
		case 0x8818C7C4: goto loc_8818C7C4;
		case 0x8818C7CC: goto loc_8818C7CC;
		case 0x8818C7EC: goto loc_8818C7EC;
		case 0x8818C808: goto loc_8818C808;
		case 0x8818C834: goto loc_8818C834;
		case 0x8818C83C: goto loc_8818C83C;
		case 0x8818C860: goto loc_8818C860;
		case 0x8818C880: goto loc_8818C880;
		case 0x8818C8A0: goto loc_8818C8A0;
		case 0x8818C8F4: goto loc_8818C8F4;
		case 0x8818C944: goto loc_8818C944;
		case 0x8818C958: goto loc_8818C958;
		case 0x8818C960: goto loc_8818C960;
		case 0x8818CA08: goto loc_8818CA08;
		case 0x8818CA10: goto loc_8818CA10;
		case 0x8818CA30: goto loc_8818CA30;
		case 0x8818CA38: goto loc_8818CA38;
		case 0x8818CA78: goto loc_8818CA78;
		case 0x8818CB1C: goto loc_8818CB1C;
		case 0x8818CB94: goto loc_8818CB94;
		case 0x8818CBC8: goto loc_8818CBC8;
		case 0x8818CBD8: goto loc_8818CBD8;
		case 0x8818CC7C: goto loc_8818CC7C;
		case 0x8818CCF4: goto loc_8818CCF4;
		case 0x8818CD28: goto loc_8818CD28;
		case 0x8818CDCC: goto loc_8818CDCC;
		case 0x8818CE88: goto loc_8818CE88;
		case 0x8818CEBC: goto loc_8818CEBC;
		case 0x8818CF0C: goto loc_8818CF0C;
		case 0x8818CF40: goto loc_8818CF40;
		case 0x8818CFB4: goto loc_8818CFB4;
		case 0x8818D01C: goto loc_8818D01C;
		case 0x8818D050: goto loc_8818D050;
		case 0x8818D0A4: goto loc_8818D0A4;
		case 0x8818D0C8: goto loc_8818D0C8;
		case 0x8818D0E0: goto loc_8818D0E0;
		case 0x8818D0E8: goto loc_8818D0E8;
		case 0x8818D130: goto loc_8818D130;
		case 0x8818D148: goto loc_8818D148;
		case 0x8818D180: goto loc_8818D180;
		case 0x8818D1A0: goto loc_8818D1A0;
		case 0x8818D1C4: goto loc_8818D1C4;
		case 0x8818D1DC: goto loc_8818D1DC;
		case 0x8818D200: goto loc_8818D200;
		case 0x8818D218: goto loc_8818D218;
		case 0x8818D29C: goto loc_8818D29C;
		case 0x8818D2EC: goto loc_8818D2EC;
		case 0x8818D300: goto loc_8818D300;
		case 0x8818D308: goto loc_8818D308;
		case 0x8818D330: goto loc_8818D330;
		case 0x8818D354: goto loc_8818D354;
		case 0x8818D36C: goto loc_8818D36C;
		case 0x8818D374: goto loc_8818D374;
		case 0x8818D3BC: goto loc_8818D3BC;
		case 0x8818D3C4: goto loc_8818D3C4;
		case 0x8818D3E4: goto loc_8818D3E4;
		case 0x8818D3EC: goto loc_8818D3EC;
		case 0x8818D404: goto loc_8818D404;
		case 0x8818D40C: goto loc_8818D40C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8818C4B0;
	__savegprlr_25(ctx, base);
loc_8818C4B0:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8818C4B0;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r27,17356(r3)
	ctx.current_instruction = 0x8818C4BC;
	REX_STORE_U32(ctx.r3.u32 + 17356, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,19564(r3)
	ctx.current_instruction = 0x8818C4C4;
	REX_STORE_U32(ctx.r3.u32 + 19564, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,1948(r3)
	ctx.current_instruction = 0x8818C4CC;
	REX_STORE_U32(ctx.r3.u32 + 1948, ctx.r28.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x8818c320
	ctx.lr = 0x8818C4D8;
	sub_8818C320(ctx, base);
loc_8818C4D8:
	// lwz r3,24688(r30)
	ctx.current_instruction = 0x8818C4D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24688);
	// lwz r11,712(r3)
	ctx.current_instruction = 0x8818C4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c4f8
	if (ctx.cr6.eq) goto loc_8818C4F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8814d210
	ctx.lr = 0x8818C4F0;
	sub_8814D210(ctx, base);
loc_8818C4F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8818d3f8
	if (!ctx.cr6.eq) goto loc_8818D3F8;
loc_8818C4F8:
	// ld r11,3632(r30)
	ctx.current_instruction = 0x8818C4F8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 3632);
	// stw r27,21704(r30)
	ctx.current_instruction = 0x8818C4FC;
	REX_STORE_U32(ctx.r30.u32 + 21704, ctx.r27.u32);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8818c524
	if (!ctx.cr6.eq) goto loc_8818C524;
	// lwz r11,21540(r30)
	ctx.current_instruction = 0x8818C508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c51c
	if (ctx.cr6.eq) goto loc_8818C51C;
	// stw r28,21708(r30)
	ctx.current_instruction = 0x8818C514;
	REX_STORE_U32(ctx.r30.u32 + 21708, ctx.r28.u32);
	// b 0x8818c530
	goto loc_8818C530;
loc_8818C51C:
	// stw r27,21708(r30)
	ctx.current_instruction = 0x8818C51C;
	REX_STORE_U32(ctx.r30.u32 + 21708, ctx.r27.u32);
	// b 0x8818c530
	goto loc_8818C530;
loc_8818C524:
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818C524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,21708(r30)
	ctx.current_instruction = 0x8818C52C;
	REX_STORE_U32(ctx.r30.u32 + 21708, ctx.r10.u32);
loc_8818C530:
	// lwz r11,21540(r30)
	ctx.current_instruction = 0x8818C530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c544
	if (ctx.cr6.eq) goto loc_8818C544;
	// stw r27,20688(r30)
	ctx.current_instruction = 0x8818C53C;
	REX_STORE_U32(ctx.r30.u32 + 20688, ctx.r27.u32);
	// b 0x8818c548
	goto loc_8818C548;
loc_8818C544:
	// stw r28,20688(r30)
	ctx.current_instruction = 0x8818C544;
	REX_STORE_U32(ctx.r30.u32 + 20688, ctx.r28.u32);
loc_8818C548:
	// lwz r11,21776(r30)
	ctx.current_instruction = 0x8818C548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21776);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,288(r30)
	ctx.current_instruction = 0x8818C550;
	REX_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
	// bl 0x881c6808
	ctx.lr = 0x8818C558;
	sub_881C6808(ctx, base);
loc_8818C558:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8818c588
	if (!ctx.cr6.eq) goto loc_8818C588;
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818C564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818c5a8
	if (!ctx.cr6.eq) goto loc_8818C5A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,21784(r30)
	ctx.current_instruction = 0x8818C574;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 21784);
	// bl 0x881c9508
	ctx.lr = 0x8818C57C;
	sub_881C9508(ctx, base);
loc_8818C57C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818c624
	if (ctx.cr6.eq) goto loc_8818C624;
loc_8818C588:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b07b8
	ctx.lr = 0x8818C594;
	sub_881B07B8(ctx, base);
loc_8818C594:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818C59C;
	sub_881B31B0(ctx, base);
loc_8818C59C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818C5A8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818c624
	if (!ctx.cr6.eq) goto loc_8818C624;
	// lwz r11,14840(r30)
	ctx.current_instruction = 0x8818C5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14840);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,3428(r30)
	ctx.current_instruction = 0x8818C5B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3428);
	// lwz r9,21784(r30)
	ctx.current_instruction = 0x8818C5BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 21784);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r29,r6,r11
	ctx.r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x881c9508
	ctx.lr = 0x8818C5E4;
	sub_881C9508(ctx, base);
loc_8818C5E4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8818c610
	if (ctx.cr6.eq) goto loc_8818C610;
loc_8818C5F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x881b07b8
	ctx.lr = 0x8818C5FC;
	sub_881B07B8(ctx, base);
loc_8818C5FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818C604;
	sub_881B31B0(ctx, base);
loc_8818C604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818C610:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x881c9618
	ctx.lr = 0x8818C618;
	sub_881C9618(ctx, base);
loc_8818C618:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8818ca24
	if (!ctx.cr6.eq) goto loc_8818CA24;
loc_8818C624:
	// lwz r10,288(r30)
	ctx.current_instruction = 0x8818C624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8818c634
	if (!ctx.cr6.eq) goto loc_8818C634;
	// stw r27,3416(r30)
	ctx.current_instruction = 0x8818C630;
	REX_STORE_U32(ctx.r30.u32 + 3416, ctx.r27.u32);
loc_8818C634:
	// lwz r11,21776(r30)
	ctx.current_instruction = 0x8818C634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21776);
	// stw r28,1948(r30)
	ctx.current_instruction = 0x8818C638;
	REX_STORE_U32(ctx.r30.u32 + 1948, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c64c
	if (ctx.cr6.eq) goto loc_8818C64C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8818c750
	if (!ctx.cr6.eq) goto loc_8818C750;
loc_8818C64C:
	// lwz r11,14852(r30)
	ctx.current_instruction = 0x8818C64C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c750
	if (ctx.cr6.eq) goto loc_8818C750;
	// lwz r11,14836(r30)
	ctx.current_instruction = 0x8818C658;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818c740
	if (!ctx.cr6.gt) goto loc_8818C740;
	// lwz r11,3412(r30)
	ctx.current_instruction = 0x8818C664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3412);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x8818c6a8
	if (!ctx.cr6.eq) goto loc_8818C6A8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
	// lwz r11,22072(r30)
	ctx.current_instruction = 0x8818C678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22072);
	// lwz r10,3432(r30)
	ctx.current_instruction = 0x8818C67C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3432);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,3412(r30)
	ctx.current_instruction = 0x8818C68C;
	REX_STORE_U32(ctx.r30.u32 + 3412, ctx.r8.u32);
	// beq cr6,0x8818c69c
	if (ctx.cr6.eq) goto loc_8818C69C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a030
	ctx.lr = 0x8818C69C;
	sub_8819A030(ctx, base);
loc_8818C69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a130
	ctx.lr = 0x8818C6A4;
	sub_8819A130(ctx, base);
loc_8818C6A4:
	// b 0x8818c750
	goto loc_8818C750;
loc_8818C6A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818c710
	if (!ctx.cr6.eq) goto loc_8818C710;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8818c6ec
	if (!ctx.cr6.eq) goto loc_8818C6EC;
	// lwz r11,21708(r30)
	ctx.current_instruction = 0x8818C6BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21708);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3444(r30)
	ctx.current_instruction = 0x8818C6C4;
	REX_STORE_U32(ctx.r30.u32 + 3444, ctx.r28.u32);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21704(r30)
	ctx.current_instruction = 0x8818C6CC;
	REX_STORE_U32(ctx.r30.u32 + 21704, ctx.r28.u32);
	// stw r10,21708(r30)
	ctx.current_instruction = 0x8818C6D0;
	REX_STORE_U32(ctx.r30.u32 + 21708, ctx.r10.u32);
	// bl 0x881b07b8
	ctx.lr = 0x8818C6D8;
	sub_881B07B8(ctx, base);
loc_8818C6D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818C6E0;
	sub_881B31B0(ctx, base);
loc_8818C6E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818C6EC:
	// stw r27,3412(r30)
	ctx.current_instruction = 0x8818C6EC;
	REX_STORE_U32(ctx.r30.u32 + 3412, ctx.r27.u32);
	// bl 0x8819a030
	ctx.lr = 0x8818C6F4;
	sub_8819A030(ctx, base);
loc_8818C6F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a130
	ctx.lr = 0x8818C6FC;
	sub_8819A130(ctx, base);
loc_8818C6FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20688(r30)
	ctx.current_instruction = 0x8818C700;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// bl 0x881a95c8
	ctx.lr = 0x8818C708;
	sub_881A95C8(ctx, base);
loc_8818C708:
	// stw r27,3420(r30)
	ctx.current_instruction = 0x8818C708;
	REX_STORE_U32(ctx.r30.u32 + 3420, ctx.r27.u32);
	// b 0x8818c750
	goto loc_8818C750;
loc_8818C710:
	// lwz r11,3432(r30)
	ctx.current_instruction = 0x8818C710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c724
	if (ctx.cr6.eq) goto loc_8818C724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a030
	ctx.lr = 0x8818C724;
	sub_8819A030(ctx, base);
loc_8818C724:
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818C724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8818c738
	if (ctx.cr6.eq) goto loc_8818C738;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a130
	ctx.lr = 0x8818C738;
	sub_8819A130(ctx, base);
loc_8818C738:
	// stw r27,3420(r30)
	ctx.current_instruction = 0x8818C738;
	REX_STORE_U32(ctx.r30.u32 + 3420, ctx.r27.u32);
	// b 0x8818c750
	goto loc_8818C750;
loc_8818C740:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x88167b48
	ctx.lr = 0x8818C750;
	sub_88167B48(ctx, base);
loc_8818C750:
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818C750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c9cc
	if (ctx.cr6.eq) goto loc_8818C9CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8818c9cc
	if (ctx.cr6.eq) goto loc_8818C9CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e660
	ctx.lr = 0x8818C76C;
	sub_8815E660(ctx, base);
loc_8818C76C:
	// lwz r11,14852(r30)
	ctx.current_instruction = 0x8818C76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c7f0
	if (ctx.cr6.eq) goto loc_8818C7F0;
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818C778;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8818c7f0
	if (ctx.cr6.eq) goto loc_8818C7F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818c840
	if (!ctx.cr6.eq) goto loc_8818C840;
	// lwz r11,3412(r30)
	ctx.current_instruction = 0x8818C78C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818c7d8
	if (!ctx.cr6.eq) goto loc_8818C7D8;
	// lwz r11,22072(r30)
	ctx.current_instruction = 0x8818C798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818c7d8
	if (!ctx.cr6.eq) goto loc_8818C7D8;
	// lwz r11,21708(r30)
	ctx.current_instruction = 0x8818C7A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21708);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3444(r30)
	ctx.current_instruction = 0x8818C7AC;
	REX_STORE_U32(ctx.r30.u32 + 3444, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21704(r30)
	ctx.current_instruction = 0x8818C7B8;
	REX_STORE_U32(ctx.r30.u32 + 21704, ctx.r28.u32);
	// stw r10,21708(r30)
	ctx.current_instruction = 0x8818C7BC;
	REX_STORE_U32(ctx.r30.u32 + 21708, ctx.r10.u32);
	// bl 0x881b07b8
	ctx.lr = 0x8818C7C4;
	sub_881B07B8(ctx, base);
loc_8818C7C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818C7CC;
	sub_881B31B0(ctx, base);
loc_8818C7CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818C7D8:
	// lwz r11,3432(r30)
	ctx.current_instruction = 0x8818C7D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c840
	if (ctx.cr6.eq) goto loc_8818C840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a030
	ctx.lr = 0x8818C7EC;
	sub_8819A030(ctx, base);
loc_8818C7EC:
	// b 0x8818c840
	goto loc_8818C840;
loc_8818C7F0:
	// lwz r11,14836(r30)
	ctx.current_instruction = 0x8818C7F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818c80c
	if (!ctx.cr6.eq) goto loc_8818C80C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88167b48
	ctx.lr = 0x8818C808;
	sub_88167B48(ctx, base);
loc_8818C808:
	// b 0x8818c83c
	goto loc_8818C83C;
loc_8818C80C:
	// lwz r11,3412(r30)
	ctx.current_instruction = 0x8818C80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818c820
	if (!ctx.cr6.eq) goto loc_8818C820;
	// stw r27,3412(r30)
	ctx.current_instruction = 0x8818C818;
	REX_STORE_U32(ctx.r30.u32 + 3412, ctx.r27.u32);
	// b 0x8818c82c
	goto loc_8818C82C;
loc_8818C820:
	// lwz r11,3432(r30)
	ctx.current_instruction = 0x8818C820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c834
	if (ctx.cr6.eq) goto loc_8818C834;
loc_8818C82C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a030
	ctx.lr = 0x8818C834;
	sub_8819A030(ctx, base);
loc_8818C834:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8819a130
	ctx.lr = 0x8818C83C;
	sub_8819A130(ctx, base);
loc_8818C83C:
	// stw r27,3420(r30)
	ctx.current_instruction = 0x8818C83C;
	REX_STORE_U32(ctx.r30.u32 + 3420, ctx.r27.u32);
loc_8818C840:
	// lwz r11,4020(r30)
	ctx.current_instruction = 0x8818C840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c944
	if (ctx.cr6.eq) goto loc_8818C944;
	// lwz r11,14836(r30)
	ctx.current_instruction = 0x8818C84C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c860
	if (ctx.cr6.eq) goto loc_8818C860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881664c0
	ctx.lr = 0x8818C860;
	sub_881664C0(ctx, base);
loc_8818C860:
	// lwz r11,20728(r30)
	ctx.current_instruction = 0x8818C860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c880
	if (ctx.cr6.eq) goto loc_8818C880;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,20740(r30)
	ctx.current_instruction = 0x8818C870;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20740);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20736(r30)
	ctx.current_instruction = 0x8818C878;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20736);
	// bl 0x88195f30
	ctx.lr = 0x8818C880;
	sub_88195F30(ctx, base);
loc_8818C880:
	// lwz r11,20732(r30)
	ctx.current_instruction = 0x8818C880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818c8a0
	if (ctx.cr6.eq) goto loc_8818C8A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20748(r30)
	ctx.current_instruction = 0x8818C890;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20748);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20744(r30)
	ctx.current_instruction = 0x8818C898;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20744);
	// bl 0x88195f30
	ctx.lr = 0x8818C8A0;
	sub_88195F30(ctx, base);
loc_8818C8A0:
	// lwz r11,22224(r30)
	ctx.current_instruction = 0x8818C8A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818c944
	if (!ctx.cr6.eq) goto loc_8818C944;
	// lwz r11,204(r30)
	ctx.current_instruction = 0x8818C8AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r31,184(r30)
	ctx.current_instruction = 0x8818C8B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,15920(r30)
	ctx.current_instruction = 0x8818C8BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 15920);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r7,172(r30)
	ctx.current_instruction = 0x8818C8C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,164(r30)
	ctx.current_instruction = 0x8818C8D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,220(r30)
	ctx.current_instruction = 0x8818C8D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r4,3788(r30)
	ctx.current_instruction = 0x8818C8DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3788);
	// stw r28,100(r1)
	ctx.current_instruction = 0x8818C8E0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x8818C8E8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	ctx.current_instruction = 0x8818C8EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x8818C8F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8818C8F4:
	// lwz r11,208(r30)
	ctx.current_instruction = 0x8818C8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,224(r30)
	ctx.current_instruction = 0x8818C900;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r7,100(r1)
	ctx.current_instruction = 0x8818C908;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r31,196(r30)
	ctx.current_instruction = 0x8818C90C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 196);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,168(r30)
	ctx.current_instruction = 0x8818C914;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,15916(r30)
	ctx.current_instruction = 0x8818C91C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15916);
	// lwz r25,176(r30)
	ctx.current_instruction = 0x8818C920;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r5,3796(r30)
	ctx.current_instruction = 0x8818C924;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3796);
	// rlwinm r7,r25,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,3792(r30)
	ctx.current_instruction = 0x8818C92C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3792);
	// stw r28,108(r1)
	ctx.current_instruction = 0x8818C930;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r31,92(r1)
	ctx.current_instruction = 0x8818C934;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,84(r1)
	ctx.current_instruction = 0x8818C93C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x8818C944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8818C944:
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818C944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818c95c
	if (!ctx.cr6.eq) goto loc_8818C95C;
	// bl 0x881fc478
	ctx.lr = 0x8818C958;
	sub_881FC478(ctx, base);
loc_8818C958:
	// b 0x8818c960
	goto loc_8818C960;
loc_8818C95C:
	// bl 0x881fc2d0
	ctx.lr = 0x8818C960;
	sub_881FC2D0(ctx, base);
loc_8818C960:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8818ca1c
	if (!ctx.cr6.eq) goto loc_8818CA1C;
loc_8818C96C:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8818C970:
	// lwz r11,21776(r30)
	ctx.current_instruction = 0x8818C970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ca54
	if (ctx.cr6.eq) goto loc_8818CA54;
	// lwz r11,21780(r30)
	ctx.current_instruction = 0x8818C97C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 21780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818ca54
	if (!ctx.cr6.eq) goto loc_8818CA54;
	// lwz r11,14852(r30)
	ctx.current_instruction = 0x8818C988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818ca54
	if (ctx.cr6.eq) goto loc_8818CA54;
	// lwz r11,14836(r30)
	ctx.current_instruction = 0x8818C994;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8818ca54
	if (!ctx.cr6.gt) goto loc_8818CA54;
	// lwz r11,3412(r30)
	ctx.current_instruction = 0x8818C9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3412);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x8818ca44
	if (!ctx.cr6.eq) goto loc_8818CA44;
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818C9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
	// lwz r11,22072(r30)
	ctx.current_instruction = 0x8818C9B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22072);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,3412(r30)
	ctx.current_instruction = 0x8818C9C4;
	REX_STORE_U32(ctx.r30.u32 + 3412, ctx.r9.u32);
	// b 0x8818ca54
	goto loc_8818CA54;
loc_8818C9CC:
	// lwz r11,15572(r30)
	ctx.current_instruction = 0x8818C9CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15572);
	// stw r28,3724(r30)
	ctx.current_instruction = 0x8818C9D0;
	REX_STORE_U32(ctx.r30.u32 + 3724, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818c9ec
	if (!ctx.cr6.eq) goto loc_8818C9EC;
	// lwz r11,152(r30)
	ctx.current_instruction = 0x8818C9DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x8818c9f0
	if (!ctx.cr6.eq) goto loc_8818C9F0;
loc_8818C9EC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8818C9F0:
	// lwz r10,14884(r30)
	ctx.current_instruction = 0x8818C9F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 14884);
	// stw r11,15540(r30)
	ctx.current_instruction = 0x8818C9F4;
	REX_STORE_U32(ctx.r30.u32 + 15540, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818ca08
	if (ctx.cr6.eq) goto loc_8818CA08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8816ad70
	ctx.lr = 0x8818CA08;
	sub_8816AD70(ctx, base);
loc_8818CA08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881fbf08
	ctx.lr = 0x8818CA10;
	sub_881FBF08(ctx, base);
loc_8818CA10:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8818c96c
	if (ctx.cr6.eq) goto loc_8818C96C;
loc_8818CA1C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8818c970
	if (ctx.cr6.eq) goto loc_8818C970;
loc_8818CA24:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b07b8
	ctx.lr = 0x8818CA30;
	sub_881B07B8(ctx, base);
loc_8818CA30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818CA38;
	sub_881B31B0(ctx, base);
loc_8818CA38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818CA44:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818ca50
	if (!ctx.cr6.eq) goto loc_8818CA50;
	// stw r27,3412(r30)
	ctx.current_instruction = 0x8818CA4C;
	REX_STORE_U32(ctx.r30.u32 + 3412, ctx.r27.u32);
loc_8818CA50:
	// stw r27,3420(r30)
	ctx.current_instruction = 0x8818CA50;
	REX_STORE_U32(ctx.r30.u32 + 3420, ctx.r27.u32);
loc_8818CA54:
	// lwz r11,20680(r30)
	ctx.current_instruction = 0x8818CA54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
	// lwz r11,20684(r30)
	ctx.current_instruction = 0x8818CA60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20688(r30)
	ctx.current_instruction = 0x8818CA70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// bl 0x881a95c8
	ctx.lr = 0x8818CA78;
	sub_881A95C8(ctx, base);
loc_8818CA78:
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818CA78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// stw r28,21704(r30)
	ctx.current_instruction = 0x8818CA7C;
	REX_STORE_U32(ctx.r30.u32 + 21704, ctx.r28.u32);
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,21708(r30)
	ctx.current_instruction = 0x8818CA84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 21708);
	// lwz r9,21780(r30)
	ctx.current_instruction = 0x8818CA88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 21780);
	// stw r8,20688(r30)
	ctx.current_instruction = 0x8818CA8C;
	REX_STORE_U32(ctx.r30.u32 + 20688, ctx.r8.u32);
	// xori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 ^ 1;
	// stw r7,21708(r30)
	ctx.current_instruction = 0x8818CA94;
	REX_STORE_U32(ctx.r30.u32 + 21708, ctx.r7.u32);
	// stw r9,288(r30)
	ctx.current_instruction = 0x8818CA98;
	REX_STORE_U32(ctx.r30.u32 + 288, ctx.r9.u32);
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CA9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,28(r31)
	ctx.current_instruction = 0x8818CAA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8818cb40
	if (ctx.cr6.eq) goto loc_8818CB40;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CAAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CAB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8818cb30
	if (!ctx.cr6.lt) goto loc_8818CB30;
loc_8818CAC0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8818CAC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8818cb08
	if (ctx.cr6.gt) goto loc_8818CB08;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CACC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8818cc38
	if (ctx.cr6.gt) goto loc_8818CC38;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x8818CADC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CAE4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818CAF0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	ctx.current_instruction = 0x8818CAFC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818CB00;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// b 0x8818cb20
	goto loc_8818CB20;
loc_8818CB08:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8818CB08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818cb30
	if (!ctx.cr6.eq) goto loc_8818CB30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x8818CB1C;
	sub_88156188(ctx, base);
loc_8818CB1C:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CB1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_8818CB20:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CB20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8818cac0
	if (ctx.cr6.lt) goto loc_8818CAC0;
loc_8818CB30:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CB30;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
loc_8818CB38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
loc_8818CB40:
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CB40;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,28(r31)
	ctx.current_instruction = 0x8818CB44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818cbc8
	if (ctx.cr6.eq) goto loc_8818CBC8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CB50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8818cba4
	if (!ctx.cr6.lt) goto loc_8818CBA4;
loc_8818CB64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818cba4
	if (ctx.cr6.eq) goto loc_8818CBA4;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CB6C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x8818CB80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8818CB84;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8818cb94
	if (!ctx.cr0.lt) goto loc_8818CB94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CB94;
	sub_88156678(ctx, base);
loc_8818CB94:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CB94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818cb64
	if (ctx.cr6.gt) goto loc_8818CB64;
loc_8818CBA4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CBA4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818CBB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818CBB8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818cbc8
	if (!ctx.cr0.lt) goto loc_8818CBC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CBC8;
	sub_88156678(ctx, base);
loc_8818CBC8:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x8818CBC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x88156500
	ctx.lr = 0x8818CBD8;
	sub_88156500(ctx, base);
loc_8818CBD8:
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CBD8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CBDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CBE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8818cc90
	if (!ctx.cr6.lt) goto loc_8818CC90;
loc_8818CBF0:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8818CBF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8818cc68
	if (ctx.cr6.gt) goto loc_8818CC68;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CBFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8818cd88
	if (ctx.cr6.gt) goto loc_8818CD88;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x8818CC0C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CC14;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818CC20;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	ctx.current_instruction = 0x8818CC2C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818CC30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// b 0x8818cc80
	goto loc_8818CC80;
loc_8818CC38:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x8818cb30
	if (!ctx.cr6.lt) goto loc_8818CB30;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8818CC48;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CC4C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srd r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r5,r6,33,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 33) & 0x1FFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x8818cb38
	goto loc_8818CB38;
loc_8818CC68:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8818CC68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818cc90
	if (!ctx.cr6.eq) goto loc_8818CC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x8818CC7C;
	sub_88156188(ctx, base);
loc_8818CC7C:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CC7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_8818CC80:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CC80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8818cbf0
	if (ctx.cr6.lt) goto loc_8818CBF0;
loc_8818CC90:
	// lhz r11,0(r31)
	ctx.current_instruction = 0x8818CC90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
loc_8818CC94:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8818d084
	if (!ctx.cr6.eq) goto loc_8818D084;
loc_8818CCA0:
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CCA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r9,20(r31)
	ctx.current_instruction = 0x8818CCA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8818ce34
	if (!ctx.cr6.eq) goto loc_8818CE34;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CCB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8818cd04
	if (!ctx.cr6.lt) goto loc_8818CD04;
loc_8818CCC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818cd04
	if (ctx.cr6.eq) goto loc_8818CD04;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CCCC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x8818CCE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8818CCE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8818ccf4
	if (!ctx.cr0.lt) goto loc_8818CCF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CCF4;
	sub_88156678(ctx, base);
loc_8818CCF4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CCF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ccc4
	if (ctx.cr6.gt) goto loc_8818CCC4;
loc_8818CD04:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CD04;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818CD14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818CD18;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818cd28
	if (!ctx.cr0.lt) goto loc_8818CD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CD28;
	sub_88156678(ctx, base);
loc_8818CD28:
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CD28;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CD2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CD30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8818cde0
	if (!ctx.cr6.lt) goto loc_8818CDE0;
loc_8818CD40:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8818CD40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8818cdb8
	if (ctx.cr6.gt) goto loc_8818CDB8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CD4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8818ce04
	if (ctx.cr6.gt) goto loc_8818CE04;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x8818CD5C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CD64;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818CD70;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	ctx.current_instruction = 0x8818CD7C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818CD80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// b 0x8818cdd0
	goto loc_8818CDD0;
loc_8818CD88:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8818cc90
	if (!ctx.cr6.lt) goto loc_8818CC90;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8818CD98;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CD9C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srd r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r5,r6,48,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x8818cc94
	goto loc_8818CC94;
loc_8818CDB8:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8818CDB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818cde0
	if (!ctx.cr6.eq) goto loc_8818CDE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x8818CDCC;
	sub_88156188(ctx, base);
loc_8818CDCC:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CDCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_8818CDD0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CDD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8818cd40
	if (ctx.cr6.lt) goto loc_8818CD40;
loc_8818CDE0:
	// lhz r11,0(r31)
	ctx.current_instruction = 0x8818CDE0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
loc_8818CDE4:
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CDE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,20(r31)
	ctx.current_instruction = 0x8818CDEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8818d3f8
	if (!ctx.cr6.eq) goto loc_8818D3F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818cca0
	if (ctx.cr6.eq) goto loc_8818CCA0;
	// b 0x8818ce3c
	goto loc_8818CE3C;
loc_8818CE04:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8818cde0
	if (!ctx.cr6.lt) goto loc_8818CDE0;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8818CE14;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.current_instruction = 0x8818CE18;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// srd r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r4,r5,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8818cde4
	goto loc_8818CDE4;
loc_8818CE34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8818d084
	if (ctx.cr6.eq) goto loc_8818D084;
loc_8818CE3C:
	// cmplwi cr6,r11,268
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 268, ctx.xer);
	// bne cr6,0x8818cec0
	if (!ctx.cr6.eq) goto loc_8818CEC0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CE44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8818ce98
	if (!ctx.cr6.lt) goto loc_8818CE98;
loc_8818CE58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818ce98
	if (ctx.cr6.eq) goto loc_8818CE98;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CE60;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x8818CE74;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8818CE78;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8818ce88
	if (!ctx.cr0.lt) goto loc_8818CE88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CE88;
	sub_88156678(ctx, base);
loc_8818CE88:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CE88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818ce58
	if (ctx.cr6.gt) goto loc_8818CE58;
loc_8818CE98:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CE98;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818CEA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818CEAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818d09c
	if (!ctx.cr0.lt) goto loc_8818D09C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CEBC;
	sub_88156678(ctx, base);
loc_8818CEBC:
	// b 0x8818d09c
	goto loc_8818D09C;
loc_8818CEC0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8818d09c
	if (!ctx.cr6.eq) goto loc_8818D09C;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CEC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8818cf1c
	if (!ctx.cr6.lt) goto loc_8818CF1C;
loc_8818CEDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818cf1c
	if (ctx.cr6.eq) goto loc_8818CF1C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CEE4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x8818CEF8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8818CEFC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8818cf0c
	if (!ctx.cr0.lt) goto loc_8818CF0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CF0C;
	sub_88156678(ctx, base);
loc_8818CF0C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CF0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818cedc
	if (ctx.cr6.gt) goto loc_8818CEDC;
loc_8818CF1C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818CF1C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818CF2C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818CF30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818cf40
	if (!ctx.cr0.lt) goto loc_8818CF40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818CF40;
	sub_88156678(ctx, base);
loc_8818CF40:
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CF40;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CF44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8818cfc8
	if (!ctx.cr6.lt) goto loc_8818CFC8;
loc_8818CF58:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8818CF58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8818cfa0
	if (ctx.cr6.gt) goto loc_8818CFA0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CF64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8818d054
	if (ctx.cr6.gt) goto loc_8818D054;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.current_instruction = 0x8818CF74;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CF7C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	ctx.current_instruction = 0x8818CF88;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	ctx.current_instruction = 0x8818CF94;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	ctx.current_instruction = 0x8818CF98;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// b 0x8818cfb8
	goto loc_8818CFB8;
loc_8818CFA0:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8818CFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818cfc8
	if (!ctx.cr6.eq) goto loc_8818CFC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156188
	ctx.lr = 0x8818CFB4;
	sub_88156188(ctx, base);
loc_8818CFB4:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8818CFB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_8818CFB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CFB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8818cf58
	if (ctx.cr6.lt) goto loc_8818CF58;
loc_8818CFC8:
	// lhz r11,0(r31)
	ctx.current_instruction = 0x8818CFC8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
loc_8818CFCC:
	// cmplwi cr6,r11,268
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 268, ctx.xer);
	// bne cr6,0x8818d09c
	if (!ctx.cr6.eq) goto loc_8818D09C;
	// lwz r31,84(r30)
	ctx.current_instruction = 0x8818CFD4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// li r29,16
	ctx.r29.s64 = 16;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818CFDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8818d02c
	if (!ctx.cr6.lt) goto loc_8818D02C;
loc_8818CFEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818d02c
	if (ctx.cr6.eq) goto loc_8818D02C;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8818CFF4;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	ctx.current_instruction = 0x8818D008;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8818D00C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x8818d01c
	if (!ctx.cr0.lt) goto loc_8818D01C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D01C;
	sub_88156678(ctx, base);
loc_8818D01C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8818D01C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8818cfec
	if (ctx.cr6.gt) goto loc_8818CFEC;
loc_8818D02C:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8818D02C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	ctx.current_instruction = 0x8818D03C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	ctx.current_instruction = 0x8818D040;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x8818d09c
	if (!ctx.cr0.lt) goto loc_8818D09C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8818D050;
	sub_88156678(ctx, base);
loc_8818D050:
	// b 0x8818d09c
	goto loc_8818D09C;
loc_8818D054:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8818cfc8
	if (!ctx.cr6.lt) goto loc_8818CFC8;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x8818D064;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.current_instruction = 0x8818D068;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// srd r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r4,r5,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8818cfcc
	goto loc_8818CFCC;
loc_8818D084:
	// lwz r11,22184(r30)
	ctx.current_instruction = 0x8818D084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d09c
	if (ctx.cr6.eq) goto loc_8818D09C;
	// lwz r11,22048(r30)
	ctx.current_instruction = 0x8818D090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
loc_8818D09C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881c6808
	ctx.lr = 0x8818D0A4;
	sub_881C6808(ctx, base);
loc_8818D0A4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8818c588
	if (!ctx.cr6.eq) goto loc_8818C588;
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818D0B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818d0f4
	if (!ctx.cr6.eq) goto loc_8818D0F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,21784(r30)
	ctx.current_instruction = 0x8818D0C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 21784);
	// bl 0x881c9508
	ctx.lr = 0x8818D0C8;
	sub_881C9508(ctx, base);
loc_8818D0C8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8818d154
	if (ctx.cr6.eq) goto loc_8818D154;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b07b8
	ctx.lr = 0x8818D0E0;
	sub_881B07B8(ctx, base);
loc_8818D0E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818D0E8;
	sub_881B31B0(ctx, base);
loc_8818D0E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818D0F4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818d154
	if (!ctx.cr6.eq) goto loc_8818D154;
	// lwz r11,14840(r30)
	ctx.current_instruction = 0x8818D0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14840);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,3428(r30)
	ctx.current_instruction = 0x8818D104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3428);
	// lwz r9,21784(r30)
	ctx.current_instruction = 0x8818D108;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 21784);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r29,r6,r11
	ctx.r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x881c9508
	ctx.lr = 0x8818D130;
	sub_881C9508(ctx, base);
loc_8818D130:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8818c5f4
	if (!ctx.cr6.eq) goto loc_8818C5F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x881c9618
	ctx.lr = 0x8818D148;
	sub_881C9618(ctx, base);
loc_8818D148:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8818c588
	if (!ctx.cr6.eq) goto loc_8818C588;
loc_8818D154:
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818D154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818d164
	if (!ctx.cr6.eq) goto loc_8818D164;
	// stw r27,3416(r30)
	ctx.current_instruction = 0x8818D160;
	REX_STORE_U32(ctx.r30.u32 + 3416, ctx.r27.u32);
loc_8818D164:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,1948(r30)
	ctx.current_instruction = 0x8818D168;
	REX_STORE_U32(ctx.r30.u32 + 1948, ctx.r28.u32);
	// beq cr6,0x8818d380
	if (ctx.cr6.eq) goto loc_8818D380;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8818d380
	if (ctx.cr6.eq) goto loc_8818D380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e660
	ctx.lr = 0x8818D180;
	sub_8815E660(ctx, base);
loc_8818D180:
	// lwz r11,4020(r30)
	ctx.current_instruction = 0x8818D180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d2ec
	if (ctx.cr6.eq) goto loc_8818D2EC;
	// lwz r11,14836(r30)
	ctx.current_instruction = 0x8818D18C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d1a0
	if (ctx.cr6.eq) goto loc_8818D1A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881664c0
	ctx.lr = 0x8818D1A0;
	sub_881664C0(ctx, base);
loc_8818D1A0:
	// lwz r11,20728(r30)
	ctx.current_instruction = 0x8818D1A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d1dc
	if (ctx.cr6.eq) goto loc_8818D1DC;
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818D1AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818d1c8
	if (!ctx.cr6.eq) goto loc_8818D1C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881a9838
	ctx.lr = 0x8818D1C4;
	sub_881A9838(ctx, base);
loc_8818D1C4:
	// stw r28,15628(r30)
	ctx.current_instruction = 0x8818D1C4;
	REX_STORE_U32(ctx.r30.u32 + 15628, ctx.r28.u32);
loc_8818D1C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,20740(r30)
	ctx.current_instruction = 0x8818D1CC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20740);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20736(r30)
	ctx.current_instruction = 0x8818D1D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20736);
	// bl 0x88195f30
	ctx.lr = 0x8818D1DC;
	sub_88195F30(ctx, base);
loc_8818D1DC:
	// lwz r11,20732(r30)
	ctx.current_instruction = 0x8818D1DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d218
	if (ctx.cr6.eq) goto loc_8818D218;
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818D1E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818d204
	if (!ctx.cr6.eq) goto loc_8818D204;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881a9838
	ctx.lr = 0x8818D200;
	sub_881A9838(ctx, base);
loc_8818D200:
	// stw r28,15628(r30)
	ctx.current_instruction = 0x8818D200;
	REX_STORE_U32(ctx.r30.u32 + 15628, ctx.r28.u32);
loc_8818D204:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20748(r30)
	ctx.current_instruction = 0x8818D208;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20748);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20744(r30)
	ctx.current_instruction = 0x8818D210;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20744);
	// bl 0x88195f30
	ctx.lr = 0x8818D218;
	sub_88195F30(ctx, base);
loc_8818D218:
	// lwz r11,22224(r30)
	ctx.current_instruction = 0x8818D218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 22224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818d2ec
	if (!ctx.cr6.eq) goto loc_8818D2EC;
	// lwz r11,20728(r30)
	ctx.current_instruction = 0x8818D224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d23c
	if (ctx.cr6.eq) goto loc_8818D23C;
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818D230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d254
	if (ctx.cr6.eq) goto loc_8818D254;
loc_8818D23C:
	// lwz r11,20732(r30)
	ctx.current_instruction = 0x8818D23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d2ec
	if (ctx.cr6.eq) goto loc_8818D2EC;
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818D248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8818d2ec
	if (!ctx.cr6.eq) goto loc_8818D2EC;
loc_8818D254:
	// lwz r11,204(r30)
	ctx.current_instruction = 0x8818D254;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,184(r30)
	ctx.current_instruction = 0x8818D25C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// li r8,1
	ctx.r8.s64 = 1;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r4,15920(r30)
	ctx.current_instruction = 0x8818D268;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 15920);
	// lwz r11,172(r30)
	ctx.current_instruction = 0x8818D26C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,92(r1)
	ctx.current_instruction = 0x8818D274;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,220(r30)
	ctx.current_instruction = 0x8818D280;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// stw r10,84(r1)
	ctx.current_instruction = 0x8818D284;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r10,164(r30)
	ctx.current_instruction = 0x8818D28C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r4,3788(r30)
	ctx.current_instruction = 0x8818D290;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3788);
	// stw r28,100(r1)
	ctx.current_instruction = 0x8818D294;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bctrl 
	ctx.lr = 0x8818D29C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8818D29C:
	// lwz r7,208(r30)
	ctx.current_instruction = 0x8818D29C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r11,196(r30)
	ctx.current_instruction = 0x8818D2A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 196);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// stw r7,100(r1)
	ctx.current_instruction = 0x8818D2AC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r31,168(r30)
	ctx.current_instruction = 0x8818D2B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r29,15916(r30)
	ctx.current_instruction = 0x8818D2B8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 15916);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,176(r30)
	ctx.current_instruction = 0x8818D2C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,224(r30)
	ctx.current_instruction = 0x8818D2C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,3796(r30)
	ctx.current_instruction = 0x8818D2D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 3796);
	// lwz r4,3792(r30)
	ctx.current_instruction = 0x8818D2D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3792);
	// stw r28,108(r1)
	ctx.current_instruction = 0x8818D2D8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x8818D2E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	ctx.current_instruction = 0x8818D2E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bctrl 
	ctx.lr = 0x8818D2EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8818D2EC:
	// lwz r11,288(r30)
	ctx.current_instruction = 0x8818D2EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818d304
	if (!ctx.cr6.eq) goto loc_8818D304;
	// bl 0x881fc478
	ctx.lr = 0x8818D300;
	sub_881FC478(ctx, base);
loc_8818D300:
	// b 0x8818d308
	goto loc_8818D308;
loc_8818D304:
	// bl 0x881fc2d0
	ctx.lr = 0x8818D308;
	sub_881FC2D0(ctx, base);
loc_8818D308:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8818d3d0
	if (!ctx.cr6.eq) goto loc_8818D3D0;
loc_8818D314:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8818D318:
	// lwz r11,15628(r30)
	ctx.current_instruction = 0x8818D318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d330
	if (ctx.cr6.eq) goto loc_8818D330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20688(r30)
	ctx.current_instruction = 0x8818D328;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// bl 0x881a9838
	ctx.lr = 0x8818D330;
	sub_881A9838(ctx, base);
loc_8818D330:
	// lwz r11,20680(r30)
	ctx.current_instruction = 0x8818D330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
	// lwz r11,20684(r30)
	ctx.current_instruction = 0x8818D33C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818d3f8
	if (ctx.cr6.eq) goto loc_8818D3F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20688(r30)
	ctx.current_instruction = 0x8818D34C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// bl 0x881a95c8
	ctx.lr = 0x8818D354;
	sub_881A95C8(ctx, base);
loc_8818D354:
	// lwz r11,20688(r30)
	ctx.current_instruction = 0x8818D354;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20688);
	// li r4,0
	ctx.r4.s64 = 0;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20688(r30)
	ctx.current_instruction = 0x8818D364;
	REX_STORE_U32(ctx.r30.u32 + 20688, ctx.r10.u32);
	// bl 0x881b07b8
	ctx.lr = 0x8818D36C;
	sub_881B07B8(ctx, base);
loc_8818D36C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818D374;
	sub_881B31B0(ctx, base);
loc_8818D374:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818D380:
	// lwz r11,15572(r30)
	ctx.current_instruction = 0x8818D380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15572);
	// stw r28,3724(r30)
	ctx.current_instruction = 0x8818D384;
	REX_STORE_U32(ctx.r30.u32 + 3724, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8818d3a0
	if (!ctx.cr6.eq) goto loc_8818D3A0;
	// lwz r11,152(r30)
	ctx.current_instruction = 0x8818D390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x8818d3a4
	if (!ctx.cr6.eq) goto loc_8818D3A4;
loc_8818D3A0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8818D3A4:
	// lwz r10,14884(r30)
	ctx.current_instruction = 0x8818D3A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 14884);
	// stw r11,15540(r30)
	ctx.current_instruction = 0x8818D3A8;
	REX_STORE_U32(ctx.r30.u32 + 15540, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8818d3bc
	if (ctx.cr6.eq) goto loc_8818D3BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8816ad70
	ctx.lr = 0x8818D3BC;
	sub_8816AD70(ctx, base);
loc_8818D3BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881fbf08
	ctx.lr = 0x8818D3C4;
	sub_881FBF08(ctx, base);
loc_8818D3C4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8818d314
	if (ctx.cr6.eq) goto loc_8818D314;
loc_8818D3D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8818d318
	if (ctx.cr6.eq) goto loc_8818D318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b07b8
	ctx.lr = 0x8818D3E4;
	sub_881B07B8(ctx, base);
loc_8818D3E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818D3EC;
	sub_881B31B0(ctx, base);
loc_8818D3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8818D3F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b07b8
	ctx.lr = 0x8818D404;
	sub_881B07B8(ctx, base);
loc_8818D404:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881b31b0
	ctx.lr = 0x8818D40C;
	sub_881B31B0(ctx, base);
loc_8818D40C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B2D30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B2D30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B2D30) {
			switch (rex_dispatch_address) {
				case 0x881B2D38:
				case 0x881B30B0:
				case 0x881B30DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B2D30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B2D38: goto loc_881B2D38;
		case 0x881B30B0: goto loc_881B30B0;
		case 0x881B30DC: goto loc_881B30DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B2D38;
	__savegprlr_14(ctx, base);
loc_881B2D38:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881B2D38;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,332(r1)
	ctx.current_instruction = 0x881B2D40;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r4,268(r1)
	ctx.current_instruction = 0x881B2D44;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,276(r1)
	ctx.current_instruction = 0x881B2D4C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	ctx.current_instruction = 0x881B2D54;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x881B2D5C;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881b308c
	if (!ctx.cr6.gt) goto loc_881B308C;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,80(r1)
	ctx.current_instruction = 0x881B2D6C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r7,-3
	ctx.r4.s64 = ctx.r7.s64 + -3;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// addi r19,r7,-4
	ctx.r19.s64 = ctx.r7.s64 + -4;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
	// stw r6,84(r1)
	ctx.current_instruction = 0x881B2D90;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r7,-8
	ctx.r31.s64 = ctx.r7.s64 + -8;
	// addi r29,r7,-6
	ctx.r29.s64 = ctx.r7.s64 + -6;
	// rlwinm r15,r4,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r9.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r16,r19,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r5,r30
	ctx.r18.u64 = ctx.r5.u64 + ctx.r30.u64;
	// mullw r17,r31,r10
	ctx.r17.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// mullw r22,r8,r10
	ctx.r22.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r21,r19,r10
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r10.s32);
	// mullw r20,r29,r10
	ctx.r20.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r23,r9,r11
	ctx.r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r27,255
	ctx.r27.s64 = 255;
loc_881B2DD0:
	// lbz r8,0(r23)
	ctx.current_instruction = 0x881B2DD0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// add r3,r6,r23
	ctx.r3.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lbz r5,0(r11)
	ctx.current_instruction = 0x881B2DD8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// rotlwi r31,r8,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r29,r6,r23
	ctx.current_instruction = 0x881B2DE4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// mulli r24,r5,34
	ctx.r24.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(34));
	// lwz r5,84(r1)
	ctx.current_instruction = 0x881B2DEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + ctx.r23.u64;
	// subf r8,r8,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r8.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,0(r30)
	ctx.current_instruction = 0x881B2E08;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x881B2E0C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r23)
	ctx.current_instruction = 0x881B2E10;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// rotlwi r24,r29,3
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// mulli r31,r8,25
	ctx.r31.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r8,r29,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r29.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,4(r30)
	ctx.current_instruction = 0x881B2E2C;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lbzx r8,r6,r23
	ctx.current_instruction = 0x881B2E30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// lbz r24,0(r23)
	ctx.current_instruction = 0x881B2E34;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// lbz r29,0(r5)
	ctx.current_instruction = 0x881B2E38;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r31,0(r11)
	ctx.current_instruction = 0x881B2E3C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r31,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// rotlwi r14,r24,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r24.u32, 3);
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r14
	ctx.r24.u64 = ctx.r14.u64 - ctx.r24.u64;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,8(r30)
	ctx.current_instruction = 0x881B2E6C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lbzx r8,r6,r23
	ctx.current_instruction = 0x881B2E70;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// lbz r24,0(r11)
	ctx.current_instruction = 0x881B2E74;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r23)
	ctx.current_instruction = 0x881B2E78;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// rotlwi r14,r31,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// rotlwi r29,r8,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r31,r31,r14
	ctx.r31.u64 = ctx.r14.u64 - ctx.r31.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r8,r24,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r24.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,12(r30)
	ctx.current_instruction = 0x881B2EA4;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// ble cr6,0x881b2f74
	if (!ctx.cr6.gt) goto loc_881B2F74;
	// addi r8,r19,-5
	ctx.r8.s64 = ctx.r19.s64 + -5;
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r28,r9,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r9.u64;
	// addi r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 1;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// subf r27,r9,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881B2ED4:
	// lbz r29,0(r8)
	ctx.current_instruction = 0x881B2ED4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r25,0(r3)
	ctx.current_instruction = 0x881B2ED8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lbz r24,0(r5)
	ctx.current_instruction = 0x881B2EE0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r14,r25,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r25.u32, 3);
	// lbzux r26,r28,r9
	ctx.current_instruction = 0x881B2EE8;
	ea = ctx.r28.u32 + ctx.r9.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// subf r29,r24,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r24.u64;
	// subf r25,r25,r14
	ctx.r25.u64 = ctx.r14.u64 - ctx.r25.u64;
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// srawi r29,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 5;
	// stw r29,4(r31)
	ctx.current_instruction = 0x881B2F10;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lbz r29,0(r8)
	ctx.current_instruction = 0x881B2F14;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r24,0(r3)
	ctx.current_instruction = 0x881B2F1C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzux r26,r27,r9
	ctx.current_instruction = 0x881B2F24;
	ea = ctx.r27.u32 + ctx.r9.u32;
	ctx.r26.u64 = REX_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// lbz r25,0(r5)
	ctx.current_instruction = 0x881B2F28;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// subf r29,r29,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r29.u64;
	// rotlwi r14,r24,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r24.u32, 3);
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r14
	ctx.r24.u64 = ctx.r14.u64 - ctx.r24.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// srawi r29,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 5;
	// stwu r29,8(r31)
	ctx.current_instruction = 0x881B2F5C;
	ea = 8 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bdnz 0x881b2ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2ED4;
	// lwz r28,80(r1)
	ctx.current_instruction = 0x881B2F64;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,255
	ctx.r27.s64 = 255;
	// lwz r25,300(r1)
	ctx.current_instruction = 0x881B2F6C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r26,308(r1)
	ctx.current_instruction = 0x881B2F70;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_881B2F74:
	// lbzx r3,r21,r11
	ctx.current_instruction = 0x881B2F74;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzx r8,r20,r11
	ctx.current_instruction = 0x881B2F7C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// rotlwi r31,r3,3
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// lbzx r29,r22,r11
	ctx.current_instruction = 0x881B2F84;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// stwx r8,r16,r30
	ctx.current_instruction = 0x881B2FAC;
	REX_STORE_U32(ctx.r16.u32 + ctx.r30.u32, ctx.r8.u32);
	// lbzx r5,r20,r11
	ctx.current_instruction = 0x881B2FB0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// lbzx r31,r21,r11
	ctx.current_instruction = 0x881B2FB4;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// lbzx r3,r17,r11
	ctx.current_instruction = 0x881B2FB8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r11.u32);
	// lbzx r8,r22,r11
	ctx.current_instruction = 0x881B2FBC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// rotlwi r29,r31,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// stwx r3,r15,r30
	ctx.current_instruction = 0x881B2FEC;
	REX_STORE_U32(ctx.r15.u32 + ctx.r30.u32, ctx.r3.u32);
	// lbzx r8,r22,r11
	ctx.current_instruction = 0x881B2FF0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r5,r21,r11
	ctx.current_instruction = 0x881B2FF4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// rotlwi r3,r5,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mulli r8,r8,25
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r5,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 5;
	// stwx r5,r4,r30
	ctx.current_instruction = 0x881B3010;
	REX_STORE_U32(ctx.r4.u32 + ctx.r30.u32, ctx.r5.u32);
	// lbzx r3,r22,r11
	ctx.current_instruction = 0x881B3014;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r8,r21,r11
	ctx.current_instruction = 0x881B3018;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r11.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r20,r11
	ctx.current_instruction = 0x881B3024;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// mulli r3,r3,34
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(34));
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// stw r3,-4(r18)
	ctx.current_instruction = 0x881B303C;
	REX_STORE_U32(ctx.r18.u32 + -4, ctx.r3.u32);
	// ble cr6,0x881b3078
	if (!ctx.cr6.gt) goto loc_881B3078;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_881B3050:
	// lwz r8,0(r5)
	ctx.current_instruction = 0x881B3050;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x881b3068
	if (!ctx.cr6.gt) goto loc_881B3068;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
loc_881B3068:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbux r8,r3,r10
	ctx.current_instruction = 0x881B3070;
	ea = ctx.r3.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x881b3050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B3050;
loc_881B3078:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,80(r1)
	ctx.current_instruction = 0x881B3080;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// bne 0x881b2dd0
	if (!ctx.cr0.eq) goto loc_881B2DD0;
loc_881B308C:
	// lwz r7,324(r1)
	ctx.current_instruction = 0x881B308C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881b30e8
	if (!ctx.cr6.gt) goto loc_881B30E8;
	// lwz r3,268(r1)
	ctx.current_instruction = 0x881B3098;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_881B30A0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8813acb0
	ctx.lr = 0x881B30B0;
	sub_8813ACB0(ctx, base);
loc_881B30B0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b30a0
	if (!ctx.cr0.eq) goto loc_881B30A0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x881b30e8
	if (!ctx.cr6.gt) goto loc_881B30E8;
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881B30C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_881B30CC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8813acb0
	ctx.lr = 0x881B30DC;
	sub_8813ACB0(ctx, base);
loc_881B30DC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x881b30cc
	if (!ctx.cr0.eq) goto loc_881B30CC;
loc_881B30E8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C2A68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C2A68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C2A68;
	ctx.current_instruction = 0x881C2A68;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881C2A68;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x881C2A6C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r7)
	ctx.current_instruction = 0x881C2A70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,136(r3)
	ctx.current_instruction = 0x881C2A74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r11,0(r6)
	ctx.current_instruction = 0x881C2A7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,140(r3)
	ctx.current_instruction = 0x881C2A84;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881c2aa0
	if (ctx.cr6.eq) goto loc_881C2AA0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// b 0x881c2aa8
	goto loc_881C2AA8;
loc_881C2AA0:
	// li r3,-8
	ctx.r3.s64 = -8;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_881C2AA8:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x881c2b40
	if (ctx.cr6.eq) goto loc_881C2B40;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x881c2ae0
	if (!ctx.cr6.lt) goto loc_881C2AE0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x881c2af4
	goto loc_881C2AF4;
loc_881C2AE0:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x881c2af4
	if (!ctx.cr6.gt) goto loc_881C2AF4;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_881C2AF4:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// stw r11,0(r6)
	ctx.current_instruction = 0x881C2AF8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x881c2b1c
	if (!ctx.cr6.lt) goto loc_881C2B1C;
	// subf r9,r8,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	ctx.current_instruction = 0x881C2B0C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C2B10;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C2B14;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C2B1C:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881c2b44
	if (!ctx.cr6.gt) goto loc_881C2B44;
	// subf r9,r8,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	ctx.current_instruction = 0x881C2B30;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C2B34;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C2B38;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C2B40:
	// stw r11,0(r6)
	ctx.current_instruction = 0x881C2B40;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_881C2B44:
	// stw r10,0(r7)
	ctx.current_instruction = 0x881C2B44;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881C2B48;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881C2B4C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C3E50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C3E50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C3E50) {
			switch (rex_dispatch_address) {
				case 0x881C3E58:
				case 0x881C3F0C:
				case 0x881C3F3C:
				case 0x881C3FA4:
				case 0x881C3FBC:
				case 0x881C4094:
				case 0x881C40E0:
				case 0x881C41A8:
				case 0x881C41DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C3E50;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C3E58: goto loc_881C3E58;
		case 0x881C3F0C: goto loc_881C3F0C;
		case 0x881C3F3C: goto loc_881C3F3C;
		case 0x881C3FA4: goto loc_881C3FA4;
		case 0x881C3FBC: goto loc_881C3FBC;
		case 0x881C4094: goto loc_881C4094;
		case 0x881C40E0: goto loc_881C40E0;
		case 0x881C41A8: goto loc_881C41A8;
		case 0x881C41DC: goto loc_881C41DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881C3E58;
	__savegprlr_14(ctx, base);
loc_881C3E58:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881C3E58;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// stw r8,300(r1)
	ctx.current_instruction = 0x881C3E60;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r7,136(r3)
	ctx.current_instruction = 0x881C3E68;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,1776(r3)
	ctx.current_instruction = 0x881C3E70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r21,r7,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r21,r11
	ctx.r5.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r11.s32);
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,1784(r3)
	ctx.current_instruction = 0x881C3E94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r17,r7,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r19,r7,4,0,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r14,r8,r9
	ctx.r14.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x881c3fd4
	if (!ctx.cr6.eq) goto loc_881C3FD4;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881c3f54
	if (!ctx.cr6.gt) goto loc_881C3F54;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_881C3ED4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x881c3f3c
	if (ctx.cr6.eq) goto loc_881C3F3C;
	// lhz r10,0(r29)
	ctx.current_instruction = 0x881C3EDC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881c3f0c
	if (!ctx.cr6.eq) goto loc_881C3F0C;
	// lhz r10,-2(r29)
	ctx.current_instruction = 0x881C3EE8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881c3f0c
	if (!ctx.cr6.eq) goto loc_881C3F0C;
	// lwz r10,3236(r31)
	ctx.current_instruction = 0x881C3EF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3236);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,3016(r31)
	ctx.current_instruction = 0x881C3EFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881C3F0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C3F0C:
	// lhz r10,0(r27)
	ctx.current_instruction = 0x881C3F0C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881c3f3c
	if (!ctx.cr6.eq) goto loc_881C3F3C;
	// lhz r10,-2(r27)
	ctx.current_instruction = 0x881C3F18;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881c3f3c
	if (!ctx.cr6.eq) goto loc_881C3F3C;
	// lwz r10,3236(r31)
	ctx.current_instruction = 0x881C3F24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3236);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,3024(r31)
	ctx.current_instruction = 0x881C3F2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881C3F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C3F3C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x881c3ed4
	if (ctx.cr6.lt) goto loc_881C3ED4;
loc_881C3F54:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881C3F54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c3fd4
	if (!ctx.cr6.gt) goto loc_881C3FD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_881C3F6C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881c3fbc
	if (ctx.cr6.eq) goto loc_881C3FBC;
	// lhz r10,0(r29)
	ctx.current_instruction = 0x881C3F74;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881c3fbc
	if (!ctx.cr6.eq) goto loc_881C3FBC;
	// lhz r10,-2(r29)
	ctx.current_instruction = 0x881C3F80;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x881c3fbc
	if (!ctx.cr6.eq) goto loc_881C3FBC;
	// lwz r10,3236(r31)
	ctx.current_instruction = 0x881C3F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3236);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r11,3028(r31)
	ctx.current_instruction = 0x881C3F94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881C3FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C3FA4:
	// lwz r9,3236(r31)
	ctx.current_instruction = 0x881C3FA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3236);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r11,3036(r31)
	ctx.current_instruction = 0x881C3FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x881C3FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C3FBC:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881C3FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881c3f6c
	if (ctx.cr6.lt) goto loc_881C3F6C;
loc_881C3FD4:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x881c4100
	if (!ctx.cr6.gt) goto loc_881C4100;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r16
	ctx.r10.u64 = ctx.r16.u32 == 0 ? 32 : __builtin_clz(ctx.r16.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r20,r10,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// add r23,r11,r24
	ctx.r23.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r22,r11,r24
	ctx.r22.u64 = ctx.r24.u64 - ctx.r11.u64;
loc_881C3FFC:
	// lwz r11,300(r1)
	ctx.current_instruction = 0x881C3FFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c4018
	if (!ctx.cr6.eq) goto loc_881C4018;
	// lhz r10,0(r22)
	ctx.current_instruction = 0x881C4008;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r22.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x881c401c
	if (ctx.cr6.eq) goto loc_881C401C;
loc_881C4018:
	// li r8,0
	ctx.r8.s64 = 0;
loc_881C401C:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x881c404c
	if (ctx.cr6.eq) goto loc_881C404C;
	// lhz r11,0(r24)
	ctx.current_instruction = 0x881C402C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// lhz r10,0(r23)
	ctx.current_instruction = 0x881C4030;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// addi r7,r10,-16384
	ctx.r7.s64 = ctx.r10.s64 + -16384;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r29,r6,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r27,r5,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_881C404C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881c405c
	if (!ctx.cr6.eq) goto loc_881C405C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881c409c
	if (ctx.cr6.eq) goto loc_881C409C;
loc_881C405C:
	// lwz r11,3240(r31)
	ctx.current_instruction = 0x881C405C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3240);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,3020(r31)
	ctx.current_instruction = 0x881C4064;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3020);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881C4070;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881C407C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,3016(r31)
	ctx.current_instruction = 0x881C4080;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881C4088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881C4094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C4094:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x881c40a4
	if (!ctx.cr6.eq) goto loc_881C40A4;
loc_881C409C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x881c40e0
	if (ctx.cr6.eq) goto loc_881C40E0;
loc_881C40A4:
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881C40A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,3240(r31)
	ctx.current_instruction = 0x881C40AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3240);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r3,r7,r26
	ctx.r3.u64 = ctx.r7.u64 + ctx.r26.u64;
	// lwz r4,3024(r31)
	ctx.current_instruction = 0x881C40B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// lwz r11,3016(r31)
	ctx.current_instruction = 0x881C40BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// rlwinm r6,r3,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// add r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 + ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881C40E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C40E0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x881c3ffc
	if (ctx.cr6.lt) goto loc_881C3FFC;
loc_881C4100:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881C4100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c41f8
	if (!ctx.cr6.gt) goto loc_881C41F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// subf r26,r28,r15
	ctx.r26.u64 = ctx.r15.u64 - ctx.r28.u64;
loc_881C411C:
	// lwz r11,300(r1)
	ctx.current_instruction = 0x881C411C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c4144
	if (!ctx.cr6.eq) goto loc_881C4144;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881C4128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r27,1
	ctx.r27.s64 = 1;
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r14
	ctx.current_instruction = 0x881C4138;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r14.u32);
	// cmplwi cr6,r8,16384
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16384, ctx.xer);
	// beq cr6,0x881c4148
	if (ctx.cr6.eq) goto loc_881C4148;
loc_881C4144:
	// li r27,0
	ctx.r27.s64 = 0;
loc_881C4148:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x881c4160
	if (!ctx.cr6.eq) goto loc_881C4160;
	// lhz r10,0(r24)
	ctx.current_instruction = 0x881C4150;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// beq cr6,0x881c4164
	if (ctx.cr6.eq) goto loc_881C4164;
loc_881C4160:
	// li r29,0
	ctx.r29.s64 = 0;
loc_881C4164:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x881c4174
	if (!ctx.cr6.eq) goto loc_881C4174;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x881c41dc
	if (ctx.cr6.eq) goto loc_881C41DC;
loc_881C4174:
	// lwz r3,3240(r31)
	ctx.current_instruction = 0x881C4174;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3240);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,3028(r31)
	ctx.current_instruction = 0x881C417C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r11,3032(r31)
	ctx.current_instruction = 0x881C4184;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// add r6,r28,r26
	ctx.r6.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881C4190;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x881C41A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C41A8:
	// lwz r11,3040(r31)
	ctx.current_instruction = 0x881C41A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3040);
	// lwz r4,3036(r31)
	ctx.current_instruction = 0x881C41AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881C41B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lwz r11,3240(r31)
	ctx.current_instruction = 0x881C41D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881C41DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C41DC:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881C41DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881c411c
	if (ctx.cr6.lt) goto loc_881C411C;
loc_881C41F8:
	// lwz r11,3020(r31)
	ctx.current_instruction = 0x881C41F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3020);
	// lwz r10,3024(r31)
	ctx.current_instruction = 0x881C41FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// lwz r9,3032(r31)
	ctx.current_instruction = 0x881C4200;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// lwz r8,3040(r31)
	ctx.current_instruction = 0x881C4204;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3040);
	// lwz r7,3028(r31)
	ctx.current_instruction = 0x881C4208;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// lwz r6,3036(r31)
	ctx.current_instruction = 0x881C420C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// stw r11,3024(r31)
	ctx.current_instruction = 0x881C4210;
	REX_STORE_U32(ctx.r31.u32 + 3024, ctx.r11.u32);
	// stw r10,3020(r31)
	ctx.current_instruction = 0x881C4214;
	REX_STORE_U32(ctx.r31.u32 + 3020, ctx.r10.u32);
	// stw r9,3028(r31)
	ctx.current_instruction = 0x881C4218;
	REX_STORE_U32(ctx.r31.u32 + 3028, ctx.r9.u32);
	// stw r7,3032(r31)
	ctx.current_instruction = 0x881C421C;
	REX_STORE_U32(ctx.r31.u32 + 3032, ctx.r7.u32);
	// stw r8,3036(r31)
	ctx.current_instruction = 0x881C4220;
	REX_STORE_U32(ctx.r31.u32 + 3036, ctx.r8.u32);
	// stw r6,3040(r31)
	ctx.current_instruction = 0x881C4224;
	REX_STORE_U32(ctx.r31.u32 + 3040, ctx.r6.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881CDCE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881CDCE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881CDCE8) {
			switch (rex_dispatch_address) {
				case 0x881CDCF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881CDCE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881CDCF0: goto loc_881CDCF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881CDCF0;
	__savegprlr_23(ctx, base);
loc_881CDCF0:
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// beq cr6,0x881cdd0c
	if (ctx.cr6.eq) goto loc_881CDD0C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881cdd10
	if (ctx.cr6.eq) goto loc_881CDD10;
loc_881CDD0C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_881CDD10:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881cdd1c
	if (!ctx.cr6.eq) goto loc_881CDD1C;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_881CDD1C:
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvlx128 v57,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r31,r6
	ctx.r10.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v56,r31,r5
	temp.u32 = ctx.r31.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v22,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// lvrx v5,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvrx v27,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvrx v30,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v57,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// vor128 v6,v56,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// lvlx128 v54,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v4,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v26,v54,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvlx128 v53,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v3,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v25,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvlx128 v52,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v24,v52,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvrx v1,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v23,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// bne cr6,0x881cddf0
	if (!ctx.cr6.eq) goto loc_881CDDF0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r30,r1,-192
	ctx.r30.s64 = ctx.r1.s64 + -192;
	// addi r29,r1,-160
	ctx.r29.s64 = ctx.r1.s64 + -160;
	// addi r28,r1,-176
	ctx.r28.s64 = ctx.r1.s64 + -176;
	// addi r27,r1,-144
	ctx.r27.s64 = ctx.r1.s64 + -144;
	// lvlx128 v50,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v21,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v49,v50,v21
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// lvlx128 v48,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v20,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vor128 v47,v48,v20
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// stvx128 v49,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v46,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v45,v46,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v47,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_881CDDF0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881ce294
	if (ctx.cr6.eq) goto loc_881CE294;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881ce294
	if (!ctx.cr6.eq) goto loc_881CE294;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lvx128 v9,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v9,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v24,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v26,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v23,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bne cr6,0x881ce194
	if (!ctx.cr6.eq) goto loc_881CE194;
loc_881CDE74:
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// vaddshs v24,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor128 v57,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vor128 v56,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// vaddshs v3,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// vaddshs v2,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// stvx128 v24,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v29,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// vor128 v55,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v9,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v1,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v32,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor128 v33,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// stvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v24,v1,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// lvx128 v1,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v5,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v54,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// vslh v30,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v9,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v10,v30,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor v31,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vaddshs v24,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v4,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v23,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// stvx128 v9,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v4,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor v10,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// stvx128 v9,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v3,v26,v25
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v9,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v26,v8,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v8,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v6,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v8,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v8,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v8,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v7,v25
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v25,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v24,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvx128 v29,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v8,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v7,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v6,v10,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// lvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v26,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v10,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v29,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v8,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v29,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v10,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v9,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v8,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v28,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v31,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v7,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v6,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v5,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vor128 v4,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vor128 v3,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vor128 v2,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v1,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v30,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// beq cr6,0x881ce194
	if (ctx.cr6.eq) goto loc_881CE194;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881ce050
	if (!ctx.cr6.eq) goto loc_881CE050;
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// vor v22,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vor v27,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vor v30,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vor v5,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vor v4,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// vor v3,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// stvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v2,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vor128 v1,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vor128 v21,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vor128 v20,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
loc_881CE050:
	// vaddshs v26,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// vaddshs v25,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v23,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v22,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// vaddshs v26,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// lvx128 v22,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v19,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v17,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v14,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vaddshs v26,v16,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v25,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v16,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v26,v3,v21
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v3,v2,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v24,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vaddshs v19,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v27,v18
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v18,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vslh v16,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v1,v21
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v2,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v27,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vsrah v25,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v27,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vslh v23,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v21,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v14,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v20,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v16,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vmaxsh v25,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vavgsh v28,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vaddshs v19,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vmaxsh v24,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v2,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vaddshs v23,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vavgsh v31,v31,v24
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v4,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v17,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v1,v22
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsrah v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v14,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vavgsh v29,v29,v25
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vmaxsh v20,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v4,v14,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmaxsh v16,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v2,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v25,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vavgsh v10,v10,v20
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vmaxsh v27,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v23,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v22,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vavgsh v9,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vavgsh v8,v8,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmaxsh v20,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vavgsh v7,v7,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v19,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v18,v19,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vavgsh v6,v6,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
loc_881CE194:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881ce23c
	if (ctx.cr6.eq) goto loc_881CE23C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// addi r8,r4,96
	ctx.r8.s64 = ctx.r4.s64 + 96;
	// addi r7,r4,128
	ctx.r7.s64 = ctx.r4.s64 + 128;
	// addi r5,r4,160
	ctx.r5.s64 = ctx.r4.s64 + 160;
	// lvx128 v52,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r4,192
	ctx.r30.s64 = ctx.r4.s64 + 192;
	// lvx128 v51,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r4,224
	ctx.r29.s64 = ctx.r4.s64 + 224;
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v13,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.s32), simde_mm_load_si128((simde__m128i*)ctx.v53.s32)));
	// lvx128 v48,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v28,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvx128 v44,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v12,v51,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// lvx128 v41,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v11,v50,v43
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// lvx128 v40,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v5,v49,v42
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// lvx128 v39,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v4,v48,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// lvx128 v38,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v3,v47,v40
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// vpkswss128 v2,v46,v39
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s32), simde_mm_load_si128((simde__m128i*)ctx.v46.s32)));
	// vaddshs v29,v29,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vpkswss128 v1,v45,v38
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vaddshs v31,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v7,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v6,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
loc_881CE23C:
	// vpkshus128 v37,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// add r11,r31,r6
	ctx.r11.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vpkshus128 v36,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vpkshus128 v35,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vpkshus128 v34,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v33,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v32,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v63,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvlx128 v37,r0,r3
	ctx.current_instruction = 0x881CE25C;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// vpkshus128 v62,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v36,r3,r6
	ctx.current_instruction = 0x881CE264;
	ea = ctx.r3.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v35,r3,r31
	ctx.current_instruction = 0x881CE268;
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v34,r3,r11
	ctx.current_instruction = 0x881CE26C;
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v33,r3,r11
	ctx.current_instruction = 0x881CE274;
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v32,r3,r11
	ctx.current_instruction = 0x881CE27C;
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvlx128 v63,r3,r11
	ctx.current_instruction = 0x881CE288;
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v62,r3,r10
	ctx.current_instruction = 0x881CE28C;
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881CE294:
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v29,v10,v5,6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 10));
	// vsldoi v22,v10,v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 14));
	// vsldoi v19,v10,v5,4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 12));
	// vmrglb v20,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v21,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vmrghb v28,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v14,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v9,v22,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vmrglb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v26,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v25,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v16,v10,v3,6
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 10));
	// vsldoi v27,v10,v3,2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 14));
	// vslh v17,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v18,v10,v3,4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 12));
	// vor128 v43,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrglb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v42,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// vaddshs v15,v10,v16
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vmrglb v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v31,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v23,v27,v18
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vmrglb v29,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v17,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor128 v44,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v7,v10,v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 10));
	// vor v9,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vsldoi v30,v10,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v17,v10,v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 12));
	// vsubshs v8,v8,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v3,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v30,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vor v10,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsldoi128 v23,v10,v44,6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 10));
	// vsldoi128 v5,v10,v44,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vsldoi128 v16,v10,v44,4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 12));
	// vsubshs v7,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v10,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// vaddshs v15,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v6,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v28,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v4,v10,v20,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8), 14));
	// vor v9,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// vsldoi v15,v10,v20,4
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8), 12));
	// vsldoi v21,v10,v20,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8), 10));
	// vsubshs v6,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v4,v15
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v1,v10,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor v10,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vaddshs v7,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v9,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v20.u8));
	// vaddshs v23,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v3,v10,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// vsldoi128 v14,v10,v43,4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 12));
	// vsubshs v2,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v20,v10,v43,6
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 10));
	// vaddshs v8,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v7,v10,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vmrghb v10,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v24,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v1,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v20,v10,v29,6
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 10));
	// vaddshs v8,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi v26,v10,v29,4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 12));
	// vsrah v6,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi v2,v10,v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 14));
	// vsrah v31,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vaddshs v20,v10,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vor v10,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vaddshs v9,v2,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// vsldoi128 v29,v10,v42,6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 10));
	// vmaxsh v28,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsldoi128 v25,v10,v42,4
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 12));
	// vslh v7,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v1,v10,v42,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vsrah v24,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxsh v29,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v31,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// vaddshs v10,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vor v7,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v6,v31,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vmaxsh v10,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v31,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v23,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v9,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v8,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v24,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v24,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v20,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v8,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v23,v21,v24
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v21,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v7,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v20,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v6,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// bne cr6,0x881ce61c
	if (!ctx.cr6.eq) goto loc_881CE61C;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vor128 v41,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// vor128 v37,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// vor128 v36,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r23,r1,-96
	ctx.r23.s64 = ctx.r1.s64 + -96;
	// vor128 v34,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// lvx128 v25,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r27,r1,-144
	ctx.r27.s64 = ctx.r1.s64 + -144;
	// vmrghb v26,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,-144
	ctx.r26.s64 = ctx.r1.s64 + -144;
	// vmrglb v24,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-144
	ctx.r28.s64 = ctx.r1.s64 + -144;
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r24,r1,-112
	ctx.r24.s64 = ctx.r1.s64 + -112;
	// vmrglb v21,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v10,v26,v24,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), 10));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// vmrghb v20,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vor128 v40,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
	// vsldoi v21,v26,v24,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), 14));
	// vaddshs v10,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v59,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-192
	ctx.r29.s64 = ctx.r1.s64 + -192;
	// addi r25,r1,-128
	ctx.r25.s64 = ctx.r1.s64 + -128;
	// stvx128 v25,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v26,v24,4
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), 12));
	// vor v26,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// lvx128 v39,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v24,v26,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v23,v26,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// stvx128 v25,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// vaddshs v25,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx128 v62,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v20,v26,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// lvx128 v38,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v26,v23
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvx128 v24,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-112
	ctx.r30.s64 = ctx.r1.s64 + -112;
	// vaddshs v23,v20,v24
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// addi r5,r1,-96
	ctx.r5.s64 = ctx.r1.s64 + -96;
	// vslh v9,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// stvx128 v23,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v9,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx128 v25,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v26,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vsldoi128 v8,v26,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
	// vsldoi128 v23,v26,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// vsldoi128 v24,v26,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vaddshs v8,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvx128 v23,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v23,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v26,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v26,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v26,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v24,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v25,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsrah v24,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v23,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v25,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v10,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vmaxsh v26,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v24,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v23,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v9,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vor128 v8,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vsrah v24,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v25,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v7,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vmaxsh v23,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// b 0x881cde74
	goto loc_881CDE74;
loc_881CE61C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881ce194
	if (ctx.cr6.eq) goto loc_881CE194;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881ce650
	if (ctx.cr6.eq) goto loc_881CE650;
	// vavgsh v28,v28,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vavgsh v29,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vavgsh v31,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vavgsh v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vavgsh v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vavgsh v8,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vavgsh v7,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vavgsh v6,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// b 0x881ce194
	goto loc_881CE194;
loc_881CE650:
	// vavgsh v28,v28,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vavgsh v29,v29,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vavgsh v31,v31,v17
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vavgsh v10,v10,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vavgsh v9,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vavgsh v8,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vavgsh v7,v7,v26
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vavgsh v6,v6,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// b 0x881ce194
	goto loc_881CE194;
}

DEFINE_REX_FUNC(__restvmx_96) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF10C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF10C;
	ctx.current_instruction = 0x881EF10C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_113) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF194);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF194;
	ctx.current_instruction = 0x881EF194;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restfpr_16) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2A4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2A4;
	ctx.current_instruction = 0x881EF2A4;
	// lfd f16,-128(r12)
	ctx.current_instruction = 0x881EF2A4;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881F0904) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0904;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0904) {
			switch (rex_dispatch_address) {
				case 0x881F0918:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0904;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0918: goto loc_881F0918;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F0908;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F090C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x88051f98
	ctx.lr = 0x881F0918;
	sub_88051F98(ctx, base);
loc_881F0918:
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0918;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F091C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1020) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1020;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1020) {
			switch (rex_dispatch_address) {
				case 0x881F1040:
				case 0x881F104C:
				case 0x881F1070:
				case 0x881F1074:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1020;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1040: goto loc_881F1040;
		case 0x881F104C: goto loc_881F104C;
		case 0x881F1070: goto loc_881F1070;
		case 0x881F1074: goto loc_881F1074;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F1024;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F1028;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F102C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881f1044
	if (!ctx.cr6.eq) goto loc_881F1044;
	// bl 0x881f10a0
	ctx.lr = 0x881F1040;
	sub_881F10A0(ctx, base);
loc_881F1040:
	// b 0x881f1084
	goto loc_881F1084;
loc_881F1044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f0f88
	ctx.lr = 0x881F104C;
	sub_881F0F88(ctx, base);
loc_881F104C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x881f105c
	if (ctx.cr0.eq) goto loc_881F105C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f1084
	goto loc_881F1084;
loc_881F105C:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881F105C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f1080
	if (ctx.cr0.eq) goto loc_881F1080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f1308
	ctx.lr = 0x881F1070;
	sub_881F1308(ctx, base);
loc_881F1070:
	// bl 0x881f1c50
	ctx.lr = 0x881F1074;
	sub_881F1C50(ctx, base);
loc_881F1074:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x881f1084
	goto loc_881F1084;
loc_881F1080:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881F1084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F1088;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F1090;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1E68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1E68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1E68) {
			switch (rex_dispatch_address) {
				case 0x881F1E8C:
				case 0x881F1E98:
				case 0x881F1EBC:
				case 0x881F1ECC:
				case 0x881F1ED8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1E68;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F1E8C: goto loc_881F1E8C;
		case 0x881F1E98: goto loc_881F1E98;
		case 0x881F1EBC: goto loc_881F1EBC;
		case 0x881F1ECC: goto loc_881F1ECC;
		case 0x881F1ED8: goto loc_881F1ED8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F1E6C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881F1E70;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F1E74;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F1E78;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,80(r1)
	ctx.current_instruction = 0x881F1E7C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x881f1a60
	ctx.lr = 0x881F1E8C;
	sub_881F1A60(ctx, base);
loc_881F1E8C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x881f1eac
	if (!ctx.cr6.eq) goto loc_881F1EAC;
	// bl 0x880529c8
	ctx.lr = 0x881F1E98;
	sub_880529C8(ctx, base);
loc_881F1E98:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	ctx.current_instruction = 0x881F1EA4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x881f1f18
	goto loc_881F1F18;
loc_881F1EAC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.current_instruction = 0x881F1EB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x881f1fb0
	ctx.lr = 0x881F1EBC;
	sub_881F1FB0(ctx, base);
loc_881F1EBC:
	// stw r3,84(r1)
	ctx.current_instruction = 0x881F1EBC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x881f1ee0
	if (!ctx.cr6.eq) goto loc_881F1EE0;
	// bl 0x881e9030
	ctx.lr = 0x881F1ECC;
	sub_881E9030(ctx, base);
loc_881F1ECC:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x881f1ee0
	if (ctx.cr0.eq) goto loc_881F1EE0;
	// bl 0x88052a38
	ctx.lr = 0x881F1ED8;
	sub_88052A38(ctx, base);
loc_881F1ED8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f1f18
	goto loc_881F1F18;
loc_881F1EE0:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,24064
	ctx.r10.s64 = ctx.r10.s64 + 24064;
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.current_instruction = 0x881F1EF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.current_instruction = 0x881F1F04;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	ctx.current_instruction = 0x881F1F10;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.current_instruction = 0x881F1F14;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_881F1F18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F1F1C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881F1F24;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F1F28;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88202748) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88202748);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88202748;
	ctx.current_instruction = 0x88202748;
	// lwz r10,1368(r3)
	ctx.current_instruction = 0x88202748;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x88202838
	if (ctx.cr6.lt) goto loc_88202838;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x882027c4
	if (ctx.cr6.lt) goto loc_882027C4;
	// lhz r8,62(r11)
	ctx.current_instruction = 0x88202788;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r4,r8
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r4,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// andc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// b 0x882027d4
	goto loc_882027D4;
loc_882027C4:
	// lwz r10,1484(r11)
	ctx.current_instruction = 0x882027C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1484);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x882027CC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_882027D4:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x88202820
	if (ctx.cr6.lt) goto loc_88202820;
	// lhz r10,64(r11)
	ctx.current_instruction = 0x882027DC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88202820:
	// lwz r11,1480(r11)
	ctx.current_instruction = 0x88202820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x88202828;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88202838:
	// lwz r10,1484(r11)
	ctx.current_instruction = 0x88202838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1484);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1480(r11)
	ctx.current_instruction = 0x88202840;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.current_instruction = 0x88202848;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.current_instruction = 0x8820284C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882153A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882153A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882153A8) {
			switch (rex_dispatch_address) {
				case 0x88215514:
				case 0x882155CC:
				case 0x88215630:
				case 0x882156BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882153A8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88215514: goto loc_88215514;
		case 0x882155CC: goto loc_882155CC;
		case 0x88215630: goto loc_88215630;
		case 0x882156BC: goto loc_882156BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// addic r1,r1,-64
	ctx.xer.ca = ctx.r1.u32 > 63;
	ctx.r1.s64 = ctx.r1.s64 + -64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r12,56(r1)
	ctx.current_instruction = 0x882153B4;
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r12.u32);
	// std r31,48(r1)
	ctx.current_instruction = 0x882153B8;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r31.u64);
	// std r30,40(r1)
	ctx.current_instruction = 0x882153BC;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r30.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r3,0(r1)
	ctx.current_instruction = 0x882153C4;
	REX_STORE_U32(ctx.r1.u32 + 0, ctx.r3.u32);
	// stw r4,8(r1)
	ctx.current_instruction = 0x882153C8;
	REX_STORE_U32(ctx.r1.u32 + 8, ctx.r4.u32);
	// stw r5,16(r1)
	ctx.current_instruction = 0x882153CC;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r5.u32);
	// stw r6,24(r1)
	ctx.current_instruction = 0x882153D0;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r6.u32);
	// std r29,32(r1)
	ctx.current_instruction = 0x882153D4;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r29.u64);
	// lwz r11,0(r4)
	ctx.current_instruction = 0x882153D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r12,8(r4)
	ctx.current_instruction = 0x882153DC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r2,4(r4)
	ctx.current_instruction = 0x882153E0;
	ctx.r2.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,36(r4)
	ctx.current_instruction = 0x882153E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r4,0(r3)
	ctx.current_instruction = 0x882153E8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r5,r12,1
	ctx.r5.s64 = ctx.r12.s64 + 1;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x882153F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x882153F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.current_instruction = 0x88215400;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
loc_88215404:
	// rldicl r11,r7,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 10) & 0x3FF;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.current_instruction = 0x8821540C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrldi r11,r8,60
	ctx.r11.u64 = ctx.r8.u64 & 0xF;
	// blt cr6,0x88215598
	if (ctx.cr6.lt) goto loc_88215598;
	// sld r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf. r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x882154c0
	if (ctx.cr0.lt) goto loc_882154C0;
loc_88215430:
	// rldicl r11,r7,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0x1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rldicr r7,r7,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// blt 0x882155fc
	if (ctx.cr0.lt) goto loc_882155FC;
loc_88215440:
	// rldicr r12,r8,1,62
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r8,r2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// cmpw cr5,r8,r5
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lhzx r12,r31,r12
	ctx.current_instruction = 0x88215450;
	ctx.r12.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r12.u32);
	// rldicl r29,r12,56,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrldi r12,r12,57
	ctx.r12.u64 = ctx.r12.u64 & 0x7F;
	// xor r0,r29,r11
	ctx.r0.u64 = ctx.r29.u64 ^ ctx.r11.u64;
	// add r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 + ctx.r12.u64;
	// subf r29,r11,r0
	ctx.r29.u64 = ctx.r0.u64 - ctx.r11.u64;
	// lbzx r0,r10,r30
	ctx.current_instruction = 0x88215468;
	ctx.r0.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r0,r0,1,62
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpwi r10,64
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// sthx r29,r3,r0
	ctx.current_instruction = 0x88215478;
	REX_STORE_U16(ctx.r3.u32 + ctx.r0.u32, ctx.r29.u16);
	// cror 4*cr1+eq,gt,4*cr6+eq
	ctx.cr1.eq = ctx.cr0.gt | ctx.cr6.eq;
	// crorc eq,4*cr1+eq,4*cr5+lt
	ctx.cr0.eq = ctx.cr1.eq | !(ctx.cr5.lt);
	// bne 0x88215404
	if (!ctx.cr0.eq) goto loc_88215404;
	// std r7,0(r4)
	ctx.current_instruction = 0x88215488;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// stw r6,8(r4)
	ctx.current_instruction = 0x88215490;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// bgt cr6,0x88215744
	if (ctx.cr6.gt) goto loc_88215744;
	// cmpw cr5,r8,r2
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// beq cr5,0x88215664
	if (ctx.cr5.eq) goto loc_88215664;
loc_882154A0:
	// lwz r12,56(r1)
	ctx.current_instruction = 0x882154A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	ctx.current_instruction = 0x882154AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	ctx.current_instruction = 0x882154B0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r29,32(r1)
	ctx.current_instruction = 0x882154B4;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addic r1,r1,64
	ctx.xer.ca = ctx.r1.u32 > 4294967231;
	ctx.r1.s64 = ctx.r1.s64 + 64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_882154C0:
	// lwz r12,12(r4)
	ctx.current_instruction = 0x882154C0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,16(r4)
	ctx.current_instruction = 0x882154C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r11,r12,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r12.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x88215560
	if (ctx.cr6.gt) goto loc_88215560;
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	ctx.current_instruction = 0x882154D8;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	ctx.current_instruction = 0x882154DC;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	ctx.current_instruction = 0x882154E0;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x882154E4;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x882154EC;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	ctx.current_instruction = 0x882154F0;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	ctx.current_instruction = 0x882154F4;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	ctx.current_instruction = 0x882154F8;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	ctx.current_instruction = 0x882154FC;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	ctx.current_instruction = 0x88215500;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x88215504;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x88215508;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	ctx.current_instruction = 0x8821550C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x88156440
	ctx.lr = 0x88215514;
	sub_88156440(ctx, base);
loc_88215514:
	// ld r4,24(r1)
	ctx.current_instruction = 0x88215514;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r6,40(r1)
	ctx.current_instruction = 0x88215518;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r12,88(r1)
	ctx.current_instruction = 0x8821551C;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r12,r3
	ctx.r12.u64 = ctx.r3.u64;
	// ld r7,48(r1)
	ctx.current_instruction = 0x88215524;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r2,8(r1)
	ctx.current_instruction = 0x88215528;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// cmpwi cr6,r12,1
	ctx.cr6.compare<int32_t>(ctx.r12.s32, 1, ctx.xer);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215530;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r5,32(r1)
	ctx.current_instruction = 0x88215534;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.current_instruction = 0x88215538;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r9,64(r1)
	ctx.current_instruction = 0x88215540;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.current_instruction = 0x88215544;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.current_instruction = 0x88215548;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,16(r1)
	ctx.current_instruction = 0x8821554C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.current_instruction = 0x88215554;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// bne cr6,0x88215430
	if (!ctx.cr6.eq) goto loc_88215430;
	// b 0x882154c0
	goto loc_882154C0;
loc_88215560:
	// lhz r11,0(r12)
	ctx.current_instruction = 0x88215560;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r12.u32 + 0);
	// lhz r0,2(r12)
	ctx.current_instruction = 0x88215564;
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + 2);
	// addi r12,r12,6
	ctx.r12.s64 = ctx.r12.s64 + 6;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r0,r0,16,47
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 16) & 0xFFFFFFFFFFFF0000;
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// lhz r0,-2(r12)
	ctx.current_instruction = 0x88215578;
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + -2);
	// stw r12,12(r4)
	ctx.current_instruction = 0x8821557C;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r12.u32);
	// neg r12,r6
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// sld r11,r11,r12
	ctx.r11.u64 = ctx.r12.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r12.u8 & 0x7F));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x88215430
	goto loc_88215430;
loc_88215598:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	ctx.current_instruction = 0x8821559C;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	ctx.current_instruction = 0x882155A0;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r2,8(r1)
	ctx.current_instruction = 0x882155A8;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x882155AC;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x882155B4;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	ctx.current_instruction = 0x882155B8;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r9,64(r1)
	ctx.current_instruction = 0x882155C0;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x882155C4;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// bl 0x88214d80
	ctx.lr = 0x882155CC;
	sub_88214D80(ctx, base);
loc_882155CC:
	// ld r4,24(r1)
	ctx.current_instruction = 0x882155CC;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r5,32(r1)
	ctx.current_instruction = 0x882155D4;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r2,8(r1)
	ctx.current_instruction = 0x882155D8;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r9,64(r1)
	ctx.current_instruction = 0x882155DC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.current_instruction = 0x882155E0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x882155E4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r3,16(r1)
	ctx.current_instruction = 0x882155E8;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.current_instruction = 0x882155F0;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// b 0x88215430
	goto loc_88215430;
loc_882155FC:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	ctx.current_instruction = 0x88215600;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	ctx.current_instruction = 0x88215604;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	ctx.current_instruction = 0x88215608;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x8821560C;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x88215614;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	ctx.current_instruction = 0x88215618;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r8,56(r1)
	ctx.current_instruction = 0x8821561C;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	ctx.current_instruction = 0x88215620;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x88215624;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x88215628;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x88214f38
	ctx.lr = 0x88215630;
	sub_88214F38(ctx, base);
loc_88215630:
	// ld r4,24(r1)
	ctx.current_instruction = 0x88215630;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r2,8(r1)
	ctx.current_instruction = 0x88215634;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r5,32(r1)
	ctx.current_instruction = 0x88215638;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.current_instruction = 0x8821563C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.current_instruction = 0x88215640;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215644;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r10,72(r1)
	ctx.current_instruction = 0x88215648;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.current_instruction = 0x8821564C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r3,16(r1)
	ctx.current_instruction = 0x88215654;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.current_instruction = 0x8821565C;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x88215440
	goto loc_88215440;
loc_88215664:
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r10,r12,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r12.u64;
	// sthx r29,r3,r0
	ctx.current_instruction = 0x8821566C;
	REX_STORE_U16(ctx.r3.u32 + ctx.r0.u32, ctx.r29.u16);
	// lwz r6,0(r1)
	ctx.current_instruction = 0x88215670;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,8(r1)
	ctx.current_instruction = 0x88215678;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r2,8(r1)
	ctx.current_instruction = 0x88215680;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x88215684;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x8821568C;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r5,32(r1)
	ctx.current_instruction = 0x88215694;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// std r6,40(r1)
	ctx.current_instruction = 0x8821569C;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	ctx.current_instruction = 0x882156A0;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	ctx.current_instruction = 0x882156A4;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	ctx.current_instruction = 0x882156A8;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x882156AC;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x882156B0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	ctx.current_instruction = 0x882156B4;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x881fd470
	ctx.lr = 0x882156BC;
	sub_881FD470(ctx, base);
loc_882156BC:
	// ld r8,56(r1)
	ctx.current_instruction = 0x882156BC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// addic. r8,r3,0
	ctx.xer.ca = ctx.r3.u32 > 4294967295;
	ctx.r8.s64 = ctx.r3.s64 + 0;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r2,8(r1)
	ctx.current_instruction = 0x882156C4;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r4,24(r1)
	ctx.current_instruction = 0x882156C8;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.current_instruction = 0x882156CC;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.current_instruction = 0x882156D0;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.current_instruction = 0x882156D4;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r9,64(r1)
	ctx.current_instruction = 0x882156D8;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.current_instruction = 0x882156DC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.current_instruction = 0x882156E0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r12,88(r1)
	ctx.current_instruction = 0x882156E4;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,16(r1)
	ctx.current_instruction = 0x882156E8;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blt 0x88215744
	if (ctx.cr0.lt) goto loc_88215744;
	// rlwinm r11,r8,12,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xF00;
	// rlwinm r29,r8,24,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r12,r8,25,31,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// clrldi r11,r8,58
	ctx.r11.u64 = ctx.r8.u64 & 0x3F;
	// neg r12,r12
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r12.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r29,r29,r12
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r12.u64;
	// rlwinm r8,r8,16,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// subf r29,r12,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r12.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lbzx r0,r10,r30
	ctx.current_instruction = 0x88215720;
	ctx.r0.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rldicr r0,r0,1,62
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sthx r29,r3,r0
	ctx.current_instruction = 0x8821572C;
	REX_STORE_U16(ctx.r3.u32 + ctx.r0.u32, ctx.r29.u16);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215730;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.current_instruction = 0x88215738;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// blt cr6,0x88215404
	if (ctx.cr6.lt) goto loc_88215404;
	// b 0x882154a0
	goto loc_882154A0;
loc_88215744:
	// lwz r12,56(r1)
	ctx.current_instruction = 0x88215744;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,-1
	ctx.r3.s64 = -1;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	ctx.current_instruction = 0x88215750;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	ctx.current_instruction = 0x88215754;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r29,32(r1)
	ctx.current_instruction = 0x88215758;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addic r1,r1,64
	ctx.xer.ca = ctx.r1.u32 > 4294967231;
	ctx.r1.s64 = ctx.r1.s64 + 64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821A170) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821A170;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821A170) {
			switch (rex_dispatch_address) {
				case 0x8821A178:
				case 0x8821A1B8:
				case 0x8821A1D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821A170;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821A178: goto loc_8821A178;
		case 0x8821A1B8: goto loc_8821A1B8;
		case 0x8821A1D0: goto loc_8821A1D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821A178;
	__savegprlr_29(ctx, base);
loc_8821A178:
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8821A180;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v13,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// vsubshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x882186f8
	ctx.lr = 0x8821A1B8;
	sub_882186F8(ctx, base);
loc_8821A1B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882193c8
	ctx.lr = 0x8821A1D0;
	sub_882193C8(ctx, base);
loc_8821A1D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821ADF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821ADF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821ADF8) {
			switch (rex_dispatch_address) {
				case 0x8821AE00:
				case 0x8821AE48:
				case 0x8821AE60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821ADF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821AE00: goto loc_8821AE00;
		case 0x8821AE48: goto loc_8821AE48;
		case 0x8821AE60: goto loc_8821AE60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821AE00;
	__savegprlr_29(ctx, base);
loc_8821AE00:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8821AE00;
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
	ctx.lr = 0x8821AE48;
	sub_88218F60(ctx, base);
loc_8821AE48:
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
	// bl 0x88219500
	ctx.lr = 0x8821AE60;
	sub_88219500(ctx, base);
loc_8821AE60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821BB88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821BB88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821BB88) {
			switch (rex_dispatch_address) {
				case 0x8821BB90:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821BB88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821BB90: goto loc_8821BB90;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8821BB90;
	__savegprlr_28(ctx, base);
loc_8821BB90:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v53,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lvx128 v58,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v54,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r7,r4
	ctx.r31.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v56,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvsl v6,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r29,96
	ctx.r29.s64 = 96;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r28,144
	ctx.r28.s64 = 144;
	// vperm128 v9,v62,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v55,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v60,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v59,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,192
	ctx.r6.s64 = 192;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r5,240
	ctx.r5.s64 = 240;
	// lvsl v5,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v59,v55,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v61,v54,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v49,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v53,v51,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v52,v50,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r4,288
	ctx.r4.s64 = 288;
	// vperm128 v3,v49,v48,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// li r11,336
	ctx.r11.s64 = 336;
	// vmrglb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v29,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v26,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v0,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v3,v10,v2,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vsldoi v2,v9,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v1,v8,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v31,v7,v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8), 14));
	// vsldoi v30,v6,v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 14));
	// vslh v25,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v29,v5,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vslh v24,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v4,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vslh v23,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v27,v0,v26,2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v26.u8), 14));
	// vslh v22,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
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
	// vslh v21,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v25,v3
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v16,v24,v2
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v15,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v14,v22,v31
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v12,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v3,v20,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vaddshs v2,v19,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v1,v18,v27
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vaddshs v31,v17,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v30,v16,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v29,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v28,v14,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v27,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v24,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v26,v3,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v25,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v23,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v22,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v21,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v17,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v15,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v0,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v10,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r30,r3
	ea = (ctx.r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v9,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v0,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v8,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v12,r30,r28
	ea = (ctx.r30.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88221018) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88221018;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88221018) {
			switch (rex_dispatch_address) {
				case 0x88221020:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88221018;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88221020: goto loc_88221020;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88221020;
	__savegprlr_28(ctx, base);
loc_88221020:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	ctx.current_instruction = 0x88221034;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r31,1
	ctx.r31.s64 = 1;
	// lvx128 v11,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vaddshs v1,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r28,-32
	ctx.r28.s64 = -32;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r29,-16
	ctx.r29.s64 = -16;
	// vsubshs v25,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vspltish v30,5
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x882211c8
	if (!ctx.cr6.eq) goto loc_882211C8;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x882213a8
	if (!ctx.cr6.gt) goto loc_882213A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_882210EC:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v21,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v20,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v15,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v2,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v21,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v14,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v19,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v21,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v18,v22,v1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v6,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v3,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vsrah v15,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x882210ec
	if (ctx.cr6.lt) goto loc_882210EC;
	// b 0x882213a8
	goto loc_882213A8;
loc_882211C8:
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
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x882213a8
	if (!ctx.cr6.gt) goto loc_882213A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
loc_8822124C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v28,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v1,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v22,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v2
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v22,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v29,v22,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v9,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v28,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor128 v1,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsubshs v22,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vadduhm v20,v15,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v15,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v21,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v29,v23,v18
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v28,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v21,v29
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v21,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsubshs v27,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubshs v24,v4,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vadduhm v23,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsrah v18,v22,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// stvx128 v18,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v15,v16,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x8822124c
	if (ctx.cr6.lt) goto loc_8822124C;
loc_882213A8:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x88221430
	if (!ctx.cr6.eq) goto loc_88221430;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x882214cc
	if (!ctx.cr6.gt) goto loc_882214CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_882213DC:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v7,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v6,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// stvewx128 v39,r0,r11
	ctx.current_instruction = 0x8822141C;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ctx.current_instruction = 0x88221420;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x882213dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882213DC;
	// b 0x882214cc
	goto loc_882214CC;
loc_88221430:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x882214cc
	if (!ctx.cr6.gt) goto loc_882214CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_88221448:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v7,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v6,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v5,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88221448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88221448;
loc_882214CC:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
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

DEFINE_REX_FUNC(sub_88243CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88243CB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88243CB0) {
			switch (rex_dispatch_address) {
				case 0x88243CB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88243CB0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x88243CB8: goto loc_88243CB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88243CB8;
	__savegprlr_14(ctx, base);
loc_88243CB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r21,720(r3)
	ctx.current_instruction = 0x88243CBC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r25,16384
	ctx.r25.s64 = 16384;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,-156(r1)
	ctx.current_instruction = 0x88243CC8;
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// li r26,16384
	ctx.r26.s64 = 16384;
	// stw r11,-160(r1)
	ctx.current_instruction = 0x88243CD0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// li r29,16384
	ctx.r29.s64 = 16384;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88243d10
	if (ctx.cr6.eq) goto loc_88243D10;
	// rlwinm r19,r5,5,0,26
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r18,r6,5,0,26
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r28,r21,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x88243d1c
	goto loc_88243D1C;
loc_88243D10:
	// rlwinm r19,r5,6,0,25
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r18,r6,6,0,25
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_88243D1C:
	// lwz r14,84(r1)
	ctx.current_instruction = 0x88243D1C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r30,r28,r6
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8824401c
	if (!ctx.cr6.eq) goto loc_8824401C;
	// li r14,1
	ctx.r14.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88243d60
	if (ctx.cr6.eq) goto loc_88243D60;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r31,-2(r31)
	ctx.current_instruction = 0x88243D4C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + -2);
	// lhz r11,-2(r11)
	ctx.current_instruction = 0x88243D50;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r26,r31
	ctx.r26.s64 = ctx.r31.s16;
	// extsh r24,r11
	ctx.r24.s64 = ctx.r11.s16;
	// b 0x88243dd4
	goto loc_88243DD4;
loc_88243D60:
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// bne cr6,0x88243dcc
	if (!ctx.cr6.eq) goto loc_88243DCC;
	// subf r11,r28,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r7
	ctx.current_instruction = 0x88243D70;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r6,r10,r8
	ctx.current_instruction = 0x88243D74;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
loc_88243D80:
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// bne cr6,0x88243d90
	if (!ctx.cr6.eq) goto loc_88243D90;
loc_88243D88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_88243D90:
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r8,724(r3)
	ctx.current_instruction = 0x88243D94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// add r10,r19,r31
	ctx.r10.u64 = ctx.r19.u64 + ctx.r31.u64;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r21,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r6,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r9,-28
	ctx.r9.s64 = ctx.r9.s64 + -28;
	// add r6,r18,r11
	ctx.r6.u64 = ctx.r18.u64 + ctx.r11.u64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88244064
	if (!ctx.cr6.lt) goto loc_88244064;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// b 0x88244070
	goto loc_88244070;
loc_88243DCC:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_88243DD4:
	// addi r11,r26,-16384
	ctx.r11.s64 = ctx.r26.s64 + -16384;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r15,r11,27,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x88243df0
	if (ctx.cr6.eq) goto loc_88243DF0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_88243DF0:
	// subf r29,r28,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r28.u64;
	// stw r14,-156(r1)
	ctx.current_instruction = 0x88243DF4;
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r14.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r27,0(r31)
	ctx.current_instruction = 0x88243E04;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r23,0(r11)
	ctx.current_instruction = 0x88243E08;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r25,r27
	ctx.r25.s64 = ctx.r27.s16;
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// addi r27,r25,-16384
	ctx.r27.s64 = ctx.r25.s64 + -16384;
	// cntlzw r27,r27
	ctx.r27.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r17,r27,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x88243e30
	if (ctx.cr6.eq) goto loc_88243E30;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_88243E30:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88243e80
	if (ctx.cr6.eq) goto loc_88243E80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88243e68
	if (ctx.cr6.eq) goto loc_88243E68;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x88243e74
	if (ctx.cr6.eq) goto loc_88243E74;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r7
	ctx.current_instruction = 0x88243E54;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// lhzx r6,r10,r8
	ctx.current_instruction = 0x88243E58;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// b 0x88243ee4
	goto loc_88243EE4;
loc_88243E68:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x88243ed4
	if (!ctx.cr6.eq) goto loc_88243ED4;
loc_88243E74:
	// lhz r10,-2(r31)
	ctx.current_instruction = 0x88243E74;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + -2);
	// lhz r8,-2(r11)
	ctx.current_instruction = 0x88243E78;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// b 0x88243edc
	goto loc_88243EDC;
loc_88243E80:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88243ed4
	if (ctx.cr6.eq) goto loc_88243ED4;
	// xor r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88243ea8
	if (ctx.cr6.eq) goto loc_88243EA8;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x88243eac
	if (ctx.cr6.lt) goto loc_88243EAC;
loc_88243EA8:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_88243EAC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r7
	ctx.current_instruction = 0x88243EC0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// lhzx r11,r6,r8
	ctx.current_instruction = 0x88243EC4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// b 0x88243ee4
	goto loc_88243EE4;
loc_88243ED4:
	// lhz r8,2(r11)
	ctx.current_instruction = 0x88243ED4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r10,2(r31)
	ctx.current_instruction = 0x88243ED8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
loc_88243EDC:
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
loc_88243EE4:
	// addi r11,r29,-16384
	ctx.r11.s64 = ctx.r29.s64 + -16384;
	// mr r20,r14
	ctx.r20.u64 = ctx.r14.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r22,r10,27,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88243f04
	if (ctx.cr6.eq) goto loc_88243F04;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88243F04:
	// add r11,r22,r15
	ctx.r11.u64 = ctx.r22.u64 + ctx.r15.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x88243f20
	if (!ctx.cr6.gt) goto loc_88243F20;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x88243fa0
	goto loc_88243FA0;
loc_88243F20:
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x88243f40
	if (!ctx.cr6.gt) goto loc_88243F40;
	// cmpw cr6,r25,r29
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x88243f5c
	if (ctx.cr6.gt) goto loc_88243F5C;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88243f48
	if (!ctx.cr6.gt) goto loc_88243F48;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x88243f60
	goto loc_88243F60;
loc_88243F40:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88243f50
	if (!ctx.cr6.gt) goto loc_88243F50;
loc_88243F48:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x88243f60
	goto loc_88243F60;
loc_88243F50:
	// cmpw cr6,r25,r29
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r29.s32, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bgt cr6,0x88243f60
	if (ctx.cr6.gt) goto loc_88243F60;
loc_88243F5C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_88243F60:
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x88243f80
	if (!ctx.cr6.gt) goto loc_88243F80;
	// cmpw cr6,r23,r27
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x88243f9c
	if (ctx.cr6.gt) goto loc_88243F9C;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x88243f88
	if (!ctx.cr6.gt) goto loc_88243F88;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x88243fa0
	goto loc_88243FA0;
loc_88243F80:
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x88243f90
	if (!ctx.cr6.gt) goto loc_88243F90;
loc_88243F88:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x88243fa0
	goto loc_88243FA0;
loc_88243F90:
	// cmpw cr6,r23,r27
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r27.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bgt cr6,0x88243fa0
	if (ctx.cr6.gt) goto loc_88243FA0;
loc_88243F9C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88243FA0:
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x88243FA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x88243d80
	if (ctx.cr6.eq) goto loc_88243D80;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x88243d80
	if (ctx.cr6.eq) goto loc_88243D80;
	// subf r10,r24,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subf r8,r26,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r26.u64;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// ble cr6,0x88243fe8
	if (!ctx.cr6.gt) goto loc_88243FE8;
	// stw r14,-160(r1)
	ctx.current_instruction = 0x88243FE0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// b 0x88243d80
	goto loc_88243D80;
loc_88243FE8:
	// subf r10,r23,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r23.u64;
	// subf r8,r25,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r25.u64;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// ble cr6,0x88243d80
	if (!ctx.cr6.gt) goto loc_88243D80;
	// stw r14,-160(r1)
	ctx.current_instruction = 0x88244014;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r14.u32);
	// b 0x88243d80
	goto loc_88243D80;
loc_8824401C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88243d90
	if (ctx.cr6.eq) goto loc_88243D90;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r14,1
	ctx.r14.s64 = 1;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// lhz r7,-2(r10)
	ctx.current_instruction = 0x88244038;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r6,-2(r8)
	ctx.current_instruction = 0x8824403C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// bne cr6,0x88243d90
	if (!ctx.cr6.eq) goto loc_88243D90;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
	// b 0x88243d88
	goto loc_88243D88;
loc_88244064:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x88244074
	if (!ctx.cr6.gt) goto loc_88244074;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_88244070:
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_88244074:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88244084
	if (!ctx.cr6.lt) goto loc_88244084;
	// subf r10,r6,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r6.u64;
	// b 0x88244090
	goto loc_88244090;
loc_88244084:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x88244094
	if (!ctx.cr6.gt) goto loc_88244094;
	// subf r10,r6,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r6.u64;
loc_88244090:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_88244094:
	// lwz r10,-160(r1)
	ctx.current_instruction = 0x88244094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r4)
	ctx.current_instruction = 0x8824409C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beq cr6,0x882440b8
	if (ctx.cr6.eq) goto loc_882440B8;
	// stw r26,8(r4)
	ctx.current_instruction = 0x882440A4;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r26.u32);
	// stw r24,12(r4)
	ctx.current_instruction = 0x882440A8;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r24.u32);
	// stw r25,16(r4)
	ctx.current_instruction = 0x882440AC;
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r25.u32);
	// stw r23,20(r4)
	ctx.current_instruction = 0x882440B0;
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r23.u32);
	// b 0x882440c0
	goto loc_882440C0;
loc_882440B8:
	// stw r31,8(r4)
	ctx.current_instruction = 0x882440B8;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stw r11,12(r4)
	ctx.current_instruction = 0x882440BC;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
loc_882440C0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x882440e4
	if (ctx.cr6.eq) goto loc_882440E4;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// beq cr6,0x882440e4
	if (ctx.cr6.eq) goto loc_882440E4;
	// stw r26,60(r4)
	ctx.current_instruction = 0x882440D0;
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r26.u32);
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r24,64(r4)
	ctx.current_instruction = 0x882440D8;
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x882440f4
	goto loc_882440F4;
loc_882440E4:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,60(r4)
	ctx.current_instruction = 0x882440EC;
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// stw r10,64(r4)
	ctx.current_instruction = 0x882440F0;
	REX_STORE_U32(ctx.r4.u32 + 64, ctx.r10.u32);
loc_882440F4:
	// lwz r9,-156(r1)
	ctx.current_instruction = 0x882440F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88244114
	if (ctx.cr6.eq) goto loc_88244114;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// beq cr6,0x88244114
	if (ctx.cr6.eq) goto loc_88244114;
	// stw r25,52(r4)
	ctx.current_instruction = 0x88244108;
	REX_STORE_U32(ctx.r4.u32 + 52, ctx.r25.u32);
	// stw r23,56(r4)
	ctx.current_instruction = 0x8824410C;
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r23.u32);
	// b 0x8824411c
	goto loc_8824411C;
loc_88244114:
	// stw r11,52(r4)
	ctx.current_instruction = 0x88244114;
	REX_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
	// stw r10,56(r4)
	ctx.current_instruction = 0x88244118;
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
loc_8824411C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88244138
	if (ctx.cr6.eq) goto loc_88244138;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x88244138
	if (ctx.cr6.eq) goto loc_88244138;
	// stw r29,44(r4)
	ctx.current_instruction = 0x8824412C;
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r29.u32);
	// stw r27,48(r4)
	ctx.current_instruction = 0x88244130;
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r27.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88244138:
	// stw r11,44(r4)
	ctx.current_instruction = 0x88244138;
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// stw r10,48(r4)
	ctx.current_instruction = 0x8824413C;
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

