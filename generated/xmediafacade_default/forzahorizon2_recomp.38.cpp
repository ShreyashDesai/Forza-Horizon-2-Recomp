#include "forzahorizon2_funcs.38.h"

DEFINE_REX_FUNC(sub_88050388) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050388);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050388;
	ctx.current_instruction = 0x88050388;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// stwx r4,r10,r11
	ctx.current_instruction = 0x88050394;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880508C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880508C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880508C0;
	ctx.current_instruction = 0x880508C0;
	// std r30,-16(r1)
	ctx.current_instruction = 0x880508C0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x880508C4;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-30683
	ctx.r8.s64 = -2010841088;
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// addi r30,r8,112
	ctx.r30.s64 = ctx.r8.s64 + 112;
	// addi r11,r11,7888
	ctx.r11.s64 = ctx.r11.s64 + 7888;
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// lis r9,-30715
	ctx.r9.s64 = -2012938240;
	// stw r11,112(r8)
	ctx.current_instruction = 0x880508E0;
	REX_STORE_U32(ctx.r8.u32 + 112, ctx.r11.u32);
	// lis r31,-30715
	ctx.r31.s64 = -2012938240;
	// addi r10,r10,4976
	ctx.r10.s64 = ctx.r10.s64 + 4976;
	// addi r9,r9,4960
	ctx.r9.s64 = ctx.r9.s64 + 4960;
	// addi r11,r31,4968
	ctx.r11.s64 = ctx.r31.s64 + 4968;
	// stw r10,4(r30)
	ctx.current_instruction = 0x880508F4;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r3,-30715
	ctx.r3.s64 = -2012938240;
	// stw r9,8(r30)
	ctx.current_instruction = 0x880508FC;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lis r4,-30715
	ctx.r4.s64 = -2012938240;
	// stw r11,12(r30)
	ctx.current_instruction = 0x88050904;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r5,-30715
	ctx.r5.s64 = -2012938240;
	// addi r10,r3,4832
	ctx.r10.s64 = ctx.r3.s64 + 4832;
	// addi r9,r4,7888
	ctx.r9.s64 = ctx.r4.s64 + 7888;
	// addi r11,r5,7808
	ctx.r11.s64 = ctx.r5.s64 + 7808;
	// stw r10,16(r30)
	ctx.current_instruction = 0x88050918;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lis r6,-30715
	ctx.r6.s64 = -2012938240;
	// stw r9,20(r30)
	ctx.current_instruction = 0x88050920;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lis r7,-30715
	ctx.r7.s64 = -2012938240;
	// stw r11,24(r30)
	ctx.current_instruction = 0x88050928;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r8,-30715
	ctx.r8.s64 = -2012938240;
	// addi r10,r6,4864
	ctx.r10.s64 = ctx.r6.s64 + 4864;
	// addi r9,r7,4656
	ctx.r9.s64 = ctx.r7.s64 + 4656;
	// addi r11,r8,4496
	ctx.r11.s64 = ctx.r8.s64 + 4496;
	// stw r10,28(r30)
	ctx.current_instruction = 0x8805093C;
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	ctx.current_instruction = 0x88050940;
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	ctx.current_instruction = 0x88050944;
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x88050948;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8805094C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880527E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880527E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880527E0;
	ctx.current_instruction = 0x880527E0;
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// bge+ 0x880527f0
	if (!ctx.cr0.lt) goto loc_880527F0;
	// b 0x880547a0
	sub_880547A0(ctx, base);
	return;
loc_880527F0:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x88052818
	goto loc_88052818;
loc_88052804:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.current_instruction = 0x88052808;
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	ctx.current_instruction = 0x88052810;
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_88052818:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x88052804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_88052804;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x88052848
	if (ctx.cr0.eq) goto loc_88052848;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x8805286c
	if (!ctx.cr0.eq) goto loc_8805286C;
loc_88052834:
	// lwz r7,-4(r4)
	ctx.current_instruction = 0x88052834;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	ctx.current_instruction = 0x8805283C;
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x88052834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052834;
loc_88052848:
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
loc_88052854:
	// lbz r0,-1(r4)
	ctx.current_instruction = 0x88052854;
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	ctx.current_instruction = 0x8805285C;
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x88052854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88052854;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805286C:
	// lbz r7,-1(r4)
	ctx.current_instruction = 0x8805286C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.current_instruction = 0x88052874;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.current_instruction = 0x8805287C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.current_instruction = 0x88052884;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	ctx.current_instruction = 0x88052890;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x8805286c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805286C;
	// b 0x88052848
	goto loc_88052848;
}

DEFINE_REX_FUNC(sub_88057AC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88057AC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057AC0;
	ctx.current_instruction = 0x88057AC0;
	// stw r4,68(r3)
	ctx.current_instruction = 0x88057AC0;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88057C50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057C50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057C50) {
			switch (rex_dispatch_address) {
				case 0x88057C7C:
				case 0x88057C9C:
				case 0x88057CC8:
				case 0x88057CE4:
				case 0x88057CF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057C50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057C7C: goto loc_88057C7C;
		case 0x88057C9C: goto loc_88057C9C;
		case 0x88057CC8: goto loc_88057CC8;
		case 0x88057CE4: goto loc_88057CE4;
		case 0x88057CF8: goto loc_88057CF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88057C54;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88057C58;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88057C5C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88057C60;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88057C64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,84(r11)
	ctx.current_instruction = 0x88057C70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057C7C:
	// lwz r3,56(r31)
	ctx.current_instruction = 0x88057C7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88057ca0
	if (ctx.cr6.eq) goto loc_88057CA0;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88057C8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.current_instruction = 0x88057C90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057C9C:
	// stw r30,56(r31)
	ctx.current_instruction = 0x88057C9C;
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_88057CA0:
	// lwz r11,652(r31)
	ctx.current_instruction = 0x88057CA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88057cd0
	if (ctx.cr6.eq) goto loc_88057CD0;
	// lwz r3,656(r31)
	ctx.current_instruction = 0x88057CAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88057ccc
	if (ctx.cr6.eq) goto loc_88057CCC;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88057CB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88057CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057CC8:
	// stw r30,656(r31)
	ctx.current_instruction = 0x88057CC8;
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
loc_88057CCC:
	// stw r30,652(r31)
	ctx.current_instruction = 0x88057CCC;
	REX_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
loc_88057CD0:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88057CD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.current_instruction = 0x88057CD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057CE4:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88057CE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.current_instruction = 0x88057CEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88057CF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057CF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88057D00;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88057D08;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88057D0C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A860) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805A860;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805A860) {
			switch (rex_dispatch_address) {
				case 0x8805A890:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A860;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805A890: goto loc_8805A890;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805A864;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805A868;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8805A86C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.current_instruction = 0x8805A874;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805a898
	if (ctx.cr6.eq) goto loc_8805A898;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805A880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x8805A884;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805A890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805A890:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r31)
	ctx.current_instruction = 0x8805A894;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_8805A898:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805A8A0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805A8A8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BA90) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BA90);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BA90;
	ctx.current_instruction = 0x8805BA90;
	PPCRegister temp{};
	// lwz r11,312(r3)
	ctx.current_instruction = 0x8805BA90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,-5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5000, ctx.xer);
	// stw r11,0(r5)
	ctx.current_instruction = 0x8805BA98;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x8805bab4
	if (ctx.cr6.gt) goto loc_8805BAB4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,340(r3)
	ctx.current_instruction = 0x8805BAA4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x8805BAA8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8805bac8
	if (ctx.cr6.gt) goto loc_8805BAC8;
loc_8805BAB4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,340(r3)
	ctx.current_instruction = 0x8805BAB8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8892(r11)
	ctx.current_instruction = 0x8805BABC;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8805bad8
	if (ctx.cr6.lt) goto loc_8805BAD8;
loc_8805BAC8:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805BAD0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805BAD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805BAE0;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805BF40) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805BF40);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805BF40;
	ctx.current_instruction = 0x8805BF40;
	// ld r11,48(r3)
	ctx.current_instruction = 0x8805BF40;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 48);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,44(r10)
	ctx.current_instruction = 0x8805BF54;
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// std r8,48(r10)
	ctx.current_instruction = 0x8805BF58;
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r8.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C0E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C0E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C0E8) {
			switch (rex_dispatch_address) {
				case 0x8805C0F0:
				case 0x8805C110:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C0E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C0F0: goto loc_8805C0F0;
		case 0x8805C110: goto loc_8805C110;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8805C0F0;
	__savegprlr_29(ctx, base);
loc_8805C0F0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805C0F0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805C0F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8805C104;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805C110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805C110:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8805c120
	if (ctx.cr6.lt) goto loc_8805C120;
	// stw r30,44(r31)
	ctx.current_instruction = 0x8805C118;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r29,48(r31)
	ctx.current_instruction = 0x8805C11C;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_8805C120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805DA30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805DA30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805DA30) {
			switch (rex_dispatch_address) {
				case 0x8805DA38:
				case 0x8805DAB4:
				case 0x8805DAD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DA30;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805DA38: goto loc_8805DA38;
		case 0x8805DAB4: goto loc_8805DAB4;
		case 0x8805DAD0: goto loc_8805DAD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805DA38;
	__savegprlr_28(ctx, base);
loc_8805DA38:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805DA38;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8805da90
	if (ctx.cr6.eq) goto loc_8805DA90;
	// lwz r11,0(r7)
	ctx.current_instruction = 0x8805DA50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805da90
	if (ctx.cr6.eq) goto loc_8805DA90;
	// lwz r11,152(r7)
	ctx.current_instruction = 0x8805DA5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r11,156(r7)
	ctx.current_instruction = 0x8805DA68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r11,40(r7)
	ctx.current_instruction = 0x8805DA74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805DA7C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,44(r7)
	ctx.current_instruction = 0x8805DA80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// stw r10,0(r5)
	ctx.current_instruction = 0x8805DA84;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8805DA90:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r28,-30683
	ctx.r28.s64 = -2010841088;
	// stw r11,0(r30)
	ctx.current_instruction = 0x8805DA98;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,0(r31)
	ctx.current_instruction = 0x8805DAA0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,9628
	ctx.r4.s64 = ctx.r10.s64 + 9628;
	// lwz r3,2840(r28)
	ctx.current_instruction = 0x8805DAAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 2840);
	// bl 0x8806c290
	ctx.lr = 0x8805DAB4;
	sub_8806C290(ctx, base);
loc_8805DAB4:
	// lwz r11,2840(r28)
	ctx.current_instruction = 0x8805DAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2840);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r9,9604
	ctx.r4.s64 = ctx.r9.s64 + 9604;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8806c290
	ctx.lr = 0x8805DAD0;
	sub_8806C290(ctx, base);
loc_8805DAD0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805DAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8805DAEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8805db88
	if (ctx.cr6.eq) goto loc_8805DB88;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,0(r31)
	ctx.current_instruction = 0x8805DB04;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805DB08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x8805db1c
	if (!ctx.cr6.eq) goto loc_8805DB1C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x8805db24
	goto loc_8805DB24;
loc_8805DB1C:
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_8805DB24:
	// stw r10,0(r30)
	ctx.current_instruction = 0x8805DB24;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8805DB28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8805db44
	if (ctx.cr6.lt) goto loc_8805DB44;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x8805db48
	if (!ctx.cr6.gt) goto loc_8805DB48;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// b 0x8805db48
	goto loc_8805DB48;
loc_8805DB44:
	// li r11,16
	ctx.r11.s64 = 16;
loc_8805DB48:
	// stw r11,0(r31)
	ctx.current_instruction = 0x8805DB48;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805DB4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8805db74
	if (ctx.cr6.lt) goto loc_8805DB74;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x8805db78
	if (!ctx.cr6.gt) goto loc_8805DB78;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	ctx.current_instruction = 0x8805DB68;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8805DB74:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8805DB78:
	// stw r11,0(r30)
	ctx.current_instruction = 0x8805DB78;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8805DB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880636B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880636B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880636B8;
	ctx.current_instruction = 0x880636B8;
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88063740
	if (ctx.cr6.eq) goto loc_88063740;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88063740
	if (ctx.cr6.eq) goto loc_88063740;
	// lwz r11,528(r3)
	ctx.current_instruction = 0x880636CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88063740
	if (ctx.cr6.eq) goto loc_88063740;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880636E8:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x880636E8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880636e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880636E8;
	// lwz r11,4(r8)
	ctx.current_instruction = 0x880636F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r11)
	ctx.current_instruction = 0x880636F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,12(r4)
	ctx.current_instruction = 0x880636FC;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.current_instruction = 0x88063700;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,16(r9)
	ctx.current_instruction = 0x88063704;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,0(r4)
	ctx.current_instruction = 0x88063708;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.current_instruction = 0x8806370C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,20(r6)
	ctx.current_instruction = 0x88063710;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r5,4(r4)
	ctx.current_instruction = 0x88063714;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r8)
	ctx.current_instruction = 0x88063718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,24(r11)
	ctx.current_instruction = 0x8806371C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,8(r4)
	ctx.current_instruction = 0x88063720;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.current_instruction = 0x88063724;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,68(r9)
	ctx.current_instruction = 0x88063728;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// stb r7,16(r4)
	ctx.current_instruction = 0x8806372C;
	REX_STORE_U8(ctx.r4.u32 + 16, ctx.r7.u8);
	// lwz r5,4(r8)
	ctx.current_instruction = 0x88063730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r5)
	ctx.current_instruction = 0x88063734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,20(r4)
	ctx.current_instruction = 0x88063738;
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063740:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065408) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88065408);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065408;
	ctx.current_instruction = 0x88065408;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r10,r11,10560
	ctx.r10.s64 = ctx.r11.s64 + 10560;
	// stw r10,0(r3)
	ctx.current_instruction = 0x88065410;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x880cd4f8
	sub_880CD4F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88065418) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88065418;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88065418) {
			switch (rex_dispatch_address) {
				case 0x8806543C:
				case 0x8806544C:
				case 0x8806545C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065418;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806543C: goto loc_8806543C;
		case 0x8806544C: goto loc_8806544C;
		case 0x8806545C: goto loc_8806545C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806541C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88065420;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88065424;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8806543C;
	sub_88052D90(ctx, base);
loc_8806543C:
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8806544C;
	sub_88052D90(ctx, base);
loc_8806544C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,284(r31)
	ctx.current_instruction = 0x88065454;
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// bl 0x880cd500
	ctx.lr = 0x8806545C;
	sub_880CD500(ctx, base);
loc_8806545C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88065460;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88065468;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88065BB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88065BB0) {
			switch (rex_dispatch_address) {
				case 0x88065BB8:
				case 0x88065BDC:
				case 0x88065C00:
				case 0x88065C1C:
				case 0x88065C28:
				case 0x88065C34:
				case 0x88065C40:
				case 0x88065C4C:
				case 0x88065C58:
				case 0x88065C94:
				case 0x88065CAC:
				case 0x88065CF4:
				case 0x88065D08:
				case 0x88065D54:
				case 0x88065D84:
				case 0x88065DBC:
				case 0x88065DD0:
				case 0x88065DE8:
				case 0x88065E0C:
				case 0x88065E18:
				case 0x88065E28:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065BB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88065BB8: goto loc_88065BB8;
		case 0x88065BDC: goto loc_88065BDC;
		case 0x88065C00: goto loc_88065C00;
		case 0x88065C1C: goto loc_88065C1C;
		case 0x88065C28: goto loc_88065C28;
		case 0x88065C34: goto loc_88065C34;
		case 0x88065C40: goto loc_88065C40;
		case 0x88065C4C: goto loc_88065C4C;
		case 0x88065C58: goto loc_88065C58;
		case 0x88065C94: goto loc_88065C94;
		case 0x88065CAC: goto loc_88065CAC;
		case 0x88065CF4: goto loc_88065CF4;
		case 0x88065D08: goto loc_88065D08;
		case 0x88065D54: goto loc_88065D54;
		case 0x88065D84: goto loc_88065D84;
		case 0x88065DBC: goto loc_88065DBC;
		case 0x88065DD0: goto loc_88065DD0;
		case 0x88065DE8: goto loc_88065DE8;
		case 0x88065E0C: goto loc_88065E0C;
		case 0x88065E18: goto loc_88065E18;
		case 0x88065E28: goto loc_88065E28;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88065BB8;
	__savegprlr_26(ctx, base);
loc_88065BB8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88065BB8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88065e38
	if (ctx.cr6.eq) goto loc_88065E38;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x88065BC8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x88065e38
	if (ctx.cr6.eq) goto loc_88065E38;
	// lwz r3,584(r31)
	ctx.current_instruction = 0x88065BD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x880d15a0
	ctx.lr = 0x88065BDC;
	sub_880D15A0(ctx, base);
loc_88065BDC:
	// lwz r3,224(r31)
	ctx.current_instruction = 0x88065BDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r28,584(r31)
	ctx.current_instruction = 0x88065BE8;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// beq cr6,0x88065c04
	if (ctx.cr6.eq) goto loc_88065C04;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x88065C00;
	sub_88050358(ctx, base);
loc_88065C00:
	// stw r28,224(r31)
	ctx.current_instruction = 0x88065C00;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
loc_88065C04:
	// lwz r30,204(r31)
	ctx.current_instruction = 0x88065C04;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88065c5c
	if (ctx.cr6.eq) goto loc_88065C5C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r30)
	ctx.current_instruction = 0x88065C14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x88050358
	ctx.lr = 0x88065C1C;
	sub_88050358(ctx, base);
loc_88065C1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,16(r30)
	ctx.current_instruction = 0x88065C20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x88050358
	ctx.lr = 0x88065C28;
	sub_88050358(ctx, base);
loc_88065C28:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r30)
	ctx.current_instruction = 0x88065C2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x88050358
	ctx.lr = 0x88065C34;
	sub_88050358(ctx, base);
loc_88065C34:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.current_instruction = 0x88065C38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x88050358
	ctx.lr = 0x88065C40;
	sub_88050358(ctx, base);
loc_88065C40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r30)
	ctx.current_instruction = 0x88065C44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x88050358
	ctx.lr = 0x88065C4C;
	sub_88050358(ctx, base);
loc_88065C4C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x88065C58;
	sub_88050358(ctx, base);
loc_88065C58:
	// stw r28,204(r31)
	ctx.current_instruction = 0x88065C58;
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
loc_88065C5C:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x88065C5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065d0c
	if (ctx.cr6.eq) goto loc_88065D0C;
	// lhz r11,0(r11)
	ctx.current_instruction = 0x88065C68;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065cfc
	if (ctx.cr6.eq) goto loc_88065CFC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_88065C7C:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x88065C7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88065C84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,12(r10)
	ctx.current_instruction = 0x88065C8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x88050358
	ctx.lr = 0x88065C94;
	sub_88050358(ctx, base);
loc_88065C94:
	// lwz r9,208(r31)
	ctx.current_instruction = 0x88065C94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r9)
	ctx.current_instruction = 0x88065C9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r8)
	ctx.current_instruction = 0x88065CA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x88050358
	ctx.lr = 0x88065CAC;
	sub_88050358(ctx, base);
loc_88065CAC:
	// lwz r7,208(r31)
	ctx.current_instruction = 0x88065CAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,4(r7)
	ctx.current_instruction = 0x88065CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r6)
	ctx.current_instruction = 0x88065CBC;
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// lwz r5,208(r31)
	ctx.current_instruction = 0x88065CC0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,4(r5)
	ctx.current_instruction = 0x88065CC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r4)
	ctx.current_instruction = 0x88065CCC;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r3,208(r31)
	ctx.current_instruction = 0x88065CD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lhz r11,0(r3)
	ctx.current_instruction = 0x88065CD8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88065c7c
	if (ctx.cr6.lt) goto loc_88065C7C;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88065CEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x88050358
	ctx.lr = 0x88065CF4;
	sub_88050358(ctx, base);
loc_88065CF4:
	// lwz r10,208(r31)
	ctx.current_instruction = 0x88065CF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r28,4(r10)
	ctx.current_instruction = 0x88065CF8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_88065CFC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,208(r31)
	ctx.current_instruction = 0x88065D00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x88050358
	ctx.lr = 0x88065D08;
	sub_88050358(ctx, base);
loc_88065D08:
	// stw r28,208(r31)
	ctx.current_instruction = 0x88065D08;
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
loc_88065D0C:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88065D0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065dd4
	if (ctx.cr6.eq) goto loc_88065DD4;
	// lhz r11,0(r11)
	ctx.current_instruction = 0x88065D18;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065dc4
	if (ctx.cr6.eq) goto loc_88065DC4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_88065D2C:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88065D2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88065D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065d94
	if (ctx.cr6.eq) goto loc_88065D94;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.current_instruction = 0x88065D40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88065d54
	if (ctx.cr6.eq) goto loc_88065D54;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x88065D54;
	sub_88050358(ctx, base);
loc_88065D54:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88065D54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88065D58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r10)
	ctx.current_instruction = 0x88065D60;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// lwz r9,232(r31)
	ctx.current_instruction = 0x88065D64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r9)
	ctx.current_instruction = 0x88065D68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r8)
	ctx.current_instruction = 0x88065D70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88065d84
	if (ctx.cr6.eq) goto loc_88065D84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x88065D84;
	sub_88050358(ctx, base);
loc_88065D84:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88065D84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88065D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,16(r10)
	ctx.current_instruction = 0x88065D90;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r28.u32);
loc_88065D94:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88065D94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88065DA0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88065d2c
	if (ctx.cr6.lt) goto loc_88065D2C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x88065DB4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x88050358
	ctx.lr = 0x88065DBC;
	sub_88050358(ctx, base);
loc_88065DBC:
	// lwz r10,232(r31)
	ctx.current_instruction = 0x88065DBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r28,4(r10)
	ctx.current_instruction = 0x88065DC0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_88065DC4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,232(r31)
	ctx.current_instruction = 0x88065DC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x88050358
	ctx.lr = 0x88065DD0;
	sub_88050358(ctx, base);
loc_88065DD0:
	// stw r28,232(r31)
	ctx.current_instruction = 0x88065DD0;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
loc_88065DD4:
	// lwz r3,612(r31)
	ctx.current_instruction = 0x88065DD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88065de8
	if (ctx.cr6.eq) goto loc_88065DE8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x88065DE8;
	sub_88050358(ctx, base);
loc_88065DE8:
	// lwz r30,616(r31)
	ctx.current_instruction = 0x88065DE8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// stw r28,612(r31)
	ctx.current_instruction = 0x88065DEC;
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88065e18
	if (ctx.cr6.eq) goto loc_88065E18;
	// lwz r3,4(r30)
	ctx.current_instruction = 0x88065DF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88065e0c
	if (ctx.cr6.eq) goto loc_88065E0C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x88050358
	ctx.lr = 0x88065E0C;
	sub_88050358(ctx, base);
loc_88065E0C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x88065E18;
	sub_88050358(ctx, base);
loc_88065E18:
	// stw r28,616(r31)
	ctx.current_instruction = 0x88065E18;
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x88065E28;
	sub_88050358(ctx, base);
loc_88065E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r26)
	ctx.current_instruction = 0x88065E2C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88065E38:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8806E228) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806E228;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806E228) {
			switch (rex_dispatch_address) {
				case 0x8806E230:
				case 0x8806E2EC:
				case 0x8806E328:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806E228;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806E230: goto loc_8806E230;
		case 0x8806E2EC: goto loc_8806E2EC;
		case 0x8806E328: goto loc_8806E328;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8806E230;
	__savegprlr_27(ctx, base);
loc_8806E230:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8806E230;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30408(r3)
	ctx.current_instruction = 0x8806E234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30408);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e260
	if (ctx.cr6.eq) goto loc_8806E260;
	// lwz r11,30432(r3)
	ctx.current_instruction = 0x8806E248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e260
	if (!ctx.cr6.eq) goto loc_8806E260;
loc_8806E254:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806E260:
	// lwz r11,31544(r29)
	ctx.current_instruction = 0x8806E260;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e280
	if (ctx.cr6.eq) goto loc_8806E280;
	// lwz r9,2804(r29)
	ctx.current_instruction = 0x8806E26C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2804);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806e254
	if (!ctx.cr6.eq) goto loc_8806E254;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e28c
	if (!ctx.cr6.eq) goto loc_8806E28C;
loc_8806E280:
	// lwz r9,2800(r29)
	ctx.current_instruction = 0x8806E280;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2800);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806e254
	if (!ctx.cr6.eq) goto loc_8806E254;
loc_8806E28C:
	// lwz r9,4(r29)
	ctx.current_instruction = 0x8806E28C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x8806e360
	if (!ctx.cr6.eq) goto loc_8806E360;
	// lwz r9,2116(r29)
	ctx.current_instruction = 0x8806E298;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2116);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8806e2b0
	if (!ctx.cr6.eq) goto loc_8806E2B0;
	// lwz r9,6772(r29)
	ctx.current_instruction = 0x8806E2A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 6772);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806e360
	if (ctx.cr6.eq) goto loc_8806E360;
loc_8806E2B0:
	// lwz r9,27988(r29)
	ctx.current_instruction = 0x8806E2B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 27988);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8806e2cc
	if (ctx.cr6.eq) goto loc_8806E2CC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e2cc
	if (ctx.cr6.eq) goto loc_8806E2CC;
	// lwz r11,2804(r29)
	ctx.current_instruction = 0x8806E2C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2804);
	// b 0x8806e2d0
	goto loc_8806E2D0;
loc_8806E2CC:
	// lwz r11,2800(r29)
	ctx.current_instruction = 0x8806E2CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2800);
loc_8806E2D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e360
	if (!ctx.cr6.eq) goto loc_8806E360;
	// lwz r11,7756(r29)
	ctx.current_instruction = 0x8806E2D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 7756);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8806e360
	if (!ctx.cr6.eq) goto loc_8806E360;
	// bl 0x881ee8e8
	ctx.lr = 0x8806E2EC;
	sub_881EE8E8(ctx, base);
loc_8806E2EC:
	// srawi r10,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 6;
	// lwz r11,1260(r29)
	ctx.current_instruction = 0x8806E2F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1260);
	// li r31,1
	ctx.r31.s64 = 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r11,r8,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r8.u64;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// stw r7,876(r29)
	ctx.current_instruction = 0x8806E30C;
	REX_STORE_U32(ctx.r29.u32 + 876, ctx.r7.u32);
	// ble cr6,0x8806e35c
	if (!ctx.cr6.gt) goto loc_8806E35C;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// addi r30,r29,876
	ctx.r30.s64 = ctx.r29.s64 + 876;
	// ori r27,r11,21846
	ctx.r27.u64 = ctx.r11.u64 | 21846;
loc_8806E320:
	// lwz r28,0(r30)
	ctx.current_instruction = 0x8806E320;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x881ee8e8
	ctx.lr = 0x8806E328;
	sub_881EE8E8(ctx, base);
loc_8806E328:
	// mulhw r11,r3,r27
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r11,4(r30)
	ctx.current_instruction = 0x8806E34C;
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lwz r10,1260(r29)
	ctx.current_instruction = 0x8806E350;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1260);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8806e320
	if (ctx.cr6.lt) goto loc_8806E320;
loc_8806E35C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8806E360:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r11,18388(r11)
	ctx.current_instruction = 0x8806E364;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8806e37c
	if (!ctx.cr6.gt) goto loc_8806E37C;
	// ld r11,736(r29)
	ctx.current_instruction = 0x8806E370;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x8806e3cc
	if (ctx.cr6.eq) goto loc_8806E3CC;
loc_8806E37C:
	// lwz r11,6776(r29)
	ctx.current_instruction = 0x8806E37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 6776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e3a8
	if (ctx.cr6.eq) goto loc_8806E3A8;
	// lwz r11,6788(r29)
	ctx.current_instruction = 0x8806E388;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 6788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e3a8
	if (ctx.cr6.eq) goto loc_8806E3A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,6788(r29)
	ctx.current_instruction = 0x8806E39C;
	REX_STORE_U32(ctx.r29.u32 + 6788, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806E3A8:
	// lwz r11,30744(r29)
	ctx.current_instruction = 0x8806E3A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 30744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806e3cc
	if (!ctx.cr6.eq) goto loc_8806E3CC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8806e3cc
	if (!ctx.cr6.eq) goto loc_8806E3CC;
	// lwz r11,30700(r29)
	ctx.current_instruction = 0x8806E3BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 30700);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806e3d0
	if (ctx.cr6.eq) goto loc_8806E3D0;
loc_8806E3CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8806E3D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88073680) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88073680;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88073680) {
			switch (rex_dispatch_address) {
				case 0x88073688:
				case 0x880736DC:
				case 0x88073710:
				case 0x88073744:
				case 0x8807376C:
				case 0x88073794:
				case 0x880737D4:
				case 0x880737F0:
				case 0x88073864:
				case 0x88073878:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88073680;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88073688: goto loc_88073688;
		case 0x880736DC: goto loc_880736DC;
		case 0x88073710: goto loc_88073710;
		case 0x88073744: goto loc_88073744;
		case 0x8807376C: goto loc_8807376C;
		case 0x88073794: goto loc_88073794;
		case 0x880737D4: goto loc_880737D4;
		case 0x880737F0: goto loc_880737F0;
		case 0x88073864: goto loc_88073864;
		case 0x88073878: goto loc_88073878;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88073688;
	__savegprlr_28(ctx, base);
loc_88073688:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88073688;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1380(r3)
	ctx.current_instruction = 0x8807368C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// lwz r11,728(r3)
	ctx.current_instruction = 0x880736A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 728);
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,19088(r3)
	ctx.current_instruction = 0x880736B0;
	REX_STORE_U32(ctx.r3.u32 + 19088, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x880736cc
	if (!ctx.cr6.gt) goto loc_880736CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_880736CC:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x880736DC;
	sub_88050340(ctx, base);
loc_880736DC:
	// stw r3,3400(r31)
	ctx.current_instruction = 0x880736DC;
	REX_STORE_U32(ctx.r31.u32 + 3400, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88073870
	if (ctx.cr6.eq) goto loc_88073870;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880736E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x88073708
	if (!ctx.cr6.gt) goto loc_88073708;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_88073708:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x88073710;
	sub_88050340(ctx, base);
loc_88073710:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3404(r31)
	ctx.current_instruction = 0x88073714;
	REX_STORE_U32(ctx.r31.u32 + 3404, ctx.r3.u32);
	// beq cr6,0x88073870
	if (ctx.cr6.eq) goto loc_88073870;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x8807371C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x8807373c
	if (!ctx.cr6.gt) goto loc_8807373C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8807373C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x88073744;
	sub_88050340(ctx, base);
loc_88073744:
	// stw r3,744(r31)
	ctx.current_instruction = 0x88073744;
	REX_STORE_U32(ctx.r31.u32 + 744, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88073870
	if (ctx.cr6.eq) goto loc_88073870;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88073750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3404(r31)
	ctx.current_instruction = 0x88073758;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3404);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x88052d90
	ctx.lr = 0x8807376C;
	sub_88052D90(ctx, base);
loc_8807376C:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x8807376C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x8807378c
	if (!ctx.cr6.gt) goto loc_8807378C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8807378C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x88073794;
	sub_88050340(ctx, base);
loc_88073794:
	// stw r3,3408(r31)
	ctx.current_instruction = 0x88073794;
	REX_STORE_U32(ctx.r31.u32 + 3408, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88073870
	if (ctx.cr6.eq) goto loc_88073870;
	// lwz r10,1608(r31)
	ctx.current_instruction = 0x880737A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,3396(r31)
	ctx.current_instruction = 0x880737AC;
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// beq cr6,0x880738a0
	if (ctx.cr6.eq) goto loc_880738A0;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880737B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// mulli r11,r11,1560
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1560));
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x880737cc
	if (!ctx.cr6.gt) goto loc_880737CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_880737CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x880737D4;
	sub_88050340(ctx, base);
loc_880737D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3412(r31)
	ctx.current_instruction = 0x880737D8;
	REX_STORE_U32(ctx.r31.u32 + 3412, ctx.r3.u32);
	// beq cr6,0x88073870
	if (ctx.cr6.eq) goto loc_88073870;
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880737E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,3120
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3120));
	// bl 0x88052d90
	ctx.lr = 0x880737F0;
	sub_88052D90(ctx, base);
loc_880737F0:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880737F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r8,3412(r31)
	ctx.current_instruction = 0x880737F4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3412);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mulli r7,r11,792
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(792));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r8,3416(r31)
	ctx.current_instruction = 0x8807381C;
	REX_STORE_U32(ctx.r31.u32 + 3416, ctx.r8.u32);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,3420(r31)
	ctx.current_instruction = 0x88073828;
	REX_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r8,3424(r31)
	ctx.current_instruction = 0x88073834;
	REX_STORE_U32(ctx.r31.u32 + 3424, ctx.r8.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,3428(r31)
	ctx.current_instruction = 0x8807383C;
	REX_STORE_U32(ctx.r31.u32 + 3428, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,3432(r31)
	ctx.current_instruction = 0x88073844;
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r10.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,3436(r31)
	ctx.current_instruction = 0x8807384C;
	REX_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// stw r5,3440(r31)
	ctx.current_instruction = 0x88073850;
	REX_STORE_U32(ctx.r31.u32 + 3440, ctx.r5.u32);
	// ble cr6,0x8807385c
	if (!ctx.cr6.gt) goto loc_8807385C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8807385C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x88050340
	ctx.lr = 0x88073864;
	sub_88050340(ctx, base);
loc_88073864:
	// stw r3,3104(r31)
	ctx.current_instruction = 0x88073864;
	REX_STORE_U32(ctx.r31.u32 + 3104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x88073884
	if (!ctx.cr6.eq) goto loc_88073884;
loc_88073870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88071e98
	ctx.lr = 0x88073878;
	sub_88071E98(ctx, base);
loc_88073878:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88073884:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x88073884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,3108(r31)
	ctx.current_instruction = 0x88073898;
	REX_STORE_U32(ctx.r31.u32 + 3108, ctx.r10.u32);
	// b 0x880738c8
	goto loc_880738C8;
loc_880738A0:
	// stw r11,3412(r31)
	ctx.current_instruction = 0x880738A0;
	REX_STORE_U32(ctx.r31.u32 + 3412, ctx.r11.u32);
	// stw r11,3416(r31)
	ctx.current_instruction = 0x880738A4;
	REX_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// stw r11,3420(r31)
	ctx.current_instruction = 0x880738A8;
	REX_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// stw r11,3424(r31)
	ctx.current_instruction = 0x880738AC;
	REX_STORE_U32(ctx.r31.u32 + 3424, ctx.r11.u32);
	// stw r11,3428(r31)
	ctx.current_instruction = 0x880738B0;
	REX_STORE_U32(ctx.r31.u32 + 3428, ctx.r11.u32);
	// stw r11,3432(r31)
	ctx.current_instruction = 0x880738B4;
	REX_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// stw r11,3436(r31)
	ctx.current_instruction = 0x880738B8;
	REX_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// stw r11,3440(r31)
	ctx.current_instruction = 0x880738BC;
	REX_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// stw r11,3104(r31)
	ctx.current_instruction = 0x880738C0;
	REX_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// stw r11,3108(r31)
	ctx.current_instruction = 0x880738C4;
	REX_STORE_U32(ctx.r31.u32 + 3108, ctx.r11.u32);
loc_880738C8:
	// lwz r11,728(r31)
	ctx.current_instruction = 0x880738C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,19460(r31)
	ctx.current_instruction = 0x880738D4;
	REX_STORE_U32(ctx.r31.u32 + 19460, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807D7F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807D7F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807D7F0) {
			switch (rex_dispatch_address) {
				case 0x8807D7F8:
				case 0x8807D860:
				case 0x8807D8A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807D7F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807D7F8: goto loc_8807D7F8;
		case 0x8807D860: goto loc_8807D860;
		case 0x8807D8A4: goto loc_8807D8A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8807D7F8;
	__savegprlr_24(ctx, base);
loc_8807D7F8:
	// stfd f31,-80(r1)
	ctx.current_instruction = 0x8807D7F8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8807D7FC;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r4,4
	ctx.r27.s64 = ctx.r4.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bge cr6,0x8807d82c
	if (!ctx.cr6.lt) goto loc_8807D82C;
	// li r27,5
	ctx.r27.s64 = 5;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8807d850
	goto loc_8807D850;
loc_8807D82C:
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8807d84c
	if (ctx.cr6.gt) goto loc_8807D84C;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8807d850
	goto loc_8807D850;
loc_8807D84C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8807D850:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x88050340
	ctx.lr = 0x8807D860;
	sub_88050340(ctx, base);
loc_8807D860:
	// stw r3,0(r29)
	ctx.current_instruction = 0x8807D860;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8807d87c
	if (!ctx.cr6.eq) goto loc_8807D87C;
loc_8807D86C:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.current_instruction = 0x8807D874;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8807D87C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x8807d8e0
	if (ctx.cr6.eq) goto loc_8807D8E0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lfs f31,6732(r11)
	ctx.current_instruction = 0x8807D894;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f31.f64 = double(temp.f32);
loc_8807D898:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,2076
	ctx.r3.s64 = 2076;
	// bl 0x88050340
	ctx.lr = 0x8807D8A4;
	sub_88050340(ctx, base);
loc_8807D8A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807d86c
	if (ctx.cr6.eq) goto loc_8807D86C;
	// stfs f31,20(r3)
	ctx.current_instruction = 0x8807D8AC;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r28,2072(r3)
	ctx.current_instruction = 0x8807D8B0;
	REX_STORE_U32(ctx.r3.u32 + 2072, ctx.r28.u32);
	// stfs f31,0(r3)
	ctx.current_instruction = 0x8807D8B4;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r28,16(r3)
	ctx.current_instruction = 0x8807D8B8;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stfs f31,4(r3)
	ctx.current_instruction = 0x8807D8BC;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f31,8(r3)
	ctx.current_instruction = 0x8807D8C4;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8807D8C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// stw r3,4(r11)
	ctx.current_instruction = 0x8807D8D4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8807d898
	if (ctx.cr6.lt) goto loc_8807D898;
loc_8807D8E0:
	// lwz r11,32(r29)
	ctx.current_instruction = 0x8807D8E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// mullw r10,r25,r24
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// stw r27,4(r29)
	ctx.current_instruction = 0x8807D8E8;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r25,8(r29)
	ctx.current_instruction = 0x8807D8EC;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r25.u32);
	// stw r24,12(r29)
	ctx.current_instruction = 0x8807D8F0;
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
	// stw r10,16(r29)
	ctx.current_instruction = 0x8807D8F4;
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807d908
	if (ctx.cr6.eq) goto loc_8807D908;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,44(r29)
	ctx.current_instruction = 0x8807D904;
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
loc_8807D908:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.current_instruction = 0x8807D910;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880825F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880825F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880825F0) {
			switch (rex_dispatch_address) {
				case 0x880825F8:
				case 0x8808268C:
				case 0x88082764:
				case 0x88082774:
				case 0x880828C4:
				case 0x880828F0:
				case 0x8808292C:
				case 0x8808296C:
				case 0x88082B30:
				case 0x88082B48:
				case 0x88082B60:
				case 0x88082B9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880825F0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880825F8: goto loc_880825F8;
		case 0x8808268C: goto loc_8808268C;
		case 0x88082764: goto loc_88082764;
		case 0x88082774: goto loc_88082774;
		case 0x880828C4: goto loc_880828C4;
		case 0x880828F0: goto loc_880828F0;
		case 0x8808292C: goto loc_8808292C;
		case 0x8808296C: goto loc_8808296C;
		case 0x88082B30: goto loc_88082B30;
		case 0x88082B48: goto loc_88082B48;
		case 0x88082B60: goto loc_88082B60;
		case 0x88082B9C: goto loc_88082B9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880825F8;
	__savegprlr_23(ctx, base);
loc_880825F8:
	// stfd f31,-88(r1)
	ctx.current_instruction = 0x880825F8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x880825FC;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8808262c
	if (ctx.cr6.gt) goto loc_8808262C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.current_instruction = 0x88082624;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8808262C:
	// ld r11,736(r31)
	ctx.current_instruction = 0x8808262C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// lwz r28,30480(r31)
	ctx.current_instruction = 0x88082630;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 30480);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x880826d8
	if (!ctx.cr6.gt) goto loc_880826D8;
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x8808263C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082650
	if (ctx.cr6.eq) goto loc_88082650;
	// lwz r11,30668(r31)
	ctx.current_instruction = 0x88082648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// b 0x88082654
	goto loc_88082654;
loc_88082650:
	// lwz r11,1376(r31)
	ctx.current_instruction = 0x88082650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
loc_88082654:
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,96(r1)
	ctx.current_instruction = 0x8808265C;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.current_instruction = 0x88082660;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	ctx.current_instruction = 0x88082664;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x88082668;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f31.f64));
	// bl 0x8807f210
	ctx.lr = 0x8808268C;
	sub_8807F210(ctx, base);
loc_8808268C:
	// lwz r11,7932(r31)
	ctx.current_instruction = 0x8808268C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7932);
	// stw r3,672(r31)
	ctx.current_instruction = 0x88082690;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r3.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880826a0
	if (!ctx.cr6.gt) goto loc_880826A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_880826A0:
	// stw r11,672(r31)
	ctx.current_instruction = 0x880826A0;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x880826d8
	if (!ctx.cr6.gt) goto loc_880826D8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,30828(r31)
	ctx.current_instruction = 0x880826B0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30828);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,30824(r31)
	ctx.current_instruction = 0x880826B4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30824);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12504(r11)
	ctx.current_instruction = 0x880826B8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12504);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,96(r1)
	ctx.current_instruction = 0x880826CC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x880826D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x880826dc
	goto loc_880826DC;
loc_880826D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_880826DC:
	// lwz r10,30732(r31)
	ctx.current_instruction = 0x880826DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30732);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880826fc
	if (!ctx.cr6.eq) goto loc_880826FC;
	// lwz r11,30628(r31)
	ctx.current_instruction = 0x880826F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082738
	if (ctx.cr6.eq) goto loc_88082738;
loc_880826FC:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x880826FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x88082740
	if (ctx.cr6.gt) goto loc_88082740;
	// lwz r9,30752(r31)
	ctx.current_instruction = 0x88082708;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88082730
	if (!ctx.cr6.eq) goto loc_88082730;
	// lwz r9,30756(r31)
	ctx.current_instruction = 0x88082714;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88082730
	if (!ctx.cr6.eq) goto loc_88082730;
	// lwz r9,30680(r31)
	ctx.current_instruction = 0x88082720;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// lwz r8,30656(r31)
	ctx.current_instruction = 0x88082724;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 30656);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88082738
	if (!ctx.cr6.lt) goto loc_88082738;
loc_88082730:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x88082740
	if (ctx.cr6.lt) goto loc_88082740;
loc_88082738:
	// stw r23,30616(r31)
	ctx.current_instruction = 0x88082738;
	REX_STORE_U32(ctx.r31.u32 + 30616, ctx.r23.u32);
	// b 0x88082744
	goto loc_88082744;
loc_88082740:
	// stw r24,30616(r31)
	ctx.current_instruction = 0x88082740;
	REX_STORE_U32(ctx.r31.u32 + 30616, ctx.r24.u32);
loc_88082744:
	// lwz r11,30616(r31)
	ctx.current_instruction = 0x88082744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082764
	if (ctx.cr6.eq) goto loc_88082764;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88082764
	if (ctx.cr6.eq) goto loc_88082764;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807e9d8
	ctx.lr = 0x88082764;
	sub_8807E9D8(ctx, base);
loc_88082764:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88082408
	ctx.lr = 0x88082774;
	sub_88082408(ctx, base);
loc_88082774:
	// lwz r11,30516(r31)
	ctx.current_instruction = 0x88082774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30516);
	// lfd f0,30488(r31)
	ctx.current_instruction = 0x88082778;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f12,1488(r11)
	ctx.current_instruction = 0x88082784;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r11,r11,12088
	ctx.r11.s64 = ctx.r11.s64 + 12088;
	// lfd f13,0(r11)
	ctx.current_instruction = 0x88082790;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// beq cr6,0x8808280c
	if (ctx.cr6.eq) goto loc_8808280C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x880827b4
	if (!ctx.cr6.gt) goto loc_880827B4;
	// fadd f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	ctx.current_instruction = 0x880827A8;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880827AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x880827c4
	goto loc_880827C4;
loc_880827B4:
	// fsub f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	ctx.current_instruction = 0x880827BC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880827C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_880827C4:
	// lwz r10,672(r31)
	ctx.current_instruction = 0x880827C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88082874
	if (!ctx.cr6.lt) goto loc_88082874;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x880827f4
	if (!ctx.cr6.gt) goto loc_880827F4;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x880827E4;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x880827E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x88082870
	goto loc_88082870;
loc_880827F4:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x880827FC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x88082800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x88082870
	goto loc_88082870;
loc_8808280C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x88082828
	if (!ctx.cr6.gt) goto loc_88082828;
	// fadd f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	ctx.current_instruction = 0x8808281C;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x88082820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x88082838
	goto loc_88082838;
loc_88082828:
	// fsub f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	ctx.current_instruction = 0x88082830;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x88082834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_88082838:
	// lwz r10,672(r31)
	ctx.current_instruction = 0x88082838;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88082874
	if (!ctx.cr6.lt) goto loc_88082874;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x88082860
	if (!ctx.cr6.gt) goto loc_88082860;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x88082854;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x88082858;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x88082870
	goto loc_88082870;
loc_88082860:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	ctx.current_instruction = 0x88082868;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8808286C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_88082870:
	// stw r11,672(r31)
	ctx.current_instruction = 0x88082870;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
loc_88082874:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x88082874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,7932(r31)
	ctx.current_instruction = 0x88082878;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7932);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x88082888
	if (ctx.cr6.gt) goto loc_88082888;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88082888:
	// stw r11,672(r31)
	ctx.current_instruction = 0x88082888;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x88082898
	if (ctx.cr6.lt) goto loc_88082898;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_88082898:
	// lwz r10,30752(r31)
	ctx.current_instruction = 0x88082898;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// stw r11,672(r31)
	ctx.current_instruction = 0x8808289C;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880828b4
	if (!ctx.cr6.eq) goto loc_880828B4;
	// lwz r11,30756(r31)
	ctx.current_instruction = 0x880828A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880828c4
	if (ctx.cr6.eq) goto loc_880828C4;
loc_880828B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4a00
	ctx.lr = 0x880828C4;
	sub_880E4A00(ctx, base);
loc_880828C4:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x880828C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x880828D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x880828D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x880828E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880828E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880794a0
	ctx.lr = 0x880828F0;
	sub_880794A0(ctx, base);
loc_880828F0:
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x880828F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,16(r10)
	ctx.current_instruction = 0x880828F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880828F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r8,r9,39
	ctx.xer.ca = ctx.r9.u32 <= 39;
	ctx.r8.u64 = static_cast<uint64_t>(39) - ctx.r9.u64;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88082990
	if (!ctx.cr6.gt) goto loc_88082990;
loc_88082914:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x88082914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88082990
	if (!ctx.cr6.lt) goto loc_88082990;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88079c58
	ctx.lr = 0x8808292C;
	sub_88079C58(ctx, base);
loc_8808292C:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x8808292C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r5,r28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x88082940
	if (ctx.cr6.lt) goto loc_88082940;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_88082940:
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x88082940;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8808294C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,2800(r31)
	ctx.current_instruction = 0x88082954;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r5,672(r31)
	ctx.current_instruction = 0x8808295C;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88082964;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880794a0
	ctx.lr = 0x8808296C;
	sub_880794A0(ctx, base);
loc_8808296C:
	// lwz r10,7868(r31)
	ctx.current_instruction = 0x8808296C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,16(r10)
	ctx.current_instruction = 0x88082970;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88082974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r8,r9,39
	ctx.xer.ca = ctx.r9.u32 <= 39;
	ctx.r8.u64 = static_cast<uint64_t>(39) - ctx.r9.u64;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x88082914
	if (ctx.cr6.gt) goto loc_88082914;
loc_88082990:
	// lwz r11,672(r31)
	ctx.current_instruction = 0x88082990;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// stw r11,30640(r31)
	ctx.current_instruction = 0x88082998;
	REX_STORE_U32(ctx.r31.u32 + 30640, ctx.r11.u32);
	// ble cr6,0x880829a8
	if (!ctx.cr6.gt) goto loc_880829A8;
	// stw r24,30620(r31)
	ctx.current_instruction = 0x880829A0;
	REX_STORE_U32(ctx.r31.u32 + 30620, ctx.r24.u32);
	// b 0x880829ac
	goto loc_880829AC;
loc_880829A8:
	// stw r23,30620(r31)
	ctx.current_instruction = 0x880829A8;
	REX_STORE_U32(ctx.r31.u32 + 30620, ctx.r23.u32);
loc_880829AC:
	// lwz r10,30732(r31)
	ctx.current_instruction = 0x880829AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30732);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880829c4
	if (!ctx.cr6.eq) goto loc_880829C4;
	// lwz r10,30628(r31)
	ctx.current_instruction = 0x880829B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88082a18
	if (ctx.cr6.eq) goto loc_88082A18;
loc_880829C4:
	// lwz r10,30752(r31)
	ctx.current_instruction = 0x880829C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880829ec
	if (!ctx.cr6.eq) goto loc_880829EC;
	// lwz r10,30756(r31)
	ctx.current_instruction = 0x880829D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880829ec
	if (!ctx.cr6.eq) goto loc_880829EC;
	// lwz r10,30680(r31)
	ctx.current_instruction = 0x880829DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// lwz r9,30656(r31)
	ctx.current_instruction = 0x880829E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 30656);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88082a04
	if (!ctx.cr6.lt) goto loc_88082A04;
loc_880829EC:
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88082a14
	if (ctx.cr6.lt) goto loc_88082A14;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// blt cr6,0x88082a14
	if (ctx.cr6.lt) goto loc_88082A14;
loc_88082A04:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x88082a14
	if (ctx.cr6.gt) goto loc_88082A14;
	// stw r23,30616(r31)
	ctx.current_instruction = 0x88082A0C;
	REX_STORE_U32(ctx.r31.u32 + 30616, ctx.r23.u32);
	// b 0x88082a18
	goto loc_88082A18;
loc_88082A14:
	// stw r24,30616(r31)
	ctx.current_instruction = 0x88082A14;
	REX_STORE_U32(ctx.r31.u32 + 30616, ctx.r24.u32);
loc_88082A18:
	// lwz r10,30696(r31)
	ctx.current_instruction = 0x88082A18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88082a94
	if (ctx.cr6.eq) goto loc_88082A94;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88082a60
	if (ctx.cr6.lt) goto loc_88082A60;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x88082a60
	if (ctx.cr6.gt) goto loc_88082A60;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,30828(r31)
	ctx.current_instruction = 0x88082A38;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30828);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30824(r31)
	ctx.current_instruction = 0x88082A3C;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30824);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	ctx.current_instruction = 0x88082A40;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.current_instruction = 0x88082A44;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fdivs f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// b 0x88082a68
	goto loc_88082A68;
loc_88082A60:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x88082A64;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
loc_88082A68:
	// lwz r11,30668(r31)
	ctx.current_instruction = 0x88082A68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	ctx.current_instruction = 0x88082A70;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x88082A74;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	ctx.current_instruction = 0x88082A88;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x88082A8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x88082b00
	goto loc_88082B00;
loc_88082A94:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x88082ad0
	if (ctx.cr6.lt) goto loc_88082AD0;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bgt cr6,0x88082ad0
	if (ctx.cr6.gt) goto loc_88082AD0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,30828(r31)
	ctx.current_instruction = 0x88082AA8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30828);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30824(r31)
	ctx.current_instruction = 0x88082AAC;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 30824);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	ctx.current_instruction = 0x88082AB0;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.current_instruction = 0x88082AB4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fdivs f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// b 0x88082ad8
	goto loc_88082AD8;
loc_88082AD0:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x88082AD4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
loc_88082AD8:
	// lwz r11,1376(r31)
	ctx.current_instruction = 0x88082AD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	ctx.current_instruction = 0x88082AE0;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.current_instruction = 0x88082AE4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	ctx.current_instruction = 0x88082AF8;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x88082AFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_88082B00:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x88082b60
	if (!ctx.cr6.gt) goto loc_88082B60;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x88082b60
	if (!ctx.cr6.gt) goto loc_88082B60;
	// lwz r11,30740(r31)
	ctx.current_instruction = 0x88082B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082b4c
	if (ctx.cr6.eq) goto loc_88082B4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88082b34
	if (ctx.cr6.eq) goto loc_88082B34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807ec78
	ctx.lr = 0x88082B30;
	sub_8807EC78(ctx, base);
loc_88082B30:
	// b 0x88082b60
	goto loc_88082B60;
loc_88082B34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082b4c
	if (ctx.cr6.eq) goto loc_88082B4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807eee8
	ctx.lr = 0x88082B48;
	sub_8807EEE8(ctx, base);
loc_88082B48:
	// b 0x88082b60
	goto loc_88082B60;
loc_88082B4C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88082b60
	if (ctx.cr6.eq) goto loc_88082B60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807ee20
	ctx.lr = 0x88082B60;
	sub_8807EE20(ctx, base);
loc_88082B60:
	// lwz r11,1376(r31)
	ctx.current_instruction = 0x88082B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,672(r31)
	ctx.current_instruction = 0x88082B6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 672);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,96(r1)
	ctx.current_instruction = 0x88082B74;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.current_instruction = 0x88082B78;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,96(r1)
	ctx.current_instruction = 0x88082B80;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfd f12,96(r1)
	ctx.current_instruction = 0x88082B88;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x8807ef48
	ctx.lr = 0x88082B9C;
	sub_8807EF48(ctx, base);
loc_88082B9C:
	// stw r30,30636(r31)
	ctx.current_instruction = 0x88082B9C;
	REX_STORE_U32(ctx.r31.u32 + 30636, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.current_instruction = 0x88082BA8;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B1810) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B1810;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B1810) {
			switch (rex_dispatch_address) {
				case 0x880B1818:
				case 0x880B1894:
				case 0x880B18E4:
				case 0x880B1900:
				case 0x880B1918:
				case 0x880B1960:
				case 0x880B198C:
				case 0x880B19B8:
				case 0x880B1A00:
				case 0x880B1A2C:
				case 0x880B1A58:
				case 0x880B1A9C:
				case 0x880B1AC0:
				case 0x880B1AEC:
				case 0x880B1B30:
				case 0x880B1B88:
				case 0x880B1BAC:
				case 0x880B1BD8:
				case 0x880B1C1C:
				case 0x880B1C5C:
				case 0x880B1CAC:
				case 0x880B1CC8:
				case 0x880B1CE0:
				case 0x880B1D28:
				case 0x880B1D44:
				case 0x880B1D70:
				case 0x880B1D8C:
				case 0x880B1DBC:
				case 0x880B1DE8:
				case 0x880B1E2C:
				case 0x880B1E50:
				case 0x880B1E7C:
				case 0x880B1E94:
				case 0x880B1ECC:
				case 0x880B1EF0:
				case 0x880B1F1C:
				case 0x880B1F34:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B1810;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B1818: goto loc_880B1818;
		case 0x880B1894: goto loc_880B1894;
		case 0x880B18E4: goto loc_880B18E4;
		case 0x880B1900: goto loc_880B1900;
		case 0x880B1918: goto loc_880B1918;
		case 0x880B1960: goto loc_880B1960;
		case 0x880B198C: goto loc_880B198C;
		case 0x880B19B8: goto loc_880B19B8;
		case 0x880B1A00: goto loc_880B1A00;
		case 0x880B1A2C: goto loc_880B1A2C;
		case 0x880B1A58: goto loc_880B1A58;
		case 0x880B1A9C: goto loc_880B1A9C;
		case 0x880B1AC0: goto loc_880B1AC0;
		case 0x880B1AEC: goto loc_880B1AEC;
		case 0x880B1B30: goto loc_880B1B30;
		case 0x880B1B88: goto loc_880B1B88;
		case 0x880B1BAC: goto loc_880B1BAC;
		case 0x880B1BD8: goto loc_880B1BD8;
		case 0x880B1C1C: goto loc_880B1C1C;
		case 0x880B1C5C: goto loc_880B1C5C;
		case 0x880B1CAC: goto loc_880B1CAC;
		case 0x880B1CC8: goto loc_880B1CC8;
		case 0x880B1CE0: goto loc_880B1CE0;
		case 0x880B1D28: goto loc_880B1D28;
		case 0x880B1D44: goto loc_880B1D44;
		case 0x880B1D70: goto loc_880B1D70;
		case 0x880B1D8C: goto loc_880B1D8C;
		case 0x880B1DBC: goto loc_880B1DBC;
		case 0x880B1DE8: goto loc_880B1DE8;
		case 0x880B1E2C: goto loc_880B1E2C;
		case 0x880B1E50: goto loc_880B1E50;
		case 0x880B1E7C: goto loc_880B1E7C;
		case 0x880B1E94: goto loc_880B1E94;
		case 0x880B1ECC: goto loc_880B1ECC;
		case 0x880B1EF0: goto loc_880B1EF0;
		case 0x880B1F1C: goto loc_880B1F1C;
		case 0x880B1F34: goto loc_880B1F34;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x880B1818;
	__savegprlr_15(ctx, base);
loc_880B1818:
	// stwu r1,-336(r1)
	ctx.current_instruction = 0x880B1818;
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r1)
	ctx.current_instruction = 0x880B181C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// lwz r10,28020(r3)
	ctx.current_instruction = 0x880B1824;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28020);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r30,436(r1)
	ctx.current_instruction = 0x880B182C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r22,0(r11)
	ctx.current_instruction = 0x880B183C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r21,12(r11)
	ctx.current_instruction = 0x880B1844;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r30,256
	ctx.r29.s64 = ctx.r30.s64 + 256;
	// addi r5,r1,492
	ctx.r5.s64 = ctx.r1.s64 + 492;
	// addi r4,r1,484
	ctx.r4.s64 = ctx.r1.s64 + 484;
	// beq cr6,0x880b1c48
	if (ctx.cr6.eq) goto loc_880B1C48;
	// lwz r21,460(r1)
	ctx.current_instruction = 0x880B1864;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r20,452(r1)
	ctx.current_instruction = 0x880B186C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880B1874;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// stw r11,136(r1)
	ctx.current_instruction = 0x880B187C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,128(r1)
	ctx.current_instruction = 0x880B1880;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,140(r1)
	ctx.current_instruction = 0x880B1884;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,132(r1)
	ctx.current_instruction = 0x880B1888;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x880B188C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x8810a970
	ctx.lr = 0x880B1894;
	sub_8810A970(ctx, base);
loc_880B1894:
	// lwz r8,492(r1)
	ctx.current_instruction = 0x880B1894;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r7,484(r1)
	ctx.current_instruction = 0x880B189C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B18A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r25,468(r1)
	ctx.current_instruction = 0x880B18B0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B18C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// bne cr6,0x880b18e8
	if (!ctx.cr6.eq) goto loc_880B18E8;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B18CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B18D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B18E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B18E4:
	// b 0x880b1900
	goto loc_880B1900;
loc_880B18E8:
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B18E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B18F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B1900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1900:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,508
	ctx.r5.s64 = ctx.r1.s64 + 508;
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B1918;
	sub_8810A970(ctx, base);
loc_880B1918:
	// lwz r8,508(r1)
	ctx.current_instruction = 0x880B1918;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B191C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r7,500(r1)
	ctx.current_instruction = 0x880B1924;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B192C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne cr6,0x880b1964
	if (!ctx.cr6.eq) goto loc_880B1964;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B193C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B1944;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x880B1960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1960:
	// b 0x880b198c
	goto loc_880B198C;
loc_880B1964:
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B1968;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B1970;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x880B198C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B198C:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B198C;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B19B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B19B8:
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// lwz r26,444(r1)
	ctx.current_instruction = 0x880B19C0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B19C8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B19CC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B19D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r21,116(r1)
	ctx.current_instruction = 0x880B19E0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r20,108(r1)
	ctx.current_instruction = 0x880B19E8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B1A00;
	sub_88085938(ctx, base);
loc_880B1A00:
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880B1A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r10,492(r1)
	ctx.current_instruction = 0x880B1A04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r11,160(r1)
	ctx.current_instruction = 0x880B1A18;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,176(r1)
	ctx.current_instruction = 0x880B1A20;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B1A2C;
	sub_88095050(ctx, base);
loc_880B1A2C:
	// lwz r9,500(r1)
	ctx.current_instruction = 0x880B1A2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r3,508(r1)
	ctx.current_instruction = 0x880B1A30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r9,160(r1)
	ctx.current_instruction = 0x880B1A44;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r3,176(r1)
	ctx.current_instruction = 0x880B1A4C;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B1A58;
	sub_88095050(ctx, base);
loc_880B1A58:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B1A58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// lwz r25,144(r1)
	ctx.current_instruction = 0x880B1A5C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r24,148(r1)
	ctx.current_instruction = 0x880B1A64;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r23,152(r1)
	ctx.current_instruction = 0x880B1A6C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r22,156(r1)
	ctx.current_instruction = 0x880B1A70;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// beq cr6,0x880b1b4c
	if (ctx.cr6.eq) goto loc_880B1B4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1A7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1A9C;
	sub_8810B7F8(ctx, base);
loc_880B1A9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1AA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r4,420(r1)
	ctx.current_instruction = 0x880B1AAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1AC0;
	sub_8810B7F8(ctx, base);
loc_880B1AC0:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1AC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1AEC:
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r21,116(r1)
	ctx.current_instruction = 0x880B1AF4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B1AFC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B1B00;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B1B08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r20,108(r1)
	ctx.current_instruction = 0x880B1B14;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B1B30;
	sub_88085938(ctx, base);
loc_880B1B30:
	// lwz r10,128(r1)
	ctx.current_instruction = 0x880B1B30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880B1B34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,136(r1)
	ctx.current_instruction = 0x880B1B38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r6,140(r1)
	ctx.current_instruction = 0x880B1B3C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x880b1b54
	goto loc_880B1B54;
loc_880B1B4C:
	// lwz r28,136(r1)
	ctx.current_instruction = 0x880B1B4C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r27,140(r1)
	ctx.current_instruction = 0x880B1B50;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_880B1B54:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B1B54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b1c2c
	if (ctx.cr6.eq) goto loc_880B1C2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1B68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1B88;
	sub_8810B7F8(ctx, base);
loc_880B1B88:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1B90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r4,428(r1)
	ctx.current_instruction = 0x880B1B98;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1BAC;
	sub_8810B7F8(ctx, base);
loc_880B1BAC:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1BD8:
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r21,116(r1)
	ctx.current_instruction = 0x880B1BE0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	ctx.current_instruction = 0x880B1BE8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880B1BEC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880B1BF4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r20,108(r1)
	ctx.current_instruction = 0x880B1C00;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x880B1C1C;
	sub_88085938(ctx, base);
loc_880B1C1C:
	// lwz r10,128(r1)
	ctx.current_instruction = 0x880B1C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.current_instruction = 0x880B1C20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_880B1C2C:
	// lwz r11,108(r26)
	ctx.current_instruction = 0x880B1C2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r10,524(r1)
	ctx.current_instruction = 0x880B1C30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,0(r10)
	ctx.current_instruction = 0x880B1C3C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_880B1C48:
	// lwz r25,460(r1)
	ctx.current_instruction = 0x880B1C48;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r24,452(r1)
	ctx.current_instruction = 0x880B1C4C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B1C5C;
	sub_8810A970(ctx, base);
loc_880B1C5C:
	// lwz r8,492(r1)
	ctx.current_instruction = 0x880B1C5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r7,484(r1)
	ctx.current_instruction = 0x880B1C60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B1C68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// lwz r23,468(r1)
	ctx.current_instruction = 0x880B1C74;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B1C7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// bne cr6,0x880b1cb0
	if (!ctx.cr6.eq) goto loc_880B1CB0;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B1C94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B1C9C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B1CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1CAC:
	// b 0x880b1cc8
	goto loc_880B1CC8;
loc_880B1CB0:
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B1CB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B1CB8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880B1CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1CC8:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,508
	ctx.r5.s64 = ctx.r1.s64 + 508;
	// addi r4,r1,500
	ctx.r4.s64 = ctx.r1.s64 + 500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x880B1CE0;
	sub_8810A970(ctx, base);
loc_880B1CE0:
	// lwz r8,508(r1)
	ctx.current_instruction = 0x880B1CE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x880B1CE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r7,500(r1)
	ctx.current_instruction = 0x880B1CEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x880B1CF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x880b1d2c
	if (!ctx.cr6.eq) goto loc_880B1D2C;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x880B1D10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B1D18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x880B1D28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1D28:
	// b 0x880b1d44
	goto loc_880B1D44;
loc_880B1D2C:
	// stw r28,84(r1)
	ctx.current_instruction = 0x880B1D2C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x880B1D34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x880B1D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1D44:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1D44;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1D70:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880B1D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1D8C:
	// lwz r10,484(r1)
	ctx.current_instruction = 0x880B1D8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r9,492(r1)
	ctx.current_instruction = 0x880B1D90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// stw r10,160(r1)
	ctx.current_instruction = 0x880B1DA4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r9,176(r1)
	ctx.current_instruction = 0x880B1DAC;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B1DBC;
	sub_88095050(ctx, base);
loc_880B1DBC:
	// lwz r4,500(r1)
	ctx.current_instruction = 0x880B1DBC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r3,508(r1)
	ctx.current_instruction = 0x880B1DC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r4,160(r1)
	ctx.current_instruction = 0x880B1DD4;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r3,176(r1)
	ctx.current_instruction = 0x880B1DDC;
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88095050
	ctx.lr = 0x880B1DE8;
	sub_88095050(ctx, base);
loc_880B1DE8:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B1DE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// lwz r27,144(r1)
	ctx.current_instruction = 0x880B1DEC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r26,148(r1)
	ctx.current_instruction = 0x880B1DF4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,152(r1)
	ctx.current_instruction = 0x880B1DFC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r24,156(r1)
	ctx.current_instruction = 0x880B1E00;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// beq cr6,0x880b1e98
	if (ctx.cr6.eq) goto loc_880B1E98;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1E0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1E2C;
	sub_8810B7F8(ctx, base);
loc_880B1E2C:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1E34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,420(r1)
	ctx.current_instruction = 0x880B1E3C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1E50;
	sub_8810B7F8(ctx, base);
loc_880B1E50:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1E50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1E7C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x880B1E94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1E94:
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_880B1E98:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880B1E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880b1f48
	if (ctx.cr6.eq) goto loc_880B1F48;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1EAC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1ECC;
	sub_8810B7F8(ctx, base);
loc_880B1ECC:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x880B1ED4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r4,428(r1)
	ctx.current_instruction = 0x880B1EDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x880B1EF0;
	sub_8810B7F8(ctx, base);
loc_880B1EF0:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x880B1EF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2844);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x880B1F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1F1C:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bctrl 
	ctx.lr = 0x880B1F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880B1F34:
	// lwz r10,524(r1)
	ctx.current_instruction = 0x880B1F34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// add r9,r3,r28
	ctx.r9.u64 = ctx.r3.u64 + ctx.r28.u64;
	// stw r9,0(r10)
	ctx.current_instruction = 0x880B1F3C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_880B1F48:
	// lwz r11,524(r1)
	ctx.current_instruction = 0x880B1F48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// stw r28,0(r11)
	ctx.current_instruction = 0x880B1F4C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BF8D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BF8D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BF8D0) {
			switch (rex_dispatch_address) {
				case 0x880BF8D8:
				case 0x880BF920:
				case 0x880BF974:
				case 0x880BF9C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BF8D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BF8D8: goto loc_880BF8D8;
		case 0x880BF920: goto loc_880BF920;
		case 0x880BF974: goto loc_880BF974;
		case 0x880BF9C8: goto loc_880BF9C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x880BF8D8;
	__savegprlr_22(ctx, base);
loc_880BF8D8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x880BF8D8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,20216(r3)
	ctx.current_instruction = 0x880BF8DC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 20216);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x880bf930
	if (!ctx.cr6.gt) goto loc_880BF930;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_880BF908:
	// lwz r11,1380(r27)
	ctx.current_instruction = 0x880BF908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BF920;
	sub_880547A0(ctx, base);
loc_880BF920:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x880bf908
	if (ctx.cr6.lt) goto loc_880BF908;
loc_880BF930:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mullw r23,r30,r29
	ctx.r23.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// addze. r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r26,r23,r25
	ctx.r26.u64 = ctx.r23.u64 + ctx.r25.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ble 0x880bf984
	if (!ctx.cr0.gt) goto loc_880BF984;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addze r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r25.s64 = temp.s64;
loc_880BF954:
	// lwz r10,1384(r27)
	ctx.current_instruction = 0x880BF954;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1384);
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BF974;
	sub_880547A0(ctx, base);
loc_880BF974:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x880bf954
	if (ctx.cr6.lt) goto loc_880BF954;
loc_880BF984:
	// srawi r11,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
	// ble cr6,0x880bf9d8
	if (!ctx.cr6.gt) goto loc_880BF9D8;
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
loc_880BF9A8:
	// lwz r10,1384(r27)
	ctx.current_instruction = 0x880BF9A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1384);
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r4,r10,r22
	ctx.r4.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x880547a0
	ctx.lr = 0x880BF9C8;
	sub_880547A0(ctx, base);
loc_880BF9C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x880bf9a8
	if (ctx.cr6.lt) goto loc_880BF9A8;
loc_880BF9D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C1498) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C1498;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C1498) {
			switch (rex_dispatch_address) {
				case 0x880C14A0:
				case 0x880C154C:
				case 0x880C16C8:
				case 0x880C1758:
				case 0x880C17A0:
				case 0x880C1810:
				case 0x880C183C:
				case 0x880C1878:
				case 0x880C1890:
				case 0x880C18DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C1498;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C14A0: goto loc_880C14A0;
		case 0x880C154C: goto loc_880C154C;
		case 0x880C16C8: goto loc_880C16C8;
		case 0x880C1758: goto loc_880C1758;
		case 0x880C17A0: goto loc_880C17A0;
		case 0x880C1810: goto loc_880C1810;
		case 0x880C183C: goto loc_880C183C;
		case 0x880C1878: goto loc_880C1878;
		case 0x880C1890: goto loc_880C1890;
		case 0x880C18DC: goto loc_880C18DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880C14A0;
	__savegprlr_14(ctx, base);
loc_880C14A0:
	// stwu r1,-400(r1)
	ctx.current_instruction = 0x880C14A0;
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,492(r1)
	ctx.current_instruction = 0x880C14A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,444(r1)
	ctx.current_instruction = 0x880C14AC;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,476(r1)
	ctx.current_instruction = 0x880C14B4;
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// lwz r10,7764(r3)
	ctx.current_instruction = 0x880C14BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lwz r6,31108(r3)
	ctx.current_instruction = 0x880C14C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 31108);
	// stw r4,428(r1)
	ctx.current_instruction = 0x880C14C4;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// stw r5,436(r1)
	ctx.current_instruction = 0x880C14C8;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// stw r7,452(r1)
	ctx.current_instruction = 0x880C14CC;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r7.u32);
	// stw r8,460(r1)
	ctx.current_instruction = 0x880C14D0;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r8.u32);
	// stw r9,468(r1)
	ctx.current_instruction = 0x880C14D4;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,212(r1)
	ctx.current_instruction = 0x880C14DC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880c1508
	if (ctx.cr6.eq) goto loc_880C1508;
	// lwz r11,20268(r3)
	ctx.current_instruction = 0x880C14F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1508
	if (!ctx.cr6.eq) goto loc_880C1508;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r1)
	ctx.current_instruction = 0x880C1504;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_880C1508:
	// lwz r11,28132(r29)
	ctx.current_instruction = 0x880C1508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880c153c
	if (!ctx.cr6.eq) goto loc_880C153C;
	// lwz r11,1380(r29)
	ctx.current_instruction = 0x880C1514;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1380);
	// lwz r6,1384(r29)
	ctx.current_instruction = 0x880C1518;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1384);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,452(r1)
	ctx.current_instruction = 0x880C1530;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// stw r4,460(r1)
	ctx.current_instruction = 0x880C1534;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// stw r3,468(r1)
	ctx.current_instruction = 0x880C1538;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
loc_880C153C:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r4,r29,17552
	ctx.r4.s64 = ctx.r29.s64 + 17552;
	// lwz r3,25768(r11)
	ctx.current_instruction = 0x880C1544;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 25768);
	// bl 0x88110d00
	ctx.lr = 0x880C154C;
	sub_88110D00(ctx, base);
loc_880C154C:
	// cmplw cr6,r15,r28
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x880c1834
	if (!ctx.cr6.lt) goto loc_880C1834;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r16,588(r1)
	ctx.current_instruction = 0x880C1558;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// subfic r10,r15,1
	ctx.xer.ca = ctx.r15.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r15.u64;
	// lwz r17,580(r1)
	ctx.current_instruction = 0x880C1560;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r18,572(r1)
	ctx.current_instruction = 0x880C1564;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r23,564(r1)
	ctx.current_instruction = 0x880C1568;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r19,556(r1)
	ctx.current_instruction = 0x880C156C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r24,548(r1)
	ctx.current_instruction = 0x880C1570;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r20,540(r1)
	ctx.current_instruction = 0x880C1574;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r25,532(r1)
	ctx.current_instruction = 0x880C1578;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r21,524(r1)
	ctx.current_instruction = 0x880C157C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r26,516(r1)
	ctx.current_instruction = 0x880C1580;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r22,508(r1)
	ctx.current_instruction = 0x880C1584;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r27,500(r1)
	ctx.current_instruction = 0x880C1588;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// stw r11,208(r1)
	ctx.current_instruction = 0x880C158C;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,236(r1)
	ctx.current_instruction = 0x880C1590;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// b 0x880c159c
	goto loc_880C159C;
loc_880C1598:
	// li r31,1
	ctx.r31.s64 = 1;
loc_880C159C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// lwz r10,2272(r29)
	ctx.current_instruction = 0x880C15A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 2272);
	// lwz r28,452(r1)
	ctx.current_instruction = 0x880C15A4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// subf r9,r15,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r15.u64;
	// lwz r30,460(r1)
	ctx.current_instruction = 0x880C15AC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,220(r1)
	ctx.current_instruction = 0x880C15BC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// beq cr6,0x880c1604
	if (ctx.cr6.eq) goto loc_880C1604;
	// lwz r11,724(r29)
	ctx.current_instruction = 0x880C15C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 724);
	// lwz r10,208(r1)
	ctx.current_instruction = 0x880C15C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880c15f0
	if (!ctx.cr6.lt) goto loc_880C15F0;
	// lwz r11,2264(r29)
	ctx.current_instruction = 0x880C15D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2264);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880C15E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880c15f0
	if (ctx.cr6.eq) goto loc_880C15F0;
	// stw r31,220(r1)
	ctx.current_instruction = 0x880C15EC;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
loc_880C15F0:
	// lwz r11,2264(r29)
	ctx.current_instruction = 0x880C15F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2264);
	// lwzx r10,r11,r10
	ctx.current_instruction = 0x880C15F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c1604
	if (ctx.cr6.eq) goto loc_880C1604;
	// stw r31,212(r1)
	ctx.current_instruction = 0x880C1600;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
loc_880C1604:
	// lwz r11,720(r29)
	ctx.current_instruction = 0x880C1604;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 720);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880c1718
	if (!ctx.cr6.gt) goto loc_880C1718;
	// lwz r11,460(r1)
	ctx.current_instruction = 0x880C1614;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r10,468(r1)
	ctx.current_instruction = 0x880C1618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,224(r1)
	ctx.current_instruction = 0x880C1620;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
loc_880C1624:
	// lwz r11,1564(r29)
	ctx.current_instruction = 0x880C1624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// bne cr6,0x880c1638
	if (!ctx.cr6.eq) goto loc_880C1638;
	// lwz r11,1568(r29)
	ctx.current_instruction = 0x880C1634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1568);
loc_880C1638:
	// lwz r6,224(r1)
	ctx.current_instruction = 0x880C1638;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r6,228(r1)
	ctx.current_instruction = 0x880C1640;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,476(r1)
	ctx.current_instruction = 0x880C1648;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r7,232(r1)
	ctx.current_instruction = 0x880C1650;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r3,596(r1)
	ctx.current_instruction = 0x880C1658;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r11,196(r1)
	ctx.current_instruction = 0x880C1660;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r3,204(r1)
	ctx.current_instruction = 0x880C1664;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,484(r1)
	ctx.current_instruction = 0x880C166C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r15,240(r1)
	ctx.current_instruction = 0x880C1670;
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r15.u64);
	// lwz r4,428(r1)
	ctx.current_instruction = 0x880C1674;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// stw r16,188(r1)
	ctx.current_instruction = 0x880C1678;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// stw r17,180(r1)
	ctx.current_instruction = 0x880C167C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r18,172(r1)
	ctx.current_instruction = 0x880C1680;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// stw r23,164(r1)
	ctx.current_instruction = 0x880C1684;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r19,156(r1)
	ctx.current_instruction = 0x880C1688;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stw r24,148(r1)
	ctx.current_instruction = 0x880C168C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r20,140(r1)
	ctx.current_instruction = 0x880C1690;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r25,132(r1)
	ctx.current_instruction = 0x880C1694;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r21,124(r1)
	ctx.current_instruction = 0x880C1698;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x880C169C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r22,108(r1)
	ctx.current_instruction = 0x880C16A0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lwz r15,228(r1)
	ctx.current_instruction = 0x880C16A4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r10,228(r1)
	ctx.current_instruction = 0x880C16A8;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lwz r11,228(r1)
	ctx.current_instruction = 0x880C16AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// add r10,r15,r30
	ctx.r10.u64 = ctx.r15.u64 + ctx.r30.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C16B4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,232(r1)
	ctx.current_instruction = 0x880C16B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r27,100(r1)
	ctx.current_instruction = 0x880C16BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C16C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880c0f10
	ctx.lr = 0x880C16C8;
	sub_880C0F10(ctx, base);
loc_880C16C8:
	// lwz r11,720(r29)
	ctx.current_instruction = 0x880C16C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 720);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ld r15,240(r1)
	ctx.current_instruction = 0x880C16D0;
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r27,r27,1536
	ctx.r27.s64 = ctx.r27.s64 + 1536;
	// addi r26,r26,768
	ctx.r26.s64 = ctx.r26.s64 + 768;
	// addi r25,r25,768
	ctx.r25.s64 = ctx.r25.s64 + 768;
	// addi r24,r24,768
	ctx.r24.s64 = ctx.r24.s64 + 768;
	// addi r23,r23,768
	ctx.r23.s64 = ctx.r23.s64 + 768;
	// addi r22,r22,12
	ctx.r22.s64 = ctx.r22.s64 + 12;
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
	// addi r14,r14,276
	ctx.r14.s64 = ctx.r14.s64 + 276;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880c1624
	if (ctx.cr6.lt) goto loc_880C1624;
loc_880C1718:
	// lwz r11,31108(r29)
	ctx.current_instruction = 0x880C1718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c1758
	if (ctx.cr6.eq) goto loc_880C1758;
	// lwz r11,20268(r29)
	ctx.current_instruction = 0x880C1724;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c1758
	if (!ctx.cr6.eq) goto loc_880C1758;
	// lwz r11,31136(r29)
	ctx.current_instruction = 0x880C1730;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31136);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,216(r1)
	ctx.current_instruction = 0x880C1738;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r10,r11,r15
	ctx.current_instruction = 0x880C1740;
	REX_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u8);
	// beq cr6,0x880c18a4
	if (ctx.cr6.eq) goto loc_880C18A4;
	// lwz r11,31128(r29)
	ctx.current_instruction = 0x880C1748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// lwz r10,208(r1)
	ctx.current_instruction = 0x880C174C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwzx r3,r11,r10
	ctx.current_instruction = 0x880C1750;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C1758;
	sub_881ECE40(ctx, base);
loc_880C1758:
	// lwz r28,436(r1)
	ctx.current_instruction = 0x880C1758;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880C175C:
	// lwz r11,2340(r29)
	ctx.current_instruction = 0x880C175C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c17a0
	if (ctx.cr6.eq) goto loc_880C17A0;
	// subf r11,r15,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r15.u64;
	// lwz r31,428(r1)
	ctx.current_instruction = 0x880C1770;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,212(r1)
	ctx.current_instruction = 0x880C1778;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r7,468(r1)
	ctx.current_instruction = 0x880C1780;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r6,460(r1)
	ctx.current_instruction = 0x880C1788;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r5,452(r1)
	ctx.current_instruction = 0x880C1790;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x880C1798;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8810c9e8
	ctx.lr = 0x880C17A0;
	sub_8810C9E8(ctx, base);
loc_880C17A0:
	// lwz r11,1408(r29)
	ctx.current_instruction = 0x880C17A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1408);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,460(r1)
	ctx.current_instruction = 0x880C17A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r5,452(r1)
	ctx.current_instruction = 0x880C17AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,468(r1)
	ctx.current_instruction = 0x880C17B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,1404(r29)
	ctx.current_instruction = 0x880C17B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 1404);
	// lwz r3,220(r1)
	ctx.current_instruction = 0x880C17BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,212(r1)
	ctx.current_instruction = 0x880C17C8;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r6,460(r1)
	ctx.current_instruction = 0x880C17D0;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// stw r5,452(r1)
	ctx.current_instruction = 0x880C17D4;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// stw r7,468(r1)
	ctx.current_instruction = 0x880C17D8;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// beq cr6,0x880c1810
	if (ctx.cr6.eq) goto loc_880C1810;
	// lwz r11,2340(r29)
	ctx.current_instruction = 0x880C17E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2340);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880c1810
	if (ctx.cr6.eq) goto loc_880C1810;
	// lwz r11,428(r1)
	ctx.current_instruction = 0x880C17F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C1808;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8810c9e8
	ctx.lr = 0x880C1810;
	sub_8810C9E8(ctx, base);
loc_880C1810:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x880C1810;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r10,444(r1)
	ctx.current_instruction = 0x880C1818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r15,r10
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r10.u32, ctx.xer);
	// stw r9,208(r1)
	ctx.current_instruction = 0x880C1824;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// blt cr6,0x880c1598
	if (ctx.cr6.lt) goto loc_880C1598;
	// lwz r15,436(r1)
	ctx.current_instruction = 0x880C1830;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880C1834:
	// addi r3,r29,17552
	ctx.r3.s64 = ctx.r29.s64 + 17552;
	// bl 0x88111038
	ctx.lr = 0x880C183C;
	sub_88111038(ctx, base);
loc_880C183C:
	// lwz r11,31108(r29)
	ctx.current_instruction = 0x880C183C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c189c
	if (ctx.cr6.eq) goto loc_880C189C;
	// lwz r11,20268(r29)
	ctx.current_instruction = 0x880C1848;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c189c
	if (!ctx.cr6.eq) goto loc_880C189C;
	// lwz r11,216(r1)
	ctx.current_instruction = 0x880C1854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c189c
	if (!ctx.cr6.eq) goto loc_880C189C;
	// lwz r11,31128(r29)
	ctx.current_instruction = 0x880C1860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// rlwinm r30,r15,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.current_instruction = 0x880C1870;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x881ecd98
	ctx.lr = 0x880C1878;
	sub_881ECD98(ctx, base);
loc_880C1878:
	// cmpw cr6,r15,r28
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x880c189c
	if (!ctx.cr6.lt) goto loc_880C189C;
	// subf r31,r15,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r15.u64;
loc_880C1884:
	// lwz r11,31128(r29)
	ctx.current_instruction = 0x880C1884;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// lwzx r3,r30,r11
	ctx.current_instruction = 0x880C1888;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C1890;
	sub_881ECE40(ctx, base);
loc_880C1890:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880c1884
	if (!ctx.cr0.eq) goto loc_880C1884;
loc_880C189C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880C18A4:
	// lwz r11,31136(r29)
	ctx.current_instruction = 0x880C18A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31136);
	// lwz r28,436(r1)
	ctx.current_instruction = 0x880C18A8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,-1(r11)
	ctx.current_instruction = 0x880C18B0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880c175c
	if (ctx.cr6.eq) goto loc_880C175C;
	// cmpw cr6,r28,r15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x880c18e8
	if (ctx.cr6.gt) goto loc_880C18E8;
	// lwz r11,236(r1)
	ctx.current_instruction = 0x880C18C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r15
	ctx.r31.u64 = ctx.r11.u64 + ctx.r15.u64;
loc_880C18D0:
	// lwz r11,31128(r29)
	ctx.current_instruction = 0x880C18D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 31128);
	// lwzx r3,r30,r11
	ctx.current_instruction = 0x880C18D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x881ece40
	ctx.lr = 0x880C18DC;
	sub_881ECE40(ctx, base);
loc_880C18DC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x880c18d0
	if (!ctx.cr0.eq) goto loc_880C18D0;
loc_880C18E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,216(r1)
	ctx.current_instruction = 0x880C18EC;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// b 0x880c175c
	goto loc_880C175C;
}

DEFINE_REX_FUNC(sub_880CA778) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CA778;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CA778) {
			switch (rex_dispatch_address) {
				case 0x880CA780:
				case 0x880CAB58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CA778;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CA780: goto loc_880CA780;
		case 0x880CAB58: goto loc_880CAB58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x880CA780;
	__savegprlr_18(ctx, base);
loc_880CA780:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880CA780;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	ctx.current_instruction = 0x880CA784;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r5,22870
	ctx.r5.s64 = 1498808320;
	// lis r28,12849
	ctx.r28.s64 = 842072064;
	// ori r9,r11,21846
	ctx.r9.u64 = ctx.r11.u64 | 21846;
	// lis r8,22068
	ctx.r8.s64 = 1446248448;
	// lis r30,12593
	ctx.r30.s64 = 825294848;
	// lwz r11,16(r26)
	ctx.current_instruction = 0x880CA7A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lis r25,14677
	ctx.r25.s64 = 961871872;
	// lis r23,21849
	ctx.r23.s64 = 1431896064;
	// lis r22,20532
	ctx.r22.s64 = 1345585152;
	// lis r10,22066
	ctx.r10.s64 = 1446117376;
	// lis r29,12889
	ctx.r29.s64 = 844693504;
	// lis r20,22101
	ctx.r20.s64 = 1448411136;
	// lis r19,12338
	ctx.r19.s64 = 808583168;
	// lis r18,12593
	ctx.r18.s64 = 825294848;
	// ori r4,r5,22869
	ctx.r4.u64 = ctx.r5.u64 | 22869;
	// ori r27,r28,22094
	ctx.r27.u64 = ctx.r28.u64 | 22094;
	// ori r6,r8,12592
	ctx.r6.u64 = ctx.r8.u64 | 12592;
	// ori r24,r30,13392
	ctx.r24.u64 = ctx.r30.u64 | 13392;
	// ori r28,r25,22105
	ctx.r28.u64 = ctx.r25.u64 | 22105;
	// ori r5,r23,22105
	ctx.r5.u64 = ctx.r23.u64 | 22105;
	// ori r21,r22,12850
	ctx.r21.u64 = ctx.r22.u64 | 12850;
	// ori r7,r10,12598
	ctx.r7.u64 = ctx.r10.u64 | 12598;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r8,r29,21849
	ctx.r8.u64 = ctx.r29.u64 | 21849;
	// ori r22,r20,22857
	ctx.r22.u64 = ctx.r20.u64 | 22857;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r23,r19,13385
	ctx.r23.u64 = ctx.r19.u64 | 13385;
	// ori r30,r18,22094
	ctx.r30.u64 = ctx.r18.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x880ca870
	if (ctx.cr6.gt) goto loc_880CA870;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x880ca844
	if (ctx.cr6.gt) goto loc_880CA844;
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x880ca834
	if (ctx.cr6.gt) goto loc_880CA834;
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA834:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x880ca8ec
	if (!ctx.cr6.eq) goto loc_880CA8EC;
loc_880CA83C:
	// stw r25,12(r3)
	ctx.current_instruction = 0x880CA83C;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA844:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880ca864
	if (ctx.cr6.gt) goto loc_880CA864;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// subf. r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880ca83c
	if (ctx.cr0.eq) goto loc_880CA83C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA864:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA870:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x880ca8c0
	if (ctx.cr6.gt) goto loc_880CA8C0;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880ca8ac
	if (ctx.cr6.gt) goto loc_880CA8AC;
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA8AC:
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA8C0:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x880ca8e0
	if (ctx.cr6.gt) goto loc_880CA8E0;
	// beq cr6,0x880ca83c
	if (ctx.cr6.eq) goto loc_880CA83C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880ca8e8
	if (ctx.cr6.eq) goto loc_880CA8E8;
	// b 0x880ca8ec
	goto loc_880CA8EC;
loc_880CA8E0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x880ca8ec
	if (!ctx.cr6.eq) goto loc_880CA8EC;
loc_880CA8E8:
	// stw r31,12(r3)
	ctx.current_instruction = 0x880CA8E8;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
loc_880CA8EC:
	// lwz r29,4(r3)
	ctx.current_instruction = 0x880CA8EC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r29)
	ctx.current_instruction = 0x880CA8F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x880ca948
	if (ctx.cr6.gt) goto loc_880CA948;
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x880ca92c
	if (ctx.cr6.gt) goto loc_880CA92C;
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x880ca970
	if (!ctx.cr6.eq) goto loc_880CA970;
loc_880CA924:
	// stw r25,16(r3)
	ctx.current_instruction = 0x880CA924;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// b 0x880ca970
	goto loc_880CA970;
loc_880CA92C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// subf. r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880ca924
	if (ctx.cr0.eq) goto loc_880CA924;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// b 0x880ca970
	goto loc_880CA970;
loc_880CA948:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x880ca990
	if (ctx.cr6.gt) goto loc_880CA990;
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x880ca970
	if (!ctx.cr6.eq) goto loc_880CA970;
loc_880CA96C:
	// stw r31,16(r3)
	ctx.current_instruction = 0x880CA96C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
loc_880CA970:
	// stw r26,8(r3)
	ctx.current_instruction = 0x880CA970;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// lwz r11,16(r26)
	ctx.current_instruction = 0x880CA974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880ca9ac
	if (ctx.cr6.eq) goto loc_880CA9AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880ca9ac
	if (ctx.cr6.eq) goto loc_880CA9AC;
	// stw r25,14468(r3)
	ctx.current_instruction = 0x880CA988;
	REX_STORE_U32(ctx.r3.u32 + 14468, ctx.r25.u32);
	// b 0x880ca9c4
	goto loc_880CA9C4;
loc_880CA990:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x880ca924
	if (ctx.cr6.eq) goto loc_880CA924;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x880ca96c
	if (ctx.cr6.eq) goto loc_880CA96C;
	// b 0x880ca970
	goto loc_880CA970;
loc_880CA9AC:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x880CA9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x880ca9c0
	if (ctx.cr6.gt) goto loc_880CA9C0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_880CA9C0:
	// stw r11,14468(r3)
	ctx.current_instruction = 0x880CA9C0;
	REX_STORE_U32(ctx.r3.u32 + 14468, ctx.r11.u32);
loc_880CA9C4:
	// lwz r11,4(r26)
	ctx.current_instruction = 0x880CA9C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// stw r11,14512(r3)
	ctx.current_instruction = 0x880CA9D0;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// lwz r9,8(r26)
	ctx.current_instruction = 0x880CA9D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,14516(r3)
	ctx.current_instruction = 0x880CA9E4;
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r6.u32);
	// lwz r11,16(r26)
	ctx.current_instruction = 0x880CA9E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880caa54
	if (ctx.cr6.gt) goto loc_880CAA54;
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x880caa40
	if (ctx.cr6.gt) goto loc_880CAA40;
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x880caa24
	if (!ctx.cr6.eq) goto loc_880CAA24;
loc_880CAA14:
	// lwz r11,14512(r3)
	ctx.current_instruction = 0x880CAA14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
loc_880CAA1C:
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,14520(r3)
	ctx.current_instruction = 0x880CAA20;
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r8.u32);
loc_880CAA24:
	// lwz r11,16(r29)
	ctx.current_instruction = 0x880CAA24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880caa78
	if (ctx.cr6.eq) goto loc_880CAA78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x880caa78
	if (ctx.cr6.eq) goto loc_880CAA78;
	// stw r25,14472(r3)
	ctx.current_instruction = 0x880CAA38;
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r25.u32);
	// b 0x880caa90
	goto loc_880CAA90;
loc_880CAA40:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x880caa24
	if (!ctx.cr6.eq) goto loc_880CAA24;
	// lwz r11,14512(r3)
	ctx.current_instruction = 0x880CAA48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// stw r11,14520(r3)
	ctx.current_instruction = 0x880CAA4C;
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r11.u32);
	// b 0x880caa24
	goto loc_880CAA24;
loc_880CAA54:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x880caa14
	if (ctx.cr6.eq) goto loc_880CAA14;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880caa6c
	if (ctx.cr6.eq) goto loc_880CAA6C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x880caa24
	if (!ctx.cr6.eq) goto loc_880CAA24;
loc_880CAA6C:
	// lwz r11,14512(r3)
	ctx.current_instruction = 0x880CAA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14512);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// b 0x880caa1c
	goto loc_880CAA1C;
loc_880CAA78:
	// lwz r11,8(r29)
	ctx.current_instruction = 0x880CAA78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x880caa8c
	if (ctx.cr6.gt) goto loc_880CAA8C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_880CAA8C:
	// stw r11,14472(r3)
	ctx.current_instruction = 0x880CAA8C;
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_880CAA90:
	// lwz r11,4(r29)
	ctx.current_instruction = 0x880CAA90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,14476(r3)
	ctx.current_instruction = 0x880CAA94;
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
	// lwz r9,8(r29)
	ctx.current_instruction = 0x880CAA98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r6,14480(r3)
	ctx.current_instruction = 0x880CAAA8;
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r6.u32);
	// lwz r11,16(r29)
	ctx.current_instruction = 0x880CAAAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x880caae0
	if (ctx.cr6.gt) goto loc_880CAAE0;
	// beq cr6,0x880caad4
	if (ctx.cr6.eq) goto loc_880CAAD4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x880caaf8
	if (ctx.cr6.eq) goto loc_880CAAF8;
	// subf. r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x880caaf8
	if (ctx.cr0.eq) goto loc_880CAAF8;
	// cmplwi cr6,r11,8702
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8702, ctx.xer);
	// b 0x880caaf4
	goto loc_880CAAF4;
loc_880CAAD4:
	// lwz r11,14476(r3)
	ctx.current_instruction = 0x880CAAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// stw r11,14484(r3)
	ctx.current_instruction = 0x880CAAD8;
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r11.u32);
	// b 0x880cab08
	goto loc_880CAB08;
loc_880CAAE0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880caaf8
	if (ctx.cr6.eq) goto loc_880CAAF8;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x880caaf8
	if (ctx.cr6.eq) goto loc_880CAAF8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
loc_880CAAF4:
	// bne cr6,0x880cab08
	if (!ctx.cr6.eq) goto loc_880CAB08;
loc_880CAAF8:
	// lwz r11,14476(r3)
	ctx.current_instruction = 0x880CAAF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14484(r3)
	ctx.current_instruction = 0x880CAB04;
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r9.u32);
loc_880CAB08:
	// lwz r11,14632(r3)
	ctx.current_instruction = 0x880CAB08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x880cab1c
	if (!ctx.cr6.eq) goto loc_880CAB1C;
	// lwz r7,8(r29)
	ctx.current_instruction = 0x880CAB18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_880CAB1C:
	// lwz r11,14628(r3)
	ctx.current_instruction = 0x880CAB1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x880cab30
	if (!ctx.cr6.eq) goto loc_880CAB30;
	// lwz r6,4(r29)
	ctx.current_instruction = 0x880CAB2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_880CAB30:
	// lwz r11,14624(r3)
	ctx.current_instruction = 0x880CAB30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880cab40
	if (!ctx.cr6.eq) goto loc_880CAB40;
	// lwz r11,8(r26)
	ctx.current_instruction = 0x880CAB3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
loc_880CAB40:
	// lwz r4,14620(r3)
	ctx.current_instruction = 0x880CAB40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x880cab50
	if (!ctx.cr6.eq) goto loc_880CAB50;
	// lwz r4,4(r26)
	ctx.current_instruction = 0x880CAB4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
loc_880CAB50:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x880c9958
	ctx.lr = 0x880CAB58;
	sub_880C9958(ctx, base);
loc_880CAB58:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D15A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D15A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D15A0) {
			switch (rex_dispatch_address) {
				case 0x880D15CC:
				case 0x880D15D4:
				case 0x880D15DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D15A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D15CC: goto loc_880D15CC;
		case 0x880D15D4: goto loc_880D15D4;
		case 0x880D15DC: goto loc_880D15DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880D15A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880D15A8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880D15AC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d15dc
	if (ctx.cr6.eq) goto loc_880D15DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x88061460
	ctx.lr = 0x880D15CC;
	sub_88061460(ctx, base);
loc_880D15CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880d13a8
	ctx.lr = 0x880D15D4;
	sub_880D13A8(ctx, base);
loc_880D15D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88125e70
	ctx.lr = 0x880D15DC;
	sub_88125E70(ctx, base);
loc_880D15DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880D15E0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880D15E8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880D18C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D18C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D18C0) {
			switch (rex_dispatch_address) {
				case 0x880D18C8:
				case 0x880D19D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D18C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D18C8: goto loc_880D18C8;
		case 0x880D19D4: goto loc_880D19D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880D18C8;
	__savegprlr_28(ctx, base);
loc_880D18C8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880D18C8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d1b24
	if (ctx.cr6.eq) goto loc_880D1B24;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880d1b24
	if (ctx.cr6.eq) goto loc_880D1B24;
	// lhz r11,0(r3)
	ctx.current_instruction = 0x880D18E4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,352
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 352, ctx.xer);
	// beq cr6,0x880d1904
	if (ctx.cr6.eq) goto loc_880D1904;
	// cmplwi cr6,r11,353
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 353, ctx.xer);
	// beq cr6,0x880d1904
	if (ctx.cr6.eq) goto loc_880D1904;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// bne cr6,0x880d1908
	if (!ctx.cr6.eq) goto loc_880D1908;
loc_880D1904:
	// li r28,1
	ctx.r28.s64 = 1;
loc_880D1908:
	// cmplwi cr6,r11,354
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 354, ctx.xer);
	// beq cr6,0x880d191c
	if (ctx.cr6.eq) goto loc_880D191C;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne cr6,0x880d1920
	if (!ctx.cr6.eq) goto loc_880D1920;
loc_880D191C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_880D1920:
	// cmplwi cr6,r11,355
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 355, ctx.xer);
	// beq cr6,0x880d1934
	if (ctx.cr6.eq) goto loc_880D1934;
	// cmplwi cr6,r11,359
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 359, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// bne cr6,0x880d1938
	if (!ctx.cr6.eq) goto loc_880D1938;
loc_880D1934:
	// li r31,1
	ctx.r31.s64 = 1;
loc_880D1938:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880d195c
	if (!ctx.cr6.eq) goto loc_880D195C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x880d195c
	if (!ctx.cr6.eq) goto loc_880D195C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x880d1964
	if (!ctx.cr6.eq) goto loc_880D1964;
loc_880D1950:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880D195C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x880d1974
	if (ctx.cr6.eq) goto loc_880D1974;
loc_880D1964:
	// lwz r11,4(r8)
	ctx.current_instruction = 0x880D1964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r4)
	ctx.current_instruction = 0x880D1968;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
loc_880D1974:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880d19ac
	if (ctx.cr6.eq) goto loc_880D19AC;
	// lwz r11,4(r8)
	ctx.current_instruction = 0x880D197C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,48000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48000, ctx.xer);
	// bgt cr6,0x880d1950
	if (ctx.cr6.gt) goto loc_880D1950;
	// lhz r7,2(r8)
	ctx.current_instruction = 0x880D1988;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bgt cr6,0x880d1950
	if (ctx.cr6.gt) goto loc_880D1950;
	// lhz r11,14(r8)
	ctx.current_instruction = 0x880D1994;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x880d19b8
	if (ctx.cr6.eq) goto loc_880D19B8;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880D19AC:
	// lhz r7,2(r8)
	ctx.current_instruction = 0x880D19AC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bgt cr6,0x880d1950
	if (ctx.cr6.gt) goto loc_880D1950;
loc_880D19B8:
	// lwz r6,4(r8)
	ctx.current_instruction = 0x880D19B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x880d1950
	if (ctx.cr6.eq) goto loc_880D1950;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d1950
	if (ctx.cr6.eq) goto loc_880D1950;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x880d1828
	ctx.lr = 0x880D19D4;
	sub_880D1828(ctx, base);
loc_880D19D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d1b2c
	if (ctx.cr6.lt) goto loc_880D1B2C;
	// lhz r11,14(r8)
	ctx.current_instruction = 0x880D19DC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x880d1a00
	if (ctx.cr6.eq) goto loc_880D1A00;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x880d1a00
	if (ctx.cr6.eq) goto loc_880D1A00;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x880d1a00
	if (ctx.cr6.eq) goto loc_880D1A00;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
loc_880D1A00:
	// lwz r11,8(r8)
	ctx.current_instruction = 0x880D1A00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d1b24
	if (!ctx.cr6.eq) goto loc_880D1B24;
	// lhz r11,12(r8)
	ctx.current_instruction = 0x880D1A10;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d1b24
	if (ctx.cr6.eq) goto loc_880D1B24;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x880D1A1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,16(r8)
	ctx.current_instruction = 0x880D1A20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880d1a48
	if (ctx.cr6.eq) goto loc_880D1A48;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
	// lwz r11,4(r4)
	ctx.current_instruction = 0x880D1A34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x880d1a48
	if (ctx.cr6.eq) goto loc_880D1A48;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
loc_880D1A48:
	// lwz r11,4(r4)
	ctx.current_instruction = 0x880D1A48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880d1a5c
	if (ctx.cr6.eq) goto loc_880D1A5C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
loc_880D1A5C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x880d1a74
	if (ctx.cr6.eq) goto loc_880D1A74;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x880d1a74
	if (ctx.cr6.eq) goto loc_880D1A74;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
loc_880D1A74:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880d1a98
	if (ctx.cr6.eq) goto loc_880D1A98;
	// lhz r11,24(r5)
	ctx.current_instruction = 0x880D1A7C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x880d1950
	if (ctx.cr6.lt) goto loc_880D1950;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x880d1950
	if (ctx.cr6.gt) goto loc_880D1950;
	// lhz r29,0(r5)
	ctx.current_instruction = 0x880D1A94;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
loc_880D1A98:
	// lwz r11,0(r4)
	ctx.current_instruction = 0x880D1A98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x880d1ac8
	if (ctx.cr6.eq) goto loc_880D1AC8;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
	// rlwinm r9,r29,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
loc_880D1AC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880d1af0
	if (ctx.cr6.eq) goto loc_880D1AF0;
	// rlwinm r10,r29,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d1950
	if (!ctx.cr6.eq) goto loc_880D1950;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880d1950
	if (ctx.cr6.lt) goto loc_880D1950;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880d1950
	if (ctx.cr6.gt) goto loc_880D1950;
loc_880D1AF0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880d1b2c
	if (ctx.cr6.eq) goto loc_880D1B2C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x880d1950
	if (ctx.cr6.gt) goto loc_880D1950;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x880d1b2c
	if (!ctx.cr6.lt) goto loc_880D1B2C;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880D1B24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_880D1B2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D6AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D6AB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D6AB8) {
			switch (rex_dispatch_address) {
				case 0x880D6AC0:
				case 0x880D6C90:
				case 0x880D6D38:
				case 0x880D6D48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D6AB8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D6AC0: goto loc_880D6AC0;
		case 0x880D6C90: goto loc_880D6C90;
		case 0x880D6D38: goto loc_880D6D38;
		case 0x880D6D48: goto loc_880D6D48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x880D6AC0;
	__savegprlr_17(ctx, base);
loc_880D6AC0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880D6AC0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	ctx.current_instruction = 0x880D6AD0;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// sth r10,82(r1)
	ctx.current_instruction = 0x880D6AD8;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d6b24
	if (ctx.cr6.eq) goto loc_880D6B24;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x880d6b24
	if (ctx.cr6.gt) goto loc_880D6B24;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x880d6b24
	if (ctx.cr6.lt) goto loc_880D6B24;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bgt cr6,0x880d6b24
	if (ctx.cr6.gt) goto loc_880D6B24;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x880d6b24
	if (ctx.cr6.lt) goto loc_880D6B24;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880d6b24
	if (ctx.cr6.eq) goto loc_880D6B24;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x880d6b34
	if (!ctx.cr6.eq) goto loc_880D6B34;
loc_880D6B24:
	// lis r28,-32764
	ctx.r28.s64 = -2147221504;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880D6B34:
	// rlwinm r10,r25,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d6b24
	if (!ctx.cr6.eq) goto loc_880D6B24;
	// rlwinm r10,r24,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880d6b24
	if (!ctx.cr6.eq) goto loc_880D6B24;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_880D6B70:
	// and r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 & ctx.r25.u64;
	// and r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 & ctx.r24.u64;
	// addic r29,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r29.s64 = ctx.r31.s64 + -1;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r29,r31
	temp.u8 = (~ctx.r29.u32 + ctx.r31.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r29.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// and r29,r28,r25
	ctx.r29.u64 = ctx.r28.u64 & ctx.r25.u64;
	// subfe r31,r31,r30
	temp.u8 = (~ctx.r31.u32 + ctx.r30.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r30,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// and r27,r28,r24
	ctx.r27.u64 = ctx.r28.u64 & ctx.r24.u64;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r30,r30,r29
	temp.u8 = (~ctx.r30.u32 + ctx.r29.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r30.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r29,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r29.s64 = ctx.r27.s64 + -1;
	// and r26,r28,r25
	ctx.r26.u64 = ctx.r28.u64 & ctx.r25.u64;
	// subfe r29,r29,r27
	temp.u8 = (~ctx.r29.u32 + ctx.r27.u32 < ~ctx.r29.u32) | (~ctx.r29.u32 + ctx.r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r29.u64 + ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r27.s64 = ctx.r26.s64 + -1;
	// and r19,r28,r24
	ctx.r19.u64 = ctx.r28.u64 & ctx.r24.u64;
	// rlwinm r18,r28,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r28,r27,r26
	temp.u8 = (~ctx.r27.u32 + ctx.r26.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r27.u64 + ctx.r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r27.s64 = ctx.r19.s64 + -1;
	// and r26,r18,r25
	ctx.r26.u64 = ctx.r18.u64 & ctx.r25.u64;
	// subfe r27,r27,r19
	temp.u8 = (~ctx.r27.u32 + ctx.r19.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r19.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r27.u64 + ctx.r19.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r19.s64 = ctx.r26.s64 + -1;
	// and r17,r18,r24
	ctx.r17.u64 = ctx.r18.u64 & ctx.r24.u64;
	// subfe r26,r19,r26
	temp.u8 = (~ctx.r19.u32 + ctx.r26.u32 < ~ctx.r19.u32) | (~ctx.r19.u32 + ctx.r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r19.u64 + ctx.r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r19.s64 = ctx.r17.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r19,r17
	temp.u8 = (~ctx.r19.u32 + ctx.r17.u32 < ~ctx.r19.u32) | (~ctx.r19.u32 + ctx.r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r19.u64 + ctx.r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x880d6b70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6B70;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x880d6c2c
	if (!ctx.cr6.eq) goto loc_880D6C2C;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x880d6c40
	if (ctx.cr6.eq) goto loc_880D6C40;
loc_880D6C2C:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880D6C40:
	// rlwinm r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d6c5c
	if (ctx.cr6.eq) goto loc_880D6C5C;
	// rlwinm r4,r25,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r21,-1
	ctx.r3.s64 = ctx.r21.s64 + -1;
loc_880D6C5C:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880d6c78
	if (ctx.cr6.eq) goto loc_880D6C78;
	// rlwinm r6,r24,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r5,r22,-1
	ctx.r5.s64 = ctx.r22.s64 + -1;
loc_880D6C78:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x880d6b24
	if (ctx.cr6.lt) goto loc_880D6B24;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x880d6b24
	if (ctx.cr6.lt) goto loc_880D6B24;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bl 0x880d6358
	ctx.lr = 0x880D6C90;
	sub_880D6358(ctx, base);
loc_880D6C90:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d733c
	if (ctx.cr6.lt) goto loc_880D733C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880d6d28
	if (!ctx.cr6.gt) goto loc_880D6D28;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x880D6CB0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
loc_880D6CB4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// blt cr6,0x880d6cf8
	if (ctx.cr6.lt) goto loc_880D6CF8;
	// lwz r10,0(r5)
	ctx.current_instruction = 0x880D6CC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r21,-3
	ctx.r6.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D6CCC:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f0,r10,r11
	ctx.current_instruction = 0x880D6CD0;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// stfs f0,4(r7)
	ctx.current_instruction = 0x880D6CE8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,-4(r3)
	ctx.current_instruction = 0x880D6CEC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f0,r10,r8
	ctx.current_instruction = 0x880D6CF0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x880d6ccc
	if (ctx.cr6.lt) goto loc_880D6CCC;
loc_880D6CF8:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d6d1c
	if (!ctx.cr6.lt) goto loc_880D6D1C;
	// subf r8,r9,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r9.u64;
	// lwz r10,0(r5)
	ctx.current_instruction = 0x880D6D04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880D6D10:
	// stfsx f0,r10,r11
	ctx.current_instruction = 0x880D6D10;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d6d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6D10;
loc_880D6D1C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x880d6cb4
	if (!ctx.cr0.eq) goto loc_880D6CB4;
loc_880D6D28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8812a1a8
	ctx.lr = 0x880D6D38;
	sub_8812A1A8(ctx, base);
loc_880D6D38:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8812a1a8
	ctx.lr = 0x880D6D48;
	sub_8812A1A8(ctx, base);
loc_880D6D48:
	// lhz r11,80(r1)
	ctx.current_instruction = 0x880D6D48;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,82(r1)
	ctx.current_instruction = 0x880D6D4C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880d6fa8
	if (ctx.cr6.eq) goto loc_880D6FA8;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x880d6fa0
	if (ctx.cr6.eq) goto loc_880D6FA0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r7,r11,r20
	ctx.current_instruction = 0x880D6D78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x880D6D7C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r8
	ctx.current_instruction = 0x880D6D80;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lhz r6,82(r1)
	ctx.current_instruction = 0x880D6D84;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d6e88
	if (!ctx.cr6.gt) goto loc_880D6E88;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880D6D98:
	// lhz r11,80(r1)
	ctx.current_instruction = 0x880D6D98;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880d6dd8
	if (!ctx.cr6.gt) goto loc_880D6DD8;
	// lwzx r8,r5,r20
	ctx.current_instruction = 0x880D6DAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D6DB4:
	// lwzx r9,r5,r23
	ctx.current_instruction = 0x880D6DB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r9,r11
	ctx.current_instruction = 0x880D6DBC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	ctx.current_instruction = 0x880D6DC0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.current_instruction = 0x880D6DC4;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d6db4
	if (ctx.cr6.lt) goto loc_880D6DB4;
loc_880D6DD8:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d6e70
	if (!ctx.cr6.lt) goto loc_880D6E70;
	// subf r11,r10,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x880d6e40
	if (ctx.cr6.lt) goto loc_880D6E40;
	// lwzx r9,r5,r20
	ctx.current_instruction = 0x880D6DF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r3,r21,-3
	ctx.r3.s64 = ctx.r21.s64 + -3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_880D6DFC:
	// lwzx r7,r5,r23
	ctx.current_instruction = 0x880D6DFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// lfs f0,-4(r6)
	ctx.current_instruction = 0x880D6E18;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	ctx.current_instruction = 0x880D6E1C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r7,r11
	ctx.current_instruction = 0x880D6E20;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r4)
	ctx.current_instruction = 0x880D6E28;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4(r6)
	ctx.current_instruction = 0x880D6E2C;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r8
	ctx.current_instruction = 0x880D6E30;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	ctx.current_instruction = 0x880D6E34;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r30)
	ctx.current_instruction = 0x880D6E38;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// blt cr6,0x880d6dfc
	if (ctx.cr6.lt) goto loc_880D6DFC;
loc_880D6E40:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d6e70
	if (!ctx.cr6.lt) goto loc_880D6E70;
	// subf r8,r10,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r10.u64;
	// lwzx r9,r5,r20
	ctx.current_instruction = 0x880D6E4C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880D6E58:
	// lwzx r10,r5,r23
	ctx.current_instruction = 0x880D6E58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r10)
	ctx.current_instruction = 0x880D6E60;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	ctx.current_instruction = 0x880D6E64;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d6e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6E58;
loc_880D6E70:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x880D6E70;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d6d98
	if (ctx.cr6.lt) goto loc_880D6D98;
loc_880D6E88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880d733c
	if (!ctx.cr6.lt) goto loc_880D733C;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r11.u64;
loc_880D6E9C:
	// lhz r11,80(r1)
	ctx.current_instruction = 0x880D6E9C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880d6ee4
	if (!ctx.cr6.gt) goto loc_880D6EE4;
	// lwzx r7,r6,r20
	ctx.current_instruction = 0x880D6EB0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + ctx.r23.u64;
loc_880D6EBC:
	// lwz r9,-4(r8)
	ctx.current_instruction = 0x880D6EBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lfsx f0,r9,r11
	ctx.current_instruction = 0x880D6EC8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	ctx.current_instruction = 0x880D6ECC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lhz r5,80(r1)
	ctx.current_instruction = 0x880D6ED0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d6ebc
	if (ctx.cr6.lt) goto loc_880D6EBC;
loc_880D6EE4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d6f88
	if (!ctx.cr6.lt) goto loc_880D6F88;
	// subf r11,r9,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x880d6f54
	if (ctx.cr6.lt) goto loc_880D6F54;
	// lwzx r10,r6,r20
	ctx.current_instruction = 0x880D6EFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
loc_880D6F0C:
	// lwz r7,-4(r4)
	ctx.current_instruction = 0x880D6F0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + ctx.r23.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// lfs f0,-4(r5)
	ctx.current_instruction = 0x880D6F2C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	ctx.current_instruction = 0x880D6F30;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r11,r7
	ctx.current_instruction = 0x880D6F34;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r3)
	ctx.current_instruction = 0x880D6F3C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,4(r5)
	ctx.current_instruction = 0x880D6F40;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r8
	ctx.current_instruction = 0x880D6F44;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	ctx.current_instruction = 0x880D6F48;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r29)
	ctx.current_instruction = 0x880D6F4C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// blt cr6,0x880d6f0c
	if (ctx.cr6.lt) goto loc_880D6F0C;
loc_880D6F54:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d6f88
	if (!ctx.cr6.lt) goto loc_880D6F88;
	// subf r10,r9,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r9.u64;
	// lwzx r8,r6,r20
	ctx.current_instruction = 0x880D6F60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880D6F6C:
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + ctx.r23.u64;
	// lwz r10,-4(r10)
	ctx.current_instruction = 0x880D6F70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r9)
	ctx.current_instruction = 0x880D6F78;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	ctx.current_instruction = 0x880D6F7C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d6f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6F6C;
loc_880D6F88:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x880d6e9c
	if (!ctx.cr0.eq) goto loc_880D6E9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880D6FA0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x880d712c
	if (!ctx.cr6.eq) goto loc_880D712C;
loc_880D6FA8:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x880d7124
	if (ctx.cr6.eq) goto loc_880D7124;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880d7064
	if (!ctx.cr6.gt) goto loc_880D7064;
	// li r5,0
	ctx.r5.s64 = 0;
loc_880D6FC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// blt cr6,0x880d7020
	if (ctx.cr6.lt) goto loc_880D7020;
	// lwzx r9,r5,r20
	ctx.current_instruction = 0x880D6FD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D6FDC:
	// lwzx r10,r5,r23
	ctx.current_instruction = 0x880D6FDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.current_instruction = 0x880D6FF4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	ctx.current_instruction = 0x880D6FF8;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,4(r3)
	ctx.current_instruction = 0x880D7000;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// stfs f13,4(r4)
	ctx.current_instruction = 0x880D7008;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r6,r10
	ctx.current_instruction = 0x880D700C;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	ctx.current_instruction = 0x880D7010;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r8,r10
	ctx.current_instruction = 0x880D7014;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	ctx.current_instruction = 0x880D7018;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x880d6fdc
	if (ctx.cr6.lt) goto loc_880D6FDC;
loc_880D7020:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d704c
	if (!ctx.cr6.lt) goto loc_880D704C;
	// subf r9,r7,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x880D702C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D7038:
	// lwzx r9,r5,r23
	ctx.current_instruction = 0x880D7038;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// lfsx f0,r9,r11
	ctx.current_instruction = 0x880D703C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	ctx.current_instruction = 0x880D7040;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d7038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D7038;
loc_880D704C:
	// lhz r11,82(r1)
	ctx.current_instruction = 0x880D704C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880d6fc4
	if (ctx.cr6.lt) goto loc_880D6FC4;
loc_880D7064:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x880d733c
	if (!ctx.cr6.lt) goto loc_880D733C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r11,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r11.u64;
loc_880D7078:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// blt cr6,0x880d70dc
	if (ctx.cr6.lt) goto loc_880D70DC;
	// lwzx r9,r5,r20
	ctx.current_instruction = 0x880D7084;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r30,r21,-3
	ctx.r30.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + ctx.r23.u64;
loc_880D7094:
	// lwz r10,-4(r4)
	ctx.current_instruction = 0x880D7094;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.current_instruction = 0x880D70AC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + ctx.r23.u64;
	// stfsx f0,r11,r9
	ctx.current_instruction = 0x880D70B4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// lfs f13,4(r31)
	ctx.current_instruction = 0x880D70C0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	ctx.current_instruction = 0x880D70C4;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	ctx.current_instruction = 0x880D70C8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	ctx.current_instruction = 0x880D70CC;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	ctx.current_instruction = 0x880D70D0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	ctx.current_instruction = 0x880D70D4;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x880d7094
	if (ctx.cr6.lt) goto loc_880D7094;
loc_880D70DC:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d710c
	if (!ctx.cr6.lt) goto loc_880D710C;
	// subf r9,r7,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x880D70E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D70F4:
	// add r9,r5,r23
	ctx.r9.u64 = ctx.r5.u64 + ctx.r23.u64;
	// lwz r8,-4(r9)
	ctx.current_instruction = 0x880D70F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lfsx f0,r8,r11
	ctx.current_instruction = 0x880D70FC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	ctx.current_instruction = 0x880D7100;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d70f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D70F4;
loc_880D710C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x880d7078
	if (!ctx.cr0.eq) goto loc_880D7078;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880D7124:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x880d7298
	if (ctx.cr6.eq) goto loc_880D7298;
loc_880D712C:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x880d7298
	if (!ctx.cr6.eq) goto loc_880D7298;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880d733c
	if (!ctx.cr6.gt) goto loc_880D733C;
	// extsw r11,r22
	ctx.r11.s64 = ctx.r22.s32;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// std r11,88(r1)
	ctx.current_instruction = 0x880D7148;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lfs f12,14488(r10)
	ctx.current_instruction = 0x880D7154;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 14488);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.current_instruction = 0x880D7158;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_880D716C:
	// lhz r11,80(r1)
	ctx.current_instruction = 0x880D716C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880d71b4
	if (!ctx.cr6.gt) goto loc_880D71B4;
	// lwzx r8,r5,r20
	ctx.current_instruction = 0x880D7180;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D7188:
	// lwzx r9,r5,r23
	ctx.current_instruction = 0x880D7188;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f11,r9,r11
	ctx.current_instruction = 0x880D7190;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r8,r11
	ctx.current_instruction = 0x880D719C;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.current_instruction = 0x880D71A0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x880d7188
	if (ctx.cr6.lt) goto loc_880D7188;
loc_880D71B4:
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x880D71B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r11,r10
	ctx.current_instruction = 0x880D71BC;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lhz r9,80(r1)
	ctx.current_instruction = 0x880D71C0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d7280
	if (!ctx.cr6.lt) goto loc_880D7280;
	// subf r11,r9,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x880d724c
	if (ctx.cr6.lt) goto loc_880D724C;
	// addi r3,r21,-3
	ctx.r3.s64 = ctx.r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_880D71E8:
	// lwzx r7,r5,r23
	ctx.current_instruction = 0x880D71E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f11,-4(r6)
	ctx.current_instruction = 0x880D7204;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	ctx.current_instruction = 0x880D7210;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r7,r11
	ctx.current_instruction = 0x880D7214;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f6,4(r4)
	ctx.current_instruction = 0x880D7224;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f5,4(r6)
	ctx.current_instruction = 0x880D7228;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fdivs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// stfsx f3,r10,r8
	ctx.current_instruction = 0x880D7234;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f2,r7,r8
	ctx.current_instruction = 0x880D7238;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fdivs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f11,4(r30)
	ctx.current_instruction = 0x880D7244;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// blt cr6,0x880d71e8
	if (ctx.cr6.lt) goto loc_880D71E8;
loc_880D724C:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d7280
	if (!ctx.cr6.lt) goto loc_880D7280;
	// subf r8,r9,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880D7260:
	// lwzx r9,r5,r23
	ctx.current_instruction = 0x880D7260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f11,-4(r9)
	ctx.current_instruction = 0x880D7268;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	ctx.current_instruction = 0x880D7274;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d7260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D7260;
loc_880D7280:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x880d716c
	if (!ctx.cr0.eq) goto loc_880D716C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_880D7298:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x880d733c
	if (!ctx.cr6.gt) goto loc_880D733C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_880D72A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// blt cr6,0x880d7304
	if (ctx.cr6.lt) goto loc_880D7304;
	// lwzx r9,r5,r20
	ctx.current_instruction = 0x880D72B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r31,r21,-3
	ctx.r31.s64 = ctx.r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D72C0:
	// lwzx r10,r5,r23
	ctx.current_instruction = 0x880D72C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r10,r11
	ctx.current_instruction = 0x880D72D8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	ctx.current_instruction = 0x880D72DC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// lfs f13,4(r3)
	ctx.current_instruction = 0x880D72E8;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	ctx.current_instruction = 0x880D72EC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	ctx.current_instruction = 0x880D72F0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	ctx.current_instruction = 0x880D72F4;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	ctx.current_instruction = 0x880D72F8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	ctx.current_instruction = 0x880D72FC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x880d72c0
	if (ctx.cr6.lt) goto loc_880D72C0;
loc_880D7304:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x880d7330
	if (!ctx.cr6.lt) goto loc_880D7330;
	// subf r9,r7,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.current_instruction = 0x880D7310;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D731C:
	// lwzx r9,r5,r23
	ctx.current_instruction = 0x880D731C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r23.u32);
	// lfsx f0,r9,r11
	ctx.current_instruction = 0x880D7320;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	ctx.current_instruction = 0x880D7324;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d731c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D731C;
loc_880D7330:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x880d72a8
	if (!ctx.cr0.eq) goto loc_880D72A8;
loc_880D733C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EBC20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880EBC20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EBC20;
	ctx.current_instruction = 0x880EBC20;
	// lwz r11,27988(r3)
	ctx.current_instruction = 0x880EBC20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ebc5c
	if (ctx.cr6.eq) goto loc_880EBC5C;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880EBC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880ebc5c
	if (!ctx.cr6.eq) goto loc_880EBC5C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,100(r4)
	ctx.current_instruction = 0x880EBC3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// addi r11,r11,17400
	ctx.r11.s64 = ctx.r11.s64 + 17400;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x880EBC4C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,108(r4)
	ctx.current_instruction = 0x880EBC50;
	REX_STORE_U32(ctx.r4.u32 + 108, ctx.r7.u32);
	// stw r7,112(r4)
	ctx.current_instruction = 0x880EBC54;
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880EBC5C:
	// lwz r11,100(r4)
	ctx.current_instruction = 0x880EBC5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r10,17400
	ctx.r9.s64 = ctx.r10.s64 + 17400;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r9
	ctx.current_instruction = 0x880EBC6C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,108(r4)
	ctx.current_instruction = 0x880EBC70;
	REX_STORE_U32(ctx.r4.u32 + 108, ctx.r7.u32);
	// stw r7,112(r4)
	ctx.current_instruction = 0x880EBC74;
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880EC360) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EC360;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EC360) {
			switch (rex_dispatch_address) {
				case 0x880EC368:
				case 0x880EC3A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EC360;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EC368: goto loc_880EC368;
		case 0x880EC3A4: goto loc_880EC3A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880EC368;
	__savegprlr_23(ctx, base);
loc_880EC368:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880EC368;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r27,0(r8)
	ctx.current_instruction = 0x880EC370;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r26,4(r8)
	ctx.current_instruction = 0x880EC378;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r24,8(r8)
	ctx.current_instruction = 0x880EC380;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r23,12(r8)
	ctx.current_instruction = 0x880EC388;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r25,596(r11)
	ctx.current_instruction = 0x880EC394;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 596);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x88052d90
	ctx.lr = 0x880EC3A4;
	sub_88052D90(ctx, base);
loc_880EC3A4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x880ec46c
	if (!ctx.cr6.gt) goto loc_880EC46C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880EC3C8:
	// lhz r11,2(r29)
	ctx.current_instruction = 0x880EC3C8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r10,0(r29)
	ctx.current_instruction = 0x880EC3CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.current_instruction = 0x880EC3E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x880ec400
	if (ctx.cr6.eq) goto loc_880EC400;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// slw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
loc_880EC400:
	// lwzx r11,r11,r28
	ctx.current_instruction = 0x880EC400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x880ec41c
	if (!ctx.cr6.eq) goto loc_880EC41C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r24
	ctx.r10.s64 = ctx.r24.s16;
	// sthx r10,r9,r30
	ctx.current_instruction = 0x880EC414;
	REX_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// b 0x880ec460
	goto loc_880EC460;
loc_880EC41C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x880ec434
	if (!ctx.cr6.eq) goto loc_880EC434;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r23
	ctx.r10.s64 = ctx.r23.s16;
	// sthx r10,r9,r30
	ctx.current_instruction = 0x880EC42C;
	REX_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u16);
	// b 0x880ec460
	goto loc_880EC460;
loc_880EC434:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// ble cr6,0x880ec454
	if (!ctx.cr6.gt) goto loc_880EC454;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sthx r5,r9,r30
	ctx.current_instruction = 0x880EC44C;
	REX_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r5.u16);
	// b 0x880ec460
	goto loc_880EC460;
loc_880EC454:
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r26,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r26.u64;
	// sthx r9,r6,r30
	ctx.current_instruction = 0x880EC45C;
	REX_STORE_U16(ctx.r6.u32 + ctx.r30.u32, ctx.r9.u16);
loc_880EC460:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bdnz 0x880ec3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EC3C8;
loc_880EC46C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EF280) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EF280;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EF280) {
			switch (rex_dispatch_address) {
				case 0x880EF288:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EF280;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EF288: goto loc_880EF288;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880EF288;
	__savegprlr_14(ctx, base);
loc_880EF288:
	// stwu r1,-768(r1)
	ctx.current_instruction = 0x880EF288;
	ea = -768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,804(r1)
	ctx.current_instruction = 0x880EF290;
	REX_STORE_U32(ctx.r1.u32 + 804, ctx.r5.u32);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r14,r4,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,20(r1)
	ctx.current_instruction = 0x880EF2BC;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r9.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,48(r1)
	ctx.current_instruction = 0x880EF2C4;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r5.u32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,32(r1)
	ctx.current_instruction = 0x880EF2D0;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r8.u32);
	// mulli r4,r4,14
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// stw r7,44(r1)
	ctx.current_instruction = 0x880EF2D8;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r7.u32);
	// stw r6,36(r1)
	ctx.current_instruction = 0x880EF2DC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r6.u32);
	// stw r4,40(r1)
	ctx.current_instruction = 0x880EF2E0;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r4.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r1,348
	ctx.r11.s64 = ctx.r1.s64 + 348;
	// b 0x880ef308
	goto loc_880EF308;
loc_880EF2F0:
	// lwz r4,40(r1)
	ctx.current_instruction = 0x880EF2F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r6,36(r1)
	ctx.current_instruction = 0x880EF2F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r7,44(r1)
	ctx.current_instruction = 0x880EF2F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r5,48(r1)
	ctx.current_instruction = 0x880EF2FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// lwz r8,32(r1)
	ctx.current_instruction = 0x880EF300;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r9,20(r1)
	ctx.current_instruction = 0x880EF304;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
loc_880EF308:
	// lhzx r9,r9,r10
	ctx.current_instruction = 0x880EF308;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhzx r3,r7,r10
	ctx.current_instruction = 0x880EF30C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// lhzx r31,r6,r10
	ctx.current_instruction = 0x880EF310;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhzx r9,r14,r10
	ctx.current_instruction = 0x880EF318;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r14.u32 + ctx.r10.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// lhzx r8,r8,r10
	ctx.current_instruction = 0x880EF320;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r30,r31
	ctx.r30.s64 = ctx.r31.s16;
	// lhzx r3,r4,r10
	ctx.current_instruction = 0x880EF328;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// lhzx r5,r5,r10
	ctx.current_instruction = 0x880EF330;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhz r9,0(r10)
	ctx.current_instruction = 0x880EF338;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// subf r25,r31,r30
	ctx.r25.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r27,r6,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r29,r8,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r26,r4,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r28,r25,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r25.u64;
	// rlwinm r19,r26,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r29,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// rlwinm r17,r28,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r30,r31
	ctx.r22.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r25,r6,r7
	ctx.r25.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r5,r26,r19
	ctx.r5.u64 = ctx.r26.u64 + ctx.r19.u64;
	// add r16,r29,r18
	ctx.r16.u64 = ctx.r29.u64 + ctx.r18.u64;
	// add r18,r28,r17
	ctx.r18.u64 = ctx.r28.u64 + ctx.r17.u64;
	// rlwinm r19,r29,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r22,r25
	ctx.r20.u64 = ctx.r22.u64 + ctx.r25.u64;
	// rlwinm r17,r27,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r22,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r22.u64;
	// add r22,r18,r19
	ctx.r22.u64 = ctx.r18.u64 + ctx.r19.u64;
	// add r17,r27,r17
	ctx.r17.u64 = ctx.r27.u64 + ctx.r17.u64;
	// rlwinm r15,r27,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r26,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r22,1
	ctx.r26.s64 = ctx.r22.s64 + 1;
	// add r23,r3,r4
	ctx.r23.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r26,16(r1)
	ctx.current_instruction = 0x880EF3A8;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r26.u32);
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r29,r28,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r23,r24
	ctx.r21.u64 = ctx.r23.u64 + ctx.r24.u64;
	// subf r24,r24,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r24.u64;
	// subf r28,r5,r15
	ctx.r28.u64 = ctx.r15.u64 - ctx.r5.u64;
	// rlwinm r19,r25,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r5,r24
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// add r23,r20,r21
	ctx.r23.u64 = ctx.r20.u64 + ctx.r21.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r29,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r29.u64;
	// add r19,r25,r19
	ctx.r19.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r26,r17,r27
	ctx.r26.u64 = ctx.r17.u64 + ctx.r27.u64;
	// rlwinm r18,r23,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r19,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r19.u64;
	// rlwinm r16,r29,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r15,r28,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r18
	ctx.r23.u64 = ctx.r23.u64 + ctx.r18.u64;
	// add r18,r29,r16
	ctx.r18.u64 = ctx.r29.u64 + ctx.r16.u64;
	// add r17,r28,r15
	ctx.r17.u64 = ctx.r28.u64 + ctx.r15.u64;
	// addi r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 1;
	// lwz r5,16(r1)
	ctx.current_instruction = 0x880EF3FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// subf r23,r17,r18
	ctx.r23.u64 = ctx.r18.u64 - ctx.r17.u64;
	// addi r18,r27,2
	ctx.r18.s64 = ctx.r27.s64 + 2;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r27,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r19.s32 >> 1;
	// subf r5,r26,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r26.u64;
	// addi r17,r23,4
	ctx.r17.s64 = ctx.r23.s64 + 4;
	// stw r27,-252(r11)
	ctx.current_instruction = 0x880EF418;
	REX_STORE_U32(ctx.r11.u32 + -252, ctx.r27.u32);
	// srawi r23,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r23.s64 = ctx.r5.s32 >> 3;
	// srawi r19,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r18.s32 >> 2;
	// srawi r18,r17,3
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7) != 0);
	ctx.r18.s64 = ctx.r17.s32 >> 3;
	// stw r23,-248(r11)
	ctx.current_instruction = 0x880EF428;
	REX_STORE_U32(ctx.r11.u32 + -248, ctx.r23.u32);
	// subf r27,r7,r31
	ctx.r27.u64 = ctx.r31.u64 - ctx.r7.u64;
	// stw r19,-244(r11)
	ctx.current_instruction = 0x880EF430;
	REX_STORE_U32(ctx.r11.u32 + -244, ctx.r19.u32);
	// subf r21,r20,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r20.u64;
	// stw r18,-240(r11)
	ctx.current_instruction = 0x880EF438;
	REX_STORE_U32(ctx.r11.u32 + -240, ctx.r18.u32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r23,r4,r9
	ctx.r23.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r28,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r21,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// add r4,r7,r23
	ctx.r4.u64 = ctx.r7.u64 + ctx.r23.u64;
	// rlwinm r5,r25,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r29,r31
	ctx.r16.u64 = ctx.r29.u64 + ctx.r31.u64;
	// subf r23,r7,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r7.u64;
	// add r25,r21,r17
	ctx.r25.u64 = ctx.r21.u64 + ctx.r17.u64;
	// subf r7,r30,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r30.u64;
	// add r29,r30,r6
	ctx.r29.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r28,r28,r20
	ctx.r28.u64 = ctx.r28.u64 + ctx.r20.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r24,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r25,1
	ctx.r6.s64 = ctx.r25.s64 + 1;
	// add r28,r16,r28
	ctx.r28.u64 = ctx.r16.u64 + ctx.r28.u64;
	// add r17,r9,r30
	ctx.r17.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mulli r21,r9,11
	ctx.r21.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(11));
	// add r31,r24,r18
	ctx.r31.u64 = ctx.r24.u64 + ctx.r18.u64;
	// srawi r9,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 1;
	// addi r6,r28,4
	ctx.r6.s64 = ctx.r28.s64 + 4;
	// subf r24,r31,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r31.u64;
	// stw r9,-236(r11)
	ctx.current_instruction = 0x880EF49C;
	REX_STORE_U32(ctx.r11.u32 + -236, ctx.r9.u32);
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// addi r6,r24,2
	ctx.r6.s64 = ctx.r24.s64 + 2;
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-232(r11)
	ctx.current_instruction = 0x880EF4B0;
	REX_STORE_U32(ctx.r11.u32 + -232, ctx.r9.u32);
	// rlwinm r26,r4,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// rlwinm r19,r27,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r25,r22
	ctx.r5.u64 = ctx.r25.u64 + ctx.r22.u64;
	// stw r9,-228(r11)
	ctx.current_instruction = 0x880EF4C4;
	REX_STORE_U32(ctx.r11.u32 + -228, ctx.r9.u32);
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 + ctx.r4.u64;
	// add r20,r27,r19
	ctx.r20.u64 = ctx.r27.u64 + ctx.r19.u64;
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// subf r3,r29,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r29.u64;
	// add r6,r29,r31
	ctx.r6.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r9,-224(r11)
	ctx.current_instruction = 0x880EF4E4;
	REX_STORE_U32(ctx.r11.u32 + -224, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r31,r20,r21
	ctx.r31.u64 = ctx.r20.u64 + ctx.r21.u64;
	// rlwinm r19,r23,4,0,27
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// rlwinm r18,r7,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// stw r9,4(r11)
	ctx.current_instruction = 0x880EF500;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mulli r4,r27,11
	ctx.r4.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(11));
	// add r29,r19,r23
	ctx.r29.u64 = ctx.r19.u64 + ctx.r23.u64;
	// rlwinm r24,r8,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r7,r18
	ctx.r27.u64 = ctx.r7.u64 + ctx.r18.u64;
	// srawi r9,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 2;
	// mulli r28,r8,11
	ctx.r28.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(11));
	// stw r9,8(r11)
	ctx.current_instruction = 0x880EF520;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// subf r4,r4,r17
	ctx.r4.u64 = ctx.r17.u64 - ctx.r4.u64;
	// add r31,r8,r24
	ctx.r31.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// rlwinm r26,r3,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mulli r30,r7,11
	ctx.r30.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(11));
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// stw r9,12(r11)
	ctx.current_instruction = 0x880EF54C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// add r7,r26,r3
	ctx.r7.u64 = ctx.r26.u64 + ctx.r3.u64;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// subf r6,r30,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r30.u64;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// stw r8,16(r11)
	ctx.current_instruction = 0x880EF564;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// stw r9,20(r11)
	ctx.current_instruction = 0x880EF570;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r8,24(r11)
	ctx.current_instruction = 0x880EF580;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r9,28(r11)
	ctx.current_instruction = 0x880EF584;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stwu r7,32(r11)
	ctx.current_instruction = 0x880EF58C;
	ea = 32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880ef2f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EF2F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r19,804(r1)
	ctx.current_instruction = 0x880EF598;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// addi r20,r1,96
	ctx.r20.s64 = ctx.r1.s64 + 96;
	// addi r5,r19,256
	ctx.r5.s64 = ctx.r19.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r7,r11,19088
	ctx.r7.s64 = ctx.r11.s64 + 19088;
loc_880EF5B0:
	// addi r11,r20,92
	ctx.r11.s64 = ctx.r20.s64 + 92;
	// addi r10,r5,46
	ctx.r10.s64 = ctx.r5.s64 + 46;
	// li r8,-2
	ctx.r8.s64 = -2;
loc_880EF5BC:
	// addi r4,r8,-2
	ctx.r4.s64 = ctx.r8.s64 + -2;
	// lwz r6,-92(r11)
	ctx.current_instruction = 0x880EF5C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r30,-28(r11)
	ctx.current_instruction = 0x880EF5C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// addi r9,r7,-128
	ctx.r9.s64 = ctx.r7.s64 + -128;
	// lwz r31,-60(r11)
	ctx.current_instruction = 0x880EF5CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// rlwinm r4,r4,5,25,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x60;
	// lwz r3,4(r11)
	ctx.current_instruction = 0x880EF5D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r18,r8,-1
	ctx.r18.s64 = ctx.r8.s64 + -1;
	// subf r28,r30,r31
	ctx.r28.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r27,-88(r11)
	ctx.current_instruction = 0x880EF5E0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -88);
	// subf r29,r3,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lwz r26,8(r11)
	ctx.current_instruction = 0x880EF5E8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r25,-56(r11)
	ctx.current_instruction = 0x880EF5F0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -56);
	// subf r4,r28,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lwz r24,-24(r11)
	ctx.current_instruction = 0x880EF5F8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r6,r28,r29
	ctx.r6.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r28,16(r9)
	ctx.current_instruction = 0x880EF60C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,20(r9)
	ctx.current_instruction = 0x880EF614;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lwz r22,24(r9)
	ctx.current_instruction = 0x880EF61C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,28(r9)
	ctx.current_instruction = 0x880EF624;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lwz r17,4(r9)
	ctx.current_instruction = 0x880EF62C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r16,8(r9)
	ctx.current_instruction = 0x880EF634;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r15,12(r9)
	ctx.current_instruction = 0x880EF63C;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r23,r23,r3
	ctx.r23.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lwz r14,0(r9)
	ctx.current_instruction = 0x880EF644;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r22,r29,r22
	ctx.r22.u64 = ctx.r29.u64 + ctx.r22.u64;
	// srawi r28,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 3;
	// add r21,r31,r21
	ctx.r21.u64 = ctx.r31.u64 + ctx.r21.u64;
	// srawi r29,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r23.s32 >> 3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r22.s32 >> 2;
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r23,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r21.s32 >> 2;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// subf r3,r23,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r23.u64;
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// mullw r31,r17,r9
	ctx.r31.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r16,r6
	ctx.r30.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r6.s32);
	// mullw r29,r15,r3
	ctx.r29.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r3.s32);
	// srawi r31,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 16;
	// mullw r28,r14,r4
	ctx.r28.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// srawi r29,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 16;
	// srawi r28,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 16;
	// addi r23,r7,-128
	ctx.r23.s64 = ctx.r7.s64 + -128;
	// rlwinm r22,r18,5,25,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 5) & 0x60;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// sth r3,2(r10)
	ctx.current_instruction = 0x880EF6B4;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// sth r31,-30(r10)
	ctx.current_instruction = 0x880EF6BC;
	REX_STORE_U16(ctx.r10.u32 + -30, ctx.r31.u16);
	// subf r6,r26,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r26.u64;
	// sth r30,-14(r10)
	ctx.current_instruction = 0x880EF6C4;
	REX_STORE_U16(ctx.r10.u32 + -14, ctx.r30.u16);
	// add r9,r22,r23
	ctx.r9.u64 = ctx.r22.u64 + ctx.r23.u64;
	// sth r4,-46(r10)
	ctx.current_instruction = 0x880EF6CC;
	REX_STORE_U16(ctx.r10.u32 + -46, ctx.r4.u16);
	// subf r29,r24,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r24.u64;
	// lwzx r21,r22,r23
	ctx.current_instruction = 0x880EF6D4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r31,r24,r25
	ctx.r31.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r4,r29,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r28,16(r9)
	ctx.current_instruction = 0x880EF6E8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lwz r27,20(r9)
	ctx.current_instruction = 0x880EF6F0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r26,24(r9)
	ctx.current_instruction = 0x880EF6F4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r31.u64;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lwz r25,28(r9)
	ctx.current_instruction = 0x880EF704;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r24,r28,r30
	ctx.r24.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r18,4(r9)
	ctx.current_instruction = 0x880EF70C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,8(r9)
	ctx.current_instruction = 0x880EF714;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r23,r27,r3
	ctx.r23.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lwz r16,12(r9)
	ctx.current_instruction = 0x880EF71C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lwz r28,-52(r11)
	ctx.current_instruction = 0x880EF724;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// srawi r22,r24,3
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7) != 0);
	ctx.r22.s64 = ctx.r24.s32 >> 3;
	// lwz r27,-20(r11)
	ctx.current_instruction = 0x880EF72C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// add r24,r6,r31
	ctx.r24.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r31,-84(r11)
	ctx.current_instruction = 0x880EF734;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -84);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,12(r11)
	ctx.current_instruction = 0x880EF73C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// srawi r23,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 3;
	// srawi r26,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r24,r25
	ctx.r3.u64 = ctx.r24.u64 + ctx.r25.u64;
	// add r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 + ctx.r9.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// add r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 + ctx.r6.u64;
	// mullw r26,r18,r9
	ctx.r26.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r9.s32);
	// subf r3,r3,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r25,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 16;
	// mullw r24,r17,r6
	ctx.r24.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r6.s32);
	// mullw r26,r16,r3
	ctx.r26.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r3.s32);
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r30,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 16;
	// srawi r24,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 16;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r4,r22,r4
	ctx.r4.u64 = ctx.r22.u64 + ctx.r4.u64;
	// add r6,r24,r3
	ctx.r6.u64 = ctx.r24.u64 + ctx.r3.u64;
	// sth r30,-12(r10)
	ctx.current_instruction = 0x880EF78C;
	REX_STORE_U16(ctx.r10.u32 + -12, ctx.r30.u16);
	// mullw r3,r21,r4
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// sth r6,4(r10)
	ctx.current_instruction = 0x880EF794;
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// add r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 + ctx.r9.u64;
	// sth r9,-28(r10)
	ctx.current_instruction = 0x880EF79C;
	REX_STORE_U16(ctx.r10.u32 + -28, ctx.r9.u16);
	// srawi r26,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 16;
	// addi r9,r7,-128
	ctx.r9.s64 = ctx.r7.s64 + -128;
	// add r26,r26,r4
	ctx.r26.u64 = ctx.r26.u64 + ctx.r4.u64;
	// rlwinm r4,r8,5,25,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x60;
	// subf r30,r29,r31
	ctx.r30.u64 = ctx.r31.u64 - ctx.r29.u64;
	// sth r26,-44(r10)
	ctx.current_instruction = 0x880EF7B4;
	REX_STORE_U16(ctx.r10.u32 + -44, ctx.r26.u16);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r29,r31
	ctx.r6.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r29,r27,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r27.u64;
	// add r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 + ctx.r6.u64;
	// subf r31,r4,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r4,r29,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r29.u64;
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r25,r4,r29
	ctx.r25.u64 = ctx.r4.u64 + ctx.r29.u64;
	// rlwinm r27,r31,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r6,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,20(r9)
	ctx.current_instruction = 0x880EF7F0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// add r26,r6,r26
	ctx.r26.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lwz r30,16(r9)
	ctx.current_instruction = 0x880EF7F8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r30,24(r9)
	ctx.current_instruction = 0x880EF804;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// lwz r29,28(r9)
	ctx.current_instruction = 0x880EF80C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// srawi r31,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 3;
	// lwz r24,4(r9)
	ctx.current_instruction = 0x880EF814;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lwz r23,8(r9)
	ctx.current_instruction = 0x880EF81C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r25,12(r9)
	ctx.current_instruction = 0x880EF820;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r22,0(r9)
	ctx.current_instruction = 0x880EF828;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r26,r26,r29
	ctx.r26.u64 = ctx.r26.u64 + ctx.r29.u64;
	// lwz r28,-80(r11)
	ctx.current_instruction = 0x880EF834;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r29,-48(r11)
	ctx.current_instruction = 0x880EF838;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r27,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r30.s32 >> 2;
	// srawi r26,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 2;
	// lwz r30,-16(r11)
	ctx.current_instruction = 0x880EF848;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lwzu r6,16(r11)
	ctx.current_instruction = 0x880EF850;
	ea = 16 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r4,r26,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r26.u64;
	// mullw r27,r24,r9
	ctx.r27.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r9.s32);
	// mullw r26,r23,r31
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r31.s32);
	// mullw r24,r25,r4
	ctx.r24.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// mullw r23,r22,r3
	ctx.r23.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r3.s32);
	// srawi r27,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 16;
	// srawi r25,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 16;
	// srawi r24,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 16;
	// srawi r26,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r23.s32 >> 16;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r27,r26,r3
	ctx.r27.u64 = ctx.r26.u64 + ctx.r3.u64;
	// add r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 + ctx.r4.u64;
	// sth r9,-26(r10)
	ctx.current_instruction = 0x880EF884;
	REX_STORE_U16(ctx.r10.u32 + -26, ctx.r9.u16);
	// add r3,r25,r31
	ctx.r3.u64 = ctx.r25.u64 + ctx.r31.u64;
	// sth r27,-42(r10)
	ctx.current_instruction = 0x880EF88C;
	REX_STORE_U16(ctx.r10.u32 + -42, ctx.r27.u16);
	// sth r4,6(r10)
	ctx.current_instruction = 0x880EF890;
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// sth r3,-10(r10)
	ctx.current_instruction = 0x880EF898;
	REX_STORE_U16(ctx.r10.u32 + -10, ctx.r3.u16);
	// addi r9,r7,-128
	ctx.r9.s64 = ctx.r7.s64 + -128;
	// rlwinm r4,r4,5,25,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x60;
	// subf r27,r30,r29
	ctx.r27.u64 = ctx.r29.u64 - ctx.r30.u64;
	// subf r26,r6,r28
	ctx.r26.u64 = ctx.r28.u64 - ctx.r6.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r4,r27,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r27.u64;
	// add r6,r27,r26
	ctx.r6.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r31.u64;
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r4,r29
	ctx.r28.u64 = ctx.r4.u64 + ctx.r29.u64;
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r6,r31
	ctx.r27.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r3,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r26,16(r9)
	ctx.current_instruction = 0x880EF8EC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r25,20(r9)
	ctx.current_instruction = 0x880EF8F0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r4,24(r9)
	ctx.current_instruction = 0x880EF8F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lwz r26,28(r9)
	ctx.current_instruction = 0x880EF900;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// lwz r28,4(r9)
	ctx.current_instruction = 0x880EF908;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// lwz r25,8(r9)
	ctx.current_instruction = 0x880EF910;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r23,12(r9)
	ctx.current_instruction = 0x880EF914;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// lwz r22,0(r9)
	ctx.current_instruction = 0x880EF91C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r27,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 2;
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r3,r27,r24
	ctx.r3.u64 = ctx.r24.u64 - ctx.r27.u64;
	// mullw r31,r28,r4
	ctx.r31.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// mullw r27,r25,r6
	ctx.r27.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r6.s32);
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// srawi r28,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 16;
	// mullw r30,r23,r3
	ctx.r30.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r3.s32);
	// srawi r29,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 16;
	// mullw r27,r22,r9
	ctx.r27.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r9.s32);
	// srawi r31,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 16;
	// srawi r30,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 16;
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r9,r31,r3
	ctx.r9.u64 = ctx.r31.u64 + ctx.r3.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// sth r30,-40(r10)
	ctx.current_instruction = 0x880EF970;
	REX_STORE_U16(ctx.r10.u32 + -40, ctx.r30.u16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// sth r4,-24(r10)
	ctx.current_instruction = 0x880EF97C;
	REX_STORE_U16(ctx.r10.u32 + -24, ctx.r4.u16);
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// sth r6,-8(r10)
	ctx.current_instruction = 0x880EF984;
	REX_STORE_U16(ctx.r10.u32 + -8, ctx.r6.u16);
	// sthu r3,8(r10)
	ctx.current_instruction = 0x880EF988;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x880ef5bc
	if (ctx.cr6.lt) goto loc_880EF5BC;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// addi r20,r20,128
	ctx.r20.s64 = ctx.r20.s64 + 128;
	// bdnz 0x880ef5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EF5B0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r19,110
	ctx.r9.s64 = ctx.r19.s64 + 110;
	// addi r10,r1,316
	ctx.r10.s64 = ctx.r1.s64 + 316;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880EF9B4:
	// addi r8,r7,-640
	ctx.r8.s64 = ctx.r7.s64 + -640;
	// lwz r3,-188(r10)
	ctx.current_instruction = 0x880EF9B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -188);
	// rlwinm r11,r29,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xC0;
	// lwz r24,-156(r10)
	ctx.current_instruction = 0x880EF9C0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + -156);
	// lwz r21,-124(r10)
	ctx.current_instruction = 0x880EF9C4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + -124);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r22,-92(r10)
	ctx.current_instruction = 0x880EF9CC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r31,-60(r10)
	ctx.current_instruction = 0x880EF9D0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -60);
	// lwz r6,-28(r10)
	ctx.current_instruction = 0x880EF9D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -28);
	// add r28,r22,r21
	ctx.r28.u64 = ctx.r22.u64 + ctx.r21.u64;
	// lwz r4,-220(r10)
	ctx.current_instruction = 0x880EF9DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -220);
	// add r27,r31,r24
	ctx.r27.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lwzu r8,4(r10)
	ctx.current_instruction = 0x880EF9E4;
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r26,r6,r3
	ctx.r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r23,r31,r24
	ctx.r23.u64 = ctx.r24.u64 - ctx.r31.u64;
	// lwz r14,24(r11)
	ctx.current_instruction = 0x880EF9F0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r25,r8,r4
	ctx.r25.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r15,28(r11)
	ctx.current_instruction = 0x880EF9F8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lwz r8,4(r11)
	ctx.current_instruction = 0x880EFA00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r26,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r26.u64;
	// lwz r5,32(r11)
	ctx.current_instruction = 0x880EFA08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r24,r3,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lwz r16,36(r11)
	ctx.current_instruction = 0x880EFA10;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r3,r21,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r21.u64;
	// lwz r17,40(r11)
	ctx.current_instruction = 0x880EFA18;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// add r22,r14,r30
	ctx.r22.u64 = ctx.r14.u64 + ctx.r30.u64;
	// lwz r18,44(r11)
	ctx.current_instruction = 0x880EFA20;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r8,20(r1)
	ctx.current_instruction = 0x880EFA24;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r8.u32);
	// subf r8,r24,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r24.u64;
	// add r6,r24,r23
	ctx.r6.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lwz r19,56(r11)
	ctx.current_instruction = 0x880EFA30;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// subf r31,r25,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r25.u64;
	// lwz r20,48(r11)
	ctx.current_instruction = 0x880EFA38;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// srawi r24,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 2;
	// lwz r14,60(r11)
	ctx.current_instruction = 0x880EFA40;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// add r15,r15,r31
	ctx.r15.u64 = ctx.r15.u64 + ctx.r31.u64;
	// lwz r21,52(r11)
	ctx.current_instruction = 0x880EFA48;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stw r24,16(r1)
	ctx.current_instruction = 0x880EFA50;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r24.u32);
	// add r23,r16,r6
	ctx.r23.u64 = ctx.r16.u64 + ctx.r6.u64;
	// add r17,r17,r4
	ctx.r17.u64 = ctx.r17.u64 + ctx.r4.u64;
	// srawi r22,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r15.s32 >> 2;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// add r18,r18,r8
	ctx.r18.u64 = ctx.r18.u64 + ctx.r8.u64;
	// srawi r16,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r23.s32 >> 2;
	// srawi r23,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r17.s32 >> 1;
	// srawi r17,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r18.s32 >> 2;
	// subf r18,r8,r23
	ctx.r18.u64 = ctx.r23.u64 - ctx.r8.u64;
	// subf r24,r16,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r16.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r23,r17,r8
	ctx.r23.u64 = ctx.r8.u64 - ctx.r17.u64;
	// add r8,r18,r4
	ctx.r8.u64 = ctx.r18.u64 + ctx.r4.u64;
	// add r24,r24,r3
	ctx.r24.u64 = ctx.r24.u64 + ctx.r3.u64;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r3,r19,r8
	ctx.r3.u64 = ctx.r19.u64 + ctx.r8.u64;
	// add r4,r23,r4
	ctx.r4.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r23,r20,r24
	ctx.r23.u64 = ctx.r20.u64 + ctx.r24.u64;
	// add r21,r21,r4
	ctx.r21.u64 = ctx.r21.u64 + ctx.r4.u64;
	// lwz r15,16(r1)
	ctx.current_instruction = 0x880EFAA4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// subf r3,r6,r14
	ctx.r3.u64 = ctx.r14.u64 - ctx.r6.u64;
	// srawi r19,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r23.s32 >> 1;
	// add r20,r3,r8
	ctx.r20.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r23,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r21.s32 >> 1;
	// rlwinm r18,r31,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r28,r25
	ctx.r3.u64 = ctx.r28.u64 + ctx.r25.u64;
	// rlwinm r21,r30,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 + ctx.r27.u64;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// subf r27,r18,r15
	ctx.r27.u64 = ctx.r15.u64 - ctx.r18.u64;
	// rlwinm r18,r4,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 + ctx.r3.u64;
	// subf r26,r28,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r28.u64;
	// subf r25,r6,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r28,r30,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r30.u64;
	// srawi r5,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r20.s32 >> 2;
	// subf r30,r31,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r31.u64;
	// add r3,r23,r24
	ctx.r3.u64 = ctx.r23.u64 + ctx.r24.u64;
	// subf r24,r5,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lwz r5,20(r1)
	ctx.current_instruction = 0x880EFAFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r31,r25,r8
	ctx.r31.u64 = ctx.r25.u64 + ctx.r8.u64;
	// lwz r8,20(r11)
	ctx.current_instruction = 0x880EFB04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r27,r19,r18
	ctx.r27.u64 = ctx.r18.u64 - ctx.r19.u64;
	// lwz r22,8(r11)
	ctx.current_instruction = 0x880EFB0C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r19,12(r11)
	ctx.current_instruction = 0x880EFB10;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r21,r8,r26
	ctx.r21.u64 = ctx.r8.u64 + ctx.r26.u64;
	// lwz r18,0(r11)
	ctx.current_instruction = 0x880EFB18;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r23,r5,r27
	ctx.r23.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// lwz r25,16(r11)
	ctx.current_instruction = 0x880EFB20;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r24,r6
	ctx.r11.u64 = ctx.r24.u64 + ctx.r6.u64;
	// mullw r6,r22,r28
	ctx.r6.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r28.s32);
	// mullw r24,r19,r31
	ctx.r24.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r31.s32);
	// srawi r8,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r23.s32 >> 16;
	// mullw r23,r21,r18
	ctx.r23.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r18.s32);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// srawi r20,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r20.s64 = ctx.r24.s32 >> 16;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// mullw r24,r22,r30
	ctx.r24.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r30.s32);
	// srawi r21,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r21.s64 = ctx.r23.s32 >> 16;
	// srawi r22,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 16;
	// mullw r19,r19,r3
	ctx.r19.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r3.s32);
	// mullw r5,r25,r18
	ctx.r5.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r18.s32);
	// srawi r23,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r24.s32 >> 16;
	// srawi r25,r19,16
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFFFF) != 0);
	ctx.r25.s64 = ctx.r19.s32 >> 16;
	// srawi r24,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r5.s32 >> 16;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// add r5,r24,r4
	ctx.r5.u64 = ctx.r24.u64 + ctx.r4.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// sth r6,-78(r9)
	ctx.current_instruction = 0x880EFB74;
	REX_STORE_U16(ctx.r9.u32 + -78, ctx.r6.u16);
	// add r31,r20,r31
	ctx.r31.u64 = ctx.r20.u64 + ctx.r31.u64;
	// sth r5,-110(r9)
	ctx.current_instruction = 0x880EFB7C;
	REX_STORE_U16(ctx.r9.u32 + -110, ctx.r5.u16);
	// add r28,r21,r26
	ctx.r28.u64 = ctx.r21.u64 + ctx.r26.u64;
	// sth r8,-94(r9)
	ctx.current_instruction = 0x880EFB84;
	REX_STORE_U16(ctx.r9.u32 + -94, ctx.r8.u16);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// add r30,r23,r30
	ctx.r30.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r4,r25,r3
	ctx.r4.u64 = ctx.r25.u64 + ctx.r3.u64;
	// extsh r5,r31
	ctx.r5.s64 = ctx.r31.s16;
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r5,-62(r9)
	ctx.current_instruction = 0x880EFBA0;
	REX_STORE_U16(ctx.r9.u32 + -62, ctx.r5.u16);
	// extsh r8,r30
	ctx.r8.s64 = ctx.r30.s16;
	// sth r3,-46(r9)
	ctx.current_instruction = 0x880EFBA8;
	REX_STORE_U16(ctx.r9.u32 + -46, ctx.r3.u16);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// sth r11,-30(r9)
	ctx.current_instruction = 0x880EFBB0;
	REX_STORE_U16(ctx.r9.u32 + -30, ctx.r11.u16);
	// sth r8,-14(r9)
	ctx.current_instruction = 0x880EFBB4;
	REX_STORE_U16(ctx.r9.u32 + -14, ctx.r8.u16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// sthu r6,2(r9)
	ctx.current_instruction = 0x880EFBBC;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x880ef9b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EF9B4;
	// lwz r11,804(r1)
	ctx.current_instruction = 0x880EFBC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r10,40(r1)
	ctx.current_instruction = 0x880EFBD4;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r10.u32);
	// stw r9,44(r1)
	ctx.current_instruction = 0x880EFBD8;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r9.u32);
	// stw r11,36(r1)
	ctx.current_instruction = 0x880EFBDC;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r11.u32);
loc_880EFBE0:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r8,r11,310
	ctx.r8.s64 = ctx.r11.s64 + 310;
	// addi r10,r10,220
	ctx.r10.s64 = ctx.r10.s64 + 220;
	// addi r9,r11,54
	ctx.r9.s64 = ctx.r11.s64 + 54;
	// li r25,0
	ctx.r25.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880EFBF8:
	// lwz r28,-188(r10)
	ctx.current_instruction = 0x880EFBF8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + -188);
	// addi r6,r7,-384
	ctx.r6.s64 = ctx.r7.s64 + -384;
	// lwz r26,-156(r10)
	ctx.current_instruction = 0x880EFC00;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + -156);
	// rlwinm r11,r25,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xC0;
	// lwz r27,-60(r10)
	ctx.current_instruction = 0x880EFC08;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + -60);
	// lwz r29,-28(r10)
	ctx.current_instruction = 0x880EFC0C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + -28);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r23,r27,r26
	ctx.r23.u64 = ctx.r26.u64 - ctx.r27.u64;
	// lwz r31,-124(r10)
	ctx.current_instruction = 0x880EFC18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -124);
	// subf r4,r28,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lwz r3,-92(r10)
	ctx.current_instruction = 0x880EFC20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r30,-220(r10)
	ctx.current_instruction = 0x880EFC24;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + -220);
	// add r21,r27,r26
	ctx.r21.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r24,r4,r23
	ctx.r24.u64 = ctx.r4.u64 + ctx.r23.u64;
	// lwzu r6,4(r10)
	ctx.current_instruction = 0x880EFC30;
	ea = 4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// subf r5,r31,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r31.u64;
	// lwz r19,24(r11)
	ctx.current_instruction = 0x880EFC38;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r22,r24,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,32(r11)
	ctx.current_instruction = 0x880EFC40;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r20,r5,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,40(r11)
	ctx.current_instruction = 0x880EFC48;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r22,16(r1)
	ctx.current_instruction = 0x880EFC4C;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r22.u32);
	// subf r22,r6,r30
	ctx.r22.u64 = ctx.r30.u64 - ctx.r6.u64;
	// lwz r15,16(r1)
	ctx.current_instruction = 0x880EFC54;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// rotlwi r14,r20,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// stw r20,20(r1)
	ctx.current_instruction = 0x880EFC5C;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r20.u32);
	// add r20,r29,r28
	ctx.r20.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stw r19,16(r1)
	ctx.current_instruction = 0x880EFC64;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r19.u32);
	// rotlwi r19,r19,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// rlwinm r18,r22,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,20(r1)
	ctx.current_instruction = 0x880EFC70;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r19.u32);
	// subf r20,r20,r21
	ctx.r20.u64 = ctx.r21.u64 - ctx.r20.u64;
	// std r10,80(r1)
	ctx.current_instruction = 0x880EFC78;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// subf r23,r4,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r4.u64;
	// stw r18,16(r1)
	ctx.current_instruction = 0x880EFC80;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r18.u32);
	// rotlwi r21,r18,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// lwz r18,28(r11)
	ctx.current_instruction = 0x880EFC88;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r19,r3,r31
	ctx.r19.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r21,16(r1)
	ctx.current_instruction = 0x880EFC94;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r21.u32);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r4,r19
	ctx.r21.u64 = ctx.r19.u64 - ctx.r4.u64;
	// lwz r4,16(r1)
	ctx.current_instruction = 0x880EFCA0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// add r17,r17,r15
	ctx.r17.u64 = ctx.r17.u64 + ctx.r15.u64;
	// lwz r15,20(r1)
	ctx.current_instruction = 0x880EFCA8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// add r15,r15,r20
	ctx.r15.u64 = ctx.r15.u64 + ctx.r20.u64;
	// add r19,r22,r4
	ctx.r19.u64 = ctx.r22.u64 + ctx.r4.u64;
	// lwz r4,60(r11)
	ctx.current_instruction = 0x880EFCB4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// add r14,r5,r14
	ctx.r14.u64 = ctx.r5.u64 + ctx.r14.u64;
	// lwz r5,36(r11)
	ctx.current_instruction = 0x880EFCBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r18,r18,r21
	ctx.r18.u64 = ctx.r18.u64 + ctx.r21.u64;
	// srawi r15,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 2;
	// subf r17,r14,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r14.u64;
	// stw r4,24(r1)
	ctx.current_instruction = 0x880EFCCC;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r4.u32);
	// subf r4,r10,r16
	ctx.r4.u64 = ctx.r16.u64 - ctx.r10.u64;
	// srawi r18,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 2;
	// lwz r16,4(r11)
	ctx.current_instruction = 0x880EFCD8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r19,r4,r19
	ctx.r19.u64 = ctx.r4.u64 + ctx.r19.u64;
	// lwz r4,44(r11)
	ctx.current_instruction = 0x880EFCE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r14,r5,r24
	ctx.r14.u64 = ctx.r5.u64 + ctx.r24.u64;
	// stw r18,32(r1)
	ctx.current_instruction = 0x880EFCE8;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r18.u32);
	// add r10,r4,r23
	ctx.r10.u64 = ctx.r4.u64 + ctx.r23.u64;
	// srawi r5,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r17.s32 >> 2;
	// srawi r18,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r14.s32 >> 2;
	// srawi r4,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r19.s32 >> 2;
	// srawi r17,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r10.s32 >> 2;
	// subf r19,r18,r24
	ctx.r19.u64 = ctx.r24.u64 - ctx.r18.u64;
	// subf r23,r17,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r17.u64;
	// subf r24,r31,r3
	ctx.r24.u64 = ctx.r3.u64 - ctx.r31.u64;
	// add r22,r23,r22
	ctx.r22.u64 = ctx.r23.u64 + ctx.r22.u64;
	// lwz r23,48(r11)
	ctx.current_instruction = 0x880EFD10;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// stw r22,16(r1)
	ctx.current_instruction = 0x880EFD18;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r22.u32);
	// rlwinm r19,r21,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r23,r24
	ctx.r18.u64 = ctx.r23.u64 + ctx.r24.u64;
	// lwz r23,52(r11)
	ctx.current_instruction = 0x880EFD24;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r17,r23,r22
	ctx.r17.u64 = ctx.r23.u64 + ctx.r22.u64;
	// lwz r23,56(r11)
	ctx.current_instruction = 0x880EFD2C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// add r22,r3,r31
	ctx.r22.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r14,r23,r4
	ctx.r14.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r23,r6,r30
	ctx.r23.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,16(r11)
	ctx.current_instruction = 0x880EFD40;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 + ctx.r23.u64;
	// stw r14,48(r1)
	ctx.current_instruction = 0x880EFD48;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r14.u32);
	// lwz r14,16(r1)
	ctx.current_instruction = 0x880EFD4C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// add r23,r27,r26
	ctx.r23.u64 = ctx.r27.u64 + ctx.r26.u64;
	// stw r22,20(r1)
	ctx.current_instruction = 0x880EFD54;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r22.u32);
	// add r22,r29,r28
	ctx.r22.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r19,r19,r15
	ctx.r19.u64 = ctx.r15.u64 - ctx.r19.u64;
	// lwz r15,24(r1)
	ctx.current_instruction = 0x880EFD60;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// stw r24,16(r1)
	ctx.current_instruction = 0x880EFD64;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r24.u32);
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// lwz r24,20(r1)
	ctx.current_instruction = 0x880EFD6C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r22,r20,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r20,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r20.u64;
	// lwz r19,16(r1)
	ctx.current_instruction = 0x880EFD78;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// std r8,64(r1)
	ctx.current_instruction = 0x880EFD80;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r8.u64);
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,48(r1)
	ctx.current_instruction = 0x880EFD88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// stw r23,28(r1)
	ctx.current_instruction = 0x880EFD8C;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r23.u32);
	// srawi r17,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 1;
	// subf r18,r18,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r18.u64;
	// stw r10,24(r1)
	ctx.current_instruction = 0x880EFD98;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r10.u32);
	// lwz r10,28(r1)
	ctx.current_instruction = 0x880EFD9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r18,48(r1)
	ctx.current_instruction = 0x880EFDA0;
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r18.u32);
	// subf r18,r5,r15
	ctx.r18.u64 = ctx.r15.u64 - ctx.r5.u64;
	// add r15,r8,r5
	ctx.r15.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwz r8,48(r1)
	ctx.current_instruction = 0x880EFDAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// lwz r14,32(r1)
	ctx.current_instruction = 0x880EFDB0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// add r23,r23,r24
	ctx.r23.u64 = ctx.r23.u64 + ctx.r24.u64;
	// stw r17,20(r1)
	ctx.current_instruction = 0x880EFDB8;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r17.u32);
	// add r22,r14,r22
	ctx.r22.u64 = ctx.r14.u64 + ctx.r22.u64;
	// stw r23,32(r1)
	ctx.current_instruction = 0x880EFDC0;
	REX_STORE_U32(ctx.r1.u32 + 32, ctx.r23.u32);
	// stw r19,16(r1)
	ctx.current_instruction = 0x880EFDC4;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r19.u32);
	// add r19,r18,r4
	ctx.r19.u64 = ctx.r18.u64 + ctx.r4.u64;
	// subf r23,r21,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r21.u64;
	// lwz r17,8(r11)
	ctx.current_instruction = 0x880EFDD0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r22,r5,r4
	ctx.r22.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r18,12(r11)
	ctx.current_instruction = 0x880EFDD8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r14,0(r11)
	ctx.current_instruction = 0x880EFDE0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r21,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r15.s32 >> 1;
	// std r29,72(r1)
	ctx.current_instruction = 0x880EFDE8;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r29.u64);
	// stw r5,28(r1)
	ctx.current_instruction = 0x880EFDEC;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r5.u32);
	// srawi r19,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 1;
	// lwz r5,20(r11)
	ctx.current_instruction = 0x880EFDF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r8,r16,r8
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r8.s32);
	// stw r19,56(r1)
	ctx.current_instruction = 0x880EFDFC;
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r19.u32);
	// lwz r29,24(r1)
	ctx.current_instruction = 0x880EFE00;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// std r27,88(r1)
	ctx.current_instruction = 0x880EFE04;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// lwz r27,48(r1)
	ctx.current_instruction = 0x880EFE08;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// std r6,48(r1)
	ctx.current_instruction = 0x880EFE0C;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// rlwinm r19,r22,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r15,r17,r20
	ctx.r15.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r20.s32);
	// lwz r22,20(r1)
	ctx.current_instruction = 0x880EFE18;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,32(r1)
	ctx.current_instruction = 0x880EFE1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r6,16(r1)
	ctx.current_instruction = 0x880EFE20;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// stw r22,24(r1)
	ctx.current_instruction = 0x880EFE24;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r22.u32);
	// add r11,r21,r19
	ctx.r11.u64 = ctx.r21.u64 + ctx.r19.u64;
	// subf r22,r10,r24
	ctx.r22.u64 = ctx.r24.u64 - ctx.r10.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// mullw r24,r18,r11
	ctx.r24.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r11.s32);
	// stw r8,16(r1)
	ctx.current_instruction = 0x880EFE38;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
	// srawi r15,r15,16
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFFFF) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 16;
	// stw r15,20(r1)
	ctx.current_instruction = 0x880EFE40;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r15.u32);
	// lwz r15,28(r1)
	ctx.current_instruction = 0x880EFE44;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r24,r24,16
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 16;
	// stw r24,28(r1)
	ctx.current_instruction = 0x880EFE4C;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r24.u32);
	// add r19,r5,r22
	ctx.r19.u64 = ctx.r5.u64 + ctx.r22.u64;
	// rlwinm r21,r15,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,56(r1)
	ctx.current_instruction = 0x880EFE58;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r5,r15,r21
	ctx.r5.u64 = ctx.r21.u64 - ctx.r15.u64;
	// lwz r15,24(r1)
	ctx.current_instruction = 0x880EFE64;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// mullw r21,r19,r14
	ctx.r21.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r14.s32);
	// add r24,r15,r29
	ctx.r24.u64 = ctx.r15.u64 + ctx.r29.u64;
	// mullw r19,r16,r5
	ctx.r19.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r5.s32);
	// lwz r8,20(r1)
	ctx.current_instruction = 0x880EFE74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r29,28(r1)
	ctx.current_instruction = 0x880EFE78;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r15,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r15.s64 = ctx.r21.s32 >> 16;
	// mullw r17,r17,r23
	ctx.r17.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r23.s32);
	// mullw r21,r18,r24
	ctx.r21.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r24.s32);
	// mullw r18,r6,r14
	ctx.r18.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r14.s32);
	// ld r6,48(r1)
	ctx.current_instruction = 0x880EFE90;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// srawi r16,r19,16
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0xFFFF) != 0);
	ctx.r16.s64 = ctx.r19.s32 >> 16;
	// srawi r17,r17,16
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xFFFF) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 16;
	// srawi r19,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r19.s64 = ctx.r21.s32 >> 16;
	// srawi r18,r18,16
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFFFF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 16;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ld r29,72(r1)
	ctx.current_instruction = 0x880EFEA8;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// add r4,r18,r4
	ctx.r4.u64 = ctx.r18.u64 + ctx.r4.u64;
	// add r21,r10,r27
	ctx.r21.u64 = ctx.r10.u64 + ctx.r27.u64;
	// sth r11,-30(r9)
	ctx.current_instruction = 0x880EFEB4;
	REX_STORE_U16(ctx.r9.u32 + -30, ctx.r11.u16);
	// add r23,r17,r23
	ctx.r23.u64 = ctx.r17.u64 + ctx.r23.u64;
	// sth r4,-54(r9)
	ctx.current_instruction = 0x880EFEBC;
	REX_STORE_U16(ctx.r9.u32 + -54, ctx.r4.u16);
	// sth r21,-46(r9)
	ctx.current_instruction = 0x880EFEC0;
	REX_STORE_U16(ctx.r9.u32 + -46, ctx.r21.u16);
	// rlwinm r11,r25,5,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 5) & 0x60;
	// sth r23,-6(r9)
	ctx.current_instruction = 0x880EFEC8;
	REX_STORE_U16(ctx.r9.u32 + -6, ctx.r23.u16);
	// add r5,r16,r5
	ctx.r5.u64 = ctx.r16.u64 + ctx.r5.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// ld r27,88(r1)
	ctx.current_instruction = 0x880EFED4;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// add r4,r15,r22
	ctx.r4.u64 = ctx.r15.u64 + ctx.r22.u64;
	// sth r5,-14(r9)
	ctx.current_instruction = 0x880EFEDC;
	REX_STORE_U16(ctx.r9.u32 + -14, ctx.r5.u16);
	// add r20,r8,r20
	ctx.r20.u64 = ctx.r8.u64 + ctx.r20.u64;
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// sth r4,-22(r9)
	ctx.current_instruction = 0x880EFEE8;
	REX_STORE_U16(ctx.r9.u32 + -22, ctx.r4.u16);
	// sth r20,-38(r9)
	ctx.current_instruction = 0x880EFEEC;
	REX_STORE_U16(ctx.r9.u32 + -38, ctx.r20.u16);
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// sthu r24,2(r9)
	ctx.current_instruction = 0x880EFEF4;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r24.u16);
	ctx.r9.u32 = ea;
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// subf r30,r31,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r24,r4,r5
	ctx.r24.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r5,r26,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r26.u64;
	// rlwinm r20,r31,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r5,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r5.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r4,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r4,r30
	ctx.r28.u64 = ctx.r4.u64 + ctx.r30.u64;
	// rlwinm r26,r24,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r5,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,8(r11)
	ctx.current_instruction = 0x880EFF2C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r23,20(r11)
	ctx.current_instruction = 0x880EFF30;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r21,r5,r21
	ctx.r21.u64 = ctx.r5.u64 + ctx.r21.u64;
	// lwz r16,12(r11)
	ctx.current_instruction = 0x880EFF38;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r18,4(r11)
	ctx.current_instruction = 0x880EFF3C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,16(r11)
	ctx.current_instruction = 0x880EFF40;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r31,r22
	ctx.r4.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r30,r24,r23
	ctx.r30.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lwz r24,24(r11)
	ctx.current_instruction = 0x880EFF4C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// srawi r31,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 3;
	// lwz r15,0(r11)
	ctx.current_instruction = 0x880EFF54;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// add r4,r28,r24
	ctx.r4.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lwz r26,28(r11)
	ctx.current_instruction = 0x880EFF64;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// subf r28,r6,r3
	ctx.r28.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
	// add r14,r21,r26
	ctx.r14.u64 = ctx.r21.u64 + ctx.r26.u64;
	// add r31,r31,r20
	ctx.r31.u64 = ctx.r31.u64 + ctx.r20.u64;
	// srawi r21,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r4.s32 >> 2;
	// rlwinm r20,r5,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r11,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r11.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r3,r29,r27
	ctx.r3.u64 = ctx.r29.u64 + ctx.r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r14,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 2;
	// add r4,r21,r20
	ctx.r4.u64 = ctx.r21.u64 + ctx.r20.u64;
	// rlwinm r21,r5,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r3,r6
	ctx.r29.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r28,r14,r19
	ctx.r28.u64 = ctx.r19.u64 - ctx.r14.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r3,r5,r21
	ctx.r3.u64 = ctx.r5.u64 + ctx.r21.u64;
	// mullw r20,r4,r18
	ctx.r20.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r18.s32);
	// mullw r14,r30,r17
	ctx.r14.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// mullw r21,r28,r16
	ctx.r21.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r16.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r22,r29,r22
	ctx.r22.u64 = ctx.r29.u64 + ctx.r22.u64;
	// srawi r19,r20,16
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFFFF) != 0);
	ctx.r19.s64 = ctx.r20.s32 >> 16;
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + ctx.r23.u64;
	// srawi r20,r14,16
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0xFFFF) != 0);
	ctx.r20.s64 = ctx.r14.s32 >> 16;
	// add r14,r3,r24
	ctx.r14.u64 = ctx.r3.u64 + ctx.r24.u64;
	// srawi r21,r21,16
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFFFF) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 16;
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r22,3
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r22.s32 >> 3;
	// add r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 + ctx.r26.u64;
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// ld r10,80(r1)
	ctx.current_instruction = 0x880EFFE8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r27,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r14.s32 >> 2;
	// add r11,r24,r23
	ctx.r11.u64 = ctx.r24.u64 + ctx.r23.u64;
	// srawi r24,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 2;
	// ld r8,64(r1)
	ctx.current_instruction = 0x880F0000;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// rlwinm r23,r5,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r6,r27,r26
	ctx.r6.u64 = ctx.r27.u64 + ctx.r26.u64;
	// mullw r29,r11,r15
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// subf r3,r24,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r24.u64;
	// mullw r27,r6,r18
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r18.s32);
	// srawi r23,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r29.s32 >> 16;
	// mullw r26,r5,r17
	ctx.r26.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r17.s32);
	// mullw r29,r3,r16
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r16.s32);
	// srawi r24,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r27.s32 >> 16;
	// mullw r22,r31,r15
	ctx.r22.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r15.s32);
	// srawi r26,r26,16
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 16;
	// srawi r27,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r29.s32 >> 16;
	// srawi r22,r22,16
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 16;
	// add r4,r19,r4
	ctx.r4.u64 = ctx.r19.u64 + ctx.r4.u64;
	// add r30,r20,r30
	ctx.r30.u64 = ctx.r20.u64 + ctx.r30.u64;
	// add r31,r22,r31
	ctx.r31.u64 = ctx.r22.u64 + ctx.r31.u64;
	// sth r4,-46(r8)
	ctx.current_instruction = 0x880F0048;
	REX_STORE_U16(ctx.r8.u32 + -46, ctx.r4.u16);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r6,r24,r6
	ctx.r6.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r29,r21,r28
	ctx.r29.u64 = ctx.r21.u64 + ctx.r28.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// sth r29,-30(r8)
	ctx.current_instruction = 0x880F0068;
	REX_STORE_U16(ctx.r8.u32 + -30, ctx.r29.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r31,-54(r8)
	ctx.current_instruction = 0x880F0070;
	REX_STORE_U16(ctx.r8.u32 + -54, ctx.r31.u16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// sth r30,-38(r8)
	ctx.current_instruction = 0x880F0078;
	REX_STORE_U16(ctx.r8.u32 + -38, ctx.r30.u16);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// sth r11,-22(r8)
	ctx.current_instruction = 0x880F0080;
	REX_STORE_U16(ctx.r8.u32 + -22, ctx.r11.u16);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sth r6,-14(r8)
	ctx.current_instruction = 0x880F0088;
	REX_STORE_U16(ctx.r8.u32 + -14, ctx.r6.u16);
	// sth r5,-6(r8)
	ctx.current_instruction = 0x880F008C;
	REX_STORE_U16(ctx.r8.u32 + -6, ctx.r5.u16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// sthu r4,2(r8)
	ctx.current_instruction = 0x880F0094;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x880efbf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EFBF8;
	// lwz r11,44(r1)
	ctx.current_instruction = 0x880F009C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r10,36(r1)
	ctx.current_instruction = 0x880F00A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r8,40(r1)
	ctx.current_instruction = 0x880F00A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r10,64
	ctx.r11.s64 = ctx.r10.s64 + 64;
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// stw r9,44(r1)
	ctx.current_instruction = 0x880F00B4;
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r9.u32);
	// stw r11,36(r1)
	ctx.current_instruction = 0x880F00B8;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r11.u32);
	// stw r10,40(r1)
	ctx.current_instruction = 0x880F00BC;
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r10.u32);
	// bne 0x880efbe0
	if (!ctx.cr0.eq) goto loc_880EFBE0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881181A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881181A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881181A8) {
			switch (rex_dispatch_address) {
				case 0x88118224:
				case 0x88118250:
				case 0x88118280:
				case 0x88118298:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881181A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88118224: goto loc_88118224;
		case 0x88118250: goto loc_88118250;
		case 0x88118280: goto loc_88118280;
		case 0x88118298: goto loc_88118298;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881181AC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881181B0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881181B4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// lwz r11,204(r1)
	ctx.current_instruction = 0x881181BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// ori r10,r10,13392
	ctx.r10.u64 = ctx.r10.u64 | 13392;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,-11904(r31)
	ctx.current_instruction = 0x881181D4;
	REX_STORE_U8(ctx.r31.u32 + -11904, ctx.r10.u8);
	// stw r7,112(r3)
	ctx.current_instruction = 0x881181D8;
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// stw r8,116(r3)
	ctx.current_instruction = 0x881181DC;
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// stw r9,120(r3)
	ctx.current_instruction = 0x881181E0;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stw r4,100(r3)
	ctx.current_instruction = 0x881181E4;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stw r5,104(r3)
	ctx.current_instruction = 0x881181E8;
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// stw r6,108(r3)
	ctx.current_instruction = 0x881181EC;
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// lbz r9,-11904(r31)
	ctx.current_instruction = 0x881181F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + -11904);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88118298
	if (!ctx.cr6.eq) goto loc_88118298;
	// lis r10,20532
	ctx.r10.s64 = 1345585152;
	// ori r9,r10,12850
	ctx.r9.u64 = ctx.r10.u64 | 12850;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88118298
	if (ctx.cr6.eq) goto loc_88118298;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r9,r10,21849
	ctx.r9.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88118238
	if (!ctx.cr6.eq) goto loc_88118238;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x881165d0
	ctx.lr = 0x88118224;
	sub_881165D0(ctx, base);
loc_88118224:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88118228;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88118230;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88118238:
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r9,r10,22869
	ctx.r9.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88118264
	if (!ctx.cr6.eq) goto loc_88118264;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x881165d0
	ctx.lr = 0x88118250;
	sub_881165D0(ctx, base);
loc_88118250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88118254;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8811825C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88118264:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88118294
	if (ctx.cr6.eq) goto loc_88118294;
	// lis r10,16729
	ctx.r10.s64 = 1096351744;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x88118294
	if (ctx.cr6.eq) goto loc_88118294;
	// bl 0x88113c58
	ctx.lr = 0x88118280;
	sub_88113C58(ctx, base);
loc_88118280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88118284;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8811828C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88118294:
	// bl 0x881157f8
	ctx.lr = 0x88118298;
	sub_881157F8(ctx, base);
loc_88118298:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8811829C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881182A4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88119390) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88119390;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88119390) {
			switch (rex_dispatch_address) {
				case 0x88119398:
				case 0x8811948C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88119390;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88119398: goto loc_88119398;
		case 0x8811948C: goto loc_8811948C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x88119398;
	__savegprlr_25(ctx, base);
loc_88119398:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88119398;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	ctx.current_instruction = 0x8811939C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x881193e4
	if (ctx.cr6.eq) goto loc_881193E4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881193e4
	if (ctx.cr6.eq) goto loc_881193E4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881193e4
	if (ctx.cr6.eq) goto loc_881193E4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881193e4
	if (ctx.cr6.eq) goto loc_881193E4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881193f4
	if (!ctx.cr6.eq) goto loc_881193F4;
loc_881193E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881193F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	ctx.current_instruction = 0x881193F8;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.current_instruction = 0x881193FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x88119458
	if (ctx.cr6.lt) goto loc_88119458;
	// lwz r8,0(r30)
	ctx.current_instruction = 0x88119408;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,3(r8)
	ctx.current_instruction = 0x8811940C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r11,2(r8)
	ctx.current_instruction = 0x88119410;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r9,1(r8)
	ctx.current_instruction = 0x88119418;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r8,0(r8)
	ctx.current_instruction = 0x8811941C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r4,0(r28)
	ctx.current_instruction = 0x88119434;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88119438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	ctx.current_instruction = 0x88119440;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88119444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r31)
	ctx.current_instruction = 0x8811944C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_88119458:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8811945C:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8811945C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x881194b8
	if (!ctx.cr6.eq) goto loc_881194B8;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x88119468;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,0(r26)
	ctx.current_instruction = 0x88119474;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88119480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811948C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811948C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811951c
	if (ctx.cr6.lt) goto loc_8811951C;
	// ld r9,8(r27)
	ctx.current_instruction = 0x88119494;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r27.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8811949C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r27)
	ctx.current_instruction = 0x881194A4;
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r26)
	ctx.current_instruction = 0x881194A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,0(r31)
	ctx.current_instruction = 0x881194AC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,0(r26)
	ctx.current_instruction = 0x881194B4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
loc_881194B8:
	// lwz r8,0(r30)
	ctx.current_instruction = 0x881194B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// lwz r7,0(r28)
	ctx.current_instruction = 0x881194C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// extsb r9,r29
	ctx.r9.s64 = ctx.r29.s8;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r8,r11
	ctx.current_instruction = 0x881194D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r5
	ctx.r29.s64 = ctx.r5.s8;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// stw r9,0(r28)
	ctx.current_instruction = 0x881194EC;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// extsb r25,r6
	ctx.r25.s64 = ctx.r6.s8;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x881194F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r7,0(r31)
	ctx.current_instruction = 0x88119500;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x8811945c
	if (ctx.cr6.lt) goto loc_8811945C;
	// lwz r10,0(r30)
	ctx.current_instruction = 0x8811950C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	ctx.current_instruction = 0x88119518;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8811951C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811DFF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811DFF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811DFF8) {
			switch (rex_dispatch_address) {
				case 0x8811E000:
				case 0x8811E044:
				case 0x8811E080:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811DFF8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811E000: goto loc_8811E000;
		case 0x8811E044: goto loc_8811E044;
		case 0x8811E080: goto loc_8811E080;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8811E000;
	__savegprlr_26(ctx, base);
loc_8811E000:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8811E000;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r28,28(r3)
	ctx.current_instruction = 0x8811E008;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,0(r5)
	ctx.current_instruction = 0x8811E010;
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// sth r11,0(r6)
	ctx.current_instruction = 0x8811E018;
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r7)
	ctx.current_instruction = 0x8811E020;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8811E028;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8811E030;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r9,4(r28)
	ctx.current_instruction = 0x8811E038;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,124(r9)
	ctx.current_instruction = 0x8811E03C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// bl 0x880cb730
	ctx.lr = 0x8811E044;
	sub_880CB730(ctx, base);
loc_8811E044:
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r31,r8,22
	ctx.r31.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8811e060
	if (!ctx.cr6.eq) goto loc_8811E060;
loc_8811E054:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811E060:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811E060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x8811E06C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r29)
	ctx.current_instruction = 0x8811E070;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.current_instruction = 0x8811E074;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r3,128(r9)
	ctx.current_instruction = 0x8811E078;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// bl 0x880cb730
	ctx.lr = 0x8811E080;
	sub_880CB730(ctx, base);
loc_8811E080:
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8811e054
	if (ctx.cr6.eq) goto loc_8811E054;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811E088;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,84(r11)
	ctx.current_instruction = 0x8811E08C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 84);
	// sth r10,0(r27)
	ctx.current_instruction = 0x8811E090;
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
	// lhz r9,86(r11)
	ctx.current_instruction = 0x8811E094;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 86);
	// sth r9,0(r26)
	ctx.current_instruction = 0x8811E098;
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r9.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811EC48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811EC48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811EC48) {
			switch (rex_dispatch_address) {
				case 0x8811EC50:
				case 0x8811EC80:
				case 0x8811EC98:
				case 0x8811ED54:
				case 0x8811ED70:
				case 0x8811ED88:
				case 0x8811EDA4:
				case 0x8811EE14:
				case 0x8811EE3C:
				case 0x8811EE60:
				case 0x8811EE80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811EC48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811EC50: goto loc_8811EC50;
		case 0x8811EC80: goto loc_8811EC80;
		case 0x8811EC98: goto loc_8811EC98;
		case 0x8811ED54: goto loc_8811ED54;
		case 0x8811ED70: goto loc_8811ED70;
		case 0x8811ED88: goto loc_8811ED88;
		case 0x8811EDA4: goto loc_8811EDA4;
		case 0x8811EE14: goto loc_8811EE14;
		case 0x8811EE3C: goto loc_8811EE3C;
		case 0x8811EE60: goto loc_8811EE60;
		case 0x8811EE80: goto loc_8811EE80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8811EC50;
	__savegprlr_27(ctx, base);
loc_8811EC50:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8811EC50;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	ctx.current_instruction = 0x8811EC5C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x880cb2c0
	ctx.lr = 0x8811EC80;
	sub_880CB2C0(ctx, base);
loc_8811EC80:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ee80
	if (ctx.cr6.lt) goto loc_8811EE80;
	// li r5,240
	ctx.r5.s64 = 240;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8811EC8C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8811EC98;
	sub_88052D90(ctx, base);
loc_8811EC98:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811EC98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r11)
	ctx.current_instruction = 0x8811ECA8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811ECAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,4(r10)
	ctx.current_instruction = 0x8811ECB0;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811ECB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r31,8(r9)
	ctx.current_instruction = 0x8811ECB8;
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r31.u64);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811ECBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r31,16(r8)
	ctx.current_instruction = 0x8811ECC0;
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811ECC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r31,24(r7)
	ctx.current_instruction = 0x8811ECC8;
	REX_STORE_U64(ctx.r7.u32 + 24, ctx.r31.u64);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811ECCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r31,32(r6)
	ctx.current_instruction = 0x8811ECD0;
	REX_STORE_U64(ctx.r6.u32 + 32, ctx.r31.u64);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811ECD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r31,40(r11)
	ctx.current_instruction = 0x8811ECD8;
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r31.u64);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811ECDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,184(r10)
	ctx.current_instruction = 0x8811ECE0;
	REX_STORE_U32(ctx.r10.u32 + 184, ctx.r31.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811ECE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,188(r9)
	ctx.current_instruction = 0x8811ECE8;
	REX_STORE_U32(ctx.r9.u32 + 188, ctx.r31.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811ECEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,192(r8)
	ctx.current_instruction = 0x8811ECF0;
	REX_STORE_U32(ctx.r8.u32 + 192, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811ECF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,196(r7)
	ctx.current_instruction = 0x8811ECF8;
	REX_STORE_U8(ctx.r7.u32 + 196, ctx.r31.u8);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811ECFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,200(r6)
	ctx.current_instruction = 0x8811ED00;
	REX_STORE_U32(ctx.r6.u32 + 200, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811ED04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,208(r11)
	ctx.current_instruction = 0x8811ED08;
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811ED0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,212(r10)
	ctx.current_instruction = 0x8811ED10;
	REX_STORE_U32(ctx.r10.u32 + 212, ctx.r31.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811ED14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,216(r9)
	ctx.current_instruction = 0x8811ED18;
	REX_STORE_U32(ctx.r9.u32 + 216, ctx.r31.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811ED1C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,220(r8)
	ctx.current_instruction = 0x8811ED20;
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811ED24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,204(r7)
	ctx.current_instruction = 0x8811ED28;
	REX_STORE_U32(ctx.r7.u32 + 204, ctx.r31.u32);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811ED2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,224(r6)
	ctx.current_instruction = 0x8811ED30;
	REX_STORE_U32(ctx.r6.u32 + 224, ctx.r30.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811ED34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,228(r11)
	ctx.current_instruction = 0x8811ED38;
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811ED3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,232(r10)
	ctx.current_instruction = 0x8811ED40;
	REX_STORE_U32(ctx.r10.u32 + 232, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811ED44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// stw r11,28(r27)
	ctx.current_instruction = 0x8811ED4C;
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// bl 0x880cb2c0
	ctx.lr = 0x8811ED54;
	sub_880CB2C0(ctx, base);
loc_8811ED54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ee80
	if (ctx.cr6.lt) goto loc_8811EE80;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811ED5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r11)
	ctx.current_instruction = 0x8811ED68;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x88052d90
	ctx.lr = 0x8811ED70;
	sub_88052D90(ctx, base);
loc_8811ED70:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811ED70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r10,52
	ctx.r6.s64 = ctx.r10.s64 + 52;
	// bl 0x880cb2c0
	ctx.lr = 0x8811ED88;
	sub_880CB2C0(ctx, base);
loc_8811ED88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ee80
	if (ctx.cr6.lt) goto loc_8811EE80;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811ED90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r11)
	ctx.current_instruction = 0x8811ED9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x88052d90
	ctx.lr = 0x8811EDA4;
	sub_88052D90(ctx, base);
loc_8811EDA4:
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811EDA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-30702
	ctx.r10.s64 = -2012086272;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r10,-7448
	ctx.r4.s64 = ctx.r10.s64 + -7448;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,56(r9)
	ctx.current_instruction = 0x8811EDBC;
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r31.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811EDC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,60(r8)
	ctx.current_instruction = 0x8811EDC4;
	REX_STORE_U32(ctx.r8.u32 + 60, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811EDC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r31,64(r7)
	ctx.current_instruction = 0x8811EDCC;
	REX_STORE_U16(ctx.r7.u32 + 64, ctx.r31.u16);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EDD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,68(r5)
	ctx.current_instruction = 0x8811EDD4;
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811EDD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,72(r10)
	ctx.current_instruction = 0x8811EDDC;
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r31.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811EDE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,76(r9)
	ctx.current_instruction = 0x8811EDE4;
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811EDE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r8)
	ctx.current_instruction = 0x8811EDEC;
	REX_STORE_U32(ctx.r8.u32 + 80, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811EDF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,112(r7)
	ctx.current_instruction = 0x8811EDF4;
	REX_STORE_U32(ctx.r7.u32 + 112, ctx.r31.u32);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EDF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r5)
	ctx.current_instruction = 0x8811EDFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,0(r10)
	ctx.current_instruction = 0x8811EE00;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EE04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r5)
	ctx.current_instruction = 0x8811EE08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r7,r11,124
	ctx.r7.s64 = ctx.r11.s64 + 124;
	// bl 0x880cb590
	ctx.lr = 0x8811EE14;
	sub_880CB590(ctx, base);
loc_8811EE14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ee80
	if (ctx.cr6.lt) goto loc_8811EE80;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EE1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// li r6,88
	ctx.r6.s64 = 88;
	// addi r4,r11,-7264
	ctx.r4.s64 = ctx.r11.s64 + -7264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r5)
	ctx.current_instruction = 0x8811EE30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// bl 0x880cb590
	ctx.lr = 0x8811EE3C;
	sub_880CB590(ctx, base);
loc_8811EE3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ee80
	if (ctx.cr6.lt) goto loc_8811EE80;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EE44;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r7,r5,148
	ctx.r7.s64 = ctx.r5.s64 + 148;
	// addi r4,r11,-7040
	ctx.r4.s64 = ctx.r11.s64 + -7040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cb590
	ctx.lr = 0x8811EE60;
	sub_880CB590(ctx, base);
loc_8811EE60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ee80
	if (ctx.cr6.lt) goto loc_8811EE80;
	// lis r11,-30702
	ctx.r11.s64 = -2012086272;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811EE6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,-7888
	ctx.r5.s64 = ctx.r11.s64 + -7888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880cadd8
	ctx.lr = 0x8811EE80;
	sub_880CADD8(ctx, base);
loc_8811EE80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88123B50) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88123B50);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88123B50;
	ctx.current_instruction = 0x88123B50;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r5)
	ctx.current_instruction = 0x88123B54;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r11,44(r3)
	ctx.current_instruction = 0x88123B58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88123B5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88123b74
	if (!ctx.cr6.eq) goto loc_88123B74;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88123B74:
	// lwz r11,8(r11)
	ctx.current_instruction = 0x88123B74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88123ba4
	if (ctx.cr6.eq) goto loc_88123BA4;
loc_88123B80:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x88123b9c
	if (ctx.cr6.eq) goto loc_88123B9C;
	// lwz r11,40(r11)
	ctx.current_instruction = 0x88123B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88123b80
	if (!ctx.cr6.eq) goto loc_88123B80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88123B9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x88123BA0;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_88123BA4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88124538) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88124538;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88124538) {
			switch (rex_dispatch_address) {
				case 0x88124540:
				case 0x88124578:
				case 0x881245BC:
				case 0x88124604:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124538;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88124540: goto loc_88124540;
		case 0x88124578: goto loc_88124578;
		case 0x881245BC: goto loc_881245BC;
		case 0x88124604: goto loc_88124604;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88124540;
	__savegprlr_28(ctx, base);
loc_88124540:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88124540;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88124554;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	ctx.current_instruction = 0x8812455C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,0(r28)
	ctx.current_instruction = 0x88124560;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	ctx.current_instruction = 0x88124568;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x8812456C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124570;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88123b50
	ctx.lr = 0x88124578;
	sub_88123B50(ctx, base);
loc_88124578:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881246d0
	if (ctx.cr6.lt) goto loc_881246D0;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88124580;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812459c
	if (!ctx.cr6.eq) goto loc_8812459C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8812459C:
	// lwz r11,28(r7)
	ctx.current_instruction = 0x8812459C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881246c8
	if (ctx.cr6.eq) goto loc_881246C8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r7)
	ctx.current_instruction = 0x881245AC;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881241a0
	ctx.lr = 0x881245BC;
	sub_881241A0(ctx, base);
loc_881245BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881246d0
	if (ctx.cr6.lt) goto loc_881246D0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881245C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881245e0
	if (!ctx.cr6.eq) goto loc_881245E0;
loc_881245D0:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_881245E0:
	// lwz r11,8(r7)
	ctx.current_instruction = 0x881245E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r29,88(r1)
	ctx.current_instruction = 0x881245E4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88124630
	if (ctx.cr6.eq) goto loc_88124630;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r7)
	ctx.current_instruction = 0x881245F4;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881241a0
	ctx.lr = 0x88124604;
	sub_881241A0(ctx, base);
loc_88124604:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881246d0
	if (ctx.cr6.lt) goto loc_881246D0;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812460C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881245d0
	if (ctx.cr6.eq) goto loc_881245D0;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x88124618;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x88124630
	if (ctx.cr6.eq) goto loc_88124630;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88124624;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	ctx.current_instruction = 0x8812462C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_88124630:
	// lwz r9,0(r29)
	ctx.current_instruction = 0x88124630;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// ld r11,0(r7)
	ctx.current_instruction = 0x88124634;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r8,28(r7)
	ctx.current_instruction = 0x88124638;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r10,4(r9)
	ctx.current_instruction = 0x88124640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.current_instruction = 0x88124644;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x88124668
	if (!ctx.cr6.lt) goto loc_88124668;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88124668:
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r30)
	ctx.current_instruction = 0x8812466C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r7)
	ctx.current_instruction = 0x88124670;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r5,28(r7)
	ctx.current_instruction = 0x8812467C;
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// lwz r11,0(r29)
	ctx.current_instruction = 0x88124680;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// ld r6,0(r7)
	ctx.current_instruction = 0x88124684;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8812468C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.current_instruction = 0x88124690;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r6,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r6.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r28)
	ctx.current_instruction = 0x881246A0;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// lwz r4,28(r7)
	ctx.current_instruction = 0x881246A4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// ld r11,0(r7)
	ctx.current_instruction = 0x881246A8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,16(r7)
	ctx.current_instruction = 0x881246AC;
	REX_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// stw r9,8(r7)
	ctx.current_instruction = 0x881246B0;
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,0(r30)
	ctx.current_instruction = 0x881246B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r7)
	ctx.current_instruction = 0x881246C0;
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne cr6,0x881246d0
	if (!ctx.cr6.eq) goto loc_881246D0;
loc_881246C8:
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_881246D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127F00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88127F00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127F00;
	ctx.current_instruction = 0x88127F00;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r10,r11,r3
	ctx.current_instruction = 0x88127F08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88128A58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88128A58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88128A58) {
			switch (rex_dispatch_address) {
				case 0x88128A6C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88128A58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88128A6C: goto loc_88128A6C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88128A5C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88128A60;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x881289b8
	ctx.lr = 0x88128A6C;
	sub_881289B8(ctx, base);
loc_88128A6C:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lhz r7,110(r6)
	ctx.current_instruction = 0x88128A70;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 110);
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// addi r9,r11,17088
	ctx.r9.s64 = ctx.r11.s64 + 17088;
	// addi r8,r10,15896
	ctx.r8.s64 = ctx.r10.s64 + 15896;
	// stw r9,496(r6)
	ctx.current_instruction = 0x88128A80;
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r9.u32);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// stw r8,516(r6)
	ctx.current_instruction = 0x88128A88;
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r8.u32);
	// bgt cr6,0x88128ab4
	if (ctx.cr6.gt) goto loc_88128AB4;
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// lis r9,-30700
	ctx.r9.s64 = -2011955200;
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// addi r7,r11,1592
	ctx.r7.s64 = ctx.r11.s64 + 1592;
	// addi r5,r10,2656
	ctx.r5.s64 = ctx.r10.s64 + 2656;
	// addi r4,r9,4584
	ctx.r4.s64 = ctx.r9.s64 + 4584;
	// addi r3,r8,5568
	ctx.r3.s64 = ctx.r8.s64 + 5568;
	// b 0x88128ad4
	goto loc_88128AD4;
loc_88128AB4:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// lis r9,-30700
	ctx.r9.s64 = -2011955200;
	// lis r8,-30700
	ctx.r8.s64 = -2011955200;
	// addi r7,r11,2136
	ctx.r7.s64 = ctx.r11.s64 + 2136;
	// addi r5,r10,3408
	ctx.r5.s64 = ctx.r10.s64 + 3408;
	// addi r4,r9,6056
	ctx.r4.s64 = ctx.r9.s64 + 6056;
	// addi r3,r8,6992
	ctx.r3.s64 = ctx.r8.s64 + 6992;
loc_88128AD4:
	// lwz r11,280(r6)
	ctx.current_instruction = 0x88128AD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 280);
	// stw r3,512(r6)
	ctx.current_instruction = 0x88128AD8;
	REX_STORE_U32(ctx.r6.u32 + 512, ctx.r3.u32);
	// stw r4,508(r6)
	ctx.current_instruction = 0x88128ADC;
	REX_STORE_U32(ctx.r6.u32 + 508, ctx.r4.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r5,504(r6)
	ctx.current_instruction = 0x88128AE4;
	REX_STORE_U32(ctx.r6.u32 + 504, ctx.r5.u32);
	// stw r7,500(r6)
	ctx.current_instruction = 0x88128AE8;
	REX_STORE_U32(ctx.r6.u32 + 500, ctx.r7.u32);
	// bne cr6,0x88128b10
	if (!ctx.cr6.eq) goto loc_88128B10;
	// lwz r11,40(r6)
	ctx.current_instruction = 0x88128AF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88128b04
	if (!ctx.cr6.eq) goto loc_88128B04;
	// stw r11,476(r6)
	ctx.current_instruction = 0x88128AFC;
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r11.u32);
	// b 0x88128b1c
	goto loc_88128B1C;
loc_88128B04:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r10,r11,10584
	ctx.r10.s64 = ctx.r11.s64 + 10584;
	// b 0x88128b18
	goto loc_88128B18;
loc_88128B10:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// addi r10,r11,30000
	ctx.r10.s64 = ctx.r11.s64 + 30000;
loc_88128B18:
	// stw r10,476(r6)
	ctx.current_instruction = 0x88128B18;
	REX_STORE_U32(ctx.r6.u32 + 476, ctx.r10.u32);
loc_88128B1C:
	// lis r11,-30700
	ctx.r11.s64 = -2011955200;
	// lis r10,-30700
	ctx.r10.s64 = -2011955200;
	// addi r9,r11,27456
	ctx.r9.s64 = ctx.r11.s64 + 27456;
	// addi r8,r10,28920
	ctx.r8.s64 = ctx.r10.s64 + 28920;
	// stw r9,516(r6)
	ctx.current_instruction = 0x88128B2C;
	REX_STORE_U32(ctx.r6.u32 + 516, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,496(r6)
	ctx.current_instruction = 0x88128B34;
	REX_STORE_U32(ctx.r6.u32 + 496, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88128B3C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812BD48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812BD48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812BD48) {
			switch (rex_dispatch_address) {
				case 0x8812BE08:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812BD48;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812BE08: goto loc_8812BE08;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812BD4C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8812BD50;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8812BD54;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8812BD58;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x8812BD5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x8812BD68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.current_instruction = 0x8812BD6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x8812bd98
	if (ctx.cr6.gt) goto loc_8812BD98;
	// lwz r10,212(r11)
	ctx.current_instruction = 0x8812BD78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812bd90
	if (ctx.cr6.eq) goto loc_8812BD90;
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8812BD84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// b 0x8812bdb4
	goto loc_8812BDB4;
loc_8812BD90:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8812bdb8
	goto loc_8812BDB8;
loc_8812BD98:
	// lwz r10,604(r11)
	ctx.current_instruction = 0x8812BD98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x8812BD9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8812bdb0
	if (ctx.cr6.eq) goto loc_8812BDB0;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x8812bdb4
	goto loc_8812BDB4;
loc_8812BDB0:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_8812BDB4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_8812BDB8:
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8812BDB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r10,29,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// lwz r7,24(r31)
	ctx.current_instruction = 0x8812BDC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,44(r31)
	ctx.current_instruction = 0x8812BDCC;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r8,48(r31)
	ctx.current_instruction = 0x8812BDD4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	ctx.current_instruction = 0x8812BDDC;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r5,32(r31)
	ctx.current_instruction = 0x8812BDE0;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// lwz r9,84(r31)
	ctx.current_instruction = 0x8812BDE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lbz r3,0(r11)
	ctx.current_instruction = 0x8812BDEC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// stw r4,28(r31)
	ctx.current_instruction = 0x8812BDF4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r30,r7,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8812BE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812BE08:
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// slw r5,r6,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r11,32(r31)
	ctx.current_instruction = 0x8812BE10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r10,r30,8
	ctx.xer.ca = ctx.r30.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r30.u64;
	// srw r9,r3,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r11,32(r31)
	ctx.current_instruction = 0x8812BE28;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,36(r31)
	ctx.current_instruction = 0x8812BE2C;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r10,40(r31)
	ctx.current_instruction = 0x8812BE30;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8812BE38;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8812BE40;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8812BE44;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88132778) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88132778;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88132778) {
			switch (rex_dispatch_address) {
				case 0x88132780:
				case 0x88132840:
				case 0x8813285C:
				case 0x8813286C:
				case 0x88132894:
				case 0x881328AC:
				case 0x881328CC:
				case 0x881328DC:
				case 0x88132904:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88132778;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88132780: goto loc_88132780;
		case 0x88132840: goto loc_88132840;
		case 0x8813285C: goto loc_8813285C;
		case 0x8813286C: goto loc_8813286C;
		case 0x88132894: goto loc_88132894;
		case 0x881328AC: goto loc_881328AC;
		case 0x881328CC: goto loc_881328CC;
		case 0x881328DC: goto loc_881328DC;
		case 0x88132904: goto loc_88132904;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88132780;
	__savegprlr_23(ctx, base);
loc_88132780:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88132780;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,456(r4)
	ctx.current_instruction = 0x88132784;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 456);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	ctx.current_instruction = 0x8813278C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r29,452(r4)
	ctx.current_instruction = 0x88132794;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 452);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x881327c8
	if (ctx.cr6.lt) goto loc_881327C8;
	// lhz r10,118(r5)
	ctx.current_instruction = 0x881327A4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// bgt cr6,0x88132918
	if (ctx.cr6.gt) goto loc_88132918;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x881327c8
	if (!ctx.cr6.gt) goto loc_881327C8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_881327C8:
	// lhz r11,118(r5)
	ctx.current_instruction = 0x881327C8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subf r9,r10,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r10.u64;
	// stw r9,452(r4)
	ctx.current_instruction = 0x881327D4;
	REX_STORE_U32(ctx.r4.u32 + 452, ctx.r9.u32);
	// lhz r8,118(r5)
	ctx.current_instruction = 0x881327D8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881327f0
	if (!ctx.cr6.gt) goto loc_881327F0;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
loc_881327F0:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_881327F8:
	// lwz r11,452(r4)
	ctx.current_instruction = 0x881327F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8813280c
	if (!ctx.cr6.lt) goto loc_8813280C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,452(r4)
	ctx.current_instruction = 0x88132808;
	REX_STORE_U32(ctx.r4.u32 + 452, ctx.r11.u32);
loc_8813280C:
	// lhz r11,182(r4)
	ctx.current_instruction = 0x8813280C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 182);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r24,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r24.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x88132910
	if (ctx.cr0.lt) goto loc_88132910;
	// mulli r11,r24,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r31,r11,200
	ctx.r31.s64 = ctx.r11.s64 + 200;
loc_88132828:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8813286c
	if (!ctx.cr6.gt) goto loc_8813286C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88141e20
	ctx.lr = 0x88132840;
	sub_88141E20(ctx, base);
loc_88132840:
	// lwz r11,212(r26)
	ctx.current_instruction = 0x88132840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 212);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8813285C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8813285C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88141e20
	ctx.lr = 0x8813286C;
	sub_88141E20(ctx, base);
loc_8813286C:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x88132894
	if (!ctx.cr6.gt) goto loc_88132894;
	// lwz r10,212(r26)
	ctx.current_instruction = 0x88132874;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 212);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r29,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r29.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88132894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88132894:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x881328dc
	if (!ctx.cr6.gt) goto loc_881328DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88141e20
	ctx.lr = 0x881328AC;
	sub_88141E20(ctx, base);
loc_881328AC:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r27,r28
	ctx.r6.u64 = ctx.r28.u64 - ctx.r27.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,212(r26)
	ctx.current_instruction = 0x881328C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881328CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881328CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88141e20
	ctx.lr = 0x881328DC;
	sub_88141E20(ctx, base);
loc_881328DC:
	// cmpw cr6,r23,r28
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x88132904
	if (!ctx.cr6.gt) goto loc_88132904;
	// lwz r10,212(r26)
	ctx.current_instruction = 0x881328E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 212);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r28,r23
	ctx.r6.u64 = ctx.r23.u64 - ctx.r28.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88132904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88132904:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,-56
	ctx.r31.s64 = ctx.r31.s64 + -56;
	// bge 0x88132828
	if (!ctx.cr0.lt) goto loc_88132828;
loc_88132910:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_88132918:
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// subf r8,r9,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r9.u64;
	// stw r8,452(r4)
	ctx.current_instruction = 0x88132924;
	REX_STORE_U32(ctx.r4.u32 + 452, ctx.r8.u32);
	// lhz r7,118(r5)
	ctx.current_instruction = 0x88132928;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x881327f8
	if (!ctx.cr6.gt) goto loc_881327F8;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// b 0x881327f8
	goto loc_881327F8;
}

DEFINE_REX_FUNC(sub_88136D90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88136D90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88136D90) {
			switch (rex_dispatch_address) {
				case 0x88136D98:
				case 0x88136E20:
				case 0x88136E8C:
				case 0x88136EEC:
				case 0x88136FC4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88136D90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88136D98: goto loc_88136D98;
		case 0x88136E20: goto loc_88136E20;
		case 0x88136E8C: goto loc_88136E8C;
		case 0x88136EEC: goto loc_88136EEC;
		case 0x88136FC4: goto loc_88136FC4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88136D98;
	__savegprlr_21(ctx, base);
loc_88136D98:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88136D98;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,116(r3)
	ctx.current_instruction = 0x88136D9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,120(r3)
	ctx.current_instruction = 0x88136DA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r9,r9,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(152));
	// stw r26,80(r1)
	ctx.current_instruction = 0x88136DB0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r25,0(r3)
	ctx.current_instruction = 0x88136DB4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r28,r9,r10
	ctx.current_instruction = 0x88136DB8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r26,12(r31)
	ctx.current_instruction = 0x88136DC8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r8,96(r11)
	ctx.current_instruction = 0x88136DCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,8(r31)
	ctx.current_instruction = 0x88136DD0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bne cr6,0x88136e00
	if (!ctx.cr6.eq) goto loc_88136E00;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,148(r31)
	ctx.current_instruction = 0x88136DDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,12(r31)
	ctx.current_instruction = 0x88136DE8;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	ctx.current_instruction = 0x88136DEC;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x88136DF0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	ctx.current_instruction = 0x88136DF4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88136E00:
	// addi r30,r11,224
	ctx.r30.s64 = ctx.r11.s64 + 224;
	// stw r26,80(r1)
	ctx.current_instruction = 0x88136E04;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x88136ee8
	if (!ctx.cr6.eq) goto loc_88136EE8;
	// bl 0x8812c528
	ctx.lr = 0x88136E20;
	sub_8812C528(ctx, base);
loc_88136E20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881370f4
	if (ctx.cr6.lt) goto loc_881370F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88136E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88136e78
	if (!ctx.cr6.eq) goto loc_88136E78;
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lwz r9,148(r31)
	ctx.current_instruction = 0x88136E38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	ctx.current_instruction = 0x88136E44;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,6360(r10)
	ctx.current_instruction = 0x88136E48;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6360);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	ctx.current_instruction = 0x88136E4C;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,0(r9)
	ctx.current_instruction = 0x88136E50;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r7,148(r31)
	ctx.current_instruction = 0x88136E54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f13,6356(r8)
	ctx.current_instruction = 0x88136E58;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 6356);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	ctx.current_instruction = 0x88136E5C;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,148(r31)
	ctx.current_instruction = 0x88136E60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f0,8(r6)
	ctx.current_instruction = 0x88136E64;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,148(r31)
	ctx.current_instruction = 0x88136E68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f0,12(r5)
	ctx.current_instruction = 0x88136E6C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88136E78:
	// stw r26,80(r1)
	ctx.current_instruction = 0x88136E78;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x88136E8C;
	sub_8812C528(ctx, base);
loc_88136E8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881370f4
	if (ctx.cr6.lt) goto loc_881370F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88136E94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881370f4
	if (!ctx.cr6.eq) goto loc_881370F4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,148(r31)
	ctx.current_instruction = 0x88136EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,12(r31)
	ctx.current_instruction = 0x88136EB4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x88136EB8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,16(r31)
	ctx.current_instruction = 0x88136EBC;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stfs f0,0(r10)
	ctx.current_instruction = 0x88136EC0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r6,148(r31)
	ctx.current_instruction = 0x88136EC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f13,6732(r9)
	ctx.current_instruction = 0x88136EC8;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	ctx.current_instruction = 0x88136ECC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r5,148(r31)
	ctx.current_instruction = 0x88136ED0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f13,8(r5)
	ctx.current_instruction = 0x88136ED4;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,148(r31)
	ctx.current_instruction = 0x88136ED8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f0,12(r4)
	ctx.current_instruction = 0x88136EDC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88136EE8:
	// bl 0x8812c528
	ctx.lr = 0x88136EEC;
	sub_8812C528(ctx, base);
loc_88136EEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881370f4
	if (ctx.cr6.lt) goto loc_881370F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88136EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88136fb0
	if (!ctx.cr6.eq) goto loc_88136FB0;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r10,16(r31)
	ctx.current_instruction = 0x88136F10;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r8,12(r31)
	ctx.current_instruction = 0x88136F14;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f0,6708(r9)
	ctx.current_instruction = 0x88136F1C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x88136f7c
	if (ctx.cr6.lt) goto loc_88136F7C;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// addi r7,r28,-3
	ctx.r7.s64 = ctx.r28.s64 + -3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
loc_88136F34:
	// lwz r6,148(r31)
	ctx.current_instruction = 0x88136F34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stfsx f0,r8,r6
	ctx.current_instruction = 0x88136F44;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r8,148(r31)
	ctx.current_instruction = 0x88136F50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f0,r5,r8
	ctx.current_instruction = 0x88136F54;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,148(r31)
	ctx.current_instruction = 0x88136F68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f0,r6,r5
	ctx.current_instruction = 0x88136F6C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,148(r31)
	ctx.current_instruction = 0x88136F70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f0,r4,r6
	ctx.current_instruction = 0x88136F74;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// blt cr6,0x88136f34
	if (ctx.cr6.lt) goto loc_88136F34;
loc_88136F7C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x881370f4
	if (!ctx.cr6.lt) goto loc_881370F4;
	// subf r9,r11,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r11.u64;
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88136F94:
	// lwz r9,148(r31)
	ctx.current_instruction = 0x88136F94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stfsx f0,r8,r9
	ctx.current_instruction = 0x88136F9C;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x88136f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88136F94;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_88136FB0:
	// stw r26,80(r1)
	ctx.current_instruction = 0x88136FB0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8812c528
	ctx.lr = 0x88136FC4;
	sub_8812C528(ctx, base);
loc_88136FC4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881370f4
	if (ctx.cr6.lt) goto loc_881370F4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88136FCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881370ec
	if (!ctx.cr6.eq) goto loc_881370EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	ctx.current_instruction = 0x88136FE0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r10,16(r31)
	ctx.current_instruction = 0x88136FE8;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x881370f4
	if (!ctx.cr6.gt) goto loc_881370F4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_88136FFC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x88137090
	if (ctx.cr6.lt) goto loc_88137090;
	// lwz r9,548(r25)
	ctx.current_instruction = 0x88137008;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,3
	ctx.r30.s64 = ctx.r6.s64 + 3;
	// addi r29,r28,-3
	ctx.r29.s64 = ctx.r28.s64 + -3;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwzx r7,r9,r8
	ctx.current_instruction = 0x8813701C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r9,r7,r27
	ctx.current_instruction = 0x88137020;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
loc_88137024:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r23,148(r31)
	ctx.current_instruction = 0x88137028;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.current_instruction = 0x8813702C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r22,r4,2
	ctx.r22.s64 = ctx.r4.s64 + 2;
	// add r21,r30,r11
	ctx.r21.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfsx f0,r7,r23
	ctx.current_instruction = 0x88137048;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r23.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.current_instruction = 0x8813704C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfs f13,4(r5)
	ctx.current_instruction = 0x88137054;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r7)
	ctx.current_instruction = 0x88137060;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// rlwinm r7,r21,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f12,-4(r5)
	ctx.current_instruction = 0x88137070;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,148(r31)
	ctx.current_instruction = 0x88137074;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f12,r4,r5
	ctx.current_instruction = 0x88137078;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.current_instruction = 0x8813707C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfsx f11,r9,r8
	ctx.current_instruction = 0x88137080;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stfsx f11,r7,r4
	ctx.current_instruction = 0x88137088;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// blt cr6,0x88137024
	if (ctx.cr6.lt) goto loc_88137024;
loc_88137090:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x881370d4
	if (!ctx.cr6.lt) goto loc_881370D4;
	// lwz r9,548(r25)
	ctx.current_instruction = 0x88137098;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r8
	ctx.current_instruction = 0x881370A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwzx r9,r5,r27
	ctx.current_instruction = 0x881370B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
loc_881370B4:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r7,148(r31)
	ctx.current_instruction = 0x881370B8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.current_instruction = 0x881370BC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsx f0,r5,r7
	ctx.current_instruction = 0x881370CC;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// bdnz 0x881370b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881370B4;
loc_881370D4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// bne 0x88136ffc
	if (!ctx.cr0.eq) goto loc_88136FFC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881370EC:
	// stw r26,12(r31)
	ctx.current_instruction = 0x881370EC;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,16(r31)
	ctx.current_instruction = 0x881370F0;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_881370F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FE20) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8813FE20);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813FE20;
	ctx.current_instruction = 0x8813FE20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8813FE28;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88140638) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88140638;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88140638) {
			switch (rex_dispatch_address) {
				case 0x88140640:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88140638;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88140640: goto loc_88140640;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88140640;
	__savegprlr_14(ctx, base);
loc_88140640:
	// lwz r10,20(r4)
	ctx.current_instruction = 0x88140640;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,24(r4)
	ctx.current_instruction = 0x88140648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,28(r4)
	ctx.current_instruction = 0x88140650;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r22,36(r4)
	ctx.current_instruction = 0x88140654;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x8814065C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88140854
	if (!ctx.cr6.gt) goto loc_88140854;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// subf r18,r5,r6
	ctx.r18.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_88140670:
	// lwzx r10,r18,r19
	ctx.current_instruction = 0x88140670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8814068c
	if (!ctx.cr6.eq) goto loc_8814068C;
	// lwz r9,4(r4)
	ctx.current_instruction = 0x8814067C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8814083c
	goto loc_8814083C;
loc_8814068C:
	// lwz r11,4(r4)
	ctx.current_instruction = 0x8814068C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// blt cr6,0x8814073c
	if (ctx.cr6.lt) goto loc_8814073C;
	// addi r27,r25,-1
	ctx.r27.s64 = ctx.r25.s64 + -1;
	// addi r10,r20,-2
	ctx.r10.s64 = ctx.r20.s64 + -2;
	// addi r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 2;
	// subf r26,r23,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r23.u64;
loc_881406BC:
	// lhz r8,2(r10)
	ctx.current_instruction = 0x881406BC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r6,6(r10)
	ctx.current_instruction = 0x881406C4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// lhz r8,0(r11)
	ctx.current_instruction = 0x881406CC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r17,r6
	ctx.r17.s64 = ctx.r6.s16;
	// lhz r6,-2(r11)
	ctx.current_instruction = 0x881406D4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r15,r8
	ctx.r15.s64 = ctx.r8.s16;
	// lhzx r31,r26,r11
	ctx.current_instruction = 0x881406DC;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lhz r16,2(r11)
	ctx.current_instruction = 0x881406E4;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhz r14,4(r11)
	ctx.current_instruction = 0x881406EC;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// stw r8,-160(r1)
	ctx.current_instruction = 0x881406F0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// extsh r16,r16
	ctx.r16.s64 = ctx.r16.s16;
	// lhzu r8,8(r10)
	ctx.current_instruction = 0x881406F8;
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r31,r15
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r15.s32);
	// lwz r31,-160(r1)
	ctx.current_instruction = 0x88140700;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r8,-160(r1)
	ctx.current_instruction = 0x88140708;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// mullw r30,r31,r30
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// lwz r31,-160(r1)
	ctx.current_instruction = 0x88140710;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// extsh r14,r14
	ctx.r14.s64 = ctx.r14.s16;
	// mullw r8,r16,r17
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r17.s32);
	// mullw r31,r14,r31
	ctx.r31.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r31.s32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x881406bc
	if (ctx.cr6.lt) goto loc_881406BC;
loc_8814073C:
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8814077c
	if (!ctx.cr6.lt) goto loc_8814077C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhzx r8,r11,r23
	ctx.current_instruction = 0x88140750;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r23.u32);
	// lhzx r6,r11,r20
	ctx.current_instruction = 0x88140754;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// lhz r11,2(r10)
	ctx.current_instruction = 0x88140758;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r9,2(r9)
	ctx.current_instruction = 0x88140760;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8814077C:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// blt cr6,0x881407d8
	if (ctx.cr6.lt) goto loc_881407D8;
	// addi r28,r21,-1
	ctx.r28.s64 = ctx.r21.s64 + -1;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r10,r22,-2
	ctx.r10.s64 = ctx.r22.s64 + -2;
loc_881407A4:
	// lhz r30,2(r10)
	ctx.current_instruction = 0x881407A4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzu r31,4(r10)
	ctx.current_instruction = 0x881407AC;
	ea = 4 + ctx.r10.u32;
	ctx.r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r29,4(r9)
	ctx.current_instruction = 0x881407B0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r26,r30
	ctx.r26.s64 = ctx.r30.s16;
	// lwzu r30,8(r9)
	ctx.current_instruction = 0x881407B8;
	ea = 8 + ctx.r9.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r29,r26,r29
	ctx.r29.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x881407a4
	if (ctx.cr6.lt) goto loc_881407A4;
loc_881407D8:
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bge cr6,0x881407fc
	if (!ctx.cr6.lt) goto loc_881407FC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r11,r10,r22
	ctx.current_instruction = 0x881407E8;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// lwzx r10,r9,r5
	ctx.current_instruction = 0x881407EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_881407FC:
	// lwz r11,12(r4)
	ctx.current_instruction = 0x881407FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,8(r4)
	ctx.current_instruction = 0x88140804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sraw r11,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stwx r11,r18,r19
	ctx.current_instruction = 0x88140818;
	REX_STORE_U32(ctx.r18.u32 + ctx.r19.u32, ctx.r11.u32);
	// beq cr6,0x8814082c
	if (ctx.cr6.eq) goto loc_8814082C;
	// lwz r10,0(r19)
	ctx.current_instruction = 0x88140820;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r19)
	ctx.current_instruction = 0x88140828;
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_8814082C:
	// lwz r10,4(r4)
	ctx.current_instruction = 0x8814082C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88140830;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
loc_8814083C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// add r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88140670
	if (ctx.cr6.lt) goto loc_88140670;
loc_88140854:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88144CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88144CB8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88144CB8) {
			switch (rex_dispatch_address) {
				case 0x88144CC0:
				case 0x88144D44:
				case 0x88144D74:
				case 0x88144DDC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88144CB8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88144CC0: goto loc_88144CC0;
		case 0x88144D44: goto loc_88144D44;
		case 0x88144D74: goto loc_88144D74;
		case 0x88144DDC: goto loc_88144DDC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88144CC0;
	__savegprlr_22(ctx, base);
loc_88144CC0:
	// stwu r1,-608(r1)
	ctx.current_instruction = 0x88144CC0;
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// lis r25,2048
	ctx.r25.s64 = 134217728;
	// stw r11,96(r1)
	ctx.current_instruction = 0x88144CCC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,88(r1)
	ctx.current_instruction = 0x88144CD4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r25,116(r1)
	ctx.current_instruction = 0x88144CE0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x88144CE8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r25,112(r1)
	ctx.current_instruction = 0x88144CF0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r27,r11,7024
	ctx.r27.s64 = ctx.r11.s64 + 7024;
	// ble cr6,0x88144d54
	if (!ctx.cr6.gt) goto loc_88144D54;
	// li r29,0
	ctx.r29.s64 = 0;
loc_88144D10:
	// lbzx r11,r31,r28
	ctx.current_instruction = 0x88144D10;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88144D1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r10,r27
	ctx.current_instruction = 0x88144D38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88144D3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x88144b50
	ctx.lr = 0x88144D44;
	sub_88144B50(ctx, base);
loc_88144D44:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x88144d10
	if (ctx.cr6.lt) goto loc_88144D10;
loc_88144D54:
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// addze r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r23.s64 = temp.s64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// blt cr6,0x88144d74
	if (ctx.cr6.lt) goto loc_88144D74;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// rlwinm r5,r23,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88054c28
	ctx.lr = 0x88144D74;
	sub_88054C28(ctx, base);
loc_88144D74:
	// lbz r11,1(r28)
	ctx.current_instruction = 0x88144D74;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// addi r10,r27,64
	ctx.r10.s64 = ctx.r27.s64 + 64;
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r25,112(r1)
	ctx.current_instruction = 0x88144D80;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r25,120(r1)
	ctx.current_instruction = 0x88144D88;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r31,80(r1)
	ctx.current_instruction = 0x88144D8C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// lwzx r8,r9,r10
	ctx.current_instruction = 0x88144D94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// stw r7,116(r1)
	ctx.current_instruction = 0x88144D9C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// ble cr6,0x88144dec
	if (!ctx.cr6.gt) goto loc_88144DEC;
	// li r29,48
	ctx.r29.s64 = 48;
loc_88144DA8:
	// lbzx r11,r31,r28
	ctx.current_instruction = 0x88144DA8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88144DB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r10,r27
	ctx.current_instruction = 0x88144DD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x88144DD4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x881449c8
	ctx.lr = 0x88144DDC;
	sub_881449C8(ctx, base);
loc_88144DDC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x88144da8
	if (ctx.cr6.lt) goto loc_88144DA8;
loc_88144DEC:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// blt cr6,0x88144e14
	if (ctx.cr6.lt) goto loc_88144E14;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_88144E00:
	// lwz r8,8(r11)
	ctx.current_instruction = 0x88144E00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x88144E04;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stwu r7,4(r10)
	ctx.current_instruction = 0x88144E0C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88144e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88144E00;
loc_88144E14:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881493A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881493A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881493A0;
	ctx.current_instruction = 0x881493A0;
	PPCRegister temp{};
	uint32_t ea{};
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// sth r11,-2(r1)
	ctx.current_instruction = 0x881493B8;
	REX_STORE_U16(ctx.r1.u32 + -2, ctx.r11.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v10,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsplth v9,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// lwz r9,25792(r8)
	ctx.current_instruction = 0x881493D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 25792);
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vsubuhm v3,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vspltish v4,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x6)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
loc_881493F4:
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v12,v61,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v1,v63,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v10,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v7,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vslh v31,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v12,v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v10,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v10,v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v29,v13,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v28,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v9,v12,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v7,v10,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v60,v63,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v21,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm v10,v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vperm128 v12,v9,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v17,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v22,v20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vslh v9,v7,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsubshs v18,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v7,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v29,v16
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v30,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v29,v14,v17
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v28,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v27,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v26,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vadduhm v25,v29,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v24,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v23,v31,v27
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v22,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v20,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsrah v19,v21,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// stvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x881493f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881493F4;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814C938) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814C938);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C938;
	ctx.current_instruction = 0x8814C938;
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x8814a5e8
	sub_8814A5E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814C968) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814C968);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814C968;
	ctx.current_instruction = 0x8814C968;
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.u64 = static_cast<uint64_t>(8) - ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x8814aee0
	sub_8814AEE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CA28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CA28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CA28) {
			switch (rex_dispatch_address) {
				case 0x8814CA30:
				case 0x8814CA58:
				case 0x8814CA74:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CA28;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CA30: goto loc_8814CA30;
		case 0x8814CA58: goto loc_8814CA58;
		case 0x8814CA74: goto loc_8814CA74;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814CA30;
	__savegprlr_28(ctx, base);
loc_8814CA30:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x8814CA30;
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
	ctx.lr = 0x8814CA58;
	sub_8814BF48(ctx, base);
loc_8814CA58:
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
	// bl 0x8814c150
	ctx.lr = 0x8814CA74;
	sub_8814C150(ctx, base);
loc_8814CA74:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CD10) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CD10;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CD10) {
			switch (rex_dispatch_address) {
				case 0x8814CD40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CD10;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CD40: goto loc_8814CD40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814CD14;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814CD18;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8814CD1C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cd58
	if (ctx.cr6.eq) goto loc_8814CD58;
	// lwz r11,20472(r3)
	ctx.current_instruction = 0x8814CD2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8814cd58
	if (ctx.cr6.eq) goto loc_8814CD58;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881ec8b0
	ctx.lr = 0x8814CD40;
	sub_881EC8B0(ctx, base);
loc_8814CD40:
	// ld r11,20448(r31)
	ctx.current_instruction = 0x8814CD40;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 20448);
	// ld r10,80(r1)
	ctx.current_instruction = 0x8814CD44;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20472(r31)
	ctx.current_instruction = 0x8814CD50;
	REX_STORE_U32(ctx.r31.u32 + 20472, ctx.r9.u32);
	// std r8,20448(r31)
	ctx.current_instruction = 0x8814CD54;
	REX_STORE_U64(ctx.r31.u32 + 20448, ctx.r8.u64);
loc_8814CD58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814CD5C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814CD64;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814D210) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814D210;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814D210) {
			switch (rex_dispatch_address) {
				case 0x8814D274:
				case 0x8814D310:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814D210;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814D274: goto loc_8814D274;
		case 0x8814D310: goto loc_8814D310;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814D214;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814D218;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8814D21C;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20680(r4)
	ctx.current_instruction = 0x8814D220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20680);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,204(r4)
	ctx.current_instruction = 0x8814D228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// lwz r9,18852(r3)
	ctx.current_instruction = 0x8814D22C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 18852);
	// sraw r8,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8814d29c
	if (ctx.cr6.gt) goto loc_8814D29C;
	// lwz r10,208(r4)
	ctx.current_instruction = 0x8814D23C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 208);
	// lwz r9,18860(r3)
	ctx.current_instruction = 0x8814D240;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 18860);
	// sraw r8,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8814d29c
	if (ctx.cr6.gt) goto loc_8814D29C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,45248
	ctx.r9.u64 = ctx.r11.u64 | 45248;
	// ori r8,r10,45244
	ctx.r8.u64 = ctx.r10.u64 | 45244;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r4,r9
	ctx.current_instruction = 0x8814D268;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwzx r4,r4,r8
	ctx.current_instruction = 0x8814D26C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bl 0x88158840
	ctx.lr = 0x8814D274;
	sub_88158840(ctx, base);
loc_8814D274:
	// lwz r7,96(r1)
	ctx.current_instruction = 0x8814D274;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,22140(r31)
	ctx.current_instruction = 0x8814D278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8814D27C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x8814d2e4
	if (ctx.cr6.lt) goto loc_8814D2E4;
	// beq cr6,0x8814d2b4
	if (ctx.cr6.eq) goto loc_8814D2B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8814d2e4
	if (ctx.cr6.lt) goto loc_8814D2E4;
loc_8814D29C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D2A4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814D2AC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8814D2B4:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8814D2B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8814d29c
	if (ctx.cr6.gt) goto loc_8814D29C;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r10,20400(r31)
	ctx.current_instruction = 0x8814D2C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// lwz r9,220(r31)
	ctx.current_instruction = 0x8814D2CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8814d308
	if (ctx.cr6.eq) goto loc_8814D308;
	// b 0x8814d29c
	goto loc_8814D29C;
loc_8814D2E4:
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8814D2E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8814d29c
	if (ctx.cr6.gt) goto loc_8814D29C;
	// lwz r10,20400(r31)
	ctx.current_instruction = 0x8814D2F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,220(r31)
	ctx.current_instruction = 0x8814D2F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8814d29c
	if (!ctx.cr6.eq) goto loc_8814D29C;
loc_8814D308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d1b0
	ctx.lr = 0x8814D310;
	sub_8814D1B0(ctx, base);
loc_8814D310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814D314;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814D31C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88151250) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88151250;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88151250) {
			switch (rex_dispatch_address) {
				case 0x8815126C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88151250;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815126C: goto loc_8815126C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88151254;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88151258;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8815125C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,220
	ctx.r3.s64 = ctx.r3.s64 + 220;
	// bl 0x88150f30
	ctx.lr = 0x8815126C;
	sub_88150F30(ctx, base);
loc_8815126C:
	// lbz r11,640(r31)
	ctx.current_instruction = 0x8815126C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 640);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stb r10,640(r31)
	ctx.current_instruction = 0x88151274;
	REX_STORE_U8(ctx.r31.u32 + 640, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815127C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88151284;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88151828) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88151828;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88151828) {
			switch (rex_dispatch_address) {
				case 0x88151830:
				case 0x88151858:
				case 0x88151934:
				case 0x88151950:
				case 0x88151970:
				case 0x88151990:
				case 0x881519B4:
				case 0x881519C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88151828;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88151830: goto loc_88151830;
		case 0x88151858: goto loc_88151858;
		case 0x88151934: goto loc_88151934;
		case 0x88151950: goto loc_88151950;
		case 0x88151970: goto loc_88151970;
		case 0x88151990: goto loc_88151990;
		case 0x881519B4: goto loc_881519B4;
		case 0x881519C8: goto loc_881519C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88151830;
	__savegprlr_29(ctx, base);
loc_88151830:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88151830;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,712(r3)
	ctx.current_instruction = 0x88151834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881519d8
	if (ctx.cr6.eq) goto loc_881519D8;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,45872
	ctx.r5.u64 = ctx.r5.u64 | 45872;
	// bl 0x8815d720
	ctx.lr = 0x88151858;
	sub_8815D720(ctx, base);
loc_88151858:
	// stw r3,124(r31)
	ctx.current_instruction = 0x88151858;
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881519c0
	if (ctx.cr6.eq) goto loc_881519C0;
	// lwz r11,16(r30)
	ctx.current_instruction = 0x88151864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.current_instruction = 0x88151868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,152(r31)
	ctx.current_instruction = 0x8815187C;
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,156(r31)
	ctx.current_instruction = 0x88151880;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// lwz r9,104(r30)
	ctx.current_instruction = 0x88151884;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881518f0
	if (ctx.cr6.eq) goto loc_881518F0;
	// lhz r9,244(r30)
	ctx.current_instruction = 0x88151890;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 244);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bne cr6,0x881518f0
	if (!ctx.cr6.eq) goto loc_881518F0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// addi r6,r9,255
	ctx.r6.s64 = ctx.r9.s64 + 255;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// rlwinm r4,r6,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r3,r7,0,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r4,140(r31)
	ctx.current_instruction = 0x881518C0;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// stw r3,136(r31)
	ctx.current_instruction = 0x881518C4;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r9,r11,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r10,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,148(r31)
	ctx.current_instruction = 0x881518E0;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// stw r11,144(r31)
	ctx.current_instruction = 0x881518E4;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88151924
	goto loc_88151924;
loc_881518F0:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r31)
	ctx.current_instruction = 0x881518F4;
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r8,144(r31)
	ctx.current_instruction = 0x881518FC;
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// stw r7,140(r31)
	ctx.current_instruction = 0x88151908;
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r6,148(r31)
	ctx.current_instruction = 0x8815190C;
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// lhz r5,244(r30)
	ctx.current_instruction = 0x88151910;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 244);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
loc_88151924:
	// lwz r4,18872(r31)
	ctx.current_instruction = 0x88151924;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 18872);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,132(r31)
	ctx.current_instruction = 0x8815192C;
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// bl 0x8815d980
	ctx.lr = 0x88151934;
	sub_8815D980(ctx, base);
loc_88151934:
	// stw r3,128(r31)
	ctx.current_instruction = 0x88151934;
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881519c0
	if (ctx.cr6.eq) goto loc_881519C0;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815dbd8
	ctx.lr = 0x88151950;
	sub_8815DBD8(ctx, base);
loc_88151950:
	// stw r3,160(r31)
	ctx.current_instruction = 0x88151950;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881519c0
	if (ctx.cr6.eq) goto loc_881519C0;
	// lwz r11,22256(r31)
	ctx.current_instruction = 0x8815195C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22256);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e098
	ctx.lr = 0x88151970;
	sub_8815E098(ctx, base);
loc_88151970:
	// stw r3,164(r31)
	ctx.current_instruction = 0x88151970;
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881519c0
	if (ctx.cr6.eq) goto loc_881519C0;
	// lwz r11,22268(r31)
	ctx.current_instruction = 0x8815197C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22268);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x8815e098
	ctx.lr = 0x88151990;
	sub_8815E098(ctx, base);
loc_88151990:
	// stw r3,168(r31)
	ctx.current_instruction = 0x88151990;
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881519c0
	if (ctx.cr6.eq) goto loc_881519C0;
	// lwz r11,22272(r31)
	ctx.current_instruction = 0x8815199C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22272);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8815de38
	ctx.lr = 0x881519B4;
	sub_8815DE38(ctx, base);
loc_881519B4:
	// stw r3,172(r31)
	ctx.current_instruction = 0x881519B4;
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881519d8
	if (!ctx.cr6.eq) goto loc_881519D8;
loc_881519C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814ce48
	ctx.lr = 0x881519C8;
	sub_8814CE48(ctx, base);
loc_881519C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881519D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815B250) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815B250);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815B250;
	ctx.current_instruction = 0x8815B250;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// stw r4,408(r3)
	ctx.current_instruction = 0x8815B254;
	REX_STORE_U32(ctx.r3.u32 + 408, ctx.r4.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,19240
	ctx.r11.s64 = ctx.r11.s64 + 19240;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwzx r7,r10,r8
	ctx.current_instruction = 0x8815B268;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r7,412(r3)
	ctx.current_instruction = 0x8815B26C;
	REX_STORE_U32(ctx.r3.u32 + 412, ctx.r7.u32);
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x8815B270;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,416(r3)
	ctx.current_instruction = 0x8815B27C;
	REX_STORE_U32(ctx.r3.u32 + 416, ctx.r6.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// slw r11,r9,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// slw r10,r9,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// stw r11,420(r3)
	ctx.current_instruction = 0x8815B290;
	REX_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r10,424(r3)
	ctx.current_instruction = 0x8815B294;
	REX_STORE_U32(ctx.r3.u32 + 424, ctx.r10.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r9,428(r3)
	ctx.current_instruction = 0x8815B2A8;
	REX_STORE_U32(ctx.r3.u32 + 428, ctx.r9.u32);
	// stw r8,432(r3)
	ctx.current_instruction = 0x8815B2AC;
	REX_STORE_U32(ctx.r3.u32 + 432, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815BA70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815BA70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815BA70) {
			switch (rex_dispatch_address) {
				case 0x8815BA9C:
				case 0x8815BAB0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815BA70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815BA9C: goto loc_8815BA9C;
		case 0x8815BAB0: goto loc_8815BAB0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815BA74;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8815BA78;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8815BA7C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8815BA80;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815bae0
	if (ctx.cr6.eq) goto loc_8815BAE0;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x88050370
	ctx.lr = 0x8815BA9C;
	sub_88050370(ctx, base);
loc_8815BA9C:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x8815BAB0;
	sub_88050358(ctx, base);
loc_8815BAB0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8815bae0
	if (ctx.cr6.eq) goto loc_8815BAE0;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// neg r8,r30
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// addi r6,r11,-11680
	ctx.r6.s64 = ctx.r11.s64 + -11680;
loc_8815BAC4:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8815bac4
	if (!ctx.cr0.eq) goto loc_8815BAC4;
loc_8815BAE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815BAE4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8815BAEC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8815BAF0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815DE38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815DE38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815DE38) {
			switch (rex_dispatch_address) {
				case 0x8815DE40:
				case 0x8815DE58:
				case 0x8815DE90:
				case 0x8815DEA8:
				case 0x8815DEBC:
				case 0x8815DED4:
				case 0x8815DEE8:
				case 0x8815DF0C:
				case 0x8815DF24:
				case 0x8815DF30:
				case 0x8815DF38:
				case 0x8815DF40:
				case 0x8815DF74:
				case 0x8815DF8C:
				case 0x8815DFB0:
				case 0x8815DFCC:
				case 0x8815DFF4:
				case 0x8815E084:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815DE38;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815DE40: goto loc_8815DE40;
		case 0x8815DE58: goto loc_8815DE58;
		case 0x8815DE90: goto loc_8815DE90;
		case 0x8815DEA8: goto loc_8815DEA8;
		case 0x8815DEBC: goto loc_8815DEBC;
		case 0x8815DED4: goto loc_8815DED4;
		case 0x8815DEE8: goto loc_8815DEE8;
		case 0x8815DF0C: goto loc_8815DF0C;
		case 0x8815DF24: goto loc_8815DF24;
		case 0x8815DF30: goto loc_8815DF30;
		case 0x8815DF38: goto loc_8815DF38;
		case 0x8815DF40: goto loc_8815DF40;
		case 0x8815DF74: goto loc_8815DF74;
		case 0x8815DF8C: goto loc_8815DF8C;
		case 0x8815DFB0: goto loc_8815DFB0;
		case 0x8815DFCC: goto loc_8815DFCC;
		case 0x8815DFF4: goto loc_8815DFF4;
		case 0x8815E084: goto loc_8815E084;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8815DE40;
	__savegprlr_22(ctx, base);
loc_8815DE40:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x8815DE40;
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
	ctx.lr = 0x8815DE58;
	sub_88052E38(ctx, base);
loc_8815DE58:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815df40
	if (ctx.cr6.eq) goto loc_8815DF40;
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
loc_8815DE78:
	// stwu r9,4(r11)
	ctx.current_instruction = 0x8815DE78;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8815de78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8815DE78;
	// addi r27,r29,4
	ctx.r27.s64 = ctx.r29.s64 + 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815DE90;
	sub_881C4640(ctx, base);
loc_8815DE90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815df38
	if (ctx.cr6.eq) goto loc_8815DF38;
	// addi r26,r29,16
	ctx.r26.s64 = ctx.r29.s64 + 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4640
	ctx.lr = 0x8815DEA8;
	sub_881C4640(ctx, base);
loc_8815DEA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815df30
	if (ctx.cr6.eq) goto loc_8815DF30;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8815DEBC;
	sub_8815B9F8(ctx, base);
loc_8815DEBC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815ded4
	if (ctx.cr6.eq) goto loc_8815DED4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8815DED4;
	sub_88052D90(ctx, base);
loc_8815DED4:
	// stw r31,0(r29)
	ctx.current_instruction = 0x8815DED4;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815df28
	if (ctx.cr6.eq) goto loc_8815DF28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882436a0
	ctx.lr = 0x8815DEE8;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8815DEE8:
	// lwz r11,0(r29)
	ctx.current_instruction = 0x8815DEE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815df28
	if (ctx.cr6.eq) goto loc_8815DF28;
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
	ctx.lr = 0x8815DF0C;
	sub_8815E360(ctx, base);
loc_8815DF0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815df4c
	if (!ctx.cr6.eq) goto loc_8815DF4C;
	// lwz r3,0(r29)
	ctx.current_instruction = 0x8815DF14;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815df28
	if (ctx.cr6.eq) goto loc_8815DF28;
	// bl 0x8815ba70
	ctx.lr = 0x8815DF24;
	sub_8815BA70(ctx, base);
loc_8815DF24:
	// stw r23,0(r29)
	ctx.current_instruction = 0x8815DF24;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_8815DF28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815DF30;
	sub_881C4560(ctx, base);
loc_8815DF30:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881c4560
	ctx.lr = 0x8815DF38;
	sub_881C4560(ctx, base);
loc_8815DF38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88052278
	ctx.lr = 0x8815DF40;
	sub_88052278(ctx, base);
loc_8815DF40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8815DF4C:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r30,36(r29)
	ctx.current_instruction = 0x8815DF50;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r28,32(r29)
	ctx.current_instruction = 0x8815DF58;
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// ble cr6,0x8815e06c
	if (!ctx.cr6.gt) goto loc_8815E06C;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// addi r25,r11,18168
	ctx.r25.s64 = ctx.r11.s64 + 18168;
loc_8815DF68:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815DF74;
	sub_8815D000(ctx, base);
loc_8815DF74:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815e05c
	if (ctx.cr6.lt) goto loc_8815E05C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8815d000
	ctx.lr = 0x8815DF8C;
	sub_8815D000(ctx, base);
loc_8815DF8C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8815e03c
	if (ctx.cr6.lt) goto loc_8815E03C;
	// lwz r11,36(r29)
	ctx.current_instruction = 0x8815DF98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,32(r29)
	ctx.current_instruction = 0x8815DFA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8815e3a0
	ctx.lr = 0x8815DFB0;
	sub_8815E3A0(ctx, base);
loc_8815DFB0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e01c
	if (ctx.cr6.eq) goto loc_8815E01C;
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815dfcc
	if (ctx.cr6.lt) goto loc_8815DFCC;
	// bl 0x881ed228
	ctx.lr = 0x8815DFCC;
	sub_881ED228(ctx, base);
loc_8815DFCC:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815DFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815dfe4
	if (!ctx.cr6.lt) goto loc_8815DFE4;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8815DFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	ctx.current_instruction = 0x8815DFE0;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_8815DFE4:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DFE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8815dff4
	if (ctx.cr6.lt) goto loc_8815DFF4;
	// bl 0x881ed228
	ctx.lr = 0x8815DFF4;
	sub_881ED228(ctx, base);
loc_8815DFF4:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815DFF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8815e00c
	if (!ctx.cr6.lt) goto loc_8815E00C;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8815E000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r10,r11
	ctx.current_instruction = 0x8815E008;
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r23.u32);
loc_8815E00C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x8815df68
	if (ctx.cr6.lt) goto loc_8815DF68;
	// b 0x8815e05c
	goto loc_8815E05C;
loc_8815E01C:
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8815E01C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e03c
	if (ctx.cr6.eq) goto loc_8815E03C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r26)
	ctx.current_instruction = 0x8815E02C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r26)
	ctx.current_instruction = 0x8815E034;
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815E038;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815E03C:
	// lwz r11,8(r27)
	ctx.current_instruction = 0x8815E03C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e05c
	if (ctx.cr6.eq) goto loc_8815E05C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r27)
	ctx.current_instruction = 0x8815E050;
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x8815E054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r23,r9,r10
	ctx.current_instruction = 0x8815E058;
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r23.u32);
loc_8815E05C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8815e06c
	if (!ctx.cr6.gt) goto loc_8815E06C;
	// stw r23,28(r29)
	ctx.current_instruction = 0x8815E064;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r23.u32);
	// b 0x8815e074
	goto loc_8815E074;
loc_8815E06C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,28(r29)
	ctx.current_instruction = 0x8815E070;
	REX_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_8815E074:
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x8815e088
	if (!ctx.cr6.lt) goto loc_8815E088;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8815d268
	ctx.lr = 0x8815E084;
	sub_8815D268(ctx, base);
loc_8815E084:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8815E088:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881664C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881664C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881664C0) {
			switch (rex_dispatch_address) {
				case 0x881664C8:
				case 0x88166618:
				case 0x8816662C:
				case 0x8816663C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881664C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881664C8: goto loc_881664C8;
		case 0x88166618: goto loc_88166618;
		case 0x8816662C: goto loc_8816662C;
		case 0x8816663C: goto loc_8816663C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881664C8;
	__savegprlr_29(ctx, base);
loc_881664C8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881664C8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3448(r3)
	ctx.current_instruction = 0x881664CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3448);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,14956(r3)
	ctx.current_instruction = 0x881664D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14956);
	// lwz r29,14960(r3)
	ctx.current_instruction = 0x881664D8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 14960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,14948(r3)
	ctx.current_instruction = 0x881664E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 14948);
	// lwz r30,14952(r3)
	ctx.current_instruction = 0x881664E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 14952);
	// bne cr6,0x8816663c
	if (!ctx.cr6.eq) goto loc_8816663C;
	// lwz r11,15628(r3)
	ctx.current_instruction = 0x881664EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816663c
	if (!ctx.cr6.eq) goto loc_8816663C;
	// lwz r11,3752(r3)
	ctx.current_instruction = 0x881664F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,3764(r3)
	ctx.current_instruction = 0x88166500;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3764);
	// stw r9,3448(r3)
	ctx.current_instruction = 0x88166504;
	REX_STORE_U32(ctx.r3.u32 + 3448, ctx.r9.u32);
	// lwz r7,616(r11)
	ctx.current_instruction = 0x88166508;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// stw r7,616(r8)
	ctx.current_instruction = 0x8816650C;
	REX_STORE_U32(ctx.r8.u32 + 616, ctx.r7.u32);
	// lwz r5,3752(r3)
	ctx.current_instruction = 0x88166510;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// lwz r4,3764(r3)
	ctx.current_instruction = 0x88166514;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3764);
	// lwz r3,604(r5)
	ctx.current_instruction = 0x88166518;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 604);
	// stw r3,604(r4)
	ctx.current_instruction = 0x8816651C;
	REX_STORE_U32(ctx.r4.u32 + 604, ctx.r3.u32);
	// lwz r11,3752(r31)
	ctx.current_instruction = 0x88166520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// lwz r9,3764(r31)
	ctx.current_instruction = 0x88166524;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// lwz r8,608(r11)
	ctx.current_instruction = 0x88166528;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// stw r8,608(r9)
	ctx.current_instruction = 0x8816652C;
	REX_STORE_U32(ctx.r9.u32 + 608, ctx.r8.u32);
	// lwz r7,3752(r31)
	ctx.current_instruction = 0x88166530;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// lwz r5,3764(r31)
	ctx.current_instruction = 0x88166534;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// lwz r4,612(r7)
	ctx.current_instruction = 0x88166538;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 612);
	// stw r4,612(r5)
	ctx.current_instruction = 0x8816653C;
	REX_STORE_U32(ctx.r5.u32 + 612, ctx.r4.u32);
	// lwz r3,15964(r31)
	ctx.current_instruction = 0x88166540;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15964);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881665b4
	if (ctx.cr6.eq) goto loc_881665B4;
	// lwz r11,20416(r31)
	ctx.current_instruction = 0x8816654C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881665b4
	if (!ctx.cr6.eq) goto loc_881665B4;
	// lwz r10,3764(r31)
	ctx.current_instruction = 0x88166558;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3764);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,592(r10)
	ctx.current_instruction = 0x88166560;
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
	ctx.current_instruction = 0x88166574;
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	ctx.current_instruction = 0x88166578;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3752(r31)
	ctx.current_instruction = 0x8816657C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// stw r6,52(r11)
	ctx.current_instruction = 0x88166580;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,14948(r31)
	ctx.current_instruction = 0x88166584;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14948);
	// stw r5,60(r11)
	ctx.current_instruction = 0x88166588;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,14952(r31)
	ctx.current_instruction = 0x8816658C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14952);
	// stw r4,64(r11)
	ctx.current_instruction = 0x88166590;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r3,14936(r31)
	ctx.current_instruction = 0x88166594;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 14936);
	// stw r3,56(r11)
	ctx.current_instruction = 0x88166598;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r10,14964(r31)
	ctx.current_instruction = 0x8816659C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14964);
	// stw r10,68(r11)
	ctx.current_instruction = 0x881665A0;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,14968(r31)
	ctx.current_instruction = 0x881665A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14968);
	// stw r9,72(r11)
	ctx.current_instruction = 0x881665A8;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881665B4:
	// lwz r11,21888(r31)
	ctx.current_instruction = 0x881665B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21888);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88166608
	if (!ctx.cr6.eq) goto loc_88166608;
	// lwz r11,14836(r31)
	ctx.current_instruction = 0x881665C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88166608
	if (!ctx.cr6.gt) goto loc_88166608;
	// ld r11,3632(r31)
	ctx.current_instruction = 0x881665CC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x88166608
	if (!ctx.cr6.gt) goto loc_88166608;
	// lwz r11,20400(r31)
	ctx.current_instruction = 0x881665D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// lwz r9,22188(r31)
	ctx.current_instruction = 0x881665DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22188);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,20404(r31)
	ctx.current_instruction = 0x881665E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// lwz r7,22192(r31)
	ctx.current_instruction = 0x881665E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 22192);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,22196(r31)
	ctx.current_instruction = 0x881665F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 22196);
	// lwz r9,22200(r31)
	ctx.current_instruction = 0x881665F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22200);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_88166608:
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r4,3788(r31)
	ctx.current_instruction = 0x8816660C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// lwz r3,3844(r31)
	ctx.current_instruction = 0x88166610;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3844);
	// bl 0x880547a0
	ctx.lr = 0x88166618;
	sub_880547A0(ctx, base);
loc_88166618:
	// lwz r4,3792(r31)
	ctx.current_instruction = 0x88166618;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r3,3848(r31)
	ctx.current_instruction = 0x8816661C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3848);
	// mullw r30,r29,r30
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x8816662C;
	sub_880547A0(ctx, base);
loc_8816662C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,3796(r31)
	ctx.current_instruction = 0x88166630;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// lwz r3,3852(r31)
	ctx.current_instruction = 0x88166634;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3852);
	// bl 0x880547a0
	ctx.lr = 0x8816663C;
	sub_880547A0(ctx, base);
loc_8816663C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816F140) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816F140;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816F140) {
			switch (rex_dispatch_address) {
				case 0x8816F148:
				case 0x8816F1B8:
				case 0x8816F244:
				case 0x8816F2D0:
				case 0x8816F2E8:
				case 0x8816F35C:
				case 0x8816F3A0:
				case 0x8816F434:
				case 0x8816F4C0:
				case 0x8816F4D8:
				case 0x8816F56C:
				case 0x8816F5A4:
				case 0x8816F638:
				case 0x8816F6C4:
				case 0x8816F6DC:
				case 0x8816F770:
				case 0x8816F7A8:
				case 0x8816F810:
				case 0x8816F858:
				case 0x8816F880:
				case 0x8816F8E4:
				case 0x8816F92C:
				case 0x8816F960:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816F140;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816F148: goto loc_8816F148;
		case 0x8816F1B8: goto loc_8816F1B8;
		case 0x8816F244: goto loc_8816F244;
		case 0x8816F2D0: goto loc_8816F2D0;
		case 0x8816F2E8: goto loc_8816F2E8;
		case 0x8816F35C: goto loc_8816F35C;
		case 0x8816F3A0: goto loc_8816F3A0;
		case 0x8816F434: goto loc_8816F434;
		case 0x8816F4C0: goto loc_8816F4C0;
		case 0x8816F4D8: goto loc_8816F4D8;
		case 0x8816F56C: goto loc_8816F56C;
		case 0x8816F5A4: goto loc_8816F5A4;
		case 0x8816F638: goto loc_8816F638;
		case 0x8816F6C4: goto loc_8816F6C4;
		case 0x8816F6DC: goto loc_8816F6DC;
		case 0x8816F770: goto loc_8816F770;
		case 0x8816F7A8: goto loc_8816F7A8;
		case 0x8816F810: goto loc_8816F810;
		case 0x8816F858: goto loc_8816F858;
		case 0x8816F880: goto loc_8816F880;
		case 0x8816F8E4: goto loc_8816F8E4;
		case 0x8816F92C: goto loc_8816F92C;
		case 0x8816F960: goto loc_8816F960;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8816F148;
	__savegprlr_14(ctx, base);
loc_8816F148:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x8816F148;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x8816F14C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r18,316(r3)
	ctx.current_instruction = 0x8816F158;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r17,320(r3)
	ctx.current_instruction = 0x8816F160;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,80(r1)
	ctx.current_instruction = 0x8816F168;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,1764(r3)
	ctx.current_instruction = 0x8816F170;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1764);
	// lwz r28,40(r10)
	ctx.current_instruction = 0x8816F174;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r9,12(r10)
	ctx.current_instruction = 0x8816F17C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,16(r10)
	ctx.current_instruction = 0x8816F180;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,20(r10)
	ctx.current_instruction = 0x8816F184;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x8816F188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r24,0(r10)
	ctx.current_instruction = 0x8816F18C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r21,28(r10)
	ctx.current_instruction = 0x8816F190;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// lwz r20,32(r10)
	ctx.current_instruction = 0x8816F198;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r14,24(r10)
	ctx.current_instruction = 0x8816F19C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r16,4(r10)
	ctx.current_instruction = 0x8816F1A0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,96(r1)
	ctx.current_instruction = 0x8816F1A4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r9,88(r1)
	ctx.current_instruction = 0x8816F1A8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x8816F1AC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x8816F1B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x88052d90
	ctx.lr = 0x8816F1B8;
	sub_88052D90(ctx, base);
loc_8816F1B8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r15,3
	ctx.r15.s64 = 3;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
loc_8816F1C4:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816F1C4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8816f1dc
	if (!ctx.cr6.eq) goto loc_8816F1DC;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r15,20(r31)
	ctx.current_instruction = 0x8816F1D4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x8816f300
	goto loc_8816F300;
loc_8816F1DC:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x8816F1DC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816F1E0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x8816F1E8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x8816F1F8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8816f2c8
	if (ctx.cr6.lt) goto loc_8816F2C8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F208;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x8816F218;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816F220;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8816f2c0
	if (!ctx.cr6.lt) goto loc_8816F2C0;
loc_8816F228:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8816F228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8816F22C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8816f254
	if (ctx.cr6.lt) goto loc_8816F254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x8816F244;
	sub_88156440(ctx, base);
loc_8816F244:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8816f228
	if (ctx.cr6.eq) goto loc_8816F228;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8816f300
	goto loc_8816F300;
loc_8816F254:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8816F254;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8816F25C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x8816F264;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x8816F268;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x8816F270;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x8816F274;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F27C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x8816F280;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x8816F288;
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
	ctx.current_instruction = 0x8816F2A4;
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
	ctx.current_instruction = 0x8816F2BC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_8816F2C0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8816f300
	goto loc_8816F300;
loc_8816F2C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x8816F2D0;
	sub_88156500(ctx, base);
loc_8816F2D0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816F2D0;
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
	ctx.lr = 0x8816F2E8;
	sub_88156500(ctx, base);
loc_8816F2E8:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x8816F2F0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8816f2d0
	if (ctx.cr6.lt) goto loc_8816F2D0;
loc_8816F300:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F300;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8816F308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816fa34
	if (!ctx.cr6.eq) goto loc_8816FA34;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8816f37c
	if (ctx.cr6.eq) goto loc_8816F37C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8816fa34
	if (!ctx.cr6.lt) goto loc_8816FA34;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8816f334
	if (ctx.cr6.lt) goto loc_8816F334;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8816F334:
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816F334;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816F338;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lbzx r28,r31,r20
	ctx.current_instruction = 0x8816F340;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r20.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x8816F34C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F350;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f35c
	if (!ctx.cr0.lt) goto loc_8816F35C;
	// bl 0x88156678
	ctx.lr = 0x8816F35C;
	sub_88156678(ctx, base);
loc_8816F35C:
	// lbzx r11,r31,r21
	ctx.current_instruction = 0x8816F35C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r21.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816f374
	if (ctx.cr6.eq) goto loc_8816F374;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x8816f960
	goto loc_8816F960;
loc_8816F374:
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// b 0x8816f960
	goto loc_8816F960;
loc_8816F37C:
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816F37C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816F380;
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
	ctx.current_instruction = 0x8816F390;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F394;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f3a0
	if (!ctx.cr0.lt) goto loc_8816F3A0;
	// bl 0x88156678
	ctx.lr = 0x8816F3A0;
	sub_88156678(ctx, base);
loc_8816F3A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8816f57c
	if (!ctx.cr6.eq) goto loc_8816F57C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816F3A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8816F3AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816fa34
	if (!ctx.cr6.eq) goto loc_8816FA34;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8816f3cc
	if (!ctx.cr6.eq) goto loc_8816F3CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r15,20(r31)
	ctx.current_instruction = 0x8816F3C4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x8816f4f0
	goto loc_8816F4F0;
loc_8816F3CC:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x8816F3CC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816F3D0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x8816F3D8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x8816F3E8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8816f4b8
	if (ctx.cr6.lt) goto loc_8816F4B8;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F3F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x8816F408;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816F410;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8816f4b0
	if (!ctx.cr6.lt) goto loc_8816F4B0;
loc_8816F418:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8816F418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8816F41C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8816f444
	if (ctx.cr6.lt) goto loc_8816F444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x8816F434;
	sub_88156440(ctx, base);
loc_8816F434:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8816f418
	if (ctx.cr6.eq) goto loc_8816F418;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8816f4f0
	goto loc_8816F4F0;
loc_8816F444:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8816F444;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x8816F44C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x8816F454;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.current_instruction = 0x8816F458;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.current_instruction = 0x8816F460;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x8816F464;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F46C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x8816F470;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816F478;
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
	ctx.current_instruction = 0x8816F494;
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
	ctx.current_instruction = 0x8816F4AC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_8816F4B0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8816f4f0
	goto loc_8816F4F0;
loc_8816F4B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x8816F4C0;
	sub_88156500(ctx, base);
loc_8816F4C0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816F4C0;
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
	ctx.lr = 0x8816F4D8;
	sub_88156500(ctx, base);
loc_8816F4D8:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x8816F4E0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8816f4c0
	if (ctx.cr6.lt) goto loc_8816F4C0;
loc_8816F4F0:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F4F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8816F4F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816fa34
	if (!ctx.cr6.eq) goto loc_8816FA34;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8816fa34
	if (ctx.cr6.eq) goto loc_8816FA34;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8816fa34
	if (!ctx.cr6.lt) goto loc_8816FA34;
	// lbzx r10,r11,r21
	ctx.current_instruction = 0x8816F518;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// lbzx r28,r11,r20
	ctx.current_instruction = 0x8816F520;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x8816f538
	if (ctx.cr6.lt) goto loc_8816F538;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8816F52C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8816f53c
	goto loc_8816F53C;
loc_8816F538:
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8816F538;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8816F53C:
	// lbzx r9,r28,r10
	ctx.current_instruction = 0x8816F53C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816F544;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816F54C;
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
	ctx.current_instruction = 0x8816F55C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	ctx.current_instruction = 0x8816F560;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x8816f56c
	if (!ctx.cr0.lt) goto loc_8816F56C;
	// bl 0x88156678
	ctx.lr = 0x8816F56C;
	sub_88156678(ctx, base);
loc_8816F56C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816f960
	if (ctx.cr6.eq) goto loc_8816F960;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x8816f960
	goto loc_8816F960;
loc_8816F57C:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F57C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816F580;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816F584;
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
	ctx.current_instruction = 0x8816F594;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F598;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f5a4
	if (!ctx.cr0.lt) goto loc_8816F5A4;
	// bl 0x88156678
	ctx.lr = 0x8816F5A4;
	sub_88156678(ctx, base);
loc_8816F5A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8816f780
	if (!ctx.cr6.eq) goto loc_8816F780;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816F5AC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8816F5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8816fa34
	if (!ctx.cr6.eq) goto loc_8816FA34;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8816f5d0
	if (!ctx.cr6.eq) goto loc_8816F5D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r15,20(r31)
	ctx.current_instruction = 0x8816F5C8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x8816f6f4
	goto loc_8816F6F4;
loc_8816F5D0:
	// lbz r4,8(r24)
	ctx.current_instruction = 0x8816F5D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816F5D4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	ctx.current_instruction = 0x8816F5DC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.current_instruction = 0x8816F5EC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r29.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8816f6bc
	if (ctx.cr6.lt) goto loc_8816F6BC;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F5FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x8816F60C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x8816F614;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8816f6b4
	if (!ctx.cr6.lt) goto loc_8816F6B4;
loc_8816F61C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x8816F61C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8816F620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8816f648
	if (ctx.cr6.lt) goto loc_8816F648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x8816F638;
	sub_88156440(ctx, base);
loc_8816F638:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8816f61c
	if (ctx.cr6.eq) goto loc_8816F61C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8816f6f4
	goto loc_8816F6F4;
loc_8816F648:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8816F648;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x8816F650;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x8816F658;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x8816F65C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x8816F664;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x8816F668;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F670;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x8816F674;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816F67C;
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
	ctx.current_instruction = 0x8816F698;
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
	ctx.current_instruction = 0x8816F6B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_8816F6B4:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x8816f6f4
	goto loc_8816F6F4;
loc_8816F6BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x8816F6C4;
	sub_88156500(ctx, base);
loc_8816F6C4:
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816F6C4;
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
	ctx.lr = 0x8816F6DC;
	sub_88156500(ctx, base);
loc_8816F6DC:
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.current_instruction = 0x8816F6E4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8816f6c4
	if (ctx.cr6.lt) goto loc_8816F6C4;
loc_8816F6F4:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F6F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.current_instruction = 0x8816F6FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816fa34
	if (!ctx.cr6.eq) goto loc_8816FA34;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8816fa34
	if (ctx.cr6.eq) goto loc_8816FA34;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8816fa34
	if (!ctx.cr6.lt) goto loc_8816FA34;
	// lbzx r10,r11,r21
	ctx.current_instruction = 0x8816F71C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// lbzx r11,r11,r20
	ctx.current_instruction = 0x8816F724;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// blt cr6,0x8816f73c
	if (ctx.cr6.lt) goto loc_8816F73C;
	// lbzx r10,r31,r14
	ctx.current_instruction = 0x8816F730;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r14.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x8816f744
	goto loc_8816F744;
loc_8816F73C:
	// lwz r10,92(r1)
	ctx.current_instruction = 0x8816F73C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lbzx r10,r31,r10
	ctx.current_instruction = 0x8816F740;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
loc_8816F744:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816F748;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816F74C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x8816F760;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F764;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f770
	if (!ctx.cr0.lt) goto loc_8816F770;
	// bl 0x88156678
	ctx.lr = 0x8816F770;
	sub_88156678(ctx, base);
loc_8816F770:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8816f960
	if (ctx.cr6.eq) goto loc_8816F960;
	// neg r31,r31
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// b 0x8816f960
	goto loc_8816F960;
loc_8816F780:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F780;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x8816F784;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x8816F788;
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
	ctx.current_instruction = 0x8816F798;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F79C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f7a8
	if (!ctx.cr0.lt) goto loc_8816F7A8;
	// bl 0x88156678
	ctx.lr = 0x8816F7A8;
	sub_88156678(ctx, base);
loc_8816F7A8:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816F7A8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F7B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8816f820
	if (!ctx.cr6.lt) goto loc_8816F820;
loc_8816F7C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816f820
	if (ctx.cr6.eq) goto loc_8816F820;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816F7D4;
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
	ctx.current_instruction = 0x8816F7F8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816F800;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816f810
	if (!ctx.cr0.lt) goto loc_8816F810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816F810;
	sub_88156678(ctx, base);
loc_8816F810:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F810;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816f7c8
	if (ctx.cr6.gt) goto loc_8816F7C8;
loc_8816F820:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816F824;
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
	ctx.current_instruction = 0x8816F83C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816F848;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816f858
	if (!ctx.cr0.lt) goto loc_8816F858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816F858;
	sub_88156678(ctx, base);
loc_8816F858:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F858;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// ld r11,0(r3)
	ctx.current_instruction = 0x8816F860;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.current_instruction = 0x8816F864;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	ctx.current_instruction = 0x8816F870;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F874;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f880
	if (!ctx.cr0.lt) goto loc_8816F880;
	// bl 0x88156678
	ctx.lr = 0x8816F880;
	sub_88156678(ctx, base);
loc_8816F880:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816F880;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,12
	ctx.r30.s64 = 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F88C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x8816f8f4
	if (!ctx.cr6.lt) goto loc_8816F8F4;
loc_8816F89C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816f8f4
	if (ctx.cr6.eq) goto loc_8816F8F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816F8A8;
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
	ctx.current_instruction = 0x8816F8CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816F8D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816f8e4
	if (!ctx.cr0.lt) goto loc_8816F8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816F8E4;
	sub_88156678(ctx, base);
loc_8816F8E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816F8E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816f89c
	if (ctx.cr6.gt) goto loc_8816F89C;
loc_8816F8F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816F8F8;
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
	ctx.current_instruction = 0x8816F910;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816F91C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816f92c
	if (!ctx.cr0.lt) goto loc_8816F92C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816F92C;
	sub_88156678(ctx, base);
loc_8816F92C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,2047
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2047, ctx.xer);
	// ble cr6,0x8816f93c
	if (!ctx.cr6.gt) goto loc_8816F93C;
	// addi r31,r30,-4096
	ctx.r31.s64 = ctx.r30.s64 + -4096;
loc_8816F93C:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816F93C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r11,0(r3)
	ctx.current_instruction = 0x8816F940;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.current_instruction = 0x8816F944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	ctx.current_instruction = 0x8816F950;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816F954;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816f960
	if (!ctx.cr0.lt) goto loc_8816F960;
	// bl 0x88156678
	ctx.lr = 0x8816F960;
	sub_88156678(ctx, base);
loc_8816F960:
	// lwz r11,84(r27)
	ctx.current_instruction = 0x8816F960;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8816F964;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816fa34
	if (!ctx.cr6.eq) goto loc_8816FA34;
	// add r11,r28,r23
	ctx.r11.u64 = ctx.r28.u64 + ctx.r23.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8816fa34
	if (!ctx.cr6.lt) goto loc_8816FA34;
	// lwz r10,1832(r27)
	ctx.current_instruction = 0x8816F97C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1832);
	// lbzx r10,r10,r11
	ctx.current_instruction = 0x8816F980;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8816f9ac
	if (ctx.cr6.eq) goto loc_8816F9AC;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8816F994;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r5,80(r1)
	ctx.current_instruction = 0x8816F9A8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_8816F9AC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8816f9cc
	if (!ctx.cr6.eq) goto loc_8816F9CC;
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8816F9B4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x8816F9B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// lwz r8,308(r27)
	ctx.current_instruction = 0x8816F9BC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 308);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r8,r7,r9
	ctx.current_instruction = 0x8816F9C4;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x8816fa20
	goto loc_8816FA20;
loc_8816F9CC:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8816f9ec
	if (!ctx.cr6.eq) goto loc_8816F9EC;
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8816F9D4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x8816F9D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// lwz r8,312(r27)
	ctx.current_instruction = 0x8816F9DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 312);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r8,r7,r9
	ctx.current_instruction = 0x8816F9E4;
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x8816fa20
	goto loc_8816FA20;
loc_8816F9EC:
	// lwz r8,1764(r27)
	ctx.current_instruction = 0x8816F9EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8816fa0c
	if (!ctx.cr6.gt) goto loc_8816FA0C;
	// lbzx r9,r11,r22
	ctx.current_instruction = 0x8816F9F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// mullw r10,r31,r18
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r6,r10,r17
	ctx.r6.u64 = ctx.r10.u64 + ctx.r17.u64;
	// b 0x8816fa1c
	goto loc_8816FA1C;
loc_8816FA0C:
	// lbzx r10,r11,r22
	ctx.current_instruction = 0x8816FA0C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// mullw r9,r31,r18
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r6,r17,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r17.u64;
loc_8816FA1C:
	// stwx r6,r7,r8
	ctx.current_instruction = 0x8816FA1C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
loc_8816FA20:
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8816fa40
	if (!ctx.cr6.eq) goto loc_8816FA40;
	// lwz r28,96(r1)
	ctx.current_instruction = 0x8816FA2C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8816f1c4
	goto loc_8816F1C4;
loc_8816FA34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_8816FA40:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8816FA40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1944(r27)
	ctx.current_instruction = 0x8816FA48;
	REX_STORE_U32(ctx.r27.u32 + 1944, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881853F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881853F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881853F8) {
			switch (rex_dispatch_address) {
				case 0x88185438:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881853F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88185438: goto loc_88185438;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881853FC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88185400;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88185404;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88185408;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.current_instruction = 0x8818540C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8818543c
	if (ctx.cr6.eq) goto loc_8818543C;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88185420;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88185428;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.current_instruction = 0x8818542C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88185438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88185438:
	// stw r30,0(r31)
	ctx.current_instruction = 0x88185438;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8818543C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88185440;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88185448;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8818544C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881875A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881875A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881875A0) {
			switch (rex_dispatch_address) {
				case 0x881875A8:
				case 0x881875C8:
				case 0x881875F8:
				case 0x8818765C:
				case 0x881876A4:
				case 0x881876EC:
				case 0x88187704:
				case 0x88187750:
				case 0x8818776C:
				case 0x881877B8:
				case 0x881877F8:
				case 0x881878C4:
				case 0x88187904:
				case 0x881879A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881875A0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881875A8: goto loc_881875A8;
		case 0x881875C8: goto loc_881875C8;
		case 0x881875F8: goto loc_881875F8;
		case 0x8818765C: goto loc_8818765C;
		case 0x881876A4: goto loc_881876A4;
		case 0x881876EC: goto loc_881876EC;
		case 0x88187704: goto loc_88187704;
		case 0x88187750: goto loc_88187750;
		case 0x8818776C: goto loc_8818776C;
		case 0x881877B8: goto loc_881877B8;
		case 0x881877F8: goto loc_881877F8;
		case 0x881878C4: goto loc_881878C4;
		case 0x88187904: goto loc_88187904;
		case 0x881879A0: goto loc_881879A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881875A8;
	__savegprlr_24(ctx, base);
loc_881875A8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881875A8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22408(r3)
	ctx.current_instruction = 0x881875AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,272(r3)
	ctx.current_instruction = 0x881875B4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881875d0
	if (!ctx.cr6.eq) goto loc_881875D0;
	// bl 0x88160580
	ctx.lr = 0x881875C8;
	sub_88160580(ctx, base);
loc_881875C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881875D0:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881875D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881875D4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881875D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r25,r10,1,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	ctx.current_instruction = 0x881875E8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881875EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881875f8
	if (!ctx.cr0.lt) goto loc_881875F8;
	// bl 0x88156678
	ctx.lr = 0x881875F8;
	sub_88156678(ctx, base);
loc_881875F8:
	// lwz r30,84(r31)
	ctx.current_instruction = 0x881875F8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// li r28,3
	ctx.r28.s64 = 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x88187604;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8818766c
	if (!ctx.cr6.lt) goto loc_8818766C;
loc_88187614:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818766c
	if (ctx.cr6.eq) goto loc_8818766C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x88187620;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r3,8(r30)
	ctx.current_instruction = 0x88187644;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x8818764C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8818765c
	if (!ctx.cr0.lt) goto loc_8818765C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8818765C;
	sub_88156678(ctx, base);
loc_8818765C:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8818765C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88187614
	if (ctx.cr6.gt) goto loc_88187614;
loc_8818766C:
	// subfic r11,r28,64
	ctx.xer.ca = ctx.r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r28.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x88187670;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
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
	// stw r6,8(r30)
	ctx.current_instruction = 0x88187688;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x88187694;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881876a4
	if (!ctx.cr0.lt) goto loc_881876A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881876A4;
	sub_88156678(ctx, base);
loc_881876A4:
	// cmplwi cr6,r28,7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 7, ctx.xer);
	// bgt cr6,0x88187a44
	if (ctx.cr6.gt) goto loc_88187A44;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x881876d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881876D8;
	// bdzf 4*cr6+eq,0x881876f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881876F0;
	// bdzf 4*cr6+eq,0x88187744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88187744;
	// bdzf 4*cr6+eq,0x88187760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88187760;
	// bdzf 4*cr6+eq,0x8818777c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8818777C;
	// bdzf 4*cr6+eq,0x88187888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88187888;
	// bne cr6,0x88187994
	if (!ctx.cr6.eq) goto loc_88187994;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x88187a48
	goto loc_88187A48;
loc_881876D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,84(r31)
	ctx.current_instruction = 0x881876DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,144(r31)
	ctx.current_instruction = 0x881876E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x8815fc68
	ctx.lr = 0x881876EC;
	sub_8815FC68(ctx, base);
loc_881876EC:
	// b 0x88187a48
	goto loc_88187A48;
loc_881876F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,84(r31)
	ctx.current_instruction = 0x881876F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r4,144(r31)
	ctx.current_instruction = 0x881876F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r26,2
	ctx.r26.s64 = 2;
	// bl 0x8815fc68
	ctx.lr = 0x88187704;
	sub_8815FC68(ctx, base);
loc_88187704:
	// lwz r10,140(r31)
	ctx.current_instruction = 0x88187704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,272(r31)
	ctx.current_instruction = 0x8818770C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88187a84
	if (!ctx.cr6.gt) goto loc_88187A84;
loc_88187718:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88187718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88187a30
	if (!ctx.cr6.gt) goto loc_88187A30;
loc_88187728:
	// add. r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x88187a04
	if (ctx.cr0.eq) goto loc_88187A04;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x881879b0
	if (!ctx.cr6.eq) goto loc_881879B0;
	// lwz r10,-24(r11)
	ctx.current_instruction = 0x88187738;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x88187a08
	goto loc_88187A08;
loc_88187744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,3
	ctx.r26.s64 = 3;
	// bl 0x881600e8
	ctx.lr = 0x88187750;
	sub_881600E8(ctx, base);
loc_88187750:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88187a48
	if (ctx.cr6.eq) goto loc_88187A48;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88187760:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// bl 0x881600e8
	ctx.lr = 0x8818776C;
	sub_881600E8(ctx, base);
loc_8818776C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88187704
	if (ctx.cr6.eq) goto loc_88187704;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8818777C:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x8818777C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r26,5
	ctx.r26.s64 = 5;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88187a48
	if (!ctx.cr6.gt) goto loc_88187A48;
loc_88187790:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x88187790;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x88187794;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x88187798;
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
	ctx.current_instruction = 0x881877A8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881877AC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881877b8
	if (!ctx.cr0.lt) goto loc_881877B8;
	// bl 0x88156678
	ctx.lr = 0x881877B8;
	sub_88156678(ctx, base);
loc_881877B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x88187830
	if (ctx.cr6.eq) goto loc_88187830;
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881877C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88187874
	if (!ctx.cr6.gt) goto loc_88187874;
loc_881877D0:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881877D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881877D4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881877D8;
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
	ctx.current_instruction = 0x881877E8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881877EC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881877f8
	if (!ctx.cr0.lt) goto loc_881877F8;
	// bl 0x88156678
	ctx.lr = 0x881877F8;
	sub_88156678(ctx, base);
loc_881877F8:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x881877F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.current_instruction = 0x88187814;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r29
	ctx.current_instruction = 0x8818781C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.current_instruction = 0x88187820;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881877d0
	if (ctx.cr6.lt) goto loc_881877D0;
	// b 0x88187874
	goto loc_88187874;
loc_88187830:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88187830;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88187874
	if (!ctx.cr6.gt) goto loc_88187874;
loc_88187840:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88187840;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r29
	ctx.current_instruction = 0x8818785C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r29
	ctx.current_instruction = 0x88187864;
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r7.u32);
	// lwz r6,136(r31)
	ctx.current_instruction = 0x88187868;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88187840
	if (ctx.cr6.lt) goto loc_88187840;
loc_88187874:
	// lwz r11,140(r31)
	ctx.current_instruction = 0x88187874;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88187790
	if (ctx.cr6.lt) goto loc_88187790;
	// b 0x88187a48
	goto loc_88187A48;
loc_88187888:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88187888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r26,6
	ctx.r26.s64 = 6;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88187a48
	if (!ctx.cr6.gt) goto loc_88187A48;
loc_8818789C:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x8818789C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881878A0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881878A4;
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
	ctx.current_instruction = 0x881878B4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881878B8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881878c4
	if (!ctx.cr0.lt) goto loc_881878C4;
	// bl 0x88156678
	ctx.lr = 0x881878C4;
	sub_88156678(ctx, base);
loc_881878C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8818793c
	if (ctx.cr6.eq) goto loc_8818793C;
	// lwz r11,140(r31)
	ctx.current_instruction = 0x881878CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88187980
	if (!ctx.cr6.gt) goto loc_88187980;
loc_881878DC:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881878DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881878E0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881878E4;
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
	ctx.current_instruction = 0x881878F4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881878F8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x88187904
	if (!ctx.cr0.lt) goto loc_88187904;
	// bl 0x88156678
	ctx.lr = 0x88187904;
	sub_88156678(ctx, base);
loc_88187904:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88187904;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.current_instruction = 0x88187920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r29
	ctx.current_instruction = 0x88187928;
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r8,140(r31)
	ctx.current_instruction = 0x8818792C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881878dc
	if (ctx.cr6.lt) goto loc_881878DC;
	// b 0x88187980
	goto loc_88187980;
loc_8818793C:
	// lwz r10,140(r31)
	ctx.current_instruction = 0x8818793C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88187980
	if (!ctx.cr6.gt) goto loc_88187980;
loc_8818794C:
	// lwz r10,136(r31)
	ctx.current_instruction = 0x8818794C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r29
	ctx.current_instruction = 0x88187968;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r29
	ctx.current_instruction = 0x88187970;
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r7.u32);
	// lwz r6,140(r31)
	ctx.current_instruction = 0x88187974;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8818794c
	if (ctx.cr6.lt) goto loc_8818794C;
loc_88187980:
	// lwz r11,136(r31)
	ctx.current_instruction = 0x88187980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8818789c
	if (ctx.cr6.lt) goto loc_8818789C;
	// b 0x88187a48
	goto loc_88187A48;
loc_88187994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,7
	ctx.r26.s64 = 7;
	// bl 0x88186770
	ctx.lr = 0x881879A0;
	sub_88186770(ctx, base);
loc_881879A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88187a48
	if (ctx.cr6.eq) goto loc_88187A48;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_881879B0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881879d8
	if (!ctx.cr6.eq) goto loc_881879D8;
	// lwz r10,136(r31)
	ctx.current_instruction = 0x881879B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r5,0(r8)
	ctx.current_instruction = 0x881879CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// b 0x88187a08
	goto loc_88187A08;
loc_881879D8:
	// lwz r9,136(r31)
	ctx.current_instruction = 0x881879D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r10,-24(r11)
	ctx.current_instruction = 0x881879DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r4,0(r5)
	ctx.current_instruction = 0x881879F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x88187a08
	if (ctx.cr6.eq) goto loc_88187A08;
loc_88187A04:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_88187A08:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88187A08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,31,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwimi r5,r9,0,1,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,0(r11)
	ctx.current_instruction = 0x88187A1C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r4,136(r31)
	ctx.current_instruction = 0x88187A24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x88187728
	if (ctx.cr6.lt) goto loc_88187728;
loc_88187A30:
	// lwz r10,140(r31)
	ctx.current_instruction = 0x88187A30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88187718
	if (ctx.cr6.lt) goto loc_88187718;
	// b 0x88187a84
	goto loc_88187A84;
loc_88187A44:
	// lwz r26,80(r1)
	ctx.current_instruction = 0x88187A44;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88187A48:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x88187a84
	if (ctx.cr6.eq) goto loc_88187A84;
	// lwz r11,144(r31)
	ctx.current_instruction = 0x88187A50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88187a84
	if (!ctx.cr6.gt) goto loc_88187A84;
	// addi r11,r29,-24
	ctx.r11.s64 = ctx.r29.s64 + -24;
loc_88187A64:
	// lwz r9,24(r11)
	ctx.current_instruction = 0x88187A64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwimi r8,r9,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stwu r8,24(r11)
	ctx.current_instruction = 0x88187A74;
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,144(r31)
	ctx.current_instruction = 0x88187A78;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x88187a64
	if (ctx.cr6.lt) goto loc_88187A64;
loc_88187A84:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x88187a9c
	if (!ctx.cr6.eq) goto loc_88187A9C;
	// stw r26,348(r31)
	ctx.current_instruction = 0x88187A8C;
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88187A9C:
	// cmpwi cr6,r24,5
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 5, ctx.xer);
	// bne cr6,0x88187ab4
	if (!ctx.cr6.eq) goto loc_88187AB4;
	// stw r26,21644(r31)
	ctx.current_instruction = 0x88187AA4;
	REX_STORE_U32(ctx.r31.u32 + 21644, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88187AB4:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bne cr6,0x88187acc
	if (!ctx.cr6.eq) goto loc_88187ACC;
	// stw r26,20708(r31)
	ctx.current_instruction = 0x88187ABC;
	REX_STORE_U32(ctx.r31.u32 + 20708, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88187ACC:
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// bne cr6,0x88187ae4
	if (!ctx.cr6.eq) goto loc_88187AE4;
	// stw r26,14868(r31)
	ctx.current_instruction = 0x88187AD4;
	REX_STORE_U32(ctx.r31.u32 + 14868, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88187AE4:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x88187afc
	if (!ctx.cr6.eq) goto loc_88187AFC;
	// stw r26,20692(r31)
	ctx.current_instruction = 0x88187AEC;
	REX_STORE_U32(ctx.r31.u32 + 20692, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_88187AFC:
	// stw r26,352(r31)
	ctx.current_instruction = 0x88187AFC;
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881973D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881973D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881973D8) {
			switch (rex_dispatch_address) {
				case 0x881973E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881973D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881973E0: goto loc_881973E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881973E0;
	__savegprlr_28(ctx, base);
loc_881973E0:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	ctx.current_instruction = 0x881973E4;
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v21,-1
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_set1_epi8(char(0xFF)));
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltish v22,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_set1_epi16(short(0x1)));
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// neg r8,r7
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// vspltish v10,15
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xF)));
	// dcbt r8,r11
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r5,r11
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r7,r11
	// neg r7,r4
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// dcbt r7,r11
	// dcbt r0,r11
	// dcbt r4,r11
	// dcbt r10,r11
	// dcbt r9,r11
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lbz r5,2(r3)
	ctx.current_instruction = 0x8819744C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x88197454;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r5,r5,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r5.u64;
	// srawi r31,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x881974a0
	if (!ctx.cr6.lt) goto loc_881974A0;
loc_88197470:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88197800
	if (!ctx.cr6.gt) goto loc_88197800;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lbzu r5,4(r11)
	ctx.current_instruction = 0x8819747C;
	ea = 4 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// lbz r31,2(r3)
	ctx.current_instruction = 0x88197484;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// srawi r31,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x88197470
	if (ctx.cr6.lt) goto loc_88197470;
loc_881974A0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88197800
	if (!ctx.cr6.gt) goto loc_88197800;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// vpkswss128 v62,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v21.s32)));
	// beq cr6,0x881974b8
	if (ctx.cr6.eq) goto loc_881974B8;
	// vor128 v62,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
loc_881974B8:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvlx128 v60,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// neg r5,r10
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lvlx128 v58,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// neg r30,r9
	ctx.r30.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lvlx128 v63,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r31,16
	ctx.r31.s64 = 16;
	// lvlx128 v47,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,36
	ctx.r29.s64 = ctx.r1.s64 + 36;
	// lvrx128 v51,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r28,-30719
	ctx.r28.s64 = -2013200384;
	// lvrx128 v55,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v24,v60,v51
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v54,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v53,r5,r3
	temp.u32 = ctx.r5.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lvlx128 v52,r30,r3
	temp.u32 = ctx.r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v30,v53,v55
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v29,v52,v54
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v49,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v27,v58,v49
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvrx128 v56,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v63,v57
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmrghb v6,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v31,v61,v56
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v48,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v50,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v59,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v2,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v23,v59,v50
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vsubshs v4,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v3,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v26,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// addi r10,r1,36
	ctx.r10.s64 = ctx.r1.s64 + 36;
	// vsubshs v2,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r9,r28,25920
	ctx.r9.s64 = ctx.r28.s64 + 25920;
	// vmrghb v7,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v46,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addic. r11,r6,-8
	ctx.xer.ca = ctx.r6.u32 > 7;
	ctx.r11.s64 = ctx.r6.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vsubshs v3,v5,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v1,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v19,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvlx128 v45,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubshs v9,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// vaddshs v17,v25,v4
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v1,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v20,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v14,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v18,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v16,v20,v3
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v7,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v8,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v25,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v6,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v2,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v4,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsubshs v17,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v19,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v5,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v20,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vsrah v8,v4,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v15,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vsubshs v18,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v6,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsplth v25,v20,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsrah v9,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v16,v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaxsh v14,v5,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsrah v6,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v4,v0,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vsrah v2,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vminsh v5,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vmaxsh v6,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsrah v1,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v44,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsubshs v4,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcmpgtsh v20,v25,v6
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vcmpgtsh v19,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vand128 v43,v44,v1
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v18,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// vaddshs v17,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vperm128 v42,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsrah v16,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v41,v16,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v40,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// vand128 v15,v40,v43
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vminsh v14,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vxor v8,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsubshs v6,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vand128 v61,v6,v62
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// ble 0x881977e0
	if (!ctx.cr0.gt) goto loc_881977E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x88197690
	if (!ctx.cr6.eq) goto loc_88197690;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lbz r10,2(r10)
	ctx.current_instruction = 0x88197668;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r9,2(r11)
	ctx.current_instruction = 0x8819766C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r3,r7,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x881977e0
	if (ctx.cr6.lt) goto loc_881977E0;
	// vpkswss128 v62,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v21.s32)));
	// b 0x881976e0
	goto loc_881976E0;
loc_88197690:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x881976e0
	if (!ctx.cr6.eq) goto loc_881976E0;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lbz r9,2(r10)
	ctx.current_instruction = 0x8819769C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881976A0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// srawi r6,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// subf r9,r6,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r6.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x881976dc
	if (!ctx.cr6.lt) goto loc_881976DC;
	// lbz r11,6(r11)
	ctx.current_instruction = 0x881976BC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,6(r10)
	ctx.current_instruction = 0x881976C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x881977e0
	if (ctx.cr6.lt) goto loc_881977E0;
loc_881976DC:
	// vor128 v62,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v21.u8));
loc_881976E0:
	// vmrglb v4,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v8,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v3,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v1,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v2,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v9,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v1,v1,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v31,v6,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v30,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v26,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v21,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v20,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v19,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v18,v28,v9
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v17,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v16,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v15,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v8,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v4,v9,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v3,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v6,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v4,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v1,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vperm v31,v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsrah v9,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v29,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v28,v5,v1
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v27,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v8,v8,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubshs v26,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vminsh v6,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vxor128 v39,v27,v9
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtsh v25,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsrah v22,v26,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v0,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vcmpgtsh v21,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vand128 v38,v39,v22
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// vslh v20,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// vaddshs v19,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vperm128 v37,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsrah v18,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v36,v18,v63
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v35,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vand128 v17,v35,v38
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vminsh v16,v11,v17
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vxor v15,v16,v9
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vsubshs v14,v15,v9
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vand128 v0,v14,v62
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
loc_881977E0:
	// vpkshss128 v0,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// vsububm v13,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_sub_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddubm v12,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx v13,0,r11
	ctx.current_instruction = 0x881977F0;
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r11,r31
	ctx.current_instruction = 0x881977F4;
	ea = ctx.r11.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stvlx v12,0,r5
	ctx.current_instruction = 0x881977F8;
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r5,r31
	ctx.current_instruction = 0x881977FC;
	ea = ctx.r5.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
loc_88197800:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ACC90) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ACC90);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ACC90;
	ctx.current_instruction = 0x881ACC90;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x881acdbc
	if (!ctx.cr0.gt) goto loc_881ACDBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_881ACCA8:
	// lbz r11,0(r4)
	ctx.current_instruction = 0x881ACCA8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	ctx.current_instruction = 0x881ACCAC;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r8,0(r5)
	ctx.current_instruction = 0x881ACCB0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r8,1(r3)
	ctx.current_instruction = 0x881ACCB4;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// lbz r11,1(r4)
	ctx.current_instruction = 0x881ACCB8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,2(r3)
	ctx.current_instruction = 0x881ACCBC;
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// lbz r8,0(r6)
	ctx.current_instruction = 0x881ACCC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stb r8,3(r3)
	ctx.current_instruction = 0x881ACCC4;
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lbz r11,2(r4)
	ctx.current_instruction = 0x881ACCC8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stb r11,4(r3)
	ctx.current_instruction = 0x881ACCCC;
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lbz r8,1(r5)
	ctx.current_instruction = 0x881ACCD0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r8,5(r3)
	ctx.current_instruction = 0x881ACCD4;
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// lbz r11,3(r4)
	ctx.current_instruction = 0x881ACCD8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stb r11,6(r3)
	ctx.current_instruction = 0x881ACCDC;
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// lbz r8,1(r6)
	ctx.current_instruction = 0x881ACCE0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// stb r8,7(r3)
	ctx.current_instruction = 0x881ACCE4;
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r8.u8);
	// lbz r11,4(r4)
	ctx.current_instruction = 0x881ACCE8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,8(r3)
	ctx.current_instruction = 0x881ACCEC;
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lbz r8,2(r5)
	ctx.current_instruction = 0x881ACCF0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// stb r8,9(r3)
	ctx.current_instruction = 0x881ACCF4;
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// lbz r11,5(r4)
	ctx.current_instruction = 0x881ACCF8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stb r11,10(r3)
	ctx.current_instruction = 0x881ACCFC;
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// lbz r8,2(r6)
	ctx.current_instruction = 0x881ACD00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// stb r8,11(r3)
	ctx.current_instruction = 0x881ACD04;
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// lbz r11,6(r4)
	ctx.current_instruction = 0x881ACD08;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// stb r11,12(r3)
	ctx.current_instruction = 0x881ACD0C;
	REX_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// lbz r8,3(r5)
	ctx.current_instruction = 0x881ACD10;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// stb r8,13(r3)
	ctx.current_instruction = 0x881ACD14;
	REX_STORE_U8(ctx.r3.u32 + 13, ctx.r8.u8);
	// lbz r11,7(r4)
	ctx.current_instruction = 0x881ACD18;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// stb r11,14(r3)
	ctx.current_instruction = 0x881ACD1C;
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// lbz r8,3(r6)
	ctx.current_instruction = 0x881ACD20;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// stb r8,15(r3)
	ctx.current_instruction = 0x881ACD24;
	REX_STORE_U8(ctx.r3.u32 + 15, ctx.r8.u8);
	// lbz r11,8(r4)
	ctx.current_instruction = 0x881ACD28;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// stb r11,16(r3)
	ctx.current_instruction = 0x881ACD2C;
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lbz r8,4(r5)
	ctx.current_instruction = 0x881ACD30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// stb r8,17(r3)
	ctx.current_instruction = 0x881ACD34;
	REX_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// lbz r11,9(r4)
	ctx.current_instruction = 0x881ACD38;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// stb r11,18(r3)
	ctx.current_instruction = 0x881ACD3C;
	REX_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// lbz r8,4(r6)
	ctx.current_instruction = 0x881ACD40;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// stb r8,19(r3)
	ctx.current_instruction = 0x881ACD44;
	REX_STORE_U8(ctx.r3.u32 + 19, ctx.r8.u8);
	// lbz r11,10(r4)
	ctx.current_instruction = 0x881ACD48;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// stb r11,20(r3)
	ctx.current_instruction = 0x881ACD4C;
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lbz r8,5(r5)
	ctx.current_instruction = 0x881ACD50;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// stb r8,21(r3)
	ctx.current_instruction = 0x881ACD54;
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r8.u8);
	// lbz r11,11(r4)
	ctx.current_instruction = 0x881ACD58;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// stb r11,22(r3)
	ctx.current_instruction = 0x881ACD5C;
	REX_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// lbz r8,5(r6)
	ctx.current_instruction = 0x881ACD60;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// stb r8,23(r3)
	ctx.current_instruction = 0x881ACD64;
	REX_STORE_U8(ctx.r3.u32 + 23, ctx.r8.u8);
	// lbz r11,12(r4)
	ctx.current_instruction = 0x881ACD68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 12);
	// stb r11,24(r3)
	ctx.current_instruction = 0x881ACD6C;
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// lbz r8,6(r5)
	ctx.current_instruction = 0x881ACD70;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// stb r8,25(r3)
	ctx.current_instruction = 0x881ACD74;
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r8.u8);
	// lbz r11,13(r4)
	ctx.current_instruction = 0x881ACD78;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 13);
	// stb r11,26(r3)
	ctx.current_instruction = 0x881ACD7C;
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// lbz r8,6(r6)
	ctx.current_instruction = 0x881ACD80;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// stb r8,27(r3)
	ctx.current_instruction = 0x881ACD84;
	REX_STORE_U8(ctx.r3.u32 + 27, ctx.r8.u8);
	// lbz r11,14(r4)
	ctx.current_instruction = 0x881ACD88;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 14);
	// stb r11,28(r3)
	ctx.current_instruction = 0x881ACD8C;
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lbz r8,7(r5)
	ctx.current_instruction = 0x881ACD90;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stb r8,29(r3)
	ctx.current_instruction = 0x881ACD98;
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r8.u8);
	// lbz r11,15(r4)
	ctx.current_instruction = 0x881ACD9C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stb r11,30(r3)
	ctx.current_instruction = 0x881ACDA4;
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// lbz r8,7(r6)
	ctx.current_instruction = 0x881ACDA8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// stb r8,31(r3)
	ctx.current_instruction = 0x881ACDB0;
	REX_STORE_U8(ctx.r3.u32 + 31, ctx.r8.u8);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x881acca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ACCA8;
loc_881ACDBC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881ace04
	if (!ctx.cr6.lt) goto loc_881ACE04;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881ACDD0:
	// lbz r11,0(r4)
	ctx.current_instruction = 0x881ACDD0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	ctx.current_instruction = 0x881ACDD4;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r5)
	ctx.current_instruction = 0x881ACDD8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r10,1(r3)
	ctx.current_instruction = 0x881ACDE0;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,1(r4)
	ctx.current_instruction = 0x881ACDE4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stb r9,2(r3)
	ctx.current_instruction = 0x881ACDEC;
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,0(r6)
	ctx.current_instruction = 0x881ACDF0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r8,3(r3)
	ctx.current_instruction = 0x881ACDF8;
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x881acdd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881ACDD0;
loc_881ACE04:
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lbz r11,0(r4)
	ctx.current_instruction = 0x881ACE10;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	ctx.current_instruction = 0x881ACE14;
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r5)
	ctx.current_instruction = 0x881ACE18;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// stb r10,1(r3)
	ctx.current_instruction = 0x881ACE1C;
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,0(r6)
	ctx.current_instruction = 0x881ACE20;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// stb r9,2(r3)
	ctx.current_instruction = 0x881ACE24;
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B0D38) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B0D38);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B0D38;
	ctx.current_instruction = 0x881B0D38;
	uint32_t ea{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x881b0d84
	if (!ctx.cr6.gt) goto loc_881B0D84;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B0D58:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x881B0D58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.current_instruction = 0x881B0D5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881B0D60;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	ctx.current_instruction = 0x881B0D78;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881b0d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0D58;
loc_881B0D84:
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwzx r7,r9,r3
	ctx.current_instruction = 0x881B0D9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r8,-4(r11)
	ctx.current_instruction = 0x881B0DA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r10,-4(r11)
	ctx.current_instruction = 0x881B0DB0;
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.current_instruction = 0x881B0DB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.current_instruction = 0x881B0DB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r3)
	ctx.current_instruction = 0x881B0DC8;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// ble cr6,0x881b0e0c
	if (!ctx.cr6.gt) goto loc_881B0E0C;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_881B0DE4:
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x881B0DE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x881B0DE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.current_instruction = 0x881B0DEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x881B0E00;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881b0de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0DE4;
loc_881B0E0C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_881B0E30:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x881B0E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stw r11,4(r10)
	ctx.current_instruction = 0x881B0E3C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x881b0e54
	if (!ctx.cr6.gt) goto loc_881B0E54;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_881B0E54:
	// stw r11,4(r10)
	ctx.current_instruction = 0x881B0E54;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r8,8(r10)
	ctx.current_instruction = 0x881B0E58;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b0e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B0E30;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881B29B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B29B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B29B0) {
			switch (rex_dispatch_address) {
				case 0x881B29B8:
				case 0x881B2CE4:
				case 0x881B2D18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B29B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B29B8: goto loc_881B29B8;
		case 0x881B2CE4: goto loc_881B2CE4;
		case 0x881B2D18: goto loc_881B2D18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B29B8;
	__savegprlr_14(ctx, base);
loc_881B29B8:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881B29B8;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r31,340(r1)
	ctx.current_instruction = 0x881B29C0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	ctx.current_instruction = 0x881B29C8;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stw r5,276(r1)
	ctx.current_instruction = 0x881B29CC;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	ctx.current_instruction = 0x881B29D8;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// li r15,0
	ctx.r15.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x881b2cbc
	if (!ctx.cr6.gt) goto loc_881B2CBC;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// lwz r9,324(r1)
	ctx.current_instruction = 0x881B29F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r29,r7,-4
	ctx.r29.s64 = ctx.r7.s64 + -4;
	// addi r23,r7,-2
	ctx.r23.s64 = ctx.r7.s64 + -2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r8,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r29,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r17,r23,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r10,r31
	ctx.r21.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r20,r7,-8
	ctx.r20.s64 = ctx.r7.s64 + -8;
	// addi r22,r7,-6
	ctx.r22.s64 = ctx.r7.s64 + -6;
	// mullw r4,r16,r9
	ctx.r4.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r9.s32);
	// li r8,255
	ctx.r8.s64 = 255;
loc_881B2A20:
	// lbz r10,2(r11)
	ctx.current_instruction = 0x881B2A20;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r30,0(r11)
	ctx.current_instruction = 0x881B2A28;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// subfic r3,r10,5
	ctx.xer.ca = ctx.r10.u32 <= 5;
	ctx.r3.u64 = static_cast<uint64_t>(5) - ctx.r10.u64;
	// lbz r27,4(r11)
	ctx.current_instruction = 0x881B2A34;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mulli r28,r30,34
	ctx.r28.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(34));
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,0(r31)
	ctx.current_instruction = 0x881B2A58;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lbz r3,0(r11)
	ctx.current_instruction = 0x881B2A5C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r28,2(r11)
	ctx.current_instruction = 0x881B2A60;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r27,r28,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// mulli r30,r3,25
	ctx.r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(25));
	// subf r3,r28,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r28.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 15;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,4(r31)
	ctx.current_instruction = 0x881B2A7C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lbz r3,4(r11)
	ctx.current_instruction = 0x881B2A80;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,2(r11)
	ctx.current_instruction = 0x881B2A84;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r30,6(r11)
	ctx.current_instruction = 0x881B2A88;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r27,0(r11)
	ctx.current_instruction = 0x881B2A8C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// subf r3,r3,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r3.u64;
	// rotlwi r27,r28,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// subf r27,r28,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r28.u64;
	// rlwinm r28,r3,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,8(r31)
	ctx.current_instruction = 0x881B2ABC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lbz r3,4(r11)
	ctx.current_instruction = 0x881B2AC0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r27,0(r11)
	ctx.current_instruction = 0x881B2AC4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,2(r11)
	ctx.current_instruction = 0x881B2AC8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r25,r30,3
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// rotlwi r28,r3,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// subf r30,r30,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r30.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r3,r27,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r27.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 15;
	// srawi r3,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 5;
	// stw r3,12(r31)
	ctx.current_instruction = 0x881B2AF4;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// ble cr6,0x881b2ba4
	if (!ctx.cr6.gt) goto loc_881B2BA4;
	// addi r3,r29,-5
	ctx.r3.s64 = ctx.r29.s64 + -5;
	// addi r28,r11,-2
	ctx.r28.s64 = ctx.r11.s64 + -2;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r24,r11,-4
	ctx.r24.s64 = ctx.r11.s64 + -4;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_881B2B18:
	// lbzx r30,r28,r10
	ctx.current_instruction = 0x881B2B18;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbzx r27,r9,r10
	ctx.current_instruction = 0x881B2B1C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lbzx r25,r10,r11
	ctx.current_instruction = 0x881B2B24;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r26,r5,r10
	ctx.current_instruction = 0x881B2B28;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// subf r30,r27,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r27.u64;
	// rotlwi r27,r25,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 3);
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// subf r27,r25,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r25.u64;
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// stw r30,4(r3)
	ctx.current_instruction = 0x881B2B54;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lbzx r30,r28,r10
	ctx.current_instruction = 0x881B2B58;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbzx r27,r10,r11
	ctx.current_instruction = 0x881B2B5C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r26,r24,r10
	ctx.current_instruction = 0x881B2B60;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// lbzx r25,r9,r10
	ctx.current_instruction = 0x881B2B64;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rotlwi r25,r25,1
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// subf r30,r30,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r30.u64;
	// rotlwi r25,r27,3
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r27.u32, 3);
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// subf r27,r27,r25
	ctx.r27.u64 = ctx.r25.u64 - ctx.r27.u64;
	// rlwinm r25,r30,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// srawi r30,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 5;
	// stwu r30,8(r3)
	ctx.current_instruction = 0x881B2B98;
	ea = 8 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x881b2b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2B18;
	// lwz r26,308(r1)
	ctx.current_instruction = 0x881B2BA0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_881B2BA4:
	// lbzx r5,r29,r11
	ctx.current_instruction = 0x881B2BA4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbzx r10,r22,r11
	ctx.current_instruction = 0x881B2BAC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rotlwi r3,r5,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// lbzx r28,r23,r11
	ctx.current_instruction = 0x881B2BB8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// stwx r5,r19,r31
	ctx.current_instruction = 0x881B2BE0;
	REX_STORE_U32(ctx.r19.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbzx r10,r22,r11
	ctx.current_instruction = 0x881B2BE4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r3,r29,r11
	ctx.current_instruction = 0x881B2BE8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r5,r20,r11
	ctx.current_instruction = 0x881B2BEC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r11.u32);
	// lbzx r9,r23,r11
	ctx.current_instruction = 0x881B2BF0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rotlwi r28,r3,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// subf r3,r3,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r3.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stwx r9,r18,r31
	ctx.current_instruction = 0x881B2C20;
	REX_STORE_U32(ctx.r18.u32 + ctx.r31.u32, ctx.r9.u32);
	// lbzx r5,r23,r11
	ctx.current_instruction = 0x881B2C24;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r3,r29,r11
	ctx.current_instruction = 0x881B2C28;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rotlwi r10,r3,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// mulli r10,r5,25
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(25));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// stwx r5,r17,r31
	ctx.current_instruction = 0x881B2C44;
	REX_STORE_U32(ctx.r17.u32 + ctx.r31.u32, ctx.r5.u32);
	// lbzx r5,r23,r11
	ctx.current_instruction = 0x881B2C48;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// lbzx r9,r22,r11
	ctx.current_instruction = 0x881B2C4C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// lbzx r3,r29,r11
	ctx.current_instruction = 0x881B2C50;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subfic r10,r3,5
	ctx.xer.ca = ctx.r3.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r3.u64;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r5,r5,34
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(34));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stw r9,-4(r21)
	ctx.current_instruction = 0x881B2C70;
	REX_STORE_U32(ctx.r21.u32 + -4, ctx.r9.u32);
	// ble cr6,0x881b2cac
	if (!ctx.cr6.gt) goto loc_881B2CAC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881B2C80:
	// lwz r10,0(r9)
	ctx.current_instruction = 0x881B2C80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x881b2c98
	if (!ctx.cr6.gt) goto loc_881B2C98;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
loc_881B2C98:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r10,r30,r11
	ctx.current_instruction = 0x881B2CA0;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x881b2c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2C80;
loc_881B2CAC:
	// add r15,r15,r16
	ctx.r15.u64 = ctx.r15.u64 + ctx.r16.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpw cr6,r15,r6
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881b2a20
	if (ctx.cr6.lt) goto loc_881B2A20;
loc_881B2CBC:
	// lwz r28,332(r1)
	ctx.current_instruction = 0x881B2CBC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,268(r1)
	ctx.current_instruction = 0x881B2CC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x881b2cf4
	if (!ctx.cr6.gt) goto loc_881B2CF4;
	// mullw r29,r16,r28
	ctx.r29.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r28.s32);
loc_881B2CD4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x881b26f8
	ctx.lr = 0x881B2CE4;
	sub_881B26F8(ctx, base);
loc_881B2CE4:
	// add r30,r30,r16
	ctx.r30.u64 = ctx.r30.u64 + ctx.r16.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x881b2cd4
	if (ctx.cr6.lt) goto loc_881B2CD4;
loc_881B2CF4:
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881B2CF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x881b2d28
	if (!ctx.cr6.gt) goto loc_881B2D28;
	// mullw r29,r16,r28
	ctx.r29.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r28.s32);
loc_881B2D08:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x881b26f8
	ctx.lr = 0x881B2D18;
	sub_881B26F8(ctx, base);
loc_881B2D18:
	// add r30,r30,r16
	ctx.r30.u64 = ctx.r30.u64 + ctx.r16.u64;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// cmpw cr6,r30,r14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x881b2d08
	if (ctx.cr6.lt) goto loc_881B2D08;
loc_881B2D28:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C1C38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C1C38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C1C38) {
			switch (rex_dispatch_address) {
				case 0x881C1C40:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C1C38;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881C1C40: goto loc_881C1C40;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881C1C40;
	__savegprlr_29(ctx, base);
loc_881C1C40:
	// rlwinm r30,r6,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x881C1C44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.current_instruction = 0x881C1C4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r7,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r6,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// srawi r10,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r7,140(r11)
	ctx.current_instruction = 0x881C1C60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lwz r11,136(r11)
	ctx.current_instruction = 0x881C1C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x881c1c94
	if (ctx.cr6.eq) goto loc_881C1C94;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x881c1c98
	goto loc_881C1C98;
loc_881C1C94:
	// li r10,-18
	ctx.r10.s64 = -18;
loc_881C1C98:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881c1ca8
	if (!ctx.cr6.lt) goto loc_881C1CA8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x881c1cb4
	goto loc_881C1CB4;
loc_881C1CA8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881c1cb8
	if (!ctx.cr6.gt) goto loc_881C1CB8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_881C1CB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881C1CB8:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881c1ccc
	if (!ctx.cr6.lt) goto loc_881C1CCC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881c1ce8
	goto loc_881C1CE8;
loc_881C1CCC:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881c1ce0
	if (!ctx.cr6.gt) goto loc_881C1CE0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x881c1ce8
	goto loc_881C1CE8;
loc_881C1CE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x881c1d10
	if (ctx.cr6.eq) goto loc_881C1D10;
loc_881C1CE8:
	// subf r11,r30,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r30.u64;
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	ctx.current_instruction = 0x881C1D08;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	ctx.current_instruction = 0x881C1D0C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_881C1D10:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C3888) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C3888);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C3888;
	ctx.current_instruction = 0x881C3888;
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3898:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x881C3898;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x881C389C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x881c3898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3898;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C38BC:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881C38BC;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881C38C0;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881c38bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C38BC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C38E0:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881C38E0;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881C38E4;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881c38e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C38E0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3904:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881C3904;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881C3908;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881c3904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3904;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3928:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881C3928;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881C392C;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881c3928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3928;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C394C:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881C394C;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881C3950;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881c394c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C394C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3970:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881C3970;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881C3974;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881c3970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3970;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881C3994:
	// lbzu r9,1(r10)
	ctx.current_instruction = 0x881C3994;
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,1(r11)
	ctx.current_instruction = 0x881C3998;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x881c3994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C3994;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C4410) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881C4410);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4410;
	ctx.current_instruction = 0x881C4410;
	// lwz r11,0(r4)
	ctx.current_instruction = 0x881C4410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// addi r9,r10,13736
	ctx.r9.s64 = ctx.r10.s64 + 13736;
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r8,r9
	ctx.current_instruction = 0x881C4420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stw r6,0(r4)
	ctx.current_instruction = 0x881C442C;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881C4430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.current_instruction = 0x881C4438;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// stw r8,0(r5)
	ctx.current_instruction = 0x881C4444;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,1796(r3)
	ctx.current_instruction = 0x881C4448;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1796);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,0(r4)
	ctx.current_instruction = 0x881C4454;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881c447c
	if (ctx.cr6.eq) goto loc_881C447C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c4474
	if (!ctx.cr6.gt) goto loc_881C4474;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x881c4478
	goto loc_881C4478;
loc_881C4474:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_881C4478:
	// stw r11,0(r4)
	ctx.current_instruction = 0x881C4478;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_881C447C:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881C447C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c44a0
	if (!ctx.cr6.gt) goto loc_881C44A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881C4498;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C44A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881C44A4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C6198) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C6198;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C6198) {
			switch (rex_dispatch_address) {
				case 0x881C61A0:
				case 0x881C623C:
				case 0x881C62C8:
				case 0x881C62E8:
				case 0x881C6368:
				case 0x881C63E4:
				case 0x881C642C:
				case 0x881C64B8:
				case 0x881C6500:
				case 0x881C6554:
				case 0x881C6638:
				case 0x881C6680:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C6198;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C61A0: goto loc_881C61A0;
		case 0x881C623C: goto loc_881C623C;
		case 0x881C62C8: goto loc_881C62C8;
		case 0x881C62E8: goto loc_881C62E8;
		case 0x881C6368: goto loc_881C6368;
		case 0x881C63E4: goto loc_881C63E4;
		case 0x881C642C: goto loc_881C642C;
		case 0x881C64B8: goto loc_881C64B8;
		case 0x881C6500: goto loc_881C6500;
		case 0x881C6554: goto loc_881C6554;
		case 0x881C6638: goto loc_881C6638;
		case 0x881C6680: goto loc_881C6680;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881C61A0;
	__savegprlr_23(ctx, base);
loc_881C61A0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881C61A0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881C61A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x881c61d4
	if (!ctx.cr6.eq) goto loc_881C61D4;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r11,20(r31)
	ctx.current_instruction = 0x881C61CC;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x881c6304
	goto loc_881C6304;
loc_881C61D4:
	// lbz r4,8(r5)
	ctx.current_instruction = 0x881C61D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C61D8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r5)
	ctx.current_instruction = 0x881C61E0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.current_instruction = 0x881C61F0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c62c0
	if (ctx.cr6.lt) goto loc_881C62C0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6200;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x881C6210;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	ctx.current_instruction = 0x881C6218;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x881c62b8
	if (!ctx.cr6.lt) goto loc_881C62B8;
loc_881C6220:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x881C6220;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881C6224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881c624c
	if (ctx.cr6.lt) goto loc_881C624C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x881C623C;
	sub_88156440(ctx, base);
loc_881C623C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x881c6220
	if (ctx.cr6.eq) goto loc_881C6220;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c6300
	goto loc_881C6300;
loc_881C624C:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x881C624C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x881C6254;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.current_instruction = 0x881C625C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.current_instruction = 0x881C6260;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,4(r11)
	ctx.current_instruction = 0x881C6268;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,5(r11)
	ctx.current_instruction = 0x881C626C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6274;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x881C6278;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.current_instruction = 0x881C6280;
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
	ctx.current_instruction = 0x881C629C;
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
	ctx.current_instruction = 0x881C62B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
loc_881C62B8:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x881c6300
	goto loc_881C6300;
loc_881C62C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156500
	ctx.lr = 0x881C62C8;
	sub_88156500(ctx, base);
loc_881C62C8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_881C62D0:
	// ld r11,0(r31)
	ctx.current_instruction = 0x881C62D0;
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
	ctx.lr = 0x881C62E8;
	sub_88156500(ctx, base);
loc_881C62E8:
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.current_instruction = 0x881C62F0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x881c62d0
	if (ctx.cr6.lt) goto loc_881C62D0;
loc_881C6300:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_881C6304:
	// lwz r31,84(r25)
	ctx.current_instruction = 0x881C6304;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x881C6308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c6588
	if (!ctx.cr6.eq) goto loc_881C6588;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x881c6598
	if (ctx.cr6.eq) goto loc_881C6598;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881c6570
	if (ctx.cr6.eq) goto loc_881C6570;
	// lwz r11,14820(r25)
	ctx.current_instruction = 0x881C6324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c652c
	if (ctx.cr6.eq) goto loc_881C652C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x881c6458
	if (ctx.cr6.eq) goto loc_881C6458;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// beq cr6,0x881c6384
	if (ctx.cr6.eq) goto loc_881C6384;
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C6340;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C6344;
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
	ctx.current_instruction = 0x881C6354;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C6358;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881c6368
	if (!ctx.cr0.lt) goto loc_881C6368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6368;
	sub_88156678(ctx, base);
loc_881C6368:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// bne cr6,0x881c6564
	if (!ctx.cr6.eq) goto loc_881C6564;
	// lwz r10,1764(r25)
	ctx.current_instruction = 0x881C6374;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1764);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,0(r10)
	ctx.current_instruction = 0x881C637C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// b 0x881c6578
	goto loc_881C6578;
loc_881C6384:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6384;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c63f4
	if (!ctx.cr6.lt) goto loc_881C63F4;
loc_881C639C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c63f4
	if (ctx.cr6.eq) goto loc_881C63F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C63A8;
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
	ctx.current_instruction = 0x881C63CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C63D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c63e4
	if (!ctx.cr0.lt) goto loc_881C63E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C63E4;
	sub_88156678(ctx, base);
loc_881C63E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C63E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c639c
	if (ctx.cr6.gt) goto loc_881C639C;
loc_881C63F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C63F8;
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
	ctx.current_instruction = 0x881C6410;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C641C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c642c
	if (!ctx.cr0.lt) goto loc_881C642C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C642C;
	sub_88156678(ctx, base);
loc_881C642C:
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x881c6520
	if (ctx.cr6.eq) goto loc_881C6520;
	// lwz r10,1764(r25)
	ctx.current_instruction = 0x881C6448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1764);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881C6450;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x881c6578
	goto loc_881C6578;
loc_881C6458:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881c64c8
	if (!ctx.cr6.lt) goto loc_881C64C8;
loc_881C6470:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c64c8
	if (ctx.cr6.eq) goto loc_881C64C8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C647C;
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
	ctx.current_instruction = 0x881C64A0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C64A8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c64b8
	if (!ctx.cr0.lt) goto loc_881C64B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C64B8;
	sub_88156678(ctx, base);
loc_881C64B8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C64B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6470
	if (ctx.cr6.gt) goto loc_881C6470;
loc_881C64C8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C64CC;
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
	ctx.current_instruction = 0x881C64E4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C64F0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6500
	if (!ctx.cr0.lt) goto loc_881C6500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6500;
	sub_88156678(ctx, base);
loc_881C6500:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// beq cr6,0x881c6520
	if (ctx.cr6.eq) goto loc_881C6520;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881C6520:
	// lwz r10,1764(r25)
	ctx.current_instruction = 0x881C6520;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1764);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881C6524;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x881c6578
	goto loc_881C6578;
loc_881C652C:
	// ld r10,0(r31)
	ctx.current_instruction = 0x881C652C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.current_instruction = 0x881C6530;
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
	ctx.current_instruction = 0x881C6540;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	ctx.current_instruction = 0x881C6544;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x881c6554
	if (!ctx.cr0.lt) goto loc_881C6554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6554;
	sub_88156678(ctx, base);
loc_881C6554:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// bne cr6,0x881c6564
	if (!ctx.cr6.eq) goto loc_881C6564;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881C6564:
	// lwz r10,1764(r25)
	ctx.current_instruction = 0x881C6564;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1764);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881C6568;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x881c6578
	goto loc_881C6578;
loc_881C6570:
	// lwz r11,1764(r25)
	ctx.current_instruction = 0x881C6570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1764);
	// stw r24,0(r11)
	ctx.current_instruction = 0x881C6574;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_881C6578:
	// lwz r11,84(r25)
	ctx.current_instruction = 0x881C6578;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881C657C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881c66a0
	if (ctx.cr6.eq) goto loc_881C66A0;
loc_881C6588:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	ctx.current_instruction = 0x881C658C;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881C6598:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bgt cr6,0x881c65b8
	if (ctx.cr6.gt) goto loc_881C65B8;
	// lwz r10,14820(r25)
	ctx.current_instruction = 0x881C65A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 14820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881c65b8
	if (ctx.cr6.eq) goto loc_881C65B8;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
loc_881C65B8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C65B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,9
	ctx.r30.s64 = ctx.r11.s64 + 9;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881c65d8
	if (!ctx.cr6.gt) goto loc_881C65D8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x881c6684
	goto loc_881C6684;
loc_881C65D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c65e8
	if (!ctx.cr6.eq) goto loc_881C65E8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x881c6684
	goto loc_881C6684;
loc_881C65E8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881c6648
	if (!ctx.cr6.gt) goto loc_881C6648;
loc_881C65F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6648
	if (ctx.cr6.eq) goto loc_881C6648;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C65FC;
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
	ctx.current_instruction = 0x881C6620;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6628;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c6638
	if (!ctx.cr0.lt) goto loc_881C6638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6638;
	sub_88156678(ctx, base);
loc_881C6638:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6638;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c65f0
	if (ctx.cr6.gt) goto loc_881C65F0;
loc_881C6648:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C664C;
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
	ctx.current_instruction = 0x881C6664;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6670;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6680
	if (!ctx.cr0.lt) goto loc_881C6680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6680;
	sub_88156678(ctx, base);
loc_881C6680:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_881C6684:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881c6698
	if (ctx.cr6.eq) goto loc_881C6698;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881C6698:
	// lwz r10,1764(r25)
	ctx.current_instruction = 0x881C6698;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1764);
	// stw r11,0(r10)
	ctx.current_instruction = 0x881C669C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_881C66A0:
	// stw r24,0(r23)
	ctx.current_instruction = 0x881C66A0;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DB168) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DB168;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DB168) {
			switch (rex_dispatch_address) {
				case 0x881DB170:
				case 0x881DB178:
				case 0x881DB2BC:
				case 0x881DB3E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DB168;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DB170: goto loc_881DB170;
		case 0x881DB178: goto loc_881DB178;
		case 0x881DB2BC: goto loc_881DB2BC;
		case 0x881DB3E8: goto loc_881DB3E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881DB170;
	__savegprlr_29(ctx, base);
loc_881DB170:
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef284
	ctx.lr = 0x881DB178;
	__savefpr_27(ctx, base);
loc_881DB178:
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,14468(r3)
	ctx.current_instruction = 0x881DB17C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14468);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,8316
	ctx.r11.s64 = ctx.r3.s64 + 8316;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x881db2c0
	if (!ctx.cr6.eq) goto loc_881DB2C0;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f6,13880(r8)
	ctx.current_instruction = 0x881DB1A8;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + 13880);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfd f0,13872(r7)
	ctx.current_instruction = 0x881DB1B0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 13872);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f7,13864(r6)
	ctx.current_instruction = 0x881DB1B8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r6.u32 + 13864);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f5,13856(r9)
	ctx.current_instruction = 0x881DB1C4;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + 13856);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f8,13848(r5)
	ctx.current_instruction = 0x881DB1CC;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r5.u32 + 13848);
	// lfd f9,13840(r4)
	ctx.current_instruction = 0x881DB1D0;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r4.u32 + 13840);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f10,13832(r3)
	ctx.current_instruction = 0x881DB1D8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r3.u32 + 13832);
	// lfd f11,13824(r8)
	ctx.current_instruction = 0x881DB1DC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 13824);
	// lfd f12,13816(r7)
	ctx.current_instruction = 0x881DB1E0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 13816);
	// lfd f13,13808(r6)
	ctx.current_instruction = 0x881DB1E4;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 13808);
loc_881DB1E8:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-128(r1)
	ctx.current_instruction = 0x881DB1F0;
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// lfd f4,-128(r1)
	ctx.current_instruction = 0x881DB1F4;
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f4,f3,f9
	ctx.f4.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fmadd f1,f3,f11,f10
	ctx.f1.f64 = std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f10.f64);
	// fmul f31,f3,f8
	ctx.f31.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f30,f3,f6
	ctx.f30.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f29,f3,f13
	ctx.f29.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fnmsub f28,f3,f5,f0
	ctx.f28.f64 = -std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmul f3,f3,f12
	ctx.f3.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fadd f27,f2,f0
	ctx.f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-112(r1)
	ctx.current_instruction = 0x881DB224;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-120(r1)
	ctx.current_instruction = 0x881DB22C;
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f1.u64);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-96(r1)
	ctx.current_instruction = 0x881DB234;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-104(r1)
	ctx.current_instruction = 0x881DB23C;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f1.u64);
	// fctiwz f2,f30
	ctx.f2.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f2,-88(r1)
	ctx.current_instruction = 0x881DB244;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f2.u64);
	// lwz r5,-100(r1)
	ctx.current_instruction = 0x881DB248;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r6,-108(r1)
	ctx.current_instruction = 0x881DB254;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stfd f1,-80(r1)
	ctx.current_instruction = 0x881DB258;
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f1.u64);
	// fctiwz f4,f28
	ctx.f4.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// lwz r7,-116(r1)
	ctx.current_instruction = 0x881DB260;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f4,-112(r1)
	ctx.current_instruction = 0x881DB264;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f2,f27
	ctx.f2.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f2,-104(r1)
	ctx.current_instruction = 0x881DB26C;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f2.u64);
	// lwz r4,-100(r1)
	ctx.current_instruction = 0x881DB270;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stfd f3,-104(r1)
	ctx.current_instruction = 0x881DB274;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f3.u64);
	// lwz r3,-92(r1)
	ctx.current_instruction = 0x881DB278;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r8,-84(r1)
	ctx.current_instruction = 0x881DB27C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r31,-76(r1)
	ctx.current_instruction = 0x881DB280;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-100(r1)
	ctx.current_instruction = 0x881DB284;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r30,-108(r1)
	ctx.current_instruction = 0x881DB288;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r5,-4092(r11)
	ctx.current_instruction = 0x881DB28C;
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// stw r6,-7164(r11)
	ctx.current_instruction = 0x881DB290;
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r6.u32);
	// stw r7,-2044(r11)
	ctx.current_instruction = 0x881DB294;
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r7.u32);
	// stw r4,-1020(r11)
	ctx.current_instruction = 0x881DB298;
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r4.u32);
	// stw r3,-6140(r11)
	ctx.current_instruction = 0x881DB29C;
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// stw r8,-3068(r11)
	ctx.current_instruction = 0x881DB2A0;
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r8.u32);
	// stw r31,-8188(r11)
	ctx.current_instruction = 0x881DB2A4;
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r31.u32);
	// stw r29,-5116(r11)
	ctx.current_instruction = 0x881DB2A8;
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r29.u32);
	// stwu r30,4(r11)
	ctx.current_instruction = 0x881DB2AC;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881db1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DB1E8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2d0
	ctx.lr = 0x881DB2BC;
	__restfpr_27(ctx, base);
loc_881DB2BC:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_881DB2C0:
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfd f6,13800(r8)
	ctx.current_instruction = 0x881DB2D4;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r8.u32 + 13800);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfd f7,13792(r7)
	ctx.current_instruction = 0x881DB2DC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + 13792);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f8,13784(r6)
	ctx.current_instruction = 0x881DB2E4;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r6.u32 + 13784);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lfd f5,13776(r9)
	ctx.current_instruction = 0x881DB2F0;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r9.u32 + 13776);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f9,13768(r5)
	ctx.current_instruction = 0x881DB2F8;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r5.u32 + 13768);
	// lfd f10,13760(r4)
	ctx.current_instruction = 0x881DB2FC;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 13760);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f11,13752(r3)
	ctx.current_instruction = 0x881DB304;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r3.u32 + 13752);
	// lfd f12,13744(r8)
	ctx.current_instruction = 0x881DB308;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 13744);
	// lfd f0,13872(r7)
	ctx.current_instruction = 0x881DB30C;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 13872);
	// lfd f13,13832(r6)
	ctx.current_instruction = 0x881DB310;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 13832);
loc_881DB314:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-80(r1)
	ctx.current_instruction = 0x881DB31C;
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
	// lfd f4,-80(r1)
	ctx.current_instruction = 0x881DB320;
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f1,f3,f8
	ctx.f1.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f4,f3,f12
	ctx.f4.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fnmsub f30,f3,f5,f0
	ctx.f30.f64 = -std::fma(ctx.f3.f64, ctx.f5.f64, -ctx.f0.f64);
	// fmadd f31,f3,f10,f13
	ctx.f31.f64 = std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f13.f64);
	// fmul f29,f3,f11
	ctx.f29.f64 = ctx.f3.f64 * ctx.f11.f64;
	// fmul f28,f3,f6
	ctx.f28.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f3,f3,f9
	ctx.f3.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fadd f27,f2,f0
	ctx.f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-88(r1)
	ctx.current_instruction = 0x881DB350;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-104(r1)
	ctx.current_instruction = 0x881DB358;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// lwz r7,-84(r1)
	ctx.current_instruction = 0x881DB35C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f4,f30
	ctx.f4.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f4,-88(r1)
	ctx.current_instruction = 0x881DB364;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r5,-100(r1)
	ctx.current_instruction = 0x881DB368;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-104(r1)
	ctx.current_instruction = 0x881DB370;
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-96(r1)
	ctx.current_instruction = 0x881DB378;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// lwz r4,-84(r1)
	ctx.current_instruction = 0x881DB37C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f1,f29
	ctx.f1.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// lwz r6,-92(r1)
	ctx.current_instruction = 0x881DB384;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stfd f1,-96(r1)
	ctx.current_instruction = 0x881DB388;
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// fctiwz f1,f3
	ctx.f1.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r31,-100(r1)
	ctx.current_instruction = 0x881DB390;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f27
	ctx.f4.s64 = std::isnan(ctx.f27.f64) ? int64_t(0x80000000U) : (ctx.f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f4,-88(r1)
	ctx.current_instruction = 0x881DB398;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r3,-84(r1)
	ctx.current_instruction = 0x881DB39C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// stfd f1,-88(r1)
	ctx.current_instruction = 0x881DB3A0;
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// lwz r8,-84(r1)
	ctx.current_instruction = 0x881DB3A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f2,f28
	ctx.f2.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// stfd f2,-112(r1)
	ctx.current_instruction = 0x881DB3AC;
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f2.u64);
	// lwz r30,-108(r1)
	ctx.current_instruction = 0x881DB3B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r7,-4092(r11)
	ctx.current_instruction = 0x881DB3B4;
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r7.u32);
	// stw r5,-8188(r11)
	ctx.current_instruction = 0x881DB3B8;
	REX_STORE_U32(ctx.r11.u32 + -8188, ctx.r5.u32);
	// stw r6,-2044(r11)
	ctx.current_instruction = 0x881DB3BC;
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r6.u32);
	// stw r31,-6140(r11)
	ctx.current_instruction = 0x881DB3C0;
	REX_STORE_U32(ctx.r11.u32 + -6140, ctx.r31.u32);
	// stw r3,-1020(r11)
	ctx.current_instruction = 0x881DB3C4;
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r3.u32);
	// stw r8,-7164(r11)
	ctx.current_instruction = 0x881DB3C8;
	REX_STORE_U32(ctx.r11.u32 + -7164, ctx.r8.u32);
	// lwz r8,-92(r1)
	ctx.current_instruction = 0x881DB3CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// stw r8,-5116(r11)
	ctx.current_instruction = 0x881DB3D0;
	REX_STORE_U32(ctx.r11.u32 + -5116, ctx.r8.u32);
	// stw r30,-3068(r11)
	ctx.current_instruction = 0x881DB3D4;
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r30.u32);
	// stwu r4,4(r11)
	ctx.current_instruction = 0x881DB3D8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x881db314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DB314;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x881ef2d0
	ctx.lr = 0x881DB3E8;
	__restfpr_27(ctx, base);
loc_881DB3E8:
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DE768) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DE768;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DE768) {
			switch (rex_dispatch_address) {
				case 0x881DE770:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DE768;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881DE770: goto loc_881DE770;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DE770;
	__savegprlr_14(ctx, base);
loc_881DE770:
	// lwz r28,92(r1)
	ctx.current_instruction = 0x881DE770;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// srawi r7,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 4;
	// ori r18,r11,32768
	ctx.r18.u64 = ctx.r11.u64 | 32768;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r21,r18,r11
	ctx.r21.u64 = ctx.r11.u64 - ctx.r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881de894
	if (!ctx.cr6.gt) goto loc_881DE894;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,84(r1)
	ctx.current_instruction = 0x881DE7A4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r17,r23,4,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,-160(r1)
	ctx.current_instruction = 0x881DE7B0;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.current_instruction = 0x881DE7B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_881DE7B8:
	// addi r19,r26,16
	ctx.r19.s64 = ctx.r26.s64 + 16;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881de7cc
	if (!ctx.cr6.gt) goto loc_881DE7CC;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_881DE7CC:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpw cr6,r21,r18
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x881de87c
	if (!ctx.cr6.gt) goto loc_881DE87C;
	// subf r20,r26,r25
	ctx.r20.u64 = ctx.r25.u64 - ctx.r26.u64;
	// mullw r22,r20,r6
	ctx.r22.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r6.s32);
loc_881DE7E0:
	// sraw r8,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r8.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mullw r31,r8,r5
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// sraw r7,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r7.s64 = ctx.r11.s32 >> temp.u32;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// sraw r30,r27,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r27.s32 < 0) & (((ctx.r27.s32 >> temp.u32) << temp.u32) != ctx.r27.s32);
	ctx.r30.s64 = ctx.r27.s32 >> temp.u32;
	// mullw r8,r11,r5
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r11,r30,r5
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x881de868
	if (!ctx.cr6.lt) goto loc_881DE868;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_881DE82C:
	// sraw r11,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// lbzx r16,r29,r11
	ctx.current_instruction = 0x881DE830;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + ctx.r23.u64;
	// lbzx r15,r30,r11
	ctx.current_instruction = 0x881DE838;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// rotlwi r16,r16,8
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 8);
	// lbzx r14,r7,r11
	ctx.current_instruction = 0x881DE840;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbzx r11,r31,r11
	ctx.current_instruction = 0x881DE844;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// or r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 | ctx.r15.u64;
	// rlwinm r16,r16,8,0,23
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// or r16,r16,r14
	ctx.r16.u64 = ctx.r16.u64 | ctx.r14.u64;
	// rlwinm r16,r16,8,0,23
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 | ctx.r11.u64;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881DE85C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// bdnz 0x881de82c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DE82C;
loc_881DE868:
	// subf r8,r22,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r22.u64;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x881de7e0
	if (ctx.cr6.lt) goto loc_881DE7E0;
loc_881DE87C:
	// lwz r11,-160(r1)
	ctx.current_instruction = 0x881DE87C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r24,r17,r24
	ctx.r24.u64 = ctx.r17.u64 + ctx.r24.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x881de7b8
	if (ctx.cr6.lt) goto loc_881DE7B8;
loc_881DE894:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E0A40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E0A40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E0A40) {
			switch (rex_dispatch_address) {
				case 0x881E0A48:
				case 0x881E0AE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E0A40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E0A48: goto loc_881E0A48;
		case 0x881E0AE4: goto loc_881E0AE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x881E0A48;
	__savegprlr_20(ctx, base);
loc_881E0A48:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881E0A48;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,300(r1)
	ctx.current_instruction = 0x881E0A4C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// srawi r11,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 31;
	// xor r31,r22,r11
	ctx.r31.u64 = ctx.r22.u64 ^ ctx.r11.u64;
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881e0a6c
	if (ctx.cr6.eq) goto loc_881E0A6C;
	// srawi r31,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r22.s32 >> 1;
loc_881E0A6C:
	// srawi r24,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r7.s32 >> 1;
	// srawi. r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ble 0x881e0ad8
	if (!ctx.cr0.gt) goto loc_881E0AD8;
	// lwz r28,316(r1)
	ctx.current_instruction = 0x881E0A7C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_881E0A88:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881e0ac8
	if (!ctx.cr6.gt) goto loc_881E0AC8;
	// add r27,r29,r6
	ctx.r27.u64 = ctx.r29.u64 + ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r26,r28,1
	ctx.r26.s64 = ctx.r28.s64 + 1;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_881E0AA8:
	// lbzx r21,r30,r5
	ctx.current_instruction = 0x881E0AA8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// lbzx r20,r27,r11
	ctx.current_instruction = 0x881E0AAC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stbx r21,r28,r31
	ctx.current_instruction = 0x881E0AB8;
	REX_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r21.u8);
	// stbx r20,r26,r31
	ctx.current_instruction = 0x881E0ABC;
	REX_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r20.u8);
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bdnz 0x881e0aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E0AA8;
loc_881E0AC8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne 0x881e0a88
	if (!ctx.cr0.eq) goto loc_881E0A88;
loc_881E0AD8:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x881dfe90
	ctx.lr = 0x881E0AE4;
	sub_881DFE90(ctx, base);
loc_881E0AE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E1A40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E1A40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E1A40) {
			switch (rex_dispatch_address) {
				case 0x881E1A48:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E1A40;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881E1A48: goto loc_881E1A48;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881E1A48;
	__savegprlr_14(ctx, base);
loc_881E1A48:
	// rlwinm r11,r7,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,76(r1)
	ctx.current_instruction = 0x881E1A4C;
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881E1A50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r31,92(r1)
	ctx.current_instruction = 0x881E1A58;
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
	// stw r29,-176(r1)
	ctx.current_instruction = 0x881E1A84;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
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
	// stw r30,-172(r1)
	ctx.current_instruction = 0x881E1AC4;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r30.u32);
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
	// bne cr6,0x881e1bcc
	if (!ctx.cr6.eq) goto loc_881E1BCC;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881e1cd4
	if (ctx.cr6.lt) goto loc_881E1CD4;
	// lwz r16,100(r1)
	ctx.current_instruction = 0x881E1AEC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r15,r29,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r16,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
loc_881E1AF8:
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
	// blt cr6,0x881e1bb8
	if (ctx.cr6.lt) goto loc_881E1BB8;
	// lwz r30,76(r1)
	ctx.current_instruction = 0x881E1B18;
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
loc_881E1B3C:
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
	// lbzx r26,r30,r8
	ctx.current_instruction = 0x881E1B50;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// lbzx r24,r29,r8
	ctx.current_instruction = 0x881E1B58;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// srawi r8,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 16;
	// lbzx r3,r21,r3
	ctx.current_instruction = 0x881E1B60;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// rotlwi r25,r26,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// rotlwi r26,r24,8
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r24.u32, 8);
	// lbzx r27,r27,r5
	ctx.current_instruction = 0x881E1B6C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// rotlwi r31,r3,16
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbzx r24,r30,r8
	ctx.current_instruction = 0x881E1B74;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r8,r29,r8
	ctx.current_instruction = 0x881E1B7C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// rotlwi r24,r24,24
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 24);
	// rotlwi r27,r8,24
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 24);
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
	ctx.current_instruction = 0x881E1BA0;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stwx r3,r20,r7
	ctx.current_instruction = 0x881E1BA4;
	REX_STORE_U32(ctx.r20.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// ble cr6,0x881e1b3c
	if (!ctx.cr6.gt) goto loc_881E1B3C;
	// lwz r29,-176(r1)
	ctx.current_instruction = 0x881E1BB0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r30,-172(r1)
	ctx.current_instruction = 0x881E1BB4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
loc_881E1BB8:
	// add r17,r15,r17
	ctx.r17.u64 = ctx.r15.u64 + ctx.r17.u64;
	// add r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 + ctx.r10.u64;
	// cmpw cr6,r17,r30
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881e1af8
	if (!ctx.cr6.gt) goto loc_881E1AF8;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881E1BCC:
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x881e1cd4
	if (ctx.cr6.lt) goto loc_881E1CD4;
	// lwz r16,100(r1)
	ctx.current_instruction = 0x881E1BD4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r15,r29,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r16,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
loc_881E1BE0:
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
	// blt cr6,0x881e1cc4
	if (ctx.cr6.lt) goto loc_881E1CC4;
	// lwz r30,76(r1)
	ctx.current_instruction = 0x881E1C00;
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
loc_881E1C28:
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
	// lbzx r26,r30,r7
	ctx.current_instruction = 0x881E1C3C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// lbzx r7,r29,r7
	ctx.current_instruction = 0x881E1C44;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// lbzx r3,r21,r3
	ctx.current_instruction = 0x881E1C48;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r3.u32);
	// rotlwi r25,r26,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r26.u32, 8);
	// lbzx r27,r27,r5
	ctx.current_instruction = 0x881E1C50;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// stw r7,-168(r1)
	ctx.current_instruction = 0x881E1C54;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// srawi r7,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 16;
	// lwz r31,-168(r1)
	ctx.current_instruction = 0x881E1C5C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r26,r31,8,0,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r3,r30,r7
	ctx.current_instruction = 0x881E1C68;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// lbzx r7,r29,r7
	ctx.current_instruction = 0x881E1C6C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r7.u32);
	// add r25,r25,r31
	ctx.r25.u64 = ctx.r25.u64 + ctx.r31.u64;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// stw r3,-168(r1)
	ctx.current_instruction = 0x881E1C7C;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r27,-168(r1)
	ctx.current_instruction = 0x881E1C84;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r27,r27,8,0,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// clrlwi r26,r25,16
	ctx.r26.u64 = ctx.r25.u32 & 0xFFFF;
	// clrlwi r7,r31,16
	ctx.r7.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// sth r26,0(r11)
	ctx.current_instruction = 0x881E1CA0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// sthx r7,r23,r11
	ctx.current_instruction = 0x881E1CA8;
	REX_STORE_U16(ctx.r23.u32 + ctx.r11.u32, ctx.r7.u16);
	// sth r31,2(r11)
	ctx.current_instruction = 0x881E1CAC;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// sthx r3,r20,r11
	ctx.current_instruction = 0x881E1CB0;
	REX_STORE_U16(ctx.r20.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x881e1c28
	if (!ctx.cr6.gt) goto loc_881E1C28;
	// lwz r29,-176(r1)
	ctx.current_instruction = 0x881E1CBC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r30,-172(r1)
	ctx.current_instruction = 0x881E1CC0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
loc_881E1CC4:
	// add r17,r15,r17
	ctx.r17.u64 = ctx.r15.u64 + ctx.r17.u64;
	// add r10,r14,r10
	ctx.r10.u64 = ctx.r14.u64 + ctx.r10.u64;
	// cmpw cr6,r17,r30
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x881e1be0
	if (!ctx.cr6.gt) goto loc_881E1BE0;
loc_881E1CD4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EA3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EA3C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EA3C0) {
			switch (rex_dispatch_address) {
				case 0x881EA3C8:
				case 0x881EA460:
				case 0x881EA4DC:
				case 0x881EA51C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EA3C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EA3C8: goto loc_881EA3C8;
		case 0x881EA460: goto loc_881EA460;
		case 0x881EA4DC: goto loc_881EA4DC;
		case 0x881EA51C: goto loc_881EA51C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881EA3C8;
	__savegprlr_22(ctx, base);
loc_881EA3C8:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881EA3C8;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stw r8,236(r1)
	ctx.current_instruction = 0x881EA3D0;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// addi r11,r4,87
	ctx.r11.s64 = ctx.r4.s64 + 87;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bne cr6,0x881ea40c
	if (!ctx.cr6.eq) goto loc_881EA40C;
	// lhz r22,0(r3)
	ctx.current_instruction = 0x881EA404;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x881ea410
	goto loc_881EA410;
loc_881EA40C:
	// li r22,0
	ctx.r22.s64 = 0;
loc_881EA410:
	// subf r10,r31,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r31.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x881ea478
	if (ctx.cr6.lt) goto loc_881EA478;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x881ea438
	if (ctx.cr6.lt) goto loc_881EA438;
loc_881EA430:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ea520
	goto loc_881EA520;
loc_881EA438:
	// subf r11,r8,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lwz r7,1424(r28)
	ctx.current_instruction = 0x881EA43C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 1424);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	ctx.current_instruction = 0x881EA44C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x88243720
	ctx.lr = 0x881EA460;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_881EA460:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x881ea430
	if (ctx.cr0.lt) goto loc_881EA430;
	// lwz r10,236(r1)
	ctx.current_instruction = 0x881EA468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x881EA46C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	ctx.current_instruction = 0x881EA474;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_881EA478:
	// subf r11,r8,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r8.u64;
	// sth r22,2(r31)
	ctx.current_instruction = 0x881EA47C;
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	ctx.current_instruction = 0x881EA484;
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r25,4(r31)
	ctx.current_instruction = 0x881EA48C;
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	ctx.current_instruction = 0x881EA494;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,24(r31)
	ctx.current_instruction = 0x881EA49C;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	ctx.current_instruction = 0x881EA4A4;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	ctx.current_instruction = 0x881EA4AC;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r7,5(r31)
	ctx.current_instruction = 0x881EA4B4;
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	ctx.current_instruction = 0x881EA4B8;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	ctx.current_instruction = 0x881EA4BC;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	ctx.current_instruction = 0x881EA4C0;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r11,48(r31)
	ctx.current_instruction = 0x881EA4C4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x881ea4e0
	if (ctx.cr0.eq) goto loc_881EA4E0;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881e9338
	ctx.lr = 0x881EA4DC;
	sub_881E9338(ctx, base);
loc_881EA4DC:
	// lwz r8,236(r1)
	ctx.current_instruction = 0x881EA4DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_881EA4E0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r31,r11,r28
	ctx.current_instruction = 0x881EA500;
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.current_instruction = 0x881EA504;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// stb r10,5(r30)
	ctx.current_instruction = 0x881EA508;
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	ctx.current_instruction = 0x881EA50C;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r25,4(r30)
	ctx.current_instruction = 0x881EA510;
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// sth r11,2(r30)
	ctx.current_instruction = 0x881EA514;
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x881e9b48
	ctx.lr = 0x881EA51C;
	sub_881E9B48(ctx, base);
loc_881EA51C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881EA520:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC8A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EC8A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC8A8;
	ctx.current_instruction = 0x881EC8A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x881ec818
	sub_881EC818(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881EC908) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881EC908;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881EC908) {
			switch (rex_dispatch_address) {
				case 0x881EC940:
				case 0x881EC94C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EC908;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881EC940: goto loc_881EC940;
		case 0x881EC94C: goto loc_881EC94C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881EC90C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881EC910;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881EC914;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,15376(r11)
	ctx.current_instruction = 0x881EC92C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15376);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.current_instruction = 0x881EC934;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881EC940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881EC940:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881ec954
	if (!ctx.cr0.lt) goto loc_881EC954;
	// bl 0x881ed488
	ctx.lr = 0x881EC94C;
	sub_881ED488(ctx, base);
loc_881EC94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x881ec960
	goto loc_881EC960;
loc_881EC954:
	// ld r11,136(r1)
	ctx.current_instruction = 0x881EC954;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	ctx.current_instruction = 0x881EC95C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_881EC960:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881EC964;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881EC96C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED200) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED200);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED200;
	ctx.current_instruction = 0x881ED200;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88243890
	__imp__MmFreePhysicalMemory(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ED218) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED218);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED218;
	ctx.current_instruction = 0x881ED218;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r11,1208(r11)
	ctx.current_instruction = 0x881ED21C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1208);
	// lwz r3,16(r11)
	ctx.current_instruction = 0x881ED220;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881ED4E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED4E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED4E0;
	ctx.current_instruction = 0x881ED4E0;
	// lhz r4,0(r3)
	ctx.current_instruction = 0x881ED4E0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.current_instruction = 0x881ED4E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x881ee7b0
	sub_881EE7B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ED560) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED560);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED560;
	ctx.current_instruction = 0x881ED560;
	// b 0x881ed488
	sub_881ED488(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881ED650) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881ED650);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881ED650;
	ctx.current_instruction = 0x881ED650;
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x881ed918
	if (ctx.cr6.lt) goto loc_881ED918;
loc_881ED674:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x881ed684
	if (ctx.cr6.lt) goto loc_881ED684;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_881ED684:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ctx.current_instruction = 0x881ED7E4;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ctx.current_instruction = 0x881ED7E8;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ctx.current_instruction = 0x881ED7EC;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ctx.current_instruction = 0x881ED7F0;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ctx.current_instruction = 0x881ED7F4;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ctx.current_instruction = 0x881ED7F8;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ctx.current_instruction = 0x881ED7FC;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ctx.current_instruction = 0x881ED800;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ctx.current_instruction = 0x881ED808;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ctx.current_instruction = 0x881ED80C;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ctx.current_instruction = 0x881ED810;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ctx.current_instruction = 0x881ED814;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ctx.current_instruction = 0x881ED818;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ctx.current_instruction = 0x881ED81C;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ctx.current_instruction = 0x881ED820;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ctx.current_instruction = 0x881ED824;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ctx.current_instruction = 0x881ED82C;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ctx.current_instruction = 0x881ED830;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ctx.current_instruction = 0x881ED834;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ctx.current_instruction = 0x881ED838;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ctx.current_instruction = 0x881ED83C;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ctx.current_instruction = 0x881ED840;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ctx.current_instruction = 0x881ED844;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ctx.current_instruction = 0x881ED848;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ctx.current_instruction = 0x881ED850;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ctx.current_instruction = 0x881ED854;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ctx.current_instruction = 0x881ED858;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ctx.current_instruction = 0x881ED85C;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ctx.current_instruction = 0x881ED860;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ctx.current_instruction = 0x881ED864;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ctx.current_instruction = 0x881ED868;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ctx.current_instruction = 0x881ED86C;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ctx.current_instruction = 0x881ED874;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ctx.current_instruction = 0x881ED878;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ctx.current_instruction = 0x881ED87C;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ctx.current_instruction = 0x881ED880;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ctx.current_instruction = 0x881ED884;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ctx.current_instruction = 0x881ED888;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ctx.current_instruction = 0x881ED88C;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ctx.current_instruction = 0x881ED890;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ctx.current_instruction = 0x881ED898;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ctx.current_instruction = 0x881ED89C;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ctx.current_instruction = 0x881ED8A0;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ctx.current_instruction = 0x881ED8A4;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ctx.current_instruction = 0x881ED8A8;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ctx.current_instruction = 0x881ED8AC;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ctx.current_instruction = 0x881ED8B0;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ctx.current_instruction = 0x881ED8B4;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ctx.current_instruction = 0x881ED8BC;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ctx.current_instruction = 0x881ED8C0;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ctx.current_instruction = 0x881ED8C4;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ctx.current_instruction = 0x881ED8C8;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ctx.current_instruction = 0x881ED8CC;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ctx.current_instruction = 0x881ED8D0;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ctx.current_instruction = 0x881ED8D4;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ctx.current_instruction = 0x881ED8D8;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ctx.current_instruction = 0x881ED8E0;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ctx.current_instruction = 0x881ED8E4;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ctx.current_instruction = 0x881ED8E8;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ctx.current_instruction = 0x881ED8EC;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ctx.current_instruction = 0x881ED8F0;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ctx.current_instruction = 0x881ED8F4;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ctx.current_instruction = 0x881ED8F8;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ctx.current_instruction = 0x881ED8FC;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x881ed674
	if (!ctx.cr6.lt) goto loc_881ED674;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
loc_881ED918:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ctx.current_instruction = 0x881ED940;
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ctx.current_instruction = 0x881ED944;
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ctx.current_instruction = 0x881ED948;
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ctx.current_instruction = 0x881ED94C;
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ctx.current_instruction = 0x881ED950;
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ctx.current_instruction = 0x881ED954;
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ctx.current_instruction = 0x881ED958;
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ctx.current_instruction = 0x881ED95C;
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x881ed918
	if (ctx.cr6.gt) goto loc_881ED918;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__savevmx_113) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEEFC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEEFC;
	ctx.current_instruction = 0x881EEEFC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_30) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFF8;
	ctx.current_instruction = 0x881EEFF8;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF07C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF07C;
	ctx.current_instruction = 0x881EF07C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_116) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1AC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1AC;
	ctx.current_instruction = 0x881EF1AC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_30) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF290);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF290;
	ctx.current_instruction = 0x881EF290;
	// stfd f30,-16(r12)
	ctx.current_instruction = 0x881EF290;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	ctx.current_instruction = 0x881EF294;
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__restfpr_17) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2A8;
	ctx.current_instruction = 0x881EF2A8;
	// lfd f17,-120(r12)
	ctx.current_instruction = 0x881EF2A8;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881F0928) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0928;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0928) {
			switch (rex_dispatch_address) {
				case 0x881F0984:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0928;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0984: goto loc_881F0984;
		default: break;
	}
	// std r31,-8(r1)
	ctx.current_instruction = 0x881F0928;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	ctx.current_instruction = 0x881F0930;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	ctx.current_instruction = 0x881F0934;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	ctx.current_instruction = 0x881F093C;
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F0940;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.current_instruction = 0x881F0948;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r11,24320
	ctx.r30.s64 = ctx.r11.s64 + 24320;
	// b 0x881f0970
	goto loc_881F0970;
loc_881F0970:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x881F0970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x881F097C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x881ef720
	ctx.lr = 0x881F0984;
	sub_881EF720(ctx, base);
loc_881F0984:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// lwz r28,80(r31)
	ctx.current_instruction = 0x881F0988;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r30,r10,24320
	ctx.r30.s64 = ctx.r10.s64 + 24320;
	// addi r10,r11,24324
	ctx.r10.s64 = ctx.r11.s64 + 24324;
	// lwz r1,0(r1)
	ctx.current_instruction = 0x881F0998;
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x881F099C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x881F09A0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.current_instruction = 0x881F09A4;
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.current_instruction = 0x881F09A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1898) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F1898;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F1898) {
			switch (rex_dispatch_address) {
				case 0x881F18B8:
				case 0x881F18C4:
				case 0x881F18D0:
				case 0x881F18DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1898;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F18B8: goto loc_881F18B8;
		case 0x881F18C4: goto loc_881F18C4;
		case 0x881F18D0: goto loc_881F18D0;
		case 0x881F18DC: goto loc_881F18DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F189C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F18A0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881F18A4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881f18cc
	if (!ctx.cr6.eq) goto loc_881F18CC;
	// bl 0x880529c8
	ctx.lr = 0x881F18B8;
	sub_880529C8(ctx, base);
loc_881F18B8:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F18BC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F18C4;
	sub_880523E8(ctx, base);
loc_881F18C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f18dc
	goto loc_881F18DC;
loc_881F18CC:
	// bl 0x881e9150
	ctx.lr = 0x881F18D0;
	sub_881E9150(ctx, base);
loc_881F18D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x881ea318
	ctx.lr = 0x881F18DC;
	sub_881EA318(ctx, base);
loc_881F18DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F18E0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F18E8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F94C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F94C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F94C0;
	ctx.current_instruction = 0x881F94C0;
	// lwz r11,2976(r3)
	ctx.current_instruction = 0x881F94C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2976);
	// lwz r10,2980(r3)
	ctx.current_instruction = 0x881F94C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2980);
	// addi r11,r11,738
	ctx.r11.s64 = ctx.r11.s64 + 738;
	// lwz r9,2984(r3)
	ctx.current_instruction = 0x881F94CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2984);
	// addi r8,r10,738
	ctx.r8.s64 = ctx.r10.s64 + 738;
	// lwz r10,2964(r3)
	ctx.current_instruction = 0x881F94D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2964);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2092(r3)
	ctx.current_instruction = 0x881F94DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,738
	ctx.r6.s64 = ctx.r9.s64 + 738;
	// addi r10,r10,735
	ctx.r10.s64 = ctx.r10.s64 + 735;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r3
	ctx.current_instruction = 0x881F94F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r7,r11,263
	ctx.r7.s64 = ctx.r11.s64 + 263;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,2928(r3)
	ctx.current_instruction = 0x881F9508;
	REX_STORE_U32(ctx.r3.u32 + 2928, ctx.r8.u32);
	// lwzx r5,r5,r3
	ctx.current_instruction = 0x881F950C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stw r5,2932(r3)
	ctx.current_instruction = 0x881F9510;
	REX_STORE_U32(ctx.r3.u32 + 2932, ctx.r5.u32);
	// lwzx r11,r9,r3
	ctx.current_instruction = 0x881F9514;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r11,2936(r3)
	ctx.current_instruction = 0x881F9518;
	REX_STORE_U32(ctx.r3.u32 + 2936, ctx.r11.u32);
	// lwzx r9,r6,r3
	ctx.current_instruction = 0x881F951C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r9,2924(r3)
	ctx.current_instruction = 0x881F9520;
	REX_STORE_U32(ctx.r3.u32 + 2924, ctx.r9.u32);
	// stw r9,2920(r3)
	ctx.current_instruction = 0x881F9524;
	REX_STORE_U32(ctx.r3.u32 + 2920, ctx.r9.u32);
	// stw r9,2916(r3)
	ctx.current_instruction = 0x881F9528;
	REX_STORE_U32(ctx.r3.u32 + 2916, ctx.r9.u32);
	// lwzx r8,r10,r3
	ctx.current_instruction = 0x881F952C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r8,2096(r3)
	ctx.current_instruction = 0x881F9530;
	REX_STORE_U32(ctx.r3.u32 + 2096, ctx.r8.u32);
	// lwz r7,2108(r7)
	ctx.current_instruction = 0x881F9534;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 2108);
	// stw r7,2100(r3)
	ctx.current_instruction = 0x881F9538;
	REX_STORE_U32(ctx.r3.u32 + 2100, ctx.r7.u32);
	// b 0x881810e0
	sub_881810E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88202518) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88202518);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88202518;
	ctx.current_instruction = 0x88202518;
	// lwz r10,1368(r3)
	ctx.current_instruction = 0x88202518;
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
	// blt cr6,0x88202608
	if (ctx.cr6.lt) goto loc_88202608;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x88202594
	if (ctx.cr6.lt) goto loc_88202594;
	// lhz r8,62(r11)
	ctx.current_instruction = 0x88202558;
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
	// b 0x882025a4
	goto loc_882025A4;
loc_88202594:
	// lwz r10,1476(r11)
	ctx.current_instruction = 0x88202594;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.current_instruction = 0x8820259C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_882025A4:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x882025f0
	if (ctx.cr6.lt) goto loc_882025F0;
	// lhz r10,64(r11)
	ctx.current_instruction = 0x882025AC;
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
loc_882025F0:
	// lwz r11,1468(r11)
	ctx.current_instruction = 0x882025F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x882025F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88202608:
	// lwz r10,1476(r11)
	ctx.current_instruction = 0x88202608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1468(r11)
	ctx.current_instruction = 0x88202610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.current_instruction = 0x88202618;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.current_instruction = 0x8820261C;
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

DEFINE_REX_FUNC(sub_88214D80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88214D80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88214D80) {
			switch (rex_dispatch_address) {
				case 0x88214D88:
				case 0x88214DD4:
				case 0x88214E98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88214D80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88214D88: goto loc_88214D88;
		case 0x88214DD4: goto loc_88214DD4;
		case 0x88214E98: goto loc_88214E98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88214D88;
	__savegprlr_28(ctx, base);
loc_88214D88:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88214D88;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.current_instruction = 0x88214D8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r10,0(r3)
	ctx.current_instruction = 0x88214D94;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// rldicr r8,r10,10,53
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r9,8(r3)
	ctx.current_instruction = 0x88214DA8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// std r8,0(r3)
	ctx.current_instruction = 0x88214DB0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge cr6,0x88214e4c
	if (!ctx.cr6.lt) goto loc_88214E4C;
loc_88214DB8:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88214DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88214DBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88214de0
	if (ctx.cr6.lt) goto loc_88214DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88214DD4;
	sub_88156440(ctx, base);
loc_88214DD4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88214db8
	if (ctx.cr6.eq) goto loc_88214DB8;
	// b 0x88214e4c
	goto loc_88214E4C;
loc_88214DE0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x88214DE0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.current_instruction = 0x88214DE8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88214DF0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88214DF4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88214DFC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88214E00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88214E08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88214E0C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88214E14;
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
	ctx.current_instruction = 0x88214E30;
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
	ctx.current_instruction = 0x88214E48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88214E4C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_88214E54:
	// lwz r11,8(r31)
	ctx.current_instruction = 0x88214E54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.current_instruction = 0x88214E58;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rldicl r10,r9,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stw r8,8(r31)
	ctx.current_instruction = 0x88214E68;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// std r7,0(r31)
	ctx.current_instruction = 0x88214E70;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x88214f10
	if (!ctx.cr6.lt) goto loc_88214F10;
loc_88214E7C:
	// lwz r10,16(r31)
	ctx.current_instruction = 0x88214E7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88214E80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x88214ea4
	if (ctx.cr6.lt) goto loc_88214EA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156440
	ctx.lr = 0x88214E98;
	sub_88156440(ctx, base);
loc_88214E98:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x88214e7c
	if (ctx.cr6.eq) goto loc_88214E7C;
	// b 0x88214f10
	goto loc_88214F10;
loc_88214EA4:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88214EA4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.current_instruction = 0x88214EAC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.current_instruction = 0x88214EB4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x88214EB8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.current_instruction = 0x88214EC0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.current_instruction = 0x88214EC4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88214ECC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	ctx.current_instruction = 0x88214ED0;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88214ED8;
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
	ctx.current_instruction = 0x88214EF4;
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
	ctx.current_instruction = 0x88214F0C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_88214F10:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r28
	ctx.current_instruction = 0x88214F18;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x88214e54
	if (ctx.cr6.lt) goto loc_88214E54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88218AB8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88218AB8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88218AB8;
	ctx.current_instruction = 0x88218AB8;
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltish v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x3)));
	// li r8,0
	ctx.r8.s64 = 0;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x88218be4
	if (!ctx.cr6.eq) goto loc_88218BE4;
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v61,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v57,v58,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88218cd4
	if (!ctx.cr6.gt) goto loc_88218CD4;
	// li r6,48
	ctx.r6.s64 = 48;
loc_88218B3C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// vslh v12,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v61,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vperm128 v8,v62,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v55,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v8,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v28,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v27,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vadduhm v12,v6,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vsubshs v26,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vadduhm v25,v27,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v13,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsrah v24,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v12,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vor128 v54,v63,v24
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8)));
	// stvx128 v24,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v54,v23
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v23.u8)));
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// blt cr6,0x88218b3c
	if (ctx.cr6.lt) goto loc_88218B3C;
	// b 0x88218cd4
	goto loc_88218CD4;
loc_88218BE4:
	// lvx128 v50,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v52,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v48,v49,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88218cd4
	if (!ctx.cr6.gt) goto loc_88218CD4;
loc_88218C30:
	// vadduhm v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v45,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// vadduhm v7,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// vslh v6,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// vadduhm v30,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm128 v6,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vor128 v1,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vadduhm v29,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v28,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v29,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v26,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v25,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v23,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v6,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v3,v27,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsrah v22,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v44,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// stvx128 v22,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vor128 v63,v44,v21
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// blt cr6,0x88218c30
	if (ctx.cr6.lt) goto loc_88218C30;
loc_88218CD4:
	// vand128 v13,v63,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821D060) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821D060;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821D060) {
			switch (rex_dispatch_address) {
				case 0x8821D068:
				case 0x8821D088:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821D060;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821D068: goto loc_8821D068;
		case 0x8821D088: goto loc_8821D088;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8821D068;
	__savegprlr_26(ctx, base);
loc_8821D068:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x8821D068;
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x8821b4b8
	ctx.lr = 0x8821D088;
	sub_8821B4B8(ctx, base);
loc_8821D088:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lvx128 v7,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// vslh v5,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// vaddshs v31,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// vslh v4,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,432
	ctx.r29.s64 = ctx.r1.s64 + 432;
	// vslh v2,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,1104
	ctx.r28.s64 = 1104;
	// lvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v27,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v25,v12,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v5,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v24,v11,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vslh v28,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v23,v10,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v22,v9,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v19,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi128 v21,v8,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 14));
	// vaddshs v17,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v20,v7,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vaddshs v16,v1,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v18,v6,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v56,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r30,r28
	ea = (ctx.r30.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,48
	ctx.r27.s64 = 48;
	// li r26,96
	ctx.r26.s64 = 96;
	// vsldoi128 v15,v5,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// li r3,144
	ctx.r3.s64 = 144;
	// vaddshs v14,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// li r11,192
	ctx.r11.s64 = 192;
	// vaddshs v12,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// li r10,240
	ctx.r10.s64 = 240;
	// vaddshs v11,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// li r9,288
	ctx.r9.s64 = 288;
	// vaddshs v10,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// li r8,336
	ctx.r8.s64 = 336;
	// vaddshs v9,v26,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v8,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v7,v17,v20
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vaddshs v6,v16,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v5,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v4,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v2,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v1,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v31,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v30,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v29,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v28,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r31,r27
	ea = (ctx.r31.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r31,r26
	ea = (ctx.r31.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v24,r31,r3
	ea = (ctx.r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88220BD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88220BD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88220BD0) {
			switch (rex_dispatch_address) {
				case 0x88220BD8:
				case 0x88220C3C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88220BD0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88220BD8: goto loc_88220BD8;
		case 0x88220C3C: goto loc_88220C3C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88220BD8;
	__savegprlr_27(ctx, base);
loc_88220BD8:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88220BD8;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vspltish v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// lwz r31,1164(r6)
	ctx.current_instruction = 0x88220BF8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// vrlh v11,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, result);
	}
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v0,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v2,v1,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// stvx128 v12,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stvx128 v10,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x88220C3C;
	sub_88218F60(ctx, base);
loc_88220C3C:
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// vspltish v9,8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x8)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v2,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r7,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x88220d24
	if (!ctx.cr6.eq) goto loc_88220D24;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220e1c
	if (!ctx.cr6.gt) goto loc_88220E1C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88220C98:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	ctx.current_instruction = 0x88220D10;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88220D14;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88220c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220C98;
	// b 0x88220e1c
	goto loc_88220E1C;
loc_88220D24:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220e1c
	if (!ctx.cr6.gt) goto loc_88220E1C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_88220D3C:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88220d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220D3C;
loc_88220E1C:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88225EF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225EF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225EF8) {
			switch (rex_dispatch_address) {
				case 0x88225F00:
				case 0x88226508:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225EF8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225F00: goto loc_88225F00;
		case 0x88226508: goto loc_88226508;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88225F00;
	__savegprlr_14(ctx, base);
loc_88225F00:
	// stwu r1,-1040(r1)
	ctx.current_instruction = 0x88225F00;
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,1124(r1)
	ctx.current_instruction = 0x88225F08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1124);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,1076(r1)
	ctx.current_instruction = 0x88225F10;
	REX_STORE_U32(ctx.r1.u32 + 1076, ctx.r5.u32);
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// stw r6,1084(r1)
	ctx.current_instruction = 0x88225F18;
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// stw r9,96(r1)
	ctx.current_instruction = 0x88225F24;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// slw r6,r5,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,88(r1)
	ctx.current_instruction = 0x88225F4C;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stw r7,80(r1)
	ctx.current_instruction = 0x88225F5C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x882263d4
	if (ctx.cr6.eq) goto loc_882263D4;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x88226218
	if (ctx.cr6.eq) goto loc_88226218;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x882261a8
	if (!ctx.cr6.gt) goto loc_882261A8;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x88225F84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,-96
	ctx.r4.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r14,144
	ctx.r14.s64 = 144;
	// li r15,192
	ctx.r15.s64 = 192;
	// li r16,240
	ctx.r16.s64 = 240;
	// li r17,-80
	ctx.r17.s64 = -80;
	// li r18,-32
	ctx.r18.s64 = -32;
	// li r19,64
	ctx.r19.s64 = 64;
	// li r20,112
	ctx.r20.s64 = 112;
	// li r21,160
	ctx.r21.s64 = 160;
	// li r22,208
	ctx.r22.s64 = 208;
	// li r23,256
	ctx.r23.s64 = 256;
loc_88225FD0:
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r27,84(r1)
	ctx.current_instruction = 0x88225FEC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r31,r8
	ctx.r29.u64 = ctx.r31.u64 + ctx.r8.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r30,r8
	ctx.r26.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r28,r29,r8
	ctx.r28.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lvx128 v60,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// vmrglb v26,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r24,r28,r8
	ctx.r24.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lvx128 v56,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r30,r8
	ea = (ctx.r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r29,r8
	ea = (ctx.r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r28,r8
	ea = (ctx.r28.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r24,r10
	ea = (ctx.r24.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v22,v3,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v25,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v23,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v19,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v27,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v12,v26
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v15,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v14,v19,v27
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v30,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v5,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v2,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// vslh v24,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r14
	ea = (ctx.r11.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r15
	ea = (ctx.r11.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r17
	ea = (ctx.r11.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r18
	ea = (ctx.r11.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v20,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v15,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v19,r11,r19
	ea = (ctx.r11.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x88225fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88225FD0;
	// lwz r6,88(r1)
	ctx.current_instruction = 0x882261A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x882261A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_882261A8:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x882264f8
	if (!ctx.cr6.gt) goto loc_882264F8;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_882261DC:
	// lbzx r3,r30,r11
	ctx.current_instruction = 0x882261DC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ctx.current_instruction = 0x882261E0;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	ctx.current_instruction = 0x882261E8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r31,r3
	ctx.r4.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r4,48(r9)
	ctx.current_instruction = 0x88226208;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x8822620C;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x882261dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882261DC;
	// b 0x882264f8
	goto loc_882264F8;
loc_88226218:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r29,r3,r8
	ctx.r29.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvsl v2,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,208
	ctx.r27.s64 = ctx.r1.s64 + 208;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lvx128 v39,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v30,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v32,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v63,r31,r8
	ea = (ctx.r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,256
	ctx.r29.s64 = ctx.r1.s64 + 256;
	// lvx128 v62,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v34,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,304
	ctx.r26.s64 = ctx.r1.s64 + 304;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v29,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v30,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v27,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,352
	ctx.r31.s64 = ctx.r1.s64 + 352;
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,400
	ctx.r30.s64 = ctx.r1.s64 + 400;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r25,r1,448
	ctx.r25.s64 = ctx.r1.s64 + 448;
	// vadduhm v24,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v31,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v23,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v26,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v26,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v2,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stvx128 v30,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stvx128 v29,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stvx128 v27,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88226398:
	// lbzx r31,r10,r5
	ctx.current_instruction = 0x88226398;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r3,r8,r11
	ctx.current_instruction = 0x8822639C;
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r30,0(r10)
	ctx.current_instruction = 0x882263A4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r4,48(r9)
	ctx.current_instruction = 0x882263C4;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ctx.current_instruction = 0x882263C8;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88226398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88226398;
	// b 0x882264f8
	goto loc_882264F8;
loc_882263D4:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v58,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// lvx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v3,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// lvx128 v51,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v50,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v28,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x882264f8
	if (!ctx.cr6.eq) goto loc_882264F8;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r8,r10,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r10.u64;
loc_882264BC:
	// lbzx r29,r11,r30
	ctx.current_instruction = 0x882264BC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// lbzux r3,r8,r10
	ctx.current_instruction = 0x882264C0;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r4,0(r11)
	ctx.current_instruction = 0x882264C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sth r5,48(r9)
	ctx.current_instruction = 0x882264E4;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r5.u16);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r4,96(r9)
	ctx.current_instruction = 0x882264F0;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x882264bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882264BC;
loc_882264F8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,1076(r1)
	ctx.current_instruction = 0x882264FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r4,1084(r1)
	ctx.current_instruction = 0x88226500;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// bl 0x88222df8
	ctx.lr = 0x88226508;
	sub_88222DF8(ctx, base);
loc_88226508:
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

