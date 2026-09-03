#include "forzahorizon2_funcs.16.h"

DEFINE_REX_FUNC(sub_88050178) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050178);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050178;
	ctx.current_instruction = 0x88050178;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,76(r11)
	ctx.current_instruction = 0x88050180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savegprlr_25) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805083C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805083C;
	ctx.current_instruction = 0x8805083C;
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

DEFINE_REX_FUNC(sub_88050F88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050F88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050F88) {
			switch (rex_dispatch_address) {
				case 0x88050F90:
				case 0x88050FA0:
				case 0x88051148:
				case 0x8805115C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050F88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050F90: goto loc_88050F90;
		case 0x88050FA0: goto loc_88050FA0;
		case 0x88051148: goto loc_88051148;
		case 0x8805115C: goto loc_8805115C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88050F90;
	__savegprlr_28(ctx, base);
loc_88050F90:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88050F90;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x880509a8
	ctx.lr = 0x88050FA0;
	sub_880509A8(ctx, base);
loc_88050FA0:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88050fb0
	if (!ctx.cr0.eq) goto loc_88050FB0;
loc_88050FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88051164
	goto loc_88051164;
loc_88050FB0:
	// lwz r10,92(r31)
	ctx.current_instruction = 0x88050FB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88050FB8:
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88050FB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88050fd4
	if (ctx.cr6.eq) goto loc_88050FD4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88050fb8
	if (ctx.cr6.lt) goto loc_88050FB8;
loc_88050FD4:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x88050ff0
	if (!ctx.cr6.lt) goto loc_88050FF0;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88050FE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x88050ff4
	if (ctx.cr6.eq) goto loc_88050FF4;
loc_88050FF0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88050FF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88050fa8
	if (ctx.cr6.eq) goto loc_88050FA8;
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88050FFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88050fa8
	if (ctx.cr6.eq) goto loc_88050FA8;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x8805101c
	if (!ctx.cr6.eq) goto loc_8805101C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,8(r11)
	ctx.current_instruction = 0x88051014;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// b 0x88051164
	goto loc_88051164;
loc_8805101C:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x88051160
	if (ctx.cr6.eq) goto loc_88051160;
	// lwz r28,96(r31)
	ctx.current_instruction = 0x88051024;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,96(r31)
	ctx.current_instruction = 0x88051028;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lwz r3,4(r11)
	ctx.current_instruction = 0x8805102C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x88051150
	if (!ctx.cr6.eq) goto loc_88051150;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r10,36
	ctx.r10.s64 = 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88051044:
	// lwz r9,92(r31)
	ctx.current_instruction = 0x88051044;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,8(r9)
	ctx.current_instruction = 0x88051050;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bdnz 0x88051044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88051044;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x8805105C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,100(r31)
	ctx.current_instruction = 0x88051060;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88051078
	if (!ctx.cr6.eq) goto loc_88051078;
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x88051134
	goto loc_88051134;
loc_88051078:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88051090
	if (!ctx.cr6.eq) goto loc_88051090;
	// li r11,129
	ctx.r11.s64 = 129;
	// b 0x88051134
	goto loc_88051134;
loc_88051090:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880510a8
	if (!ctx.cr6.eq) goto loc_880510A8;
	// li r11,132
	ctx.r11.s64 = 132;
	// b 0x88051134
	goto loc_88051134;
loc_880510A8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880510c0
	if (!ctx.cr6.eq) goto loc_880510C0;
	// li r11,133
	ctx.r11.s64 = 133;
	// b 0x88051134
	goto loc_88051134;
loc_880510C0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880510d8
	if (!ctx.cr6.eq) goto loc_880510D8;
	// li r11,130
	ctx.r11.s64 = 130;
	// b 0x88051134
	goto loc_88051134;
loc_880510D8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880510f0
	if (!ctx.cr6.eq) goto loc_880510F0;
	// li r11,134
	ctx.r11.s64 = 134;
	// b 0x88051134
	goto loc_88051134;
loc_880510F0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88051108
	if (!ctx.cr6.eq) goto loc_88051108;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x88051134
	goto loc_88051134;
loc_88051108:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,693
	ctx.r10.u64 = ctx.r10.u64 | 693;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88051120
	if (!ctx.cr6.eq) goto loc_88051120;
	// li r11,141
	ctx.r11.s64 = 141;
	// b 0x88051134
	goto loc_88051134;
loc_88051120:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,692
	ctx.r10.u64 = ctx.r10.u64 | 692;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88051138
	if (!ctx.cr6.eq) goto loc_88051138;
	// li r11,142
	ctx.r11.s64 = 142;
loc_88051134:
	// stw r11,100(r31)
	ctx.current_instruction = 0x88051134;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_88051138:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,100(r31)
	ctx.current_instruction = 0x8805113C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x88051148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88051148:
	// stw r30,100(r31)
	ctx.current_instruction = 0x88051148;
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x8805115c
	goto loc_8805115C;
loc_88051150:
	// stw r8,8(r11)
	ctx.current_instruction = 0x88051150;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8805115C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805115C:
	// stw r28,96(r31)
	ctx.current_instruction = 0x8805115C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_88051160:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_88051164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88059038) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88059038;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88059038) {
			switch (rex_dispatch_address) {
				case 0x88059064:
				case 0x8805906C:
				case 0x88059088:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88059038;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88059064: goto loc_88059064;
		case 0x8805906C: goto loc_8805906C;
		case 0x88059088: goto loc_88059088;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805903C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88059040;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88059044;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88059048;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,8200
	ctx.r10.s64 = ctx.r11.s64 + 8200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x8805905C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x880588b8
	ctx.lr = 0x88059064;
	sub_880588B8(ctx, base);
loc_88059064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880574d8
	ctx.lr = 0x8805906C;
	sub_880574D8(ctx, base);
loc_8805906C:
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8805908c
	if (ctx.cr6.eq) goto loc_8805908C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// bl 0x88050358
	ctx.lr = 0x88059088;
	sub_88050358(ctx, base);
loc_88059088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8805908C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88059090;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88059098;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805909C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A850) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805A850);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A850;
	ctx.current_instruction = 0x8805A850;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805A95C) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805A95C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805A95C;
	ctx.current_instruction = 0x8805A95C;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805ADE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805ADE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805ADE0) {
			switch (rex_dispatch_address) {
				case 0x8805ADE8:
				case 0x8805AE24:
				case 0x8805AE30:
				case 0x8805AE80:
				case 0x8805AEA8:
				case 0x8805AEE0:
				case 0x8805AF84:
				case 0x8805AF9C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805ADE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805ADE8: goto loc_8805ADE8;
		case 0x8805AE24: goto loc_8805AE24;
		case 0x8805AE30: goto loc_8805AE30;
		case 0x8805AE80: goto loc_8805AE80;
		case 0x8805AEA8: goto loc_8805AEA8;
		case 0x8805AEE0: goto loc_8805AEE0;
		case 0x8805AF84: goto loc_8805AF84;
		case 0x8805AF9C: goto loc_8805AF9C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8805ADE8;
	__savegprlr_24(ctx, base);
loc_8805ADE8:
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8805ADEC;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	ctx.current_instruction = 0x8805ADF4;
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r5,196(r31)
	ctx.current_instruction = 0x8805ADFC;
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r25,0(r5)
	ctx.current_instruction = 0x8805AE0C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r25.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r30,124
	ctx.r28.s64 = ctx.r30.s64 + 124;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88057ae0
	ctx.lr = 0x8805AE24;
	sub_88057AE0(ctx, base);
loc_8805AE24:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88057af0
	ctx.lr = 0x8805AE30;
	sub_88057AF0(ctx, base);
loc_8805AE30:
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// divwu r9,r27,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r27.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8805ae54
	if (!ctx.cr6.lt) goto loc_8805AE54;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// stw r29,80(r31)
	ctx.current_instruction = 0x8805AE50;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8805AE54:
	// stw r25,84(r31)
	ctx.current_instruction = 0x8805AE54;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8805af30
	if (ctx.cr6.lt) goto loc_8805AF30;
	// lwz r11,676(r30)
	ctx.current_instruction = 0x8805AE60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8805ae88
	if (!ctx.cr6.gt) goto loc_8805AE88;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805a970
	ctx.lr = 0x8805AE80;
	sub_8805A970(ctx, base);
loc_8805AE80:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	ctx.current_instruction = 0x8805AE84;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_8805AE88:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8805af30
	if (ctx.cr6.lt) goto loc_8805AF30;
	// lwz r11,84(r31)
	ctx.current_instruction = 0x8805AE90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8805af30
	if (!ctx.cr6.eq) goto loc_8805AF30;
loc_8805AE9C:
	// addi r4,r30,676
	ctx.r4.s64 = ctx.r30.s64 + 676;
	// lwz r3,672(r30)
	ctx.current_instruction = 0x8805AEA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// bl 0x88067328
	ctx.lr = 0x8805AEA8;
	sub_88067328(ctx, base);
loc_8805AEA8:
	// lwz r11,676(r30)
	ctx.current_instruction = 0x8805AEA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8805aebc
	if (!ctx.cr6.eq) goto loc_8805AEBC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8805ae9c
	if (ctx.cr6.eq) goto loc_8805AE9C;
loc_8805AEBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8805aef0
	if (!ctx.cr6.eq) goto loc_8805AEF0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8805aee8
	if (ctx.cr6.lt) goto loc_8805AEE8;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8805a970
	ctx.lr = 0x8805AEE0;
	sub_8805A970(ctx, base);
loc_8805AEE0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	ctx.current_instruction = 0x8805AEE4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_8805AEE8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805ae88
	goto loc_8805AE88;
loc_8805AEF0:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8805af28
	if (ctx.cr6.eq) goto loc_8805AF28;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8805af28
	if (ctx.cr6.eq) goto loc_8805AF28;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x8805af1c
	if (!ctx.cr6.gt) goto loc_8805AF1C;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x8805af1c
	if (ctx.cr6.gt) goto loc_8805AF1C;
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,10416
	ctx.r29.u64 = ctx.r29.u64 | 10416;
	// b 0x8805af2c
	goto loc_8805AF2C;
loc_8805AF1C:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x8805af2c
	goto loc_8805AF2C;
loc_8805AF28:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8805AF2C:
	// stw r29,80(r31)
	ctx.current_instruction = 0x8805AF2C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8805AF30:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8805af54
	goto loc_8805AF54;
loc_8805AF54:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8805afa0
	if (ctx.cr6.lt) goto loc_8805AFA0;
	// lwz r11,0(r26)
	ctx.current_instruction = 0x8805AF5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8805afa0
	if (ctx.cr6.eq) goto loc_8805AFA0;
	// lwz r11,0(r30)
	ctx.current_instruction = 0x8805AF68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r30)
	ctx.current_instruction = 0x8805AF70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,116(r11)
	ctx.current_instruction = 0x8805AF74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r29,0(r10)
	ctx.current_instruction = 0x8805AF78;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805AF84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AF84:
	// lwz r8,72(r29)
	ctx.current_instruction = 0x8805AF84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r7,0(r26)
	ctx.current_instruction = 0x8805AF88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,48(r30)
	ctx.current_instruction = 0x8805AF90;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8805AF9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805AF9C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8805AFA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805F9F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805F9F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805F9F8) {
			switch (rex_dispatch_address) {
				case 0x8805FA00:
				case 0x8805FA28:
				case 0x8805FA40:
				case 0x8805FA58:
				case 0x8805FA6C:
				case 0x8805FA7C:
				case 0x8805FA90:
				case 0x8805FA9C:
				case 0x8805FAA8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805F9F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805FA00: goto loc_8805FA00;
		case 0x8805FA28: goto loc_8805FA28;
		case 0x8805FA40: goto loc_8805FA40;
		case 0x8805FA58: goto loc_8805FA58;
		case 0x8805FA6C: goto loc_8805FA6C;
		case 0x8805FA7C: goto loc_8805FA7C;
		case 0x8805FA90: goto loc_8805FA90;
		case 0x8805FA9C: goto loc_8805FA9C;
		case 0x8805FAA8: goto loc_8805FAA8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8805FA00;
	__savegprlr_28(ctx, base);
loc_8805FA00:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8805FA00;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.current_instruction = 0x8805FA08;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fa2c
	if (ctx.cr6.eq) goto loc_8805FA2C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x8805FA28;
	sub_88050358(ctx, base);
loc_8805FA28:
	// stw r29,72(r31)
	ctx.current_instruction = 0x8805FA28;
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_8805FA2C:
	// lwz r3,76(r31)
	ctx.current_instruction = 0x8805FA2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fa44
	if (ctx.cr6.eq) goto loc_8805FA44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x8805FA40;
	sub_88050358(ctx, base);
loc_8805FA40:
	// stw r29,76(r31)
	ctx.current_instruction = 0x8805FA40;
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_8805FA44:
	// lwz r3,492(r31)
	ctx.current_instruction = 0x8805FA44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fa5c
	if (ctx.cr6.eq) goto loc_8805FA5C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x8805FA58;
	sub_88050358(ctx, base);
loc_8805FA58:
	// stw r29,492(r31)
	ctx.current_instruction = 0x8805FA58;
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r29.u32);
loc_8805FA5C:
	// lwz r3,140(r31)
	ctx.current_instruction = 0x8805FA5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fa6c
	if (ctx.cr6.eq) goto loc_8805FA6C;
	// bl 0x880fbc40
	ctx.lr = 0x8805FA6C;
	sub_880FBC40(ctx, base);
loc_8805FA6C:
	// lwz r3,488(r31)
	ctx.current_instruction = 0x8805FA6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8805fa7c
	if (ctx.cr6.eq) goto loc_8805FA7C;
	// bl 0x880c6cb8
	ctx.lr = 0x8805FA7C;
	sub_880C6CB8(ctx, base);
loc_8805FA7C:
	// lwz r30,12(r31)
	ctx.current_instruction = 0x8805FA7C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8805faa0
	if (ctx.cr6.eq) goto loc_8805FAA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88072b88
	ctx.lr = 0x8805FA90;
	sub_88072B88(ctx, base);
loc_8805FA90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x8805FA9C;
	sub_88050358(ctx, base);
loc_8805FA9C:
	// stw r29,12(r31)
	ctx.current_instruction = 0x8805FA9C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_8805FAA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805f8f0
	ctx.lr = 0x8805FAA8;
	sub_8805F8F0(ctx, base);
loc_8805FAA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88062950) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88062950;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88062950) {
			switch (rex_dispatch_address) {
				case 0x88062958:
				case 0x880629EC:
				case 0x88062A20:
				case 0x88062AA8:
				case 0x88062AC8:
				case 0x88062AF4:
				case 0x88062B88:
				case 0x88062C20:
				case 0x88062D1C:
				case 0x88062D68:
				case 0x88062D7C:
				case 0x88062DAC:
				case 0x88062DB8:
				case 0x88062DF0:
				case 0x88062E0C:
				case 0x88062E24:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062950;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88062958: goto loc_88062958;
		case 0x880629EC: goto loc_880629EC;
		case 0x88062A20: goto loc_88062A20;
		case 0x88062AA8: goto loc_88062AA8;
		case 0x88062AC8: goto loc_88062AC8;
		case 0x88062AF4: goto loc_88062AF4;
		case 0x88062B88: goto loc_88062B88;
		case 0x88062C20: goto loc_88062C20;
		case 0x88062D1C: goto loc_88062D1C;
		case 0x88062D68: goto loc_88062D68;
		case 0x88062D7C: goto loc_88062D7C;
		case 0x88062DAC: goto loc_88062DAC;
		case 0x88062DB8: goto loc_88062DB8;
		case 0x88062DF0: goto loc_88062DF0;
		case 0x88062E0C: goto loc_88062E0C;
		case 0x88062E24: goto loc_88062E24;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88062958;
	__savegprlr_14(ctx, base);
loc_88062958:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x88062958;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r4,316(r1)
	ctx.current_instruction = 0x88062960;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r5,324(r1)
	ctx.current_instruction = 0x88062968;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stb r31,0(r6)
	ctx.current_instruction = 0x8806296C;
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r31,0(r4)
	ctx.current_instruction = 0x88062974;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,532(r3)
	ctx.current_instruction = 0x8806297C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x88062988;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,88(r1)
	ctx.current_instruction = 0x88062990;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// clrldi r26,r26,5
	ctx.r26.u64 = ctx.r26.u64 & 0x7FFFFFFFFFFFFFF;
	// std r31,112(r1)
	ctx.current_instruction = 0x88062998;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// std r31,120(r1)
	ctx.current_instruction = 0x880629A0;
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// mr r15,r23
	ctx.r15.u64 = ctx.r23.u64;
	// stw r31,92(r1)
	ctx.current_instruction = 0x880629A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r31,80(r1)
	ctx.current_instruction = 0x880629B0;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r31,96(r1)
	ctx.current_instruction = 0x880629B4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// beq cr6,0x880629c4
	if (ctx.cr6.eq) goto loc_880629C4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880629cc
	if (!ctx.cr6.eq) goto loc_880629CC;
loc_880629C4:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,532(r28)
	ctx.current_instruction = 0x880629C8;
	REX_STORE_U32(ctx.r28.u32 + 532, ctx.r11.u32);
loc_880629CC:
	// stw r31,536(r28)
	ctx.current_instruction = 0x880629CC;
	REX_STORE_U32(ctx.r28.u32 + 536, ctx.r31.u32);
	// lwz r11,0(r28)
	ctx.current_instruction = 0x880629D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.current_instruction = 0x880629D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x880629DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r17,20(r10)
	ctx.current_instruction = 0x880629E4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// bctrl 
	ctx.lr = 0x880629EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880629EC:
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x88062a4c
	if (!ctx.cr6.eq) goto loc_88062A4C;
	// lwz r11,632(r28)
	ctx.current_instruction = 0x880629FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88062a40
	if (ctx.cr6.eq) goto loc_88062A40;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
loc_88062A0C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.current_instruction = 0x88062A10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x880cb758
	ctx.lr = 0x88062A20;
	sub_880CB758(ctx, base);
loc_88062A20:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r18,r11,22
	ctx.r18.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x88062a5c
	if (!ctx.cr6.eq) goto loc_88062A5C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,167
	ctx.r3.u64 = ctx.r3.u64 | 167;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88062A40:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88062A4C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bge cr6,0x88062a0c
	if (!ctx.cr6.lt) goto loc_88062A0C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x88062e7c
	goto loc_88062E7C;
loc_88062A5C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e7c
	if (ctx.cr6.lt) goto loc_88062E7C;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lwz r25,96(r1)
	ctx.current_instruction = 0x88062A68;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,80
	ctx.r10.s64 = 5242880;
	// stw r31,588(r28)
	ctx.current_instruction = 0x88062A70;
	REX_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// ori r19,r11,11
	ctx.r19.u64 = ctx.r11.u64 | 11;
	// ori r21,r10,11
	ctx.r21.u64 = ctx.r10.u64 | 11;
	// li r16,6
	ctx.r16.s64 = 6;
loc_88062A80:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e7c
	if (ctx.cr6.lt) goto loc_88062E7C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062A88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88062A8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88062d54
	if (ctx.cr6.eq) goto loc_88062D54;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,0(r11)
	ctx.current_instruction = 0x88062A9C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r28)
	ctx.current_instruction = 0x88062AA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 572);
	// bl 0x880cb730
	ctx.lr = 0x88062AA8;
	sub_880CB730(ctx, base);
loc_88062AA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e7c
	if (ctx.cr6.lt) goto loc_88062E7C;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88062AB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r27,0(r11)
	ctx.current_instruction = 0x88062ABC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880cbbe8
	ctx.lr = 0x88062AC8;
	sub_880CBBE8(ctx, base);
loc_88062AC8:
	// cmplw cr6,r3,r19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x88062b14
	if (!ctx.cr6.eq) goto loc_88062B14;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x88062b08
	if (!ctx.cr6.eq) goto loc_88062B08;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062AD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,76(r11)
	ctx.current_instruction = 0x88062ADC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88062b08
	if (!ctx.cr6.eq) goto loc_88062B08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880cc488
	ctx.lr = 0x88062AF4;
	sub_880CC488(ctx, base);
loc_88062AF4:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88062AF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88062d9c
	if (!ctx.cr6.eq) goto loc_88062D9C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062B00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,76(r11)
	ctx.current_instruction = 0x88062B04;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r23.u32);
loc_88062B08:
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// stw r31,588(r28)
	ctx.current_instruction = 0x88062B0C;
	REX_STORE_U32(ctx.r28.u32 + 588, ctx.r31.u32);
	// b 0x88062d54
	goto loc_88062D54;
loc_88062B14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e7c
	if (ctx.cr6.lt) goto loc_88062E7C;
	// lwz r10,532(r28)
	ctx.current_instruction = 0x88062B1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 532);
	// ld r11,112(r1)
	ctx.current_instruction = 0x88062B20;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x88062b48
	if (!ctx.cr6.eq) goto loc_88062B48;
	// lwz r10,4(r28)
	ctx.current_instruction = 0x88062B2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// ld r9,120(r1)
	ctx.current_instruction = 0x88062B30;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r7,20(r10)
	ctx.current_instruction = 0x88062B38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x88062b48
	if (!ctx.cr6.gt) goto loc_88062B48;
	// stw r16,532(r28)
	ctx.current_instruction = 0x88062B44;
	REX_STORE_U32(ctx.r28.u32 + 532, ctx.r16.u32);
loc_88062B48:
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88062B48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r30,12(r10)
	ctx.current_instruction = 0x88062B54;
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88062B58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r9)
	ctx.current_instruction = 0x88062B5C;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062B60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88062B64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x88062b78
	if (ctx.cr6.eq) goto loc_88062B78;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88062b8c
	if (!ctx.cr6.eq) goto loc_88062B8C;
loc_88062B78:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,20(r11)
	ctx.current_instruction = 0x88062B7C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r3,568(r28)
	ctx.current_instruction = 0x88062B80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x880cb730
	ctx.lr = 0x88062B88;
	sub_880CB730(ctx, base);
loc_88062B88:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062B88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88062B8C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88062B8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x88062c7c
	if (!ctx.cr6.eq) goto loc_88062C7C;
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88062B98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r10)
	ctx.current_instruction = 0x88062B9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88062bb8
	if (!ctx.cr6.eq) goto loc_88062BB8;
	// stw r30,28(r10)
	ctx.current_instruction = 0x88062BA8;
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88062BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,24(r11)
	ctx.current_instruction = 0x88062BB0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r23.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062BB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88062BB8:
	// stw r23,4(r11)
	ctx.current_instruction = 0x88062BB8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88062BBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88062BC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,12(r11)
	ctx.current_instruction = 0x88062BC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r10)
	ctx.current_instruction = 0x88062BC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88062c2c
	if (ctx.cr6.lt) goto loc_88062C2C;
	// stw r31,4(r11)
	ctx.current_instruction = 0x88062BD4;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88062BDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,8(r11)
	ctx.current_instruction = 0x88062BE0;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88062BE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,16(r10)
	ctx.current_instruction = 0x88062BE8;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88062BEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r9)
	ctx.current_instruction = 0x88062BF0;
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r31.u8);
	// lwz r8,88(r1)
	ctx.current_instruction = 0x88062BF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r8)
	ctx.current_instruction = 0x88062BF8;
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r31.u32);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x88062BFC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r7)
	ctx.current_instruction = 0x88062C00;
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r31.u32);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x88062C04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r6)
	ctx.current_instruction = 0x88062C08;
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x88062C0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r5)
	ctx.current_instruction = 0x88062C10;
	REX_STORE_U8(ctx.r5.u32 + 20, ctx.r31.u8);
	// lwz r4,88(r1)
	ctx.current_instruction = 0x88062C14;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,0(r4)
	ctx.current_instruction = 0x88062C18;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x880628b8
	ctx.lr = 0x88062C20;
	sub_880628B8(ctx, base);
loc_88062C20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e78
	if (ctx.cr6.lt) goto loc_88062E78;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88062C28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88062C2C:
	// stw r31,16(r10)
	ctx.current_instruction = 0x88062C2C;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062C30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	ctx.current_instruction = 0x88062C34;
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062C38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_88062C3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88062d50
	if (ctx.cr6.eq) goto loc_88062D50;
	// lwz r10,556(r28)
	ctx.current_instruction = 0x88062C44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88062d2c
	if (!ctx.cr6.eq) goto loc_88062D2C;
	// lwz r10,36(r11)
	ctx.current_instruction = 0x88062C50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrldi r9,r17,32
	ctx.r9.u64 = ctx.r17.u64 & 0xFFFFFFFF;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpd cr6,r10,r26
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x88062d50
	if (ctx.cr6.gt) goto loc_88062D50;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x88062C68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88062d50
	if (ctx.cr6.eq) goto loc_88062D50;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// b 0x88062d44
	goto loc_88062D44;
loc_88062C7C:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x88062c3c
	if (!ctx.cr6.eq) goto loc_88062C3C;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x88062C84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88062c3c
	if (ctx.cr6.eq) goto loc_88062C3C;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x88062C90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.current_instruction = 0x88062C94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88062c3c
	if (ctx.cr6.lt) goto loc_88062C3C;
	// stw r31,4(r11)
	ctx.current_instruction = 0x88062CA0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88062CA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88062CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88062ce4
	if (ctx.cr6.eq) goto loc_88062CE4;
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88062CB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,20(r11)
	ctx.current_instruction = 0x88062CB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r8,20(r10)
	ctx.current_instruction = 0x88062CBC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88062ce4
	if (!ctx.cr6.eq) goto loc_88062CE4;
	// stw r31,16(r11)
	ctx.current_instruction = 0x88062CC8;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88062CCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	ctx.current_instruction = 0x88062CD0;
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x88062CD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r10)
	ctx.current_instruction = 0x88062CD8;
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r31.u32);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88062CDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r9)
	ctx.current_instruction = 0x88062CE0;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
loc_88062CE4:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062CE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,8(r11)
	ctx.current_instruction = 0x88062CEC;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x88062CF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r10)
	ctx.current_instruction = 0x88062CF4;
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88062CF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r9)
	ctx.current_instruction = 0x88062CFC;
	REX_STORE_U8(ctx.r9.u32 + 20, ctx.r31.u8);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x88062D00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r8)
	ctx.current_instruction = 0x88062D04;
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r31.u32);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x88062D08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r7)
	ctx.current_instruction = 0x88062D0C;
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r31.u32);
	// lwz r6,84(r1)
	ctx.current_instruction = 0x88062D10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r6)
	ctx.current_instruction = 0x88062D14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// bl 0x880628b8
	ctx.lr = 0x88062D1C;
	sub_880628B8(ctx, base);
loc_88062D1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e78
	if (ctx.cr6.lt) goto loc_88062E78;
	// stw r31,84(r1)
	ctx.current_instruction = 0x88062D24;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x88062d50
	goto loc_88062D50;
loc_88062D2C:
	// cmpd cr6,r29,r26
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r26.s64, ctx.xer);
	// bgt cr6,0x88062d50
	if (ctx.cr6.gt) goto loc_88062D50;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88062D34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88062d50
	if (ctx.cr6.eq) goto loc_88062D50;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_88062D44:
	// lwz r25,68(r11)
	ctx.current_instruction = 0x88062D44;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_88062D50:
	// lwz r30,316(r1)
	ctx.current_instruction = 0x88062D50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_88062D54:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.current_instruction = 0x88062D58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.current_instruction = 0x88062D60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x880cb7c0
	ctx.lr = 0x88062D68;
	sub_880CB7C0(ctx, base);
loc_88062D68:
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x88062a80
	if (!ctx.cr6.eq) goto loc_88062A80;
	// lwz r4,92(r1)
	ctx.current_instruction = 0x88062D70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.current_instruction = 0x88062D74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x880cb828
	ctx.lr = 0x88062D7C;
	sub_880CB828(ctx, base);
loc_88062D7C:
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x88062dbc
	if (!ctx.cr6.eq) goto loc_88062DBC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x88062dd8
	if (!ctx.cr6.eq) goto loc_88062DD8;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88062D9C:
	// stw r27,536(r28)
	ctx.current_instruction = 0x88062D9C;
	REX_STORE_U32(ctx.r28.u32 + 536, ctx.r27.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x880cc2c0
	ctx.lr = 0x88062DAC;
	sub_880CC2C0(ctx, base);
loc_88062DAC:
	// lwz r4,92(r1)
	ctx.current_instruction = 0x88062DAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.current_instruction = 0x88062DB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x880cb828
	ctx.lr = 0x88062DB8;
	sub_880CB828(ctx, base);
loc_88062DB8:
	// b 0x88062e7c
	goto loc_88062E7C;
loc_88062DBC:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x88062e60
	if (ctx.cr6.eq) goto loc_88062E60;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x88062e60
	if (!ctx.cr6.eq) goto loc_88062E60;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x88062e44
	if (ctx.cr6.eq) goto loc_88062E44;
loc_88062DD8:
	// lwz r11,324(r1)
	ctx.current_instruction = 0x88062DD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r30,108(r1)
	ctx.current_instruction = 0x88062DE0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,104(r1)
	ctx.current_instruction = 0x88062DE8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x880cc2c0
	ctx.lr = 0x88062DF0;
	sub_880CC2C0(ctx, base);
loc_88062DF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e7c
	if (ctx.cr6.lt) goto loc_88062E7C;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r28)
	ctx.current_instruction = 0x88062DFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 608);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x880cafe0
	ctx.lr = 0x88062E0C;
	sub_880CAFE0(ctx, base);
loc_88062E0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88062e7c
	if (ctx.cr6.lt) goto loc_88062E7C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,0(r14)
	ctx.current_instruction = 0x88062E18;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// lwz r3,568(r28)
	ctx.current_instruction = 0x88062E1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 568);
	// bl 0x880cb730
	ctx.lr = 0x88062E24;
	sub_880CB730(ctx, base);
loc_88062E24:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,80(r11)
	ctx.current_instruction = 0x88062E28;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r22.u32);
	// lwz r9,108(r1)
	ctx.current_instruction = 0x88062E2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x88062E30;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r24
	ctx.r4.u64 = ctx.r5.u64 & ctx.r24.u64;
	// stw r4,536(r28)
	ctx.current_instruction = 0x88062E40;
	REX_STORE_U32(ctx.r28.u32 + 536, ctx.r4.u32);
loc_88062E44:
	// lwz r11,532(r28)
	ctx.current_instruction = 0x88062E44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 532);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x88062e7c
	if (!ctx.cr6.eq) goto loc_88062E7C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88062E60:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x88062dd8
	if (!ctx.cr6.eq) goto loc_88062DD8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88062E78:
	// lwz r30,316(r1)
	ctx.current_instruction = 0x88062E78;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
loc_88062E7C:
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88062e9c
	if (ctx.cr6.eq) goto loc_88062E9C;
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x88062ec0
	if (!ctx.cr6.eq) goto loc_88062EC0;
loc_88062E9C:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88062E9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88062eac
	if (ctx.cr6.eq) goto loc_88062EAC;
	// stw r22,80(r11)
	ctx.current_instruction = 0x88062EA8;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r22.u32);
loc_88062EAC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88062EAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r24
	ctx.r7.u64 = ctx.r8.u64 & ctx.r24.u64;
	// stw r7,536(r28)
	ctx.current_instruction = 0x88062EBC;
	REX_STORE_U32(ctx.r28.u32 + 536, ctx.r7.u32);
loc_88062EC0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88071C78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88071C78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88071C78) {
			switch (rex_dispatch_address) {
				case 0x88071C80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88071C78;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88071C80: goto loc_88071C80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x88071C80;
	__savegprlr_21(ctx, base);
loc_88071C80:
	// lwz r23,2588(r3)
	ctx.current_instruction = 0x88071C80;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 2588);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x88071e90
	if (ctx.cr6.eq) goto loc_88071E90;
	// lwz r11,720(r3)
	ctx.current_instruction = 0x88071C8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r10,724(r3)
	ctx.current_instruction = 0x88071C94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,-108(r1)
	ctx.current_instruction = 0x88071CA0;
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r22.u32);
	// stw r9,-112(r1)
	ctx.current_instruction = 0x88071CA4;
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// stw r29,-104(r1)
	ctx.current_instruction = 0x88071CB0;
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r29.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,-100(r1)
	ctx.current_instruction = 0x88071CBC;
	REX_STORE_U32(ctx.r1.u32 + -100, ctx.r8.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88071d94
	if (!ctx.cr6.gt) goto loc_88071D94;
	// rotlwi r25,r10,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_88071CDC:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x88071d88
	if (!ctx.cr6.gt) goto loc_88071D88;
	// lwz r30,6792(r3)
	ctx.current_instruction = 0x88071CE8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 6792);
loc_88071CEC:
	// lbzx r11,r30,r4
	ctx.current_instruction = 0x88071CEC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// add r7,r31,r6
	ctx.r7.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x88071d04
	if (ctx.cr6.eq) goto loc_88071D04;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_88071D04:
	// lwz r8,2544(r3)
	ctx.current_instruction = 0x88071D04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88071D10:
	// lwz r11,0(r9)
	ctx.current_instruction = 0x88071D10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r8
	ctx.current_instruction = 0x88071D1C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x88071d70
	if (ctx.cr6.eq) goto loc_88071D70;
	// lwz r21,2548(r3)
	ctx.current_instruction = 0x88071D2C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// lhzx r10,r21,r10
	ctx.current_instruction = 0x88071D34;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r10.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// bge cr6,0x88071d48
	if (!ctx.cr6.lt) goto loc_88071D48;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x88071d54
	goto loc_88071D54;
loc_88071D48:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x88071d54
	if (!ctx.cr6.gt) goto loc_88071D54;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_88071D54:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x88071d64
	if (!ctx.cr6.lt) goto loc_88071D64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x88071d70
	goto loc_88071D70;
loc_88071D64:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x88071d70
	if (!ctx.cr6.gt) goto loc_88071D70;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_88071D70:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x88071d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88071D10;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x88071cec
	if (ctx.cr6.lt) goto loc_88071CEC;
loc_88071D88:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// bne 0x88071cdc
	if (!ctx.cr0.eq) goto loc_88071CDC;
loc_88071D94:
	// addic. r9,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r9.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x88071dfc
	if (ctx.cr0.lt) goto loc_88071DFC;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,12272
	ctx.r7.s64 = ctx.r11.s64 + 12272;
	// addi r8,r8,12256
	ctx.r8.s64 = ctx.r8.s64 + 12256;
loc_88071DB0:
	// stw r9,2588(r3)
	ctx.current_instruction = 0x88071DB0;
	REX_STORE_U32(ctx.r3.u32 + 2588, ctx.r9.u32);
	// lwzx r11,r10,r8
	ctx.current_instruction = 0x88071DB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88071df4
	if (ctx.cr6.lt) goto loc_88071DF4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88071df4
	if (!ctx.cr6.lt) goto loc_88071DF4;
	// lwzx r11,r10,r7
	ctx.current_instruction = 0x88071DCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x88071df4
	if (ctx.cr6.lt) goto loc_88071DF4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88071df4
	if (!ctx.cr6.lt) goto loc_88071DF4;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x88071db0
	if (!ctx.cr0.lt) goto loc_88071DB0;
	// b 0x88071dfc
	goto loc_88071DFC;
loc_88071DF4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,2588(r3)
	ctx.current_instruction = 0x88071DF8;
	REX_STORE_U32(ctx.r3.u32 + 2588, ctx.r11.u32);
loc_88071DFC:
	// lwz r11,2588(r3)
	ctx.current_instruction = 0x88071DFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2588);
	// lwz r10,2624(r3)
	ctx.current_instruction = 0x88071E00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2624);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88071e10
	if (!ctx.cr6.gt) goto loc_88071E10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_88071E10:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stw r11,2588(r3)
	ctx.current_instruction = 0x88071E14;
	REX_STORE_U32(ctx.r3.u32 + 2588, ctx.r11.u32);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// addi r8,r10,12208
	ctx.r8.s64 = ctx.r10.s64 + 12208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r7,12192
	ctx.r6.s64 = ctx.r7.s64 + 12192;
	// lwzx r5,r9,r8
	ctx.current_instruction = 0x88071E28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,2596(r3)
	ctx.current_instruction = 0x88071E30;
	REX_STORE_U32(ctx.r3.u32 + 2596, ctx.r5.u32);
	// lwzx r4,r9,r6
	ctx.current_instruction = 0x88071E34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,2600(r3)
	ctx.current_instruction = 0x88071E40;
	REX_STORE_U32(ctx.r3.u32 + 2600, ctx.r4.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r8,r22,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// slw r7,r22,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,2608(r3)
	ctx.current_instruction = 0x88071E50;
	REX_STORE_U32(ctx.r3.u32 + 2608, ctx.r8.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// stw r7,2604(r3)
	ctx.current_instruction = 0x88071E58;
	REX_STORE_U32(ctx.r3.u32 + 2604, ctx.r7.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,6892(r3)
	ctx.current_instruction = 0x88071E64;
	REX_STORE_U32(ctx.r3.u32 + 6892, ctx.r6.u32);
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r5,6896(r3)
	ctx.current_instruction = 0x88071E74;
	REX_STORE_U32(ctx.r3.u32 + 6896, ctx.r5.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r4,6900(r3)
	ctx.current_instruction = 0x88071E7C;
	REX_STORE_U32(ctx.r3.u32 + 6900, ctx.r4.u32);
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// stw r10,2612(r3)
	ctx.current_instruction = 0x88071E84;
	REX_STORE_U32(ctx.r3.u32 + 2612, ctx.r10.u32);
	// stw r9,2616(r3)
	ctx.current_instruction = 0x88071E88;
	REX_STORE_U32(ctx.r3.u32 + 2616, ctx.r9.u32);
	// stw r8,6904(r3)
	ctx.current_instruction = 0x88071E8C;
	REX_STORE_U32(ctx.r3.u32 + 6904, ctx.r8.u32);
loc_88071E90:
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8807CC18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807CC18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807CC18;
	ctx.current_instruction = 0x8807CC18;
	PPCRegister temp{};
	// lwz r10,132(r3)
	ctx.current_instruction = 0x8807CC18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lis r11,12483
	ctx.r11.s64 = 818085888;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r11,r11,3121
	ctx.r11.u64 = ctx.r11.u64 | 3121;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulhw r8,r10,r11
	ctx.r8.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r5,r7,21
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(21));
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// addi r4,r10,10
	ctx.r4.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.current_instruction = 0x8807CC54;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	ctx.current_instruction = 0x8807CC58;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lwz r5,132(r3)
	ctx.current_instruction = 0x8807CC5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
loc_8807CC60:
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lfs f13,128(r3)
	ctx.current_instruction = 0x8807CC64;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// mulhw r9,r10,r11
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mulli r4,r7,21
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(21));
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r3
	ctx.current_instruction = 0x8807CC8C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8807cc9c
	if (!ctx.cr6.lt) goto loc_8807CC9C;
	// stfs f0,128(r3)
	ctx.current_instruction = 0x8807CC98;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_8807CC9C:
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// lfs f13,128(r3)
	ctx.current_instruction = 0x8807CCA0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// mulhw r9,r10,r11
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r7,r8,21
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(21));
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// addi r4,r10,10
	ctx.r4.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r3
	ctx.current_instruction = 0x8807CCC4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8807ccd4
	if (!ctx.cr6.lt) goto loc_8807CCD4;
	// stfs f0,128(r3)
	ctx.current_instruction = 0x8807CCD0;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_8807CCD4:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x8807cc60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8807CC60;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807DE70) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8807DE70);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807DE70;
	ctx.current_instruction = 0x8807DE70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30636(r3)
	ctx.current_instruction = 0x8807DE74;
	REX_STORE_U32(ctx.r3.u32 + 30636, ctx.r11.u32);
	// stw r11,30616(r3)
	ctx.current_instruction = 0x8807DE78;
	REX_STORE_U32(ctx.r3.u32 + 30616, ctx.r11.u32);
	// stw r11,30620(r3)
	ctx.current_instruction = 0x8807DE7C;
	REX_STORE_U32(ctx.r3.u32 + 30620, ctx.r11.u32);
	// stw r11,30624(r3)
	ctx.current_instruction = 0x8807DE80;
	REX_STORE_U32(ctx.r3.u32 + 30624, ctx.r11.u32);
	// stw r11,30628(r3)
	ctx.current_instruction = 0x8807DE84;
	REX_STORE_U32(ctx.r3.u32 + 30628, ctx.r11.u32);
	// stw r11,30632(r3)
	ctx.current_instruction = 0x8807DE88;
	REX_STORE_U32(ctx.r3.u32 + 30632, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8807E548) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807E548;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807E548) {
			switch (rex_dispatch_address) {
				case 0x8807E5C4:
				case 0x8807E5D0:
				case 0x8807E5E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807E548;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807E5C4: goto loc_8807E5C4;
		case 0x8807E5D0: goto loc_8807E5D0;
		case 0x8807E5E8: goto loc_8807E5E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8807E54C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8807E550;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8807E554;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8807E558;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20256(r3)
	ctx.current_instruction = 0x8807E55C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807e57c
	if (ctx.cr6.eq) goto loc_8807E57C;
	// lwz r10,2800(r3)
	ctx.current_instruction = 0x8807E570;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807e580
	if (!ctx.cr6.eq) goto loc_8807E580;
loc_8807E57C:
	// stw r11,30416(r31)
	ctx.current_instruction = 0x8807E57C;
	REX_STORE_U32(ctx.r31.u32 + 30416, ctx.r11.u32);
loc_8807E580:
	// lwz r10,30416(r31)
	ctx.current_instruction = 0x8807E580;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807e5f0
	if (ctx.cr6.eq) goto loc_8807E5F0;
	// lwz r10,2092(r31)
	ctx.current_instruction = 0x8807E58C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2092);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8807e5b0
	if (!ctx.cr6.eq) goto loc_8807E5B0;
	// lwz r10,30544(r31)
	ctx.current_instruction = 0x8807E598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30544);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807e5b0
	if (!ctx.cr6.eq) goto loc_8807E5B0;
	// ld r10,30536(r31)
	ctx.current_instruction = 0x8807E5A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 30536);
	// stw r11,2092(r31)
	ctx.current_instruction = 0x8807E5A8;
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r11.u32);
	// std r10,30528(r31)
	ctx.current_instruction = 0x8807E5AC;
	REX_STORE_U64(ctx.r31.u32 + 30528, ctx.r10.u64);
loc_8807E5B0:
	// addi r4,r31,768
	ctx.r4.s64 = ctx.r31.s64 + 768;
	// lwz r30,768(r31)
	ctx.current_instruction = 0x8807E5B4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 768);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,2096(r31)
	ctx.current_instruction = 0x8807E5BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x8807c2d8
	ctx.lr = 0x8807E5C4;
	sub_8807C2D8(ctx, base);
loc_8807E5C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2096(r31)
	ctx.current_instruction = 0x8807E5C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x8807c328
	ctx.lr = 0x8807E5D0;
	sub_8807C328(ctx, base);
loc_8807E5D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8807e5e0
	if (ctx.cr6.eq) goto loc_8807E5E0;
	// li r3,-100
	ctx.r3.s64 = -100;
	// b 0x8807e5f4
	goto loc_8807E5F4;
loc_8807E5E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4858
	ctx.lr = 0x8807E5E8;
	sub_880E4858(ctx, base);
loc_8807E5E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,30420(r31)
	ctx.current_instruction = 0x8807E5EC;
	REX_STORE_U32(ctx.r31.u32 + 30420, ctx.r11.u32);
loc_8807E5F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8807E5F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8807E5F8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8807E600;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8807E604;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88082BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88082BB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88082BB0) {
			switch (rex_dispatch_address) {
				case 0x88082BB8:
				case 0x88082CE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88082BB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88082BB8: goto loc_88082BB8;
		case 0x88082CE4: goto loc_88082CE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88082BB8;
	__savegprlr_26(ctx, base);
loc_88082BB8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88082BB8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1672(r3)
	ctx.current_instruction = 0x88082BBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1672);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1668(r3)
	ctx.current_instruction = 0x88082BC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1668);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x88082c54
	if (ctx.cr6.eq) goto loc_88082C54;
	// lwz r11,20256(r3)
	ctx.current_instruction = 0x88082BD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082c54
	if (ctx.cr6.eq) goto loc_88082C54;
	// lwz r11,2204(r3)
	ctx.current_instruction = 0x88082BE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2204);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88082c10
	if (!ctx.cr6.eq) goto loc_88082C10;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r30,27996(r3)
	ctx.current_instruction = 0x88082C00;
	REX_STORE_U32(ctx.r3.u32 + 27996, ctx.r30.u32);
	// stw r30,1676(r3)
	ctx.current_instruction = 0x88082C04;
	REX_STORE_U32(ctx.r3.u32 + 1676, ctx.r30.u32);
	// stw r11,1668(r3)
	ctx.current_instruction = 0x88082C08;
	REX_STORE_U32(ctx.r3.u32 + 1668, ctx.r11.u32);
	// b 0x88082ce4
	goto loc_88082CE4;
loc_88082C10:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r29,27996(r31)
	ctx.current_instruction = 0x88082C14;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r29.u32);
	// bne cr6,0x88082c2c
	if (!ctx.cr6.eq) goto loc_88082C2C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r30,1676(r31)
	ctx.current_instruction = 0x88082C20;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r11,1668(r31)
	ctx.current_instruction = 0x88082C24;
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// b 0x88082ce4
	goto loc_88082CE4;
loc_88082C2C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x88082c44
	if (!ctx.cr6.eq) goto loc_88082C44;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r28,1676(r31)
	ctx.current_instruction = 0x88082C38;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r28.u32);
	// stw r11,1668(r31)
	ctx.current_instruction = 0x88082C3C;
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// b 0x88082ce4
	goto loc_88082CE4;
loc_88082C44:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r26,1676(r31)
	ctx.current_instruction = 0x88082C48;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r26.u32);
	// stw r11,1668(r31)
	ctx.current_instruction = 0x88082C4C;
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// b 0x88082ce4
	goto loc_88082CE4;
loc_88082C54:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r29,1668(r31)
	ctx.current_instruction = 0x88082C60;
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x88082c74
	if (!ctx.cr6.eq) goto loc_88082C74;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x88082c94
	goto loc_88082C94;
loc_88082C74:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x88082c84
	if (!ctx.cr6.eq) goto loc_88082C84;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x88082c94
	goto loc_88082C94;
loc_88082C84:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x88082c94
	if (ctx.cr6.eq) goto loc_88082C94;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_88082C94:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,1672(r31)
	ctx.current_instruction = 0x88082C98;
	REX_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r10,1676(r31)
	ctx.current_instruction = 0x88082CA0;
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r10.u32);
	// bne cr6,0x88082cb0
	if (!ctx.cr6.eq) goto loc_88082CB0;
	// stw r29,27996(r31)
	ctx.current_instruction = 0x88082CA8;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r29.u32);
	// b 0x88082cb4
	goto loc_88082CB4;
loc_88082CB0:
	// stw r30,27996(r31)
	ctx.current_instruction = 0x88082CB0;
	REX_STORE_U32(ctx.r31.u32 + 27996, ctx.r30.u32);
loc_88082CB4:
	// lwz r11,27996(r31)
	ctx.current_instruction = 0x88082CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082ce4
	if (ctx.cr6.eq) goto loc_88082CE4;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x88082CC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,724(r31)
	ctx.current_instruction = 0x88082CC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// lwz r3,1680(r31)
	ctx.current_instruction = 0x88082CD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1680);
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x88082CE4;
	sub_88052D90(ctx, base);
loc_88082CE4:
	// lwz r11,30432(r31)
	ctx.current_instruction = 0x88082CE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30432);
	// stw r30,1664(r31)
	ctx.current_instruction = 0x88082CE8;
	REX_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88082cf8
	if (!ctx.cr6.eq) goto loc_88082CF8;
	// stw r30,21092(r31)
	ctx.current_instruction = 0x88082CF4;
	REX_STORE_U32(ctx.r31.u32 + 21092, ctx.r30.u32);
loc_88082CF8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x88082d34
	if (!ctx.cr6.eq) goto loc_88082D34;
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// stw r28,28112(r31)
	ctx.current_instruction = 0x88082D04;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r28.u32);
	// lis r10,-30711
	ctx.r10.s64 = -2012676096;
	// stw r29,28020(r31)
	ctx.current_instruction = 0x88082D0C;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r29.u32);
	// lis r9,-30712
	ctx.r9.s64 = -2012741632;
	// stw r30,28040(r31)
	ctx.current_instruction = 0x88082D14;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r30.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r30,28056(r31)
	ctx.current_instruction = 0x88082D1C;
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r30.u32);
	// addi r7,r11,-18456
	ctx.r7.s64 = ctx.r11.s64 + -18456;
	// addi r6,r10,2640
	ctx.r6.s64 = ctx.r10.s64 + 2640;
	// stw r8,28120(r31)
	ctx.current_instruction = 0x88082D28;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r8.u32);
	// addi r5,r9,29048
	ctx.r5.s64 = ctx.r9.s64 + 29048;
	// b 0x88082e3c
	goto loc_88082E3C;
loc_88082D34:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x88082d70
	if (!ctx.cr6.eq) goto loc_88082D70;
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// stw r26,28112(r31)
	ctx.current_instruction = 0x88082D40;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r26.u32);
	// lis r10,-30711
	ctx.r10.s64 = -2012676096;
	// stw r29,28020(r31)
	ctx.current_instruction = 0x88082D48;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r29.u32);
	// lis r9,-30712
	ctx.r9.s64 = -2012741632;
	// stw r30,28040(r31)
	ctx.current_instruction = 0x88082D50;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r30.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r30,28056(r31)
	ctx.current_instruction = 0x88082D58;
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r30.u32);
	// addi r7,r11,-14488
	ctx.r7.s64 = ctx.r11.s64 + -14488;
	// addi r6,r10,6440
	ctx.r6.s64 = ctx.r10.s64 + 6440;
	// stw r8,28120(r31)
	ctx.current_instruction = 0x88082D64;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r8.u32);
	// addi r5,r9,29048
	ctx.r5.s64 = ctx.r9.s64 + 29048;
	// b 0x88082e3c
	goto loc_88082E3C;
loc_88082D70:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x88082dc4
	if (!ctx.cr6.eq) goto loc_88082DC4;
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// stw r29,28020(r31)
	ctx.current_instruction = 0x88082D7C;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r29.u32);
	// lis r10,-30711
	ctx.r10.s64 = -2012676096;
	// stw r30,28040(r31)
	ctx.current_instruction = 0x88082D84;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r30.u32);
	// lis r9,-30712
	ctx.r9.s64 = -2012741632;
	// stw r30,28056(r31)
	ctx.current_instruction = 0x88082D8C;
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r30.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r28,28116(r31)
	ctx.current_instruction = 0x88082D94;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r28.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r11,-14488
	ctx.r6.s64 = ctx.r11.s64 + -14488;
	// stw r8,28112(r31)
	ctx.current_instruction = 0x88082DA0;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r8.u32);
	// addi r5,r10,6440
	ctx.r5.s64 = ctx.r10.s64 + 6440;
	// stw r7,28120(r31)
	ctx.current_instruction = 0x88082DA8;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r7.u32);
	// addi r4,r9,29048
	ctx.r4.s64 = ctx.r9.s64 + 29048;
	// stw r6,28456(r31)
	ctx.current_instruction = 0x88082DB0;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r6.u32);
	// stw r5,28460(r31)
	ctx.current_instruction = 0x88082DB4;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r5.u32);
	// stw r4,28464(r31)
	ctx.current_instruction = 0x88082DB8;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88082DC4:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// stw r30,28020(r31)
	ctx.current_instruction = 0x88082DC8;
	REX_STORE_U32(ctx.r31.u32 + 28020, ctx.r30.u32);
	// lis r9,-30711
	ctx.r9.s64 = -2012676096;
	// stw r29,28056(r31)
	ctx.current_instruction = 0x88082DD0;
	REX_STORE_U32(ctx.r31.u32 + 28056, ctx.r29.u32);
	// bne cr6,0x88082e18
	if (!ctx.cr6.eq) goto loc_88082E18;
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// stw r30,28040(r31)
	ctx.current_instruction = 0x88082DDC;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r30.u32);
	// lis r10,-30711
	ctx.r10.s64 = -2012676096;
	// stw r28,28116(r31)
	ctx.current_instruction = 0x88082DE4;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r28.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r11,-14488
	ctx.r6.s64 = ctx.r11.s64 + -14488;
	// stw r8,28112(r31)
	ctx.current_instruction = 0x88082DF4;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r8.u32);
	// addi r5,r10,6440
	ctx.r5.s64 = ctx.r10.s64 + 6440;
	// stw r7,28120(r31)
	ctx.current_instruction = 0x88082DFC;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r7.u32);
	// addi r4,r9,-30616
	ctx.r4.s64 = ctx.r9.s64 + -30616;
	// stw r6,28456(r31)
	ctx.current_instruction = 0x88082E04;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r6.u32);
	// stw r5,28460(r31)
	ctx.current_instruction = 0x88082E08;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r5.u32);
	// stw r4,28464(r31)
	ctx.current_instruction = 0x88082E0C;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88082E18:
	// lis r11,-30711
	ctx.r11.s64 = -2012676096;
	// stw r26,28120(r31)
	ctx.current_instruction = 0x88082E1C;
	REX_STORE_U32(ctx.r31.u32 + 28120, ctx.r26.u32);
	// lis r10,-30711
	ctx.r10.s64 = -2012676096;
	// stw r29,28040(r31)
	ctx.current_instruction = 0x88082E24;
	REX_STORE_U32(ctx.r31.u32 + 28040, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r11,-8456
	ctx.r7.s64 = ctx.r11.s64 + -8456;
	// addi r6,r10,12176
	ctx.r6.s64 = ctx.r10.s64 + 12176;
	// stw r8,28112(r31)
	ctx.current_instruction = 0x88082E34;
	REX_STORE_U32(ctx.r31.u32 + 28112, ctx.r8.u32);
	// addi r5,r9,-30616
	ctx.r5.s64 = ctx.r9.s64 + -30616;
loc_88082E3C:
	// stw r7,28456(r31)
	ctx.current_instruction = 0x88082E3C;
	REX_STORE_U32(ctx.r31.u32 + 28456, ctx.r7.u32);
	// stw r6,28460(r31)
	ctx.current_instruction = 0x88082E40;
	REX_STORE_U32(ctx.r31.u32 + 28460, ctx.r6.u32);
	// stw r5,28464(r31)
	ctx.current_instruction = 0x88082E44;
	REX_STORE_U32(ctx.r31.u32 + 28464, ctx.r5.u32);
	// stw r28,28116(r31)
	ctx.current_instruction = 0x88082E48;
	REX_STORE_U32(ctx.r31.u32 + 28116, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88094A90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88094A90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88094A90) {
			switch (rex_dispatch_address) {
				case 0x88094A98:
				case 0x88094AE4:
				case 0x88094B34:
				case 0x88094B50:
				case 0x88094B68:
				case 0x88094BB0:
				case 0x88094BE0:
				case 0x88094C0C:
				case 0x88094C5C:
				case 0x88094E70:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88094A90;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88094A98: goto loc_88094A98;
		case 0x88094AE4: goto loc_88094AE4;
		case 0x88094B34: goto loc_88094B34;
		case 0x88094B50: goto loc_88094B50;
		case 0x88094B68: goto loc_88094B68;
		case 0x88094BB0: goto loc_88094BB0;
		case 0x88094BE0: goto loc_88094BE0;
		case 0x88094C0C: goto loc_88094C0C;
		case 0x88094C5C: goto loc_88094C5C;
		case 0x88094E70: goto loc_88094E70;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88094A98;
	__savegprlr_14(ctx, base);
loc_88094A98:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x88094A98;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,436(r1)
	ctx.current_instruction = 0x88094A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r20,8(r11)
	ctx.current_instruction = 0x88094AB8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r10,132(r1)
	ctx.current_instruction = 0x88094AC4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r27,r30,256
	ctx.r27.s64 = ctx.r30.s64 + 256;
	// bl 0x8810a970
	ctx.lr = 0x88094AE4;
	sub_8810A970(ctx, base);
loc_88094AE4:
	// lwz r8,412(r1)
	ctx.current_instruction = 0x88094AE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r7,404(r1)
	ctx.current_instruction = 0x88094AEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88094AF4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r23,388(r1)
	ctx.current_instruction = 0x88094B00;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mullw r6,r10,r4
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88094B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// bne cr6,0x88094b38
	if (!ctx.cr6.eq) goto loc_88094B38;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88094B1C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x88094B24;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88094B34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094B34:
	// b 0x88094b50
	goto loc_88094B50;
loc_88094B38:
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x88094B38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,84(r1)
	ctx.current_instruction = 0x88094B40;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x88094B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094B50:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,428
	ctx.r5.s64 = ctx.r1.s64 + 428;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810a970
	ctx.lr = 0x88094B68;
	sub_8810A970(ctx, base);
loc_88094B68:
	// lwz r8,428(r1)
	ctx.current_instruction = 0x88094B68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x88094B6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// lwz r7,420(r1)
	ctx.current_instruction = 0x88094B74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bne cr6,0x88094bb4
	if (!ctx.cr6.eq) goto loc_88094BB4;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2488(r31)
	ctx.current_instruction = 0x88094B88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88094B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r28,84(r1)
	ctx.current_instruction = 0x88094B98;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x88094BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094BB0:
	// b 0x88094be0
	goto loc_88094BE0;
loc_88094BB4:
	// stw r28,84(r1)
	ctx.current_instruction = 0x88094BB4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// lwz r3,2496(r31)
	ctx.current_instruction = 0x88094BBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x88094BC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x88094BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094BE0:
	// lwz r11,2844(r31)
	ctx.current_instruction = 0x88094BE0;
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
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x88094C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094C0C:
	// lwz r10,28020(r31)
	ctx.current_instruction = 0x88094C0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88094c80
	if (ctx.cr6.eq) goto loc_88094C80;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// stw r24,116(r1)
	ctx.current_instruction = 0x88094C1C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r25,108(r1)
	ctx.current_instruction = 0x88094C24;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r9,92(r1)
	ctx.current_instruction = 0x88094C2C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x88094C30;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x88094C3C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x88094C5C;
	sub_88085938(ctx, base);
loc_88094C5C:
	// lwz r6,108(r21)
	ctx.current_instruction = 0x88094C5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r5,136(r1)
	ctx.current_instruction = 0x88094C60;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r7,444(r1)
	ctx.current_instruction = 0x88094C64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88094C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r7)
	ctx.current_instruction = 0x88094C74;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88094C80:
	// lwz r11,28024(r31)
	ctx.current_instruction = 0x88094C80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88094e54
	if (ctx.cr6.eq) goto loc_88094E54;
	// subf r7,r22,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r22.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// addi r11,r22,14
	ctx.r11.s64 = ctx.r22.s64 + 14;
	// stw r7,136(r1)
	ctx.current_instruction = 0x88094C9C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// b 0x88094cac
	goto loc_88094CAC;
loc_88094CA4:
	// lwz r10,140(r1)
	ctx.current_instruction = 0x88094CA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,136(r1)
	ctx.current_instruction = 0x88094CA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_88094CAC:
	// lbz r5,21(r10)
	ctx.current_instruction = 0x88094CAC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// lbz r4,-9(r11)
	ctx.current_instruction = 0x88094CB0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -9);
	// lbz r3,20(r10)
	ctx.current_instruction = 0x88094CB4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbz r9,-10(r11)
	ctx.current_instruction = 0x88094CB8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -10);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lbz r31,23(r10)
	ctx.current_instruction = 0x88094CC0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// lbz r4,24(r10)
	ctx.current_instruction = 0x88094CC8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 24);
	// mullw r9,r5,r5
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// lbz r30,25(r10)
	ctx.current_instruction = 0x88094CD0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// lbz r5,26(r10)
	ctx.current_instruction = 0x88094CD4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 26);
	// lbz r29,27(r10)
	ctx.current_instruction = 0x88094CD8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 27);
	// lbz r28,28(r10)
	ctx.current_instruction = 0x88094CDC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 28);
	// lbz r24,18(r10)
	ctx.current_instruction = 0x88094CE0;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// lbz r23,17(r10)
	ctx.current_instruction = 0x88094CE4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// lbz r6,22(r10)
	ctx.current_instruction = 0x88094CE8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// lbz r27,29(r10)
	ctx.current_instruction = 0x88094CEC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 29);
	// lbz r26,31(r10)
	ctx.current_instruction = 0x88094CF0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 31);
	// lbz r25,19(r10)
	ctx.current_instruction = 0x88094CF4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// lbzu r22,16(r10)
	ctx.current_instruction = 0x88094CF8;
	ea = 16 + ctx.r10.u32;
	ctx.r22.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mullw r8,r3,r3
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// lbz r21,-8(r11)
	ctx.current_instruction = 0x88094D00;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// lbz r3,-7(r11)
	ctx.current_instruction = 0x88094D04;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -7);
	// lbz r20,-6(r11)
	ctx.current_instruction = 0x88094D08;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r19,-5(r11)
	ctx.current_instruction = 0x88094D0C;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// stw r10,140(r1)
	ctx.current_instruction = 0x88094D10;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stb r22,128(r1)
	ctx.current_instruction = 0x88094D14;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r22.u8);
	// lbz r22,-4(r11)
	ctx.current_instruction = 0x88094D18;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r18,-3(r11)
	ctx.current_instruction = 0x88094D1C;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r17,-2(r11)
	ctx.current_instruction = 0x88094D20;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// subf r10,r21,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r21.u64;
	// lbz r16,-1(r11)
	ctx.current_instruction = 0x88094D28;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r7,r7,r11
	ctx.current_instruction = 0x88094D30;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88094D38;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.current_instruction = 0x88094D3C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r21,-11(r11)
	ctx.current_instruction = 0x88094D40;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r11.u32 + -11);
	// lbz r15,-12(r11)
	ctx.current_instruction = 0x88094D44;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + -12);
	// lbz r14,-13(r11)
	ctx.current_instruction = 0x88094D48;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r11.u32 + -13);
	// std r11,144(r1)
	ctx.current_instruction = 0x88094D4C;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lbz r11,-14(r11)
	ctx.current_instruction = 0x88094D50;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// lbz r31,128(r1)
	ctx.current_instruction = 0x88094D60;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// subf r3,r20,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r20.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r3,r19,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r19.u64;
	// lwz r30,132(r1)
	ctx.current_instruction = 0x88094D74;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r4,r22,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r22.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r4,r4
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r5,r18,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r18.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r5,r17,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r17.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r3,r16,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r16.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r3,r3
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r5,r8,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r5,r5
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r6,r6,r26
	ctx.r6.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r6,r6
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r6,r11,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r7,r14,r23
	ctx.r7.u64 = ctx.r23.u64 - ctx.r14.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// subf r4,r21,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r21.u64;
	// subf r8,r15,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r15.u64;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r11,144(r1)
	ctx.current_instruction = 0x88094DF4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,132(r1)
	ctx.current_instruction = 0x88094E10;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bdnz 0x88094ca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88094CA4;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lwz r10,444(r1)
	ctx.current_instruction = 0x88094E1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,144(r1)
	ctx.current_instruction = 0x88094E24;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.current_instruction = 0x88094E28;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,12088(r9)
	ctx.current_instruction = 0x88094E30;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 12088);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,144(r1)
	ctx.current_instruction = 0x88094E40;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// lwz r8,148(r1)
	ctx.current_instruction = 0x88094E44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r8,0(r10)
	ctx.current_instruction = 0x88094E48;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88094E54:
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,396(r1)
	ctx.current_instruction = 0x88094E58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x88094E70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88094E70:
	// lwz r11,444(r1)
	ctx.current_instruction = 0x88094E70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// stw r3,0(r11)
	ctx.current_instruction = 0x88094E74;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880B21B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880B21B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880B21B8) {
			switch (rex_dispatch_address) {
				case 0x880B21C0:
				case 0x880B2204:
				case 0x880B220C:
				case 0x880B2258:
				case 0x880B226C:
				case 0x880B22DC:
				case 0x880B23E0:
				case 0x880B23FC:
				case 0x880B275C:
				case 0x880B279C:
				case 0x880B27E4:
				case 0x880B2838:
				case 0x880B28D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880B21B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880B21C0: goto loc_880B21C0;
		case 0x880B2204: goto loc_880B2204;
		case 0x880B220C: goto loc_880B220C;
		case 0x880B2258: goto loc_880B2258;
		case 0x880B226C: goto loc_880B226C;
		case 0x880B22DC: goto loc_880B22DC;
		case 0x880B23E0: goto loc_880B23E0;
		case 0x880B23FC: goto loc_880B23FC;
		case 0x880B275C: goto loc_880B275C;
		case 0x880B279C: goto loc_880B279C;
		case 0x880B27E4: goto loc_880B27E4;
		case 0x880B2838: goto loc_880B2838;
		case 0x880B28D0: goto loc_880B28D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880B21C0;
	__savegprlr_19(ctx, base);
loc_880B21C0:
	// stfd f31,-120(r1)
	ctx.current_instruction = 0x880B21C0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880B21C4;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1416(r3)
	ctx.current_instruction = 0x880B21C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1416);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,7600(r3)
	ctx.current_instruction = 0x880B21D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7600);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,7828(r3)
	ctx.current_instruction = 0x880B21DC;
	REX_STORE_U32(ctx.r3.u32 + 7828, ctx.r9.u32);
	// stw r29,2308(r3)
	ctx.current_instruction = 0x880B21E0;
	REX_STORE_U32(ctx.r3.u32 + 2308, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,19228(r3)
	ctx.current_instruction = 0x880B21E8;
	REX_STORE_U32(ctx.r3.u32 + 19228, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r5,8104(r3)
	ctx.current_instruction = 0x880B21F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8104);
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 & ctx.r5.u64;
	// bl 0x880b1f58
	ctx.lr = 0x880B2204;
	sub_880B1F58(ctx, base);
loc_880B2204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880785d8
	ctx.lr = 0x880B220C;
	sub_880785D8(ctx, base);
loc_880B220C:
	// lwz r3,2800(r31)
	ctx.current_instruction = 0x880B220C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x880b2220
	if (!ctx.cr6.eq) goto loc_880B2220;
	// lwz r11,20824(r31)
	ctx.current_instruction = 0x880B2218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20824);
	// b 0x880b2224
	goto loc_880B2224;
loc_880B2220:
	// lwz r11,20828(r31)
	ctx.current_instruction = 0x880B2220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20828);
loc_880B2224:
	// stw r11,20820(r31)
	ctx.current_instruction = 0x880B2224;
	REX_STORE_U32(ctx.r31.u32 + 20820, ctx.r11.u32);
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B2228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b2240
	if (ctx.cr6.eq) goto loc_880B2240;
	// lwz r11,28436(r31)
	ctx.current_instruction = 0x880B2234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28436);
	// stw r11,19232(r31)
	ctx.current_instruction = 0x880B2238;
	REX_STORE_U32(ctx.r31.u32 + 19232, ctx.r11.u32);
	// b 0x880b224c
	goto loc_880B224C;
loc_880B2240:
	// lwz r11,1416(r31)
	ctx.current_instruction = 0x880B2240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,19232(r31)
	ctx.current_instruction = 0x880B2248;
	REX_STORE_U32(ctx.r31.u32 + 19232, ctx.r10.u32);
loc_880B224C:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x880B2258;
	sub_880F40C0(ctx, base);
loc_880B2258:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B2258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x880ebce0
	ctx.lr = 0x880B226C;
	sub_880EBCE0(ctx, base);
loc_880B226C:
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x880B226C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// li r19,3
	ctx.r19.s64 = 3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x880b229c
	if (!ctx.cr6.eq) goto loc_880B229C;
	// lwz r11,2204(r31)
	ctx.current_instruction = 0x880B227C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b2298
	if (ctx.cr6.eq) goto loc_880B2298;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x880b2298
	if (ctx.cr6.eq) goto loc_880B2298;
	// stw r19,2204(r31)
	ctx.current_instruction = 0x880B2290;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r19.u32);
	// b 0x880b229c
	goto loc_880B229C;
loc_880B2298:
	// stw r29,2204(r31)
	ctx.current_instruction = 0x880B2298;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r29.u32);
loc_880B229C:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B229C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,31532(r31)
	ctx.current_instruction = 0x880B22A4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b22d0
	if (ctx.cr6.eq) goto loc_880B22D0;
	// lwz r11,1428(r31)
	ctx.current_instruction = 0x880B22B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r26,31532(r31)
	ctx.current_instruction = 0x880B22B4;
	REX_STORE_U32(ctx.r31.u32 + 31532, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b22c8
	if (ctx.cr6.eq) goto loc_880B22C8;
	// lwz r11,8224(r31)
	ctx.current_instruction = 0x880B22C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8224);
	// b 0x880b22cc
	goto loc_880B22CC;
loc_880B22C8:
	// lwz r11,8220(r31)
	ctx.current_instruction = 0x880B22C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8220);
loc_880B22CC:
	// stw r11,8208(r31)
	ctx.current_instruction = 0x880B22CC;
	REX_STORE_U32(ctx.r31.u32 + 8208, ctx.r11.u32);
loc_880B22D0:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x880B22DC;
	sub_880F40C0(ctx, base);
loc_880B22DC:
	// lwz r11,19456(r31)
	ctx.current_instruction = 0x880B22DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19456);
	// lwz r8,28020(r31)
	ctx.current_instruction = 0x880B22E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,19456(r31)
	ctx.current_instruction = 0x880B22EC;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r10.u32);
	// beq cr6,0x880b2314
	if (ctx.cr6.eq) goto loc_880B2314;
	// lwz r11,1428(r31)
	ctx.current_instruction = 0x880B22F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r30,31532(r31)
	ctx.current_instruction = 0x880B22F8;
	REX_STORE_U32(ctx.r31.u32 + 31532, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b230c
	if (ctx.cr6.eq) goto loc_880B230C;
	// lwz r11,8216(r31)
	ctx.current_instruction = 0x880B2304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8216);
	// b 0x880b2310
	goto loc_880B2310;
loc_880B230C:
	// lwz r11,8212(r31)
	ctx.current_instruction = 0x880B230C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8212);
loc_880B2310:
	// stw r11,8208(r31)
	ctx.current_instruction = 0x880B2310;
	REX_STORE_U32(ctx.r31.u32 + 8208, ctx.r11.u32);
loc_880B2314:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x880B2318;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lfd f11,1488(r11)
	ctx.current_instruction = 0x880B2324;
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fmr f31,f11
	ctx.f31.f64 = ctx.f11.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// bne cr6,0x880b24f4
	if (!ctx.cr6.eq) goto loc_880B24F4;
	// lwz r11,27996(r31)
	ctx.current_instruction = 0x880B2340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880B2348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// beq cr6,0x880b243c
	if (ctx.cr6.eq) goto loc_880B243C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880b2394
	if (!ctx.cr6.gt) goto loc_880B2394;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,2032
	ctx.r11.s64 = ctx.r31.s64 + 2032;
loc_880B2360:
	// lfd f9,928(r11)
	ctx.current_instruction = 0x880B2360;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 928);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfd f8,936(r11)
	ctx.current_instruction = 0x880B2368;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 936);
	// fadd f10,f9,f10
	ctx.f10.f64 = ctx.f9.f64 + ctx.f10.f64;
	// lfd f7,944(r11)
	ctx.current_instruction = 0x880B2370;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 944);
	// fadd f12,f8,f12
	ctx.f12.f64 = ctx.f8.f64 + ctx.f12.f64;
	// lfd f6,952(r11)
	ctx.current_instruction = 0x880B2378;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 952);
	// fadd f13,f7,f13
	ctx.f13.f64 = ctx.f7.f64 + ctx.f13.f64;
	// lfdu f9,968(r11)
	ctx.current_instruction = 0x880B2380;
	ea = 968 + ctx.r11.u32;
	ctx.f9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// fadd f0,f6,f0
	ctx.f0.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f11,f9,f11
	ctx.f11.f64 = ctx.f9.f64 + ctx.f11.f64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880b2360
	if (ctx.cr6.lt) goto loc_880B2360;
loc_880B2394:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880B2394;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f9,13232(r10)
	ctx.current_instruction = 0x880B23A4;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r10.u32 + 13232);
	// bne cr6,0x880b23b0
	if (!ctx.cr6.eq) goto loc_880B23B0;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_880B23B0:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b23c0
	if (!ctx.cr6.eq) goto loc_880B23C0;
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
loc_880B23C0:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b23d0
	if (!ctx.cr6.eq) goto loc_880B23D0;
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_880B23D0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880b23f8
	if (ctx.cr6.eq) goto loc_880B23F8;
	// bl 0x88085fa0
	ctx.lr = 0x880B23E0;
	sub_88085FA0(ctx, base);
loc_880B23E0:
	// lwz r11,28436(r31)
	ctx.current_instruction = 0x880B23E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28436);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x880B23EC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.current_instruction = 0x880B23F0;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x880b2414
	goto loc_880B2414;
loc_880B23F8:
	// bl 0x88085fa0
	ctx.lr = 0x880B23FC;
	sub_88085FA0(ctx, base);
loc_880B23FC:
	// lwz r11,1416(r31)
	ctx.current_instruction = 0x880B23FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	ctx.current_instruction = 0x880B240C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.current_instruction = 0x880B2410;
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_880B2414:
	// fcfid f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(ctx.f9.s64);
	// fadd f31,f8,f10
	ctx.f31.f64 = ctx.f8.f64 + ctx.f10.f64;
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x880b24b4
	if (!ctx.cr6.lt) goto loc_880B24B4;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x880b24d0
	if (!ctx.cr6.lt) goto loc_880B24D0;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x880b24e8
	if (!ctx.cr6.lt) goto loc_880B24E8;
	// stw r26,2204(r31)
	ctx.current_instruction = 0x880B2434;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r26.u32);
	// b 0x880b2524
	goto loc_880B2524;
loc_880B243C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880b2478
	if (!ctx.cr6.gt) goto loc_880B2478;
	// lwz r9,1624(r31)
	ctx.current_instruction = 0x880B2444;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r11,r31,2032
	ctx.r11.s64 = ctx.r31.s64 + 2032;
loc_880B244C:
	// lfd f10,936(r11)
	ctx.current_instruction = 0x880B244C;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 936);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfd f9,944(r11)
	ctx.current_instruction = 0x880B2454;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 944);
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// lfd f8,952(r11)
	ctx.current_instruction = 0x880B245C;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 952);
	// fadd f13,f9,f13
	ctx.f13.f64 = ctx.f9.f64 + ctx.f13.f64;
	// lfdu f10,968(r11)
	ctx.current_instruction = 0x880B2464;
	ea = 968 + ctx.r11.u32;
	ctx.f10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// fadd f0,f8,f0
	ctx.f0.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f11,f10,f11
	ctx.f11.f64 = ctx.f10.f64 + ctx.f11.f64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880b244c
	if (ctx.cr6.lt) goto loc_880B244C;
loc_880B2478:
	// lwz r11,1676(r31)
	ctx.current_instruction = 0x880B2478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f10,13232(r10)
	ctx.current_instruction = 0x880B2488;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 13232);
	// bne cr6,0x880b2494
	if (!ctx.cr6.eq) goto loc_880B2494;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
loc_880B2494:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880b24a4
	if (!ctx.cr6.eq) goto loc_880B24A4;
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
loc_880B24A4:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b24b4
	if (!ctx.cr6.eq) goto loc_880B24B4;
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_880B24B4:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x880b24d0
	if (!ctx.cr6.lt) goto loc_880B24D0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x880b24e8
	if (!ctx.cr6.lt) goto loc_880B24E8;
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// stw r29,2204(r31)
	ctx.current_instruction = 0x880B24C8;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r29.u32);
	// b 0x880b2524
	goto loc_880B2524;
loc_880B24D0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x880b24e8
	if (!ctx.cr6.lt) goto loc_880B24E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// stw r11,2204(r31)
	ctx.current_instruction = 0x880B24E0;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r11.u32);
	// b 0x880b2524
	goto loc_880B2524;
loc_880B24E8:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// stw r19,2204(r31)
	ctx.current_instruction = 0x880B24EC;
	REX_STORE_U32(ctx.r31.u32 + 2204, ctx.r19.u32);
	// b 0x880b2524
	goto loc_880B2524;
loc_880B24F4:
	// lwz r11,1624(r31)
	ctx.current_instruction = 0x880B24F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x880b2524
	if (!ctx.cr6.gt) goto loc_880B2524;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,2024
	ctx.r11.s64 = ctx.r31.s64 + 2024;
loc_880B2508:
	// lfd f13,976(r11)
	ctx.current_instruction = 0x880B2508;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 976);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfdu f0,968(r11)
	ctx.current_instruction = 0x880B2510;
	ea = 968 + ctx.r11.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// fadd f11,f13,f11
	ctx.f11.f64 = ctx.f13.f64 + ctx.f11.f64;
	// fadd f31,f0,f31
	ctx.f31.f64 = ctx.f0.f64 + ctx.f31.f64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880b2508
	if (ctx.cr6.lt) goto loc_880B2508;
loc_880B2524:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880B2524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b253c
	if (!ctx.cr6.eq) goto loc_880B253C;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,13352(r11)
	ctx.current_instruction = 0x880B2534;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 13352);
	// fmul f31,f31,f0
	ctx.f31.f64 = ctx.f31.f64 * ctx.f0.f64;
loc_880B253C:
	// lwz r11,8056(r31)
	ctx.current_instruction = 0x880B253C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b2558
	if (!ctx.cr6.eq) goto loc_880B2558;
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x880b2558
	if (!ctx.cr6.lt) goto loc_880B2558;
	// stw r29,7140(r31)
	ctx.current_instruction = 0x880B2550;
	REX_STORE_U32(ctx.r31.u32 + 7140, ctx.r29.u32);
	// b 0x880b2888
	goto loc_880B2888;
loc_880B2558:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880B2558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880b27d0
	if (!ctx.cr6.eq) goto loc_880B27D0;
	// lwz r11,2204(r31)
	ctx.current_instruction = 0x880B2564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b25a8
	if (ctx.cr6.eq) goto loc_880B25A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r26,19456(r31)
	ctx.current_instruction = 0x880B2574;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r26.u32);
	// bne cr6,0x880b2588
	if (!ctx.cr6.eq) goto loc_880B2588;
	// lwz r20,7532(r31)
	ctx.current_instruction = 0x880B257C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 7532);
	// lwz r28,7536(r31)
	ctx.current_instruction = 0x880B2580;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 7536);
	// b 0x880b25b0
	goto loc_880B25B0;
loc_880B2588:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880b259c
	if (!ctx.cr6.eq) goto loc_880B259C;
	// lwz r20,7548(r31)
	ctx.current_instruction = 0x880B2590;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 7548);
	// lwz r28,7552(r31)
	ctx.current_instruction = 0x880B2594;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 7552);
	// b 0x880b25b0
	goto loc_880B25B0;
loc_880B259C:
	// lwz r20,7540(r31)
	ctx.current_instruction = 0x880B259C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 7540);
	// lwz r28,7544(r31)
	ctx.current_instruction = 0x880B25A0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 7544);
	// b 0x880b25b0
	goto loc_880B25B0;
loc_880B25A8:
	// lwz r20,80(r1)
	ctx.current_instruction = 0x880B25A8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,80(r1)
	ctx.current_instruction = 0x880B25AC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880B25B0:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880B25B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880b2888
	if (!ctx.cr6.gt) goto loc_880B2888;
	// li r21,16384
	ctx.r21.s64 = 16384;
loc_880B25C8:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B25C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880b27bc
	if (!ctx.cr6.gt) goto loc_880B27BC;
	// mulli r22,r29,276
	ctx.r22.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(276));
	// rlwinm r24,r29,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r28,r20
	ctx.r25.u64 = ctx.r20.u64 - ctx.r28.u64;
loc_880B25E8:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B25E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,2204(r31)
	ctx.current_instruction = 0x880B25EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// mullw r9,r11,r23
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x880b2774
	if (ctx.cr6.eq) goto loc_880B2774;
	// lwz r8,6792(r31)
	ctx.current_instruction = 0x880B2608;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// add r9,r30,r28
	ctx.r9.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r26,r8,r29
	ctx.current_instruction = 0x880B2614;
	REX_STORE_U8(ctx.r8.u32 + ctx.r29.u32, ctx.r26.u8);
	// lhzx r7,r25,r9
	ctx.current_instruction = 0x880B2618;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r9.u32);
	// lwz r6,2544(r31)
	ctx.current_instruction = 0x880B261C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// sthx r7,r11,r6
	ctx.current_instruction = 0x880B2620;
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u16);
	// lwz r5,2544(r31)
	ctx.current_instruction = 0x880B2624;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lwz r4,720(r31)
	ctx.current_instruction = 0x880B2628;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r9,r5,r11
	ctx.current_instruction = 0x880B2634;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r8,r5
	ctx.current_instruction = 0x880B263C;
	REX_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r9.u16);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x880B2640;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B264C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r5,0(r9)
	ctx.current_instruction = 0x880B2658;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// sth r5,2(r9)
	ctx.current_instruction = 0x880B265C;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r5.u16);
	// lwz r4,720(r31)
	ctx.current_instruction = 0x880B2660;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,2544(r31)
	ctx.current_instruction = 0x880B266C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x880B267C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// sth r6,2(r3)
	ctx.current_instruction = 0x880B2680;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// lwz r5,2548(r31)
	ctx.current_instruction = 0x880B2684;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lhzx r4,r30,r28
	ctx.current_instruction = 0x880B2688;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// sthx r4,r11,r5
	ctx.current_instruction = 0x880B268C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u16);
	// lwz r3,2548(r31)
	ctx.current_instruction = 0x880B2690;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880B2694;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r7,r3,r11
	ctx.current_instruction = 0x880B26A0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r6,r3
	ctx.current_instruction = 0x880B26A8;
	REX_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r7.u16);
	// lwz r5,720(r31)
	ctx.current_instruction = 0x880B26AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x880B26B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r3,0(r9)
	ctx.current_instruction = 0x880B26C4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// sth r3,2(r9)
	ctx.current_instruction = 0x880B26C8;
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r3.u16);
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880B26CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,2548(r31)
	ctx.current_instruction = 0x880B26D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r10
	ctx.current_instruction = 0x880B26E8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// sth r5,2(r8)
	ctx.current_instruction = 0x880B26EC;
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r5.u16);
	// lwz r4,2544(r31)
	ctx.current_instruction = 0x880B26F0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2544);
	// lhzx r3,r11,r4
	ctx.current_instruction = 0x880B26F4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// bne cr6,0x880b276c
	if (!ctx.cr6.eq) goto loc_880B276C;
	// lwz r11,2552(r31)
	ctx.current_instruction = 0x880B2700;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// sthx r21,r11,r30
	ctx.current_instruction = 0x880B2704;
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r21.u16);
	// lwz r10,2556(r31)
	ctx.current_instruction = 0x880B2708;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2556);
	// sthx r21,r10,r30
	ctx.current_instruction = 0x880B270C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r21.u16);
	// lwz r9,2124(r31)
	ctx.current_instruction = 0x880B2710;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x880b275c
	if (!ctx.cr6.gt) goto loc_880B275C;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880B271C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880b275c
	if (!ctx.cr6.eq) goto loc_880B275C;
	// lwz r11,2796(r31)
	ctx.current_instruction = 0x880B2728;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r26,r24,r11
	ctx.current_instruction = 0x880B273C;
	REX_STORE_U16(ctx.r24.u32 + ctx.r11.u32, ctx.r26.u16);
	// lwz r11,2796(r31)
	ctx.current_instruction = 0x880B2740;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// sth r26,2(r10)
	ctx.current_instruction = 0x880B2748;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r26.u16);
	// lwz r11,7788(r31)
	ctx.current_instruction = 0x880B274C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7788);
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r19,84(r9)
	ctx.current_instruction = 0x880B2754;
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r19.u32);
	// bl 0x8810ae78
	ctx.lr = 0x880B275C;
	sub_8810AE78(ctx, base);
loc_880B275C:
	// lwz r11,19456(r31)
	ctx.current_instruction = 0x880B275C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19456);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19456(r31)
	ctx.current_instruction = 0x880B2764;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r11.u32);
	// b 0x880b279c
	goto loc_880B279C;
loc_880B276C:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x880b278c
	goto loc_880B278C;
loc_880B2774:
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880B2774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbzx r10,r11,r29
	ctx.current_instruction = 0x880B277C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880b278c
	if (ctx.cr6.eq) goto loc_880B278C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_880B278C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810ae78
	ctx.lr = 0x880B279C;
	sub_8810AE78(ctx, base);
loc_880B279C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B279C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r22,r22,276
	ctx.r22.s64 = ctx.r22.s64 + 276;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880b25e8
	if (ctx.cr6.lt) goto loc_880B25E8;
loc_880B27BC:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880B27BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880b25c8
	if (ctx.cr6.lt) goto loc_880B25C8;
	// b 0x880b2888
	goto loc_880B2888;
loc_880B27D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,7764(r31)
	ctx.current_instruction = 0x880B27D4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7764);
	// lwz r5,728(r31)
	ctx.current_instruction = 0x880B27D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r3,6792(r31)
	ctx.current_instruction = 0x880B27DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// bl 0x88052d90
	ctx.lr = 0x880B27E4;
	sub_88052D90(ctx, base);
loc_880B27E4:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880B27E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880b2888
	if (!ctx.cr6.gt) goto loc_880B2888;
loc_880B27F4:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B27F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x880b2878
	if (!ctx.cr6.gt) goto loc_880B2878;
loc_880B2804:
	// lwz r11,84(r29)
	ctx.current_instruction = 0x880B2804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stb r26,88(r29)
	ctx.current_instruction = 0x880B280C;
	REX_STORE_U8(ctx.r29.u32 + 88, ctx.r26.u8);
	// addi r27,r29,74
	ctx.r27.s64 = ctx.r29.s64 + 74;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,116(r29)
	ctx.current_instruction = 0x880B2820;
	REX_STORE_U32(ctx.r29.u32 + 116, ctx.r9.u32);
loc_880B2824:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff6a8
	ctx.lr = 0x880B2838;
	sub_880FF6A8(ctx, base);
loc_880B2838:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stbx r11,r30,r27
	ctx.current_instruction = 0x880B283C;
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x880b2824
	if (ctx.cr6.lt) goto loc_880B2824;
	// stb r26,60(r29)
	ctx.current_instruction = 0x880B284C;
	REX_STORE_U8(ctx.r29.u32 + 60, ctx.r26.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r26,56(r29)
	ctx.current_instruction = 0x880B2854;
	REX_STORE_U8(ctx.r29.u32 + 56, ctx.r26.u8);
	// stb r26,57(r29)
	ctx.current_instruction = 0x880B2858;
	REX_STORE_U8(ctx.r29.u32 + 57, ctx.r26.u8);
	// stb r26,58(r29)
	ctx.current_instruction = 0x880B285C;
	REX_STORE_U8(ctx.r29.u32 + 58, ctx.r26.u8);
	// stb r26,59(r29)
	ctx.current_instruction = 0x880B2860;
	REX_STORE_U8(ctx.r29.u32 + 59, ctx.r26.u8);
	// stb r26,61(r29)
	ctx.current_instruction = 0x880B2864;
	REX_STORE_U8(ctx.r29.u32 + 61, ctx.r26.u8);
	// addi r29,r29,276
	ctx.r29.s64 = ctx.r29.s64 + 276;
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880B286C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880b2804
	if (ctx.cr6.lt) goto loc_880B2804;
loc_880B2878:
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880B2878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880b27f4
	if (ctx.cr6.lt) goto loc_880B27F4;
loc_880B2888:
	// lwz r11,28048(r31)
	ctx.current_instruction = 0x880B2888;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b28ac
	if (ctx.cr6.eq) goto loc_880B28AC;
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x880B2894;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880b28a8
	if (ctx.cr6.eq) goto loc_880B28A8;
	// stfd f31,28072(r31)
	ctx.current_instruction = 0x880B28A0;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 28072, ctx.f31.u64);
	// b 0x880b28ac
	goto loc_880B28AC;
loc_880B28A8:
	// stfd f31,28080(r31)
	ctx.current_instruction = 0x880B28A8;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 28080, ctx.f31.u64);
loc_880B28AC:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880B28AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880b28d0
	if (!ctx.cr6.eq) goto loc_880B28D0;
	// lwz r11,7140(r31)
	ctx.current_instruction = 0x880B28B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880b28d0
	if (!ctx.cr6.eq) goto loc_880B28D0;
	// addi r4,r31,30232
	ctx.r4.s64 = ctx.r31.s64 + 30232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880709e8
	ctx.lr = 0x880B28D0;
	sub_880709E8(ctx, base);
loc_880B28D0:
	// lwz r3,19456(r31)
	ctx.current_instruction = 0x880B28D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 19456);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.current_instruction = 0x880B28D8;
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C27F8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880C27F8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C27F8;
	ctx.current_instruction = 0x880C27F8;
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C2808:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x880C2808;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x880C280C;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x880c2808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C2808;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C282C:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x880C282C;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r5)
	ctx.current_instruction = 0x880C2830;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x880c282c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C282C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C2850:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x880C2850;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r5)
	ctx.current_instruction = 0x880C2854;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x880c2850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C2850;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C2874:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x880C2874;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r5)
	ctx.current_instruction = 0x880C2878;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x880c2874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C2874;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C2898:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x880C2898;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r5)
	ctx.current_instruction = 0x880C289C;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x880c2898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C2898;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C28BC:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x880C28BC;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r5)
	ctx.current_instruction = 0x880C28C0;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x880c28bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C28BC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C28E0:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x880C28E0;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r5)
	ctx.current_instruction = 0x880C28E4;
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x880c28e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C28E0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C2904:
	// lbzu r9,1(r10)
	ctx.current_instruction = 0x880C2904;
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r9,1(r11)
	ctx.current_instruction = 0x880C2908;
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x880c2904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C2904;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C5C38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C5C38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C5C38) {
			switch (rex_dispatch_address) {
				case 0x880C5C40:
				case 0x880C5DA8:
				case 0x880C5DF4:
				case 0x880C5E9C:
				case 0x880C5F00:
				case 0x880C5F68:
				case 0x880C5F9C:
				case 0x880C6044:
				case 0x880C607C:
				case 0x880C609C:
				case 0x880C60D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C5C38;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C5C40: goto loc_880C5C40;
		case 0x880C5DA8: goto loc_880C5DA8;
		case 0x880C5DF4: goto loc_880C5DF4;
		case 0x880C5E9C: goto loc_880C5E9C;
		case 0x880C5F00: goto loc_880C5F00;
		case 0x880C5F68: goto loc_880C5F68;
		case 0x880C5F9C: goto loc_880C5F9C;
		case 0x880C6044: goto loc_880C6044;
		case 0x880C607C: goto loc_880C607C;
		case 0x880C609C: goto loc_880C609C;
		case 0x880C60D4: goto loc_880C60D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880C5C40;
	__savegprlr_20(ctx, base);
loc_880C5C40:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x880C5C40;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1372(r3)
	ctx.current_instruction = 0x880C5C44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,1364(r3)
	ctx.current_instruction = 0x880C5C4C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 1364);
	// lwz r9,1360(r3)
	ctx.current_instruction = 0x880C5C50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1360);
	// lwz r10,1352(r3)
	ctx.current_instruction = 0x880C5C54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1352);
	// mullw r26,r27,r11
	ctx.r26.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// lwz r8,30752(r3)
	ctx.current_instruction = 0x880C5C5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30752);
	// mullw r25,r10,r9
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880c5dfc
	if (!ctx.cr6.eq) goto loc_880C5DFC;
	// lwz r8,30756(r3)
	ctx.current_instruction = 0x880C5C6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30756);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880c5dfc
	if (!ctx.cr6.eq) goto loc_880C5DFC;
	// lwz r8,30624(r3)
	ctx.current_instruction = 0x880C5C78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30624);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880c5c90
	if (!ctx.cr6.eq) goto loc_880C5C90;
	// lwz r8,30628(r3)
	ctx.current_instruction = 0x880C5C84;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 30628);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880c5cb4
	if (ctx.cr6.eq) goto loc_880C5CB4;
loc_880C5C90:
	// lwz r8,19112(r31)
	ctx.current_instruction = 0x880C5C90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19112);
	// lwz r7,19120(r31)
	ctx.current_instruction = 0x880C5C94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19120);
	// lwz r6,4(r8)
	ctx.current_instruction = 0x880C5C98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880c5dfc
	if (!ctx.cr6.eq) goto loc_880C5DFC;
	// lwz r7,19124(r31)
	ctx.current_instruction = 0x880C5CA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19124);
	// lwz r6,8(r8)
	ctx.current_instruction = 0x880C5CA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x880c5dfc
	if (!ctx.cr6.eq) goto loc_880C5DFC;
loc_880C5CB4:
	// lwz r8,19212(r31)
	ctx.current_instruction = 0x880C5CB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19212);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x880c5dfc
	if (!ctx.cr6.eq) goto loc_880C5DFC;
	// lwz r8,1388(r31)
	ctx.current_instruction = 0x880C5CC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1388);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,1380(r31)
	ctx.current_instruction = 0x880C5CC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r4,40
	ctx.r4.s64 = 40;
	// sth r3,156(r1)
	ctx.current_instruction = 0x880C5CD0;
	REX_STORE_U16(ctx.r1.u32 + 156, ctx.r3.u16);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwz r5,19196(r31)
	ctx.current_instruction = 0x880C5CDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19196);
	// stw r4,144(r1)
	ctx.current_instruction = 0x880C5CE0;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// stw r8,152(r1)
	ctx.current_instruction = 0x880C5CE4;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r6,148(r1)
	ctx.current_instruction = 0x880C5CE8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r7,r7,22857
	ctx.r7.u64 = ctx.r7.u64 | 22857;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r7,160(r1)
	ctx.current_instruction = 0x880C5CFC;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// sth r4,158(r1)
	ctx.current_instruction = 0x880C5D04;
	REX_STORE_U16(ctx.r1.u32 + 158, ctx.r4.u16);
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,164(r1)
	ctx.current_instruction = 0x880C5D0C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r8,4(r5)
	ctx.current_instruction = 0x880C5D10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// subf r11,r7,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x880c5d30
	if (ctx.cr6.lt) goto loc_880C5D30;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_880C5D30:
	// lwz r11,8(r5)
	ctx.current_instruction = 0x880C5D30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x880c5d4c
	if (ctx.cr6.lt) goto loc_880C5D4C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_880C5D4C:
	// lwz r11,2124(r31)
	ctx.current_instruction = 0x880C5D4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5db0
	if (ctx.cr6.eq) goto loc_880C5DB0;
	// ld r11,736(r31)
	ctx.current_instruction = 0x880C5D58;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x880c5db0
	if (ctx.cr6.eq) goto loc_880C5DB0;
	// lwz r7,2800(r31)
	ctx.current_instruction = 0x880C5D64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x880c5db0
	if (ctx.cr6.eq) goto loc_880C5DB0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x880c5db0
	if (ctx.cr6.eq) goto loc_880C5DB0;
	// lwz r3,24(r31)
	ctx.current_instruction = 0x880C5D78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r11,28(r31)
	ctx.current_instruction = 0x880C5D80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r30,19108(r31)
	ctx.current_instruction = 0x880C5D88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 19108);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x880C5D90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,92(r1)
	ctx.current_instruction = 0x880C5D94;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880C5D9C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,84(r1)
	ctx.current_instruction = 0x880C5DA0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x880c06b0
	ctx.lr = 0x880C5DA8;
	sub_880C06B0(ctx, base);
loc_880C5DA8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C5DB0:
	// lwz r11,19108(r31)
	ctx.current_instruction = 0x880C5DB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19108);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r10,1400(r31)
	ctx.current_instruction = 0x880C5DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r4,19100(r31)
	ctx.current_instruction = 0x880C5DC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r3,19096(r31)
	ctx.current_instruction = 0x880C5DC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// subf r29,r10,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r30,19092(r31)
	ctx.current_instruction = 0x880C5DCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C5DD0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lwz r10,1396(r31)
	ctx.current_instruction = 0x880C5DD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1396);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	ctx.current_instruction = 0x880C5DE4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C5DEC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x880c06b0
	ctx.lr = 0x880C5DF4;
	sub_880C06B0(ctx, base);
loc_880C5DF4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C5DFC:
	// lwz r8,2124(r31)
	ctx.current_instruction = 0x880C5DFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880c5f04
	if (ctx.cr6.eq) goto loc_880C5F04;
	// ld r8,736(r31)
	ctx.current_instruction = 0x880C5E08;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r8,1
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 1, ctx.xer);
	// beq cr6,0x880c5f04
	if (ctx.cr6.eq) goto loc_880C5F04;
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x880C5E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x880c5ea0
	if (ctx.cr6.eq) goto loc_880C5EA0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x880c5ea0
	if (ctx.cr6.eq) goto loc_880C5EA0;
	// lwz r11,1400(r31)
	ctx.current_instruction = 0x880C5E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7808(r31)
	ctx.current_instruction = 0x880C5E30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7808);
	// lwz r8,7812(r31)
	ctx.current_instruction = 0x880C5E34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7812);
	// lwz r24,19212(r31)
	ctx.current_instruction = 0x880C5E38;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 19212);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r23,1392(r31)
	ctx.current_instruction = 0x880C5E40;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 1392);
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r22,1384(r31)
	ctx.current_instruction = 0x880C5E48;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r21,1388(r31)
	ctx.current_instruction = 0x880C5E50;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r20,1380(r31)
	ctx.current_instruction = 0x880C5E58;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r29,7816(r31)
	ctx.current_instruction = 0x880C5E5C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7816);
	// lwz r9,28(r31)
	ctx.current_instruction = 0x880C5E60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,24(r31)
	ctx.current_instruction = 0x880C5E64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,784(r31)
	ctx.current_instruction = 0x880C5E70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r24,140(r1)
	ctx.current_instruction = 0x880C5E78;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r23,132(r1)
	ctx.current_instruction = 0x880C5E7C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r22,124(r1)
	ctx.current_instruction = 0x880C5E80;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r21,116(r1)
	ctx.current_instruction = 0x880C5E84;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r20,108(r1)
	ctx.current_instruction = 0x880C5E88;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880C5E8C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r27,92(r1)
	ctx.current_instruction = 0x880C5E90;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r25,84(r1)
	ctx.current_instruction = 0x880C5E94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x880c0808
	ctx.lr = 0x880C5E9C;
	sub_880C0808(ctx, base);
loc_880C5E9C:
	// b 0x880c5f68
	goto loc_880C5F68;
loc_880C5EA0:
	// lwz r22,1380(r31)
	ctx.current_instruction = 0x880C5EA0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,92(r1)
	ctx.current_instruction = 0x880C5EA8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r25,84(r1)
	ctx.current_instruction = 0x880C5EAC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r4,1392(r31)
	ctx.current_instruction = 0x880C5EB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1392);
	// lwz r11,19212(r31)
	ctx.current_instruction = 0x880C5EB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19212);
	// stw r22,108(r1)
	ctx.current_instruction = 0x880C5EB8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lwz r24,1384(r31)
	ctx.current_instruction = 0x880C5EBC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r23,1388(r31)
	ctx.current_instruction = 0x880C5EC0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r7,19092(r31)
	ctx.current_instruction = 0x880C5EC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r8,19096(r31)
	ctx.current_instruction = 0x880C5EC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r9,19100(r31)
	ctx.current_instruction = 0x880C5ECC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r4,132(r1)
	ctx.current_instruction = 0x880C5ED4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,140(r1)
	ctx.current_instruction = 0x880C5EE0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r24,124(r1)
	ctx.current_instruction = 0x880C5EE8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r23,116(r1)
	ctx.current_instruction = 0x880C5EF0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r26,100(r1)
	ctx.current_instruction = 0x880C5EF8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x880c0808
	ctx.lr = 0x880C5F00;
	sub_880C0808(ctx, base);
loc_880C5F00:
	// b 0x880c5f68
	goto loc_880C5F68;
loc_880C5F04:
	// lwz r24,1384(r31)
	ctx.current_instruction = 0x880C5F04;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,1380(r31)
	ctx.current_instruction = 0x880C5F0C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r9,116(r1)
	ctx.current_instruction = 0x880C5F10;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,132(r1)
	ctx.current_instruction = 0x880C5F14;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r25,84(r1)
	ctx.current_instruction = 0x880C5F18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880C5F1C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r24,124(r1)
	ctx.current_instruction = 0x880C5F20;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x880C5F24;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r27,92(r1)
	ctx.current_instruction = 0x880C5F28;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r8,19212(r31)
	ctx.current_instruction = 0x880C5F2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19212);
	// lwz r11,1400(r31)
	ctx.current_instruction = 0x880C5F30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r9,28(r31)
	ctx.current_instruction = 0x880C5F34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,784(r31)
	ctx.current_instruction = 0x880C5F38;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,19100(r31)
	ctx.current_instruction = 0x880C5F40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// stw r8,140(r1)
	ctx.current_instruction = 0x880C5F44;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,24(r31)
	ctx.current_instruction = 0x880C5F4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,19092(r31)
	ctx.current_instruction = 0x880C5F54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,19096(r31)
	ctx.current_instruction = 0x880C5F5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x880c0808
	ctx.lr = 0x880C5F68;
	sub_880C0808(ctx, base);
loc_880C5F68:
	// lwz r11,30752(r31)
	ctx.current_instruction = 0x880C5F68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c5f80
	if (!ctx.cr6.eq) goto loc_880C5F80;
	// lwz r11,30756(r31)
	ctx.current_instruction = 0x880C5F74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5f9c
	if (ctx.cr6.eq) goto loc_880C5F9C;
loc_880C5F80:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4b68
	ctx.lr = 0x880C5F9C;
	sub_880E4B68(ctx, base);
loc_880C5F9C:
	// lwz r11,30624(r31)
	ctx.current_instruction = 0x880C5F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880c5fb4
	if (!ctx.cr6.eq) goto loc_880C5FB4;
	// lwz r11,30628(r31)
	ctx.current_instruction = 0x880C5FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880c5fd8
	if (ctx.cr6.eq) goto loc_880C5FD8;
loc_880C5FB4:
	// lwz r11,19112(r31)
	ctx.current_instruction = 0x880C5FB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19112);
	// lwz r10,19120(r31)
	ctx.current_instruction = 0x880C5FB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19120);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880C5FBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880c6084
	if (!ctx.cr6.eq) goto loc_880C6084;
	// lwz r10,19124(r31)
	ctx.current_instruction = 0x880C5FC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19124);
	// lwz r9,8(r11)
	ctx.current_instruction = 0x880C5FCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880c6084
	if (!ctx.cr6.eq) goto loc_880C6084;
loc_880C5FD8:
	// lwz r4,19112(r31)
	ctx.current_instruction = 0x880C5FD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 19112);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// lwz r11,16(r4)
	ctx.current_instruction = 0x880C5FE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c604c
	if (ctx.cr6.eq) goto loc_880C604C;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c604c
	if (ctx.cr6.eq) goto loc_880C604C;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,13392
	ctx.r9.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x880c604c
	if (ctx.cr6.eq) goto loc_880C604C;
	// stw r30,92(r1)
	ctx.current_instruction = 0x880C6010;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,19108(r31)
	ctx.current_instruction = 0x880C6018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19108);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,1360(r31)
	ctx.current_instruction = 0x880C6024;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r4,r31,8132
	ctx.r4.s64 = ctx.r31.s64 + 8132;
	// lwz r8,1352(r31)
	ctx.current_instruction = 0x880C602C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,19196(r31)
	ctx.current_instruction = 0x880C6034;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19196);
	// stw r28,100(r1)
	ctx.current_instruction = 0x880C6038;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C603C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880c06b0
	ctx.lr = 0x880C6044;
	sub_880C06B0(ctx, base);
loc_880C6044:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C604C:
	// stw r28,100(r1)
	ctx.current_instruction = 0x880C604C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,19108(r31)
	ctx.current_instruction = 0x880C6054;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19108);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,1360(r31)
	ctx.current_instruction = 0x880C6060;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1352(r31)
	ctx.current_instruction = 0x880C6068;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lwz r5,19196(r31)
	ctx.current_instruction = 0x880C606C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19196);
	// stw r30,92(r1)
	ctx.current_instruction = 0x880C6070;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C6074;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880c06b0
	ctx.lr = 0x880C607C;
	sub_880C06B0(ctx, base);
loc_880C607C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880C6084:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,19204(r31)
	ctx.current_instruction = 0x880C6088;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c09d0
	ctx.lr = 0x880C609C;
	sub_880C09D0(ctx, base);
loc_880C609C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,19196(r31)
	ctx.current_instruction = 0x880C60A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19196);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880C60A8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880C60B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r31,19156
	ctx.r4.s64 = ctx.r31.s64 + 19156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,19204(r31)
	ctx.current_instruction = 0x880C60BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 19204);
	// lwz r9,8(r5)
	ctx.current_instruction = 0x880C60C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r5)
	ctx.current_instruction = 0x880C60C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,19108(r31)
	ctx.current_instruction = 0x880C60C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19108);
	// stw r11,84(r1)
	ctx.current_instruction = 0x880C60CC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880c06b0
	ctx.lr = 0x880C60D4;
	sub_880C06B0(ctx, base);
loc_880C60D4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CB950) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CB950;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CB950) {
			switch (rex_dispatch_address) {
				case 0x880CB998:
				case 0x880CB9C0:
				case 0x880CBA08:
				case 0x880CBA30:
				case 0x880CBA58:
				case 0x880CBA64:
				case 0x880CBA7C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CB950;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CB998: goto loc_880CB998;
		case 0x880CB9C0: goto loc_880CB9C0;
		case 0x880CBA08: goto loc_880CBA08;
		case 0x880CBA30: goto loc_880CBA30;
		case 0x880CBA58: goto loc_880CBA58;
		case 0x880CBA64: goto loc_880CBA64;
		case 0x880CBA7C: goto loc_880CBA7C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880CB954;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880CB958;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880CB95C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	ctx.current_instruction = 0x880CB960;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.current_instruction = 0x880CB968;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cb9a4
	if (ctx.cr6.eq) goto loc_880CB9A4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x880CB978;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880cb9a4
	if (ctx.cr6.eq) goto loc_880CB9A4;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x880CB984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880CB98C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CB998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CB998:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cba80
	if (ctx.cr6.lt) goto loc_880CBA80;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CB9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CB9A4:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880CB9A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cb9cc
	if (ctx.cr6.eq) goto loc_880CB9CC;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x880CB9B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880cb318
	ctx.lr = 0x880CB9C0;
	sub_880CB318(ctx, base);
loc_880CB9C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cba80
	if (ctx.cr6.lt) goto loc_880CBA80;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CB9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CB9CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,4(r11)
	ctx.current_instruction = 0x880CB9D0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CB9D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880CB9D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cba14
	if (ctx.cr6.eq) goto loc_880CBA14;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.current_instruction = 0x880CB9E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x880cba14
	if (ctx.cr6.eq) goto loc_880CBA14;
	// lwz r11,20(r11)
	ctx.current_instruction = 0x880CB9F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x880CB9FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880CBA08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CBA08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cba80
	if (ctx.cr6.lt) goto loc_880CBA80;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CBA10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CBA14:
	// lwz r10,20(r11)
	ctx.current_instruction = 0x880CBA14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cba3c
	if (ctx.cr6.eq) goto loc_880CBA3C;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x880CBA28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880cb318
	ctx.lr = 0x880CBA30;
	sub_880CB318(ctx, base);
loc_880CBA30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cba80
	if (ctx.cr6.lt) goto loc_880CBA80;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CBA38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CBA3C:
	// stw r31,20(r11)
	ctx.current_instruction = 0x880CBA3C;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CBA40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,100(r11)
	ctx.current_instruction = 0x880CBA44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880cba5c
	if (ctx.cr6.eq) goto loc_880CBA5C;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x880CBA50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880caeb0
	ctx.lr = 0x880CBA58;
	sub_880CAEB0(ctx, base);
loc_880CBA58:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CBA58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CBA5C:
	// lwz r3,72(r11)
	ctx.current_instruction = 0x880CBA5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x880cb840
	ctx.lr = 0x880CBA64;
	sub_880CB840(ctx, base);
loc_880CBA64:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CBA64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.current_instruction = 0x880CBA74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880cb318
	ctx.lr = 0x880CBA7C;
	sub_880CB318(ctx, base);
loc_880CBA7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_880CBA80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880CBA84;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880CBA8C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CF2D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CF2D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CF2D8) {
			switch (rex_dispatch_address) {
				case 0x880CF2E0:
				case 0x880CF330:
				case 0x880CF3A8:
				case 0x880CF3F4:
				case 0x880CF428:
				case 0x880CF450:
				case 0x880CF468:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CF2D8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CF2E0: goto loc_880CF2E0;
		case 0x880CF330: goto loc_880CF330;
		case 0x880CF3A8: goto loc_880CF3A8;
		case 0x880CF3F4: goto loc_880CF3F4;
		case 0x880CF428: goto loc_880CF428;
		case 0x880CF450: goto loc_880CF450;
		case 0x880CF468: goto loc_880CF468;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880CF2E0;
	__savegprlr_26(ctx, base);
loc_880CF2E0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880CF2E0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,80(r1)
	ctx.current_instruction = 0x880CF2F0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bne cr6,0x880cf304
	if (!ctx.cr6.eq) goto loc_880CF304;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF304:
	// addi r26,r4,-24
	ctx.r26.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// bge cr6,0x880cf31c
	if (!ctx.cr6.lt) goto loc_880CF31C;
loc_880CF310:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF31C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.current_instruction = 0x880CF320;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF330;
	sub_8805ADC8(ctx, base);
loc_880CF330:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x880cf310
	if (!ctx.cr6.eq) goto loc_880CF310;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CF338;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CF344;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,2(r11)
	ctx.current_instruction = 0x880CF34C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.current_instruction = 0x880CF350;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.current_instruction = 0x880CF354;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.current_instruction = 0x880CF360;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,80(r1)
	ctx.current_instruction = 0x880CF364;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,220(r31)
	ctx.current_instruction = 0x880CF37C;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x880cf398
	if (!ctx.cr6.gt) goto loc_880CF398;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF398:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050340
	ctx.lr = 0x880CF3A8;
	sub_88050340(ctx, base);
loc_880CF3A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	ctx.current_instruction = 0x880CF3AC;
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// bne cr6,0x880cf3c0
	if (!ctx.cr6.eq) goto loc_880CF3C0;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_880CF3C0:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x880cf438
	if (!ctx.cr6.gt) goto loc_880CF438;
loc_880CF3C8:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// li r29,128
	ctx.r29.s64 = 128;
	// bgt cr6,0x880cf3d8
	if (ctx.cr6.gt) goto loc_880CF3D8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_880CF3D8:
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CF3D8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF3F4;
	sub_8805ADC8(ctx, base);
loc_880CF3F4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x880cf310
	if (!ctx.cr6.eq) goto loc_880CF310;
	// lwz r11,220(r31)
	ctx.current_instruction = 0x880CF400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r29,r27,r3
	ctx.r29.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x880cf310
	if (ctx.cr6.gt) goto loc_880CF310;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x880CF418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880CF41C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x880CF428;
	sub_880547A0(ctx, base);
loc_880CF428:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x880cf3c8
	if (!ctx.cr6.eq) goto loc_880CF3C8;
	// b 0x880cf468
	goto loc_880CF468;
loc_880CF438:
	// ld r11,0(r31)
	ctx.current_instruction = 0x880CF438;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8805adc8
	ctx.lr = 0x880CF450;
	sub_8805ADC8(ctx, base);
loc_880CF450:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x880cf310
	if (!ctx.cr6.eq) goto loc_880CF310;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x880CF45C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880CF460;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x880547a0
	ctx.lr = 0x880CF468;
	sub_880547A0(ctx, base);
loc_880CF468:
	// ld r10,0(r31)
	ctx.current_instruction = 0x880CF468;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	ctx.current_instruction = 0x880CF478;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D2098) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D2098;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D2098) {
			switch (rex_dispatch_address) {
				case 0x880D20A0:
				case 0x880D20F0:
				case 0x880D2188:
				case 0x880D21BC:
				case 0x880D21C4:
				case 0x880D222C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D2098;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D20A0: goto loc_880D20A0;
		case 0x880D20F0: goto loc_880D20F0;
		case 0x880D2188: goto loc_880D2188;
		case 0x880D21BC: goto loc_880D21BC;
		case 0x880D21C4: goto loc_880D21C4;
		case 0x880D222C: goto loc_880D222C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880D20A0;
	__savegprlr_25(ctx, base);
loc_880D20A0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880D20A0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,704(r3)
	ctx.current_instruction = 0x880D20A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,16(r4)
	ctx.current_instruction = 0x880D20AC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r29,24(r4)
	ctx.current_instruction = 0x880D20B4;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r25,32(r4)
	ctx.current_instruction = 0x880D20BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,8(r4)
	ctx.current_instruction = 0x880D20C4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// beq cr6,0x880d20f4
	if (ctx.cr6.eq) goto loc_880D20F4;
	// lwz r11,224(r3)
	ctx.current_instruction = 0x880D20CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880d20f4
	if (!ctx.cr6.eq) goto loc_880D20F4;
	// lwz r11,696(r3)
	ctx.current_instruction = 0x880D20D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d20f4
	if (!ctx.cr6.eq) goto loc_880D20F4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880d216c
	if (ctx.cr6.eq) goto loc_880D216C;
	// bl 0x880d1df0
	ctx.lr = 0x880D20F0;
	sub_880D1DF0(ctx, base);
loc_880D20F0:
	// stw r27,696(r31)
	ctx.current_instruction = 0x880D20F0;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r27.u32);
loc_880D20F4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880d216c
	if (ctx.cr6.eq) goto loc_880D216C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x880d216c
	if (ctx.cr6.eq) goto loc_880D216C;
	// lhz r11,154(r31)
	ctx.current_instruction = 0x880D2104;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x880d211c
	if (!ctx.cr6.gt) goto loc_880D211C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,154(r31)
	ctx.current_instruction = 0x880D2118;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
loc_880D211C:
	// ld r11,168(r31)
	ctx.current_instruction = 0x880D211C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// beq cr6,0x880d216c
	if (ctx.cr6.eq) goto loc_880D216C;
	// lwz r11,156(r31)
	ctx.current_instruction = 0x880D2128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d2144
	if (!ctx.cr6.eq) goto loc_880D2144;
	// std r29,168(r31)
	ctx.current_instruction = 0x880D2134;
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r29.u64);
	// stw r27,156(r31)
	ctx.current_instruction = 0x880D2138;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// sth r27,154(r31)
	ctx.current_instruction = 0x880D213C;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// b 0x880d216c
	goto loc_880D216C;
loc_880D2144:
	// lhz r11,154(r31)
	ctx.current_instruction = 0x880D2144;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// std r29,176(r31)
	ctx.current_instruction = 0x880D2148;
	REX_STORE_U64(ctx.r31.u32 + 176, ctx.r29.u64);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,154(r31)
	ctx.current_instruction = 0x880D2154;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r9.u16);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x880d216c
	if (ctx.cr6.eq) goto loc_880D216C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r31)
	ctx.current_instruction = 0x880D2164;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// sth r11,154(r31)
	ctx.current_instruction = 0x880D2168;
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
loc_880D216C:
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D216C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d2188
	if (ctx.cr6.eq) goto loc_880D2188;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880d2188
	if (ctx.cr6.eq) goto loc_880D2188;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x8812baa8
	ctx.lr = 0x880D2188;
	sub_8812BAA8(ctx, base);
loc_880D2188:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D2188;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// lwz r10,36(r30)
	ctx.current_instruction = 0x880D2190;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,704(r31)
	ctx.current_instruction = 0x880D2194;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r30)
	ctx.current_instruction = 0x880D219C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r6,8(r30)
	ctx.current_instruction = 0x880D21A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.current_instruction = 0x880D21A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.current_instruction = 0x880D21AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,60(r11)
	ctx.current_instruction = 0x880D21B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x880d21c0
	if (ctx.cr6.eq) goto loc_880D21C0;
	// bl 0x8812c388
	ctx.lr = 0x880D21BC;
	sub_8812C388(ctx, base);
loc_880D21BC:
	// b 0x880d21c4
	goto loc_880D21C4;
loc_880D21C0:
	// bl 0x8812c380
	ctx.lr = 0x880D21C4;
	sub_8812C380(ctx, base);
loc_880D21C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d222c
	if (ctx.cr6.lt) goto loc_880D222C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x880d21e4
	if (!ctx.cr6.eq) goto loc_880D21E4;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880D21D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,72(r11)
	ctx.current_instruction = 0x880D21DC;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r27,696(r31)
	ctx.current_instruction = 0x880D21E0;
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r27.u32);
loc_880D21E4:
	// lwz r11,704(r31)
	ctx.current_instruction = 0x880D21E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880d222c
	if (ctx.cr6.eq) goto loc_880D222C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x880d2210
	if (!ctx.cr6.eq) goto loc_880D2210;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880d222c
	if (ctx.cr6.eq) goto loc_880D222C;
loc_880D2200:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_880D2210:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x880d222c
	if (ctx.cr6.eq) goto loc_880D222C;
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 8, ctx.xer);
	// bge cr6,0x880d2200
	if (!ctx.cr6.lt) goto loc_880D2200;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8812c818
	ctx.lr = 0x880D222C;
	sub_8812C818(ctx, base);
loc_880D222C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D6358) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D6358;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D6358) {
			switch (rex_dispatch_address) {
				case 0x880D6360:
				case 0x880D6368:
				case 0x880D6424:
				case 0x880D64D8:
				case 0x880D656C:
				case 0x880D65F0:
				case 0x880D678C:
				case 0x880D67EC:
				case 0x880D6804:
				case 0x880D6918:
				case 0x880D6AB4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D6358;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D6360: goto loc_880D6360;
		case 0x880D6368: goto loc_880D6368;
		case 0x880D6424: goto loc_880D6424;
		case 0x880D64D8: goto loc_880D64D8;
		case 0x880D656C: goto loc_880D656C;
		case 0x880D65F0: goto loc_880D65F0;
		case 0x880D678C: goto loc_880D678C;
		case 0x880D67EC: goto loc_880D67EC;
		case 0x880D6804: goto loc_880D6804;
		case 0x880D6918: goto loc_880D6918;
		case 0x880D6AB4: goto loc_880D6AB4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880D6360;
	__savegprlr_23(ctx, base);
loc_880D6360:
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef278
	ctx.lr = 0x880D6368;
	__savefpr_24(ctx, base);
loc_880D6368:
	// stwu r1,-976(r1)
	ctx.current_instruction = 0x880D6368;
	ea = -976 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,14484(r11)
	ctx.current_instruction = 0x880D6380;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14484);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// stfs f0,96(r1)
	ctx.current_instruction = 0x880D638C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfs f13,6800(r10)
	ctx.current_instruction = 0x880D63A4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6800);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lfs f31,6732(r9)
	ctx.current_instruction = 0x880D63AC;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6732);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfs f12,14480(r8)
	ctx.current_instruction = 0x880D63B4;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 14480);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f11,14476(r7)
	ctx.current_instruction = 0x880D63BC;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 14476);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,14472(r6)
	ctx.current_instruction = 0x880D63C0;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 14472);
	ctx.f10.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f9,14468(r5)
	ctx.current_instruction = 0x880D63C8;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 14468);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lfs f8,14464(r4)
	ctx.current_instruction = 0x880D63D0;
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 14464);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,14460(r3)
	ctx.current_instruction = 0x880D63D4;
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 14460);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,14456(r11)
	ctx.current_instruction = 0x880D63D8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14456);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,100(r1)
	ctx.current_instruction = 0x880D63DC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	ctx.current_instruction = 0x880D63E0;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	ctx.current_instruction = 0x880D63E4;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	ctx.current_instruction = 0x880D63E8;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	ctx.current_instruction = 0x880D63EC;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	ctx.current_instruction = 0x880D63F0;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	ctx.current_instruction = 0x880D63F4;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	ctx.current_instruction = 0x880D63F8;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	ctx.current_instruction = 0x880D63FC;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	ctx.current_instruction = 0x880D6400;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// blt cr6,0x880d6410
	if (ctx.cr6.lt) goto loc_880D6410;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bge cr6,0x880d6428
	if (!ctx.cr6.lt) goto loc_880D6428;
loc_880D6410:
	// lis r23,-32764
	ctx.r23.s64 = -2147221504;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef2c4
	ctx.lr = 0x880D6424;
	__restfpr_24(ctx, base);
loc_880D6424:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880D6428:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d64ac
	if (!ctx.cr6.gt) goto loc_880D64AC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_880D6438:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x880d647c
	if (ctx.cr6.lt) goto loc_880D647C;
	// lwz r10,0(r5)
	ctx.current_instruction = 0x880D6444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r26,-3
	ctx.r6.s64 = ctx.r26.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D6450:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f31,r10,r11
	ctx.current_instruction = 0x880D6454;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
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
	// stfs f31,4(r7)
	ctx.current_instruction = 0x880D646C;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f31,-4(r3)
	ctx.current_instruction = 0x880D6470;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f31,r10,r8
	ctx.current_instruction = 0x880D6474;
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x880d6450
	if (ctx.cr6.lt) goto loc_880D6450;
loc_880D647C:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880d64a0
	if (!ctx.cr6.lt) goto loc_880D64A0;
	// subf r8,r9,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r9.u64;
	// lwz r10,0(r5)
	ctx.current_instruction = 0x880D6488;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880D6494:
	// stfsx f31,r10,r11
	ctx.current_instruction = 0x880D6494;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d6494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6494;
loc_880D64A0:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x880d6438
	if (!ctx.cr0.eq) goto loc_880D6438;
loc_880D64AC:
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// bne cr6,0x880d64cc
	if (!ctx.cr6.eq) goto loc_880D64CC;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 5, ctx.xer);
	// bne cr6,0x880d64cc
	if (!ctx.cr6.eq) goto loc_880D64CC;
	// cmplwi cr6,r31,1543
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1543, ctx.xer);
	// bne cr6,0x880d673c
	if (!ctx.cr6.eq) goto loc_880D673C;
	// cmplwi cr6,r30,55
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 55, ctx.xer);
	// beq cr6,0x880d674c
	if (ctx.cr6.eq) goto loc_880D674C;
loc_880D64CC:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f1,8624(r11)
	ctx.current_instruction = 0x880D64D0;
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8624);
	// bl 0x881f0060
	ctx.lr = 0x880D64D8;
	sub_881F0060(ctx, base);
loc_880D64D8:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfs f0,12500(r8)
	ctx.current_instruction = 0x880D64F0;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12500);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble cr6,0x880d655c
	if (!ctx.cr6.gt) goto loc_880D655C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_880D6500:
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r9,r8,r7
	ctx.current_instruction = 0x880D650C;
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x880d6530
	if (!ctx.cr6.eq) goto loc_880D6530;
loc_880D6514:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x880d6900
	if (ctx.cr6.gt) goto loc_880D6900;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d6514
	if (ctx.cr6.eq) goto loc_880D6514;
loc_880D6530:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r7,r6
	ctx.current_instruction = 0x880D6548;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// stfsx f0,r8,r5
	ctx.current_instruction = 0x880D6550;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x880d6500
	if (ctx.cr6.lt) goto loc_880D6500;
loc_880D655C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x880d61f8
	ctx.lr = 0x880D656C;
	sub_880D61F8(ctx, base);
loc_880D656C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d65e0
	if (!ctx.cr6.gt) goto loc_880D65E0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_880D6584:
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// and r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r9,r8,r7
	ctx.current_instruction = 0x880D6590;
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x880d65b4
	if (!ctx.cr6.eq) goto loc_880D65B4;
loc_880D6598:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x880d6900
	if (ctx.cr6.gt) goto loc_880D6900;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880d6598
	if (ctx.cr6.eq) goto loc_880D6598;
loc_880D65B4:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r7,r6
	ctx.current_instruction = 0x880D65CC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// stfsx f0,r8,r5
	ctx.current_instruction = 0x880D65D4;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x880d6584
	if (ctx.cr6.lt) goto loc_880D6584;
loc_880D65E0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x880d61f8
	ctx.lr = 0x880D65F0;
	sub_880D61F8(ctx, base);
loc_880D65F0:
	// addi r27,r25,-1
	ctx.r27.s64 = ctx.r25.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x880d6670
	if (ctx.cr6.lt) goto loc_880D6670;
	// addi r9,r27,-3
	ctx.r9.s64 = ctx.r27.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
loc_880D6618:
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// lfsx f0,r11,r8
	ctx.current_instruction = 0x880D661C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfsx f13,r11,r5
	ctx.current_instruction = 0x880D6624;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r1,324
	ctx.r31.s64 = ctx.r1.s64 + 324;
	// lfsx f12,r11,r7
	ctx.current_instruction = 0x880D662C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,328
	ctx.r30.s64 = ctx.r1.s64 + 328;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r29,r1,332
	ctx.r29.s64 = ctx.r1.s64 + 332;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f9,r11,r4
	ctx.current_instruction = 0x880D6640;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfsx f8,r11,r3
	ctx.current_instruction = 0x880D6648;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfsx f11,r11,r6
	ctx.current_instruction = 0x880D6654;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// stfsx f10,r11,r31
	ctx.current_instruction = 0x880D6658;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfsx f7,r11,r30
	ctx.current_instruction = 0x880D6660;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// stfsx f6,r11,r29
	ctx.current_instruction = 0x880D6664;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x880d6618
	if (ctx.cr6.lt) goto loc_880D6618;
loc_880D6670:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x880d66a8
	if (!ctx.cr6.lt) goto loc_880D66A8;
	// subf r9,r10,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D6684:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r10)
	ctx.current_instruction = 0x880D6690;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	ctx.current_instruction = 0x880D6694;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f12,r11,r9
	ctx.current_instruction = 0x880D669C;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d6684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6684;
loc_880D66A8:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f25,192(r1)
	ctx.current_instruction = 0x880D66AC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f25.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lfs f0,-4(r10)
	ctx.current_instruction = 0x880D66CC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// fsubs f13,f25,f0
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// lfs f27,14452(r8)
	ctx.current_instruction = 0x880D66D8;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 14452);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,6728(r6)
	ctx.current_instruction = 0x880D66DC;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 6728);
	ctx.f28.f64 = double(temp.f32);
	// lfs f24,6708(r5)
	ctx.current_instruction = 0x880D66E0;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 6708);
	ctx.f24.f64 = double(temp.f32);
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f12,-4(r7)
	ctx.current_instruction = 0x880D66E8;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// ble cr6,0x880d686c
	if (!ctx.cr6.gt) goto loc_880D686C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
loc_880D66FC:
	// lfsx f0,r29,r11
	ctx.current_instruction = 0x880D66FC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x880d6730
	if (!ctx.cr6.gt) goto loc_880D6730;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
loc_880D6710:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x880d6728
	if (!ctx.cr6.lt) goto loc_880D6728;
	// lfsu f13,4(r10)
	ctx.current_instruction = 0x880D6718;
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x880d6710
	if (ctx.cr6.gt) goto loc_880D6710;
loc_880D6728:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d6790
	if (!ctx.cr6.eq) goto loc_880D6790;
loc_880D6730:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x880d67ac
	goto loc_880D67AC;
loc_880D673C:
	// cmplwi cr6,r31,55
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 55, ctx.xer);
	// bne cr6,0x880d64cc
	if (!ctx.cr6.eq) goto loc_880D64CC;
	// cmplwi cr6,r30,1543
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1543, ctx.xer);
	// bne cr6,0x880d64cc
	if (!ctx.cr6.eq) goto loc_880D64CC;
loc_880D674C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r10,0(r24)
	ctx.current_instruction = 0x880D6750;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.current_instruction = 0x880D6754;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r24)
	ctx.current_instruction = 0x880D675C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r7,12(r24)
	ctx.current_instruction = 0x880D6760;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r6,16(r24)
	ctx.current_instruction = 0x880D6764;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// lfs f0,6708(r11)
	ctx.current_instruction = 0x880D6768;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	ctx.current_instruction = 0x880D676C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	ctx.current_instruction = 0x880D6770;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	ctx.current_instruction = 0x880D6774;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r7)
	ctx.current_instruction = 0x880D6778;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,16(r6)
	ctx.current_instruction = 0x880D677C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef2c4
	ctx.lr = 0x880D678C;
	__restfpr_24(ctx, base);
loc_880D678C:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880D6790:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x880d67a4
	if (!ctx.cr6.gt) goto loc_880D67A4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x880d67ac
	goto loc_880D67AC;
loc_880D67A4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_880D67AC:
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lfsx f13,r30,r11
	ctx.current_instruction = 0x880D67B4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x880d67d0
	if (!ctx.cr6.lt) goto loc_880D67D0;
loc_880D67C4:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x880d67c4
	if (ctx.cr6.lt) goto loc_880D67C4;
loc_880D67D0:
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lfsx f13,r30,r11
	ctx.current_instruction = 0x880D67D4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f29,f11,f28
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881eff80
	ctx.lr = 0x880D67EC;
	sub_881EFF80(ctx, base);
loc_880D67EC:
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x880d67fc
	if (!ctx.cr6.lt) goto loc_880D67FC;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_880D67FC:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x881efea0
	ctx.lr = 0x880D6804;
	sub_881EFEA0(ctx, base);
loc_880D6804:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x880d6814
	if (!ctx.cr6.lt) goto loc_880D6814;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_880D6814:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x880d6824
	if (!ctx.cr6.eq) goto loc_880D6824;
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// fmr f30,f24
	ctx.f30.f64 = ctx.f24.f64;
loc_880D6824:
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// addi r8,r1,576
	ctx.r8.s64 = ctx.r1.s64 + 576;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwzx r7,r30,r11
	ctx.current_instruction = 0x880D6838;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// lwzx r6,r10,r9
	ctx.current_instruction = 0x880D6840;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r8
	ctx.current_instruction = 0x880D6848;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r24
	ctx.current_instruction = 0x880D6858;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lwzx r8,r3,r24
	ctx.current_instruction = 0x880D685C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// stfsx f30,r9,r10
	ctx.current_instruction = 0x880D6860;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r8,r10
	ctx.current_instruction = 0x880D6864;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// bne 0x880d66fc
	if (!ctx.cr0.eq) goto loc_880D66FC;
loc_880D686C:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f31.f64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x880d6900
	if (!ctx.cr6.gt) goto loc_880D6900;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_880D6880:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// blt cr6,0x880d68c8
	if (ctx.cr6.lt) goto loc_880D68C8;
	// lwz r9,0(r6)
	ctx.current_instruction = 0x880D6898;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D68A4:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfsx f10,r9,r11
	ctx.current_instruction = 0x880D68A8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfs f9,4(r8)
	ctx.current_instruction = 0x880D68BC;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// blt cr6,0x880d68a4
	if (ctx.cr6.lt) goto loc_880D68A4;
loc_880D68C8:
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880d68dc
	if (!ctx.cr6.lt) goto loc_880D68DC;
	// lwz r11,0(r6)
	ctx.current_instruction = 0x880D68D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	ctx.current_instruction = 0x880D68D8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
loc_880D68DC:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x880d68f0
	if (!ctx.cr6.lt) goto loc_880D68F0;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_880D68F0:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x880d6880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6880;
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x880d691c
	if (ctx.cr6.gt) goto loc_880D691C;
loc_880D6900:
	// lis r23,-32768
	ctx.r23.s64 = -2147483648;
	// ori r23,r23,16389
	ctx.r23.u64 = ctx.r23.u64 | 16389;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef2c4
	ctx.lr = 0x880D6918;
	__restfpr_24(ctx, base);
loc_880D6918:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880D691C:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lfs f12,12508(r11)
	ctx.current_instruction = 0x880D692C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12508);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,14448(r10)
	ctx.current_instruction = 0x880D6930;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 14448);
	ctx.f13.f64 = double(temp.f32);
loc_880D6934:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x880d6a40
	if (ctx.cr6.lt) goto loc_880D6A40;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x880D6940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f0,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// addi r4,r26,-3
	ctx.r4.s64 = ctx.r26.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_880D6950:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfsx f10,r11,r10
	ctx.current_instruction = 0x880D6954;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// lfs f7,4(r8)
	ctx.current_instruction = 0x880D696C;
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsx f8,r10,r9
	ctx.current_instruction = 0x880D6978;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,-4(r7)
	ctx.current_instruction = 0x880D6980;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f2,f9,f13,f28
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f28.f64)));
	// fmadds f10,f4,f13,f28
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f28.f64)));
	// fmadds f1,f6,f13,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f28.f64)));
	// fmadds f9,f3,f13,f28
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f28.f64)));
	// fctiwz f8,f2
	ctx.f8.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f8,88(r1)
	ctx.current_instruction = 0x880D699C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r5,92(r1)
	ctx.current_instruction = 0x880D69A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,88(r1)
	ctx.current_instruction = 0x880D69AC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r30,92(r1)
	ctx.current_instruction = 0x880D69B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	ctx.current_instruction = 0x880D69B8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r29,84(r1)
	ctx.current_instruction = 0x880D69BC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f5,f1
	ctx.f5.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// std r5,160(r1)
	ctx.current_instruction = 0x880D69C4;
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// stfd f5,80(r1)
	ctx.current_instruction = 0x880D69C8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x880D69CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,176(r1)
	ctx.current_instruction = 0x880D69D4;
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// lfd f3,176(r1)
	ctx.current_instruction = 0x880D69DC;
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r5,152(r1)
	ctx.current_instruction = 0x880D69E4;
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfd f1,152(r1)
	ctx.current_instruction = 0x880D69E8;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f4,160(r1)
	ctx.current_instruction = 0x880D69EC;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r29,168(r1)
	ctx.current_instruction = 0x880D69F0;
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lfd f2,168(r1)
	ctx.current_instruction = 0x880D69F4;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f10,f4
	ctx.f10.f64 = double(ctx.f4.s64);
	// fcfid f8,f2
	ctx.f8.f64 = double(ctx.f2.s64);
	// fcfid f9,f3
	ctx.f9.f64 = double(ctx.f3.s64);
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfsx f2,r11,r10
	ctx.current_instruction = 0x880D6A1C;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f10,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f10,-4(r7)
	ctx.current_instruction = 0x880D6A24;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfsx f1,r10,r9
	ctx.current_instruction = 0x880D6A30;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f9,4(r8)
	ctx.current_instruction = 0x880D6A38;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// blt cr6,0x880d6950
	if (ctx.cr6.lt) goto loc_880D6950;
loc_880D6A40:
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x880d6a98
	if (!ctx.cr6.lt) goto loc_880D6A98;
	// subf r9,r6,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.current_instruction = 0x880D6A4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f0,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880D6A5C:
	// lfsx f10,r10,r11
	ctx.current_instruction = 0x880D6A5C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f8,f9,f13,f28
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f28.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	ctx.current_instruction = 0x880D6A6C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x880D6A70;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	ctx.current_instruction = 0x880D6A78;
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f6,144(r1)
	ctx.current_instruction = 0x880D6A7C;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfsx f3,r10,r11
	ctx.current_instruction = 0x880D6A8C;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880d6a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880D6A5C;
loc_880D6A98:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x880d6934
	if (!ctx.cr0.eq) goto loc_880D6934;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x881ef2c4
	ctx.lr = 0x880D6AB4;
	__restfpr_24(ctx, base);
loc_880D6AB4:
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880E75A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880E75A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E75A8;
	ctx.current_instruction = 0x880E75A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880E75AC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880E75B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880E75B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880E75B8) {
			switch (rex_dispatch_address) {
				case 0x880E75C0:
				case 0x880E7654:
				case 0x880E76B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880E75B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880E75C0: goto loc_880E75C0;
		case 0x880E7654: goto loc_880E7654;
		case 0x880E76B8: goto loc_880E76B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x880E75C0;
	__savegprlr_19(ctx, base);
loc_880E75C0:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880E75C0;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.current_instruction = 0x880E75D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,1720(r31)
	ctx.current_instruction = 0x880E75D4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r28,1724(r31)
	ctx.current_instruction = 0x880E75D8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 1724);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,19092(r31)
	ctx.current_instruction = 0x880E75E4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// mullw r27,r28,r30
	ctx.r27.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// lwz r24,19096(r31)
	ctx.current_instruction = 0x880E75EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r22,19100(r31)
	ctx.current_instruction = 0x880E75F0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 19100);
	// srawi r26,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 1;
	// srawi r20,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r28.s32 >> 1;
	// add r4,r27,r4
	ctx.r4.u64 = ctx.r27.u64 + ctx.r4.u64;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// slw r23,r11,r8
	ctx.r23.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// srawi r25,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 2;
	// slw r21,r11,r7
	ctx.r21.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// add r5,r25,r4
	ctx.r5.u64 = ctx.r25.u64 + ctx.r4.u64;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x880e7678
	if (!ctx.cr6.eq) goto loc_880E7678;
	// lwz r11,2332(r31)
	ctx.current_instruction = 0x880E761C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2332);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r19,2072(r31)
	ctx.current_instruction = 0x880E7624;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 2072);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880E7630;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880E7638;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r20,92(r1)
	ctx.current_instruction = 0x880E7640;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880E7644;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r26,84(r1)
	ctx.current_instruction = 0x880E7648;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x880E7654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880E7654:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x880e76b8
	if (!ctx.cr6.eq) goto loc_880E76B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,7232(r31)
	ctx.current_instruction = 0x880E7660;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 7232);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r24,r27,r29
	ctx.r24.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r22,r25,r24
	ctx.r22.u64 = ctx.r25.u64 + ctx.r24.u64;
	// b 0x880e7680
	goto loc_880E7680;
loc_880E7678:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// bne cr6,0x880e76b8
	if (!ctx.cr6.eq) goto loc_880E76B8;
loc_880E7680:
	// stw r26,84(r1)
	ctx.current_instruction = 0x880E7680;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,2332(r31)
	ctx.current_instruction = 0x880E7688;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2332);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r27,2076(r31)
	ctx.current_instruction = 0x880E7690;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2076);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880E769C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x880E76A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r20,92(r1)
	ctx.current_instruction = 0x880E76A8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r11,116(r1)
	ctx.current_instruction = 0x880E76AC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x880E76B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880E76B8:
	// lwz r10,7232(r31)
	ctx.current_instruction = 0x880E76B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7232);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x880e7700
	if (!ctx.cr6.gt) goto loc_880E7700;
	// mullw r8,r30,r21
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r21.s32);
loc_880E76CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x880e76f0
	if (!ctx.cr6.gt) goto loc_880E76F0;
loc_880E76D8:
	// lbzx r7,r11,r29
	ctx.current_instruction = 0x880E76D8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// stb r7,0(r10)
	ctx.current_instruction = 0x880E76E4;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x880e76d8
	if (ctx.cr6.lt) goto loc_880E76D8;
loc_880E76F0:
	// add r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x880e76cc
	if (ctx.cr6.lt) goto loc_880E76CC;
loc_880E7700:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880e7748
	if (!ctx.cr6.gt) goto loc_880E7748;
	// mullw r7,r26,r21
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r21.s32);
loc_880E7714:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880e7738
	if (!ctx.cr6.gt) goto loc_880E7738;
loc_880E7720:
	// lbzx r6,r11,r9
	ctx.current_instruction = 0x880E7720;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stb r6,0(r10)
	ctx.current_instruction = 0x880E772C;
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x880e7720
	if (ctx.cr6.lt) goto loc_880E7720;
loc_880E7738:
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880e7714
	if (ctx.cr6.lt) goto loc_880E7714;
loc_880E7748:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x880e7790
	if (!ctx.cr6.gt) goto loc_880E7790;
	// mullw r7,r26,r21
	ctx.r7.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r21.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_880E7760:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x880e7780
	if (!ctx.cr6.gt) goto loc_880E7780;
loc_880E776C:
	// lbzx r6,r11,r9
	ctx.current_instruction = 0x880E776C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// stbu r6,1(r10)
	ctx.current_instruction = 0x880E7778;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// blt cr6,0x880e776c
	if (ctx.cr6.lt) goto loc_880E776C;
loc_880E7780:
	// add r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 + ctx.r21.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x880e7760
	if (ctx.cr6.lt) goto loc_880E7760;
loc_880E7790:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880ECB80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880ECB80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880ECB80) {
			switch (rex_dispatch_address) {
				case 0x880ECB88:
				case 0x880ECBD4:
				case 0x880ECC04:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880ECB80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880ECB88: goto loc_880ECB88;
		case 0x880ECBD4: goto loc_880ECBD4;
		case 0x880ECC04: goto loc_880ECC04;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x880ECB88;
	__savegprlr_25(ctx, base);
loc_880ECB88:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880ECB88;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r4,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// stw r10,0(r8)
	ctx.current_instruction = 0x880ECB98;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r25,r11,17652
	ctx.r25.s64 = ctx.r11.s64 + 17652;
	// beq cr6,0x880ecbe4
	if (ctx.cr6.eq) goto loc_880ECBE4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r3,31552(r3)
	ctx.current_instruction = 0x880ECBC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 31552);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880be280
	ctx.lr = 0x880ECBD4;
	sub_880BE280(ctx, base);
loc_880ECBD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880ecbe4
	if (!ctx.cr6.eq) goto loc_880ECBE4;
	// addi r11,r25,12
	ctx.r11.s64 = ctx.r25.s64 + 12;
	// stw r11,0(r26)
	ctx.current_instruction = 0x880ECBE0;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_880ECBE4:
	// rlwinm r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880ecc10
	if (ctx.cr6.eq) goto loc_880ECC10;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,31552(r31)
	ctx.current_instruction = 0x880ECBF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 31552);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880be280
	ctx.lr = 0x880ECC04;
	sub_880BE280(ctx, base);
loc_880ECC04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880ecc10
	if (ctx.cr6.eq) goto loc_880ECC10;
	// stw r25,0(r26)
	ctx.current_instruction = 0x880ECC0C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
loc_880ECC10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EE4E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EE4E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EE4E0) {
			switch (rex_dispatch_address) {
				case 0x880EE4E8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EE4E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EE4E8: goto loc_880EE4E8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880EE4E8;
	__savegprlr_14(ctx, base);
loc_880EE4E8:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,3236
	ctx.r8.s64 = 3236;
	// li r7,3225
	ctx.r7.s64 = 3225;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r8,-448(r1)
	ctx.current_instruction = 0x880EE4F8;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r8.u32);
	// stw r7,-444(r1)
	ctx.current_instruction = 0x880EE4FC;
	REX_STORE_U32(ctx.r1.u32 + -444, ctx.r7.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,3181
	ctx.r11.s64 = 3181;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r25,-428(r1)
	ctx.current_instruction = 0x880EE510;
	REX_STORE_U32(ctx.r1.u32 + -428, ctx.r25.u32);
	// li r6,3214
	ctx.r6.s64 = 3214;
	// stw r11,-432(r1)
	ctx.current_instruction = 0x880EE518;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r11.u32);
	// li r3,3192
	ctx.r3.s64 = 3192;
	// stw r25,-464(r1)
	ctx.current_instruction = 0x880EE520;
	REX_STORE_U32(ctx.r1.u32 + -464, ctx.r25.u32);
	// li r8,3148
	ctx.r8.s64 = 3148;
	// stw r6,-440(r1)
	ctx.current_instruction = 0x880EE528;
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r6.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r3,-436(r1)
	ctx.current_instruction = 0x880EE530;
	REX_STORE_U32(ctx.r1.u32 + -436, ctx.r3.u32);
	// stw r8,-424(r1)
	ctx.current_instruction = 0x880EE534;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r8.u32);
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// stw r9,-460(r1)
	ctx.current_instruction = 0x880EE53C;
	REX_STORE_U32(ctx.r1.u32 + -460, ctx.r9.u32);
	// rlwinm r15,r4,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-456(r1)
	ctx.current_instruction = 0x880EE544;
	REX_STORE_U32(ctx.r1.u32 + -456, ctx.r7.u32);
	// stw r9,-452(r1)
	ctx.current_instruction = 0x880EE548;
	REX_STORE_U32(ctx.r1.u32 + -452, ctx.r9.u32);
loc_880EE54C:
	// lhz r8,2(r10)
	ctx.current_instruction = 0x880EE54C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r7,4(r10)
	ctx.current_instruction = 0x880EE550;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r9,0(r10)
	ctx.current_instruction = 0x880EE558;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lhz r7,10(r10)
	ctx.current_instruction = 0x880EE560;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r4,6(r10)
	ctx.current_instruction = 0x880EE564;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,14(r10)
	ctx.current_instruction = 0x880EE56C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// lhz r3,8(r10)
	ctx.current_instruction = 0x880EE574;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,12(r10)
	ctx.current_instruction = 0x880EE57C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r28,r4,r9
	ctx.r28.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r29,r8,r6
	ctx.r29.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r22,r30,r31
	ctx.r22.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r23,r7,r3
	ctx.r23.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r24,r29,r28
	ctx.r24.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r21,r22,r23
	ctx.r21.u64 = ctx.r22.u64 + ctx.r23.u64;
	// rlwinm r19,r24,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r21,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r20,r29,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r17,r24,r19
	ctx.r17.u64 = ctx.r24.u64 + ctx.r19.u64;
	// subf r29,r8,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r26,r7,r3
	ctx.r26.u64 = ctx.r3.u64 - ctx.r7.u64;
	// add r21,r21,r18
	ctx.r21.u64 = ctx.r21.u64 + ctx.r18.u64;
	// subf r27,r30,r31
	ctx.r27.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r24,r22,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r22.u64;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r28,r4,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r4.u64;
	// rlwinm r18,r17,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// rlwinm r17,r21,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r26,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r27,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r20,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r7,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r29,r23
	ctx.r23.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r22,r28,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// neg r14,r26
	ctx.r14.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// add r19,r26,r19
	ctx.r19.u64 = ctx.r26.u64 + ctx.r19.u64;
	// add r4,r17,r18
	ctx.r4.u64 = ctx.r17.u64 + ctx.r18.u64;
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r20,r20,r3
	ctx.r20.u64 = ctx.r20.u64 + ctx.r3.u64;
	// rlwinm r31,r24,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r27,r21
	ctx.r21.u64 = ctx.r27.u64 + ctx.r21.u64;
	// add r26,r16,r9
	ctx.r26.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// addi r23,r4,4
	ctx.r23.s64 = ctx.r4.s64 + 4;
	// add r24,r24,r31
	ctx.r24.u64 = ctx.r24.u64 + ctx.r31.u64;
	// addi r22,r26,1
	ctx.r22.s64 = ctx.r26.s64 + 1;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r14,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r17,r29,4,0,27
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r27,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r3,r23,3
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r23.s32 >> 3;
	// rlwinm r30,r24,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r20,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r11)
	ctx.current_instruction = 0x880EE660;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// subf r29,r21,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r21.u64;
	// subf r28,r17,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r17.u64;
	// subf r27,r19,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r19.u64;
	// rlwinm r24,r22,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r6,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 + ctx.r26.u64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r30,r6,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r6.u64;
	// add r29,r24,r26
	ctx.r29.u64 = ctx.r24.u64 + ctx.r26.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r29,r4,4
	ctx.r29.s64 = ctx.r4.s64 + 4;
	// srawi r4,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 3;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r4,4(r11)
	ctx.current_instruction = 0x880EE6A0;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// srawi r30,r29,3
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 3;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r29,r28,1
	ctx.xer.ca = ctx.r28.u32 <= 1;
	ctx.r29.u64 = static_cast<uint64_t>(1) - ctx.r28.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r30,4(r11)
	ctx.current_instruction = 0x880EE6B8;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r6,r29
	ctx.r27.u64 = ctx.r29.u64 - ctx.r6.u64;
	// rlwinm r26,r9,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r28,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r28.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r24,r7,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r26
	ctx.r9.u64 = ctx.r26.u64 - ctx.r9.u64;
	// rlwinm r23,r8,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r29,1
	ctx.r26.s64 = ctx.r29.s64 + 1;
	// subf r29,r7,r24
	ctx.r29.u64 = ctx.r24.u64 - ctx.r7.u64;
	// subf r28,r28,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r28.u64;
	// subf r27,r8,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r8.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stwu r9,4(r11)
	ctx.current_instruction = 0x880EE714;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r6,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r8,4(r11)
	ctx.current_instruction = 0x880EE72C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// srawi r8,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r3,r6,r24
	ctx.r3.u64 = ctx.r6.u64 + ctx.r24.u64;
	// add r10,r15,r10
	ctx.r10.u64 = ctx.r15.u64 + ctx.r10.u64;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stwu r9,4(r11)
	ctx.current_instruction = 0x880EE744;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// stwu r8,4(r11)
	ctx.current_instruction = 0x880EE74C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ctx.current_instruction = 0x880EE750;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x880ee54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EE54C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r5,94
	ctx.r10.s64 = ctx.r5.s64 + 94;
	// addi r11,r1,-196
	ctx.r11.s64 = ctx.r1.s64 + -196;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880EE76C:
	// rlwinm r6,r25,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// lwz r28,-220(r11)
	ctx.current_instruction = 0x880EE770;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -220);
	// addi r4,r1,-464
	ctx.r4.s64 = ctx.r1.s64 + -464;
	// lwz r29,-124(r11)
	ctx.current_instruction = 0x880EE778;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r27,-156(r11)
	ctx.current_instruction = 0x880EE77C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -156);
	// addi r20,r1,-448
	ctx.r20.s64 = ctx.r1.s64 + -448;
	// lwz r26,-188(r11)
	ctx.current_instruction = 0x880EE784;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -188);
	// add r7,r29,r28
	ctx.r7.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r30,-92(r11)
	ctx.current_instruction = 0x880EE78C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// subf r5,r29,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r29.u64;
	// lwz r31,-60(r11)
	ctx.current_instruction = 0x880EE794;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// add r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lwz r3,-28(r11)
	ctx.current_instruction = 0x880EE79C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// rlwinm r19,r5,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x880EE7A4;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r22,r8,r7
	ctx.r22.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwzx r4,r6,r4
	ctx.current_instruction = 0x880EE7AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// add r23,r3,r31
	ctx.r23.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r24,r9,r30
	ctx.r24.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r23,r24
	ctx.r7.u64 = ctx.r23.u64 + ctx.r24.u64;
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + ctx.r20.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r6,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r7,r9,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r9.u64;
	// lwz r17,0(r8)
	ctx.current_instruction = 0x880EE7D8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 + ctx.r21.u64;
	// lwz r16,4(r8)
	ctx.current_instruction = 0x880EE7E0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r21,r4,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,12(r8)
	ctx.current_instruction = 0x880EE7E8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// subf r8,r23,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r23.u64;
	// rlwinm r23,r7,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r6,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r14,r7,r23
	ctx.r14.u64 = ctx.r7.u64 + ctx.r23.u64;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// subf r4,r27,r26
	ctx.r4.u64 = ctx.r26.u64 - ctx.r27.u64;
	// stw r7,-480(r1)
	ctx.current_instruction = 0x880EE804;
	REX_STORE_U32(ctx.r1.u32 + -480, ctx.r7.u32);
	// add r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 + ctx.r20.u64;
	// subf r6,r3,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r3.u64;
	// rlwinm r18,r4,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r17,r21
	ctx.r24.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r21.s32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r5,r19
	ctx.r21.u64 = ctx.r5.u64 + ctx.r19.u64;
	// rlwinm r20,r6,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r4,r18
	ctx.r19.u64 = ctx.r4.u64 + ctx.r18.u64;
	// add r18,r8,r7
	ctx.r18.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r20,r6,r20
	ctx.r20.u64 = ctx.r6.u64 + ctx.r20.u64;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r30,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r30.u64;
	// rlwinm r30,r21,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,-480(r1)
	ctx.current_instruction = 0x880EE83C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -480);
	// stw r8,-480(r1)
	ctx.current_instruction = 0x880EE840;
	REX_STORE_U32(ctx.r1.u32 + -480, ctx.r8.u32);
	// subf r9,r9,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r9.u64;
	// rlwinm r23,r22,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r24,16384
	ctx.r28.s64 = ctx.r24.s64 + 16384;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// srawi r22,r28,15
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFF) != 0);
	ctx.r22.s64 = ctx.r28.s32 >> 15;
	// rlwinm r29,r20,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r5,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r22,-94(r10)
	ctx.current_instruction = 0x880EE860;
	REX_STORE_U16(ctx.r10.u32 + -94, ctx.r22.u16);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r20,r14,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r19,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r21,4,0,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r31,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r31.u64;
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// add r27,r7,r6
	ctx.r27.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r29,r29,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r29.u64;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// rlwinm r4,r18,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r3,r26
	ctx.r7.u64 = ctx.r26.u64 - ctx.r3.u64;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lwz r28,-480(r1)
	ctx.current_instruction = 0x880EE898;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -480);
	// subf r31,r20,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r20.u64;
	// rlwinm r28,r23,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r6,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r7,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r28,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r28.u64;
	// rlwinm r21,r9,4,0,27
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r20,r6,-9
	ctx.r20.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-9));
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r27,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r27.u64;
	// subf r24,r6,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r6.u64;
	// rlwinm r18,r8,4,0,27
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r31,r30
	ctx.r23.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r22,r7,r26
	ctx.r22.u64 = ctx.r26.u64 - ctx.r7.u64;
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r28,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r9,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r9.u64;
	// subf r28,r29,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r29.u64;
	// subf r29,r8,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r8.u64;
	// rlwinm r31,r7,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r19,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r26,r24
	ctx.r8.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// mullw r9,r23,r16
	ctx.r9.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r16.s32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r8,r17,r4
	ctx.r8.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r28,r16
	ctx.r7.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r16.s32);
	// addi r29,r9,16384
	ctx.r29.s64 = ctx.r9.s64 + 16384;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mullw r9,r6,r16
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r16.s32);
	// addi r6,r7,16384
	ctx.r6.s64 = ctx.r7.s64 + 16384;
	// addi r31,r8,16384
	ctx.r31.s64 = ctx.r8.s64 + 16384;
	// mullw r7,r4,r16
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r16.s32);
	// addi r4,r9,16384
	ctx.r4.s64 = ctx.r9.s64 + 16384;
	// mullw r8,r15,r5
	ctx.r8.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r5.s32);
	// srawi r5,r29,15
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 15;
	// mullw r9,r15,r3
	ctx.r9.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r3.s32);
	// sth r5,-78(r10)
	ctx.current_instruction = 0x880EE960;
	REX_STORE_U16(ctx.r10.u32 + -78, ctx.r5.u16);
	// srawi r3,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 15;
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// srawi r6,r31,15
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 15;
	// sth r3,-46(r10)
	ctx.current_instruction = 0x880EE970;
	REX_STORE_U16(ctx.r10.u32 + -46, ctx.r3.u16);
	// addi r8,r8,16384
	ctx.r8.s64 = ctx.r8.s64 + 16384;
	// srawi r4,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 15;
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// srawi r7,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 15;
	// srawi r8,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// srawi r9,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 15;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// sth r5,-14(r10)
	ctx.current_instruction = 0x880EE998;
	REX_STORE_U16(ctx.r10.u32 + -14, ctx.r5.u16);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// sth r6,-30(r10)
	ctx.current_instruction = 0x880EE9A0;
	REX_STORE_U16(ctx.r10.u32 + -30, ctx.r6.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r4,18(r10)
	ctx.current_instruction = 0x880EE9A8;
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r4.u16);
	// sth r3,-62(r10)
	ctx.current_instruction = 0x880EE9AC;
	REX_STORE_U16(ctx.r10.u32 + -62, ctx.r3.u16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// sthu r9,2(r10)
	ctx.current_instruction = 0x880EE9B4;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x880ee76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880EE76C;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F9EE8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F9EE8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9EE8;
	ctx.current_instruction = 0x880F9EE8;
	// std r30,-16(r1)
	ctx.current_instruction = 0x880F9EE8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x880F9EEC;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880f9f08
	if (!ctx.cr6.eq) goto loc_880F9F08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880F9EFC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880F9F00;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880F9F08:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,92(r5)
	ctx.current_instruction = 0x880F9F10;
	REX_STORE_U32(ctx.r5.u32 + 92, ctx.r10.u32);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// stw r7,0(r5)
	ctx.current_instruction = 0x880F9F18;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,8(r5)
	ctx.current_instruction = 0x880F9F20;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// addi r11,r11,2328
	ctx.r11.s64 = ctx.r11.s64 + 2328;
	// stw r10,12(r5)
	ctx.current_instruction = 0x880F9F28;
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lbz r8,2(r4)
	ctx.current_instruction = 0x880F9F2C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r3,3(r4)
	ctx.current_instruction = 0x880F9F30;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r31,4(r4)
	ctx.current_instruction = 0x880F9F34;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r30,1(r4)
	ctx.current_instruction = 0x880F9F38;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r30,r30,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 8);
	// or r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 | ctx.r8.u64;
	// stw r9,4(r5)
	ctx.current_instruction = 0x880F9F44;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880F9F48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// rlwinm r8,r3,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 | ctx.r31.u64;
	// rlwinm r3,r3,12,26,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x3F;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stw r9,88(r5)
	ctx.current_instruction = 0x880F9F68;
	REX_STORE_U32(ctx.r5.u32 + 88, ctx.r9.u32);
	// lbz r8,5(r4)
	ctx.current_instruction = 0x880F9F6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r3,6(r4)
	ctx.current_instruction = 0x880F9F70;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r31,7(r4)
	ctx.current_instruction = 0x880F9F74;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// lbz r4,8(r4)
	ctx.current_instruction = 0x880F9F78;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// stw r6,68(r5)
	ctx.current_instruction = 0x880F9F7C;
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r6.u32);
	// stw r7,32(r5)
	ctx.current_instruction = 0x880F9F80;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r7.u32);
	// stw r10,60(r5)
	ctx.current_instruction = 0x880F9F84;
	REX_STORE_U32(ctx.r5.u32 + 60, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880F9F88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// rlwinm r3,r6,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 | ctx.r31.u64;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r3,r4,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1;
	// rlwinm r8,r4,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x1;
	// and r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 & ctx.r3.u64;
	// rlwinm r3,r4,8,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x3;
	// stw r6,20(r5)
	ctx.current_instruction = 0x880F9FB8;
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// rlwinm r6,r4,9,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0x1;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880F9FC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r31,r4,10,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1;
	// stw r8,36(r5)
	ctx.current_instruction = 0x880F9FD0;
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r8.u32);
	// rlwinm r8,r4,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x880F9FD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// rlwinm r30,r4,11,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0x1;
	// stw r3,44(r5)
	ctx.current_instruction = 0x880F9FE8;
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r3.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880F9FEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
	// stw r6,48(r5)
	ctx.current_instruction = 0x880F9FF8;
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r6.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880F9FFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 & ctx.r31.u64;
	// stw r3,56(r5)
	ctx.current_instruction = 0x880FA008;
	REX_STORE_U32(ctx.r5.u32 + 56, ctx.r3.u32);
	// lwz r9,4(r11)
	ctx.current_instruction = 0x880FA00C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// and r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r6,76(r5)
	ctx.current_instruction = 0x880FA01C;
	REX_STORE_U32(ctx.r5.u32 + 76, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x880FA024;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// beq cr6,0x880fa03c
	if (ctx.cr6.eq) goto loc_880FA03C;
	// stw r6,80(r5)
	ctx.current_instruction = 0x880FA034;
	REX_STORE_U32(ctx.r5.u32 + 80, ctx.r6.u32);
	// b 0x880fa040
	goto loc_880FA040;
loc_880FA03C:
	// stw r6,84(r5)
	ctx.current_instruction = 0x880FA03C;
	REX_STORE_U32(ctx.r5.u32 + 84, ctx.r6.u32);
loc_880FA040:
	// lwz r11,76(r5)
	ctx.current_instruction = 0x880FA040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fa05c
	if (!ctx.cr6.eq) goto loc_880FA05C;
	// lwz r11,84(r5)
	ctx.current_instruction = 0x880FA04C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fa05c
	if (!ctx.cr6.eq) goto loc_880FA05C;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_880FA05C:
	// stw r7,72(r5)
	ctx.current_instruction = 0x880FA05C;
	REX_STORE_U32(ctx.r5.u32 + 72, ctx.r7.u32);
	// stw r10,16(r5)
	ctx.current_instruction = 0x880FA060;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r10,24(r5)
	ctx.current_instruction = 0x880FA064;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,28(r5)
	ctx.current_instruction = 0x880FA068;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// stw r10,52(r5)
	ctx.current_instruction = 0x880FA06C;
	REX_STORE_U32(ctx.r5.u32 + 52, ctx.r10.u32);
	// stw r10,64(r5)
	ctx.current_instruction = 0x880FA070;
	REX_STORE_U32(ctx.r5.u32 + 64, ctx.r10.u32);
	// stw r10,40(r5)
	ctx.current_instruction = 0x880FA074;
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x880FA078;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880FA07C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88100B18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88100B18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88100B18) {
			switch (rex_dispatch_address) {
				case 0x88100B20:
				case 0x88100B5C:
				case 0x88100B78:
				case 0x88100CD8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88100B18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88100B20: goto loc_88100B20;
		case 0x88100B5C: goto loc_88100B5C;
		case 0x88100B78: goto loc_88100B78;
		case 0x88100CD8: goto loc_88100CD8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88100B20;
	__savegprlr_27(ctx, base);
loc_88100B20:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88100B20;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r1)
	ctx.current_instruction = 0x88100B24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r10,8240(r3)
	ctx.current_instruction = 0x88100B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8240);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,236(r1)
	ctx.current_instruction = 0x88100B40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,228(r1)
	ctx.current_instruction = 0x88100B48;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88100B50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x88100668
	ctx.lr = 0x88100B5C;
	sub_88100668(ctx, base);
loc_88100B5C:
	// lwz r10,8088(r30)
	ctx.current_instruction = 0x88100B5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8088);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x88100B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88100B78:
	// lwz r10,252(r1)
	ctx.current_instruction = 0x88100B78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88100cb8
	if (ctx.cr6.eq) goto loc_88100CB8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88100B94:
	// lhzu r8,2(r11)
	ctx.current_instruction = 0x88100B94;
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x88100B98;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88100b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100B94;
	// lwz r11,260(r1)
	ctx.current_instruction = 0x88100BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r6,r31,14
	ctx.r6.s64 = ctx.r31.s64 + 14;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_88100BBC:
	// lhzu r8,2(r6)
	ctx.current_instruction = 0x88100BBC;
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r7)
	ctx.current_instruction = 0x88100BC0;
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x88100bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100BBC;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r31,30
	ctx.r7.s64 = ctx.r31.s64 + 30;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88100BE0:
	// lhzu r9,2(r7)
	ctx.current_instruction = 0x88100BE0;
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x88100BE4;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x88100be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100BE0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r31,46
	ctx.r7.s64 = ctx.r31.s64 + 46;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_88100C0C:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x88100C0C;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x88100C10;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88100c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100C0C;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r31,62
	ctx.r7.s64 = ctx.r31.s64 + 62;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88100C30:
	// lhzu r9,2(r7)
	ctx.current_instruction = 0x88100C30;
	ea = 2 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r9,2(r8)
	ctx.current_instruction = 0x88100C34;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x88100c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100C30;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r31,78
	ctx.r7.s64 = ctx.r31.s64 + 78;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_88100C5C:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x88100C5C;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x88100C60;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88100c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100C5C;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r31,94
	ctx.r7.s64 = ctx.r31.s64 + 94;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_88100C88:
	// lhzu r8,2(r7)
	ctx.current_instruction = 0x88100C88;
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x88100C8C;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88100c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100C88;
	// mulli r9,r11,14
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r31,110
	ctx.r9.s64 = ctx.r31.s64 + 110;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88100CAC:
	// lhzu r11,2(r9)
	ctx.current_instruction = 0x88100CAC;
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ctx.current_instruction = 0x88100CB0;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x88100cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88100CAC;
loc_88100CB8:
	// lwz r11,8116(r30)
	ctx.current_instruction = 0x88100CB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8116);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88100CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88100CD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88106668) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88106668;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88106668) {
			switch (rex_dispatch_address) {
				case 0x88106670:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88106668;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88106670: goto loc_88106670;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88106670;
	__savegprlr_18(ctx, base);
loc_88106670:
	// lwz r27,720(r3)
	ctx.current_instruction = 0x88106670;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r28,2164(r3)
	ctx.current_instruction = 0x88106678;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 2164);
	// mullw r30,r27,r5
	ctx.r30.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r5.s32);
	// lwz r26,27988(r3)
	ctx.current_instruction = 0x88106680;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 27988);
	// addi r31,r11,4232
	ctx.r31.s64 = ctx.r11.s64 + 4232;
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
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne cr6,0x881066e4
	if (!ctx.cr6.eq) goto loc_881066E4;
	// lwz r30,2800(r3)
	ctx.current_instruction = 0x881066BC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x881066e4
	if (!ctx.cr6.eq) goto loc_881066E4;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881066D8:
	// stbu r28,1(r30)
	ctx.current_instruction = 0x881066D8;
	ea = 1 + ctx.r30.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r30.u32 = ea;
	// bdnz 0x881066d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881066D8;
	// b 0x88106764
	goto loc_88106764;
loc_881066E4:
	// li r29,6
	ctx.r29.s64 = 6;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// subf r27,r11,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r11.u64;
	// li r24,15
	ctx.r24.s64 = 15;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// li r25,-49
	ctx.r25.s64 = -49;
	// li r26,63
	ctx.r26.s64 = 63;
loc_88106704:
	// lbzx r29,r27,r30
	ctx.current_instruction = 0x88106704;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8810671c
	if (!ctx.cr6.eq) goto loc_8810671C;
	// stb r24,0(r30)
	ctx.current_instruction = 0x88106714;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r24.u8);
	// b 0x88106758
	goto loc_88106758;
loc_8810671C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8810672c
	if (!ctx.cr6.eq) goto loc_8810672C;
	// stb r25,0(r30)
	ctx.current_instruction = 0x88106724;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// b 0x88106758
	goto loc_88106758;
loc_8810672C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8810673c
	if (!ctx.cr6.eq) goto loc_8810673C;
	// stb r26,0(r30)
	ctx.current_instruction = 0x88106734;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// b 0x88106758
	goto loc_88106758;
loc_8810673C:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x88106758
	if (!ctx.cr6.eq) goto loc_88106758;
	// lwz r29,0(r28)
	ctx.current_instruction = 0x88106744;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r20,r31,960
	ctx.r20.s64 = ctx.r31.s64 + 960;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r20
	ctx.current_instruction = 0x88106750;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r20.u32);
	// stb r29,0(r30)
	ctx.current_instruction = 0x88106754;
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
loc_88106758:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x88106704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88106704;
loc_88106764:
	// lwz r20,100(r1)
	ctx.current_instruction = 0x88106764;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,108(r1)
	ctx.current_instruction = 0x88106768;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x881067fc
	if (ctx.cr6.eq) goto loc_881067FC;
	// lbz r29,1(r11)
	ctx.current_instruction = 0x88106774;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lbz r30,0(r11)
	ctx.current_instruction = 0x8810677C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// rlwinm r29,r29,0,30,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r29,1(r11)
	ctx.current_instruction = 0x8810678C;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// beq cr6,0x881067d0
	if (ctx.cr6.eq) goto loc_881067D0;
	// lbz r28,2(r11)
	ctx.current_instruction = 0x88106794;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r30,r30,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,4(r11)
	ctx.current_instruction = 0x8810679C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r26,5(r11)
	ctx.current_instruction = 0x881067A0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// stb r30,0(r11)
	ctx.current_instruction = 0x881067AC;
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
	ctx.current_instruction = 0x881067C0;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// stb r27,4(r11)
	ctx.current_instruction = 0x881067C4;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r27.u8);
	// stb r26,5(r11)
	ctx.current_instruction = 0x881067C8;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r26.u8);
	// b 0x88106848
	goto loc_88106848;
loc_881067D0:
	// lbz r28,4(r11)
	ctx.current_instruction = 0x881067D0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r30,r30,0,30,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// lbz r27,5(r11)
	ctx.current_instruction = 0x881067D8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// stb r30,0(r11)
	ctx.current_instruction = 0x881067E0;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// rlwinm r28,r28,0,30,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r27,r27,0,30,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r28,4(r11)
	ctx.current_instruction = 0x881067F0;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
	// stb r27,5(r11)
	ctx.current_instruction = 0x881067F4;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r27.u8);
	// b 0x88106848
	goto loc_88106848;
loc_881067FC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x88106848
	if (ctx.cr6.eq) goto loc_88106848;
	// lwz r30,2172(r3)
	ctx.current_instruction = 0x88106804;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2172);
	// lbzx r29,r30,r11
	ctx.current_instruction = 0x88106808;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// rlwinm r29,r29,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r29,r30,r11
	ctx.current_instruction = 0x88106814;
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u8);
	// lbz r29,4(r11)
	ctx.current_instruction = 0x88106818;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	ctx.current_instruction = 0x8810681C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	ctx.current_instruction = 0x88106820;
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
	ctx.current_instruction = 0x8810683C;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r29,4(r11)
	ctx.current_instruction = 0x88106840;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// stb r28,5(r11)
	ctx.current_instruction = 0x88106844;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r28.u8);
loc_88106848:
	// lwz r30,2800(r3)
	ctx.current_instruction = 0x88106848;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x88106f04
	if (ctx.cr6.eq) goto loc_88106F04;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x88106f04
	if (ctx.cr6.eq) goto loc_88106F04;
	// lwz r25,84(r1)
	ctx.current_instruction = 0x88106860;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x881068fc
	if (!ctx.cr6.eq) goto loc_881068FC;
	// lwz r30,2544(r3)
	ctx.current_instruction = 0x8810686C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r6,r30
	ctx.current_instruction = 0x88106874;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x881068fc
	if (ctx.cr6.eq) goto loc_881068FC;
	// lwz r29,2544(r3)
	ctx.current_instruction = 0x88106880;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r30,r22,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r29,r6
	ctx.current_instruction = 0x88106888;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// lhzx r29,r30,r29
	ctx.current_instruction = 0x8810688C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x881068fc
	if (!ctx.cr6.eq) goto loc_881068FC;
	// lwz r29,2548(r3)
	ctx.current_instruction = 0x88106898;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// lhzx r30,r29,r30
	ctx.current_instruction = 0x8810689C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r30.u32);
	// lhzx r6,r29,r6
	ctx.current_instruction = 0x881068A0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x881068fc
	if (!ctx.cr6.eq) goto loc_881068FC;
	// lbz r6,2(r8)
	ctx.current_instruction = 0x881068AC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// addi r27,r31,640
	ctx.r27.s64 = ctx.r31.s64 + 640;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x881068B4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r26,r31,320
	ctx.r26.s64 = ctx.r31.s64 + 320;
	// extsb r28,r6
	ctx.r28.s64 = ctx.r6.s8;
	// lwz r6,8(r25)
	ctx.current_instruction = 0x881068C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// extsb r24,r30
	ctx.r24.s64 = ctx.r30.s8;
	// lwz r29,0(r10)
	ctx.current_instruction = 0x881068C8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x881068D0;
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
	ctx.current_instruction = 0x881068E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// lwzx r30,r30,r26
	ctx.current_instruction = 0x881068EC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | ctx.r30.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,0(r11)
	ctx.current_instruction = 0x881068F8;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_881068FC:
	// lwz r24,92(r1)
	ctx.current_instruction = 0x881068FC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88106998
	if (!ctx.cr6.eq) goto loc_88106998;
	// lwz r30,2544(r3)
	ctx.current_instruction = 0x88106908;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r6,r30
	ctx.current_instruction = 0x88106910;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x88106998
	if (ctx.cr6.eq) goto loc_88106998;
	// lwz r30,2544(r3)
	ctx.current_instruction = 0x8810691C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lhz r29,-2(r30)
	ctx.current_instruction = 0x88106924;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r30.u32 + -2);
	// lhz r30,0(r30)
	ctx.current_instruction = 0x88106928;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88106998
	if (!ctx.cr6.eq) goto loc_88106998;
	// lwz r30,2548(r3)
	ctx.current_instruction = 0x88106934;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	ctx.current_instruction = 0x8810693C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106940;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106998
	if (!ctx.cr6.eq) goto loc_88106998;
	// lbz r6,1(r9)
	ctx.current_instruction = 0x8810694C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addi r27,r31,-320
	ctx.r27.s64 = ctx.r31.s64 + -320;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x88106954;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,4(r24)
	ctx.current_instruction = 0x8810695C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// extsb r26,r30
	ctx.r26.s64 = ctx.r30.s8;
	// lwz r30,0(r10)
	ctx.current_instruction = 0x88106964;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	ctx.current_instruction = 0x8810696C;
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
	// lwzx r30,r30,r31
	ctx.current_instruction = 0x88106984;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r6,r6,r27
	ctx.current_instruction = 0x88106988;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,0(r11)
	ctx.current_instruction = 0x88106994;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_88106998:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x88106a44
	if (!ctx.cr6.eq) goto loc_88106A44;
	// lwz r30,2544(r3)
	ctx.current_instruction = 0x881069A0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lhz r30,2(r30)
	ctx.current_instruction = 0x881069AC;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// beq cr6,0x88106a44
	if (ctx.cr6.eq) goto loc_88106A44;
	// lwz r30,2544(r3)
	ctx.current_instruction = 0x881069B8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r29,r22,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r30,r6
	ctx.r28.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lhz r28,2(r28)
	ctx.current_instruction = 0x881069C8;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r30,2(r30)
	ctx.current_instruction = 0x881069CC;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x88106a44
	if (!ctx.cr6.eq) goto loc_88106A44;
	// lwz r30,2548(r3)
	ctx.current_instruction = 0x881069D8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x881069E4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r30,2(r29)
	ctx.current_instruction = 0x881069E8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106a44
	if (!ctx.cr6.eq) goto loc_88106A44;
	// lbz r6,1(r7)
	ctx.current_instruction = 0x881069F4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,320
	ctx.r27.s64 = ctx.r31.s64 + 320;
	// lbz r30,3(r8)
	ctx.current_instruction = 0x881069FC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// addi r26,r31,640
	ctx.r26.s64 = ctx.r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x88106A08;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsb r22,r30
	ctx.r22.s64 = ctx.r30.s8;
	// lwz r30,12(r25)
	ctx.current_instruction = 0x88106A10;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,1(r11)
	ctx.current_instruction = 0x88106A18;
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
	ctx.current_instruction = 0x88106A30;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r6,r6,r26
	ctx.current_instruction = 0x88106A34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,1(r11)
	ctx.current_instruction = 0x88106A40;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_88106A44:
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106A44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r26,r23,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x88106A50;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x88106ad8
	if (ctx.cr6.eq) goto loc_88106AD8;
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106A5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x88106A64;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106A68;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88106ad8
	if (!ctx.cr6.eq) goto loc_88106AD8;
	// lwz r6,2548(r3)
	ctx.current_instruction = 0x88106A74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x88106A7C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106A80;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88106ad8
	if (!ctx.cr6.eq) goto loc_88106AD8;
	// lbz r6,1(r7)
	ctx.current_instruction = 0x88106A8C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,-320
	ctx.r27.s64 = ctx.r31.s64 + -320;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x88106A94;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,4(r10)
	ctx.current_instruction = 0x88106A9C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsb r23,r30
	ctx.r23.s64 = ctx.r30.s8;
	// lwz r30,0(r10)
	ctx.current_instruction = 0x88106AA4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r22,1(r11)
	ctx.current_instruction = 0x88106AAC;
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
	// lwzx r30,r30,r27
	ctx.current_instruction = 0x88106AC4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x88106AC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & ctx.r22.u64;
	// stb r6,1(r11)
	ctx.current_instruction = 0x88106AD4;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_88106AD8:
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106AD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// rlwinm r27,r21,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r27,r6
	ctx.current_instruction = 0x88106AE0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x88106b64
	if (ctx.cr6.eq) goto loc_88106B64;
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106AEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// lhzx r30,r6,r26
	ctx.current_instruction = 0x88106AF0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// lhzx r6,r6,r27
	ctx.current_instruction = 0x88106AF4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106b64
	if (!ctx.cr6.eq) goto loc_88106B64;
	// lwz r6,2548(r3)
	ctx.current_instruction = 0x88106B00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// lhzx r30,r6,r26
	ctx.current_instruction = 0x88106B04;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r26.u32);
	// lhzx r6,r6,r27
	ctx.current_instruction = 0x88106B08;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106b64
	if (!ctx.cr6.eq) goto loc_88106B64;
	// lbz r6,2(r7)
	ctx.current_instruction = 0x88106B14;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,320
	ctx.r23.s64 = ctx.r31.s64 + 320;
	// lbz r30,0(r7)
	ctx.current_instruction = 0x88106B1C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r22,r31,640
	ctx.r22.s64 = ctx.r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,8(r10)
	ctx.current_instruction = 0x88106B28;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsb r21,r30
	ctx.r21.s64 = ctx.r30.s8;
	// lwz r30,0(r10)
	ctx.current_instruction = 0x88106B30;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,2(r11)
	ctx.current_instruction = 0x88106B38;
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
	ctx.current_instruction = 0x88106B50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r6,r6,r22
	ctx.current_instruction = 0x88106B54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & ctx.r18.u64;
	// stb r6,2(r11)
	ctx.current_instruction = 0x88106B60;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_88106B64:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88106bf8
	if (!ctx.cr6.eq) goto loc_88106BF8;
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106B6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// lhzx r6,r27,r6
	ctx.current_instruction = 0x88106B70;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x88106bf8
	if (ctx.cr6.eq) goto loc_88106BF8;
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106B7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	ctx.current_instruction = 0x88106B84;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106B88;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106bf8
	if (!ctx.cr6.eq) goto loc_88106BF8;
	// lwz r6,2548(r3)
	ctx.current_instruction = 0x88106B94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,-2(r6)
	ctx.current_instruction = 0x88106B9C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106BA0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106bf8
	if (!ctx.cr6.eq) goto loc_88106BF8;
	// lbz r6,2(r7)
	ctx.current_instruction = 0x88106BAC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,-320
	ctx.r23.s64 = ctx.r31.s64 + -320;
	// lbz r30,3(r9)
	ctx.current_instruction = 0x88106BB4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,8(r10)
	ctx.current_instruction = 0x88106BBC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsb r22,r30
	ctx.r22.s64 = ctx.r30.s8;
	// lwz r30,12(r24)
	ctx.current_instruction = 0x88106BC4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,2(r11)
	ctx.current_instruction = 0x88106BCC;
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
	// lwzx r30,r30,r23
	ctx.current_instruction = 0x88106BE4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x88106BE8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & ctx.r21.u64;
	// stb r6,2(r11)
	ctx.current_instruction = 0x88106BF4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_88106BF8:
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106BF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x88106C00;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x88106c94
	if (ctx.cr6.eq) goto loc_88106C94;
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106C0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r30,r6,r26
	ctx.r30.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,2(r30)
	ctx.current_instruction = 0x88106C18;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.current_instruction = 0x88106C1C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106c94
	if (!ctx.cr6.eq) goto loc_88106C94;
	// lwz r6,2548(r3)
	ctx.current_instruction = 0x88106C28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// add r30,r6,r26
	ctx.r30.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,2(r30)
	ctx.current_instruction = 0x88106C34;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.current_instruction = 0x88106C38;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x88106c94
	if (!ctx.cr6.eq) goto loc_88106C94;
	// lbz r6,3(r7)
	ctx.current_instruction = 0x88106C44;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r26,r31,320
	ctx.r26.s64 = ctx.r31.s64 + 320;
	// lbz r30,1(r7)
	ctx.current_instruction = 0x88106C4C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r23,r31,640
	ctx.r23.s64 = ctx.r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,12(r10)
	ctx.current_instruction = 0x88106C58;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsb r22,r30
	ctx.r22.s64 = ctx.r30.s8;
	// lwz r30,4(r10)
	ctx.current_instruction = 0x88106C60;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,3(r11)
	ctx.current_instruction = 0x88106C68;
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
	ctx.current_instruction = 0x88106C80;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r6,r6,r23
	ctx.current_instruction = 0x88106C84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & ctx.r21.u64;
	// stb r6,3(r11)
	ctx.current_instruction = 0x88106C90;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_88106C94:
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106C94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.current_instruction = 0x88106C9C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x88106d24
	if (ctx.cr6.eq) goto loc_88106D24;
	// lwz r6,2544(r3)
	ctx.current_instruction = 0x88106CA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2544);
	// add r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 + ctx.r6.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x88106CB0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106CB4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88106d24
	if (!ctx.cr6.eq) goto loc_88106D24;
	// lwz r6,2548(r3)
	ctx.current_instruction = 0x88106CC0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2548);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// lhz r30,2(r6)
	ctx.current_instruction = 0x88106CC8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.current_instruction = 0x88106CCC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88106d24
	if (!ctx.cr6.eq) goto loc_88106D24;
	// lbz r6,3(r7)
	ctx.current_instruction = 0x88106CD8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r27,r31,-320
	ctx.r27.s64 = ctx.r31.s64 + -320;
	// lbz r30,2(r7)
	ctx.current_instruction = 0x88106CE0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r28,12(r10)
	ctx.current_instruction = 0x88106CE8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsb r26,r30
	ctx.r26.s64 = ctx.r30.s8;
	// lwz r30,8(r10)
	ctx.current_instruction = 0x88106CF0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r29,r6,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,3(r11)
	ctx.current_instruction = 0x88106CF8;
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
	// lwzx r30,r30,r27
	ctx.current_instruction = 0x88106D10;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r6,r6,r31
	ctx.current_instruction = 0x88106D14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 & ctx.r23.u64;
	// stb r6,3(r11)
	ctx.current_instruction = 0x88106D20;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_88106D24:
	// lwz r6,720(r3)
	ctx.current_instruction = 0x88106D24;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// bne cr6,0x88106e20
	if (!ctx.cr6.eq) goto loc_88106E20;
	// lwz r4,2552(r3)
	ctx.current_instruction = 0x88106D38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2552);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r4
	ctx.current_instruction = 0x88106D40;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88106e20
	if (ctx.cr6.eq) goto loc_88106E20;
	// subf r6,r6,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r6.u64;
	// lwz r4,2552(r3)
	ctx.current_instruction = 0x88106D50;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2552);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r5
	ctx.current_instruction = 0x88106D58;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lhzx r4,r4,r6
	ctx.current_instruction = 0x88106D5C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x88106e20
	if (!ctx.cr6.eq) goto loc_88106E20;
	// lwz r4,2556(r3)
	ctx.current_instruction = 0x88106D68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2556);
	// lhzx r6,r4,r6
	ctx.current_instruction = 0x88106D6C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// lhzx r5,r4,r5
	ctx.current_instruction = 0x88106D70;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x88106e20
	if (!ctx.cr6.eq) goto loc_88106E20;
	// lbz r6,4(r8)
	ctx.current_instruction = 0x88106D7C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// addi r28,r31,320
	ctx.r28.s64 = ctx.r31.s64 + 320;
	// lbz r4,4(r7)
	ctx.current_instruction = 0x88106D84;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r27,r31,640
	ctx.r27.s64 = ctx.r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lwz r5,16(r25)
	ctx.current_instruction = 0x88106D90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lwz r30,16(r10)
	ctx.current_instruction = 0x88106D98;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r26,4(r11)
	ctx.current_instruction = 0x88106DA0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,5(r11)
	ctx.current_instruction = 0x88106DA8;
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
	// addi r30,r31,320
	ctx.r30.s64 = ctx.r31.s64 + 320;
	// addi r26,r31,640
	ctx.r26.s64 = ctx.r31.s64 + 640;
	// lwzx r4,r4,r27
	ctx.current_instruction = 0x88106DC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// lwzx r6,r6,r28
	ctx.current_instruction = 0x88106DCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// and r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stb r6,4(r11)
	ctx.current_instruction = 0x88106DD8;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,5(r7)
	ctx.current_instruction = 0x88106DDC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// lwz r6,20(r25)
	ctx.current_instruction = 0x88106DE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r4,20(r10)
	ctx.current_instruction = 0x88106DE4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lbz r8,5(r8)
	ctx.current_instruction = 0x88106DE8;
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
	ctx.current_instruction = 0x88106E0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// lwzx r6,r4,r30
	ctx.current_instruction = 0x88106E10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 & ctx.r23.u64;
	// stb r4,5(r11)
	ctx.current_instruction = 0x88106E1C;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_88106E20:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88106f04
	if (!ctx.cr6.eq) goto loc_88106F04;
	// lwz r6,2552(r3)
	ctx.current_instruction = 0x88106E28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2552);
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r6
	ctx.current_instruction = 0x88106E30;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x88106f04
	if (ctx.cr6.eq) goto loc_88106F04;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lhz r5,-2(r6)
	ctx.current_instruction = 0x88106E44;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r4,0(r6)
	ctx.current_instruction = 0x88106E48;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x88106f04
	if (!ctx.cr6.eq) goto loc_88106F04;
	// lwz r6,2556(r3)
	ctx.current_instruction = 0x88106E54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 2556);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lhz r6,-2(r8)
	ctx.current_instruction = 0x88106E5C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r5,0(r8)
	ctx.current_instruction = 0x88106E60;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x88106f04
	if (!ctx.cr6.eq) goto loc_88106F04;
	// lbz r8,4(r7)
	ctx.current_instruction = 0x88106E6C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r3,r31,-320
	ctx.r3.s64 = ctx.r31.s64 + -320;
	// lbz r6,4(r9)
	ctx.current_instruction = 0x88106E74;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// addi r30,r31,-320
	ctx.r30.s64 = ctx.r31.s64 + -320;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lwz r4,16(r10)
	ctx.current_instruction = 0x88106E80;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lwz r6,16(r24)
	ctx.current_instruction = 0x88106E88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r29,4(r11)
	ctx.current_instruction = 0x88106E90;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r28,5(r11)
	ctx.current_instruction = 0x88106E98;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.current_instruction = 0x88106EAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r8,r6,r31
	ctx.current_instruction = 0x88106EB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// or r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 | ctx.r8.u64;
	// and r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stb r5,4(r11)
	ctx.current_instruction = 0x88106EBC;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// lbz r8,5(r7)
	ctx.current_instruction = 0x88106EC0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,5(r9)
	ctx.current_instruction = 0x88106EC8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// lwz r7,20(r10)
	ctx.current_instruction = 0x88106ED0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,20(r24)
	ctx.current_instruction = 0x88106EDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.current_instruction = 0x88106EF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r6,r8,r30
	ctx.current_instruction = 0x88106EF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// and r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 & ctx.r28.u64;
	// stb r4,5(r11)
	ctx.current_instruction = 0x88106F00;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_88106F04:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811DC58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811DC58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811DC58) {
			switch (rex_dispatch_address) {
				case 0x8811DC60:
				case 0x8811DD3C:
				case 0x8811DD8C:
				case 0x8811DDA8:
				case 0x8811DDD0:
				case 0x8811DE14:
				case 0x8811DE5C:
				case 0x8811DE98:
				case 0x8811DED4:
				case 0x8811DEF4:
				case 0x8811DF14:
				case 0x8811DF90:
				case 0x8811DFD4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811DC58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811DC60: goto loc_8811DC60;
		case 0x8811DD3C: goto loc_8811DD3C;
		case 0x8811DD8C: goto loc_8811DD8C;
		case 0x8811DDA8: goto loc_8811DDA8;
		case 0x8811DDD0: goto loc_8811DDD0;
		case 0x8811DE14: goto loc_8811DE14;
		case 0x8811DE5C: goto loc_8811DE5C;
		case 0x8811DE98: goto loc_8811DE98;
		case 0x8811DED4: goto loc_8811DED4;
		case 0x8811DEF4: goto loc_8811DEF4;
		case 0x8811DF14: goto loc_8811DF14;
		case 0x8811DF90: goto loc_8811DF90;
		case 0x8811DFD4: goto loc_8811DFD4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8811DC60;
	__savegprlr_22(ctx, base);
loc_8811DC60:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x8811DC60;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,28(r3)
	ctx.current_instruction = 0x8811DC68;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// stw r28,104(r1)
	ctx.current_instruction = 0x8811DC74;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r28,100(r1)
	ctx.current_instruction = 0x8811DC7C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,88(r1)
	ctx.current_instruction = 0x8811DC80;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r28,84(r1)
	ctx.current_instruction = 0x8811DC88;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r27,r10,22
	ctx.r27.u64 = ctx.r10.u64 | 22;
	// stw r28,92(r1)
	ctx.current_instruction = 0x8811DC90;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r23,24
	ctx.r23.s64 = 24;
	// stb r28,80(r1)
	ctx.current_instruction = 0x8811DC98;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r22,16
	ctx.r22.s64 = 16;
	// addi r25,r11,6692
	ctx.r25.s64 = ctx.r11.s64 + 6692;
loc_8811DCA4:
	// lwz r11,80(r31)
	ctx.current_instruction = 0x8811DCA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8811df5c
	if (ctx.cr6.eq) goto loc_8811DF5C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8811deb8
	if (ctx.cr6.eq) goto loc_8811DEB8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8811dca4
	if (!ctx.cr6.eq) goto loc_8811DCA4;
	// lwz r9,84(r31)
	ctx.current_instruction = 0x8811DCC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r6,88(r31)
	ctx.current_instruction = 0x8811DCC8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r5,92(r31)
	ctx.current_instruction = 0x8811DCD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r3,96(r31)
	ctx.current_instruction = 0x8811DCD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// ld r4,104(r31)
	ctx.current_instruction = 0x8811DCE0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 104);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r7)
	ctx.current_instruction = 0x8811DCE8;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
	// stw r6,4(r7)
	ctx.current_instruction = 0x8811DCF0;
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// rotlwi r29,r4,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r5,8(r7)
	ctx.current_instruction = 0x8811DCF8;
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r3,12(r7)
	ctx.current_instruction = 0x8811DCFC;
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
loc_8811DD00:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x8811DD00;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x8811DD04;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8811dd20
	if (!ctx.cr0.eq) goto loc_8811DD20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8811dd00
	if (!ctx.cr6.eq) goto loc_8811DD00;
loc_8811DD20:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8811de7c
	if (!ctx.cr6.eq) goto loc_8811DE7C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.current_instruction = 0x8811DD2C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x880cb758
	ctx.lr = 0x8811DD3C;
	sub_880CB758(ctx, base);
loc_8811DD3C:
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8811dd9c
	if (ctx.cr6.eq) goto loc_8811DD9C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
loc_8811DD4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811DD54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8811DD58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8811dd78
	if (!ctx.cr6.eq) goto loc_8811DD78;
	// lhz r10,44(r11)
	ctx.current_instruction = 0x8811DD64;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r9,152(r31)
	ctx.current_instruction = 0x8811DD68;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8811dd98
	if (ctx.cr6.eq) goto loc_8811DD98;
loc_8811DD78:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.current_instruction = 0x8811DD7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8811DD84;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x880cb7c0
	ctx.lr = 0x8811DD8C;
	sub_880CB7C0(ctx, base);
loc_8811DD8C:
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8811dd4c
	if (!ctx.cr6.eq) goto loc_8811DD4C;
	// b 0x8811dd9c
	goto loc_8811DD9C;
loc_8811DD98:
	// lbz r30,0(r11)
	ctx.current_instruction = 0x8811DD98;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
loc_8811DD9C:
	// lwz r4,88(r1)
	ctx.current_instruction = 0x8811DD9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r31)
	ctx.current_instruction = 0x8811DDA0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x880cb828
	ctx.lr = 0x8811DDA8;
	sub_880CB828(ctx, base);
loc_8811DDA8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8811ddf0
	if (!ctx.cr6.eq) goto loc_8811DDF0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8811DDB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,-24
	ctx.r30.s64 = ctx.r29.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811DDC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811DDD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811DDD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// ld r11,8(r31)
	ctx.current_instruction = 0x8811DDD8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r26,80(r31)
	ctx.current_instruction = 0x8811DDE0;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	ctx.current_instruction = 0x8811DDE8;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// b 0x8811dca4
	goto loc_8811DCA4;
loc_8811DDF0:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811DDF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,72(r11)
	ctx.current_instruction = 0x8811DDF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8811de48
	if (!ctx.cr6.eq) goto loc_8811DE48;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,224(r31)
	ctx.current_instruction = 0x8811DE04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb2c0
	ctx.lr = 0x8811DE14;
	sub_880CB2C0(ctx, base);
loc_8811DE14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// lwz r11,92(r1)
	ctx.current_instruction = 0x8811DE1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	ctx.current_instruction = 0x8811DE24;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	ctx.current_instruction = 0x8811DE28;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	ctx.current_instruction = 0x8811DE2C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	ctx.current_instruction = 0x8811DE30;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,16(r11)
	ctx.current_instruction = 0x8811DE34;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811DE38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.current_instruction = 0x8811DE3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,72(r9)
	ctx.current_instruction = 0x8811DE40;
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r8.u32);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x8811DE44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8811DE48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,72(r11)
	ctx.current_instruction = 0x8811DE4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8811d9f8
	ctx.lr = 0x8811DE5C;
	sub_8811D9F8(ctx, base);
loc_8811DE5C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// lhz r11,152(r31)
	ctx.current_instruction = 0x8811DE64;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// stw r26,80(r31)
	ctx.current_instruction = 0x8811DE68;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,152(r31)
	ctx.current_instruction = 0x8811DE74;
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r10.u16);
	// b 0x8811dca4
	goto loc_8811DCA4;
loc_8811DE7C:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8811DE7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,-24
	ctx.r30.s64 = ctx.r29.s64 + -24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8811DE8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811DE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811DE98:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// ld r11,8(r31)
	ctx.current_instruction = 0x8811DEA0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stw r26,80(r31)
	ctx.current_instruction = 0x8811DEA8;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	ctx.current_instruction = 0x8811DEB0;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// b 0x8811dca4
	goto loc_8811DCA4;
loc_8811DEB8:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8811DEB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r23,96(r1)
	ctx.current_instruction = 0x8811DEC0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8811DEC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811DED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811DED4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x881196f8
	ctx.lr = 0x8811DEF4;
	sub_881196F8(ctx, base);
loc_8811DEF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88119528
	ctx.lr = 0x8811DF14;
	sub_88119528(ctx, base);
loc_8811DF14:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r11,112(r1)
	ctx.current_instruction = 0x8811DF20;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// addi r9,r31,84
	ctx.r9.s64 = ctx.r31.s64 + 84;
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// lwz r8,0(r10)
	ctx.current_instruction = 0x8811DF2C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.current_instruction = 0x8811DF30;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.current_instruction = 0x8811DF34;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.current_instruction = 0x8811DF38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// std r11,104(r31)
	ctx.current_instruction = 0x8811DF3C;
	REX_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// stw r8,84(r31)
	ctx.current_instruction = 0x8811DF40;
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	ctx.current_instruction = 0x8811DF44;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	ctx.current_instruction = 0x8811DF48;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// stw r5,96(r31)
	ctx.current_instruction = 0x8811DF4C;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// blt cr6,0x8811dfa4
	if (ctx.cr6.lt) goto loc_8811DFA4;
	// stw r22,80(r31)
	ctx.current_instruction = 0x8811DF54;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// b 0x8811dca4
	goto loc_8811DCA4;
loc_8811DF5C:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x8811DF5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// ld r11,24(r31)
	ctx.current_instruction = 0x8811DF60;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// ld r9,8(r31)
	ctx.current_instruction = 0x8811DF64;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// lwz r10,8(r10)
	ctx.current_instruction = 0x8811DF6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8811df98
	if (ctx.cr6.eq) goto loc_8811DF98;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8811DF78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x8811DF84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811DF90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811DF90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfac
	if (ctx.cr6.lt) goto loc_8811DFAC;
loc_8811DF98:
	// std r30,8(r31)
	ctx.current_instruction = 0x8811DF98;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// stw r26,80(r31)
	ctx.current_instruction = 0x8811DF9C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// b 0x8811dca4
	goto loc_8811DCA4;
loc_8811DFA4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8811DFAC:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 | 1;
loc_8811DFB4:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8811dfec
	if (!ctx.cr6.eq) goto loc_8811DFEC;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8811DFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,16(r31)
	ctx.current_instruction = 0x8811DFC0;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.current_instruction = 0x8811DFC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8811DFD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8811DFD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811dfb4
	if (ctx.cr6.lt) goto loc_8811DFB4;
	// ld r11,16(r31)
	ctx.current_instruction = 0x8811DFDC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,80(r31)
	ctx.current_instruction = 0x8811DFE4;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// std r11,8(r31)
	ctx.current_instruction = 0x8811DFE8;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_8811DFEC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124328) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88124328;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88124328) {
			switch (rex_dispatch_address) {
				case 0x88124330:
				case 0x88124380:
				case 0x881243C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124328;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88124330: goto loc_88124330;
		case 0x88124380: goto loc_88124380;
		case 0x881243C8: goto loc_881243C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88124330;
	__savegprlr_27(ctx, base);
loc_88124330:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88124330;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88124334;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x88124348;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88124368
	if (!ctx.cr6.gt) goto loc_88124368;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,56(r31)
	ctx.current_instruction = 0x88124358;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r4.u64);
	// stw r11,64(r31)
	ctx.current_instruction = 0x8812435C;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88124368:
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88124368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88124374;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88124380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88124380:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881243c8
	if (ctx.cr6.lt) goto loc_881243C8;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x8812438C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// std r30,32(r31)
	ctx.current_instruction = 0x88124390;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r30,40(r31)
	ctx.current_instruction = 0x88124394;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,56(r31)
	ctx.current_instruction = 0x8812439C;
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r29.u64);
	// stw r29,64(r31)
	ctx.current_instruction = 0x881243A0;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// std r30,128(r31)
	ctx.current_instruction = 0x881243A4;
	REX_STORE_U64(ctx.r31.u32 + 128, ctx.r30.u64);
	// stw r29,68(r31)
	ctx.current_instruction = 0x881243A8;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// std r29,72(r31)
	ctx.current_instruction = 0x881243AC;
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r29.u64);
	// bne cr6,0x881243c8
	if (!ctx.cr6.eq) goto loc_881243C8;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881243B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x881243c8
	if (!ctx.cr6.gt) goto loc_881243C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88123ec0
	ctx.lr = 0x881243C8;
	sub_88123EC0(ctx, base);
loc_881243C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881256F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881256F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881256F0;
	ctx.current_instruction = 0x881256F0;
	// b 0x88125460
	sub_88125460(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125920) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125920;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125920) {
			switch (rex_dispatch_address) {
				case 0x88125928:
				case 0x8812599C:
				case 0x881259B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125920;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125928: goto loc_88125928;
		case 0x8812599C: goto loc_8812599C;
		case 0x881259B0: goto loc_881259B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88125928;
	__savegprlr_28(ctx, base);
loc_88125928:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88125928;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88125930;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrldi r29,r4,32
	ctx.r29.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,80(r1)
	ctx.current_instruction = 0x8812593C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_88125940:
	// lwz r9,44(r28)
	ctx.current_instruction = 0x88125940;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,16(r9)
	ctx.current_instruction = 0x88125950;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,4(r8)
	ctx.current_instruction = 0x88125954;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8812596c
	if (ctx.cr6.eq) goto loc_8812596C;
	// lwz r10,0(r9)
	ctx.current_instruction = 0x88125960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.current_instruction = 0x88125964;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88125968;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8812596C:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,40(r31)
	ctx.current_instruction = 0x88125970;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x881259d8
	if (!ctx.cr6.lt) goto loc_881259D8;
	// lwz r11,52(r31)
	ctx.current_instruction = 0x88125984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88125990;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8812599C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8812599C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881259d8
	if (ctx.cr6.lt) goto loc_881259D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x881259A8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x88125460
	ctx.lr = 0x881259B0;
	sub_88125460(ctx, base);
loc_881259B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881259d8
	if (ctx.cr6.lt) goto loc_881259D8;
	// lwz r10,120(r31)
	ctx.current_instruction = 0x881259B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.current_instruction = 0x881259BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// ld r11,40(r31)
	ctx.current_instruction = 0x881259C0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,120(r31)
	ctx.current_instruction = 0x881259CC;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// cmpld cr6,r30,r9
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x88125940
	if (ctx.cr6.lt) goto loc_88125940;
loc_881259D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127EF0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88127EF0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127EF0;
	ctx.current_instruction = 0x88127EF0;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.current_instruction = 0x88127EF4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881283B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881283B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881283B8) {
			switch (rex_dispatch_address) {
				case 0x881283C0:
				case 0x881284B4:
				case 0x8812866C:
				case 0x88128754:
				case 0x88128850:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881283B8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881283C0: goto loc_881283C0;
		case 0x881284B4: goto loc_881284B4;
		case 0x8812866C: goto loc_8812866C;
		case 0x88128754: goto loc_88128754;
		case 0x88128850: goto loc_88128850;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881283C0;
	__savegprlr_27(ctx, base);
loc_881283C0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881283C0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.current_instruction = 0x881283C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x881283dc
	if (!ctx.cr6.gt) goto loc_881283DC;
	// stw r28,212(r3)
	ctx.current_instruction = 0x881283D8;
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r28.u32);
loc_881283DC:
	// lwz r11,100(r31)
	ctx.current_instruction = 0x881283DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812840c
	if (!ctx.cr6.eq) goto loc_8812840C;
	// lhz r10,110(r31)
	ctx.current_instruction = 0x881283EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// lwz r11,88(r31)
	ctx.current_instruction = 0x881283F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,96(r31)
	ctx.current_instruction = 0x88128404;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// b 0x88128418
	goto loc_88128418;
loc_8812840C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88128418
	if (!ctx.cr6.eq) goto loc_88128418;
	// stw r27,96(r31)
	ctx.current_instruction = 0x88128414;
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
loc_88128418:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x88128418;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,80(r31)
	ctx.current_instruction = 0x88128420;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r8,84(r31)
	ctx.current_instruction = 0x88128424;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r6,88(r31)
	ctx.current_instruction = 0x88128430;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lfs f0,8892(r10)
	ctx.current_instruction = 0x88128434;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8892);
	ctx.f0.f64 = double(temp.f32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// std r5,80(r1)
	ctx.current_instruction = 0x88128440;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88128444;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	ctx.current_instruction = 0x88128448;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8812844C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stw r3,92(r31)
	ctx.current_instruction = 0x8812845C;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// bne cr6,0x88128484
	if (!ctx.cr6.eq) goto loc_88128484;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,14872(r11)
	ctx.current_instruction = 0x88128478;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14872);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8812849c
	goto loc_8812849C;
loc_88128484:
	// ble cr6,0x88128498
	if (!ctx.cr6.gt) goto loc_88128498;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,23872(r11)
	ctx.current_instruction = 0x8812848C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23872);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8812849c
	goto loc_8812849C;
loc_88128498:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8812849C:
	// stfs f0,44(r31)
	ctx.current_instruction = 0x8812849C;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// stfs f13,48(r31)
	ctx.current_instruction = 0x881284A4;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,104(r31)
	ctx.current_instruction = 0x881284AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x8812a1a8
	ctx.lr = 0x881284B4;
	sub_8812A1A8(ctx, base);
loc_881284B4:
	// lwz r11,256(r31)
	ctx.current_instruction = 0x881284B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,60(r31)
	ctx.current_instruction = 0x881284B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,2
	ctx.r30.s64 = 2;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r8,252(r31)
	ctx.current_instruction = 0x881284D0;
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// stw r7,260(r31)
	ctx.current_instruction = 0x881284D4;
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r7.u32);
	// bgt cr6,0x88128598
	if (ctx.cr6.gt) goto loc_88128598;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881284DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r10,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,212(r31)
	ctx.current_instruction = 0x881284EC;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r7,280(r31)
	ctx.current_instruction = 0x881284F0;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r6,220(r31)
	ctx.current_instruction = 0x881284F8;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r6.u32);
	// beq cr6,0x88128510
	if (ctx.cr6.eq) goto loc_88128510;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x88128514
	if (!ctx.cr6.eq) goto loc_88128514;
loc_88128510:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_88128514:
	// stw r11,216(r31)
	ctx.current_instruction = 0x88128514;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88128570
	if (ctx.cr6.eq) goto loc_88128570;
	// lwz r7,84(r31)
	ctx.current_instruction = 0x88128520;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// srawi r6,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 3;
	// lhz r5,34(r31)
	ctx.current_instruction = 0x88128528;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r3,r7,r5
	ctx.r3.u64 = uint32_t((ctx.r5.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r7.s32 / ctx.r5.s32 : 0);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// andc r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,228(r31)
	ctx.current_instruction = 0x88128544;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// cmpwi cr6,r3,4000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4000, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x88128564
	if (ctx.cr6.lt) goto loc_88128564;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,228(r31)
	ctx.current_instruction = 0x8812855C;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
	// b 0x88128574
	goto loc_88128574;
loc_88128564:
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,228(r31)
	ctx.current_instruction = 0x88128568;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// b 0x88128574
	goto loc_88128574;
loc_88128570:
	// stw r28,228(r31)
	ctx.current_instruction = 0x88128570;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
loc_88128574:
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// lwz r10,228(r31)
	ctx.current_instruction = 0x88128578;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x881285cc
	if (!ctx.cr6.gt) goto loc_881285CC;
	// stw r11,228(r31)
	ctx.current_instruction = 0x88128590;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// b 0x881285cc
	goto loc_881285CC;
loc_88128598:
	// lwz r11,64(r31)
	ctx.current_instruction = 0x88128598;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,280(r31)
	ctx.current_instruction = 0x8812859C;
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r28.u32);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// stw r28,220(r31)
	ctx.current_instruction = 0x881285A4;
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// stw r28,212(r31)
	ctx.current_instruction = 0x881285A8;
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r28,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// stw r6,228(r31)
	ctx.current_instruction = 0x881285B4;
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x881285c8
	if (!ctx.cr6.gt) goto loc_881285C8;
	// stw r28,216(r31)
	ctx.current_instruction = 0x881285C0;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// b 0x881285cc
	goto loc_881285CC;
loc_881285C8:
	// stw r27,216(r31)
	ctx.current_instruction = 0x881285C8;
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r27.u32);
loc_881285CC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881285dc
	if (!ctx.cr6.eq) goto loc_881285DC;
	// stw r28,244(r31)
	ctx.current_instruction = 0x881285D4;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r28.u32);
	// b 0x88128608
	goto loc_88128608;
loc_881285DC:
	// lwz r10,228(r31)
	ctx.current_instruction = 0x881285DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88128600
	if (!ctx.cr6.gt) goto loc_88128600;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_881285F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x881285f0
	if (ctx.cr6.gt) goto loc_881285F0;
loc_88128600:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,244(r31)
	ctx.current_instruction = 0x88128604;
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_88128608:
	// lwz r10,228(r31)
	ctx.current_instruction = 0x88128608;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r9,280(r31)
	ctx.current_instruction = 0x88128610;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// divw r8,r8,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// stw r8,232(r31)
	ctx.current_instruction = 0x88128620;
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// andc r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// stw r11,236(r31)
	ctx.current_instruction = 0x88128634;
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r3,240(r31)
	ctx.current_instruction = 0x88128644;
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// bne cr6,0x88128658
	if (!ctx.cr6.eq) goto loc_88128658;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,23856(r11)
	ctx.current_instruction = 0x88128650;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f0.f64 = double(temp.f32);
	// b 0x88128660
	goto loc_88128660;
loc_88128658:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,23868(r11)
	ctx.current_instruction = 0x8812865C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23868);
	ctx.f0.f64 = double(temp.f32);
loc_88128660:
	// stfs f0,292(r31)
	ctx.current_instruction = 0x88128660;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881423a8
	ctx.lr = 0x8812866C;
	sub_881423A8(ctx, base);
loc_8812866C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881288f8
	if (ctx.cr6.lt) goto loc_881288F8;
	// lwz r9,256(r31)
	ctx.current_instruction = 0x88128678;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8812869c
	if (!ctx.cr6.gt) goto loc_8812869C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8812868C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8812868c
	if (ctx.cr6.gt) goto loc_8812868C;
loc_8812869C:
	// lwz r10,60(r31)
	ctx.current_instruction = 0x8812869C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,248(r31)
	ctx.current_instruction = 0x881286A4;
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881286b8
	if (!ctx.cr6.eq) goto loc_881286B8;
	// stw r8,272(r31)
	ctx.current_instruction = 0x881286B0;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r8.u32);
	// b 0x881286bc
	goto loc_881286BC;
loc_881286B8:
	// stw r27,272(r31)
	ctx.current_instruction = 0x881286B8;
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
loc_881286BC:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x881286e0
	if (!ctx.cr6.lt) goto loc_881286E0;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,100
	ctx.r7.s64 = 100;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r5,r6,r7
	ctx.r5.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// subf r4,r5,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r4,276(r31)
	ctx.current_instruction = 0x881286D8;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r4.u32);
	// b 0x881286e4
	goto loc_881286E4;
loc_881286E0:
	// stw r9,276(r31)
	ctx.current_instruction = 0x881286E0;
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
loc_881286E4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r11,272(r31)
	ctx.current_instruction = 0x881286E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,276(r31)
	ctx.current_instruction = 0x881286EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,264(r31)
	ctx.current_instruction = 0x881286F0;
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r10,268(r31)
	ctx.current_instruction = 0x881286F4;
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// bgt cr6,0x88128744
	if (ctx.cr6.gt) goto loc_88128744;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,48(r31)
	ctx.current_instruction = 0x88128700;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,288(r31)
	ctx.current_instruction = 0x88128704;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r8.u32);
	// lfs f13,23864(r11)
	ctx.current_instruction = 0x88128708;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88128728
	if (!ctx.cr6.lt) goto loc_88128728;
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88128714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// blt cr6,0x88128748
	if (ctx.cr6.lt) goto loc_88128748;
	// stw r28,288(r31)
	ctx.current_instruction = 0x88128720;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r28.u32);
	// b 0x88128748
	goto loc_88128748;
loc_88128728:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f13,23860(r11)
	ctx.current_instruction = 0x8812872C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23860);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x88128748
	if (!ctx.cr6.lt) goto loc_88128748;
	// lwz r11,80(r31)
	ctx.current_instruction = 0x88128738;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,32000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32000, ctx.xer);
	// blt cr6,0x88128748
	if (ctx.cr6.lt) goto loc_88128748;
loc_88128744:
	// stw r30,288(r31)
	ctx.current_instruction = 0x88128744;
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
loc_88128748:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881277e8
	ctx.lr = 0x88128754;
	sub_881277E8(ctx, base);
loc_88128754:
	// lwz r9,60(r31)
	ctx.current_instruction = 0x88128754;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x881287ec
	if (ctx.cr6.gt) goto loc_881287EC;
	// lwz r11,256(r31)
	ctx.current_instruction = 0x88128760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lfs f12,44(r31)
	ctx.current_instruction = 0x88128764;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// std r8,80(r1)
	ctx.current_instruction = 0x88128774;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.current_instruction = 0x88128778;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,14504(r10)
	ctx.current_instruction = 0x88128788;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 14504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6732(r7)
	ctx.current_instruction = 0x8812878C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6732);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,6728(r11)
	ctx.current_instruction = 0x8812879C;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6728);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x881287b8
	if (!ctx.cr6.lt) goto loc_881287B8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x881287AC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881287B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x881287c8
	goto loc_881287C8;
loc_881287B8:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	ctx.current_instruction = 0x881287C0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x881287C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_881287C8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x881287e4
	if (!ctx.cr6.gt) goto loc_881287E4;
loc_881287D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x881287d4
	if (ctx.cr6.gt) goto loc_881287D4;
loc_881287E4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x88128814
	goto loc_88128814;
loc_881287EC:
	// lwz r10,12(r31)
	ctx.current_instruction = 0x881287EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x88128810
	if (!ctx.cr6.gt) goto loc_88128810;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_88128800:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x88128800
	if (ctx.cr6.gt) goto loc_88128800;
loc_88128810:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_88128814:
	// stw r11,8(r31)
	ctx.current_instruction = 0x88128814;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x88128848
	if (!ctx.cr6.eq) goto loc_88128848;
	// lwz r11,468(r31)
	ctx.current_instruction = 0x88128820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x8812882C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88128830;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,12296(r10)
	ctx.current_instruction = 0x88128838;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12296);
	// fdiv f11,f0,f12
	ctx.f11.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f10,300(r31)
	ctx.current_instruction = 0x88128844;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 300, temp.u32);
loc_88128848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88144ef8
	ctx.lr = 0x88128850;
	sub_88144EF8(ctx, base);
loc_88128850:
	// lwz r11,60(r31)
	ctx.current_instruction = 0x88128850;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8812889c
	if (ctx.cr6.lt) goto loc_8812889C;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x8812885C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r10,0,16,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8812887c
	if (ctx.cr6.eq) goto loc_8812887C;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8812887C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8812889c
	if (ctx.cr6.lt) goto loc_8812889C;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x88128884;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r28,588(r31)
	ctx.current_instruction = 0x88128888;
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r28.u32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8812889c
	if (ctx.cr6.eq) goto loc_8812889C;
	// stw r28,600(r31)
	ctx.current_instruction = 0x88128898;
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
loc_8812889C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r27,744(r31)
	ctx.current_instruction = 0x881288A0;
	REX_STORE_U32(ctx.r31.u32 + 744, ctx.r27.u32);
	// blt cr6,0x881288f8
	if (ctx.cr6.lt) goto loc_881288F8;
	// lwz r11,64(r31)
	ctx.current_instruction = 0x881288A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881288bc
	if (ctx.cr6.eq) goto loc_881288BC;
	// stw r28,624(r31)
	ctx.current_instruction = 0x881288B8;
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r28.u32);
loc_881288BC:
	// lhz r10,34(r31)
	ctx.current_instruction = 0x881288BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x881288cc
	if (!ctx.cr6.eq) goto loc_881288CC;
	// stw r28,744(r31)
	ctx.current_instruction = 0x881288C8;
	REX_STORE_U32(ctx.r31.u32 + 744, ctx.r28.u32);
loc_881288CC:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881288dc
	if (ctx.cr6.eq) goto loc_881288DC;
	// stw r28,120(r31)
	ctx.current_instruction = 0x881288D8;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
loc_881288DC:
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881288fc
	if (ctx.cr6.eq) goto loc_881288FC;
	// stw r28,604(r31)
	ctx.current_instruction = 0x881288EC;
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_881288F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_881288FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C578) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813C578;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813C578) {
			switch (rex_dispatch_address) {
				case 0x8813C5A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813C578;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813C5A4: goto loc_8813C5A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8813C57C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8813C580;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8813C584;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.current_instruction = 0x8813C58C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8813c5ac
	if (ctx.cr6.eq) goto loc_8813C5AC;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x8813C5A4;
	sub_88050358(ctx, base);
loc_8813C5A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	ctx.current_instruction = 0x8813C5A8;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8813C5AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8813C5B0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8813C5B8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8813D1B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813D1B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813D1B8) {
			switch (rex_dispatch_address) {
				case 0x8813D1C0:
				case 0x8813D218:
				case 0x8813D26C:
				case 0x8813D27C:
				case 0x8813D2A4:
				case 0x8813D2E8:
				case 0x8813D304:
				case 0x8813D318:
				case 0x8813D354:
				case 0x8813D368:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813D1B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813D1C0: goto loc_8813D1C0;
		case 0x8813D218: goto loc_8813D218;
		case 0x8813D26C: goto loc_8813D26C;
		case 0x8813D27C: goto loc_8813D27C;
		case 0x8813D2A4: goto loc_8813D2A4;
		case 0x8813D2E8: goto loc_8813D2E8;
		case 0x8813D304: goto loc_8813D304;
		case 0x8813D318: goto loc_8813D318;
		case 0x8813D354: goto loc_8813D354;
		case 0x8813D368: goto loc_8813D368;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8813D1C0;
	__savegprlr_24(ctx, base);
loc_8813D1C0:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8813D1C0;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8813d378
	if (ctx.cr6.eq) goto loc_8813D378;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8813d370
	if (ctx.cr6.eq) goto loc_8813D370;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8813d370
	if (ctx.cr6.eq) goto loc_8813D370;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8813d370
	if (ctx.cr6.eq) goto loc_8813D370;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r29,0(r6)
	ctx.current_instruction = 0x8813D204;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// ori r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 32768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x8813D218;
	sub_88050340(ctx, base);
loc_8813D218:
	// stw r3,0(r31)
	ctx.current_instruction = 0x8813D218;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8813d234
	if (!ctx.cr6.eq) goto loc_8813D234;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r26)
	ctx.current_instruction = 0x8813D228;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8813D234:
	// lwz r11,16(r30)
	ctx.current_instruction = 0x8813D234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8813d254
	if (!ctx.cr6.eq) goto loc_8813D254;
	// lhz r10,14(r30)
	ctx.current_instruction = 0x8813D240;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8813d254
	if (!ctx.cr6.eq) goto loc_8813D254;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// b 0x8813d264
	goto loc_8813D264;
loc_8813D254:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r5,52
	ctx.r5.s64 = 52;
	// beq cr6,0x8813d264
	if (ctx.cr6.eq) goto loc_8813D264;
	// li r5,40
	ctx.r5.s64 = 40;
loc_8813D264:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x8813D26C;
	sub_880547A0(ctx, base);
loc_8813D26C:
	// stw r29,4(r31)
	ctx.current_instruction = 0x8813D26C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x88050340
	ctx.lr = 0x8813D27C;
	sub_88050340(ctx, base);
loc_8813D27C:
	// stw r3,4(r31)
	ctx.current_instruction = 0x8813D27C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8813d2b0
	if (!ctx.cr6.eq) goto loc_8813D2B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r26)
	ctx.current_instruction = 0x8813D28C;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8813D290;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8813d378
	if (ctx.cr6.eq) goto loc_8813D378;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x8813D2A4;
	sub_88050358(ctx, base);
loc_8813D2A4:
	// stw r29,0(r31)
	ctx.current_instruction = 0x8813D2A4;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8813D2B0:
	// lwz r11,16(r27)
	ctx.current_instruction = 0x8813D2B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8813d2d0
	if (!ctx.cr6.eq) goto loc_8813D2D0;
	// lhz r10,14(r27)
	ctx.current_instruction = 0x8813D2BC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8813d2d0
	if (!ctx.cr6.eq) goto loc_8813D2D0;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// b 0x8813d2e0
	goto loc_8813D2E0;
loc_8813D2D0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// li r5,52
	ctx.r5.s64 = 52;
	// beq cr6,0x8813d2e0
	if (ctx.cr6.eq) goto loc_8813D2E0;
	// li r5,40
	ctx.r5.s64 = 40;
loc_8813D2E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x8813D2E8;
	sub_880547A0(ctx, base);
loc_8813D2E8:
	// stw r25,14652(r31)
	ctx.current_instruction = 0x8813D2E8;
	REX_STORE_U32(ctx.r31.u32 + 14652, ctx.r25.u32);
	// stw r29,14548(r31)
	ctx.current_instruction = 0x8813D2EC;
	REX_STORE_U32(ctx.r31.u32 + 14548, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r26)
	ctx.current_instruction = 0x8813D2F4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// stw r29,14612(r31)
	ctx.current_instruction = 0x8813D2F8;
	REX_STORE_U32(ctx.r31.u32 + 14612, ctx.r29.u32);
	// stw r29,14464(r31)
	ctx.current_instruction = 0x8813D2FC;
	REX_STORE_U32(ctx.r31.u32 + 14464, ctx.r29.u32);
	// bl 0x8813cb60
	ctx.lr = 0x8813D304;
	sub_8813CB60(ctx, base);
loc_8813D304:
	// stw r3,0(r26)
	ctx.current_instruction = 0x8813D304;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813d378
	if (!ctx.cr6.eq) goto loc_8813D378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cac40
	ctx.lr = 0x8813D318;
	sub_880CAC40(ctx, base);
loc_8813D318:
	// stw r3,0(r26)
	ctx.current_instruction = 0x8813D318;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813d378
	if (!ctx.cr6.eq) goto loc_8813D378;
	// lwz r11,14696(r31)
	ctx.current_instruction = 0x8813D324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8813d338
	if (!ctx.cr6.eq) goto loc_8813D338;
	// stw r29,14684(r31)
	ctx.current_instruction = 0x8813D330;
	REX_STORE_U32(ctx.r31.u32 + 14684, ctx.r29.u32);
	// b 0x8813d34c
	goto loc_8813D34C;
loc_8813D338:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8813d348
	if (!ctx.cr6.eq) goto loc_8813D348;
	// stw r11,14684(r31)
	ctx.current_instruction = 0x8813D340;
	REX_STORE_U32(ctx.r31.u32 + 14684, ctx.r11.u32);
	// b 0x8813d34c
	goto loc_8813D34C;
loc_8813D348:
	// stw r24,14684(r31)
	ctx.current_instruction = 0x8813D348;
	REX_STORE_U32(ctx.r31.u32 + 14684, ctx.r24.u32);
loc_8813D34C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813cd20
	ctx.lr = 0x8813D354;
	sub_8813CD20(ctx, base);
loc_8813D354:
	// stw r3,0(r26)
	ctx.current_instruction = 0x8813D354;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8813d378
	if (!ctx.cr6.eq) goto loc_8813D378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ca078
	ctx.lr = 0x8813D368;
	sub_880CA078(ctx, base);
loc_8813D368:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8813D370:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	ctx.current_instruction = 0x8813D374;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8813D378:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88141048) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88141048;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88141048) {
			switch (rex_dispatch_address) {
				case 0x88141064:
				case 0x8814106C:
				case 0x88141074:
				case 0x8814107C:
				case 0x88141084:
				case 0x8814108C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88141048;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88141064: goto loc_88141064;
		case 0x8814106C: goto loc_8814106C;
		case 0x88141074: goto loc_88141074;
		case 0x8814107C: goto loc_8814107C;
		case 0x88141084: goto loc_88141084;
		case 0x8814108C: goto loc_8814108C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814104C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88141050;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88141054;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.current_instruction = 0x8814105C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x88125f38
	ctx.lr = 0x88141064;
	sub_88125F38(ctx, base);
loc_88141064:
	// lwz r3,32(r31)
	ctx.current_instruction = 0x88141064;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x88125f38
	ctx.lr = 0x8814106C;
	sub_88125F38(ctx, base);
loc_8814106C:
	// lwz r3,36(r31)
	ctx.current_instruction = 0x8814106C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x88125f38
	ctx.lr = 0x88141074;
	sub_88125F38(ctx, base);
loc_88141074:
	// lwz r3,40(r31)
	ctx.current_instruction = 0x88141074;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x88125f38
	ctx.lr = 0x8814107C;
	sub_88125F38(ctx, base);
loc_8814107C:
	// lwz r3,24(r31)
	ctx.current_instruction = 0x8814107C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x88125f38
	ctx.lr = 0x88141084;
	sub_88125F38(ctx, base);
loc_88141084:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x88141084;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x88125f38
	ctx.lr = 0x8814108C;
	sub_88125F38(ctx, base);
loc_8814108C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88141090;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88141098;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881417A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881417A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881417A8) {
			switch (rex_dispatch_address) {
				case 0x881417B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881417A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881417B0: goto loc_881417B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881417B0;
	__savegprlr_14(ctx, base);
loc_881417B0:
	// lwz r11,32(r3)
	ctx.current_instruction = 0x881417B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,36(r3)
	ctx.current_instruction = 0x881417B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,4(r3)
	ctx.current_instruction = 0x881417C4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,48(r3)
	ctx.current_instruction = 0x881417C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,20(r1)
	ctx.current_instruction = 0x881417D4;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,-244(r1)
	ctx.current_instruction = 0x881417DC;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,-228(r1)
	ctx.current_instruction = 0x881417E4;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r6,-248(r1)
	ctx.current_instruction = 0x881417EC;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,-164(r1)
	ctx.current_instruction = 0x881417F4;
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,-224(r1)
	ctx.current_instruction = 0x881417FC;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,-232(r1)
	ctx.current_instruction = 0x88141804;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r5,-252(r1)
	ctx.current_instruction = 0x8814180C;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r31,-236(r1)
	ctx.current_instruction = 0x88141814;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r31.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r4,-256(r1)
	ctx.current_instruction = 0x8814181C;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,-240(r1)
	ctx.current_instruction = 0x88141824;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r8.u32);
	// stw r10,-216(r1)
	ctx.current_instruction = 0x88141828;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// stw r28,-180(r1)
	ctx.current_instruction = 0x88141830;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r28.u32);
	// stw r27,-176(r1)
	ctx.current_instruction = 0x88141834;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r27.u32);
	// stw r26,-172(r1)
	ctx.current_instruction = 0x88141838;
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r26.u32);
	// stw r25,-168(r1)
	ctx.current_instruction = 0x8814183C;
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r25.u32);
	// stw r9,-220(r1)
	ctx.current_instruction = 0x88141840;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// blt cr6,0x88141a78
	if (ctx.cr6.lt) goto loc_88141A78;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// stw r9,-184(r1)
	ctx.current_instruction = 0x8814184C;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r9.u32);
loc_88141850:
	// lhz r3,2(r11)
	ctx.current_instruction = 0x88141850;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x88141854;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwz r5,0(r10)
	ctx.current_instruction = 0x8814185C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhz r9,8(r11)
	ctx.current_instruction = 0x88141864;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// stw r3,-204(r1)
	ctx.current_instruction = 0x88141868;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r7,16(r10)
	ctx.current_instruction = 0x88141870;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r28,26(r11)
	ctx.current_instruction = 0x88141874;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// stw r5,-208(r1)
	ctx.current_instruction = 0x88141878;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// lhz r26,30(r11)
	ctx.current_instruction = 0x8814187C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// lhz r5,20(r11)
	ctx.current_instruction = 0x88141880;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r8,10(r11)
	ctx.current_instruction = 0x88141884;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r25,20(r10)
	ctx.current_instruction = 0x88141888;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lhz r4,18(r11)
	ctx.current_instruction = 0x8814188C;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r27,28(r11)
	ctx.current_instruction = 0x88141890;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lwz r23,24(r10)
	ctx.current_instruction = 0x88141894;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwz r21,28(r10)
	ctx.current_instruction = 0x8814189C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lhz r30,24(r11)
	ctx.current_instruction = 0x881418A4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lhz r6,4(r11)
	ctx.current_instruction = 0x881418AC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// stw r26,-196(r1)
	ctx.current_instruction = 0x881418B0;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r26.u32);
	// stw r9,-212(r1)
	ctx.current_instruction = 0x881418B4;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// lwz r26,-256(r1)
	ctx.current_instruction = 0x881418B8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lhz r7,12(r11)
	ctx.current_instruction = 0x881418BC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,14(r11)
	ctx.current_instruction = 0x881418C0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r16,52(r10)
	ctx.current_instruction = 0x881418C4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r24,4(r10)
	ctx.current_instruction = 0x881418C8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r18,48(r10)
	ctx.current_instruction = 0x881418CC;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r15,36(r10)
	ctx.current_instruction = 0x881418D0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// extsh r19,r6
	ctx.r19.s64 = ctx.r6.s16;
	// stw r26,-188(r1)
	ctx.current_instruction = 0x881418D8;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r26.u32);
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// lwz r28,60(r10)
	ctx.current_instruction = 0x881418E0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r31,6(r11)
	ctx.current_instruction = 0x881418E8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r29,16(r11)
	ctx.current_instruction = 0x881418F0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// stw r5,-256(r1)
	ctx.current_instruction = 0x881418F4;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r5,r8,r25
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// lwz r8,-204(r1)
	ctx.current_instruction = 0x88141900;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// stw r28,-200(r1)
	ctx.current_instruction = 0x88141904;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r28.u32);
	// lwz r28,44(r10)
	ctx.current_instruction = 0x88141908;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stw r6,-204(r1)
	ctx.current_instruction = 0x8814190C;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r6.u32);
	// lwz r22,8(r10)
	ctx.current_instruction = 0x88141910;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r20,12(r10)
	ctx.current_instruction = 0x88141914;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r17,32(r10)
	ctx.current_instruction = 0x88141918;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r28,-192(r1)
	ctx.current_instruction = 0x8814191C;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r28.u32);
	// lwz r28,-208(r1)
	ctx.current_instruction = 0x88141920;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// stw r4,-208(r1)
	ctx.current_instruction = 0x88141924;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// lwz r3,-212(r1)
	ctx.current_instruction = 0x8814192C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r14,40(r10)
	ctx.current_instruction = 0x88141934;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// stw r27,-212(r1)
	ctx.current_instruction = 0x88141938;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r27.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,56(r10)
	ctx.current_instruction = 0x88141944;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mullw r6,r7,r23
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r23.s32);
	// lhz r11,22(r11)
	ctx.current_instruction = 0x8814194C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// lwz r3,-204(r1)
	ctx.current_instruction = 0x88141950;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// mullw r7,r9,r21
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r21.s32);
	// mullw r9,r3,r16
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r16.s32);
	// lwz r3,-208(r1)
	ctx.current_instruction = 0x8814195C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// mullw r26,r8,r24
	ctx.r26.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r24.s32);
	// mullw r8,r30,r18
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r18.s32);
	// mullw r30,r3,r15
	ctx.r30.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r15.s32);
	// lwz r3,-212(r1)
	ctx.current_instruction = 0x88141970;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwz r3,-256(r1)
	ctx.current_instruction = 0x88141980;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mullw r27,r19,r22
	ctx.r27.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r22.s32);
	// mullw r28,r31,r20
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r20.s32);
	// mullw r29,r29,r17
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r17.s32);
	// lwz r25,-196(r1)
	ctx.current_instruction = 0x88141994;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// mullw r31,r3,r14
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r14.s32);
	// stw r11,-196(r1)
	ctx.current_instruction = 0x8814199C;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lwz r3,-200(r1)
	ctx.current_instruction = 0x881419A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// mullw r11,r25,r3
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r3.s32);
	// lwz r3,-192(r1)
	ctx.current_instruction = 0x881419A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r30,-232(r1)
	ctx.current_instruction = 0x881419B0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r25,-196(r1)
	ctx.current_instruction = 0x881419B4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r29,-228(r1)
	ctx.current_instruction = 0x881419C0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// mullw r3,r25,r3
	ctx.r3.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r3.s32);
	// lwz r25,-188(r1)
	ctx.current_instruction = 0x881419C8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-236(r1)
	ctx.current_instruction = 0x881419D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,-240(r1)
	ctx.current_instruction = 0x881419D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r9,-252(r1)
	ctx.current_instruction = 0x881419E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwz r3,-248(r1)
	ctx.current_instruction = 0x881419E8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + ctx.r27.u64;
	// stw r31,-236(r1)
	ctx.current_instruction = 0x881419F0;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r31.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,-244(r1)
	ctx.current_instruction = 0x881419F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r9,-224(r1)
	ctx.current_instruction = 0x88141A00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lwz r28,-184(r1)
	ctx.current_instruction = 0x88141A08;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,-216(r1)
	ctx.current_instruction = 0x88141A10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lwz r3,-220(r1)
	ctx.current_instruction = 0x88141A18;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r5,-252(r1)
	ctx.current_instruction = 0x88141A20;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// stw r6,-248(r1)
	ctx.current_instruction = 0x88141A28;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// stw r7,-244(r1)
	ctx.current_instruction = 0x88141A30;
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r7.u32);
	// add r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 + ctx.r25.u64;
	// stw r8,-240(r1)
	ctx.current_instruction = 0x88141A38;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r8.u32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stw r30,-232(r1)
	ctx.current_instruction = 0x88141A40;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r30.u32);
	// stw r4,-256(r1)
	ctx.current_instruction = 0x88141A44;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r4.u32);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// stw r29,-228(r1)
	ctx.current_instruction = 0x88141A4C;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r29.u32);
	// stw r11,-224(r1)
	ctx.current_instruction = 0x88141A50;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// stw r9,-220(r1)
	ctx.current_instruction = 0x88141A54;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r9.u32);
	// stw r10,-216(r1)
	ctx.current_instruction = 0x88141A58;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// blt cr6,0x88141850
	if (ctx.cr6.lt) goto loc_88141850;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88141A60;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r28,-180(r1)
	ctx.current_instruction = 0x88141A64;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r27,-176(r1)
	ctx.current_instruction = 0x88141A68;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r26,-172(r1)
	ctx.current_instruction = 0x88141A6C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r25,-168(r1)
	ctx.current_instruction = 0x88141A70;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r24,-164(r1)
	ctx.current_instruction = 0x88141A74;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
loc_88141A78:
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x88141b10
	if (!ctx.cr6.lt) goto loc_88141B10;
	// lhz r27,8(r11)
	ctx.current_instruction = 0x88141A80;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r9,10(r11)
	ctx.current_instruction = 0x88141A84;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r24,r27
	ctx.r24.s64 = ctx.r27.s16;
	// lhz r27,4(r11)
	ctx.current_instruction = 0x88141A8C;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r25,12(r11)
	ctx.current_instruction = 0x88141A90;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r28,2(r11)
	ctx.current_instruction = 0x88141A98;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r21,r27
	ctx.r21.s64 = ctx.r27.s16;
	// lhz r26,0(r11)
	ctx.current_instruction = 0x88141AA0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r22,r25
	ctx.r22.s64 = ctx.r25.s16;
	// lhz r23,14(r11)
	ctx.current_instruction = 0x88141AA8;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// lhz r11,6(r11)
	ctx.current_instruction = 0x88141AB0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lwz r27,20(r10)
	ctx.current_instruction = 0x88141AB8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lwz r25,4(r10)
	ctx.current_instruction = 0x88141AC0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r20,r11
	ctx.r20.s64 = ctx.r11.s16;
	// lwz r11,16(r10)
	ctx.current_instruction = 0x88141AC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mullw r27,r9,r27
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x88141AD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,24(r10)
	ctx.current_instruction = 0x88141AD4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r18,8(r10)
	ctx.current_instruction = 0x88141AD8;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r17,28(r10)
	ctx.current_instruction = 0x88141ADC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,12(r10)
	ctx.current_instruction = 0x88141AE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mullw r25,r28,r25
	ctx.r25.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// mullw r28,r24,r11
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r11.s32);
	// mullw r24,r26,r9
	ctx.r24.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mullw r9,r22,r19
	ctx.r9.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// mullw r26,r21,r18
	ctx.r26.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r18.s32);
	// mullw r11,r23,r17
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r17.s32);
	// mullw r10,r20,r10
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r10.s32);
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88141B10:
	// lwz r11,24(r3)
	ctx.current_instruction = 0x88141B10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.current_instruction = 0x88141B14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sraw r3,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r3.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A398) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A398;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A398) {
			switch (rex_dispatch_address) {
				case 0x8814A3A0:
				case 0x8814A3D4:
				case 0x8814A3F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A398;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A3A0: goto loc_8814A3A0;
		case 0x8814A3D4: goto loc_8814A3D4;
		case 0x8814A3F0: goto loc_8814A3F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A3A0;
	__savegprlr_28(ctx, base);
loc_8814A3A0:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A3A0;
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
	// bl 0x88149730
	ctx.lr = 0x8814A3D4;
	sub_88149730(ctx, base);
loc_8814A3D4:
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
	ctx.lr = 0x8814A3F0;
	sub_88149E68(ctx, base);
loc_8814A3F0:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A800) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A800;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A800) {
			switch (rex_dispatch_address) {
				case 0x8814A808:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A800;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A808: goto loc_8814A808;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x8814A808;
	__savegprlr_21(ctx, base);
loc_8814A808:
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// sth r11,-98(r1)
	ctx.current_instruction = 0x8814A818;
	REX_STORE_U16(ctx.r1.u32 + -98, ctx.r11.u16);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r11,r7,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v11,v11,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0x100))));
	// bne cr6,0x8814aa2c
	if (!ctx.cr6.eq) goto loc_8814AA2C;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v62,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vperm128 v4,v63,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r8,r4
	ctx.r29.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v56,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v59,v58,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v54,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v52,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r28,r7,r4
	ctx.r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vaddshs v31,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v57,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v53,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v56,v52,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v6,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v51,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vperm128 v2,v57,v53,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v31,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v49,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v48,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v51,v50,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// vsrah v29,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v2,v48,v49,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vaddshs v1,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v31,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vslh v27,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lvx128 v46,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vpkshus128 v45,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vslh v3,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r27,r5,r6
	ctx.r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vslh v2,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// vslh v1,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vaddshs v31,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vperm128 v30,v47,v46,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vaddshs v29,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v25,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v28,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v27,v3,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v45,r0,r5
	ctx.current_instruction = 0x8814A98C;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vslh v24,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvewx128 v45,r5,r10
	ctx.current_instruction = 0x8814A994;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v4,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v22,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v19,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v18,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v44,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vsrah v17,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v14,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v0,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v13,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v42,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vsrah v11,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v41,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// stvewx128 v44,r5,r6
	ctx.current_instruction = 0x8814A9E0;
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v10,v0,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v44,r27,r10
	ctx.current_instruction = 0x8814A9E8;
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvewx128 v43,r0,r30
	ctx.current_instruction = 0x8814A9F0;
	ea = (ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v39,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v43,r30,r10
	ctx.current_instruction = 0x8814A9F8;
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r30,r6
	ctx.current_instruction = 0x8814A9FC;
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v38,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvewx128 v42,r8,r10
	ctx.current_instruction = 0x8814AA04;
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r31
	ctx.current_instruction = 0x8814AA08;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r31,r10
	ctx.current_instruction = 0x8814AA0C;
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r31,r6
	ctx.current_instruction = 0x8814AA10;
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r4,r10
	ctx.current_instruction = 0x8814AA14;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r4,r6
	ctx.current_instruction = 0x8814AA18;
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r9,r10
	ctx.current_instruction = 0x8814AA1C;
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r9,r6
	ctx.current_instruction = 0x8814AA20;
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r7,r10
	ctx.current_instruction = 0x8814AA24;
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_8814AA2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8814acbc
	if (!ctx.cr6.gt) goto loc_8814ACBC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r24,r4,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r6,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r6,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8814AA60:
	// add r10,r25,r3
	ctx.r10.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lvx128 v37,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r26,r3
	ctx.r9.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lvx128 v35,r26,r3
	ea = (ctx.r26.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v34,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v33,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v62,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v37,v33,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v61,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r7,r4
	ctx.r29.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r28,r22,r5
	ctx.r28.u64 = ctx.r22.u64 + ctx.r5.u64;
	// lvsl v4,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r27,r23,r5
	ctx.r27.u64 = ctx.r23.u64 + ctx.r5.u64;
	// lvx128 v36,r25,r3
	ea = (ctx.r25.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v35,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v34,v61,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v32,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v36,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v32,v60,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v53,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vaddshs v2,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v59,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vaddshs v26,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vperm128 v5,v58,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v55,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r24,r3
	ctx.r9.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lvsl v7,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vaddshs v1,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v30,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vmrghb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v4,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v20,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v24,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v7,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vaddshs v23,v29,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v22,v28,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r24,r3
	ea = (ctx.r24.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r28,r6
	ctx.r10.u64 = ctx.r28.u64 + ctx.r6.u64;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v26,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v51,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v29,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v28,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v22,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v19,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v24,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrglb v21,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v20,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// vaddshs v18,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v15,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v16,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v10,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v9,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vslh v14,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v7,v4,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v6,v26,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v8,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v23,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v2,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v22,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v20,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v14,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v10,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v50,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v8,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v6,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v49,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v4,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v2,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v1,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v48,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v31,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v49,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v47,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v27,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v46,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsrah v25,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v48,r23,r5
	ea = (ctx.r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v24,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vpkshus128 v44,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// stvx128 v47,r27,r6
	ea = (ctx.r27.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v43,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvx128 v46,r22,r5
	ea = (ctx.r22.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r21,r5
	ctx.r5.u64 = ctx.r21.u64 + ctx.r5.u64;
	// stvx128 v45,r28,r6
	ea = (ctx.r28.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v44,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v43,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x8814aa60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8814AA60;
loc_8814ACBC:
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816E188) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816E188;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816E188) {
			switch (rex_dispatch_address) {
				case 0x8816E190:
				case 0x8816E1C0:
				case 0x8816E274:
				case 0x8816E2BC:
				case 0x8816E348:
				case 0x8816E3E0:
				case 0x8816E428:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816E188;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816E190: goto loc_8816E190;
		case 0x8816E1C0: goto loc_8816E1C0;
		case 0x8816E274: goto loc_8816E274;
		case 0x8816E2BC: goto loc_8816E2BC;
		case 0x8816E348: goto loc_8816E348;
		case 0x8816E3E0: goto loc_8816E3E0;
		case 0x8816E428: goto loc_8816E428;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8816E190;
	__savegprlr_24(ctx, base);
loc_8816E190:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8816E190;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8816E194;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,10224
	ctx.r27.s64 = ctx.r11.s64 + 10224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// ld r11,0(r31)
	ctx.current_instruction = 0x8816E1AC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r30,r27
	ctx.current_instruction = 0x8816E1B8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x88156500
	ctx.lr = 0x8816E1C0;
	sub_88156500(ctx, base);
loc_8816E1C0:
	// addi r9,r27,1
	ctx.r9.s64 = ctx.r27.s64 + 1;
	// li r25,3
	ctx.r25.s64 = 3;
	// lbzx r11,r30,r9
	ctx.current_instruction = 0x8816E1C8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816e1d8
	if (!ctx.cr6.eq) goto loc_8816E1D8;
	// stw r25,20(r31)
	ctx.current_instruction = 0x8816E1D4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_8816E1D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic. r28,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r28.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8816e2c8
	if (ctx.cr0.eq) goto loc_8816E2C8;
	// lwz r30,84(r26)
	ctx.current_instruction = 0x8816E1E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,3616(r26)
	ctx.current_instruction = 0x8816E1EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3616);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816E1F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8816e210
	if (!ctx.cr6.gt) goto loc_8816E210;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8816e2cc
	goto loc_8816E2CC;
loc_8816E210:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8816e224
	if (!ctx.cr6.eq) goto loc_8816E224;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8816e2cc
	goto loc_8816E2CC;
loc_8816E224:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816e284
	if (!ctx.cr6.gt) goto loc_8816E284;
loc_8816E22C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816e284
	if (ctx.cr6.eq) goto loc_8816E284;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x8816E238;
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
	ctx.current_instruction = 0x8816E25C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x8816E264;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8816e274
	if (!ctx.cr0.lt) goto loc_8816E274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E274;
	sub_88156678(ctx, base);
loc_8816E274:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816E274;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816e22c
	if (ctx.cr6.gt) goto loc_8816E22C;
loc_8816E284:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8816E288;
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
	ctx.current_instruction = 0x8816E2A0;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x8816E2AC;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8816e2bc
	if (!ctx.cr0.lt) goto loc_8816E2BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E2BC;
	sub_88156678(ctx, base);
loc_8816E2BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x8816e2cc
	goto loc_8816E2CC;
loc_8816E2C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8816E2CC:
	// lwz r10,3624(r26)
	ctx.current_instruction = 0x8816E2CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 3624);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8816e2e8
	if (!ctx.cr6.eq) goto loc_8816E2E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816e2e8
	if (!ctx.cr6.eq) goto loc_8816E2E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8816e328
	goto loc_8816E328;
loc_8816E2E8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8816e2f8
	if (!ctx.cr6.eq) goto loc_8816E2F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8816e328
	goto loc_8816E328;
loc_8816E2F8:
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// xor r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8816e324
	if (ctx.cr6.gt) goto loc_8816E324;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8816E324:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_8816E328:
	// stb r11,0(r24)
	ctx.current_instruction = 0x8816E328;
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// lwz r31,84(r26)
	ctx.current_instruction = 0x8816E32C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,0(r31)
	ctx.current_instruction = 0x8816E334;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// rldicl r9,r10,13,51
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 13) & 0x1FFF;
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r30,r27
	ctx.current_instruction = 0x8816E340;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x88156500
	ctx.lr = 0x8816E348;
	sub_88156500(ctx, base);
loc_8816E348:
	// addi r8,r27,1
	ctx.r8.s64 = ctx.r27.s64 + 1;
	// lbzx r11,r30,r8
	ctx.current_instruction = 0x8816E34C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816e35c
	if (!ctx.cr6.eq) goto loc_8816E35C;
	// stw r25,20(r31)
	ctx.current_instruction = 0x8816E358;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_8816E35C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic. r28,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r28.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8816e430
	if (ctx.cr0.eq) goto loc_8816E430;
	// lwz r30,84(r26)
	ctx.current_instruction = 0x8816E368;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,3616(r26)
	ctx.current_instruction = 0x8816E370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3616);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816E378;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x8816e430
	if (ctx.cr6.gt) goto loc_8816E430;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8816e430
	if (ctx.cr6.eq) goto loc_8816E430;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816e3f0
	if (!ctx.cr6.gt) goto loc_8816E3F0;
loc_8816E398:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816e3f0
	if (ctx.cr6.eq) goto loc_8816E3F0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x8816E3A4;
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
	ctx.current_instruction = 0x8816E3C8;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x8816E3D0;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x8816e3e0
	if (!ctx.cr0.lt) goto loc_8816E3E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E3E0;
	sub_88156678(ctx, base);
loc_8816E3E0:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x8816E3E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816e398
	if (ctx.cr6.gt) goto loc_8816E398;
loc_8816E3F0:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x8816E3F4;
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
	ctx.current_instruction = 0x8816E40C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x8816E418;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x8816e428
	if (!ctx.cr0.lt) goto loc_8816E428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E428;
	sub_88156678(ctx, base);
loc_8816E428:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x8816e434
	goto loc_8816E434;
loc_8816E430:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8816E434:
	// lwz r10,3624(r26)
	ctx.current_instruction = 0x8816E434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 3624);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8816e458
	if (!ctx.cr6.eq) goto loc_8816E458;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816e458
	if (!ctx.cr6.eq) goto loc_8816E458;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r24)
	ctx.current_instruction = 0x8816E44C;
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8816E458:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8816e46c
	if (!ctx.cr6.eq) goto loc_8816E46C;
	// stb r28,1(r24)
	ctx.current_instruction = 0x8816E460;
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
loc_8816E46C:
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// xor r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8816e498
	if (ctx.cr6.gt) goto loc_8816E498;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8816E498:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stb r11,1(r24)
	ctx.current_instruction = 0x8816E49C;
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88177F88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88177F88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88177F88) {
			switch (rex_dispatch_address) {
				case 0x88177F90:
				case 0x88178064:
				case 0x8817809C:
				case 0x881780D4:
				case 0x88178118:
				case 0x88178158:
				case 0x881781D4:
				case 0x881781E4:
				case 0x88178240:
				case 0x88178250:
				case 0x881782A8:
				case 0x881782B8:
				case 0x88178318:
				case 0x88178328:
				case 0x88178390:
				case 0x881783A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88177F88;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88177F90: goto loc_88177F90;
		case 0x88178064: goto loc_88178064;
		case 0x8817809C: goto loc_8817809C;
		case 0x881780D4: goto loc_881780D4;
		case 0x88178118: goto loc_88178118;
		case 0x88178158: goto loc_88178158;
		case 0x881781D4: goto loc_881781D4;
		case 0x881781E4: goto loc_881781E4;
		case 0x88178240: goto loc_88178240;
		case 0x88178250: goto loc_88178250;
		case 0x881782A8: goto loc_881782A8;
		case 0x881782B8: goto loc_881782B8;
		case 0x88178318: goto loc_88178318;
		case 0x88178328: goto loc_88178328;
		case 0x88178390: goto loc_88178390;
		case 0x881783A0: goto loc_881783A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050814
	ctx.lr = 0x88177F90;
	__savegprlr_15(ctx, base);
loc_88177F90:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88177F90;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// lwz r19,308(r1)
	ctx.current_instruction = 0x88177FEC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// lwz r20,316(r1)
	ctx.current_instruction = 0x88177FF8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x881783cc
	if (ctx.cr6.eq) goto loc_881783CC;
	// lwz r11,4(r3)
	ctx.current_instruction = 0x88178004;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88178174
	if (!ctx.cr6.gt) goto loc_88178174;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8817801C:
	// lwz r10,20(r24)
	ctx.current_instruction = 0x8817801C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r9,24(r24)
	ctx.current_instruction = 0x88178020;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r8,28(r24)
	ctx.current_instruction = 0x88178024;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r7,32(r24)
	ctx.current_instruction = 0x88178028;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r11,0(r24)
	ctx.current_instruction = 0x8817802C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r30,r26,r10
	ctx.current_instruction = 0x88178030;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lwzx r29,r26,r9
	ctx.current_instruction = 0x88178034;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	// lwzx r28,r26,r8
	ctx.current_instruction = 0x88178038;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// lwzx r25,r26,r7
	ctx.current_instruction = 0x88178040;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// bge cr6,0x8817804c
	if (!ctx.cr6.lt) goto loc_8817804C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8817804C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88178064
	if (!ctx.cr6.gt) goto loc_88178064;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r31,r23
	ctx.r4.u64 = ctx.r31.u64 + ctx.r23.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178064;
	sub_880547A0(ctx, base);
loc_88178064:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r28.u64;
	// lwz r10,0(r24)
	ctx.current_instruction = 0x88178068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & ctx.r28.u64;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8817809c
	if (!ctx.cr0.gt) goto loc_8817809C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x880547a0
	ctx.lr = 0x8817809C;
	sub_880547A0(ctx, base);
loc_8817809C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// bgt cr6,0x881780ac
	if (ctx.cr6.gt) goto loc_881780AC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_881780AC:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881780AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x881780bc
	if (!ctx.cr6.lt) goto loc_881780BC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_881780BC:
	// subf. r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x881780d4
	if (!ctx.cr0.gt) goto loc_881780D4;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x881780D4;
	sub_880547A0(ctx, base);
loc_881780D4:
	// subfic r10,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r30.u64;
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881780D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// bge cr6,0x881780f8
	if (!ctx.cr6.lt) goto loc_881780F8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x881780fc
	goto loc_881780FC;
loc_881780F8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_881780FC:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r5,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r5.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x88178118
	if (!ctx.cr0.gt) goto loc_88178118;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178118;
	sub_880547A0(ctx, base);
loc_88178118:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x88178118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817812c
	if (ctx.cr6.lt) goto loc_8817812C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_8817812C:
	// subfic r11,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r25.u64;
	// rlwinm r9,r25,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 & ctx.r25.u64;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r5,r7,1
	ctx.xer.ca = ctx.r7.u32 > 4294967294;
	ctx.r5.s64 = ctx.r7.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x88178158
	if (!ctx.cr0.gt) goto loc_88178158;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178158;
	sub_880547A0(ctx, base);
loc_88178158:
	// lwz r10,0(r24)
	ctx.current_instruction = 0x88178158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r11,4(r24)
	ctx.current_instruction = 0x88178160;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8817801c
	if (ctx.cr6.lt) goto loc_8817801C;
loc_88178174:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881783c0
	if (!ctx.cr6.gt) goto loc_881783C0;
	// li r23,0
	ctx.r23.s64 = 0;
loc_88178188:
	// lwz r10,20(r24)
	ctx.current_instruction = 0x88178188;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r9,24(r24)
	ctx.current_instruction = 0x8817818C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r8,28(r24)
	ctx.current_instruction = 0x88178190;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// lwz r7,32(r24)
	ctx.current_instruction = 0x88178194;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r11,0(r24)
	ctx.current_instruction = 0x88178198;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r28,r23,r10
	ctx.current_instruction = 0x8817819C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// lwzx r27,r23,r9
	ctx.current_instruction = 0x881781A0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// lwzx r26,r23,r8
	ctx.current_instruction = 0x881781A4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// lwzx r25,r23,r7
	ctx.current_instruction = 0x881781AC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r7.u32);
	// bge cr6,0x881781b8
	if (!ctx.cr6.lt) goto loc_881781B8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_881781B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi. r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x881781e4
	if (!ctx.cr0.gt) goto loc_881781E4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r18
	ctx.r4.u64 = ctx.r29.u64 + ctx.r18.u64;
	// add r3,r29,r19
	ctx.r3.u64 = ctx.r29.u64 + ctx.r19.u64;
	// bl 0x880547a0
	ctx.lr = 0x881781D4;
	sub_880547A0(ctx, base);
loc_881781D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r17
	ctx.r4.u64 = ctx.r29.u64 + ctx.r17.u64;
	// add r3,r29,r20
	ctx.r3.u64 = ctx.r29.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x881781E4;
	sub_880547A0(ctx, base);
loc_881781E4:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881781E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881781fc
	if (ctx.cr6.eq) goto loc_881781FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x88178200
	goto loc_88178200;
loc_881781FC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_88178200:
	// subfic r10,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r26.u64;
	// rlwinm r9,r26,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r26
	ctx.r7.u64 = ctx.r8.u64 & ctx.r26.u64;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi. r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x88178250
	if (!ctx.cr0.gt) goto loc_88178250;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r31,r18
	ctx.r4.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r3,r31,r19
	ctx.r3.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178240;
	sub_880547A0(ctx, base);
loc_88178240:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178250;
	sub_880547A0(ctx, base);
loc_88178250:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// bgt cr6,0x88178260
	if (ctx.cr6.gt) goto loc_88178260;
	// li r11,0
	ctx.r11.s64 = 0;
loc_88178260:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88178270
	if (ctx.cr6.eq) goto loc_88178270;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_88178270:
	// lwz r10,0(r24)
	ctx.current_instruction = 0x88178270;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88178280
	if (!ctx.cr6.lt) goto loc_88178280;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_88178280:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi. r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881782b8
	if (!ctx.cr0.gt) goto loc_881782B8;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r31,r18
	ctx.r4.u64 = ctx.r31.u64 + ctx.r18.u64;
	// add r3,r31,r19
	ctx.r3.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x880547a0
	ctx.lr = 0x881782A8;
	sub_880547A0(ctx, base);
loc_881782A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x881782B8;
	sub_880547A0(ctx, base);
loc_881782B8:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r28.u64;
	// rlwinm r10,r28,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// addme r9,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 & ctx.r28.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881782d8
	if (ctx.cr6.eq) goto loc_881782D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_881782D8:
	// lwz r10,0(r24)
	ctx.current_instruction = 0x881782D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x881782ec
	if (!ctx.cr6.lt) goto loc_881782EC;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x881782f0
	goto loc_881782F0;
loc_881782EC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_881782F0:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi. r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x88178328
	if (!ctx.cr0.gt) goto loc_88178328;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r31,r16
	ctx.r4.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r3,r31,r19
	ctx.r3.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178318;
	sub_880547A0(ctx, base);
loc_88178318:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178328;
	sub_880547A0(ctx, base);
loc_88178328:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x88178328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8817833c
	if (!ctx.cr6.lt) goto loc_8817833C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x88178340
	goto loc_88178340;
loc_8817833C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88178340:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x88178350
	if (ctx.cr6.eq) goto loc_88178350;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88178350:
	// subfic r10,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r25.u64;
	// rlwinm r9,r25,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r25
	ctx.r7.u64 = ctx.r8.u64 & ctx.r25.u64;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// srawi. r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x881783a0
	if (!ctx.cr0.gt) goto loc_881783A0;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r31,r16
	ctx.r4.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r3,r31,r19
	ctx.r3.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bl 0x880547a0
	ctx.lr = 0x88178390;
	sub_880547A0(ctx, base);
loc_88178390:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x880547a0
	ctx.lr = 0x881783A0;
	sub_880547A0(ctx, base);
loc_881783A0:
	// lwz r11,0(r24)
	ctx.current_instruction = 0x881783A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// lwz r10,4(r24)
	ctx.current_instruction = 0x881783A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x88178188
	if (ctx.cr6.lt) goto loc_88178188;
loc_881783C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
loc_881783CC:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050864
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817FD58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817FD58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817FD58) {
			switch (rex_dispatch_address) {
				case 0x8817FD60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817FD58;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x8817FD60: goto loc_8817FD60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8817FD60;
	__savegprlr_14(ctx, base);
loc_8817FD60:
	// lhz r11,50(r4)
	ctx.current_instruction = 0x8817FD60;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r7,52(r1)
	ctx.current_instruction = 0x8817FD68;
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r28,r11,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,1316(r4)
	ctx.current_instruction = 0x8817FD74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 1316);
	// rlwinm r9,r11,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// lwz r31,1312(r4)
	ctx.current_instruction = 0x8817FD7C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// mullw r10,r28,r6
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// stw r4,28(r1)
	ctx.current_instruction = 0x8817FD84;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r28,-192(r1)
	ctx.current_instruction = 0x8817FD88;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r28.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r18,r5,r3
	ctx.r18.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r16,r30,r31
	ctx.r16.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x8817fdc4
	if (ctx.cr6.eq) goto loc_8817FDC4;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8817FDC4:
	// stw r10,-236(r1)
	ctx.current_instruction = 0x8817FDC4;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// stw r6,-208(r1)
	ctx.current_instruction = 0x8817FDCC;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// bge cr6,0x881803d4
	if (!ctx.cr6.lt) goto loc_881803D4;
	// rlwinm r11,r6,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// rlwinm r31,r10,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r9,-200(r1)
	ctx.current_instruction = 0x8817FDE8;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r9.u32);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// stw r6,-204(r1)
	ctx.current_instruction = 0x8817FDF0;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r6.u32);
	// rlwinm r14,r8,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,-196(r1)
	ctx.current_instruction = 0x8817FDF8;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r31.u32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,11032
	ctx.r11.s64 = ctx.r11.s64 + 11032;
	// b 0x8817fe20
	goto loc_8817FE20;
loc_8817FE10:
	// lwz r14,-220(r1)
	ctx.current_instruction = 0x8817FE10;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r8,-216(r1)
	ctx.current_instruction = 0x8817FE14;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r31,-196(r1)
	ctx.current_instruction = 0x8817FE18;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r6,-204(r1)
	ctx.current_instruction = 0x8817FE1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
loc_8817FE20:
	// lwz r5,-208(r1)
	ctx.current_instruction = 0x8817FE20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8817fe44
	if (ctx.cr6.eq) goto loc_8817FE44;
	// lwz r7,1304(r4)
	ctx.current_instruction = 0x8817FE2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 1304);
	// lwz r10,-200(r1)
	ctx.current_instruction = 0x8817FE30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwzx r10,r7,r10
	ctx.current_instruction = 0x8817FE34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8817fe48
	if (ctx.cr6.eq) goto loc_8817FE48;
loc_8817FE44:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8817FE48:
	// stw r10,-240(r1)
	ctx.current_instruction = 0x8817FE48;
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r30,348(r4)
	ctx.current_instruction = 0x8817FE50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// addi r7,r6,-128
	ctx.r7.s64 = ctx.r6.s64 + -128;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// dcbt r7,r30
	// dcbt r6,r30
	// addi r7,r6,128
	ctx.r7.s64 = ctx.r6.s64 + 128;
	// dcbt r7,r30
	// addi r7,r6,256
	ctx.r7.s64 = ctx.r6.s64 + 256;
	// dcbt r7,r30
	// addi r7,r31,-128
	ctx.r7.s64 = ctx.r31.s64 + -128;
	// lwz r30,352(r4)
	ctx.current_instruction = 0x8817FE78;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 352);
	// dcbt r7,r30
	// dcbt r31,r30
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x88180380
	if (ctx.cr6.eq) goto loc_88180380;
	// and r30,r10,r28
	ctx.r30.u64 = ctx.r10.u64 & ctx.r28.u64;
	// lwz r5,-236(r1)
	ctx.current_instruction = 0x8817FE94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,-224(r1)
	ctx.current_instruction = 0x8817FEA4;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// stw r10,-188(r1)
	ctx.current_instruction = 0x8817FEA8;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r30,-184(r1)
	ctx.current_instruction = 0x8817FEB0;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// add r30,r9,r14
	ctx.r30.u64 = ctx.r9.u64 + ctx.r14.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,-232(r1)
	ctx.current_instruction = 0x8817FEBC;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r30,-220(r1)
	ctx.current_instruction = 0x8817FEC4;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r30.u32);
	// stw r5,-228(r1)
	ctx.current_instruction = 0x8817FEC8;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r10,-216(r1)
	ctx.current_instruction = 0x8817FED0;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r9,-212(r1)
	ctx.current_instruction = 0x8817FED4;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
loc_8817FED8:
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r10,0(r16)
	ctx.current_instruction = 0x8817FEDC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r16.u32 + 0);
	// addi r9,r11,-192
	ctx.r9.s64 = ctx.r11.s64 + -192;
	// lwz r29,-188(r1)
	ctx.current_instruction = 0x8817FEE4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lwz r24,-184(r1)
	ctx.current_instruction = 0x8817FEEC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// addi r8,r11,-192
	ctx.r8.s64 = ctx.r11.s64 + -192;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r23,r11,-192
	ctx.r23.s64 = ctx.r11.s64 + -192;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// cntlzw r21,r7
	ctx.r21.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// addi r22,r11,-192
	ctx.r22.s64 = ctx.r11.s64 + -192;
	// and r27,r10,r12
	ctx.r27.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// clrldi r26,r27,56
	ctx.r26.u64 = ctx.r27.u64 & 0xFF;
	// rldicl r25,r27,56,56
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u64, 56) & 0xFF;
	// rldicl r3,r27,40,56
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u64, 40) & 0xFF;
	// rldicl r30,r27,48,56
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u64, 48) & 0xFF;
	// addi r10,r11,-192
	ctx.r10.s64 = ctx.r11.s64 + -192;
	// lbzx r9,r26,r9
	ctx.current_instruction = 0x8817FF28;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// lbzx r8,r25,r8
	ctx.current_instruction = 0x8817FF30;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// rldicl r5,r27,32,56
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFF;
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbzx r8,r3,r23
	ctx.current_instruction = 0x8817FF44;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// srawi r23,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r23.s64 = ctx.r15.s32 >> 31;
	// lbzx r10,r30,r10
	ctx.current_instruction = 0x8817FF4C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbzx r22,r5,r22
	ctx.current_instruction = 0x8817FF54;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r22.u32);
	// rlwinm r23,r23,3,28,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0x8;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// subf r23,r23,r16
	ctx.r23.u64 = ctx.r16.u64 - ctx.r23.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r19,r21,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 27) & 0x1;
	// ld r23,0(r23)
	ctx.current_instruction = 0x8817FF74;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r23.u32 + 0);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rldicl r9,r27,24,56
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u64, 24) & 0xFF;
	// and r20,r23,r12
	ctx.r20.u64 = ctx.r23.u64 & ctx.r12.u64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// addi r21,r11,-192
	ctx.r21.s64 = ctx.r11.s64 + -192;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// add r29,r29,r19
	ctx.r29.u64 = ctx.r29.u64 + ctx.r19.u64;
	// or r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 | ctx.r22.u64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// subf r24,r24,r16
	ctx.r24.u64 = ctx.r16.u64 - ctx.r24.u64;
	// lbzx r21,r9,r21
	ctx.current_instruction = 0x8817FFA8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r21.u32);
	// rlwinm r29,r29,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rldicl r27,r27,16,48
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u64, 16) & 0xFFFF;
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// ld r24,0(r24)
	ctx.current_instruction = 0x8817FFC0;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r24.u32 + 0);
	// rlwinm r22,r27,0,25,25
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	// ldx r10,r29,r10
	ctx.current_instruction = 0x8817FFC8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + ctx.r10.u32);
	// or r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 | ctx.r21.u64;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 & ctx.r10.u64;
	// and r27,r24,r12
	ctx.r27.u64 = ctx.r24.u64 & ctx.r12.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x881802f8
	if (!ctx.cr6.eq) goto loc_881802F8;
	// lwz r8,348(r4)
	ctx.current_instruction = 0x8817FFE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// li r21,255
	ctx.r21.s64 = 255;
	// li r22,255
	ctx.r22.s64 = 255;
	// add r10,r14,r8
	ctx.r10.u64 = ctx.r14.u64 + ctx.r8.u64;
	// li r23,255
	ctx.r23.s64 = 255;
	// li r24,255
	ctx.r24.s64 = 255;
	// lwzx r6,r14,r8
	ctx.current_instruction = 0x8817FFFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r8.u32);
	// li r29,255
	ctx.r29.s64 = 255;
	// li r28,255
	ctx.r28.s64 = 255;
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x88180094
	if (ctx.cr6.eq) goto loc_88180094;
	// lwz r31,-240(r1)
	ctx.current_instruction = 0x88180010;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x88180054
	if (!ctx.cr6.eq) goto loc_88180054;
	// lwz r31,-232(r1)
	ctx.current_instruction = 0x8818001C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwzx r31,r31,r8
	ctx.current_instruction = 0x88180020;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// subf. r31,r6,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88180054
	if (!ctx.cr0.eq) goto loc_88180054;
	// rldicl r31,r27,40,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u64, 40) & 0xFFFFFFFFFF;
	// std r11,-176(r1)
	ctx.current_instruction = 0x88180030;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r11.u64);
	// addi r21,r11,160
	ctx.r21.s64 = ctx.r11.s64 + 160;
	// lwz r4,28(r1)
	ctx.current_instruction = 0x88180038;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// lbzx r11,r9,r11
	ctx.current_instruction = 0x88180044;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r31,r31,r21
	ctx.current_instruction = 0x88180048;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r21.u32);
	// or r21,r31,r11
	ctx.r21.u64 = ctx.r31.u64 | ctx.r11.u64;
	// ld r11,-176(r1)
	ctx.current_instruction = 0x88180050;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
loc_88180054:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88180094
	if (!ctx.cr6.eq) goto loc_88180094;
	// lwz r31,-4(r10)
	ctx.current_instruction = 0x8818005C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf. r31,r6,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x88180094
	if (!ctx.cr0.eq) goto loc_88180094;
	// rldicl r31,r20,32,32
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u64, 32) & 0xFFFFFFFF;
	// std r10,-176(r1)
	ctx.current_instruction = 0x8818006C;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lwz r4,28(r1)
	ctx.current_instruction = 0x88180074;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r21,r21,24
	ctx.r21.u64 = ctx.r21.u32 & 0xFF;
	// lbzx r10,r9,r10
	ctx.current_instruction = 0x88180080;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r31,r31,r11
	ctx.current_instruction = 0x88180084;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// or r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 | ctx.r10.u64;
	// ld r10,-176(r1)
	ctx.current_instruction = 0x8818008C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// and r21,r31,r21
	ctx.r21.u64 = ctx.r31.u64 & ctx.r21.u64;
loc_88180094:
	// lwz r31,4(r10)
	ctx.current_instruction = 0x88180094;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// beq cr6,0x8818011c
	if (ctx.cr6.eq) goto loc_8818011C;
	// lwz r10,-240(r1)
	ctx.current_instruction = 0x881800A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881800e8
	if (!ctx.cr6.eq) goto loc_881800E8;
	// lwz r10,-232(r1)
	ctx.current_instruction = 0x881800AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x881800B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881800e8
	if (!ctx.cr0.eq) goto loc_881800E8;
	// rldicl r10,r27,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 48) & 0xFFFFFFFFFFFF;
	// std r11,-176(r1)
	ctx.current_instruction = 0x881800C4;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r11.u64);
	// addi r22,r11,160
	ctx.r22.s64 = ctx.r11.s64 + 160;
	// lwz r4,28(r1)
	ctx.current_instruction = 0x881800CC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r11,r5,r11
	ctx.current_instruction = 0x881800D8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbzx r10,r10,r22
	ctx.current_instruction = 0x881800DC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r22.u32);
	// or r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ld r11,-176(r1)
	ctx.current_instruction = 0x881800E4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
loc_881800E8:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8818011c
	if (!ctx.cr6.eq) goto loc_8818011C;
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lbzx r4,r9,r11
	ctx.current_instruction = 0x881800F4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// std r11,-168(r1)
	ctx.current_instruction = 0x881800F8;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// clrlwi r22,r22,24
	ctx.r22.u64 = ctx.r22.u32 & 0xFF;
	// lbzx r10,r5,r10
	ctx.current_instruction = 0x88180100;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stw r4,-176(r1)
	ctx.current_instruction = 0x88180104;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r4.u32);
	// lwz r11,-176(r1)
	ctx.current_instruction = 0x88180108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r4,28(r1)
	ctx.current_instruction = 0x88180110;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// and r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 & ctx.r22.u64;
	// ld r11,-168(r1)
	ctx.current_instruction = 0x88180118;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
loc_8818011C:
	// lwz r10,-224(r1)
	ctx.current_instruction = 0x8818011C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.current_instruction = 0x88180124;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// beq cr6,0x88180180
	if (ctx.cr6.eq) goto loc_88180180;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8818014c
	if (!ctx.cr6.eq) goto loc_8818014C;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// addi r23,r11,80
	ctx.r23.s64 = ctx.r11.s64 + 80;
	// lbzx r9,r9,r6
	ctx.current_instruction = 0x88180140;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r6,r3,r23
	ctx.current_instruction = 0x88180144;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r23.u32);
	// or r23,r9,r6
	ctx.r23.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_8818014C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x88180180
	if (!ctx.cr6.eq) goto loc_88180180;
	// lwz r9,-4(r10)
	ctx.current_instruction = 0x88180154;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf. r6,r8,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x88180180
	if (!ctx.cr0.eq) goto loc_88180180;
	// rldicl r9,r20,48,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u64, 48) & 0xFFFFFFFFFFFF;
	// addi r6,r11,-80
	ctx.r6.s64 = ctx.r11.s64 + -80;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	// lbzx r6,r3,r6
	ctx.current_instruction = 0x88180170;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x88180174;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 & ctx.r23.u64;
loc_88180180:
	// lwz r10,4(r10)
	ctx.current_instruction = 0x88180180;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x881801c8
	if (ctx.cr6.eq) goto loc_881801C8;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881801a8
	if (!ctx.cr6.eq) goto loc_881801A8;
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// lbzx r5,r5,r9
	ctx.current_instruction = 0x8818019C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r9,r30,r6
	ctx.current_instruction = 0x881801A0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// or r24,r5,r9
	ctx.r24.u64 = ctx.r5.u64 | ctx.r9.u64;
loc_881801A8:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881801c8
	if (!ctx.cr6.eq) goto loc_881801C8;
	// addi r10,r11,-80
	ctx.r10.s64 = ctx.r11.s64 + -80;
	// lbzx r9,r3,r11
	ctx.current_instruction = 0x881801B4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// lbzx r6,r30,r10
	ctx.current_instruction = 0x881801BC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// and r24,r5,r8
	ctx.r24.u64 = ctx.r5.u64 & ctx.r8.u64;
loc_881801C8:
	// lwz r9,-228(r1)
	ctx.current_instruction = 0x881801C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r10,352(r4)
	ctx.current_instruction = 0x881801CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 352);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r8)
	ctx.current_instruction = 0x881801D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x8818028c
	if (ctx.cr6.eq) goto loc_8818028C;
	// lwz r6,-240(r1)
	ctx.current_instruction = 0x881801E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8818023c
	if (!ctx.cr6.eq) goto loc_8818023C;
	// lwz r6,-192(r1)
	ctx.current_instruction = 0x881801EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r5,-236(r1)
	ctx.current_instruction = 0x881801F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.current_instruction = 0x881801FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// subf. r3,r9,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8818023c
	if (!ctx.cr0.eq) goto loc_8818023C;
	// rldicl r10,r27,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 56) & 0xFFFFFFFFFFFFFF;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
	// lbzx r10,r10,r6
	ctx.current_instruction = 0x88180224;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lbzx r5,r25,r5
	ctx.current_instruction = 0x88180228;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// lbzx r31,r26,r31
	ctx.current_instruction = 0x8818022C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// or r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lbzx r6,r30,r3
	ctx.current_instruction = 0x88180234;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// or r28,r6,r31
	ctx.r28.u64 = ctx.r6.u64 | ctx.r31.u64;
loc_8818023C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x8818028c
	if (!ctx.cr6.eq) goto loc_8818028C;
	// lwz r10,-4(r8)
	ctx.current_instruction = 0x88180244;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// subf. r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8818028c
	if (!ctx.cr0.eq) goto loc_8818028C;
	// rldicl r10,r20,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u64, 56) & 0xFFFFFFFFFFFFFF;
	// addi r9,r11,-80
	ctx.r9.s64 = ctx.r11.s64 + -80;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r11,-80
	ctx.r8.s64 = ctx.r11.s64 + -80;
	// clrlwi r5,r20,24
	ctx.r5.u64 = ctx.r20.u32 & 0xFF;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// lbzx r10,r25,r9
	ctx.current_instruction = 0x88180268;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r9.u32);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// lbzx r6,r6,r11
	ctx.current_instruction = 0x88180270;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r8,r26,r8
	ctx.current_instruction = 0x88180274;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// lbzx r5,r5,r11
	ctx.current_instruction = 0x88180278;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// and r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 & ctx.r3.u64;
	// and r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_8818028C:
	// rldicl r10,r17,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r31,-196(r1)
	ctx.current_instruction = 0x88180290;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// clrlwi r9,r17,24
	ctx.r9.u64 = ctx.r17.u32 & 0xFF;
	// lwz r6,-204(r1)
	ctx.current_instruction = 0x88180298;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// rldicl r3,r8,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// rldicl r8,r3,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// and r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 & ctx.r21.u64;
	// rldicl r30,r8,56,8
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stb r9,0(r18)
	ctx.current_instruction = 0x881802BC;
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r9.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// and r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 & ctx.r22.u64;
	// and r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 & ctx.r28.u64;
	// lwz r28,-192(r1)
	ctx.current_instruction = 0x881802D0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// and r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 & ctx.r23.u64;
	// stb r5,1(r18)
	ctx.current_instruction = 0x881802D8;
	REX_STORE_U8(ctx.r18.u32 + 1, ctx.r5.u8);
	// and r9,r3,r24
	ctx.r9.u64 = ctx.r3.u64 & ctx.r24.u64;
	// stb r30,5(r18)
	ctx.current_instruction = 0x881802E0;
	REX_STORE_U8(ctx.r18.u32 + 5, ctx.r30.u8);
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & ctx.r29.u64;
	// stb r10,2(r18)
	ctx.current_instruction = 0x881802E8;
	REX_STORE_U8(ctx.r18.u32 + 2, ctx.r10.u8);
	// stb r9,3(r18)
	ctx.current_instruction = 0x881802EC;
	REX_STORE_U8(ctx.r18.u32 + 3, ctx.r9.u8);
	// stb r8,4(r18)
	ctx.current_instruction = 0x881802F0;
	REX_STORE_U8(ctx.r18.u32 + 4, ctx.r8.u8);
	// b 0x88180324
	goto loc_88180324;
loc_881802F8:
	// rldicl r10,r17,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r17,0(r18)
	ctx.current_instruction = 0x881802FC;
	REX_STORE_U8(ctx.r18.u32 + 0, ctx.r17.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r10,1(r18)
	ctx.current_instruction = 0x88180304;
	REX_STORE_U8(ctx.r18.u32 + 1, ctx.r10.u8);
	// rldicl r3,r8,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r8,2(r18)
	ctx.current_instruction = 0x8818030C;
	REX_STORE_U8(ctx.r18.u32 + 2, ctx.r8.u8);
	// rldicl r9,r3,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r3,3(r18)
	ctx.current_instruction = 0x88180314;
	REX_STORE_U8(ctx.r18.u32 + 3, ctx.r3.u8);
	// rldicl r5,r9,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r18)
	ctx.current_instruction = 0x8818031C;
	REX_STORE_U8(ctx.r18.u32 + 4, ctx.r9.u8);
	// stb r5,5(r18)
	ctx.current_instruction = 0x88180320;
	REX_STORE_U8(ctx.r18.u32 + 5, ctx.r5.u8);
loc_88180324:
	// lwz r10,-236(r1)
	ctx.current_instruction = 0x88180324;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,-228(r1)
	ctx.current_instruction = 0x8818032C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// lwz r8,-224(r1)
	ctx.current_instruction = 0x88180334;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lwz r3,-232(r1)
	ctx.current_instruction = 0x8818033C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// stw r5,-236(r1)
	ctx.current_instruction = 0x88180348;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r5.u32);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r10,-228(r1)
	ctx.current_instruction = 0x88180350;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r14,r14,8
	ctx.r14.s64 = ctx.r14.s64 + 8;
	// stw r9,-224(r1)
	ctx.current_instruction = 0x88180358;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// stw r8,-232(r1)
	ctx.current_instruction = 0x8818035C;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r8.u32);
	// addi r18,r18,6
	ctx.r18.s64 = ctx.r18.s64 + 6;
	// addi r16,r16,8
	ctx.r16.s64 = ctx.r16.s64 + 8;
	// bdnz 0x8817fed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8817FED8;
	// lwz r14,-220(r1)
	ctx.current_instruction = 0x8818036C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r8,-216(r1)
	ctx.current_instruction = 0x88180370;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r3,-212(r1)
	ctx.current_instruction = 0x88180374;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r27,52(r1)
	ctx.current_instruction = 0x88180378;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r5,-208(r1)
	ctx.current_instruction = 0x8818037C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
loc_88180380:
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r10,r9,r14
	ctx.r10.u64 = ctx.r9.u64 + ctx.r14.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,-220(r1)
	ctx.current_instruction = 0x88180390;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r8,-216(r1)
	ctx.current_instruction = 0x88180394;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r8.u32);
	// beq cr6,0x881803a8
	if (ctx.cr6.eq) goto loc_881803A8;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r10,-212(r1)
	ctx.current_instruction = 0x881803A0;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_881803A8:
	// lwz r8,-200(r1)
	ctx.current_instruction = 0x881803A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r7,r6,512
	ctx.r7.s64 = ctx.r6.s64 + 512;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// stw r10,-208(r1)
	ctx.current_instruction = 0x881803B8;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// stw r7,-204(r1)
	ctx.current_instruction = 0x881803C0;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r7.u32);
	// stw r6,-200(r1)
	ctx.current_instruction = 0x881803C4;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// stw r5,-196(r1)
	ctx.current_instruction = 0x881803CC;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r5.u32);
	// blt cr6,0x8817fe10
	if (ctx.cr6.lt) goto loc_8817FE10;
loc_881803D4:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88194CF8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88194CF8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88194CF8) {
			switch (rex_dispatch_address) {
				case 0x88194D00:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88194CF8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88194D00: goto loc_88194D00;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88194D00;
	__savegprlr_26(ctx, base);
loc_88194D00:
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v10,7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x7)));
	// bne cr6,0x88194d20
	if (!ctx.cr6.eq) goto loc_88194D20;
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
loc_88194D20:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x8819537c
	if (ctx.cr6.gt) goto loc_8819537C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x88194e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88194E60;
	// bdzf 4*cr6+eq,0x88195028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88195028;
	// bne cr6,0x881951b8
	if (!ctx.cr6.eq) goto loc_881951B8;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v62,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v60,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// vor128 v11,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// addi r27,r1,-96
	ctx.r27.s64 = ctx.r1.s64 + -96;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v6,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// vslh v4,v7,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v2,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v30,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v29,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v30,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v26,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v28,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v24,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v23,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// stvx128 v25,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v24,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v21,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v20,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v22,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v18,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v17,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v19,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v18,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v15,v0,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v16,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v14,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8819537c
	goto loc_8819537C;
loc_88194E60:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v44,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v43,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v45,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v7,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v44,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvrx128 v41,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v4,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vmrghb v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v2,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vadduhm v31,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v30,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v31,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vadduhm v24,v11,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v25,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v11,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v23,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v11,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghb v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v7,v11,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// stvx128 v17,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v12,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v1,v11,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v6,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v5,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsldoi v29,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v30,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v6,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vmrghb v28,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v24,v11,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// stvx128 v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v30,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// stvx128 v31,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v11,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// stvx128 v21,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v18,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// stvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8819537c
	goto loc_8819537C;
loc_88195028:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v59,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v58,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v57,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v56,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v5,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v3,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v30,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vslh v25,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v24,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v17,v26,v21
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vmrghb v16,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vadduhm v15,v22,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v20,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v45,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vslh v6,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v5,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v2,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v28,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// lvlx128 v43,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// vor128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vslh v27,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v3,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v24,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v27,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslh v21,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8819537c
	goto loc_8819537C;
loc_881951B8:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v41,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v40,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v39,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v41,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v6,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v2,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vadduhm v25,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vmrghb v24,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v20,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v21,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v29,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v17,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v12,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// stvx128 v29,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v7,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v4,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v5,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx128 v16,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// stvx128 v7,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v2,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v31,v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vmrghb v30,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// vadduhm v29,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v2,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v12,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v29,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v12,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vadduhm v21,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghb v0,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v27,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v18,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// stvx128 v18,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8819537C:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x881954b0
	if (ctx.cr6.gt) goto loc_881954B0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x881953d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_881953D4;
	// bdzf 4*cr6+eq,0x88195420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_88195420;
	// bne cr6,0x88195468
	if (!ctx.cr6.eq) goto loc_88195468;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_881953A8:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vslh v13,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v12,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v11,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v55,r0,r5
	ctx.current_instruction = 0x881953C0;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r10
	ctx.current_instruction = 0x881953C4;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x881953a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881953A8;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881953D4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_881953E8:
	// lvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v54,r0,r5
	ctx.current_instruction = 0x8819540C;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r5,r10
	ctx.current_instruction = 0x88195410;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x881953e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881953E8;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88195420:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_88195430:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v8,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v7,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v6,v7,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx128 v53,r0,r5
	ctx.current_instruction = 0x88195454;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r5,r10
	ctx.current_instruction = 0x88195458;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x88195430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88195430;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_88195468:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8819547C:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v52,r0,r5
	ctx.current_instruction = 0x881954A0;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r10
	ctx.current_instruction = 0x881954A4;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x8819547c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8819547C;
loc_881954B0:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C2C28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C2C28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C2C28) {
			switch (rex_dispatch_address) {
				case 0x881C2CF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C2C28;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C2CF8: goto loc_881C2CF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881C2C2C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881C2C30;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x881C2C34;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r8,r31,30
	ctx.r8.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x881c2cd8
	if (!ctx.cr6.eq) goto loc_881C2CD8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881c2cd8
	if (!ctx.cr6.eq) goto loc_881C2CD8;
	// ld r10,0(r3)
	ctx.current_instruction = 0x881C2C80;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// std r10,0(r5)
	ctx.current_instruction = 0x881C2C88;
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// ldux r9,r3,r4
	ctx.current_instruction = 0x881C2C8C;
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdx r9,r5,r6
	ctx.current_instruction = 0x881C2C90;
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r9.u64);
	// ldux r8,r3,r4
	ctx.current_instruction = 0x881C2C94;
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r8,r11,r6
	ctx.current_instruction = 0x881C2C98;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// ldux r7,r3,r4
	ctx.current_instruction = 0x881C2C9C;
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r7,r11,r6
	ctx.current_instruction = 0x881C2CA0;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ldux r5,r3,r4
	ctx.current_instruction = 0x881C2CA4;
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r5,r11,r6
	ctx.current_instruction = 0x881C2CA8;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ldux r10,r3,r4
	ctx.current_instruction = 0x881C2CAC;
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r10,r11,r6
	ctx.current_instruction = 0x881C2CB0;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// ldux r9,r3,r4
	ctx.current_instruction = 0x881C2CB4;
	ea = ctx.r3.u32 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
	// stdux r9,r11,r6
	ctx.current_instruction = 0x881C2CB8;
	ea = ctx.r11.u32 + ctx.r6.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// ldx r8,r3,r4
	ctx.current_instruction = 0x881C2CBC;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r4.u32);
	// stdx r8,r11,r6
	ctx.current_instruction = 0x881C2CC0;
	REX_STORE_U64(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881C2CC8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881C2CD0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881C2CD8:
	// lwz r9,3960(r11)
	ctx.current_instruction = 0x881C2CD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3960);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881c2cec
	if (!ctx.cr6.eq) goto loc_881C2CEC;
	// lwz r10,3176(r11)
	ctx.current_instruction = 0x881C2CE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3176);
	// b 0x881c2cf0
	goto loc_881C2CF0;
loc_881C2CEC:
	// lwz r10,3180(r11)
	ctx.current_instruction = 0x881C2CEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3180);
loc_881C2CF0:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881C2CF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881C2CF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881C2CFC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881C2D04;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C4230) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C4230;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C4230) {
			switch (rex_dispatch_address) {
				case 0x881C4238:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C4230;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881C4238: goto loc_881C4238;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x881C4238;
	__savegprlr_28(ctx, base);
loc_881C4238:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881c4294
	if (!ctx.cr6.gt) goto loc_881C4294;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_881C4244:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881c4280
	if (!ctx.cr6.gt) goto loc_881C4280;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r30,r5,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r29,r5,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r5.u64;
loc_881C425C:
	// lbzx r10,r30,r11
	ctx.current_instruction = 0x881C425C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbz r31,0(r11)
	ctx.current_instruction = 0x881C4260;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r29,r11
	ctx.current_instruction = 0x881C4274;
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x881c425c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881C425C;
loc_881C4280:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bne 0x881c4244
	if (!ctx.cr0.eq) goto loc_881C4244;
loc_881C4294:
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C44B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C44B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C44B0) {
			switch (rex_dispatch_address) {
				case 0x881C44B8:
				case 0x881C44D4:
				case 0x881C4558:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C44B0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C44B8: goto loc_881C44B8;
		case 0x881C44D4: goto loc_881C44D4;
		case 0x881C4558: goto loc_881C4558;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881C44B8;
	__savegprlr_29(ctx, base);
loc_881C44B8:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881C44B8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,15984
	ctx.r30.s64 = ctx.r3.s64 + 15984;
	// li r31,2
	ctx.r31.s64 = 2;
loc_881C44C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x881cd678
	ctx.lr = 0x881C44D4;
	sub_881CD678(ctx, base);
loc_881C44D4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2208
	ctx.r30.s64 = ctx.r30.s64 + 2208;
	// bne 0x881c44c8
	if (!ctx.cr0.eq) goto loc_881C44C8;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,-11668(r11)
	ctx.current_instruction = 0x881C44E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c4508
	if (!ctx.cr6.eq) goto loc_881C4508;
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// addi r9,r11,14760
	ctx.r9.s64 = ctx.r11.s64 + 14760;
	// addi r8,r10,15032
	ctx.r8.s64 = ctx.r10.s64 + 15032;
	// stw r9,3176(r29)
	ctx.current_instruction = 0x881C4500;
	REX_STORE_U32(ctx.r29.u32 + 3176, ctx.r9.u32);
	// stw r8,3184(r29)
	ctx.current_instruction = 0x881C4504;
	REX_STORE_U32(ctx.r29.u32 + 3184, ctx.r8.u32);
loc_881C4508:
	// lis r11,-30692
	ctx.r11.s64 = -2011430912;
	// lis r10,-30692
	ctx.r10.s64 = -2011430912;
	// lis r9,-30692
	ctx.r9.s64 = -2011430912;
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lis r7,-30695
	ctx.r7.s64 = -2011627520;
	// lis r6,-30695
	ctx.r6.s64 = -2011627520;
	// addi r3,r9,15432
	ctx.r3.s64 = ctx.r9.s64 + 15432;
	// addi r5,r11,11536
	ctx.r5.s64 = ctx.r11.s64 + 11536;
	// addi r4,r10,15032
	ctx.r4.s64 = ctx.r10.s64 + 15032;
	// stw r3,3188(r29)
	ctx.current_instruction = 0x881C452C;
	REX_STORE_U32(ctx.r29.u32 + 3188, ctx.r3.u32);
	// addi r11,r8,16944
	ctx.r11.s64 = ctx.r8.s64 + 16944;
	// stw r5,3180(r29)
	ctx.current_instruction = 0x881C4534;
	REX_STORE_U32(ctx.r29.u32 + 3180, ctx.r5.u32);
	// addi r10,r7,32168
	ctx.r10.s64 = ctx.r7.s64 + 32168;
	// stw r4,3184(r29)
	ctx.current_instruction = 0x881C453C;
	REX_STORE_U32(ctx.r29.u32 + 3184, ctx.r4.u32);
	// addi r9,r6,32744
	ctx.r9.s64 = ctx.r6.s64 + 32744;
	// stw r11,3244(r29)
	ctx.current_instruction = 0x881C4544;
	REX_STORE_U32(ctx.r29.u32 + 3244, ctx.r11.u32);
	// stw r10,3236(r29)
	ctx.current_instruction = 0x881C4548;
	REX_STORE_U32(ctx.r29.u32 + 3236, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,3240(r29)
	ctx.current_instruction = 0x881C4550;
	REX_STORE_U32(ctx.r29.u32 + 3240, ctx.r9.u32);
	// bl 0x881e3de8
	ctx.lr = 0x881C4558;
	sub_881E3DE8(ctx, base);
loc_881C4558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881C6808) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C6808;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C6808) {
			switch (rex_dispatch_address) {
				case 0x881C6810:
				case 0x881C68A0:
				case 0x881C68E8:
				case 0x881C695C:
				case 0x881C69A4:
				case 0x881C6A20:
				case 0x881C6A68:
				case 0x881C6C1C:
				case 0x881C6C64:
				case 0x881C6CF0:
				case 0x881C6D38:
				case 0x881C6DBC:
				case 0x881C6E04:
				case 0x881C6EFC:
				case 0x881C6F44:
				case 0x881C6FB0:
				case 0x881C6FF8:
				case 0x881C7068:
				case 0x881C70B0:
				case 0x881C70C0:
				case 0x881C7180:
				case 0x881C71C8:
				case 0x881C7238:
				case 0x881C7280:
				case 0x881C72FC:
				case 0x881C7344:
				case 0x881C73E8:
				case 0x881C7430:
				case 0x881C749C:
				case 0x881C74E4:
				case 0x881C7550:
				case 0x881C7598:
				case 0x881C7618:
				case 0x881C7660:
				case 0x881C76C4:
				case 0x881C770C:
				case 0x881C7778:
				case 0x881C77C0:
				case 0x881C782C:
				case 0x881C7874:
				case 0x881C78F4:
				case 0x881C793C:
				case 0x881C79DC:
				case 0x881C7A24:
				case 0x881C7A98:
				case 0x881C7AE0:
				case 0x881C7B48:
				case 0x881C7B90:
				case 0x881C7BF8:
				case 0x881C7C40:
				case 0x881C7CA8:
				case 0x881C7CF0:
				case 0x881C7D54:
				case 0x881C7D9C:
				case 0x881C7E0C:
				case 0x881C7E54:
				case 0x881C7EBC:
				case 0x881C7F04:
				case 0x881C7F68:
				case 0x881C7FB0:
				case 0x881C8018:
				case 0x881C8060:
				case 0x881C8088:
				case 0x881C8158:
				case 0x881C81A0:
				case 0x881C81F8:
				case 0x881C8240:
				case 0x881C82C0:
				case 0x881C8328:
				case 0x881C8370:
				case 0x881C83E4:
				case 0x881C842C:
				case 0x881C84B0:
				case 0x881C84F8:
				case 0x881C8520:
				case 0x881C8528:
				case 0x881C8598:
				case 0x881C85E0:
				case 0x881C8650:
				case 0x881C8698:
				case 0x881C8720:
				case 0x881C8768:
				case 0x881C87D8:
				case 0x881C8820:
				case 0x881C88A8:
				case 0x881C88F0:
				case 0x881C8904:
				case 0x881C89C4:
				case 0x881C8A0C:
				case 0x881C8A80:
				case 0x881C8AC8:
				case 0x881C8AE4:
				case 0x881C8B90:
				case 0x881C8BD8:
				case 0x881C8C48:
				case 0x881C8C90:
				case 0x881C8D00:
				case 0x881C8D48:
				case 0x881C8DB8:
				case 0x881C8E00:
				case 0x881C8E7C:
				case 0x881C8EC4:
				case 0x881C8EE0:
				case 0x881C8EE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C6808;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881C6810: goto loc_881C6810;
		case 0x881C68A0: goto loc_881C68A0;
		case 0x881C68E8: goto loc_881C68E8;
		case 0x881C695C: goto loc_881C695C;
		case 0x881C69A4: goto loc_881C69A4;
		case 0x881C6A20: goto loc_881C6A20;
		case 0x881C6A68: goto loc_881C6A68;
		case 0x881C6C1C: goto loc_881C6C1C;
		case 0x881C6C64: goto loc_881C6C64;
		case 0x881C6CF0: goto loc_881C6CF0;
		case 0x881C6D38: goto loc_881C6D38;
		case 0x881C6DBC: goto loc_881C6DBC;
		case 0x881C6E04: goto loc_881C6E04;
		case 0x881C6EFC: goto loc_881C6EFC;
		case 0x881C6F44: goto loc_881C6F44;
		case 0x881C6FB0: goto loc_881C6FB0;
		case 0x881C6FF8: goto loc_881C6FF8;
		case 0x881C7068: goto loc_881C7068;
		case 0x881C70B0: goto loc_881C70B0;
		case 0x881C70C0: goto loc_881C70C0;
		case 0x881C7180: goto loc_881C7180;
		case 0x881C71C8: goto loc_881C71C8;
		case 0x881C7238: goto loc_881C7238;
		case 0x881C7280: goto loc_881C7280;
		case 0x881C72FC: goto loc_881C72FC;
		case 0x881C7344: goto loc_881C7344;
		case 0x881C73E8: goto loc_881C73E8;
		case 0x881C7430: goto loc_881C7430;
		case 0x881C749C: goto loc_881C749C;
		case 0x881C74E4: goto loc_881C74E4;
		case 0x881C7550: goto loc_881C7550;
		case 0x881C7598: goto loc_881C7598;
		case 0x881C7618: goto loc_881C7618;
		case 0x881C7660: goto loc_881C7660;
		case 0x881C76C4: goto loc_881C76C4;
		case 0x881C770C: goto loc_881C770C;
		case 0x881C7778: goto loc_881C7778;
		case 0x881C77C0: goto loc_881C77C0;
		case 0x881C782C: goto loc_881C782C;
		case 0x881C7874: goto loc_881C7874;
		case 0x881C78F4: goto loc_881C78F4;
		case 0x881C793C: goto loc_881C793C;
		case 0x881C79DC: goto loc_881C79DC;
		case 0x881C7A24: goto loc_881C7A24;
		case 0x881C7A98: goto loc_881C7A98;
		case 0x881C7AE0: goto loc_881C7AE0;
		case 0x881C7B48: goto loc_881C7B48;
		case 0x881C7B90: goto loc_881C7B90;
		case 0x881C7BF8: goto loc_881C7BF8;
		case 0x881C7C40: goto loc_881C7C40;
		case 0x881C7CA8: goto loc_881C7CA8;
		case 0x881C7CF0: goto loc_881C7CF0;
		case 0x881C7D54: goto loc_881C7D54;
		case 0x881C7D9C: goto loc_881C7D9C;
		case 0x881C7E0C: goto loc_881C7E0C;
		case 0x881C7E54: goto loc_881C7E54;
		case 0x881C7EBC: goto loc_881C7EBC;
		case 0x881C7F04: goto loc_881C7F04;
		case 0x881C7F68: goto loc_881C7F68;
		case 0x881C7FB0: goto loc_881C7FB0;
		case 0x881C8018: goto loc_881C8018;
		case 0x881C8060: goto loc_881C8060;
		case 0x881C8088: goto loc_881C8088;
		case 0x881C8158: goto loc_881C8158;
		case 0x881C81A0: goto loc_881C81A0;
		case 0x881C81F8: goto loc_881C81F8;
		case 0x881C8240: goto loc_881C8240;
		case 0x881C82C0: goto loc_881C82C0;
		case 0x881C8328: goto loc_881C8328;
		case 0x881C8370: goto loc_881C8370;
		case 0x881C83E4: goto loc_881C83E4;
		case 0x881C842C: goto loc_881C842C;
		case 0x881C84B0: goto loc_881C84B0;
		case 0x881C84F8: goto loc_881C84F8;
		case 0x881C8520: goto loc_881C8520;
		case 0x881C8528: goto loc_881C8528;
		case 0x881C8598: goto loc_881C8598;
		case 0x881C85E0: goto loc_881C85E0;
		case 0x881C8650: goto loc_881C8650;
		case 0x881C8698: goto loc_881C8698;
		case 0x881C8720: goto loc_881C8720;
		case 0x881C8768: goto loc_881C8768;
		case 0x881C87D8: goto loc_881C87D8;
		case 0x881C8820: goto loc_881C8820;
		case 0x881C88A8: goto loc_881C88A8;
		case 0x881C88F0: goto loc_881C88F0;
		case 0x881C8904: goto loc_881C8904;
		case 0x881C89C4: goto loc_881C89C4;
		case 0x881C8A0C: goto loc_881C8A0C;
		case 0x881C8A80: goto loc_881C8A80;
		case 0x881C8AC8: goto loc_881C8AC8;
		case 0x881C8AE4: goto loc_881C8AE4;
		case 0x881C8B90: goto loc_881C8B90;
		case 0x881C8BD8: goto loc_881C8BD8;
		case 0x881C8C48: goto loc_881C8C48;
		case 0x881C8C90: goto loc_881C8C90;
		case 0x881C8D00: goto loc_881C8D00;
		case 0x881C8D48: goto loc_881C8D48;
		case 0x881C8DB8: goto loc_881C8DB8;
		case 0x881C8E00: goto loc_881C8E00;
		case 0x881C8E7C: goto loc_881C8E7C;
		case 0x881C8EC4: goto loc_881C8EC4;
		case 0x881C8EE0: goto loc_881C8EE0;
		case 0x881C8EE8: goto loc_881C8EE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x881C6810;
	__savegprlr_22(ctx, base);
loc_881C6810:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x881C6810;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r3)
	ctx.current_instruction = 0x881C6814;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,20688(r3)
	ctx.current_instruction = 0x881C681C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x881C6824;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,272(r3)
	ctx.current_instruction = 0x881C6830;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6840;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x881c68b0
	if (!ctx.cr6.lt) goto loc_881C68B0;
loc_881C6858:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c68b0
	if (ctx.cr6.eq) goto loc_881C68B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C6864;
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
	ctx.current_instruction = 0x881C6888;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6890;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c68a0
	if (!ctx.cr0.lt) goto loc_881C68A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C68A0;
	sub_88156678(ctx, base);
loc_881C68A0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C68A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6858
	if (ctx.cr6.gt) goto loc_881C6858;
loc_881C68B0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C68B4;
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
	ctx.current_instruction = 0x881C68CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C68D8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c68e8
	if (!ctx.cr0.lt) goto loc_881C68E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C68E8;
	sub_88156678(ctx, base);
loc_881C68E8:
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r30,4008(r27)
	ctx.current_instruction = 0x881C68EC;
	REX_STORE_U32(ctx.r27.u32 + 4008, ctx.r30.u32);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bgt cr6,0x881c69ac
	if (ctx.cr6.gt) goto loc_881C69AC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C68F8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6904;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c696c
	if (!ctx.cr6.lt) goto loc_881C696C;
loc_881C6914:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c696c
	if (ctx.cr6.eq) goto loc_881C696C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C6920;
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
	ctx.current_instruction = 0x881C6944;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C694C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c695c
	if (!ctx.cr0.lt) goto loc_881C695C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C695C;
	sub_88156678(ctx, base);
loc_881C695C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C695C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6914
	if (ctx.cr6.gt) goto loc_881C6914;
loc_881C696C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C6970;
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
	ctx.current_instruction = 0x881C6988;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6994;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c69a4
	if (!ctx.cr0.lt) goto loc_881C69A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C69A4;
	sub_88156678(ctx, base);
loc_881C69A4:
	// stw r30,252(r27)
	ctx.current_instruction = 0x881C69A4;
	REX_STORE_U32(ctx.r27.u32 + 252, ctx.r30.u32);
	// b 0x881c69b0
	goto loc_881C69B0;
loc_881C69AC:
	// stw r22,252(r27)
	ctx.current_instruction = 0x881C69AC;
	REX_STORE_U32(ctx.r27.u32 + 252, ctx.r22.u32);
loc_881C69B0:
	// lwz r11,3480(r27)
	ctx.current_instruction = 0x881C69B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c6a6c
	if (ctx.cr6.eq) goto loc_881C6A6C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C69BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C69C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c6a30
	if (!ctx.cr6.lt) goto loc_881C6A30;
loc_881C69D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6a30
	if (ctx.cr6.eq) goto loc_881C6A30;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C69E4;
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
	ctx.current_instruction = 0x881C6A08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6A10;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c6a20
	if (!ctx.cr0.lt) goto loc_881C6A20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6A20;
	sub_88156678(ctx, base);
loc_881C6A20:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6A20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c69d8
	if (ctx.cr6.gt) goto loc_881C69D8;
loc_881C6A30:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C6A34;
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
	ctx.current_instruction = 0x881C6A4C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6A58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6a68
	if (!ctx.cr0.lt) goto loc_881C6A68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6A68;
	sub_88156678(ctx, base);
loc_881C6A68:
	// stw r30,3468(r27)
	ctx.current_instruction = 0x881C6A68;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r30.u32);
loc_881C6A6C:
	// lwz r11,3472(r27)
	ctx.current_instruction = 0x881C6A6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3472);
	// lwz r8,4008(r27)
	ctx.current_instruction = 0x881C6A70;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 4008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c6a88
	if (!ctx.cr6.eq) goto loc_881C6A88;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x881c6abc
	if (ctx.cr6.gt) goto loc_881C6ABC;
	// stw r23,3468(r27)
	ctx.current_instruction = 0x881C6A84;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r23.u32);
loc_881C6A88:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_881C6A8C:
	// lwz r11,3008(r27)
	ctx.current_instruction = 0x881C6A8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3008);
	// stw r10,248(r27)
	ctx.current_instruction = 0x881C6A90;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,3004(r27)
	ctx.current_instruction = 0x881C6A98;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r22.u32);
	// beq cr6,0x881c6af0
	if (ctx.cr6.eq) goto loc_881C6AF0;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C6AA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881c6af0
	if (ctx.cr6.eq) goto loc_881C6AF0;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x881c6ad8
	if (ctx.cr6.lt) goto loc_881C6AD8;
	// stw r23,3004(r27)
	ctx.current_instruction = 0x881C6AB4;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r23.u32);
	// b 0x881c6af0
	goto loc_881C6AF0;
loc_881C6ABC:
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// stw r22,3468(r27)
	ctx.current_instruction = 0x881C6AC0;
	REX_STORE_U32(ctx.r27.u32 + 3468, ctx.r22.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,19448
	ctx.r11.s64 = ctx.r11.s64 + 19448;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r10)
	ctx.current_instruction = 0x881C6AD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x881c6a8c
	goto loc_881C6A8C;
loc_881C6AD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c6ae8
	if (ctx.cr6.eq) goto loc_881C6AE8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881c6af0
	if (!ctx.cr6.eq) goto loc_881C6AF0;
loc_881C6AE8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,3004(r27)
	ctx.current_instruction = 0x881C6AEC;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r11.u32);
loc_881C6AF0:
	// lwz r9,3468(r27)
	ctx.current_instruction = 0x881C6AF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 3468);
	// addi r11,r27,4048
	ctx.r11.s64 = ctx.r27.s64 + 4048;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x881c6b04
	if (!ctx.cr6.eq) goto loc_881C6B04;
	// addi r11,r27,5328
	ctx.r11.s64 = ctx.r27.s64 + 5328;
loc_881C6B04:
	// stw r11,6608(r27)
	ctx.current_instruction = 0x881C6B04;
	REX_STORE_U32(ctx.r27.u32 + 6608, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r27,6624
	ctx.r11.s64 = ctx.r27.s64 + 6624;
	// bne cr6,0x881c6b18
	if (!ctx.cr6.eq) goto loc_881C6B18;
	// addi r11,r27,10720
	ctx.r11.s64 = ctx.r27.s64 + 10720;
loc_881C6B18:
	// lwz r30,84(r27)
	ctx.current_instruction = 0x881C6B18;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// stw r11,14816(r27)
	ctx.current_instruction = 0x881C6B1C;
	REX_STORE_U32(ctx.r27.u32 + 14816, ctx.r11.u32);
	// stw r10,248(r27)
	ctx.current_instruction = 0x881C6B20;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r10.u32);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x881C6B24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c6b68
	if (!ctx.cr6.eq) goto loc_881C6B68;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C6B30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x881c6b74
	if (ctx.cr6.eq) goto loc_881C6B74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881c6b74
	if (ctx.cr6.eq) goto loc_881C6B74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c6b54
	if (ctx.cr6.eq) goto loc_881C6B54;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x881c6b68
	if (!ctx.cr6.eq) goto loc_881C6B68;
loc_881C6B54:
	// stw r10,248(r27)
	ctx.current_instruction = 0x881C6B54;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881c6b68
	if (!ctx.cr6.gt) goto loc_881C6B68;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// ble cr6,0x881c6b88
	if (!ctx.cr6.gt) goto loc_881C6B88;
loc_881C6B68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_881C6B6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C6B74:
	// stw r10,248(r27)
	ctx.current_instruction = 0x881C6B74;
	REX_STORE_U32(ctx.r27.u32 + 248, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881c6b68
	if (!ctx.cr6.gt) goto loc_881C6B68;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bgt cr6,0x881c6b68
	if (ctx.cr6.gt) goto loc_881C6B68;
loc_881C6B88:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x881c6b9c
	if (ctx.cr6.gt) goto loc_881C6B9C;
	// addi r11,r27,2872
	ctx.r11.s64 = ctx.r27.s64 + 2872;
	// addi r10,r27,2828
	ctx.r10.s64 = ctx.r27.s64 + 2828;
	// b 0x881c6ba4
	goto loc_881C6BA4;
loc_881C6B9C:
	// addi r11,r27,2652
	ctx.r11.s64 = ctx.r27.s64 + 2652;
	// addi r10,r27,2696
	ctx.r10.s64 = ctx.r27.s64 + 2696;
loc_881C6BA4:
	// stw r11,2940(r27)
	ctx.current_instruction = 0x881C6BA4;
	REX_STORE_U32(ctx.r27.u32 + 2940, ctx.r11.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// lwz r11,21572(r27)
	ctx.current_instruction = 0x881C6BAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21572);
	// stw r10,2952(r27)
	ctx.current_instruction = 0x881C6BB0;
	REX_STORE_U32(ctx.r27.u32 + 2952, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c6c68
	if (ctx.cr6.eq) goto loc_881C6C68;
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881C6BBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c6c2c
	if (!ctx.cr6.lt) goto loc_881C6C2C;
loc_881C6BD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6c2c
	if (ctx.cr6.eq) goto loc_881C6C2C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.current_instruction = 0x881C6BE0;
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
	ctx.current_instruction = 0x881C6C04;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r30)
	ctx.current_instruction = 0x881C6C0C;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x881c6c1c
	if (!ctx.cr0.lt) goto loc_881C6C1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6C1C;
	sub_88156678(ctx, base);
loc_881C6C1C:
	// lwz r10,8(r30)
	ctx.current_instruction = 0x881C6C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6bd4
	if (ctx.cr6.gt) goto loc_881C6BD4;
loc_881C6C2C:
	// subfic r11,r31,64
	ctx.xer.ca = ctx.r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r31.u64;
	// ld r9,0(r30)
	ctx.current_instruction = 0x881C6C30;
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
	ctx.current_instruction = 0x881C6C48;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r30)
	ctx.current_instruction = 0x881C6C54;
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x881c6c64
	if (!ctx.cr0.lt) goto loc_881C6C64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6C64;
	sub_88156678(ctx, base);
loc_881C6C64:
	// stw r31,21576(r27)
	ctx.current_instruction = 0x881C6C64;
	REX_STORE_U32(ctx.r27.u32 + 21576, ctx.r31.u32);
loc_881C6C68:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C6C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c88f8
	if (ctx.cr6.eq) goto loc_881C88F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x881c88f8
	if (ctx.cr6.eq) goto loc_881C88F8;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881c6d40
	if (ctx.cr6.eq) goto loc_881C6D40;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C6C8C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6C98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c6d00
	if (!ctx.cr6.lt) goto loc_881C6D00;
loc_881C6CA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6d00
	if (ctx.cr6.eq) goto loc_881C6D00;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C6CB4;
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
	ctx.current_instruction = 0x881C6CD8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6CE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c6cf0
	if (!ctx.cr0.lt) goto loc_881C6CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6CF0;
	sub_88156678(ctx, base);
loc_881C6CF0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6CF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6ca8
	if (ctx.cr6.gt) goto loc_881C6CA8;
loc_881C6D00:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C6D04;
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
	ctx.current_instruction = 0x881C6D1C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6D28;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6d38
	if (!ctx.cr0.lt) goto loc_881C6D38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6D38;
	sub_88156678(ctx, base);
loc_881C6D38:
	// stw r30,21700(r27)
	ctx.current_instruction = 0x881C6D38;
	REX_STORE_U32(ctx.r27.u32 + 21700, ctx.r30.u32);
	// b 0x881c6d44
	goto loc_881C6D44;
loc_881C6D40:
	// stw r23,21700(r27)
	ctx.current_instruction = 0x881C6D40;
	REX_STORE_U32(ctx.r27.u32 + 21700, ctx.r23.u32);
loc_881C6D44:
	// lwz r11,21700(r27)
	ctx.current_instruction = 0x881C6D44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c6d58
	if (ctx.cr6.eq) goto loc_881C6D58;
	// stw r23,21696(r27)
	ctx.current_instruction = 0x881C6D50;
	REX_STORE_U32(ctx.r27.u32 + 21696, ctx.r23.u32);
	// b 0x881c6e28
	goto loc_881C6E28;
loc_881C6D58:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C6D58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c6dcc
	if (!ctx.cr6.lt) goto loc_881C6DCC;
loc_881C6D74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6dcc
	if (ctx.cr6.eq) goto loc_881C6DCC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C6D80;
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
	ctx.current_instruction = 0x881C6DA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6DAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c6dbc
	if (!ctx.cr0.lt) goto loc_881C6DBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6DBC;
	sub_88156678(ctx, base);
loc_881C6DBC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6DBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6d74
	if (ctx.cr6.gt) goto loc_881C6D74;
loc_881C6DCC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C6DD0;
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
	ctx.current_instruction = 0x881C6DE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6DF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6e04
	if (!ctx.cr0.lt) goto loc_881C6E04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6E04;
	sub_88156678(ctx, base);
loc_881C6E04:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,21688(r27)
	ctx.current_instruction = 0x881C6E0C;
	REX_STORE_U32(ctx.r27.u32 + 21688, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881c6e24
	if (ctx.cr6.eq) goto loc_881C6E24;
	// stw r22,21692(r27)
	ctx.current_instruction = 0x881C6E18;
	REX_STORE_U32(ctx.r27.u32 + 21692, ctx.r22.u32);
	// stw r23,21696(r27)
	ctx.current_instruction = 0x881C6E1C;
	REX_STORE_U32(ctx.r27.u32 + 21696, ctx.r23.u32);
	// b 0x881c6e2c
	goto loc_881C6E2C;
loc_881C6E24:
	// stw r22,21696(r27)
	ctx.current_instruction = 0x881C6E24;
	REX_STORE_U32(ctx.r27.u32 + 21696, ctx.r22.u32);
loc_881C6E28:
	// stw r23,21692(r27)
	ctx.current_instruction = 0x881C6E28;
	REX_STORE_U32(ctx.r27.u32 + 21692, ctx.r23.u32);
loc_881C6E2C:
	// lwz r11,21700(r27)
	ctx.current_instruction = 0x881C6E2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21700);
	// addi r7,r27,21152
	ctx.r7.s64 = ctx.r27.s64 + 21152;
	// addi r6,r27,21164
	ctx.r6.s64 = ctx.r27.s64 + 21164;
	// addi r5,r27,21176
	ctx.r5.s64 = ctx.r27.s64 + 21176;
	// stw r7,2416(r27)
	ctx.current_instruction = 0x881C6E3C;
	REX_STORE_U32(ctx.r27.u32 + 2416, ctx.r7.u32);
	// addi r4,r27,21188
	ctx.r4.s64 = ctx.r27.s64 + 21188;
	// stw r6,2420(r27)
	ctx.current_instruction = 0x881C6E44;
	REX_STORE_U32(ctx.r27.u32 + 2420, ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,2424(r27)
	ctx.current_instruction = 0x881C6E4C;
	REX_STORE_U32(ctx.r27.u32 + 2424, ctx.r5.u32);
	// stw r4,2428(r27)
	ctx.current_instruction = 0x881C6E50;
	REX_STORE_U32(ctx.r27.u32 + 2428, ctx.r4.u32);
	// beq cr6,0x881c6e6c
	if (ctx.cr6.eq) goto loc_881C6E6C;
	// addi r11,r27,21104
	ctx.r11.s64 = ctx.r27.s64 + 21104;
	// addi r10,r27,21116
	ctx.r10.s64 = ctx.r27.s64 + 21116;
	// addi r9,r27,21128
	ctx.r9.s64 = ctx.r27.s64 + 21128;
	// addi r8,r27,21140
	ctx.r8.s64 = ctx.r27.s64 + 21140;
	// b 0x881c6e7c
	goto loc_881C6E7C;
loc_881C6E6C:
	// addi r11,r27,21200
	ctx.r11.s64 = ctx.r27.s64 + 21200;
	// addi r10,r27,21212
	ctx.r10.s64 = ctx.r27.s64 + 21212;
	// addi r9,r27,21224
	ctx.r9.s64 = ctx.r27.s64 + 21224;
	// addi r8,r27,21236
	ctx.r8.s64 = ctx.r27.s64 + 21236;
loc_881C6E7C:
	// stw r11,2400(r27)
	ctx.current_instruction = 0x881C6E7C;
	REX_STORE_U32(ctx.r27.u32 + 2400, ctx.r11.u32);
	// lwz r11,21568(r27)
	ctx.current_instruction = 0x881C6E80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21568);
	// stw r8,2412(r27)
	ctx.current_instruction = 0x881C6E84;
	REX_STORE_U32(ctx.r27.u32 + 2412, ctx.r8.u32);
	// stw r9,2408(r27)
	ctx.current_instruction = 0x881C6E88;
	REX_STORE_U32(ctx.r27.u32 + 2408, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,2404(r27)
	ctx.current_instruction = 0x881C6E90;
	REX_STORE_U32(ctx.r27.u32 + 2404, ctx.r10.u32);
	// beq cr6,0x881c70b4
	if (ctx.cr6.eq) goto loc_881C70B4;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C6E98;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c6f0c
	if (!ctx.cr6.lt) goto loc_881C6F0C;
loc_881C6EB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6f0c
	if (ctx.cr6.eq) goto loc_881C6F0C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C6EC0;
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
	ctx.current_instruction = 0x881C6EE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6EEC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c6efc
	if (!ctx.cr0.lt) goto loc_881C6EFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6EFC;
	sub_88156678(ctx, base);
loc_881C6EFC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6EFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6eb4
	if (ctx.cr6.gt) goto loc_881C6EB4;
loc_881C6F0C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C6F10;
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
	ctx.current_instruction = 0x881C6F28;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6F34;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6f44
	if (!ctx.cr0.lt) goto loc_881C6F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6F44;
	sub_88156678(ctx, base);
loc_881C6F44:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881c6ffc
	if (ctx.cr6.eq) goto loc_881C6FFC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C6F4C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6F58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c6fc0
	if (!ctx.cr6.lt) goto loc_881C6FC0;
loc_881C6F68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c6fc0
	if (ctx.cr6.eq) goto loc_881C6FC0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C6F74;
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
	ctx.current_instruction = 0x881C6F98;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C6FA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c6fb0
	if (!ctx.cr0.lt) goto loc_881C6FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6FB0;
	sub_88156678(ctx, base);
loc_881C6FB0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C6FB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c6f68
	if (ctx.cr6.gt) goto loc_881C6F68;
loc_881C6FC0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C6FC4;
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
	ctx.current_instruction = 0x881C6FDC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C6FE8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c6ff8
	if (!ctx.cr0.lt) goto loc_881C6FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C6FF8;
	sub_88156678(ctx, base);
loc_881C6FF8:
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_881C6FFC:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x881c70b4
	if (!ctx.cr6.eq) goto loc_881C70B4;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7004;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7010;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7078
	if (!ctx.cr6.lt) goto loc_881C7078;
loc_881C7020:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7078
	if (ctx.cr6.eq) goto loc_881C7078;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C702C;
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
	ctx.current_instruction = 0x881C7050;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7058;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7068
	if (!ctx.cr0.lt) goto loc_881C7068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7068;
	sub_88156678(ctx, base);
loc_881C7068:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7068;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7020
	if (ctx.cr6.gt) goto loc_881C7020;
loc_881C7078:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C707C;
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
	ctx.current_instruction = 0x881C7094;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C70A0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c70b0
	if (!ctx.cr0.lt) goto loc_881C70B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C70B0;
	sub_88156678(ctx, base);
loc_881C70B0:
	// addi r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 2;
loc_881C70B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8815b250
	ctx.lr = 0x881C70C0;
	sub_8815B250(ctx, base);
loc_881C70C0:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C70C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881c70e8
	if (!ctx.cr6.eq) goto loc_881C70E8;
	// lwz r11,20688(r27)
	ctx.current_instruction = 0x881C70CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,408(r27)
	ctx.current_instruction = 0x881C70D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 408);
	// bne cr6,0x881c70e4
	if (!ctx.cr6.eq) goto loc_881C70E4;
	// stw r11,22236(r27)
	ctx.current_instruction = 0x881C70DC;
	REX_STORE_U32(ctx.r27.u32 + 22236, ctx.r11.u32);
	// b 0x881c70e8
	goto loc_881C70E8;
loc_881C70E4:
	// stw r11,22240(r27)
	ctx.current_instruction = 0x881C70E4;
	REX_STORE_U32(ctx.r27.u32 + 22240, ctx.r11.u32);
loc_881C70E8:
	// lwz r11,21700(r27)
	ctx.current_instruction = 0x881C70E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c7110
	if (!ctx.cr6.eq) goto loc_881C7110;
	// lwz r11,432(r27)
	ctx.current_instruction = 0x881C70F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 432);
	// lwz r10,424(r27)
	ctx.current_instruction = 0x881C70F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 424);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,424(r27)
	ctx.current_instruction = 0x881C7108;
	REX_STORE_U32(ctx.r27.u32 + 424, ctx.r9.u32);
	// stw r8,432(r27)
	ctx.current_instruction = 0x881C710C;
	REX_STORE_U32(ctx.r27.u32 + 432, ctx.r8.u32);
loc_881C7110:
	// lwz r11,21660(r27)
	ctx.current_instruction = 0x881C7110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c7368
	if (ctx.cr6.eq) goto loc_881C7368;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C711C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7128;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7190
	if (!ctx.cr6.lt) goto loc_881C7190;
loc_881C7138:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7190
	if (ctx.cr6.eq) goto loc_881C7190;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7144;
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
	ctx.current_instruction = 0x881C7168;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7170;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7180
	if (!ctx.cr0.lt) goto loc_881C7180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7180;
	sub_88156678(ctx, base);
loc_881C7180:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7180;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7138
	if (ctx.cr6.gt) goto loc_881C7138;
loc_881C7190:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7194;
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
	ctx.current_instruction = 0x881C71AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C71B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c71c8
	if (!ctx.cr0.lt) goto loc_881C71C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C71C8;
	sub_88156678(ctx, base);
loc_881C71C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,21664(r27)
	ctx.current_instruction = 0x881C71CC;
	REX_STORE_U32(ctx.r27.u32 + 21664, ctx.r30.u32);
	// beq cr6,0x881c728c
	if (ctx.cr6.eq) goto loc_881C728C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C71D4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C71E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7248
	if (!ctx.cr6.lt) goto loc_881C7248;
loc_881C71F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7248
	if (ctx.cr6.eq) goto loc_881C7248;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C71FC;
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
	ctx.current_instruction = 0x881C7220;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7228;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7238
	if (!ctx.cr0.lt) goto loc_881C7238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7238;
	sub_88156678(ctx, base);
loc_881C7238:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7238;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c71f0
	if (ctx.cr6.gt) goto loc_881C71F0;
loc_881C7248:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C724C;
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
	ctx.current_instruction = 0x881C7264;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7270;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7280
	if (!ctx.cr0.lt) goto loc_881C7280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7280;
	sub_88156678(ctx, base);
loc_881C7280:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x881C7280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,21664(r27)
	ctx.current_instruction = 0x881C7288;
	REX_STORE_U32(ctx.r27.u32 + 21664, ctx.r11.u32);
loc_881C728C:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x881C728C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881c7350
	if (!ctx.cr6.eq) goto loc_881C7350;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7298;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C72A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c730c
	if (!ctx.cr6.lt) goto loc_881C730C;
loc_881C72B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c730c
	if (ctx.cr6.eq) goto loc_881C730C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C72C0;
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
	ctx.current_instruction = 0x881C72E4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C72EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c72fc
	if (!ctx.cr0.lt) goto loc_881C72FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C72FC;
	sub_88156678(ctx, base);
loc_881C72FC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C72FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c72b4
	if (ctx.cr6.gt) goto loc_881C72B4;
loc_881C730C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7310;
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
	ctx.current_instruction = 0x881C7328;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7334;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7344
	if (!ctx.cr0.lt) goto loc_881C7344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7344;
	sub_88156678(ctx, base);
loc_881C7344:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x881C7344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,21664(r27)
	ctx.current_instruction = 0x881C734C;
	REX_STORE_U32(ctx.r27.u32 + 21664, ctx.r11.u32);
loc_881C7350:
	// lwz r11,21664(r27)
	ctx.current_instruction = 0x881C7350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21664);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,21668(r27)
	ctx.current_instruction = 0x881C7360;
	REX_STORE_U32(ctx.r27.u32 + 21668, ctx.r9.u32);
	// stw r8,21672(r27)
	ctx.current_instruction = 0x881C7364;
	REX_STORE_U32(ctx.r27.u32 + 21672, ctx.r8.u32);
loc_881C7368:
	// stw r22,4020(r27)
	ctx.current_instruction = 0x881C7368;
	REX_STORE_U32(ctx.r27.u32 + 4020, ctx.r22.u32);
	// stw r22,20732(r27)
	ctx.current_instruction = 0x881C736C;
	REX_STORE_U32(ctx.r27.u32 + 20732, ctx.r22.u32);
	// stw r22,20728(r27)
	ctx.current_instruction = 0x881C7370;
	REX_STORE_U32(ctx.r27.u32 + 20728, ctx.r22.u32);
loc_881C7374:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7374;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r28,3
	ctx.r28.s64 = 3;
	// lwz r11,248(r27)
	ctx.current_instruction = 0x881C737C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 248);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C738C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x881c7674
	if (!ctx.cr6.gt) goto loc_881C7674;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c73f8
	if (!ctx.cr6.lt) goto loc_881C73F8;
loc_881C73A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c73f8
	if (ctx.cr6.eq) goto loc_881C73F8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C73AC;
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
	ctx.current_instruction = 0x881C73D0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C73D8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c73e8
	if (!ctx.cr0.lt) goto loc_881C73E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C73E8;
	sub_88156678(ctx, base);
loc_881C73E8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C73E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c73a0
	if (ctx.cr6.gt) goto loc_881C73A0;
loc_881C73F8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C73FC;
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
	ctx.current_instruction = 0x881C7414;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7420;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7430
	if (!ctx.cr0.lt) goto loc_881C7430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7430;
	sub_88156678(ctx, base);
loc_881C7430:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c7968
	if (!ctx.cr6.eq) goto loc_881C7968;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7438;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c74ac
	if (!ctx.cr6.lt) goto loc_881C74AC;
loc_881C7454:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c74ac
	if (ctx.cr6.eq) goto loc_881C74AC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7460;
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
	ctx.current_instruction = 0x881C7484;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C748C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c749c
	if (!ctx.cr0.lt) goto loc_881C749C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C749C;
	sub_88156678(ctx, base);
loc_881C749C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C749C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7454
	if (ctx.cr6.gt) goto loc_881C7454;
loc_881C74AC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C74B0;
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
	ctx.current_instruction = 0x881C74C8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C74D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c74e4
	if (!ctx.cr0.lt) goto loc_881C74E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C74E4;
	sub_88156678(ctx, base);
loc_881C74E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c7950
	if (!ctx.cr6.eq) goto loc_881C7950;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C74EC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C74F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7560
	if (!ctx.cr6.lt) goto loc_881C7560;
loc_881C7508:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7560
	if (ctx.cr6.eq) goto loc_881C7560;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7514;
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
	ctx.current_instruction = 0x881C7538;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7540;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7550
	if (!ctx.cr0.lt) goto loc_881C7550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7550;
	sub_88156678(ctx, base);
loc_881C7550:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7550;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7508
	if (ctx.cr6.gt) goto loc_881C7508;
loc_881C7560:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7564;
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
	ctx.current_instruction = 0x881C757C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7588;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7598
	if (!ctx.cr0.lt) goto loc_881C7598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7598;
	sub_88156678(ctx, base);
loc_881C7598:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c7960
	if (!ctx.cr6.eq) goto loc_881C7960;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C75A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881c7958
	if (ctx.cr6.eq) goto loc_881C7958;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x881c7958
	if (!ctx.cr6.eq) goto loc_881C7958;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C75B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C75C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7628
	if (!ctx.cr6.lt) goto loc_881C7628;
loc_881C75D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7628
	if (ctx.cr6.eq) goto loc_881C7628;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C75DC;
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
	ctx.current_instruction = 0x881C7600;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7608;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7618
	if (!ctx.cr0.lt) goto loc_881C7618;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7618;
	sub_88156678(ctx, base);
loc_881C7618:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c75d0
	if (ctx.cr6.gt) goto loc_881C75D0;
loc_881C7628:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C762C;
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
	ctx.current_instruction = 0x881C7644;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7650;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7660
	if (!ctx.cr0.lt) goto loc_881C7660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7660;
	sub_88156678(ctx, base);
loc_881C7660:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c7958
	if (ctx.cr6.eq) goto loc_881C7958;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// stw r23,4020(r27)
	ctx.current_instruction = 0x881C766C;
	REX_STORE_U32(ctx.r27.u32 + 4020, ctx.r23.u32);
	// b 0x881c7374
	goto loc_881C7374;
loc_881C7674:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c76d4
	if (!ctx.cr6.lt) goto loc_881C76D4;
loc_881C767C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c76d4
	if (ctx.cr6.eq) goto loc_881C76D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7688;
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
	ctx.current_instruction = 0x881C76AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C76B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c76c4
	if (!ctx.cr0.lt) goto loc_881C76C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C76C4;
	sub_88156678(ctx, base);
loc_881C76C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C76C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c767c
	if (ctx.cr6.gt) goto loc_881C767C;
loc_881C76D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C76D8;
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
	ctx.current_instruction = 0x881C76F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C76FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c770c
	if (!ctx.cr0.lt) goto loc_881C770C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C770C;
	sub_88156678(ctx, base);
loc_881C770C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c7950
	if (!ctx.cr6.eq) goto loc_881C7950;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7714;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7788
	if (!ctx.cr6.lt) goto loc_881C7788;
loc_881C7730:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7788
	if (ctx.cr6.eq) goto loc_881C7788;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C773C;
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
	ctx.current_instruction = 0x881C7760;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7768;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7778
	if (!ctx.cr0.lt) goto loc_881C7778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7778;
	sub_88156678(ctx, base);
loc_881C7778:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7778;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7730
	if (ctx.cr6.gt) goto loc_881C7730;
loc_881C7788:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C778C;
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
	ctx.current_instruction = 0x881C77A4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C77B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c77c0
	if (!ctx.cr0.lt) goto loc_881C77C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C77C0;
	sub_88156678(ctx, base);
loc_881C77C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c7958
	if (!ctx.cr6.eq) goto loc_881C7958;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C77C8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C77D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c783c
	if (!ctx.cr6.lt) goto loc_881C783C;
loc_881C77E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c783c
	if (ctx.cr6.eq) goto loc_881C783C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C77F0;
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
	ctx.current_instruction = 0x881C7814;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C781C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c782c
	if (!ctx.cr0.lt) goto loc_881C782C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C782C;
	sub_88156678(ctx, base);
loc_881C782C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C782C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c77e4
	if (ctx.cr6.gt) goto loc_881C77E4;
loc_881C783C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7840;
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
	ctx.current_instruction = 0x881C7858;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7864;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7874
	if (!ctx.cr0.lt) goto loc_881C7874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7874;
	sub_88156678(ctx, base);
loc_881C7874:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c7960
	if (!ctx.cr6.eq) goto loc_881C7960;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C787C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x881c7968
	if (ctx.cr6.eq) goto loc_881C7968;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x881c7968
	if (!ctx.cr6.eq) goto loc_881C7968;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7890;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C789C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7904
	if (!ctx.cr6.lt) goto loc_881C7904;
loc_881C78AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7904
	if (ctx.cr6.eq) goto loc_881C7904;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C78B8;
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
	ctx.current_instruction = 0x881C78DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C78E4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c78f4
	if (!ctx.cr0.lt) goto loc_881C78F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C78F4;
	sub_88156678(ctx, base);
loc_881C78F4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C78F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c78ac
	if (ctx.cr6.gt) goto loc_881C78AC;
loc_881C7904:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7908;
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
	ctx.current_instruction = 0x881C7920;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C792C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c793c
	if (!ctx.cr0.lt) goto loc_881C793C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C793C;
	sub_88156678(ctx, base);
loc_881C793C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881c7968
	if (ctx.cr6.eq) goto loc_881C7968;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// stw r23,4020(r27)
	ctx.current_instruction = 0x881C7948;
	REX_STORE_U32(ctx.r27.u32 + 4020, ctx.r23.u32);
	// b 0x881c7374
	goto loc_881C7374;
loc_881C7950:
	// stw r23,4016(r27)
	ctx.current_instruction = 0x881C7950;
	REX_STORE_U32(ctx.r27.u32 + 4016, ctx.r23.u32);
	// b 0x881c796c
	goto loc_881C796C;
loc_881C7958:
	// stw r22,4016(r27)
	ctx.current_instruction = 0x881C7958;
	REX_STORE_U32(ctx.r27.u32 + 4016, ctx.r22.u32);
	// b 0x881c796c
	goto loc_881C796C;
loc_881C7960:
	// stw r24,4016(r27)
	ctx.current_instruction = 0x881C7960;
	REX_STORE_U32(ctx.r27.u32 + 4016, ctx.r24.u32);
	// b 0x881c796c
	goto loc_881C796C;
loc_881C7968:
	// stw r28,4016(r27)
	ctx.current_instruction = 0x881C7968;
	REX_STORE_U32(ctx.r27.u32 + 4016, ctx.r28.u32);
loc_881C796C:
	// lwz r11,4020(r27)
	ctx.current_instruction = 0x881C796C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c8064
	if (ctx.cr6.eq) goto loc_881C8064;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7978;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7984;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c79ec
	if (!ctx.cr6.lt) goto loc_881C79EC;
loc_881C7994:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c79ec
	if (ctx.cr6.eq) goto loc_881C79EC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C79A0;
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
	ctx.current_instruction = 0x881C79C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C79CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c79dc
	if (!ctx.cr0.lt) goto loc_881C79DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C79DC;
	sub_88156678(ctx, base);
loc_881C79DC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C79DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7994
	if (ctx.cr6.gt) goto loc_881C7994;
loc_881C79EC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C79F0;
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
	ctx.current_instruction = 0x881C7A08;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7A14;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7a24
	if (!ctx.cr0.lt) goto loc_881C7A24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7A24;
	sub_88156678(ctx, base);
loc_881C7A24:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7A24;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// beq cr6,0x881c7cf8
	if (ctx.cr6.eq) goto loc_881C7CF8;
	// stw r23,20728(r27)
	ctx.current_instruction = 0x881C7A34;
	REX_STORE_U32(ctx.r27.u32 + 20728, ctx.r23.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r23,20732(r27)
	ctx.current_instruction = 0x881C7A3C;
	REX_STORE_U32(ctx.r27.u32 + 20732, ctx.r23.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7A40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7aa8
	if (!ctx.cr6.lt) goto loc_881C7AA8;
loc_881C7A50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7aa8
	if (ctx.cr6.eq) goto loc_881C7AA8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7A5C;
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
	ctx.current_instruction = 0x881C7A80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7A88;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7a98
	if (!ctx.cr0.lt) goto loc_881C7A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7A98;
	sub_88156678(ctx, base);
loc_881C7A98:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7A98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7a50
	if (ctx.cr6.gt) goto loc_881C7A50;
loc_881C7AA8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7AAC;
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
	ctx.current_instruction = 0x881C7AC4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7AD0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7ae0
	if (!ctx.cr0.lt) goto loc_881C7AE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7AE0;
	sub_88156678(ctx, base);
loc_881C7AE0:
	// stw r29,20736(r27)
	ctx.current_instruction = 0x881C7AE0;
	REX_STORE_U32(ctx.r27.u32 + 20736, ctx.r29.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7AE8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7AF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7b58
	if (!ctx.cr6.lt) goto loc_881C7B58;
loc_881C7B00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7b58
	if (ctx.cr6.eq) goto loc_881C7B58;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7B0C;
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
	ctx.current_instruction = 0x881C7B30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7B38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7b48
	if (!ctx.cr0.lt) goto loc_881C7B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7B48;
	sub_88156678(ctx, base);
loc_881C7B48:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7B48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7b00
	if (ctx.cr6.gt) goto loc_881C7B00;
loc_881C7B58:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7B5C;
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
	ctx.current_instruction = 0x881C7B74;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7B80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7b90
	if (!ctx.cr0.lt) goto loc_881C7B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7B90;
	sub_88156678(ctx, base);
loc_881C7B90:
	// stw r29,20740(r27)
	ctx.current_instruction = 0x881C7B90;
	REX_STORE_U32(ctx.r27.u32 + 20740, ctx.r29.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7B98;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7BA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7c08
	if (!ctx.cr6.lt) goto loc_881C7C08;
loc_881C7BB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7c08
	if (ctx.cr6.eq) goto loc_881C7C08;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7BBC;
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
	ctx.current_instruction = 0x881C7BE0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7BE8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7bf8
	if (!ctx.cr0.lt) goto loc_881C7BF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7BF8;
	sub_88156678(ctx, base);
loc_881C7BF8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7BF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7bb0
	if (ctx.cr6.gt) goto loc_881C7BB0;
loc_881C7C08:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7C0C;
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
	ctx.current_instruction = 0x881C7C24;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7C30;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7c40
	if (!ctx.cr0.lt) goto loc_881C7C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7C40;
	sub_88156678(ctx, base);
loc_881C7C40:
	// stw r30,20744(r27)
	ctx.current_instruction = 0x881C7C40;
	REX_STORE_U32(ctx.r27.u32 + 20744, ctx.r30.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7C48;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7C50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7cb8
	if (!ctx.cr6.lt) goto loc_881C7CB8;
loc_881C7C60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7cb8
	if (ctx.cr6.eq) goto loc_881C7CB8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7C6C;
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
	ctx.current_instruction = 0x881C7C90;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7C98;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7ca8
	if (!ctx.cr0.lt) goto loc_881C7CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7CA8;
	sub_88156678(ctx, base);
loc_881C7CA8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7c60
	if (ctx.cr6.gt) goto loc_881C7C60;
loc_881C7CB8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7CBC;
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
	ctx.current_instruction = 0x881C7CD4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7CE0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7f04
	if (!ctx.cr0.lt) goto loc_881C7F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7CF0;
	sub_88156678(ctx, base);
loc_881C7CF0:
	// stw r30,20748(r27)
	ctx.current_instruction = 0x881C7CF0;
	REX_STORE_U32(ctx.r27.u32 + 20748, ctx.r30.u32);
	// b 0x881c8064
	goto loc_881C8064;
loc_881C7CF8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7CF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c7d64
	if (!ctx.cr6.lt) goto loc_881C7D64;
loc_881C7D0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7d64
	if (ctx.cr6.eq) goto loc_881C7D64;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7D18;
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
	ctx.current_instruction = 0x881C7D3C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7D44;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7d54
	if (!ctx.cr0.lt) goto loc_881C7D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7D54;
	sub_88156678(ctx, base);
loc_881C7D54:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7D54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7d0c
	if (ctx.cr6.gt) goto loc_881C7D0C;
loc_881C7D64:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7D68;
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
	ctx.current_instruction = 0x881C7D80;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7D8C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7d9c
	if (!ctx.cr0.lt) goto loc_881C7D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7D9C;
	sub_88156678(ctx, base);
loc_881C7D9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7DA0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r30,6
	ctx.r30.s64 = 6;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// beq cr6,0x881c7f0c
	if (ctx.cr6.eq) goto loc_881C7F0C;
	// stw r23,20732(r27)
	ctx.current_instruction = 0x881C7DB0;
	REX_STORE_U32(ctx.r27.u32 + 20732, ctx.r23.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7DB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7e1c
	if (!ctx.cr6.lt) goto loc_881C7E1C;
loc_881C7DC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7e1c
	if (ctx.cr6.eq) goto loc_881C7E1C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7DD0;
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
	ctx.current_instruction = 0x881C7DF4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7DFC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7e0c
	if (!ctx.cr0.lt) goto loc_881C7E0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7E0C;
	sub_88156678(ctx, base);
loc_881C7E0C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7dc4
	if (ctx.cr6.gt) goto loc_881C7DC4;
loc_881C7E1C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7E20;
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
	ctx.current_instruction = 0x881C7E38;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7E44;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7e54
	if (!ctx.cr0.lt) goto loc_881C7E54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7E54;
	sub_88156678(ctx, base);
loc_881C7E54:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7E54;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r30,20744(r27)
	ctx.current_instruction = 0x881C7E5C;
	REX_STORE_U32(ctx.r27.u32 + 20744, ctx.r30.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7E64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7ecc
	if (!ctx.cr6.lt) goto loc_881C7ECC;
loc_881C7E74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7ecc
	if (ctx.cr6.eq) goto loc_881C7ECC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7E80;
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
	ctx.current_instruction = 0x881C7EA4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7EAC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7ebc
	if (!ctx.cr0.lt) goto loc_881C7EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7EBC;
	sub_88156678(ctx, base);
loc_881C7EBC:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7EBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7e74
	if (ctx.cr6.gt) goto loc_881C7E74;
loc_881C7ECC:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7ED0;
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
	ctx.current_instruction = 0x881C7EE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7EF4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7f04
	if (!ctx.cr0.lt) goto loc_881C7F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7F04;
	sub_88156678(ctx, base);
loc_881C7F04:
	// stw r30,20748(r27)
	ctx.current_instruction = 0x881C7F04;
	REX_STORE_U32(ctx.r27.u32 + 20748, ctx.r30.u32);
	// b 0x881c8064
	goto loc_881C8064;
loc_881C7F0C:
	// stw r23,20728(r27)
	ctx.current_instruction = 0x881C7F0C;
	REX_STORE_U32(ctx.r27.u32 + 20728, ctx.r23.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7F10;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c7f78
	if (!ctx.cr6.lt) goto loc_881C7F78;
loc_881C7F20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c7f78
	if (ctx.cr6.eq) goto loc_881C7F78;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7F2C;
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
	ctx.current_instruction = 0x881C7F50;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C7F58;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c7f68
	if (!ctx.cr0.lt) goto loc_881C7F68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7F68;
	sub_88156678(ctx, base);
loc_881C7F68:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7F68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7f20
	if (ctx.cr6.gt) goto loc_881C7F20;
loc_881C7F78:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C7F7C;
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
	ctx.current_instruction = 0x881C7F94;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C7FA0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c7fb0
	if (!ctx.cr0.lt) goto loc_881C7FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C7FB0;
	sub_88156678(ctx, base);
loc_881C7FB0:
	// stw r29,20736(r27)
	ctx.current_instruction = 0x881C7FB0;
	REX_STORE_U32(ctx.r27.u32 + 20736, ctx.r29.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C7FB8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C7FC0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x881c8028
	if (!ctx.cr6.lt) goto loc_881C8028;
loc_881C7FD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8028
	if (ctx.cr6.eq) goto loc_881C8028;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C7FDC;
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
	ctx.current_instruction = 0x881C8000;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8008;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8018
	if (!ctx.cr0.lt) goto loc_881C8018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8018;
	sub_88156678(ctx, base);
loc_881C8018:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c7fd0
	if (ctx.cr6.gt) goto loc_881C7FD0;
loc_881C8028:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C802C;
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
	ctx.current_instruction = 0x881C8044;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8050;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8060
	if (!ctx.cr0.lt) goto loc_881C8060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8060;
	sub_88156678(ctx, base);
loc_881C8060:
	// stw r30,20740(r27)
	ctx.current_instruction = 0x881C8060;
	REX_STORE_U32(ctx.r27.u32 + 20740, ctx.r30.u32);
loc_881C8064:
	// lwz r11,14852(r27)
	ctx.current_instruction = 0x881C8064;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c80e4
	if (ctx.cr6.eq) goto loc_881C80E4;
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C8070;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x881c80e4
	if (!ctx.cr6.eq) goto loc_881C80E4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x881C8088;
	sub_88160580(ctx, base);
loc_881C8088:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881c6b6c
	if (!ctx.cr6.eq) goto loc_881C6B6C;
	// lwz r11,14868(r27)
	ctx.current_instruction = 0x881C8090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 14868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c80e4
	if (ctx.cr6.eq) goto loc_881C80E4;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x881C809C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c80e4
	if (!ctx.cr6.gt) goto loc_881C80E4;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_881C80B0:
	// lwz r11,0(r10)
	ctx.current_instruction = 0x881C80B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x881c80c8
	if (ctx.cr6.eq) goto loc_881C80C8;
	// rlwimi r11,r23,7,24,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 7) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x881c80cc
	goto loc_881C80CC;
loc_881C80C8:
	// rlwinm r11,r11,0,27,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
loc_881C80CC:
	// stw r11,0(r10)
	ctx.current_instruction = 0x881C80CC;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x881C80D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881c80b0
	if (ctx.cr6.lt) goto loc_881C80B0;
loc_881C80E4:
	// stw r23,452(r27)
	ctx.current_instruction = 0x881C80E4;
	REX_STORE_U32(ctx.r27.u32 + 452, ctx.r23.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C80EC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r11,4016(r27)
	ctx.current_instruction = 0x881C80F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C80FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x881c81a8
	if (!ctx.cr6.eq) goto loc_881C81A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881c8168
	if (!ctx.cr6.lt) goto loc_881C8168;
loc_881C8110:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8168
	if (ctx.cr6.eq) goto loc_881C8168;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C811C;
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
	ctx.current_instruction = 0x881C8140;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8148;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8158
	if (!ctx.cr0.lt) goto loc_881C8158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8158;
	sub_88156678(ctx, base);
loc_881C8158:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8110
	if (ctx.cr6.gt) goto loc_881C8110;
loc_881C8168:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C816C;
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
	ctx.current_instruction = 0x881C8184;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8190;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c81a0
	if (!ctx.cr0.lt) goto loc_881C81A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C81A0;
	sub_88156678(ctx, base);
loc_881C81A0:
	// addi r11,r30,5226
	ctx.r11.s64 = ctx.r30.s64 + 5226;
	// b 0x881c8244
	goto loc_881C8244;
loc_881C81A8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881c8208
	if (!ctx.cr6.lt) goto loc_881C8208;
loc_881C81B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8208
	if (ctx.cr6.eq) goto loc_881C8208;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C81BC;
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
	ctx.current_instruction = 0x881C81E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C81E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c81f8
	if (!ctx.cr0.lt) goto loc_881C81F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C81F8;
	sub_88156678(ctx, base);
loc_881C81F8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C81F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c81b0
	if (ctx.cr6.gt) goto loc_881C81B0;
loc_881C8208:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C820C;
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
	ctx.current_instruction = 0x881C8224;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8230;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8240
	if (!ctx.cr0.lt) goto loc_881C8240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8240;
	sub_88156678(ctx, base);
loc_881C8240:
	// addi r11,r30,5234
	ctx.r11.s64 = ctx.r30.s64 + 5234;
loc_881C8244:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8248;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,21700(r27)
	ctx.current_instruction = 0x881C824C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21700);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x881C8258;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,20900(r27)
	ctx.current_instruction = 0x881C825C;
	REX_STORE_U32(ctx.r27.u32 + 20900, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8260;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x881c82d4
	if (ctx.cr6.eq) goto loc_881C82D4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881c8338
	if (!ctx.cr6.lt) goto loc_881C8338;
loc_881C8278:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8338
	if (ctx.cr6.eq) goto loc_881C8338;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8284;
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
	ctx.current_instruction = 0x881C82A8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C82B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c82c0
	if (!ctx.cr0.lt) goto loc_881C82C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C82C0;
	sub_88156678(ctx, base);
loc_881C82C0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C82C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8278
	if (ctx.cr6.gt) goto loc_881C8278;
	// b 0x881c8338
	goto loc_881C8338;
loc_881C82D4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c8338
	if (!ctx.cr6.lt) goto loc_881C8338;
loc_881C82E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8338
	if (ctx.cr6.eq) goto loc_881C8338;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C82EC;
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
	ctx.current_instruction = 0x881C8310;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8318;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8328
	if (!ctx.cr0.lt) goto loc_881C8328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8328;
	sub_88156678(ctx, base);
loc_881C8328:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8328;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c82e0
	if (ctx.cr6.gt) goto loc_881C82E0;
loc_881C8338:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C833C;
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
	ctx.current_instruction = 0x881C8350;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// subf. r6,r30,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	ctx.current_instruction = 0x881C835C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bge 0x881c8370
	if (!ctx.cr0.lt) goto loc_881C8370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8370;
	sub_88156678(ctx, base);
loc_881C8370:
	// addi r11,r30,600
	ctx.r11.s64 = ctx.r30.s64 + 600;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8374;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x881C8384;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,2380(r27)
	ctx.current_instruction = 0x881C8388;
	REX_STORE_U32(ctx.r27.u32 + 2380, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C838C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x881c83f4
	if (!ctx.cr6.lt) goto loc_881C83F4;
loc_881C839C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c83f4
	if (ctx.cr6.eq) goto loc_881C83F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C83A8;
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
	ctx.current_instruction = 0x881C83CC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C83D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c83e4
	if (!ctx.cr0.lt) goto loc_881C83E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C83E4;
	sub_88156678(ctx, base);
loc_881C83E4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C83E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c839c
	if (ctx.cr6.gt) goto loc_881C839C;
loc_881C83F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C83F8;
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
	ctx.current_instruction = 0x881C8410;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C841C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c842c
	if (!ctx.cr0.lt) goto loc_881C842C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C842C;
	sub_88156678(ctx, base);
loc_881C842C:
	// addi r11,r30,5430
	ctx.r11.s64 = ctx.r30.s64 + 5430;
	// lwz r10,4016(r27)
	ctx.current_instruction = 0x881C8430;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4016);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r8,r9,r27
	ctx.current_instruction = 0x881C843C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r8,21716(r27)
	ctx.current_instruction = 0x881C8440;
	REX_STORE_U32(ctx.r27.u32 + 21716, ctx.r8.u32);
	// stw r8,21712(r27)
	ctx.current_instruction = 0x881C8444;
	REX_STORE_U32(ctx.r27.u32 + 21712, ctx.r8.u32);
	// bne cr6,0x881c8508
	if (!ctx.cr6.eq) goto loc_881C8508;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C844C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c84c0
	if (!ctx.cr6.lt) goto loc_881C84C0;
loc_881C8468:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c84c0
	if (ctx.cr6.eq) goto loc_881C84C0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8474;
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
	ctx.current_instruction = 0x881C8498;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C84A0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c84b0
	if (!ctx.cr0.lt) goto loc_881C84B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C84B0;
	sub_88156678(ctx, base);
loc_881C84B0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C84B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8468
	if (ctx.cr6.gt) goto loc_881C8468;
loc_881C84C0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C84C4;
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
	ctx.current_instruction = 0x881C84DC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C84E8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c84f8
	if (!ctx.cr0.lt) goto loc_881C84F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C84F8;
	sub_88156678(ctx, base);
loc_881C84F8:
	// addi r11,r30,5243
	ctx.r11.s64 = ctx.r30.s64 + 5243;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.current_instruction = 0x881C8500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r9,20968(r27)
	ctx.current_instruction = 0x881C8504;
	REX_STORE_U32(ctx.r27.u32 + 20968, ctx.r9.u32);
loc_881C8508:
	// lwz r11,4040(r27)
	ctx.current_instruction = 0x881C8508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4040);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c8524
	if (ctx.cr6.eq) goto loc_881C8524;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x88161130
	ctx.lr = 0x881C8520;
	sub_88161130(ctx, base);
loc_881C8520:
	// b 0x881c8528
	goto loc_881C8528;
loc_881C8524:
	// bl 0x881a5c10
	ctx.lr = 0x881C8528;
	sub_881A5C10(ctx, base);
loc_881C8528:
	// lwz r11,440(r27)
	ctx.current_instruction = 0x881C8528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c86b8
	if (ctx.cr6.eq) goto loc_881C86B8;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8534;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c85a8
	if (!ctx.cr6.lt) goto loc_881C85A8;
loc_881C8550:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c85a8
	if (ctx.cr6.eq) goto loc_881C85A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C855C;
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
	ctx.current_instruction = 0x881C8580;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8588;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8598
	if (!ctx.cr0.lt) goto loc_881C8598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8598;
	sub_88156678(ctx, base);
loc_881C8598:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8598;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8550
	if (ctx.cr6.gt) goto loc_881C8550;
loc_881C85A8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C85AC;
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
	ctx.current_instruction = 0x881C85C4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C85D0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c85e0
	if (!ctx.cr0.lt) goto loc_881C85E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C85E0;
	sub_88156678(ctx, base);
loc_881C85E0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x881c86b0
	if (!ctx.cr6.eq) goto loc_881C86B0;
	// stw r22,332(r27)
	ctx.current_instruction = 0x881C85E8;
	REX_STORE_U32(ctx.r27.u32 + 332, ctx.r22.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C85F0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C85F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881c8660
	if (!ctx.cr6.lt) goto loc_881C8660;
loc_881C8608:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8660
	if (ctx.cr6.eq) goto loc_881C8660;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8614;
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
	ctx.current_instruction = 0x881C8638;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8640;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8650
	if (!ctx.cr0.lt) goto loc_881C8650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8650;
	sub_88156678(ctx, base);
loc_881C8650:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8608
	if (ctx.cr6.gt) goto loc_881C8608;
loc_881C8660:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8664;
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
	ctx.current_instruction = 0x881C867C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8688;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8698
	if (!ctx.cr0.lt) goto loc_881C8698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8698;
	sub_88156678(ctx, base);
loc_881C8698:
	// lis r11,-30717
	ctx.r11.s64 = -2013069312;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-26456
	ctx.r9.s64 = ctx.r11.s64 + -26456;
	// lwzx r8,r10,r9
	ctx.current_instruction = 0x881C86A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,340(r27)
	ctx.current_instruction = 0x881C86A8;
	REX_STORE_U32(ctx.r27.u32 + 340, ctx.r8.u32);
	// b 0x881c86bc
	goto loc_881C86BC;
loc_881C86B0:
	// stw r23,332(r27)
	ctx.current_instruction = 0x881C86B0;
	REX_STORE_U32(ctx.r27.u32 + 332, ctx.r23.u32);
	// b 0x881c86bc
	goto loc_881C86BC;
loc_881C86B8:
	// stw r22,332(r27)
	ctx.current_instruction = 0x881C86B8;
	REX_STORE_U32(ctx.r27.u32 + 332, ctx.r22.u32);
loc_881C86BC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C86BC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C86C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8730
	if (!ctx.cr6.lt) goto loc_881C8730;
loc_881C86D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8730
	if (ctx.cr6.eq) goto loc_881C8730;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C86E4;
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
	ctx.current_instruction = 0x881C8708;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8710;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8720
	if (!ctx.cr0.lt) goto loc_881C8720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8720;
	sub_88156678(ctx, base);
loc_881C8720:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c86d8
	if (ctx.cr6.gt) goto loc_881C86D8;
loc_881C8730:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8734;
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
	ctx.current_instruction = 0x881C874C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8758;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8768
	if (!ctx.cr0.lt) goto loc_881C8768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8768;
	sub_88156678(ctx, base);
loc_881C8768:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	ctx.current_instruction = 0x881C876C;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r30.u32);
	// beq cr6,0x881c882c
	if (ctx.cr6.eq) goto loc_881C882C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8774;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c87e8
	if (!ctx.cr6.lt) goto loc_881C87E8;
loc_881C8790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c87e8
	if (ctx.cr6.eq) goto loc_881C87E8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C879C;
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
	ctx.current_instruction = 0x881C87C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C87C8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c87d8
	if (!ctx.cr0.lt) goto loc_881C87D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C87D8;
	sub_88156678(ctx, base);
loc_881C87D8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C87D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8790
	if (ctx.cr6.gt) goto loc_881C8790;
loc_881C87E8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C87EC;
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
	ctx.current_instruction = 0x881C8804;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8810;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8820
	if (!ctx.cr0.lt) goto loc_881C8820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8820;
	sub_88156678(ctx, base);
loc_881C8820:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x881C8820;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,2964(r27)
	ctx.current_instruction = 0x881C8828;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r11.u32);
loc_881C882C:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x881C882C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8834;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r11,2968(r27)
	ctx.current_instruction = 0x881C883C;
	REX_STORE_U32(ctx.r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2976(r27)
	ctx.current_instruction = 0x881C8840;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r11.u32);
	// stw r11,2980(r27)
	ctx.current_instruction = 0x881C8844;
	REX_STORE_U32(ctx.r27.u32 + 2980, ctx.r11.u32);
	// stw r11,2984(r27)
	ctx.current_instruction = 0x881C8848;
	REX_STORE_U32(ctx.r27.u32 + 2984, ctx.r11.u32);
	// stw r11,2972(r27)
	ctx.current_instruction = 0x881C884C;
	REX_STORE_U32(ctx.r27.u32 + 2972, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8850;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c88b8
	if (!ctx.cr6.lt) goto loc_881C88B8;
loc_881C8860:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c88b8
	if (ctx.cr6.eq) goto loc_881C88B8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C886C;
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
	ctx.current_instruction = 0x881C8890;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8898;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c88a8
	if (!ctx.cr0.lt) goto loc_881C88A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C88A8;
	sub_88156678(ctx, base);
loc_881C88A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C88A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8860
	if (ctx.cr6.gt) goto loc_881C8860;
loc_881C88B8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C88BC;
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
	ctx.current_instruction = 0x881C88D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C88E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c88f0
	if (!ctx.cr0.lt) goto loc_881C88F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C88F0;
	sub_88156678(ctx, base);
loc_881C88F0:
	// stw r30,2092(r27)
	ctx.current_instruction = 0x881C88F0;
	REX_STORE_U32(ctx.r27.u32 + 2092, ctx.r30.u32);
	// b 0x881c8f0c
	goto loc_881C8F0C;
loc_881C88F8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x881C8904;
	sub_88160580(ctx, base);
loc_881C8904:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881c6b6c
	if (!ctx.cr6.eq) goto loc_881C6B6C;
	// lwz r11,20708(r27)
	ctx.current_instruction = 0x881C890C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c8950
	if (ctx.cr6.eq) goto loc_881C8950;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x881C8918;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c8950
	if (!ctx.cr6.gt) goto loc_881C8950;
	// addi r11,r25,-24
	ctx.r11.s64 = ctx.r25.s64 + -24;
loc_881C892C:
	// lwz r9,24(r11)
	ctx.current_instruction = 0x881C892C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,4,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r7,r8,0,28,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stwu r7,24(r11)
	ctx.current_instruction = 0x881C8940;
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r6,144(r27)
	ctx.current_instruction = 0x881C8944;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x881c892c
	if (ctx.cr6.lt) goto loc_881C892C;
loc_881C8950:
	// lwz r11,3004(r27)
	ctx.current_instruction = 0x881C8950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3004);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881c8b2c
	if (ctx.cr6.eq) goto loc_881C8B2C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8960;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C896C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c89d4
	if (!ctx.cr6.lt) goto loc_881C89D4;
loc_881C897C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c89d4
	if (ctx.cr6.eq) goto loc_881C89D4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8988;
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
	ctx.current_instruction = 0x881C89AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C89B4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c89c4
	if (!ctx.cr0.lt) goto loc_881C89C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C89C4;
	sub_88156678(ctx, base);
loc_881C89C4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C89C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c897c
	if (ctx.cr6.gt) goto loc_881C897C;
loc_881C89D4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C89D8;
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
	ctx.current_instruction = 0x881C89F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C89FC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8a0c
	if (!ctx.cr0.lt) goto loc_881C8A0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8A0C;
	sub_88156678(ctx, base);
loc_881C8A0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c8a1c
	if (!ctx.cr6.eq) goto loc_881C8A1C;
	// stw r22,3004(r27)
	ctx.current_instruction = 0x881C8A14;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r22.u32);
	// b 0x881c8b2c
	goto loc_881C8B2C;
loc_881C8A1C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8A1C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8A28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8a90
	if (!ctx.cr6.lt) goto loc_881C8A90;
loc_881C8A38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8a90
	if (ctx.cr6.eq) goto loc_881C8A90;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8A44;
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
	ctx.current_instruction = 0x881C8A68;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8A70;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8a80
	if (!ctx.cr0.lt) goto loc_881C8A80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8A80;
	sub_88156678(ctx, base);
loc_881C8A80:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8A80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8a38
	if (ctx.cr6.gt) goto loc_881C8A38;
loc_881C8A90:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8A94;
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
	ctx.current_instruction = 0x881C8AAC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8AB8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8ac8
	if (!ctx.cr0.lt) goto loc_881C8AC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8AC8;
	sub_88156678(ctx, base);
loc_881C8AC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881c8ad8
	if (!ctx.cr6.eq) goto loc_881C8AD8;
	// stw r23,3004(r27)
	ctx.current_instruction = 0x881C8AD0;
	REX_STORE_U32(ctx.r27.u32 + 3004, ctx.r23.u32);
	// b 0x881c8b2c
	goto loc_881C8B2C;
loc_881C8AD8:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88160580
	ctx.lr = 0x881C8AE4;
	sub_88160580(ctx, base);
loc_881C8AE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881c6b6c
	if (!ctx.cr6.eq) goto loc_881C6B6C;
	// lwz r11,21644(r27)
	ctx.current_instruction = 0x881C8AEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 21644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c8b2c
	if (ctx.cr6.eq) goto loc_881C8B2C;
	// lwz r11,144(r27)
	ctx.current_instruction = 0x881C8AF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881c8b2c
	if (!ctx.cr6.gt) goto loc_881C8B2C;
	// addi r11,r25,-24
	ctx.r11.s64 = ctx.r25.s64 + -24;
loc_881C8B0C:
	// lwz r9,24(r11)
	ctx.current_instruction = 0x881C8B0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,12,20,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x800) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF7FF);
	// stwu r8,24(r11)
	ctx.current_instruction = 0x881C8B1C;
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,144(r27)
	ctx.current_instruction = 0x881C8B20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 144);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881c8b0c
	if (ctx.cr6.lt) goto loc_881C8B0C;
loc_881C8B2C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8B2C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8ba0
	if (!ctx.cr6.lt) goto loc_881C8BA0;
loc_881C8B48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8ba0
	if (ctx.cr6.eq) goto loc_881C8BA0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8B54;
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
	ctx.current_instruction = 0x881C8B78;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8B80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8b90
	if (!ctx.cr0.lt) goto loc_881C8B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8B90;
	sub_88156678(ctx, base);
loc_881C8B90:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8B90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8b48
	if (ctx.cr6.gt) goto loc_881C8B48;
loc_881C8BA0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8BA4;
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
	ctx.current_instruction = 0x881C8BBC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8BC8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8bd8
	if (!ctx.cr0.lt) goto loc_881C8BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8BD8;
	sub_88156678(ctx, base);
loc_881C8BD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	ctx.current_instruction = 0x881C8BDC;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r30.u32);
	// beq cr6,0x881c8c9c
	if (ctx.cr6.eq) goto loc_881C8C9C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8BE4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8c58
	if (!ctx.cr6.lt) goto loc_881C8C58;
loc_881C8C00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8c58
	if (ctx.cr6.eq) goto loc_881C8C58;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8C0C;
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
	ctx.current_instruction = 0x881C8C30;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8C38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8c48
	if (!ctx.cr0.lt) goto loc_881C8C48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8C48;
	sub_88156678(ctx, base);
loc_881C8C48:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8C48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8c00
	if (ctx.cr6.gt) goto loc_881C8C00;
loc_881C8C58:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8C5C;
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
	ctx.current_instruction = 0x881C8C74;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8C80;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8c90
	if (!ctx.cr0.lt) goto loc_881C8C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8C90;
	sub_88156678(ctx, base);
loc_881C8C90:
	// lwz r11,2964(r27)
	ctx.current_instruction = 0x881C8C90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2964);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,2964(r27)
	ctx.current_instruction = 0x881C8C98;
	REX_STORE_U32(ctx.r27.u32 + 2964, ctx.r11.u32);
loc_881C8C9C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8C9C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8CA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8d10
	if (!ctx.cr6.lt) goto loc_881C8D10;
loc_881C8CB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8d10
	if (ctx.cr6.eq) goto loc_881C8D10;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8CC4;
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
	ctx.current_instruction = 0x881C8CE8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8CF0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8d00
	if (!ctx.cr0.lt) goto loc_881C8D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8D00;
	sub_88156678(ctx, base);
loc_881C8D00:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8D00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8cb8
	if (ctx.cr6.gt) goto loc_881C8CB8;
loc_881C8D10:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8D14;
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
	ctx.current_instruction = 0x881C8D2C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8D38;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8d48
	if (!ctx.cr0.lt) goto loc_881C8D48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8D48;
	sub_88156678(ctx, base);
loc_881C8D48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,2976(r27)
	ctx.current_instruction = 0x881C8D4C;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r30.u32);
	// beq cr6,0x881c8e0c
	if (ctx.cr6.eq) goto loc_881C8E0C;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8D54;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8dc8
	if (!ctx.cr6.lt) goto loc_881C8DC8;
loc_881C8D70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8dc8
	if (ctx.cr6.eq) goto loc_881C8DC8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8D7C;
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
	ctx.current_instruction = 0x881C8DA0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8DA8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8db8
	if (!ctx.cr0.lt) goto loc_881C8DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8DB8;
	sub_88156678(ctx, base);
loc_881C8DB8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8DB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8d70
	if (ctx.cr6.gt) goto loc_881C8D70;
loc_881C8DC8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8DCC;
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
	ctx.current_instruction = 0x881C8DE4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8DF0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8e00
	if (!ctx.cr0.lt) goto loc_881C8E00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8E00;
	sub_88156678(ctx, base);
loc_881C8E00:
	// lwz r11,2976(r27)
	ctx.current_instruction = 0x881C8E00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2976);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,2976(r27)
	ctx.current_instruction = 0x881C8E08;
	REX_STORE_U32(ctx.r27.u32 + 2976, ctx.r11.u32);
loc_881C8E0C:
	// lwz r11,2976(r27)
	ctx.current_instruction = 0x881C8E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2976);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r31,84(r27)
	ctx.current_instruction = 0x881C8E14;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r11,2980(r27)
	ctx.current_instruction = 0x881C8E1C;
	REX_STORE_U32(ctx.r27.u32 + 2980, ctx.r11.u32);
	// stw r11,2984(r27)
	ctx.current_instruction = 0x881C8E20;
	REX_STORE_U32(ctx.r27.u32 + 2984, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8E24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x881c8e8c
	if (!ctx.cr6.lt) goto loc_881C8E8C;
loc_881C8E34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881c8e8c
	if (ctx.cr6.eq) goto loc_881C8E8C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881C8E40;
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
	ctx.current_instruction = 0x881C8E64;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881C8E6C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881c8e7c
	if (!ctx.cr0.lt) goto loc_881C8E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8E7C;
	sub_88156678(ctx, base);
loc_881C8E7C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881C8E7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881c8e34
	if (ctx.cr6.gt) goto loc_881C8E34;
loc_881C8E8C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881C8E90;
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
	ctx.current_instruction = 0x881C8EA8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881C8EB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881c8ec4
	if (!ctx.cr0.lt) goto loc_881C8EC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881C8EC4;
	sub_88156678(ctx, base);
loc_881C8EC4:
	// lwz r11,4040(r27)
	ctx.current_instruction = 0x881C8EC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4040);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,2092(r27)
	ctx.current_instruction = 0x881C8ECC;
	REX_STORE_U32(ctx.r27.u32 + 2092, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c8ee4
	if (ctx.cr6.eq) goto loc_881C8EE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88161130
	ctx.lr = 0x881C8EE0;
	sub_88161130(ctx, base);
loc_881C8EE0:
	// b 0x881c8ee8
	goto loc_881C8EE8;
loc_881C8EE4:
	// bl 0x881a5c10
	ctx.lr = 0x881C8EE8;
	sub_881A5C10(ctx, base);
loc_881C8EE8:
	// lwz r11,288(r27)
	ctx.current_instruction = 0x881C8EE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c8f0c
	if (!ctx.cr6.eq) goto loc_881C8F0C;
	// lwz r11,20688(r27)
	ctx.current_instruction = 0x881C8EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881c8f08
	if (!ctx.cr6.eq) goto loc_881C8F08;
	// stw r22,22236(r27)
	ctx.current_instruction = 0x881C8F00;
	REX_STORE_U32(ctx.r27.u32 + 22236, ctx.r22.u32);
	// b 0x881c8f0c
	goto loc_881C8F0C;
loc_881C8F08:
	// stw r22,22240(r27)
	ctx.current_instruction = 0x881C8F08;
	REX_STORE_U32(ctx.r27.u32 + 22240, ctx.r22.u32);
loc_881C8F0C:
	// lwz r11,3004(r27)
	ctx.current_instruction = 0x881C8F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881c8f54
	if (ctx.cr6.eq) goto loc_881C8F54;
	// lwz r11,1904(r27)
	ctx.current_instruction = 0x881C8F1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// sth r22,16(r11)
	ctx.current_instruction = 0x881C8F20;
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r22.u16);
	// lwz r10,1904(r27)
	ctx.current_instruction = 0x881C8F24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// sth r22,0(r10)
	ctx.current_instruction = 0x881C8F28;
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r22.u16);
	// lwz r9,1908(r27)
	ctx.current_instruction = 0x881C8F2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r22,16(r9)
	ctx.current_instruction = 0x881C8F30;
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r22.u16);
	// lwz r8,1908(r27)
	ctx.current_instruction = 0x881C8F34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r22,0(r8)
	ctx.current_instruction = 0x881C8F38;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r22.u16);
	// lwz r11,84(r27)
	ctx.current_instruction = 0x881C8F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881C8F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881C8F54:
	// lwz r10,1904(r27)
	ctx.current_instruction = 0x881C8F54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// li r11,128
	ctx.r11.s64 = 128;
	// sth r11,16(r10)
	ctx.current_instruction = 0x881C8F5C;
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r9,1904(r27)
	ctx.current_instruction = 0x881C8F60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1904);
	// sth r11,0(r9)
	ctx.current_instruction = 0x881C8F64;
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lwz r8,1908(r27)
	ctx.current_instruction = 0x881C8F68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r11,16(r8)
	ctx.current_instruction = 0x881C8F6C;
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r11.u16);
	// lwz r7,1908(r27)
	ctx.current_instruction = 0x881C8F70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 1908);
	// sth r11,0(r7)
	ctx.current_instruction = 0x881C8F74;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// lwz r11,84(r27)
	ctx.current_instruction = 0x881C8F78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x881C8F7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88220968) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88220968;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88220968) {
			switch (rex_dispatch_address) {
				case 0x88220970:
				case 0x882209D4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88220968;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88220970: goto loc_88220970;
		case 0x882209D4: goto loc_882209D4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88220970;
	__savegprlr_27(ctx, base);
loc_88220970:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x88220970;
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
	ctx.current_instruction = 0x88220990;
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
	ctx.lr = 0x882209D4;
	sub_88218F60(ctx, base);
loc_882209D4:
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
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v2,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// bne cr6,0x88220abc
	if (!ctx.cr6.eq) goto loc_88220ABC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220bb4
	if (!ctx.cr6.gt) goto loc_88220BB4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88220A30:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	ctx.current_instruction = 0x88220AA8;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88220AAC;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88220a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220A30;
	// b 0x88220bb4
	goto loc_88220BB4;
loc_88220ABC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220bb4
	if (!ctx.cr6.gt) goto loc_88220BB4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_88220AD4:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
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
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
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
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88220ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220AD4;
loc_88220BB4:
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

DEFINE_REX_FUNC(sub_88225B98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88225B98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88225B98) {
			switch (rex_dispatch_address) {
				case 0x88225BA0:
				case 0x88225BEC:
				case 0x88225C10:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88225B98;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88225BA0: goto loc_88225BA0;
		case 0x88225BEC: goto loc_88225BEC;
		case 0x88225C10: goto loc_88225C10;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x88225BA0;
	__savegprlr_28(ctx, base);
loc_88225BA0:
	// stwu r1,-912(r1)
	ctx.current_instruction = 0x88225BA0;
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.current_instruction = 0x88225BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// slw r29,r8,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r28,r7,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	ctx.current_instruction = 0x88225BE0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8821b4b8
	ctx.lr = 0x88225BEC;
	sub_8821B4B8(ctx, base);
loc_88225BEC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x88222bc8
	ctx.lr = 0x88225C10;
	sub_88222BC8(ctx, base);
loc_88225C10:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88226590) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88226590;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88226590) {
			switch (rex_dispatch_address) {
				case 0x882265E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88226590;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882265E0: goto loc_882265E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88226594;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88226598;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8822659C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.current_instruction = 0x882265A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	ctx.current_instruction = 0x882265B4;
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
	// bl 0x88222908
	ctx.lr = 0x882265E0;
	sub_88222908(ctx, base);
loc_882265E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x882265E4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x882265EC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88226F08) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88226F08);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88226F08;
	ctx.current_instruction = 0x88226F08;
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	ctx.current_instruction = 0x88226F08;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88226f6c
	if (!ctx.cr6.eq) goto loc_88226F6C;
	// ld r11,0(r3)
	ctx.current_instruction = 0x88226F20;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r5)
	ctx.current_instruction = 0x88226F24;
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ldx r10,r3,r4
	ctx.current_instruction = 0x88226F28;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	ctx.current_instruction = 0x88226F2C;
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r11,r7,r9
	ctx.current_instruction = 0x88226F30;
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r11,r5,r8
	ctx.current_instruction = 0x88226F34;
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r5.u32 = ea;
	// ldx r10,r7,r4
	ctx.current_instruction = 0x88226F38;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	ctx.current_instruction = 0x88226F3C;
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r11,r7,r9
	ctx.current_instruction = 0x88226F40;
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r11,r5,r8
	ctx.current_instruction = 0x88226F44;
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r5.u32 = ea;
	// ldx r10,r7,r4
	ctx.current_instruction = 0x88226F48;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	ctx.current_instruction = 0x88226F4C;
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r9,r7,r9
	ctx.current_instruction = 0x88226F50;
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r9,r5,r8
	ctx.current_instruction = 0x88226F54;
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r5.u32 = ea;
	// ldx r8,r7,r4
	ctx.current_instruction = 0x88226F58;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r8,r5,r6
	ctx.current_instruction = 0x88226F5C;
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u64);
loc_88226F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.current_instruction = 0x88226F64;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88226F6C:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvlx128 v62,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r31,84(r1)
	ctx.current_instruction = 0x88226F80;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lvrx128 v61,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvrx128 v60,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v53,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v52,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvx128 v52,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v51,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v50,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v48,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v46,v51,v47
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v48,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v45,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v44,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v40,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// stvx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvx128 v40,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne cr6,0x88226f60
	if (!ctx.cr6.eq) goto loc_88226F60;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx128 v39,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v37,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvlx128 v36,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v34,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// stvx128 v37,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvrx128 v32,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lvrx128 v33,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v60,v62,v33
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v61,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// stvx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v58,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvx128 v57,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v50,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v48,v53,v49
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v48,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	ctx.current_instruction = 0x882270D8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8822BE38) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8822BE38;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8822BE38) {
			switch (rex_dispatch_address) {
				case 0x8822BE40:
				case 0x8822BF08:
				case 0x8822BF5C:
				case 0x8822C0DC:
				case 0x8822C10C:
				case 0x8822C1FC:
				case 0x8822C2CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8822BE38;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822BE40: goto loc_8822BE40;
		case 0x8822BF08: goto loc_8822BF08;
		case 0x8822BF5C: goto loc_8822BF5C;
		case 0x8822C0DC: goto loc_8822C0DC;
		case 0x8822C10C: goto loc_8822C10C;
		case 0x8822C1FC: goto loc_8822C1FC;
		case 0x8822C2CC: goto loc_8822C2CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x8822BE40;
	__savegprlr_19(ctx, base);
loc_8822BE40:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x8822BE40;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,50(r3)
	ctx.current_instruction = 0x8822BE44;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// lwz r30,292(r3)
	ctx.current_instruction = 0x8822BE50;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r9,348(r3)
	ctx.current_instruction = 0x8822BE64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r6,284(r3)
	ctx.current_instruction = 0x8822BE78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r5,r9
	ctx.current_instruction = 0x8822BE80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r31,r7,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r3,r11,1,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r31.u64;
	// subf r10,r3,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r3.u64;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r27,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 16;
	// stw r28,96(r1)
	ctx.current_instruction = 0x8822BEA0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// stw r27,100(r1)
	ctx.current_instruction = 0x8822BEAC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// clrlwi r10,r27,30
	ctx.r10.u64 = ctx.r27.u32 & 0x3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addis r3,r8,115
	ctx.r3.s64 = ctx.r8.s64 + 7536640;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r3,115
	ctx.r3.s64 = ctx.r3.s64 + 115;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r23,104(r1)
	ctx.current_instruction = 0x8822BED8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// srawi r22,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r8.s32 >> 1;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r22,108(r1)
	ctx.current_instruction = 0x8822BEEC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8822bf10
	if (ctx.cr6.eq) goto loc_8822BF10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8822bc98
	ctx.lr = 0x8822BF08;
	sub_8822BC98(ctx, base);
loc_8822BF08:
	// lwz r28,96(r1)
	ctx.current_instruction = 0x8822BF08;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	ctx.current_instruction = 0x8822BF0C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8822BF10:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 1;
	// rlwimi r11,r22,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r6,r7,59
	ctx.r6.s64 = ctx.r7.s64 + 3866624;
	// addi r6,r6,59
	ctx.r6.s64 = ctx.r6.s64 + 59;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8822bf64
	if (ctx.cr6.eq) goto loc_8822BF64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8822bd68
	ctx.lr = 0x8822BF5C;
	sub_8822BD68(ctx, base);
loc_8822BF5C:
	// lwz r23,104(r1)
	ctx.current_instruction = 0x8822BF5C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,108(r1)
	ctx.current_instruction = 0x8822BF60;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8822BF64:
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// lhz r31,74(r29)
	ctx.current_instruction = 0x8822BF68;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// srawi r11,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 2;
	// srawi r8,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 2;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r11,-10096(r9)
	ctx.current_instruction = 0x8822BF78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -10096);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8822c00c
	if (!ctx.cr0.eq) goto loc_8822C00C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// dcbt r10,r30
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r30
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r30
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r30
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r31,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r30
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8822C00C:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// dcbt r8,r30
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// dcbt r7,r30
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// mulli r10,r31,11
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(11));
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// dcbt r4,r30
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// dcbt r10,r30
	// mulli r10,r31,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(13));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// dcbt r8,r30
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r31,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// dcbt r3,r30
	// clrlwi r27,r27,30
	ctx.r27.u64 = ctx.r27.u32 & 0x3;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8822C090;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r10,r28,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r11,-10096(r9)
	ctx.current_instruction = 0x8822C0A0;
	REX_STORE_U32(ctx.r9.u32 + -10096, ctx.r11.u32);
	// clrlwi r28,r28,30
	ctx.r28.u64 = ctx.r28.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r3,r4,r29
	ctx.current_instruction = 0x8822C0C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8822C0DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C0DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8822c10c
	if (ctx.cr6.eq) goto loc_8822C10C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r29)
	ctx.current_instruction = 0x8822C0E8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 35);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8822C0F0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881cd1c8
	ctx.lr = 0x8822C10C;
	sub_881CD1C8(ctx, base);
loc_8822C10C:
	// lis r27,-30678
	ctx.r27.s64 = -2010513408;
	// lhz r6,76(r29)
	ctx.current_instruction = 0x8822C110;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 2;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r11,-10092(r27)
	ctx.current_instruction = 0x8822C120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -10092);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + ctx.r21.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r20
	ctx.r31.u64 = ctx.r10.u64 + ctx.r20.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8822c1b4
	if (!ctx.cr0.eq) goto loc_8822C1B4;
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
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8822C1B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8822C1B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// clrlwi r30,r22,30
	ctx.r30.u64 = ctx.r22.u32 & 0x3;
	// stw r11,-10092(r27)
	ctx.current_instruction = 0x8822C1C0;
	REX_STORE_U32(ctx.r27.u32 + -10092, ctx.r11.u32);
	// rlwinm r11,r23,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xC;
	// lbz r9,35(r29)
	ctx.current_instruction = 0x8822C1C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 35);
	// clrlwi r28,r23,30
	ctx.r28.u64 = ctx.r23.u32 & 0x3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x8822C1F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8822C1FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C1FC:
	// lwz r11,-10092(r27)
	ctx.current_instruction = 0x8822C1FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -10092);
	// lhz r6,76(r29)
	ctx.current_instruction = 0x8822C200;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8822c288
	if (!ctx.cr0.eq) goto loc_8822C288;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r31
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r31
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r31
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r31
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r31
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8822C288:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8822C28C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,308(r1)
	ctx.current_instruction = 0x8822C294;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,-10092(r27)
	ctx.current_instruction = 0x8822C298;
	REX_STORE_U32(ctx.r27.u32 + -10092, ctx.r11.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r9,r29
	ctx.current_instruction = 0x8822C2BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r9,35(r29)
	ctx.current_instruction = 0x8822C2C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 35);
	// bctrl 
	ctx.lr = 0x8822C2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8822C2CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

