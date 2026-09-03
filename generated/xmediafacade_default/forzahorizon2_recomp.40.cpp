#include "forzahorizon2_funcs.40.h"

DEFINE_REX_FUNC(sub_880503B8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880503B8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880503B8;
	ctx.current_instruction = 0x880503B8;
	// b 0x880561c8
	sub_880561C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88050448) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050448);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050448;
	ctx.current_instruction = 0x88050448;
	// b 0x88056dc0
	sub_88056DC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restgprlr_29) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805089C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x8805089C;
	ctx.current_instruction = 0x8805089C;
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

DEFINE_REX_FUNC(sub_88050CE0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88050CE0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88050CE0) {
			switch (rex_dispatch_address) {
				case 0x88050CF4:
				case 0x88050CFC:
				case 0x88050D04:
				case 0x88050D0C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050CE0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88050CF4: goto loc_88050CF4;
		case 0x88050CFC: goto loc_88050CFC;
		case 0x88050D04: goto loc_88050D04;
		case 0x88050D0C: goto loc_88050D0C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88050CE4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88050CE8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880524e8
	ctx.lr = 0x88050CF4;
	sub_880524E8(ctx, base);
loc_88050CF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880523d8
	ctx.lr = 0x88050CFC;
	sub_880523D8(ctx, base);
loc_88050CFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880523c8
	ctx.lr = 0x88050D04;
	sub_880523C8(ctx, base);
loc_88050D04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880523b0
	ctx.lr = 0x88050D0C;
	sub_880523B0(ctx, base);
loc_88050D0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88050D10;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88052588) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052588;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052588) {
			switch (rex_dispatch_address) {
				case 0x88052598:
				case 0x880525A4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052588;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052598: goto loc_88052598;
		case 0x880525A4: goto loc_880525A4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805258C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88052590;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88052540
	ctx.lr = 0x88052598;
	sub_88052540(ctx, base);
loc_88052598:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x880525a4
	if (ctx.cr0.eq) goto loc_880525A4;
	// bl 0x881ec7a8
	ctx.lr = 0x880525A4;
	sub_881EC7A8(ctx, base);
loc_880525A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880525A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88054CD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88054CD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88054CD0) {
			switch (rex_dispatch_address) {
				case 0x88054CD8:
				case 0x88054DE8:
				case 0x88054E08:
				case 0x88054E38:
				case 0x88054E58:
				case 0x88054E7C:
				case 0x88054EA4:
				case 0x88054EB8:
				case 0x88054EEC:
				case 0x88054FC8:
				case 0x8805572C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88054CD0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88054CD8: goto loc_88054CD8;
		case 0x88054DE8: goto loc_88054DE8;
		case 0x88054E08: goto loc_88054E08;
		case 0x88054E38: goto loc_88054E38;
		case 0x88054E58: goto loc_88054E58;
		case 0x88054E7C: goto loc_88054E7C;
		case 0x88054EA4: goto loc_88054EA4;
		case 0x88054EB8: goto loc_88054EB8;
		case 0x88054EEC: goto loc_88054EEC;
		case 0x88054FC8: goto loc_88054FC8;
		case 0x8805572C: goto loc_8805572C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88054CD8;
	__savegprlr_14(ctx, base);
loc_88054CD8:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x88054CD8;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,336(r1)
	ctx.current_instruction = 0x88054CDC;
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// li r11,204
	ctx.r11.s64 = 204;
	// lhz r9,336(r1)
	ctx.current_instruction = 0x88054CE4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 336);
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// stw r5,356(r1)
	ctx.current_instruction = 0x88054CEC;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// rlwinm. r10,r9,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,364(r1)
	ctx.current_instruction = 0x88054CF4;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,63
	ctx.r7.s64 = 63;
	// stb r11,138(r1)
	ctx.current_instruction = 0x88054D00;
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// li r5,251
	ctx.r5.s64 = 251;
	// stb r11,139(r1)
	ctx.current_instruction = 0x88054D08;
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// stb r11,140(r1)
	ctx.current_instruction = 0x88054D10;
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r11,141(r1)
	ctx.current_instruction = 0x88054D14;
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,142(r1)
	ctx.current_instruction = 0x88054D1C;
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r11,143(r1)
	ctx.current_instruction = 0x88054D20;
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r11.u8);
	// stb r11,144(r1)
	ctx.current_instruction = 0x88054D24;
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r11,145(r1)
	ctx.current_instruction = 0x88054D28;
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	ctx.current_instruction = 0x88054D2C;
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	ctx.current_instruction = 0x88054D30;
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// li r11,45
	ctx.r11.s64 = 45;
	// std r4,344(r1)
	ctx.current_instruction = 0x88054D38;
	REX_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// stb r7,136(r1)
	ctx.current_instruction = 0x88054D3C;
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stb r5,137(r1)
	ctx.current_instruction = 0x88054D40;
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stw r6,80(r1)
	ctx.current_instruction = 0x88054D44;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,84(r1)
	ctx.current_instruction = 0x88054D48;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne 0x88054d54
	if (!ctx.cr0.eq) goto loc_88054D54;
	// li r11,32
	ctx.r11.s64 = 32;
loc_88054D54:
	// stb r11,2(r14)
	ctx.current_instruction = 0x88054D54;
	REX_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,342(r1)
	ctx.current_instruction = 0x88054D5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 342);
	// lwz r10,338(r1)
	ctx.current_instruction = 0x88054D60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 338);
	// bne 0x88054dac
	if (!ctx.cr0.eq) goto loc_88054DAC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x88054dac
	if (!ctx.cr6.eq) goto loc_88054DAC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88054dac
	if (!ctx.cr6.eq) goto loc_88054DAC;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// sth r22,0(r14)
	ctx.current_instruction = 0x88054D80;
	REX_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x88054d90
	if (ctx.cr6.eq) goto loc_88054D90;
	// li r11,32
	ctx.r11.s64 = 32;
loc_88054D90:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r6,3(r14)
	ctx.current_instruction = 0x88054D94;
	REX_STORE_U8(ctx.r14.u32 + 3, ctx.r6.u8);
	// stb r22,5(r14)
	ctx.current_instruction = 0x88054D98;
	REX_STORE_U8(ctx.r14.u32 + 5, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r14)
	ctx.current_instruction = 0x88054DA0;
	REX_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// stb r10,4(r14)
	ctx.current_instruction = 0x88054DA4;
	REX_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
	// b 0x8805588c
	goto loc_8805588C;
loc_88054DAC:
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bne cr6,0x88054eec
	if (!ctx.cr6.eq) goto loc_88054EEC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// sth r6,0(r14)
	ctx.current_instruction = 0x88054DB8;
	REX_STORE_U16(ctx.r14.u32 + 0, ctx.r6.u16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88054dcc
	if (!ctx.cr6.eq) goto loc_88054DCC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x88054e08
	if (ctx.cr6.eq) goto loc_88054E08;
loc_88054DCC:
	// rlwinm. r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x88054e08
	if (!ctx.cr0.eq) goto loc_88054E08;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,6700
	ctx.r5.s64 = ctx.r11.s64 + 6700;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x880528a0
	ctx.lr = 0x88054DE8;
	sub_880528A0(ctx, base);
loc_88054DE8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88054ec0
	if (ctx.cr0.eq) goto loc_88054EC0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880524c0
	ctx.lr = 0x88054E08;
	sub_880524C0(ctx, base);
loc_88054E08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88054e58
	if (ctx.cr6.eq) goto loc_88054E58;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88054e58
	if (!ctx.cr6.eq) goto loc_88054E58;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88054ea4
	if (!ctx.cr6.eq) goto loc_88054EA4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,6692
	ctx.r5.s64 = ctx.r11.s64 + 6692;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x880528a0
	ctx.lr = 0x88054E38;
	sub_880528A0(ctx, base);
loc_88054E38:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88054e84
	if (ctx.cr0.eq) goto loc_88054E84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880524c0
	ctx.lr = 0x88054E58;
	sub_880524C0(ctx, base);
loc_88054E58:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x88054ea4
	if (!ctx.cr6.eq) goto loc_88054EA4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x88054ea4
	if (!ctx.cr6.eq) goto loc_88054EA4;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,6684
	ctx.r5.s64 = ctx.r11.s64 + 6684;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x880528a0
	ctx.lr = 0x88054E7C;
	sub_880528A0(ctx, base);
loc_88054E7C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88054e8c
	if (!ctx.cr0.eq) goto loc_88054E8C;
loc_88054E84:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x88054ec4
	goto loc_88054EC4;
loc_88054E8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880524c0
	ctx.lr = 0x88054EA4;
	sub_880524C0(ctx, base);
loc_88054EA4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,6676
	ctx.r5.s64 = ctx.r11.s64 + 6676;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x880528a0
	ctx.lr = 0x88054EB8;
	sub_880528A0(ctx, base);
loc_88054EB8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x88054ed4
	if (!ctx.cr0.eq) goto loc_88054ED4;
loc_88054EC0:
	// li r11,6
	ctx.r11.s64 = 6;
loc_88054EC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r14)
	ctx.current_instruction = 0x88054EC8;
	REX_STORE_U8(ctx.r14.u32 + 3, ctx.r11.u8);
	// stw r10,80(r1)
	ctx.current_instruction = 0x88054ECC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x88055888
	goto loc_88055888;
loc_88054ED4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880524c0
	ctx.lr = 0x88054EEC;
	sub_880524C0(ctx, base);
loc_88054EEC:
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// stw r10,90(r1)
	ctx.current_instruction = 0x88054EF0;
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r10.u32);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r7,94(r1)
	ctx.current_instruction = 0x88054EF8;
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r7.u32);
	// mulli r11,r11,19728
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(19728));
	// sth r8,88(r1)
	ctx.current_instruction = 0x88054F00;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,-30683
	ctx.r9.s64 = -2010841088;
	// mulli r10,r10,77
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(77));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addis r11,r11,-4931
	ctx.r11.s64 = ctx.r11.s64 + -323158016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r22,98(r1)
	ctx.current_instruction = 0x88054F20;
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r22.u16);
	// addi r11,r11,-4852
	ctx.r11.s64 = ctx.r11.s64 + -4852;
	// lis r7,0
	ctx.r7.s64 = 0;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// extsh r19,r11
	ctx.r19.s64 = ctx.r11.s16;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r11,r9,2096
	ctx.r11.s64 = ctx.r9.s64 + 2096;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// neg. r25,r19
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r19.u64);
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ori r20,r10,49154
	ctx.r20.u64 = ctx.r10.u64 | 49154;
	// ori r21,r7,65535
	ctx.r21.u64 = ctx.r7.u64 | 65535;
	// ori r17,r6,32768
	ctx.r17.u64 = ctx.r6.u64 | 32768;
	// ori r18,r5,32768
	ctx.r18.u64 = ctx.r5.u64 | 32768;
	// li r15,-32768
	ctx.r15.s64 = -32768;
	// ori r16,r4,32768
	ctx.r16.u64 = ctx.r4.u64 | 32768;
	// addi r23,r11,-96
	ctx.r23.s64 = ctx.r11.s64 + -96;
	// beq 0x880552f8
	if (ctx.cr0.eq) goto loc_880552F8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x88054f8c
	if (!ctx.cr6.lt) goto loc_88054F8C;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// neg r25,r25
	ctx.r25.s64 = static_cast<int64_t>(-ctx.r25.u64);
	// addi r11,r11,2448
	ctx.r11.s64 = ctx.r11.s64 + 2448;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r23,r11,-96
	ctx.r23.s64 = ctx.r11.s64 + -96;
loc_88054F8C:
	// beq cr6,0x880552f8
	if (ctx.cr6.eq) goto loc_880552F8;
	// lwz r27,96(r1)
	ctx.current_instruction = 0x88054F90;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.current_instruction = 0x88054F94;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_88054F98:
	// clrlwi. r11,r25,29
	ctx.r11.u64 = ctx.r25.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r23,r23,84
	ctx.r23.s64 = ctx.r23.s64 + 84;
	// srawi r25,r25,3
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 3;
	// beq 0x880552e8
	if (ctx.cr0.eq) goto loc_880552E8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r11,10(r4)
	ctx.current_instruction = 0x88054FB0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x88054fd8
	if (ctx.cr6.lt) goto loc_88054FD8;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x880547a0
	ctx.lr = 0x88054FC8;
	sub_880547A0(ctx, base);
loc_88054FC8:
	// lwz r11,158(r1)
	ctx.current_instruction = 0x88054FC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 158);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,158(r1)
	ctx.current_instruction = 0x88054FD4;
	REX_STORE_U32(ctx.r1.u32 + 158, ctx.r11.u32);
loc_88054FD8:
	// stw r22,104(r1)
	ctx.current_instruction = 0x88054FD8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// clrlwi r11,r31,17
	ctx.r11.u64 = ctx.r31.u32 & 0x7FFF;
	// stw r22,112(r1)
	ctx.current_instruction = 0x88054FE0;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r22,108(r1)
	ctx.current_instruction = 0x88054FE8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// lhz r8,0(r4)
	ctx.current_instruction = 0x88054FF4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r26,r8,0,16,16
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x880552c8
	if (!ctx.cr6.lt) goto loc_880552C8;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x880552c8
	if (!ctx.cr6.lt) goto loc_880552C8;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x880552c8
	if (ctx.cr6.gt) goto loc_880552C8;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x88055038
	if (ctx.cr6.gt) goto loc_88055038;
loc_88055030:
	// stw r22,88(r1)
	ctx.current_instruction = 0x88055030;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x880552d8
	goto loc_880552D8;
loc_88055038:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8805506c
	if (!ctx.cr6.eq) goto loc_8805506C;
	// lwz r9,88(r1)
	ctx.current_instruction = 0x88055040;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x8805506c
	if (!ctx.cr0.eq) goto loc_8805506C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8805506c
	if (!ctx.cr6.eq) goto loc_8805506C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8805506c
	if (!ctx.cr6.eq) goto loc_8805506C;
	// sth r22,88(r1)
	ctx.current_instruction = 0x88055064;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// b 0x880552e8
	goto loc_880552E8;
loc_8805506C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880550a4
	if (!ctx.cr6.eq) goto loc_880550A4;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.current_instruction = 0x88055078;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x880550a4
	if (!ctx.cr0.eq) goto loc_880550A4;
	// lwz r11,4(r4)
	ctx.current_instruction = 0x8805508C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880550a4
	if (!ctx.cr6.eq) goto loc_880550A4;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x88055098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88055030
	if (ctx.cr6.eq) goto loc_88055030;
loc_880550A4:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,110
	ctx.r8.s64 = ctx.r1.s64 + 110;
	// li r3,5
	ctx.r3.s64 = 5;
loc_880550B0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8805511c
	if (!ctx.cr6.gt) goto loc_8805511C;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_880550CC:
	// lhz r10,0(r6)
	ctx.current_instruction = 0x880550CC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.current_instruction = 0x880550D4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.current_instruction = 0x880550D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x880550f4
	if (ctx.cr6.lt) goto loc_880550F4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x880550f8
	if (!ctx.cr6.lt) goto loc_880550F8;
loc_880550F4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_880550F8:
	// stw r10,2(r8)
	ctx.current_instruction = 0x880550F8;
	REX_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88055110
	if (ctx.cr6.eq) goto loc_88055110;
	// lhz r11,0(r8)
	ctx.current_instruction = 0x88055104;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	ctx.current_instruction = 0x8805510C;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_88055110:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x880550cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880550CC;
loc_8805511C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x880550b0
	if (ctx.cr0.gt) goto loc_880550B0;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.current_instruction = 0x88055130;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_88055138:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x88055188
	if (!ctx.cr0.gt) goto loc_88055188;
	// lwz r8,104(r1)
	ctx.current_instruction = 0x88055144;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x88055188
	if (!ctx.cr0.eq) goto loc_88055188;
	// lwz r9,108(r1)
	ctx.current_instruction = 0x88055150;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,112(r1)
	ctx.current_instruction = 0x88055174;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r7,108(r1)
	ctx.current_instruction = 0x8805517C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,104(r1)
	ctx.current_instruction = 0x88055180;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// b 0x88055138
	goto loc_88055138;
loc_88055188:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x88055210
	if (ctx.cr6.gt) goto loc_88055210;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x88055210
	if (!ctx.cr0.lt) goto loc_88055210;
	// lwz r8,104(r1)
	ctx.current_instruction = 0x880551A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.current_instruction = 0x880551A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_880551AC:
	// lhz r7,114(r1)
	ctx.current_instruction = 0x880551AC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x880551bc
	if (ctx.cr0.eq) goto loc_880551BC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_880551BC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,112(r1)
	ctx.current_instruction = 0x880551E4;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x880551ac
	if (ctx.cr0.lt) goto loc_880551AC;
	// stw r9,108(r1)
	ctx.current_instruction = 0x880551F0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r8,104(r1)
	ctx.current_instruction = 0x880551F8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x88055210
	if (ctx.cr6.eq) goto loc_88055210;
	// lhz r10,114(r1)
	ctx.current_instruction = 0x88055200;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,114(r1)
	ctx.current_instruction = 0x88055208;
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// lwz r10,112(r1)
	ctx.current_instruction = 0x8805520C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_88055210:
	// lhz r9,114(r1)
	ctx.current_instruction = 0x88055210;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x88055228
	if (ctx.cr6.gt) goto loc_88055228;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x88055288
	if (!ctx.cr6.eq) goto loc_88055288;
loc_88055228:
	// lwz r10,110(r1)
	ctx.current_instruction = 0x88055228;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 110);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x88055280
	if (!ctx.cr6.eq) goto loc_88055280;
	// lwz r10,106(r1)
	ctx.current_instruction = 0x88055234;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 106);
	// stw r22,110(r1)
	ctx.current_instruction = 0x88055238;
	REX_STORE_U32(ctx.r1.u32 + 110, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x88055274
	if (!ctx.cr6.eq) goto loc_88055274;
	// lhz r10,104(r1)
	ctx.current_instruction = 0x88055244;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// stw r22,106(r1)
	ctx.current_instruction = 0x88055248;
	REX_STORE_U32(ctx.r1.u32 + 106, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x88055268
	if (!ctx.cr6.eq) goto loc_88055268;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,104(r1)
	ctx.current_instruction = 0x88055258;
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x88055288
	goto loc_88055288;
loc_88055268:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,104(r1)
	ctx.current_instruction = 0x8805526C;
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// b 0x88055288
	goto loc_88055288;
loc_88055274:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,106(r1)
	ctx.current_instruction = 0x88055278;
	REX_STORE_U32(ctx.r1.u32 + 106, ctx.r10.u32);
	// b 0x88055288
	goto loc_88055288;
loc_88055280:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,110(r1)
	ctx.current_instruction = 0x88055284;
	REX_STORE_U32(ctx.r1.u32 + 110, ctx.r10.u32);
loc_88055288:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x880552c8
	if (!ctx.cr6.lt) goto loc_880552C8;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// lhz r9,112(r1)
	ctx.current_instruction = 0x88055298;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// lwz r8,108(r1)
	ctx.current_instruction = 0x8805529C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,104(r1)
	ctx.current_instruction = 0x880552A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,98(r1)
	ctx.current_instruction = 0x880552AC;
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// stw r8,94(r1)
	ctx.current_instruction = 0x880552B0;
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	ctx.current_instruction = 0x880552B4;
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880552B8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.current_instruction = 0x880552BC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// sth r11,88(r1)
	ctx.current_instruction = 0x880552C0;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x880552e8
	goto loc_880552E8;
loc_880552C8:
	// stw r15,88(r1)
	ctx.current_instruction = 0x880552C8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880552d8
	if (!ctx.cr0.eq) goto loc_880552D8;
	// stw r16,88(r1)
	ctx.current_instruction = 0x880552D4;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
loc_880552D8:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r22,96(r1)
	ctx.current_instruction = 0x880552DC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r22,92(r1)
	ctx.current_instruction = 0x880552E4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_880552E8:
	// lhz r31,88(r1)
	ctx.current_instruction = 0x880552E8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x88054f98
	if (!ctx.cr6.eq) goto loc_88054F98;
	// b 0x88055300
	goto loc_88055300;
loc_880552F8:
	// lwz r27,96(r1)
	ctx.current_instruction = 0x880552F8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880552FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_88055300:
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,16383
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16383, ctx.xer);
	// blt cr6,0x88055610
	if (ctx.cr6.lt) goto loc_88055610;
	// lhz r8,136(r1)
	ctx.current_instruction = 0x8805530C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 136);
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// addi r7,r24,1
	ctx.r7.s64 = ctx.r24.s64 + 1;
	// stw r22,128(r1)
	ctx.current_instruction = 0x88055318;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// stw r22,124(r1)
	ctx.current_instruction = 0x88055320;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stw r22,120(r1)
	ctx.current_instruction = 0x88055328;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r19,r7
	ctx.r19.s64 = ctx.r7.s16;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// rlwinm r29,r9,0,16,16
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x880555f8
	if (!ctx.cr6.lt) goto loc_880555F8;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x880555f8
	if (!ctx.cr6.lt) goto loc_880555F8;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49149, ctx.xer);
	// bgt cr6,0x880555f8
	if (ctx.cr6.gt) goto loc_880555F8;
	// cmplwi cr6,r9,16319
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16319, ctx.xer);
	// bgt cr6,0x8805536c
	if (ctx.cr6.gt) goto loc_8805536C;
loc_88055364:
	// stw r22,88(r1)
	ctx.current_instruction = 0x88055364;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x88055608
	goto loc_88055608;
loc_8805536C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880553a0
	if (!ctx.cr6.eq) goto loc_880553A0;
	// lwz r11,88(r1)
	ctx.current_instruction = 0x88055374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// bne 0x880553a0
	if (!ctx.cr0.eq) goto loc_880553A0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x880553a0
	if (!ctx.cr6.eq) goto loc_880553A0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880553a0
	if (!ctx.cr6.eq) goto loc_880553A0;
	// sth r22,88(r1)
	ctx.current_instruction = 0x88055398;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// b 0x88055610
	goto loc_88055610;
loc_880553A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880553d8
	if (!ctx.cr6.eq) goto loc_880553D8;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,136(r1)
	ctx.current_instruction = 0x880553AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x880553d8
	if (!ctx.cr0.eq) goto loc_880553D8;
	// lwz r11,140(r1)
	ctx.current_instruction = 0x880553C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880553d8
	if (!ctx.cr6.eq) goto loc_880553D8;
	// lwz r11,144(r1)
	ctx.current_instruction = 0x880553CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88055364
	if (ctx.cr6.eq) goto loc_88055364;
loc_880553D8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r8,r1,126
	ctx.r8.s64 = ctx.r1.s64 + 126;
	// li r4,5
	ctx.r4.s64 = 5;
loc_880553E4:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x88055450
	if (!ctx.cr6.gt) goto loc_88055450;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r5,r1,138
	ctx.r5.s64 = ctx.r1.s64 + 138;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_88055400:
	// lhz r10,0(r5)
	ctx.current_instruction = 0x88055400;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r6)
	ctx.current_instruction = 0x88055408;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	ctx.current_instruction = 0x8805540C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x88055428
	if (ctx.cr6.lt) goto loc_88055428;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8805542c
	if (!ctx.cr6.lt) goto loc_8805542C;
loc_88055428:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8805542C:
	// stw r10,2(r8)
	ctx.current_instruction = 0x8805542C;
	REX_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x88055444
	if (ctx.cr6.eq) goto loc_88055444;
	// lhz r11,0(r8)
	ctx.current_instruction = 0x88055438;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	ctx.current_instruction = 0x88055440;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_88055444:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x88055400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88055400;
loc_88055450:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bgt 0x880553e4
	if (ctx.cr0.gt) goto loc_880553E4;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,128(r1)
	ctx.current_instruction = 0x88055464;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_8805546C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x880554bc
	if (!ctx.cr0.gt) goto loc_880554BC;
	// lwz r8,120(r1)
	ctx.current_instruction = 0x88055478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x880554bc
	if (!ctx.cr0.eq) goto loc_880554BC;
	// lwz r9,124(r1)
	ctx.current_instruction = 0x88055484;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,128(r1)
	ctx.current_instruction = 0x880554A8;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r7,124(r1)
	ctx.current_instruction = 0x880554B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r8,120(r1)
	ctx.current_instruction = 0x880554B4;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x8805546c
	goto loc_8805546C;
loc_880554BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x88055544
	if (ctx.cr6.gt) goto loc_88055544;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x88055544
	if (!ctx.cr0.lt) goto loc_88055544;
	// lwz r8,120(r1)
	ctx.current_instruction = 0x880554D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,124(r1)
	ctx.current_instruction = 0x880554DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_880554E0:
	// lhz r7,130(r1)
	ctx.current_instruction = 0x880554E0;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x880554f0
	if (ctx.cr0.eq) goto loc_880554F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_880554F0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,128(r1)
	ctx.current_instruction = 0x88055518;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x880554e0
	if (ctx.cr0.lt) goto loc_880554E0;
	// stw r9,124(r1)
	ctx.current_instruction = 0x88055524;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r8,120(r1)
	ctx.current_instruction = 0x8805552C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x88055544
	if (ctx.cr6.eq) goto loc_88055544;
	// lhz r10,130(r1)
	ctx.current_instruction = 0x88055534;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,130(r1)
	ctx.current_instruction = 0x8805553C;
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// lwz r10,128(r1)
	ctx.current_instruction = 0x88055540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_88055544:
	// lhz r9,130(r1)
	ctx.current_instruction = 0x88055544;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x8805555c
	if (ctx.cr6.gt) goto loc_8805555C;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x880555bc
	if (!ctx.cr6.eq) goto loc_880555BC;
loc_8805555C:
	// lwz r10,126(r1)
	ctx.current_instruction = 0x8805555C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 126);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x880555b4
	if (!ctx.cr6.eq) goto loc_880555B4;
	// lwz r10,122(r1)
	ctx.current_instruction = 0x88055568;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 122);
	// stw r22,126(r1)
	ctx.current_instruction = 0x8805556C;
	REX_STORE_U32(ctx.r1.u32 + 126, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x880555a8
	if (!ctx.cr6.eq) goto loc_880555A8;
	// lhz r10,120(r1)
	ctx.current_instruction = 0x88055578;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// stw r22,122(r1)
	ctx.current_instruction = 0x8805557C;
	REX_STORE_U32(ctx.r1.u32 + 122, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8805559c
	if (!ctx.cr6.eq) goto loc_8805559C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,120(r1)
	ctx.current_instruction = 0x8805558C;
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x880555bc
	goto loc_880555BC;
loc_8805559C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,120(r1)
	ctx.current_instruction = 0x880555A0;
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// b 0x880555bc
	goto loc_880555BC;
loc_880555A8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,122(r1)
	ctx.current_instruction = 0x880555AC;
	REX_STORE_U32(ctx.r1.u32 + 122, ctx.r10.u32);
	// b 0x880555bc
	goto loc_880555BC;
loc_880555B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,126(r1)
	ctx.current_instruction = 0x880555B8;
	REX_STORE_U32(ctx.r1.u32 + 126, ctx.r10.u32);
loc_880555BC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x880555f8
	if (!ctx.cr6.lt) goto loc_880555F8;
	// lhz r10,128(r1)
	ctx.current_instruction = 0x880555C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 128);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r8,124(r1)
	ctx.current_instruction = 0x880555D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,120(r1)
	ctx.current_instruction = 0x880555D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// sth r11,88(r1)
	ctx.current_instruction = 0x880555DC;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r10,98(r1)
	ctx.current_instruction = 0x880555E0;
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// stw r8,94(r1)
	ctx.current_instruction = 0x880555E4;
	REX_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	ctx.current_instruction = 0x880555E8;
	REX_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r27,96(r1)
	ctx.current_instruction = 0x880555EC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.current_instruction = 0x880555F0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x88055610
	goto loc_88055610;
loc_880555F8:
	// stw r15,88(r1)
	ctx.current_instruction = 0x880555F8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// clrlwi. r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x88055608
	if (!ctx.cr0.eq) goto loc_88055608;
	// stw r16,88(r1)
	ctx.current_instruction = 0x88055604;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
loc_88055608:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_88055610:
	// lwz r11,364(r1)
	ctx.current_instruction = 0x88055610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// sth r19,0(r14)
	ctx.current_instruction = 0x88055614;
	REX_STORE_U16(ctx.r14.u32 + 0, ctx.r19.u16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x88055668
	if (ctx.cr0.eq) goto loc_88055668;
	// lwz r10,356(r1)
	ctx.current_instruction = 0x88055620;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// extsh r11,r19
	ctx.r11.s64 = ctx.r19.s16;
	// add. r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x8805566c
	if (ctx.cr0.gt) goto loc_8805566C;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88055630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	ctx.current_instruction = 0x88055634;
	REX_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x88055648
	if (ctx.cr6.eq) goto loc_88055648;
	// li r11,32
	ctx.r11.s64 = 32;
loc_88055648:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,4(r14)
	ctx.current_instruction = 0x8805564C;
	REX_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
loc_88055650:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,2(r14)
	ctx.current_instruction = 0x88055654;
	REX_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// stb r22,5(r14)
	ctx.current_instruction = 0x88055658;
	REX_STORE_U8(ctx.r14.u32 + 5, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,3(r14)
	ctx.current_instruction = 0x88055660;
	REX_STORE_U8(ctx.r14.u32 + 3, ctx.r9.u8);
	// b 0x8805588c
	goto loc_8805588C;
loc_88055668:
	// lwz r9,356(r1)
	ctx.current_instruction = 0x88055668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_8805566C:
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// ble cr6,0x88055678
	if (!ctx.cr6.gt) goto loc_88055678;
	// li r9,21
	ctx.r9.s64 = 21;
loc_88055678:
	// lhz r10,88(r1)
	ctx.current_instruction = 0x88055678;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r22,88(r1)
	ctx.current_instruction = 0x88055680;
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// addi r10,r10,-16382
	ctx.r10.s64 = ctx.r10.s64 + -16382;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,88(r1)
	ctx.current_instruction = 0x8805568C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_88055690:
	// rlwinm r11,r27,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r8,r28,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r30,r6,r8
	ctx.r30.u64 = ctx.r6.u64 | ctx.r8.u64;
	// bdnz 0x88055690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88055690;
	// stw r30,88(r1)
	ctx.current_instruction = 0x880556B0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,92(r1)
	ctx.current_instruction = 0x880556B8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,96(r1)
	ctx.current_instruction = 0x880556BC;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bge cr6,0x88055700
	if (!ctx.cr6.lt) goto loc_88055700;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88055700
	if (!ctx.cr0.gt) goto loc_88055700;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_880556D4:
	// rlwinm r11,r30,31,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000;
	// rlwinm r10,r28,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x80000000;
	// rlwinm r8,r28,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r27,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r27,r7,r10
	ctx.r27.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bdnz 0x880556d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880556D4;
	// stw r27,96(r1)
	ctx.current_instruction = 0x880556F4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r28,92(r1)
	ctx.current_instruction = 0x880556F8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r30,88(r1)
	ctx.current_instruction = 0x880556FC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_88055700:
	// addi r26,r14,4
	ctx.r26.s64 = ctx.r14.s64 + 4;
	// addic. r11,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r11.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// ble 0x88055814
	if (!ctx.cr0.gt) goto loc_88055814;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x8805571c
	goto loc_8805571C;
loc_88055718:
	// lwz r30,88(r1)
	ctx.current_instruction = 0x88055718;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8805571C:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x880547a0
	ctx.lr = 0x8805572C;
	sub_880547A0(ctx, base);
loc_8805572C:
	// rlwinm r5,r27,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,160(r1)
	ctx.current_instruction = 0x88055734;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8805577c
	if (ctx.cr6.lt) goto loc_8805577C;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x880557a8
	if (!ctx.cr6.lt) goto loc_880557A8;
loc_8805577C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88055794
	if (ctx.cr6.lt) goto loc_88055794;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88055798
	if (!ctx.cr6.lt) goto loc_88055798;
loc_88055794:
	// li r8,1
	ctx.r8.s64 = 1;
loc_88055798:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880557a8
	if (ctx.cr6.eq) goto loc_880557A8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_880557A8:
	// lwz r8,156(r1)
	ctx.current_instruction = 0x880557A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x880557c0
	if (ctx.cr6.lt) goto loc_880557C0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x880557c4
	if (!ctx.cr6.lt) goto loc_880557C4;
loc_880557C0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_880557C4:
	// lwz r9,152(r1)
	ctx.current_instruction = 0x880557C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	ctx.current_instruction = 0x880557E8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r9,88(r1)
	ctx.current_instruction = 0x880557EC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r11,88(r1)
	ctx.current_instruction = 0x880557F4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r27,96(r1)
	ctx.current_instruction = 0x88055800;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r22,88(r1)
	ctx.current_instruction = 0x88055804;
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r22.u8);
	// stb r11,0(r31)
	ctx.current_instruction = 0x88055808;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x88055718
	if (!ctx.cr0.eq) goto loc_88055718;
loc_88055814:
	// lbzu r10,-1(r31)
	ctx.current_instruction = 0x88055814;
	ea = -1 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x880558a4
	if (ctx.cr6.lt) goto loc_880558A4;
	// b 0x88055844
	goto loc_88055844;
loc_8805582C:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x8805582C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// bne cr6,0x8805584c
	if (!ctx.cr6.eq) goto loc_8805584C;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	ctx.current_instruction = 0x8805583C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_88055844:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8805582c
	if (!ctx.cr6.lt) goto loc_8805582C;
loc_8805584C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x88055864
	if (!ctx.cr6.lt) goto loc_88055864;
	// lhz r10,0(r14)
	ctx.current_instruction = 0x88055854;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r14.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r14)
	ctx.current_instruction = 0x88055860;
	REX_STORE_U16(ctx.r14.u32 + 0, ctx.r10.u16);
loc_88055864:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88055864;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	ctx.current_instruction = 0x8805586C;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_88055870:
	// subf r11,r14,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r14.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + ctx.r14.u64;
	// stb r10,3(r14)
	ctx.current_instruction = 0x88055880;
	REX_STORE_U8(ctx.r14.u32 + 3, ctx.r10.u8);
	// stb r22,4(r11)
	ctx.current_instruction = 0x88055884;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r22.u8);
loc_88055888:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88055888;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8805588C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88055894:
	// lbz r10,0(r11)
	ctx.current_instruction = 0x88055894;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x880558ac
	if (!ctx.cr6.eq) goto loc_880558AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_880558A4:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x88055894
	if (!ctx.cr6.lt) goto loc_88055894;
loc_880558AC:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x88055870
	if (!ctx.cr6.lt) goto loc_88055870;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880558B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	ctx.current_instruction = 0x880558B8;
	REX_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x880558cc
	if (ctx.cr6.eq) goto loc_880558CC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_880558CC:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r26)
	ctx.current_instruction = 0x880558D0;
	REX_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// b 0x88055650
	goto loc_88055650;
}

DEFINE_REX_FUNC(sub_8807BA60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8807BA60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8807BA60) {
			switch (rex_dispatch_address) {
				case 0x8807BA68:
				case 0x8807BB74:
				case 0x8807BBBC:
				case 0x8807BBDC:
				case 0x8807BC4C:
				case 0x8807BD40:
				case 0x8807BD80:
				case 0x8807BDDC:
				case 0x8807BDE4:
				case 0x8807BDF4:
				case 0x8807BE20:
				case 0x8807BE54:
				case 0x8807BE5C:
				case 0x8807BE6C:
				case 0x8807BEAC:
				case 0x8807BED0:
				case 0x8807BED8:
				case 0x8807BF20:
				case 0x8807BF38:
				case 0x8807C03C:
				case 0x8807C044:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8807BA60;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8807BA68: goto loc_8807BA68;
		case 0x8807BB74: goto loc_8807BB74;
		case 0x8807BBBC: goto loc_8807BBBC;
		case 0x8807BBDC: goto loc_8807BBDC;
		case 0x8807BC4C: goto loc_8807BC4C;
		case 0x8807BD40: goto loc_8807BD40;
		case 0x8807BD80: goto loc_8807BD80;
		case 0x8807BDDC: goto loc_8807BDDC;
		case 0x8807BDE4: goto loc_8807BDE4;
		case 0x8807BDF4: goto loc_8807BDF4;
		case 0x8807BE20: goto loc_8807BE20;
		case 0x8807BE54: goto loc_8807BE54;
		case 0x8807BE5C: goto loc_8807BE5C;
		case 0x8807BE6C: goto loc_8807BE6C;
		case 0x8807BEAC: goto loc_8807BEAC;
		case 0x8807BED0: goto loc_8807BED0;
		case 0x8807BED8: goto loc_8807BED8;
		case 0x8807BF20: goto loc_8807BF20;
		case 0x8807BF38: goto loc_8807BF38;
		case 0x8807C03C: goto loc_8807C03C;
		case 0x8807C044: goto loc_8807C044;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x8807BA68;
	__savegprlr_21(ctx, base);
loc_8807BA68:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x8807BA68;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r10,356(r1)
	ctx.current_instruction = 0x8807BA70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r11,6768(r3)
	ctx.current_instruction = 0x8807BA74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6768);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r10,2180(r3)
	ctx.current_instruction = 0x8807BA8C;
	REX_STORE_U32(ctx.r3.u32 + 2180, ctx.r10.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb0c
	if (ctx.cr6.eq) goto loc_8807BB0C;
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// lwz r10,16(r4)
	ctx.current_instruction = 0x8807BAA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// ori r8,r9,22857
	ctx.r8.u64 = ctx.r9.u64 | 22857;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8807bac8
	if (ctx.cr6.eq) goto loc_8807BAC8;
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// ori r8,r9,13385
	ctx.r8.u64 = ctx.r9.u64 | 13385;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8807bb0c
	if (!ctx.cr6.eq) goto loc_8807BB0C;
loc_8807BAC8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8807bb0c
	if (ctx.cr6.gt) goto loc_8807BB0C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8807baf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8807BAF4;
	// bdzf 4*cr6+eq,0x8807bae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8807BAE8;
	// bne cr6,0x8807bb00
	if (!ctx.cr6.eq) goto loc_8807BB00;
loc_8807BAE8:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x8807bb14
	goto loc_8807BB14;
loc_8807BAF4:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8807bb14
	goto loc_8807BB14;
loc_8807BB00:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x8807bb14
	goto loc_8807BB14;
loc_8807BB0C:
	// lwz r28,348(r1)
	ctx.current_instruction = 0x8807BB0C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r29,340(r1)
	ctx.current_instruction = 0x8807BB10;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_8807BB14:
	// lwz r11,28492(r31)
	ctx.current_instruction = 0x8807BB14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bb28
	if (!ctx.cr6.eq) goto loc_8807BB28;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8807BB28:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x8807BB28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb44
	if (ctx.cr6.eq) goto loc_8807BB44;
	// stw r22,28572(r31)
	ctx.current_instruction = 0x8807BB34;
	REX_STORE_U32(ctx.r31.u32 + 28572, ctx.r22.u32);
	// stw r22,28576(r31)
	ctx.current_instruction = 0x8807BB38;
	REX_STORE_U32(ctx.r31.u32 + 28576, ctx.r22.u32);
	// stw r22,28580(r31)
	ctx.current_instruction = 0x8807BB3C;
	REX_STORE_U32(ctx.r31.u32 + 28580, ctx.r22.u32);
	// stw r22,28584(r31)
	ctx.current_instruction = 0x8807BB40;
	REX_STORE_U32(ctx.r31.u32 + 28584, ctx.r22.u32);
loc_8807BB44:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x8807BB44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb54
	if (ctx.cr6.eq) goto loc_8807BB54;
	// stw r22,30200(r31)
	ctx.current_instruction = 0x8807BB50;
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r22.u32);
loc_8807BB54:
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807BB54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb74
	if (ctx.cr6.eq) goto loc_8807BB74;
	// lwz r11,1620(r31)
	ctx.current_instruction = 0x8807BB60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bb74
	if (ctx.cr6.eq) goto loc_8807BB74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807e548
	ctx.lr = 0x8807BB74;
	sub_8807E548(ctx, base);
loc_8807BB74:
	// ld r11,30520(r31)
	ctx.current_instruction = 0x8807BB74;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 30520);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807BB80;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// std r10,30520(r31)
	ctx.current_instruction = 0x8807BB88;
	REX_STORE_U64(ctx.r31.u32 + 30520, ctx.r10.u64);
	// std r9,736(r31)
	ctx.current_instruction = 0x8807BB8C;
	REX_STORE_U64(ctx.r31.u32 + 736, ctx.r9.u64);
	// bne cr6,0x8807bba4
	if (!ctx.cr6.eq) goto loc_8807BBA4;
	// ld r10,7736(r31)
	ctx.current_instruction = 0x8807BB94;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 7736);
	// ld r11,7720(r31)
	ctx.current_instruction = 0x8807BB98;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 7720);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8807bba8
	goto loc_8807BBA8;
loc_8807BBA4:
	// ld r11,304(r1)
	ctx.current_instruction = 0x8807BBA4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
loc_8807BBA8:
	// std r11,7728(r31)
	ctx.current_instruction = 0x8807BBA8;
	REX_STORE_U64(ctx.r31.u32 + 7728, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r1)
	ctx.current_instruction = 0x8807BBB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,7700(r31)
	ctx.current_instruction = 0x8807BBB4;
	REX_STORE_U32(ctx.r31.u32 + 7700, ctx.r11.u32);
	// bl 0x8807a9a0
	ctx.lr = 0x8807BBBC;
	sub_8807A9A0(ctx, base);
loc_8807BBBC:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807BBBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bbfc
	if (!ctx.cr6.eq) goto loc_8807BBFC;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6720(r31)
	ctx.current_instruction = 0x8807BBD0;
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r11.u32);
	// stw r11,6856(r31)
	ctx.current_instruction = 0x8807BBD4;
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// bl 0x8806e060
	ctx.lr = 0x8807BBDC;
	sub_8806E060(ctx, base);
loc_8807BBDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8807bc0c
	if (ctx.cr6.eq) goto loc_8807BC0C;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807BBE4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8807bc0c
	if (!ctx.cr6.eq) goto loc_8807BC0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,6720(r31)
	ctx.current_instruction = 0x8807BBF4;
	REX_STORE_U32(ctx.r31.u32 + 6720, ctx.r11.u32);
	// b 0x8807bc08
	goto loc_8807BC08;
loc_8807BBFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807bc0c
	if (!ctx.cr6.eq) goto loc_8807BC0C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8807BC08:
	// stw r11,6856(r31)
	ctx.current_instruction = 0x8807BC08;
	REX_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
loc_8807BC0C:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807BC0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bc4c
	if (!ctx.cr6.eq) goto loc_8807BC4C;
	// lwz r11,30408(r31)
	ctx.current_instruction = 0x8807BC18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bc4c
	if (ctx.cr6.eq) goto loc_8807BC4C;
	// lwz r11,30628(r31)
	ctx.current_instruction = 0x8807BC24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bc4c
	if (ctx.cr6.eq) goto loc_8807BC4C;
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x8807BC30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bc4c
	if (ctx.cr6.eq) goto loc_8807BC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.current_instruction = 0x8807BC40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.current_instruction = 0x8807BC44;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x88083540
	ctx.lr = 0x8807BC4C;
	sub_88083540(ctx, base);
loc_8807BC4C:
	// lwz r10,2800(r31)
	ctx.current_instruction = 0x8807BC4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8807bc8c
	if (!ctx.cr6.eq) goto loc_8807BC8C;
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807BC58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807bc8c
	if (!ctx.cr6.eq) goto loc_8807BC8C;
	// lwz r11,7824(r31)
	ctx.current_instruction = 0x8807BC64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7824);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bc7c
	if (!ctx.cr6.eq) goto loc_8807BC7C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8807bc8c
	goto loc_8807BC8C;
loc_8807BC7C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8807bc88
	if (ctx.cr6.eq) goto loc_8807BC88;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8807BC88:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8807BC8C:
	// lbz r9,31537(r31)
	ctx.current_instruction = 0x8807BC8C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 31537);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8807bd18
	if (ctx.cr6.eq) goto loc_8807BD18;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8807bcb0
	if (!ctx.cr6.eq) goto loc_8807BCB0;
	// lbz r11,31538(r31)
	ctx.current_instruction = 0x8807BCA0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31538);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8807bcb0
	if (ctx.cr6.lt) goto loc_8807BCB0;
	// stb r22,31538(r31)
	ctx.current_instruction = 0x8807BCAC;
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r22.u8);
loc_8807BCB0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8807bcc0
	if (!ctx.cr6.eq) goto loc_8807BCC0;
	// stb r22,31539(r31)
	ctx.current_instruction = 0x8807BCB8;
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r22.u8);
	// b 0x8807bd14
	goto loc_8807BD14;
loc_8807BCC0:
	// lbz r11,31539(r31)
	ctx.current_instruction = 0x8807BCC0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31539);
	// lbz r10,31538(r31)
	ctx.current_instruction = 0x8807BCC4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 31538);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,31539(r31)
	ctx.current_instruction = 0x8807BCD8;
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r11.u8);
	// stb r8,31538(r31)
	ctx.current_instruction = 0x8807BCDC;
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r8.u8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8807bd18
	if (ctx.cr6.lt) goto loc_8807BD18;
	// lwz r10,7752(r31)
	ctx.current_instruction = 0x8807BCE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7752);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,860(r31)
	ctx.current_instruction = 0x8807BCF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 860);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8807bd08
	if (ctx.cr6.gt) goto loc_8807BD08;
	// lbz r11,31539(r31)
	ctx.current_instruction = 0x8807BD00;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31539);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8807BD08:
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8807bd18
	if (!ctx.cr6.lt) goto loc_8807BD18;
loc_8807BD14:
	// stb r22,31538(r31)
	ctx.current_instruction = 0x8807BD14;
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r22.u8);
loc_8807BD18:
	// lwz r11,31532(r31)
	ctx.current_instruction = 0x8807BD18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bd40
	if (ctx.cr6.eq) goto loc_8807BD40;
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807BD24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bd38
	if (ctx.cr6.eq) goto loc_8807BD38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bd40
	if (!ctx.cr6.eq) goto loc_8807BD40;
loc_8807BD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4488
	ctx.lr = 0x8807BD40;
	sub_880E4488(ctx, base);
loc_8807BD40:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,388(r1)
	ctx.current_instruction = 0x8807BD44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r30,380(r1)
	ctx.current_instruction = 0x8807BD48;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r29,396(r1)
	ctx.current_instruction = 0x8807BD50;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r9,332(r1)
	ctx.current_instruction = 0x8807BD5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	ctx.current_instruction = 0x8807BD64;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8807BD6C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	ctx.current_instruction = 0x8807BD74;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x8807BD78;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8807a110
	ctx.lr = 0x8807BD80;
	sub_8807A110(ctx, base);
loc_8807BD80:
	// stw r22,112(r1)
	ctx.current_instruction = 0x8807BD80;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8807c0cc
	if (!ctx.cr6.eq) goto loc_8807C0CC;
	// lwz r11,7596(r31)
	ctx.current_instruction = 0x8807BD8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807beb0
	if (ctx.cr6.eq) goto loc_8807BEB0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8807beb0
	if (ctx.cr6.eq) goto loc_8807BEB0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8807be70
	if (ctx.cr6.eq) goto loc_8807BE70;
	// lwz r10,7188(r31)
	ctx.current_instruction = 0x8807BDA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8807be70
	if (ctx.cr6.eq) goto loc_8807BE70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bdf8
	if (!ctx.cr6.eq) goto loc_8807BDF8;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x8807BDBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8807bddc
	if (ctx.cr6.lt) goto loc_8807BDDC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x8807bddc
	if (ctx.cr6.gt) goto loc_8807BDDC;
	// stw r11,7904(r31)
	ctx.current_instruction = 0x8807BDD0;
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4530
	ctx.lr = 0x8807BDDC;
	sub_880E4530(ctx, base);
loc_8807BDDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e44d0
	ctx.lr = 0x8807BDE4;
	sub_880E44D0(ctx, base);
loc_8807BDE4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.current_instruction = 0x8807BDEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8807b658
	ctx.lr = 0x8807BDF4;
	sub_8807B658(ctx, base);
loc_8807BDF4:
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BDF8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8807bf4c
	if (!ctx.cr6.eq) goto loc_8807BF4C;
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x8807BE00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807be24
	if (!ctx.cr6.eq) goto loc_8807BE24;
	// stw r22,21084(r31)
	ctx.current_instruction = 0x8807BE0C;
	REX_STORE_U32(ctx.r31.u32 + 21084, ctx.r22.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.current_instruction = 0x8807BE18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8807b658
	ctx.lr = 0x8807BE20;
	sub_8807B658(ctx, base);
loc_8807BE20:
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BE24:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bf4c
	if (!ctx.cr6.eq) goto loc_8807BF4C;
	// lwz r11,324(r1)
	ctx.current_instruction = 0x8807BE2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8807bf4c
	if (ctx.cr6.eq) goto loc_8807BF4C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8807be54
	if (ctx.cr6.lt) goto loc_8807BE54;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x8807be54
	if (ctx.cr6.gt) goto loc_8807BE54;
	// stw r11,7904(r31)
	ctx.current_instruction = 0x8807BE48;
	REX_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4530
	ctx.lr = 0x8807BE54;
	sub_880E4530(ctx, base);
loc_8807BE54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e44d0
	ctx.lr = 0x8807BE5C;
	sub_880E44D0(ctx, base);
loc_8807BE5C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.current_instruction = 0x8807BE64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// bl 0x8807b658
	ctx.lr = 0x8807BE6C;
	sub_8807B658(ctx, base);
loc_8807BE6C:
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BE70:
	// lwz r11,7600(r31)
	ctx.current_instruction = 0x8807BE70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8807be8c
	if (!ctx.cr6.eq) goto loc_8807BE8C;
	// lwz r11,7572(r31)
	ctx.current_instruction = 0x8807BE7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7572);
	// stw r11,676(r31)
	ctx.current_instruction = 0x8807BE80;
	REX_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,672(r31)
	ctx.current_instruction = 0x8807BE84;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// b 0x8807bf4c
	goto loc_8807BF4C;
loc_8807BE8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8807bf4c
	if (!ctx.cr6.eq) goto loc_8807BF4C;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8807BE94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,404(r1)
	ctx.current_instruction = 0x8807BE9C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bf34
	if (ctx.cr6.eq) goto loc_8807BF34;
	// bl 0x8807b110
	ctx.lr = 0x8807BEAC;
	sub_8807B110(ctx, base);
loc_8807BEAC:
	// b 0x8807bf38
	goto loc_8807BF38;
loc_8807BEB0:
	// lwz r11,4(r31)
	ctx.current_instruction = 0x8807BEB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8807bed0
	if (!ctx.cr6.eq) goto loc_8807BED0;
	// lwz r11,7976(r31)
	ctx.current_instruction = 0x8807BEBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807bed0
	if (!ctx.cr6.eq) goto loc_8807BED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e39d0
	ctx.lr = 0x8807BED0;
	sub_880E39D0(ctx, base);
loc_8807BED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e44d0
	ctx.lr = 0x8807BED8;
	sub_880E44D0(ctx, base);
loc_8807BED8:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8807BED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// lwz r10,1688(r31)
	ctx.current_instruction = 0x8807BEDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,404(r1)
	ctx.current_instruction = 0x8807BEE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r11,1684(r31)
	ctx.current_instruction = 0x8807BEEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1684);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// beq cr6,0x8807bf24
	if (ctx.cr6.eq) goto loc_8807BF24;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r5,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// stw r6,1692(r31)
	ctx.current_instruction = 0x8807BF08;
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r6.u32);
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,1696(r31)
	ctx.current_instruction = 0x8807BF18;
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r9.u32);
	// bl 0x8807b110
	ctx.lr = 0x8807BF20;
	sub_8807B110(ctx, base);
loc_8807BF20:
	// b 0x8807bf38
	goto loc_8807BF38;
loc_8807BF24:
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// stw r8,1692(r31)
	ctx.current_instruction = 0x8807BF28;
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r8.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// stw r6,1696(r31)
	ctx.current_instruction = 0x8807BF30;
	REX_STORE_U32(ctx.r31.u32 + 1696, ctx.r6.u32);
loc_8807BF34:
	// bl 0x8807ad18
	ctx.lr = 0x8807BF38;
	sub_8807AD18(ctx, base);
loc_8807BF38:
	// lwz r11,7632(r31)
	ctx.current_instruction = 0x8807BF38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7632);
	// lwz r10,8024(r31)
	ctx.current_instruction = 0x8807BF3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,7632(r31)
	ctx.current_instruction = 0x8807BF48;
	REX_STORE_U32(ctx.r31.u32 + 7632, ctx.r9.u32);
loc_8807BF4C:
	// lbz r11,31537(r31)
	ctx.current_instruction = 0x8807BF4C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 31537);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807bf6c
	if (ctx.cr6.eq) goto loc_8807BF6C;
	// lwz r11,112(r1)
	ctx.current_instruction = 0x8807BF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807bf6c
	if (ctx.cr6.eq) goto loc_8807BF6C;
	// stb r22,31538(r31)
	ctx.current_instruction = 0x8807BF64;
	REX_STORE_U8(ctx.r31.u32 + 31538, ctx.r22.u8);
	// stb r22,31539(r31)
	ctx.current_instruction = 0x8807BF68;
	REX_STORE_U8(ctx.r31.u32 + 31539, ctx.r22.u8);
loc_8807BF6C:
	// lwz r11,7628(r31)
	ctx.current_instruction = 0x8807BF6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7628);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,1416(r31)
	ctx.current_instruction = 0x8807BF74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,7868(r31)
	ctx.current_instruction = 0x8807BF7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,1424(r31)
	ctx.current_instruction = 0x8807BF84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1424);
	// stw r8,7628(r31)
	ctx.current_instruction = 0x8807BF88;
	REX_STORE_U32(ctx.r31.u32 + 7628, ctx.r8.u32);
	// lfd f13,12408(r10)
	ctx.current_instruction = 0x8807BF8C;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 12408);
	// std r7,112(r1)
	ctx.current_instruction = 0x8807BF90;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.current_instruction = 0x8807BF94;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,16(r11)
	ctx.current_instruction = 0x8807BF9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subfic r4,r5,39
	ctx.xer.ca = ctx.r5.u32 <= 39;
	ctx.r4.u64 = static_cast<uint64_t>(39) - ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x8807BFA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r10,112(r1)
	ctx.current_instruction = 0x8807BFB8;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.current_instruction = 0x8807BFBC;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// beq cr6,0x8807bfd8
	if (ctx.cr6.eq) goto loc_8807BFD8;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfd f12,12088(r10)
	ctx.current_instruction = 0x8807BFD0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 12088);
	// fadd f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 + ctx.f12.f64;
loc_8807BFD8:
	// lwz r10,1360(r31)
	ctx.current_instruction = 0x8807BFD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// fmul f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lwz r9,1352(r31)
	ctx.current_instruction = 0x8807BFE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// lfd f12,7640(r31)
	ctx.current_instruction = 0x8807BFE4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r31.u32 + 7640);
	// fadd f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 + ctx.f13.f64;
	// stfd f11,7640(r31)
	ctx.current_instruction = 0x8807BFEC;
	REX_STORE_U64(ctx.r31.u32 + 7640, ctx.f11.u64);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,112(r1)
	ctx.current_instruction = 0x8807BFF8;
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f10,112(r1)
	ctx.current_instruction = 0x8807BFFC;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fdiv f8,f0,f9
	ctx.f8.f64 = ctx.f0.f64 / ctx.f9.f64;
	// stfd f8,7656(r31)
	ctx.current_instruction = 0x8807C008;
	REX_STORE_U64(ctx.r31.u32 + 7656, ctx.f8.u64);
	// lwz r6,16(r11)
	ctx.current_instruction = 0x8807C00C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subfic r5,r6,39
	ctx.xer.ca = ctx.r6.u32 <= 39;
	ctx.r5.u64 = static_cast<uint64_t>(39) - ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8807C014;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r21)
	ctx.current_instruction = 0x8807C020;
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r3,7192(r31)
	ctx.current_instruction = 0x8807C024;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8807c03c
	if (ctx.cr6.eq) goto loc_8807C03C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807c03c
	if (ctx.cr6.eq) goto loc_8807C03C;
	// bl 0x880f94a0
	ctx.lr = 0x8807C03C;
	sub_880F94A0(ctx, base);
loc_8807C03C:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x8807C03C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6900
	ctx.lr = 0x8807C044;
	sub_880E6900(ctx, base);
loc_8807C044:
	// lwz r11,8024(r31)
	ctx.current_instruction = 0x8807C044;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c05c
	if (ctx.cr6.eq) goto loc_8807C05C;
	// ld r11,736(r31)
	ctx.current_instruction = 0x8807C050;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x8807c078
	if (!ctx.cr6.gt) goto loc_8807C078;
loc_8807C05C:
	// lwz r11,6860(r31)
	ctx.current_instruction = 0x8807C05C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6860);
	// lwz r10,2124(r31)
	ctx.current_instruction = 0x8807C060;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6860(r31)
	ctx.current_instruction = 0x8807C068;
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8807c078
	if (!ctx.cr6.gt) goto loc_8807C078;
	// stw r22,6860(r31)
	ctx.current_instruction = 0x8807C074;
	REX_STORE_U32(ctx.r31.u32 + 6860, ctx.r22.u32);
loc_8807C078:
	// lwz r11,0(r21)
	ctx.current_instruction = 0x8807C078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8807c0c8
	if (ctx.cr6.eq) goto loc_8807C0C8;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x8807C084;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c0b0
	if (ctx.cr6.eq) goto loc_8807C0B0;
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x8807C090;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c0b0
	if (ctx.cr6.eq) goto loc_8807C0B0;
	// lwz r11,2804(r31)
	ctx.current_instruction = 0x8807C09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8807c0bc
	if (ctx.cr6.eq) goto loc_8807C0BC;
	// lwz r11,2808(r31)
	ctx.current_instruction = 0x8807C0A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2808);
	// b 0x8807c0b4
	goto loc_8807C0B4;
loc_8807C0B0:
	// lwz r11,2800(r31)
	ctx.current_instruction = 0x8807C0B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
loc_8807C0B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8807c0c8
	if (!ctx.cr6.eq) goto loc_8807C0C8;
loc_8807C0BC:
	// lwz r11,7756(r31)
	ctx.current_instruction = 0x8807C0BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7756);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7756(r31)
	ctx.current_instruction = 0x8807C0C4;
	REX_STORE_U32(ctx.r31.u32 + 7756, ctx.r11.u32);
loc_8807C0C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8807C0CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8809DE48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8809DE48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8809DE48) {
			switch (rex_dispatch_address) {
				case 0x8809DE50:
				case 0x8809DED0:
				case 0x8809E2AC:
				case 0x8809E590:
				case 0x8809E7DC:
				case 0x8809E810:
				case 0x8809E870:
				case 0x8809E904:
				case 0x8809E918:
				case 0x8809E938:
				case 0x8809EAF8:
				case 0x8809EB7C:
				case 0x8809EC04:
				case 0x8809EC98:
				case 0x8809ED10:
				case 0x8809EDB0:
				case 0x8809EE34:
				case 0x8809EEF8:
				case 0x8809EF88:
				case 0x8809F01C:
				case 0x8809F0D0:
				case 0x8809F14C:
				case 0x8809F1EC:
				case 0x8809F274:
				case 0x8809F340:
				case 0x8809F3B0:
				case 0x8809F428:
				case 0x8809F4E8:
				case 0x8809F568:
				case 0x8809F5EC:
				case 0x8809F67C:
				case 0x8809F6D0:
				case 0x8809F6E8:
				case 0x8809F7AC:
				case 0x8809F870:
				case 0x8809F884:
				case 0x8809F8D4:
				case 0x8809F8EC:
				case 0x8809FA58:
				case 0x8809FA6C:
				case 0x8809FABC:
				case 0x8809FAD4:
				case 0x8809FBC0:
				case 0x8809FC64:
				case 0x8809FD38:
				case 0x8809FD50:
				case 0x8809FD70:
				case 0x8809FF0C:
				case 0x8809FF24:
				case 0x8809FF44:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8809DE48;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8809DE50: goto loc_8809DE50;
		case 0x8809DED0: goto loc_8809DED0;
		case 0x8809E2AC: goto loc_8809E2AC;
		case 0x8809E590: goto loc_8809E590;
		case 0x8809E7DC: goto loc_8809E7DC;
		case 0x8809E810: goto loc_8809E810;
		case 0x8809E870: goto loc_8809E870;
		case 0x8809E904: goto loc_8809E904;
		case 0x8809E918: goto loc_8809E918;
		case 0x8809E938: goto loc_8809E938;
		case 0x8809EAF8: goto loc_8809EAF8;
		case 0x8809EB7C: goto loc_8809EB7C;
		case 0x8809EC04: goto loc_8809EC04;
		case 0x8809EC98: goto loc_8809EC98;
		case 0x8809ED10: goto loc_8809ED10;
		case 0x8809EDB0: goto loc_8809EDB0;
		case 0x8809EE34: goto loc_8809EE34;
		case 0x8809EEF8: goto loc_8809EEF8;
		case 0x8809EF88: goto loc_8809EF88;
		case 0x8809F01C: goto loc_8809F01C;
		case 0x8809F0D0: goto loc_8809F0D0;
		case 0x8809F14C: goto loc_8809F14C;
		case 0x8809F1EC: goto loc_8809F1EC;
		case 0x8809F274: goto loc_8809F274;
		case 0x8809F340: goto loc_8809F340;
		case 0x8809F3B0: goto loc_8809F3B0;
		case 0x8809F428: goto loc_8809F428;
		case 0x8809F4E8: goto loc_8809F4E8;
		case 0x8809F568: goto loc_8809F568;
		case 0x8809F5EC: goto loc_8809F5EC;
		case 0x8809F67C: goto loc_8809F67C;
		case 0x8809F6D0: goto loc_8809F6D0;
		case 0x8809F6E8: goto loc_8809F6E8;
		case 0x8809F7AC: goto loc_8809F7AC;
		case 0x8809F870: goto loc_8809F870;
		case 0x8809F884: goto loc_8809F884;
		case 0x8809F8D4: goto loc_8809F8D4;
		case 0x8809F8EC: goto loc_8809F8EC;
		case 0x8809FA58: goto loc_8809FA58;
		case 0x8809FA6C: goto loc_8809FA6C;
		case 0x8809FABC: goto loc_8809FABC;
		case 0x8809FAD4: goto loc_8809FAD4;
		case 0x8809FBC0: goto loc_8809FBC0;
		case 0x8809FC64: goto loc_8809FC64;
		case 0x8809FD38: goto loc_8809FD38;
		case 0x8809FD50: goto loc_8809FD50;
		case 0x8809FD70: goto loc_8809FD70;
		case 0x8809FF0C: goto loc_8809FF0C;
		case 0x8809FF24: goto loc_8809FF24;
		case 0x8809FF44: goto loc_8809FF44;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8809DE50;
	__savegprlr_14(ctx, base);
loc_8809DE50:
	// stwu r1,-1472(r1)
	ctx.current_instruction = 0x8809DE50;
	ea = -1472 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// stw r10,1548(r1)
	ctx.current_instruction = 0x8809DE58;
	REX_STORE_U32(ctx.r1.u32 + 1548, ctx.r10.u32);
	// lwz r11,28088(r3)
	ctx.current_instruction = 0x8809DE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28088);
	// addi r10,r1,1055
	ctx.r10.s64 = ctx.r1.s64 + 1055;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r8,1532(r1)
	ctx.current_instruction = 0x8809DE68;
	REX_STORE_U32(ctx.r1.u32 + 1532, ctx.r8.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r9,1540(r1)
	ctx.current_instruction = 0x8809DE70;
	REX_STORE_U32(ctx.r1.u32 + 1540, ctx.r9.u32);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r4,1500(r1)
	ctx.current_instruction = 0x8809DE78;
	REX_STORE_U32(ctx.r1.u32 + 1500, ctx.r4.u32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stw r3,1492(r1)
	ctx.current_instruction = 0x8809DE80;
	REX_STORE_U32(ctx.r1.u32 + 1492, ctx.r3.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r5,1508(r1)
	ctx.current_instruction = 0x8809DE88;
	REX_STORE_U32(ctx.r1.u32 + 1508, ctx.r5.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r7,1524(r1)
	ctx.current_instruction = 0x8809DE90;
	REX_STORE_U32(ctx.r1.u32 + 1524, ctx.r7.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r9,220(r1)
	ctx.current_instruction = 0x8809DE98;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8809deac
	if (ctx.cr6.eq) goto loc_8809DEAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8809dec0
	goto loc_8809DEC0;
loc_8809DEAC:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r5,1652(r1)
	ctx.current_instruction = 0x8809DEB0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809dec0
	if (!ctx.cr6.eq) goto loc_8809DEC0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8809DEC0:
	// lwz r28,1644(r1)
	ctx.current_instruction = 0x8809DEC0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x880e2660
	ctx.lr = 0x8809DED0;
	sub_880E2660(ctx, base);
loc_8809DED0:
	// lwz r10,724(r24)
	ctx.current_instruction = 0x8809DED0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 724);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,7764(r24)
	ctx.current_instruction = 0x8809DED8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 7764);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lwz r7,8(r28)
	ctx.current_instruction = 0x8809DEE0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r6,12(r28)
	ctx.current_instruction = 0x8809DEE4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// stw r3,256(r1)
	ctx.current_instruction = 0x8809DEE8;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,292(r1)
	ctx.current_instruction = 0x8809DEF0;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r6,208(r1)
	ctx.current_instruction = 0x8809DEF4;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lis r8,4095
	ctx.r8.s64 = 268369920;
	// mulli r11,r5,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(276));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r19,r8,65535
	ctx.r19.u64 = ctx.r8.u64 | 65535;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r4,296(r1)
	ctx.current_instruction = 0x8809DF14;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_8809DF1C:
	// stwu r10,4(r11)
	ctx.current_instruction = 0x8809DF1C;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8809df1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809DF1C;
	// srawi r10,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 2;
	// lwz r9,1604(r1)
	ctx.current_instruction = 0x8809DF28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r27,1564(r1)
	ctx.current_instruction = 0x8809DF2C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lwz r26,1556(r1)
	ctx.current_instruction = 0x8809DF38;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// lwz r5,1620(r1)
	ctx.current_instruction = 0x8809DF3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r18.s32 >> 2;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// beq cr6,0x8809dfcc
	if (ctx.cr6.eq) goto loc_8809DFCC;
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 2;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// ble cr6,0x8809dfa4
	if (!ctx.cr6.gt) goto loc_8809DFA4;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
loc_8809DF7C:
	// lwz r4,-128(r10)
	ctx.current_instruction = 0x8809DF7C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8809df94
	if (!ctx.cr6.eq) goto loc_8809DF94;
	// lwz r4,0(r10)
	ctx.current_instruction = 0x8809DF88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8809dfa4
	if (ctx.cr6.eq) goto loc_8809DFA4;
loc_8809DF94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8809df7c
	if (ctx.cr6.lt) goto loc_8809DF7C;
loc_8809DFA4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8809dfcc
	if (!ctx.cr6.eq) goto loc_8809DFCC;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,1620(r1)
	ctx.current_instruction = 0x8809DFC0;
	REX_STORE_U32(ctx.r1.u32 + 1620, ctx.r5.u32);
	// stwx r9,r3,r31
	ctx.current_instruction = 0x8809DFC4;
	REX_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r8,r11,r31
	ctx.current_instruction = 0x8809DFC8;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_8809DFCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8809e004
	if (!ctx.cr6.gt) goto loc_8809E004;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
loc_8809DFDC:
	// lwz r9,-128(r10)
	ctx.current_instruction = 0x8809DFDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -128);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8809dff4
	if (!ctx.cr6.eq) goto loc_8809DFF4;
	// lwz r9,0(r10)
	ctx.current_instruction = 0x8809DFE8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8809e004
	if (ctx.cr6.eq) goto loc_8809E004;
loc_8809DFF4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8809dfdc
	if (ctx.cr6.lt) goto loc_8809DFDC;
loc_8809E004:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8809e02c
	if (!ctx.cr6.eq) goto loc_8809E02C;
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
	// stw r5,1620(r1)
	ctx.current_instruction = 0x8809E020;
	REX_STORE_U32(ctx.r1.u32 + 1620, ctx.r5.u32);
	// stwx r7,r8,r31
	ctx.current_instruction = 0x8809E024;
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r6,r4,r31
	ctx.current_instruction = 0x8809E028;
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r6.u32);
loc_8809E02C:
	// srawi r10,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 1;
	// stw r19,240(r1)
	ctx.current_instruction = 0x8809E030;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// srawi r9,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r26.s32 >> 1;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// stw r10,284(r1)
	ctx.current_instruction = 0x8809E03C;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// srawi r8,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r18.s32 >> 1;
	// stw r9,376(r1)
	ctx.current_instruction = 0x8809E044;
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,848
	ctx.r6.s64 = ctx.r1.s64 + 848;
	// stw r8,320(r1)
	ctx.current_instruction = 0x8809E050;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// stw r7,224(r1)
	ctx.current_instruction = 0x8809E058;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// srawi r3,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 1;
	// stw r6,300(r1)
	ctx.current_instruction = 0x8809E060;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,216(r1)
	ctx.current_instruction = 0x8809E068;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// addi r9,r11,6848
	ctx.r9.s64 = ctx.r11.s64 + 6848;
	// stw r3,372(r1)
	ctx.current_instruction = 0x8809E070;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// stw r10,268(r1)
	ctx.current_instruction = 0x8809E074;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,212(r1)
	ctx.current_instruction = 0x8809E07C;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// ble cr6,0x8809e760
	if (!ctx.cr6.gt) goto loc_8809E760;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// lwz r15,1684(r1)
	ctx.current_instruction = 0x8809E088;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 1684);
	// stw r11,264(r1)
	ctx.current_instruction = 0x8809E08C;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
loc_8809E090:
	// lwz r5,264(r1)
	ctx.current_instruction = 0x8809E090;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1380(r24)
	ctx.current_instruction = 0x8809E098;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// lwz r17,1612(r1)
	ctx.current_instruction = 0x8809E09C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// lwz r6,268(r1)
	ctx.current_instruction = 0x8809E0A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,1508(r1)
	ctx.current_instruction = 0x8809E0A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// neg r7,r17
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r17.u64);
	// lwz r9,128(r5)
	ctx.current_instruction = 0x8809E0AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r8,0(r5)
	ctx.current_instruction = 0x8809E0B4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// rlwinm r21,r9,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,280(r1)
	ctx.current_instruction = 0x8809E0C0;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r7.u32);
	// rlwinm r14,r8,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r11,r21,r11
	ctx.r11.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r11.s32);
	// stw r21,316(r1)
	ctx.current_instruction = 0x8809E0D0;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r21.u32);
	// stw r7,304(r1)
	ctx.current_instruction = 0x8809E0D4;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// stw r17,272(r1)
	ctx.current_instruction = 0x8809E0D8;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r17.u32);
	// stw r17,228(r1)
	ctx.current_instruction = 0x8809E0DC;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r17.u32);
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// add r18,r11,r3
	ctx.r18.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// ble cr6,0x8809e18c
	if (!ctx.cr6.gt) goto loc_8809E18C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8809e18c
	if (ctx.cr6.eq) goto loc_8809E18C;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
loc_8809E100:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809e17c
	if (ctx.cr6.eq) goto loc_8809E17C;
	// lwz r11,0(r7)
	ctx.current_instruction = 0x8809E108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8809e140
	if (!ctx.cr6.eq) goto loc_8809E140;
	// lwz r11,128(r7)
	ctx.current_instruction = 0x8809E114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809e12c
	if (!ctx.cr6.eq) goto loc_8809E12C;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8809E12C:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809e174
	if (!ctx.cr6.eq) goto loc_8809E174;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x8809e170
	goto loc_8809E170;
loc_8809E140:
	// lwz r6,128(r7)
	ctx.current_instruction = 0x8809E140;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 128);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8809e174
	if (!ctx.cr6.eq) goto loc_8809E174;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809e160
	if (!ctx.cr6.eq) goto loc_8809E160;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8809E160:
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8809e174
	if (!ctx.cr6.eq) goto loc_8809E174;
	// addi r17,r17,-1
	ctx.r17.s64 = ctx.r17.s64 + -1;
loc_8809E170:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8809E174:
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x8809e100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809E100;
loc_8809E17C:
	// stw r20,304(r1)
	ctx.current_instruction = 0x8809E17C;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r20.u32);
	// stw r4,228(r1)
	ctx.current_instruction = 0x8809E180;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// stw r16,280(r1)
	ctx.current_instruction = 0x8809E184;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r16.u32);
	// stw r17,272(r1)
	ctx.current_instruction = 0x8809E188;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r17.u32);
loc_8809E18C:
	// lwz r11,1572(r1)
	ctx.current_instruction = 0x8809E18C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// add r10,r16,r14
	ctx.r10.u64 = ctx.r16.u64 + ctx.r14.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809e1a4
	if (!ctx.cr6.lt) goto loc_8809E1A4;
	// subf r16,r14,r11
	ctx.r16.u64 = ctx.r11.u64 - ctx.r14.u64;
	// stw r16,280(r1)
	ctx.current_instruction = 0x8809E1A0;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r16.u32);
loc_8809E1A4:
	// lwz r11,1580(r1)
	ctx.current_instruction = 0x8809E1A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// add r10,r17,r14
	ctx.r10.u64 = ctx.r17.u64 + ctx.r14.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809e1bc
	if (!ctx.cr6.gt) goto loc_8809E1BC;
	// subf r17,r14,r11
	ctx.r17.u64 = ctx.r11.u64 - ctx.r14.u64;
	// stw r17,272(r1)
	ctx.current_instruction = 0x8809E1B8;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r17.u32);
loc_8809E1BC:
	// lwz r11,1588(r1)
	ctx.current_instruction = 0x8809E1BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// add r10,r20,r21
	ctx.r10.u64 = ctx.r20.u64 + ctx.r21.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809e1d4
	if (!ctx.cr6.lt) goto loc_8809E1D4;
	// subf r20,r21,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r21.u64;
	// stw r20,304(r1)
	ctx.current_instruction = 0x8809E1D0;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r20.u32);
loc_8809E1D4:
	// lwz r11,1596(r1)
	ctx.current_instruction = 0x8809E1D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// add r10,r4,r21
	ctx.r10.u64 = ctx.r4.u64 + ctx.r21.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809e1ec
	if (!ctx.cr6.gt) goto loc_8809E1EC;
	// subf r4,r21,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r21.u64;
	// stw r4,228(r1)
	ctx.current_instruction = 0x8809E1E8;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
loc_8809E1EC:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x8809E1EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809e514
	if (ctx.cr6.eq) goto loc_8809E514;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x8809e6b8
	if (ctx.cr6.gt) goto loc_8809E6B8;
	// add r10,r20,r21
	ctx.r10.u64 = ctx.r20.u64 + ctx.r21.u64;
	// lwz r11,372(r1)
	ctx.current_instruction = 0x8809E208;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r9,320(r1)
	ctx.current_instruction = 0x8809E20C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,300(r1)
	ctx.current_instruction = 0x8809E214;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r16,r9,r11
	ctx.r16.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r23,r11,r8
	ctx.r23.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_8809E220:
	// lwz r30,280(r1)
	ctx.current_instruction = 0x8809E220;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x8809E224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8809e4e8
	if (ctx.cr6.gt) goto loc_8809E4E8;
	// add r10,r16,r23
	ctx.r10.u64 = ctx.r16.u64 + ctx.r23.u64;
	// lwz r11,376(r1)
	ctx.current_instruction = 0x8809E234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r7,316(r1)
	ctx.current_instruction = 0x8809E23C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// lwz r5,284(r1)
	ctx.current_instruction = 0x8809E244;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// srawi r6,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r23.s32 >> 31;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x8809E24C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// add r4,r9,r14
	ctx.r4.u64 = ctx.r9.u64 + ctx.r14.u64;
	// lwz r9,224(r1)
	ctx.current_instruction = 0x8809E254;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r31,r23,r6
	ctx.r31.u64 = ctx.r23.u64 ^ ctx.r6.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// subf r22,r8,r10
	ctx.r22.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r21,r6,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r6.u64;
	// add r27,r29,r7
	ctx.r27.u64 = ctx.r29.u64 + ctx.r7.u64;
	// subf r28,r11,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r25,r5,r11
	ctx.r25.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r20,r3,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r3.u64;
loc_8809E280:
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809E280;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x8809E288;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r29
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809E294;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r31,7
	ctx.r31.s64 = 7;
	// add r5,r11,r18
	ctx.r5.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809E2AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809E2AC:
	// add r9,r25,r28
	ctx.r9.u64 = ctx.r25.u64 + ctx.r28.u64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809e2fc
	if (ctx.cr6.gt) goto loc_8809E2FC;
	// cmpwi cr6,r22,158
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 158, ctx.xer);
	// bgt cr6,0x8809e2fc
	if (ctx.cr6.gt) goto loc_8809E2FC;
	// lwz r9,212(r1)
	ctx.current_instruction = 0x8809E2CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1636(r1)
	ctx.current_instruction = 0x8809E2D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r8,r11,r9
	ctx.current_instruction = 0x8809E2DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r7,r10,r9
	ctx.current_instruction = 0x8809E2E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r6
	ctx.current_instruction = 0x8809E2EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r10,r4,r6
	ctx.current_instruction = 0x8809E2F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809e30c
	goto loc_8809E30C;
loc_8809E2FC:
	// lwz r6,1636(r1)
	ctx.current_instruction = 0x8809E2FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r9,212(r1)
	ctx.current_instruction = 0x8809E300;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,20(r6)
	ctx.current_instruction = 0x8809E304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809E30C:
	// lwz r10,364(r1)
	ctx.current_instruction = 0x8809E30C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e3bc
	if (!ctx.cr6.lt) goto loc_8809E3BC;
	// addi r11,r1,360
	ctx.r11.s64 = ctx.r1.s64 + 360;
loc_8809E320:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8809E320;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e338
	if (!ctx.cr6.lt) goto loc_8809E338;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x8809e320
	if (!ctx.cr0.eq) goto loc_8809E320;
loc_8809E338:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bge cr6,0x8809e380
	if (!ctx.cr6.lt) goto loc_8809E380;
	// subfic r10,r31,7
	ctx.xer.ca = ctx.r31.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r31.u64;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,340
	ctx.r8.s64 = ctx.r1.s64 + 340;
	// addi r11,r15,24
	ctx.r11.s64 = ctx.r15.s64 + 24;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r15.u64;
	// subf r8,r15,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r15.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8809E35C:
	// lwzx r10,r9,r11
	ctx.current_instruction = 0x8809E35C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lhz r5,0(r11)
	ctx.current_instruction = 0x8809E360;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,2(r11)
	ctx.current_instruction = 0x8809E364;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stwx r10,r8,r11
	ctx.current_instruction = 0x8809E368;
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// sth r5,4(r11)
	ctx.current_instruction = 0x8809E36C;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// sth r4,6(r11)
	ctx.current_instruction = 0x8809E370;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x8809e35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809E35C;
	// lwz r9,212(r1)
	ctx.current_instruction = 0x8809E37C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
loc_8809E380:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// add r11,r10,r15
	ctx.r11.u64 = ctx.r10.u64 + ctx.r15.u64;
	// add r5,r30,r14
	ctx.r5.u64 = ctx.r30.u64 + ctx.r14.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// sthx r5,r10,r15
	ctx.current_instruction = 0x8809E394;
	REX_STORE_U16(ctx.r10.u32 + ctx.r15.u32, ctx.r5.u16);
	// stwx r7,r10,r8
	ctx.current_instruction = 0x8809E398;
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// sth r27,2(r11)
	ctx.current_instruction = 0x8809E39C;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// bne cr6,0x8809e3bc
	if (!ctx.cr6.eq) goto loc_8809E3BC;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x8809E3A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,308(r1)
	ctx.current_instruction = 0x8809E3AC;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r29,312(r1)
	ctx.current_instruction = 0x8809E3B0;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// stw r10,276(r1)
	ctx.current_instruction = 0x8809E3B8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
loc_8809E3BC:
	// srawi r11,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 31;
	// stwx r7,r20,r26
	ctx.current_instruction = 0x8809E3C0;
	REX_STORE_U32(ctx.r20.u32 + ctx.r26.u32, ctx.r7.u32);
	// xor r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809e404
	if (ctx.cr6.gt) goto loc_8809E404;
	// cmpwi cr6,r21,158
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 158, ctx.xer);
	// bgt cr6,0x8809e404
	if (ctx.cr6.gt) goto loc_8809E404;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.current_instruction = 0x8809E3E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r7,r10,r9
	ctx.current_instruction = 0x8809E3E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r6
	ctx.current_instruction = 0x8809E3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r10,r4,r6
	ctx.current_instruction = 0x8809E3F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809e40c
	goto loc_8809E40C;
loc_8809E404:
	// lwz r11,20(r6)
	ctx.current_instruction = 0x8809E404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809E40C:
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r9,r10
	ctx.current_instruction = 0x8809E41C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e4cc
	if (!ctx.cr6.lt) goto loc_8809E4CC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8809e44c
	if (ctx.cr6.eq) goto loc_8809E44C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8809E434:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8809E434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e44c
	if (!ctx.cr6.lt) goto loc_8809E44C;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x8809e434
	if (!ctx.cr0.eq) goto loc_8809E434;
loc_8809E44C:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bge cr6,0x8809e490
	if (!ctx.cr6.lt) goto loc_8809E490;
	// subfic r10,r31,7
	ctx.xer.ca = ctx.r31.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r31.u64;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,340
	ctx.r8.s64 = ctx.r1.s64 + 340;
	// addi r11,r15,24
	ctx.r11.s64 = ctx.r15.s64 + 24;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r15.u64;
	// subf r8,r15,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r15.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8809E470:
	// lwzx r10,r11,r9
	ctx.current_instruction = 0x8809E470;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lhz r6,0(r11)
	ctx.current_instruction = 0x8809E474;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x8809E478;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stwx r10,r11,r8
	ctx.current_instruction = 0x8809E47C;
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// sth r6,4(r11)
	ctx.current_instruction = 0x8809E480;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r5,6(r11)
	ctx.current_instruction = 0x8809E484;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x8809e470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809E470;
loc_8809E490:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// add r11,r10,r15
	ctx.r11.u64 = ctx.r10.u64 + ctx.r15.u64;
	// add r8,r30,r14
	ctx.r8.u64 = ctx.r30.u64 + ctx.r14.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// sthx r8,r10,r15
	ctx.current_instruction = 0x8809E4A4;
	REX_STORE_U16(ctx.r10.u32 + ctx.r15.u32, ctx.r8.u16);
	// stwx r7,r10,r9
	ctx.current_instruction = 0x8809E4A8;
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// sth r27,2(r11)
	ctx.current_instruction = 0x8809E4AC;
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// bne cr6,0x8809e4cc
	if (!ctx.cr6.eq) goto loc_8809E4CC;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x8809E4B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,308(r1)
	ctx.current_instruction = 0x8809E4BC;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r29,312(r1)
	ctx.current_instruction = 0x8809E4C0;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// stw r10,276(r1)
	ctx.current_instruction = 0x8809E4C8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
loc_8809E4CC:
	// lwz r11,272(r1)
	ctx.current_instruction = 0x8809E4CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r7,0(r26)
	ctx.current_instruction = 0x8809E4D4;
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809e280
	if (!ctx.cr6.gt) goto loc_8809E280;
loc_8809E4E8:
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809E4E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r17,r17,28
	ctx.r17.s64 = ctx.r17.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809e220
	if (!ctx.cr6.gt) goto loc_8809E220;
	// lwz r17,272(r1)
	ctx.current_instruction = 0x8809E500;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r16,280(r1)
	ctx.current_instruction = 0x8809E504;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r20,304(r1)
	ctx.current_instruction = 0x8809E508;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r21,316(r1)
	ctx.current_instruction = 0x8809E50C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// b 0x8809e6b8
	goto loc_8809E6B8;
loc_8809E514:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpw cr6,r20,r4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x8809e6b8
	if (ctx.cr6.gt) goto loc_8809E6B8;
	// add r11,r20,r21
	ctx.r11.u64 = ctx.r20.u64 + ctx.r21.u64;
	// lwz r10,320(r1)
	ctx.current_instruction = 0x8809E524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r22,224(r1)
	ctx.current_instruction = 0x8809E528;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r10,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8809E534:
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpw cr6,r16,r17
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r17.s32, ctx.xer);
	// bgt cr6,0x8809e6a0
	if (ctx.cr6.gt) goto loc_8809E6A0;
	// srawi r11,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 31;
	// lwz r10,284(r1)
	ctx.current_instruction = 0x8809E544;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r9,r16,r14
	ctx.r9.u64 = ctx.r16.u64 + ctx.r14.u64;
	// xor r8,r23,r11
	ctx.r8.u64 = ctx.r23.u64 ^ ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r11,r8
	ctx.r27.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r26,r28,r21
	ctx.r26.u64 = ctx.r28.u64 + ctx.r21.u64;
	// addi r25,r22,-4
	ctx.r25.s64 = ctx.r22.s64 + -4;
	// subf r29,r10,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_8809E564:
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809E564;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// lwz r10,292(r1)
	ctx.current_instruction = 0x8809E56C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r4,16
	ctx.r4.s64 = 16;
	// mullw r11,r6,r28
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809E578;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r31,7
	ctx.r31.s64 = 7;
	// add r5,r11,r18
	ctx.r5.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x8809E590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809E590:
	// srawi r9,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 31;
	// xor r8,r29,r9
	ctx.r8.u64 = ctx.r29.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809e5dc
	if (ctx.cr6.gt) goto loc_8809E5DC;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x8809e5dc
	if (ctx.cr6.gt) goto loc_8809E5DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809E5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809E5B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809E5BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809E5C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r11
	ctx.current_instruction = 0x8809E5CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r11,r6,r11
	ctx.current_instruction = 0x8809E5D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8809e5e8
	goto loc_8809E5E8;
loc_8809E5DC:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809E5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809E5E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809E5E8:
	// lwz r10,364(r1)
	ctx.current_instruction = 0x8809E5E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e68c
	if (!ctx.cr6.lt) goto loc_8809E68C;
	// addi r11,r1,360
	ctx.r11.s64 = ctx.r1.s64 + 360;
loc_8809E5FC:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8809E5FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e614
	if (!ctx.cr6.lt) goto loc_8809E614;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x8809e5fc
	if (!ctx.cr0.eq) goto loc_8809E5FC;
loc_8809E614:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bge cr6,0x8809e658
	if (!ctx.cr6.lt) goto loc_8809E658;
	// subfic r10,r31,7
	ctx.xer.ca = ctx.r31.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - ctx.r31.u64;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r8,r1,340
	ctx.r8.s64 = ctx.r1.s64 + 340;
	// addi r11,r15,24
	ctx.r11.s64 = ctx.r15.s64 + 24;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r15.u64;
	// subf r8,r15,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r15.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8809E638:
	// lwzx r10,r9,r11
	ctx.current_instruction = 0x8809E638;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.current_instruction = 0x8809E63C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,2(r11)
	ctx.current_instruction = 0x8809E640;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stwx r10,r8,r11
	ctx.current_instruction = 0x8809E644;
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// sth r6,4(r11)
	ctx.current_instruction = 0x8809E648;
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r5,6(r11)
	ctx.current_instruction = 0x8809E64C;
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x8809e638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8809E638;
loc_8809E658:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// add r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r8,r30,r14
	ctx.r8.u64 = ctx.r30.u64 + ctx.r14.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// sthx r8,r11,r15
	ctx.current_instruction = 0x8809E66C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r15.u32, ctx.r8.u16);
	// stwx r7,r11,r9
	ctx.current_instruction = 0x8809E670;
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// sth r26,2(r10)
	ctx.current_instruction = 0x8809E674;
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r26.u16);
	// bne cr6,0x8809e68c
	if (!ctx.cr6.eq) goto loc_8809E68C;
	// lwz r11,336(r1)
	ctx.current_instruction = 0x8809E67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// stw r30,308(r1)
	ctx.current_instruction = 0x8809E680;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r28,312(r1)
	ctx.current_instruction = 0x8809E684;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r28.u32);
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
loc_8809E68C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r7,4(r25)
	ctx.current_instruction = 0x8809E690;
	ea = 4 + ctx.r25.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r25.u32 = ea;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r30,r17
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x8809e564
	if (!ctx.cr6.gt) goto loc_8809E564;
loc_8809E6A0:
	// lwz r11,228(r1)
	ctx.current_instruction = 0x8809E6A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r22,r22,28
	ctx.r22.s64 = ctx.r22.s64 + 28;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8809e534
	if (!ctx.cr6.gt) goto loc_8809E534;
loc_8809E6B8:
	// lwz r11,336(r1)
	ctx.current_instruction = 0x8809E6B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,240(r1)
	ctx.current_instruction = 0x8809E6BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8809e72c
	if (!ctx.cr6.lt) goto loc_8809E72C;
	// lwz r10,308(r1)
	ctx.current_instruction = 0x8809E6C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,312(r1)
	ctx.current_instruction = 0x8809E6CC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r8,228(r1)
	ctx.current_instruction = 0x8809E6D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,1604(r1)
	ctx.current_instruction = 0x8809E6D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// stw r11,240(r1)
	ctx.current_instruction = 0x8809E6D8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stw r10,252(r1)
	ctx.current_instruction = 0x8809E6DC;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,216(r1)
	ctx.current_instruction = 0x8809E6E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stw r14,248(r1)
	ctx.current_instruction = 0x8809E6E8;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r14.u32);
	// stw r21,260(r1)
	ctx.current_instruction = 0x8809E6EC;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// stw r9,244(r1)
	ctx.current_instruction = 0x8809E6F0;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r16,288(r1)
	ctx.current_instruction = 0x8809E6F4;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r16.u32);
	// stw r20,368(r1)
	ctx.current_instruction = 0x8809E6F8;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// stw r17,384(r1)
	ctx.current_instruction = 0x8809E6FC;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r17.u32);
	// stw r8,380(r1)
	ctx.current_instruction = 0x8809E700;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// beq cr6,0x8809e720
	if (ctx.cr6.eq) goto loc_8809E720;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x8809E708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809e720
	if (ctx.cr6.eq) goto loc_8809E720;
	// lwz r11,300(r1)
	ctx.current_instruction = 0x8809E714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r10,300(r1)
	ctx.current_instruction = 0x8809E718;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// b 0x8809e728
	goto loc_8809E728;
loc_8809E720:
	// lwz r11,224(r1)
	ctx.current_instruction = 0x8809E720;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r10,224(r1)
	ctx.current_instruction = 0x8809E724;
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
loc_8809E728:
	// stw r11,216(r1)
	ctx.current_instruction = 0x8809E728;
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_8809E72C:
	// lwz r11,268(r1)
	ctx.current_instruction = 0x8809E72C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r10,264(r1)
	ctx.current_instruction = 0x8809E730;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r9,1620(r1)
	ctx.current_instruction = 0x8809E734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r11,268(r1)
	ctx.current_instruction = 0x8809E740;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,264(r1)
	ctx.current_instruction = 0x8809E748;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// blt cr6,0x8809e090
	if (ctx.cr6.lt) goto loc_8809E090;
	// lwz r25,1540(r1)
	ctx.current_instruction = 0x8809E750;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r18,1548(r1)
	ctx.current_instruction = 0x8809E754;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r26,1556(r1)
	ctx.current_instruction = 0x8809E758;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// lwz r27,1564(r1)
	ctx.current_instruction = 0x8809E75C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
loc_8809E760:
	// lwz r11,248(r1)
	ctx.current_instruction = 0x8809E760;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,252(r1)
	ctx.current_instruction = 0x8809E764;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,260(r1)
	ctx.current_instruction = 0x8809E768;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x8809E76C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,1604(r1)
	ctx.current_instruction = 0x8809E774;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,292(r1)
	ctx.current_instruction = 0x8809E784;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r28,268(r1)
	ctx.current_instruction = 0x8809E78C;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r28.u32);
	// beq cr6,0x8809e820
	if (ctx.cr6.eq) goto loc_8809E820;
	// lwz r9,2608(r24)
	ctx.current_instruction = 0x8809E794;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 2608);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,2604(r24)
	ctx.current_instruction = 0x8809E79C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 2604);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r18,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r18.u64;
	// lwz r23,2616(r24)
	ctx.current_instruction = 0x8809E7A8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r24.u32 + 2616);
	// subf r10,r25,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r25.u64;
	// lwz r22,2612(r24)
	ctx.current_instruction = 0x8809E7B0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r24.u32 + 2612);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// and r11,r5,r23
	ctx.r11.u64 = ctx.r5.u64 & ctx.r23.u64;
	// and r10,r4,r22
	ctx.r10.u64 = ctx.r4.u64 & ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r5,r9,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r4,r8,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809E7DC;
	sub_88085E60(ctx, base);
loc_8809E7DC:
	// subf r11,r27,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r27.u64;
	// subf r10,r26,r20
	ctx.r10.u64 = ctx.r20.u64 - ctx.r26.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// and r5,r9,r23
	ctx.r5.u64 = ctx.r9.u64 & ctx.r23.u64;
	// and r4,r8,r22
	ctx.r4.u64 = ctx.r8.u64 & ctx.r22.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r21,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r21.u64;
	// subf r4,r20,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809E810;
	sub_88085E60(ctx, base);
loc_8809E810:
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8809e83c
	if (!ctx.cr6.lt) goto loc_8809E83C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,276(r1)
	ctx.current_instruction = 0x8809E81C;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
loc_8809E820:
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
loc_8809E824:
	// lwz r11,28088(r24)
	ctx.current_instruction = 0x8809E824;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28088);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809e850
	if (ctx.cr6.eq) goto loc_8809E850;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8809e864
	goto loc_8809E864;
loc_8809E83C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// stw r11,276(r1)
	ctx.current_instruction = 0x8809E844;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// b 0x8809e824
	goto loc_8809E824;
loc_8809E850:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lwz r5,1652(r1)
	ctx.current_instruction = 0x8809E854;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809e864
	if (!ctx.cr6.eq) goto loc_8809E864;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8809E864:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,1644(r1)
	ctx.current_instruction = 0x8809E868;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// bl 0x880e2660
	ctx.lr = 0x8809E870;
	sub_880E2660(ctx, base);
loc_8809E870:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x8809E870;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r10,256(r1)
	ctx.current_instruction = 0x8809E87C;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// lwz r10,240(r1)
	ctx.current_instruction = 0x8809E880;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8809e98c
	if (!ctx.cr6.eq) goto loc_8809E98C;
	// srawi r10,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r19.s32 >> 2;
	// lwz r4,1380(r24)
	ctx.current_instruction = 0x8809E894;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// srawi r11,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r18.s32 >> 2;
	// lwz r9,1628(r1)
	ctx.current_instruction = 0x8809E89C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// lwz r6,1508(r1)
	ctx.current_instruction = 0x8809E8A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,260(r1)
	ctx.current_instruction = 0x8809E8A8;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r31,220(r1)
	ctx.current_instruction = 0x8809E8B0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r10,248(r1)
	ctx.current_instruction = 0x8809E8B4;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// stw r30,244(r1)
	ctx.current_instruction = 0x8809E8B8;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r30,252(r1)
	ctx.current_instruction = 0x8809E8BC;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r24)
	ctx.current_instruction = 0x8809E8C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 1560);
	// clrlwi r7,r19,30
	ctx.r7.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r8,r18,30
	ctx.r8.u64 = ctx.r18.u32 & 0x3;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r7,232(r1)
	ctx.current_instruction = 0x8809E8D4;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,2308(r24)
	ctx.current_instruction = 0x8809E8DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 2308);
	// stw r8,236(r1)
	ctx.current_instruction = 0x8809E8E0;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne cr6,0x8809e908
	if (!ctx.cr6.eq) goto loc_8809E908;
	// lwz r11,2488(r24)
	ctx.current_instruction = 0x8809E8F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 2488);
	// stw r29,84(r1)
	ctx.current_instruction = 0x8809E8F8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809E904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809E904:
	// b 0x8809e918
	goto loc_8809E918;
loc_8809E908:
	// stw r29,84(r1)
	ctx.current_instruction = 0x8809E908;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,2496(r24)
	ctx.current_instruction = 0x8809E90C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809E918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809E918:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809E918;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809E924;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809E938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809E938:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,158
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 158, ctx.xer);
	// bgt cr6,0x8809e978
	if (ctx.cr6.gt) goto loc_8809E978;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809E944;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809E950;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809E954;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809E958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.current_instruction = 0x8809E964;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r11,r5,r11
	ctx.current_instruction = 0x8809E968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8809ffbc
	goto loc_8809FFBC;
loc_8809E978:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809E978;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809E97C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8809ffbc
	goto loc_8809FFBC;
loc_8809E98C:
	// lwz r11,1588(r1)
	ctx.current_instruction = 0x8809E98C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// subf r9,r19,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r19.u64;
	// lwz r10,1596(r1)
	ctx.current_instruction = 0x8809E994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// subf r8,r18,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r18.u64;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r31.u64;
	// lwz r11,2604(r24)
	ctx.current_instruction = 0x8809E9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 2604);
	// subf r4,r31,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r31.u64;
	// lwz r5,1572(r1)
	ctx.current_instruction = 0x8809E9A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// addic r3,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// lwz r10,2608(r24)
	ctx.current_instruction = 0x8809E9B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 2608);
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809E9B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// subf r29,r30,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r30.u64;
	// subfe r14,r3,r7
	temp.u8 = (~ctx.r3.u32 + ctx.r7.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r14.u64 = ~ctx.r3.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,2612(r24)
	ctx.current_instruction = 0x8809E9C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 2612);
	// addic r7,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// lwz r28,1580(r1)
	ctx.current_instruction = 0x8809E9C8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r22,1508(r1)
	ctx.current_instruction = 0x8809E9D0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,252(r1)
	ctx.current_instruction = 0x8809E9D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mullw r9,r31,r6
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r26,2616(r24)
	ctx.current_instruction = 0x8809E9E0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 2616);
	// lwz r5,368(r1)
	ctx.current_instruction = 0x8809E9E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r31,244(r1)
	ctx.current_instruction = 0x8809E9E8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r23,384(r1)
	ctx.current_instruction = 0x8809E9EC;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r21,380(r1)
	ctx.current_instruction = 0x8809E9F0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subfe r7,r7,r4
	temp.u8 = (~ctx.r7.u32 + ctx.r4.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r4,248(r1)
	ctx.current_instruction = 0x8809E9F8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addic r20,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r20.s64 = ctx.r29.s64 + -1;
	// and r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 & ctx.r3.u64;
	// stw r7,284(r1)
	ctx.current_instruction = 0x8809EA04;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r30,r30,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r30.u64;
	// subfe r17,r20,r29
	temp.u8 = (~ctx.r20.u32 + ctx.r29.u32 < ~ctx.r20.u32) | (~ctx.r20.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r17.u64 = ~ctx.r20.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r9,288(r1)
	ctx.current_instruction = 0x8809EA1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// and r29,r25,r26
	ctx.r29.u64 = ctx.r25.u64 & ctx.r26.u64;
	// stw r22,288(r1)
	ctx.current_instruction = 0x8809EA24;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// addic r28,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r28.s64 = ctx.r30.s64 + -1;
	// lwz r4,288(r1)
	ctx.current_instruction = 0x8809EA2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// subf r22,r5,r31
	ctx.r22.u64 = ctx.r31.u64 - ctx.r5.u64;
	// subf r10,r10,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r10.u64;
	// subfe r16,r28,r30
	temp.u8 = (~ctx.r28.u32 + ctx.r30.u32 < ~ctx.r28.u32) | (~ctx.r28.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r16.u64 = ~ctx.r28.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r31,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 1;
	// subf r20,r9,r23
	ctx.r20.u64 = ctx.r23.u64 - ctx.r9.u64;
	// subf r15,r5,r21
	ctx.r15.u64 = ctx.r21.u64 - ctx.r5.u64;
	// subf r21,r9,r8
	ctx.r21.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r23,r11,r4
	ctx.r23.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r25,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8809ee48
	if (!ctx.cr6.eq) goto loc_8809EE48;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8809ee48
	if (ctx.cr6.eq) goto loc_8809EE48;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// addi r9,r25,-2
	ctx.r9.s64 = ctx.r25.s64 + -2;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// subf r11,r6,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r6.u64;
	// xor r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r27,r8,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r8.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r29,r7,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// bgt cr6,0x8809ead0
	if (ctx.cr6.gt) goto loc_8809EAD0;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8809ead0
	if (ctx.cr6.gt) goto loc_8809EAD0;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809EAA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,1636(r1)
	ctx.current_instruction = 0x8809EAAC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809EAB0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809EAB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r26
	ctx.current_instruction = 0x8809EAC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// lwzx r10,r4,r26
	ctx.current_instruction = 0x8809EAC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809eadc
	goto loc_8809EADC;
loc_8809EAD0:
	// lwz r26,1636(r1)
	ctx.current_instruction = 0x8809EAD0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809EAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EADC:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809EADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809EAE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809EAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EAF8:
	// srawi r10,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// lwz r9,216(r1)
	ctx.current_instruction = 0x8809EAFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r8,r21,-8
	ctx.r8.s64 = ctx.r21.s64 + -8;
	// xor r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 ^ ctx.r10.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r5,r6,r9
	ctx.current_instruction = 0x8809EB18;
	REX_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r5.u32);
	// bgt cr6,0x8809eb54
	if (ctx.cr6.gt) goto loc_8809EB54;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8809eb54
	if (ctx.cr6.gt) goto loc_8809EB54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809EB2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809EB34;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809EB38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x8809EB44;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwzx r11,r5,r26
	ctx.current_instruction = 0x8809EB48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809eb5c
	goto loc_8809EB5C;
loc_8809EB54:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809EB54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EB5C:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809EB5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809EB68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809EB70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809EB7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EB7C:
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// lwz r9,216(r1)
	ctx.current_instruction = 0x8809EB80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r8,r21,-7
	ctx.r8.s64 = ctx.r21.s64 + -7;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r31,r7,r5
	ctx.r31.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stwx r4,r6,r9
	ctx.current_instruction = 0x8809EB9C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// bgt cr6,0x8809ebdc
	if (ctx.cr6.gt) goto loc_8809EBDC;
	// cmpwi cr6,r29,158
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 158, ctx.xer);
	// bgt cr6,0x8809ebdc
	if (ctx.cr6.gt) goto loc_8809EBDC;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809EBB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.current_instruction = 0x8809EBBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809EBC0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r26
	ctx.current_instruction = 0x8809EBCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwzx r10,r5,r26
	ctx.current_instruction = 0x8809EBD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ebe4
	goto loc_8809EBE4;
loc_8809EBDC:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809EBDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EBE4:
	// lwz r29,208(r1)
	ctx.current_instruction = 0x8809EBE4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r28,2
	ctx.r5.s64 = ctx.r28.s64 + 2;
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809EBF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809EBF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8809EC04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EC04:
	// addi r11,r21,-6
	ctx.r11.s64 = ctx.r21.s64 + -6;
	// lwz r28,216(r1)
	ctx.current_instruction = 0x8809EC08;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stwx r10,r9,r28
	ctx.current_instruction = 0x8809EC18;
	REX_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// bne cr6,0x8809ed1c
	if (!ctx.cr6.eq) goto loc_8809ED1C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8809ed1c
	if (ctx.cr6.eq) goto loc_8809ED1C;
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x8809ec70
	if (ctx.cr6.gt) goto loc_8809EC70;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809ec70
	if (ctx.cr6.gt) goto loc_8809EC70;
	// lwz r30,212(r1)
	ctx.current_instruction = 0x8809EC44;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.current_instruction = 0x8809EC50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r8,r10,r30
	ctx.current_instruction = 0x8809EC54;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x8809EC60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x8809EC64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ec7c
	goto loc_8809EC7C;
loc_8809EC70:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809EC70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r30,212(r1)
	ctx.current_instruction = 0x8809EC74;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EC7C:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809EC80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809EC88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8809EC98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EC98:
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// stw r10,-4(r28)
	ctx.current_instruction = 0x8809ECA4;
	REX_STORE_U32(ctx.r28.u32 + -4, ctx.r10.u32);
	// cmpwi cr6,r27,158
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 158, ctx.xer);
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x8809ece8
	if (ctx.cr6.gt) goto loc_8809ECE8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809ece8
	if (ctx.cr6.gt) goto loc_8809ECE8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.current_instruction = 0x8809ECC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r8,r10,r30
	ctx.current_instruction = 0x8809ECCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r26
	ctx.current_instruction = 0x8809ECD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// lwzx r10,r6,r26
	ctx.current_instruction = 0x8809ECDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ecf0
	goto loc_8809ECF0;
loc_8809ECE8:
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809ECE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809ECF0:
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809ECF0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809ECFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// add r11,r6,r23
	ctx.r11.u64 = ctx.r6.u64 + ctx.r23.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8809ED10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809ED10:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r11,24(r28)
	ctx.current_instruction = 0x8809ED14;
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// b 0x8809f5fc
	goto loc_8809F5FC;
loc_8809ED1C:
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8809f5fc
	if (!ctx.cr6.eq) goto loc_8809F5FC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x8809f5fc
	if (ctx.cr6.eq) goto loc_8809F5FC;
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x8809ed78
	if (ctx.cr6.gt) goto loc_8809ED78;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809ed78
	if (ctx.cr6.gt) goto loc_8809ED78;
	// lwz r28,212(r1)
	ctx.current_instruction = 0x8809ED48;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,1636(r1)
	ctx.current_instruction = 0x8809ED54;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x8809ED58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x8809ED5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r29
	ctx.current_instruction = 0x8809ED68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r10,r6,r29
	ctx.current_instruction = 0x8809ED6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ed88
	goto loc_8809ED88;
loc_8809ED78:
	// lwz r29,1636(r1)
	ctx.current_instruction = 0x8809ED78;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r28,212(r1)
	ctx.current_instruction = 0x8809ED7C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,20(r29)
	ctx.current_instruction = 0x8809ED80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809ED88:
	// lwz r26,1492(r1)
	ctx.current_instruction = 0x8809ED88;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r27,208(r1)
	ctx.current_instruction = 0x8809ED90;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
	// lwz r24,1500(r1)
	ctx.current_instruction = 0x8809ED98;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,1380(r26)
	ctx.current_instruction = 0x8809EDA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 1380);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8809EDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EDB0:
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// addi r10,r20,1
	ctx.r10.s64 = ctx.r20.s64 + 1;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r30,216(r1)
	ctx.current_instruction = 0x8809EDBC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stwx r9,r7,r30
	ctx.current_instruction = 0x8809EDD4;
	REX_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r9.u32);
	// bgt cr6,0x8809ee0c
	if (ctx.cr6.gt) goto loc_8809EE0C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809ee0c
	if (ctx.cr6.gt) goto loc_8809EE0C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x8809EDEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwzx r9,r11,r28
	ctx.current_instruction = 0x8809EDF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r29
	ctx.current_instruction = 0x8809EDFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwzx r11,r7,r29
	ctx.current_instruction = 0x8809EE00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ee14
	goto loc_8809EE14;
loc_8809EE0C:
	// lwz r11,20(r29)
	ctx.current_instruction = 0x8809EE0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EE14:
	// lwz r6,1380(r26)
	ctx.current_instruction = 0x8809EE14;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r6,r23
	ctx.r11.u64 = ctx.r6.u64 + ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bctrl 
	ctx.lr = 0x8809EE34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EE34:
	// addi r11,r20,8
	ctx.r11.s64 = ctx.r20.s64 + 8;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r30
	ctx.current_instruction = 0x8809EE40;
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x8809f5fc
	goto loc_8809F5FC;
loc_8809EE48:
	// cmpw cr6,r22,r15
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x8809f288
	if (!ctx.cr6.eq) goto loc_8809F288;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8809f288
	if (ctx.cr6.eq) goto loc_8809F288;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// addi r9,r25,2
	ctx.r9.s64 = ctx.r25.s64 + 2;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// add r11,r6,r21
	ctx.r11.u64 = ctx.r6.u64 + ctx.r21.u64;
	// xor r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r26,r8,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r8.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// subf r28,r7,r4
	ctx.r28.u64 = ctx.r4.u64 - ctx.r7.u64;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// bgt cr6,0x8809eec4
	if (ctx.cr6.gt) goto loc_8809EEC4;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x8809eec4
	if (ctx.cr6.gt) goto loc_8809EEC4;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809EE94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1636(r1)
	ctx.current_instruction = 0x8809EEA0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809EEA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r5,r8,r11
	ctx.current_instruction = 0x8809EEA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x8809EEB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r3,r10
	ctx.current_instruction = 0x8809EEB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809eed0
	goto loc_8809EED0;
loc_8809EEC4:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809EEC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809EEC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EED0:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809EED0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r10,r22,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809EEDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// subf r24,r22,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r30,r21,r24
	ctx.r30.u64 = ctx.r21.u64 + ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x8809EEF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EEF8:
	// srawi r9,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 31;
	// addi r8,r30,6
	ctx.r8.s64 = ctx.r30.s64 + 6;
	// lwz r7,216(r1)
	ctx.current_instruction = 0x8809EF00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// xor r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// stwx r4,r5,r7
	ctx.current_instruction = 0x8809EF18;
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// bgt cr6,0x8809ef58
	if (ctx.cr6.gt) goto loc_8809EF58;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x8809ef58
	if (ctx.cr6.gt) goto loc_8809EF58;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809EF2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1636(r1)
	ctx.current_instruction = 0x8809EF34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809EF38;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x8809EF3C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x8809EF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r5,r10
	ctx.current_instruction = 0x8809EF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ef64
	goto loc_8809EF64;
loc_8809EF58:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809EF58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809EF5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EF64:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809EF64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r10,208(r1)
	ctx.current_instruction = 0x8809EF6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809EF78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809EF7C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8809EF88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809EF88:
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// lwz r8,216(r1)
	ctx.current_instruction = 0x8809EF8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r7,r30,7
	ctx.r7.s64 = ctx.r30.s64 + 7;
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r31,r6,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stwx r3,r5,r8
	ctx.current_instruction = 0x8809EFA8;
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r3.u32);
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// bgt cr6,0x8809efec
	if (ctx.cr6.gt) goto loc_8809EFEC;
	// cmpwi cr6,r28,158
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 158, ctx.xer);
	// bgt cr6,0x8809efec
	if (ctx.cr6.gt) goto loc_8809EFEC;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809EFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1636(r1)
	ctx.current_instruction = 0x8809EFC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8809EFCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x8809EFD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r10
	ctx.current_instruction = 0x8809EFDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r10,r4,r10
	ctx.current_instruction = 0x8809EFE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809eff8
	goto loc_8809EFF8;
loc_8809EFEC:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809EFEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809EFF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r29,r10,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809EFF8:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809EFF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r10,208(r1)
	ctx.current_instruction = 0x8809F000;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r27,2
	ctx.r5.s64 = ctx.r27.s64 + 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F00C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809F010;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8809F01C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F01C:
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwz r28,216(r1)
	ctx.current_instruction = 0x8809F020;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stwx r8,r7,r28
	ctx.current_instruction = 0x8809F030;
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r8.u32);
	// bne cr6,0x8809f158
	if (!ctx.cr6.eq) goto loc_8809F158;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8809f158
	if (ctx.cr6.eq) goto loc_8809F158;
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x8809f08c
	if (ctx.cr6.gt) goto loc_8809F08C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f08c
	if (ctx.cr6.gt) goto loc_8809F08C;
	// lwz r27,212(r1)
	ctx.current_instruction = 0x8809F05C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,1636(r1)
	ctx.current_instruction = 0x8809F068;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8809F06C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8809F070;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r29
	ctx.current_instruction = 0x8809F07C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r10,r6,r29
	ctx.current_instruction = 0x8809F080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f09c
	goto loc_8809F09C;
loc_8809F08C:
	// lwz r29,1636(r1)
	ctx.current_instruction = 0x8809F08C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r27,212(r1)
	ctx.current_instruction = 0x8809F090;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,20(r29)
	ctx.current_instruction = 0x8809F094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F09C:
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,1492(r1)
	ctx.current_instruction = 0x8809F0A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// lwz r24,208(r1)
	ctx.current_instruction = 0x8809F0A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// subf r9,r22,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r22.u64;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F0B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,1380(r10)
	ctx.current_instruction = 0x8809F0C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1380);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8809F0D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F0D0:
	// addi r8,r25,-2
	ctx.r8.s64 = ctx.r25.s64 + -2;
	// add r7,r3,r30
	ctx.r7.u64 = ctx.r3.u64 + ctx.r30.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// stw r7,-4(r31)
	ctx.current_instruction = 0x8809F0DC;
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r7.u32);
	// cmpwi cr6,r26,158
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 158, ctx.xer);
	// xor r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// bgt cr6,0x8809f120
	if (ctx.cr6.gt) goto loc_8809F120;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f120
	if (ctx.cr6.gt) goto loc_8809F120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8809F100;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8809F104;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r29
	ctx.current_instruction = 0x8809F110;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r10,r6,r29
	ctx.current_instruction = 0x8809F114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f128
	goto loc_8809F128;
loc_8809F120:
	// lwz r11,20(r29)
	ctx.current_instruction = 0x8809F120;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F128:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809F128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F134;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809F13C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// subf r11,r6,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r6.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8809F14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F14C:
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r10,-32(r31)
	ctx.current_instruction = 0x8809F150;
	REX_STORE_U32(ctx.r31.u32 + -32, ctx.r10.u32);
	// b 0x8809f5fc
	goto loc_8809F5FC;
loc_8809F158:
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8809f5fc
	if (!ctx.cr6.eq) goto loc_8809F5FC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x8809f5fc
	if (ctx.cr6.eq) goto loc_8809F5FC;
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bgt cr6,0x8809f1b4
	if (ctx.cr6.gt) goto loc_8809F1B4;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f1b4
	if (ctx.cr6.gt) goto loc_8809F1B4;
	// lwz r26,212(r1)
	ctx.current_instruction = 0x8809F184;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,1636(r1)
	ctx.current_instruction = 0x8809F190;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8809F194;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8809F198;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x8809F1A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x8809F1A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f1c4
	goto loc_8809F1C4;
loc_8809F1B4:
	// lwz r27,1636(r1)
	ctx.current_instruction = 0x8809F1B4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r26,212(r1)
	ctx.current_instruction = 0x8809F1B8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8809F1BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F1C4:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809F1C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r10,208(r1)
	ctx.current_instruction = 0x8809F1CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F1D8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// add r30,r24,r20
	ctx.r30.u64 = ctx.r24.u64 + ctx.r20.u64;
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809F1E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8809F1EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F1EC:
	// addi r9,r25,-2
	ctx.r9.s64 = ctx.r25.s64 + -2;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// xor r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// stwx r5,r6,r28
	ctx.current_instruction = 0x8809F20C;
	REX_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r5.u32);
	// bgt cr6,0x8809f244
	if (ctx.cr6.gt) goto loc_8809F244;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f244
	if (ctx.cr6.gt) goto loc_8809F244;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r26
	ctx.current_instruction = 0x8809F224;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwzx r9,r11,r26
	ctx.current_instruction = 0x8809F228;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r27
	ctx.current_instruction = 0x8809F234;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// lwzx r11,r7,r27
	ctx.current_instruction = 0x8809F238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f24c
	goto loc_8809F24C;
loc_8809F244:
	// lwz r11,20(r27)
	ctx.current_instruction = 0x8809F244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F24C:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809F24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r10,208(r1)
	ctx.current_instruction = 0x8809F254;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F25C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809F260;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r11,r6,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r6.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bctrl 
	ctx.lr = 0x8809F274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F274:
	// addi r9,r30,-6
	ctx.r9.s64 = ctx.r30.s64 + -6;
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r28
	ctx.current_instruction = 0x8809F280;
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r8.u32);
	// b 0x8809f5fc
	goto loc_8809F5FC;
loc_8809F288:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x8809f434
	if (!ctx.cr6.eq) goto loc_8809F434;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8809f434
	if (ctx.cr6.eq) goto loc_8809F434;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
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
	// subf r31,r9,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// bgt cr6,0x8809f2f8
	if (ctx.cr6.gt) goto loc_8809F2F8;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f2f8
	if (ctx.cr6.gt) goto loc_8809F2F8;
	// lwz r27,212(r1)
	ctx.current_instruction = 0x8809F2C8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,1636(r1)
	ctx.current_instruction = 0x8809F2D4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8809F2D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8809F2DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x8809F2E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x8809F2EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f308
	goto loc_8809F308;
loc_8809F2F8:
	// lwz r28,1636(r1)
	ctx.current_instruction = 0x8809F2F8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r27,212(r1)
	ctx.current_instruction = 0x8809F2FC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8809F300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F308:
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809F30C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// lwz r26,208(r1)
	ctx.current_instruction = 0x8809F310;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// subf r9,r22,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r22.u64;
	// lwz r8,216(r1)
	ctx.current_instruction = 0x8809F31C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// subf r10,r6,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r6.u64;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F324;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8809F340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F340:
	// srawi r7,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 31;
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// xor r5,r25,r7
	ctx.r5.u64 = ctx.r25.u64 ^ ctx.r7.u64;
	// stw r6,-32(r30)
	ctx.current_instruction = 0x8809F34C;
	REX_STORE_U32(ctx.r30.u32 + -32, ctx.r6.u32);
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// bgt cr6,0x8809f38c
	if (ctx.cr6.gt) goto loc_8809F38C;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f38c
	if (ctx.cr6.gt) goto loc_8809F38C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8809F36C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8809F370;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x8809F37C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x8809F380;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f394
	goto loc_8809F394;
loc_8809F38C:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8809F38C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F394:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809F398;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F3A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8809F3B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F3B0:
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// stw r10,-4(r30)
	ctx.current_instruction = 0x8809F3BC;
	REX_STORE_U32(ctx.r30.u32 + -4, ctx.r10.u32);
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// bgt cr6,0x8809f400
	if (ctx.cr6.gt) goto loc_8809F400;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f400
	if (ctx.cr6.gt) goto loc_8809F400;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.current_instruction = 0x8809F3E0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r9,r11,r27
	ctx.current_instruction = 0x8809F3E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x8809F3F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x8809F3F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f408
	goto loc_8809F408;
loc_8809F400:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8809F400;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F408:
	// lwz r6,1380(r24)
	ctx.current_instruction = 0x8809F408;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F414;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// add r11,r6,r23
	ctx.r11.u64 = ctx.r6.u64 + ctx.r23.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x8809F428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F428:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// stw r11,24(r30)
	ctx.current_instruction = 0x8809F42C;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x8809f5fc
	goto loc_8809F5FC;
loc_8809F434:
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x8809f5fc
	if (!ctx.cr6.eq) goto loc_8809F5FC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x8809f5fc
	if (ctx.cr6.eq) goto loc_8809F5FC;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
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
	// subf r31,r9,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// bgt cr6,0x8809f4a4
	if (ctx.cr6.gt) goto loc_8809F4A4;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f4a4
	if (ctx.cr6.gt) goto loc_8809F4A4;
	// lwz r24,212(r1)
	ctx.current_instruction = 0x8809F474;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,1636(r1)
	ctx.current_instruction = 0x8809F480;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8809F484;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8809F488;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x8809F494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x8809F498;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f4b4
	goto loc_8809F4B4;
loc_8809F4A4:
	// lwz r28,1636(r1)
	ctx.current_instruction = 0x8809F4A4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r24,212(r1)
	ctx.current_instruction = 0x8809F4A8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8809F4AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F4B4:
	// lwz r10,1492(r1)
	ctx.current_instruction = 0x8809F4B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// rlwinm r9,r22,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r27,208(r1)
	ctx.current_instruction = 0x8809F4BC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// subf r11,r22,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r22.u64;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F4C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r6,1380(r10)
	ctx.current_instruction = 0x8809F4D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1380);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// subf r10,r6,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r6.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// bctrl 
	ctx.lr = 0x8809F4E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F4E8:
	// addi r8,r30,-6
	ctx.r8.s64 = ctx.r30.s64 + -6;
	// lwz r26,216(r1)
	ctx.current_instruction = 0x8809F4EC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// srawi r7,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r25.s32 >> 31;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// xor r4,r25,r7
	ctx.r4.u64 = ctx.r25.u64 ^ ctx.r7.u64;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// stwx r5,r6,r26
	ctx.current_instruction = 0x8809F508;
	REX_STORE_U32(ctx.r6.u32 + ctx.r26.u32, ctx.r5.u32);
	// bgt cr6,0x8809f540
	if (ctx.cr6.gt) goto loc_8809F540;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f540
	if (ctx.cr6.gt) goto loc_8809F540;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8809F520;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8809F524;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x8809F530;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x8809F534;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f548
	goto loc_8809F548;
loc_8809F540:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8809F540;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F548:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809F548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F554;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809F560;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// bctrl 
	ctx.lr = 0x8809F568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F568:
	// addi r10,r25,2
	ctx.r10.s64 = ctx.r25.s64 + 2;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// xor r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// cmpwi cr6,r31,158
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 158, ctx.xer);
	// subf r11,r8,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stwx r6,r7,r26
	ctx.current_instruction = 0x8809F588;
	REX_STORE_U32(ctx.r7.u32 + ctx.r26.u32, ctx.r6.u32);
	// bgt cr6,0x8809f5c0
	if (ctx.cr6.gt) goto loc_8809F5C0;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// bgt cr6,0x8809f5c0
	if (ctx.cr6.gt) goto loc_8809F5C0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r24
	ctx.current_instruction = 0x8809F5A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// lwzx r9,r11,r24
	ctx.current_instruction = 0x8809F5A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r28
	ctx.current_instruction = 0x8809F5B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r11,r7,r28
	ctx.current_instruction = 0x8809F5B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809f5c8
	goto loc_8809F5C8;
loc_8809F5C0:
	// lwz r11,20(r28)
	ctx.current_instruction = 0x8809F5C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809F5C8:
	// lwz r11,1492(r1)
	ctx.current_instruction = 0x8809F5C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809F5D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// lwz r6,1380(r11)
	ctx.current_instruction = 0x8809F5DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1380);
	// add r11,r6,r23
	ctx.r11.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bctrl 
	ctx.lr = 0x8809F5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F5EC:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r26
	ctx.current_instruction = 0x8809F5F8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r9.u32);
loc_8809F5FC:
	// lwz r28,1492(r1)
	ctx.current_instruction = 0x8809F5FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// lwz r11,268(r1)
	ctx.current_instruction = 0x8809F600;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r24,292(r1)
	ctx.current_instruction = 0x8809F604;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// subf r9,r18,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r18.u64;
	// subf r8,r19,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r19.u64;
	// lwz r10,2604(r28)
	ctx.current_instruction = 0x8809F610;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 2604);
	// lwz r11,2608(r28)
	ctx.current_instruction = 0x8809F614;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2608);
	// lwz r7,2612(r28)
	ctx.current_instruction = 0x8809F618;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 2612);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,2616(r28)
	ctx.current_instruction = 0x8809F620;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 2616);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,28036(r28)
	ctx.current_instruction = 0x8809F628;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 28036);
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// and r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 & ctx.r5.u64;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r30,r11,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8809fb20
	if (ctx.cr6.eq) goto loc_8809FB20;
	// lwz r11,2488(r28)
	ctx.current_instruction = 0x8809F644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 2488);
	// li r25,16
	ctx.r25.s64 = 16;
	// lwz r27,220(r1)
	ctx.current_instruction = 0x8809F64C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,1380(r28)
	ctx.current_instruction = 0x8809F658;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 1380);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,1560(r28)
	ctx.current_instruction = 0x8809F660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,2308(r28)
	ctx.current_instruction = 0x8809F668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 2308);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809F670;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809F67C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F67C:
	// lwz r8,1532(r1)
	ctx.current_instruction = 0x8809F67C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r7,1524(r1)
	ctx.current_instruction = 0x8809F680;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lwz r29,296(r1)
	ctx.current_instruction = 0x8809F68C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r24,1500(r1)
	ctx.current_instruction = 0x8809F694;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// stw r6,100(r1)
	ctx.current_instruction = 0x8809F698;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r8,116(r1)
	ctx.current_instruction = 0x8809F6A0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,108(r1)
	ctx.current_instruction = 0x8809F6A8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r5,92(r1)
	ctx.current_instruction = 0x8809F6B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r4,84(r1)
	ctx.current_instruction = 0x8809F6B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88085938
	ctx.lr = 0x8809F6D0;
	sub_88085938(ctx, base);
loc_8809F6D0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,224(r1)
	ctx.current_instruction = 0x8809F6D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809F6E8;
	sub_88085E60(ctx, base);
loc_8809F6E8:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809F6E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1604(r1)
	ctx.current_instruction = 0x8809F6EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809F6F4;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809f708
	if (ctx.cr6.eq) goto loc_8809F708;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809F704;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_8809F708:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r10,1604(r1)
	ctx.current_instruction = 0x8809F70C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r8,1532(r1)
	ctx.current_instruction = 0x8809F710;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r26,r20,1
	ctx.r26.s64 = ctx.r20.s64 + 1;
	// stw r9,204(r1)
	ctx.current_instruction = 0x8809F718;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// addi r20,r1,236
	ctx.r20.s64 = ctx.r1.s64 + 236;
	// lwz r4,216(r1)
	ctx.current_instruction = 0x8809F724;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stw r9,288(r1)
	ctx.current_instruction = 0x8809F728;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// stw r10,180(r1)
	ctx.current_instruction = 0x8809F730;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r8,164(r1)
	ctx.current_instruction = 0x8809F738;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r8,1524(r1)
	ctx.current_instruction = 0x8809F740;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r10,108(r29)
	ctx.current_instruction = 0x8809F748;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,116(r1)
	ctx.current_instruction = 0x8809F750;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r20,196(r1)
	ctx.current_instruction = 0x8809F754;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r9,228(r1)
	ctx.current_instruction = 0x8809F75C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r26,1628(r1)
	ctx.current_instruction = 0x8809F760;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// stw r8,156(r1)
	ctx.current_instruction = 0x8809F764;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stw r4,100(r1)
	ctx.current_instruction = 0x8809F768;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r10,284(r1)
	ctx.current_instruction = 0x8809F76C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r29,172(r1)
	ctx.current_instruction = 0x8809F770;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x8809F774;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r16,92(r1)
	ctx.current_instruction = 0x8809F778;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r17,84(r1)
	ctx.current_instruction = 0x8809F77C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r31,140(r1)
	ctx.current_instruction = 0x8809F784;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r26,132(r1)
	ctx.current_instruction = 0x8809F78C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r15,124(r1)
	ctx.current_instruction = 0x8809F794;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// stw r30,148(r1)
	ctx.current_instruction = 0x8809F798;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lwz r20,288(r1)
	ctx.current_instruction = 0x8809F79C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// stw r8,264(r1)
	ctx.current_instruction = 0x8809F7A0;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// stw r20,188(r1)
	ctx.current_instruction = 0x8809F7A4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// bl 0x8808a188
	ctx.lr = 0x8809F7AC;
	sub_8808A188(ctx, base);
loc_8809F7AC:
	// lwz r7,292(r1)
	ctx.current_instruction = 0x8809F7AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r6,232(r1)
	ctx.current_instruction = 0x8809F7B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r5,r19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x8809f7d4
	if (!ctx.cr6.eq) goto loc_8809F7D4;
	// lwz r11,268(r1)
	ctx.current_instruction = 0x8809F7C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r10,236(r1)
	ctx.current_instruction = 0x8809F7C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x8809f94c
	if (ctx.cr6.eq) goto loc_8809F94C;
loc_8809F7D4:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r9,1572(r1)
	ctx.current_instruction = 0x8809F7D8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// srawi r28,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r18.s32 >> 2;
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// clrlwi r30,r18,30
	ctx.r30.u64 = ctx.r18.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809f804
	if (ctx.cr6.lt) goto loc_8809F804;
	// lwz r9,1580(r1)
	ctx.current_instruction = 0x8809F7F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809f808
	if (!ctx.cr6.gt) goto loc_8809F808;
loc_8809F804:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8809F808:
	// lwz r9,1588(r1)
	ctx.current_instruction = 0x8809F808;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809f820
	if (ctx.cr6.lt) goto loc_8809F820;
	// lwz r9,1596(r1)
	ctx.current_instruction = 0x8809F814;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809f824
	if (!ctx.cr6.gt) goto loc_8809F824;
loc_8809F820:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8809F824:
	// lwz r27,1492(r1)
	ctx.current_instruction = 0x8809F824;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lwz r9,1508(r1)
	ctx.current_instruction = 0x8809F82C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r24,220(r1)
	ctx.current_instruction = 0x8809F834;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,1380(r27)
	ctx.current_instruction = 0x8809F844;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 1380);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r27)
	ctx.current_instruction = 0x8809F850;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1560);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2308(r27)
	ctx.current_instruction = 0x8809F858;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 2308);
	// bne cr6,0x8809f874
	if (!ctx.cr6.eq) goto loc_8809F874;
	// lwz r11,2488(r27)
	ctx.current_instruction = 0x8809F860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2488);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809F864;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809F870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F870:
	// b 0x8809f884
	goto loc_8809F884;
loc_8809F874:
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809F874;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r11,2496(r27)
	ctx.current_instruction = 0x8809F878;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809F884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809F884:
	// lwz r7,1532(r1)
	ctx.current_instruction = 0x8809F884;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lwz r6,1524(r1)
	ctx.current_instruction = 0x8809F88C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r23,296(r1)
	ctx.current_instruction = 0x8809F894;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r5,92(r1)
	ctx.current_instruction = 0x8809F89C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r3,100(r1)
	ctx.current_instruction = 0x8809F8A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r7,116(r1)
	ctx.current_instruction = 0x8809F8AC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r6,108(r1)
	ctx.current_instruction = 0x8809F8B4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,1500(r1)
	ctx.current_instruction = 0x8809F8C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8809F8C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085938
	ctx.lr = 0x8809F8D4;
	sub_88085938(ctx, base);
loc_8809F8D4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,224(r1)
	ctx.current_instruction = 0x8809F8DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809F8EC;
	sub_88085E60(ctx, base);
loc_8809F8EC:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809F8EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,1604(r1)
	ctx.current_instruction = 0x8809F8F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809F8F8;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809f90c
	if (ctx.cr6.eq) goto loc_8809F90C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,208(r1)
	ctx.current_instruction = 0x8809F908;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_8809F90C:
	// lwz r9,108(r23)
	ctx.current_instruction = 0x8809F90C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 108);
	// lwz r10,228(r1)
	ctx.current_instruction = 0x8809F910;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r27,264(r1)
	ctx.current_instruction = 0x8809F918;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8809f950
	if (!ctx.cr6.lt) goto loc_8809F950;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r31,232(r1)
	ctx.current_instruction = 0x8809F92C;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	ctx.current_instruction = 0x8809F934;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,248(r1)
	ctx.current_instruction = 0x8809F938;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// stw r28,260(r1)
	ctx.current_instruction = 0x8809F93C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x8809F940;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,252(r1)
	ctx.current_instruction = 0x8809F944;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// b 0x8809f950
	goto loc_8809F950;
loc_8809F94C:
	// lwz r27,264(r1)
	ctx.current_instruction = 0x8809F94C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
loc_8809F950:
	// lwz r11,1604(r1)
	ctx.current_instruction = 0x8809F950;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809fb18
	if (ctx.cr6.eq) goto loc_8809FB18;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x8809F95C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8809f974
	if (!ctx.cr6.eq) goto loc_8809F974;
	// lwz r11,1556(r1)
	ctx.current_instruction = 0x8809F968;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// lwz r10,1564(r1)
	ctx.current_instruction = 0x8809F96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// b 0x8809f97c
	goto loc_8809F97C;
loc_8809F974:
	// lwz r11,1540(r1)
	ctx.current_instruction = 0x8809F974;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r10,1548(r1)
	ctx.current_instruction = 0x8809F978;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
loc_8809F97C:
	// lwz r9,252(r1)
	ctx.current_instruction = 0x8809F97C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r8,248(r1)
	ctx.current_instruction = 0x8809F980;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r7,232(r1)
	ctx.current_instruction = 0x8809F984;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8809f9bc
	if (!ctx.cr6.eq) goto loc_8809F9BC;
	// lwz r9,244(r1)
	ctx.current_instruction = 0x8809F99C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,260(r1)
	ctx.current_instruction = 0x8809F9A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x8809F9A4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8809fb18
	if (ctx.cr6.eq) goto loc_8809FB18;
loc_8809F9BC:
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// lwz r9,1572(r1)
	ctx.current_instruction = 0x8809F9C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// srawi r28,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 2;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809f9ec
	if (ctx.cr6.lt) goto loc_8809F9EC;
	// lwz r9,1580(r1)
	ctx.current_instruction = 0x8809F9E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809f9f0
	if (!ctx.cr6.gt) goto loc_8809F9F0;
loc_8809F9EC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8809F9F0:
	// lwz r9,1588(r1)
	ctx.current_instruction = 0x8809F9F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809fa08
	if (ctx.cr6.lt) goto loc_8809FA08;
	// lwz r9,1596(r1)
	ctx.current_instruction = 0x8809F9FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809fa0c
	if (!ctx.cr6.gt) goto loc_8809FA0C;
loc_8809FA08:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8809FA0C:
	// lwz r24,1492(r1)
	ctx.current_instruction = 0x8809FA0C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lwz r9,1508(r1)
	ctx.current_instruction = 0x8809FA14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r26,220(r1)
	ctx.current_instruction = 0x8809FA1C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r24)
	ctx.current_instruction = 0x8809FA2C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 1380);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r24)
	ctx.current_instruction = 0x8809FA38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 1560);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,2308(r24)
	ctx.current_instruction = 0x8809FA40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 2308);
	// bne cr6,0x8809fa5c
	if (!ctx.cr6.eq) goto loc_8809FA5C;
	// lwz r11,2488(r24)
	ctx.current_instruction = 0x8809FA48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 2488);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809FA4C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FA58:
	// b 0x8809fa6c
	goto loc_8809FA6C;
loc_8809FA5C:
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809FA5C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r11,2496(r24)
	ctx.current_instruction = 0x8809FA60;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FA6C:
	// lwz r6,1532(r1)
	ctx.current_instruction = 0x8809FA6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r11,1524(r1)
	ctx.current_instruction = 0x8809FA74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r25,296(r1)
	ctx.current_instruction = 0x8809FA80;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r8,84(r1)
	ctx.current_instruction = 0x8809FA84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r5,100(r1)
	ctx.current_instruction = 0x8809FA8C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r6,116(r1)
	ctx.current_instruction = 0x8809FA94;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r3,92(r1)
	ctx.current_instruction = 0x8809FA9C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,1500(r1)
	ctx.current_instruction = 0x8809FAA8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,108(r1)
	ctx.current_instruction = 0x8809FAB0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88085938
	ctx.lr = 0x8809FABC;
	sub_88085938(ctx, base);
loc_8809FABC:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,224(r1)
	ctx.current_instruction = 0x8809FAC4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88085e60
	ctx.lr = 0x8809FAD4;
	sub_88085E60(ctx, base);
loc_8809FAD4:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809FAD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,108(r25)
	ctx.current_instruction = 0x8809FADC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,228(r1)
	ctx.current_instruction = 0x8809FAE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8809fb18
	if (!ctx.cr6.lt) goto loc_8809FB18;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r31,232(r1)
	ctx.current_instruction = 0x8809FAFC;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,236(r1)
	ctx.current_instruction = 0x8809FB04;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,248(r1)
	ctx.current_instruction = 0x8809FB08;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// stw r28,260(r1)
	ctx.current_instruction = 0x8809FB0C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r11,244(r1)
	ctx.current_instruction = 0x8809FB10;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r11,252(r1)
	ctx.current_instruction = 0x8809FB14;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
loc_8809FB18:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8809ffbc
	goto loc_8809FFBC;
loc_8809FB20:
	// lwz r11,256(r1)
	ctx.current_instruction = 0x8809FB20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r25,1644(r1)
	ctx.current_instruction = 0x8809FB24;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8809fbcc
	if (ctx.cr6.eq) goto loc_8809FBCC;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// lwz r9,12(r25)
	ctx.current_instruction = 0x8809FB34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// srawi r8,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 1;
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// stw r9,208(r1)
	ctx.current_instruction = 0x8809FB48;
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// xor r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// cmpwi cr6,r11,158
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 158, ctx.xer);
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// bgt cr6,0x8809fb98
	if (ctx.cr6.gt) goto loc_8809FB98;
	// cmpwi cr6,r10,158
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 158, ctx.xer);
	// bgt cr6,0x8809fb98
	if (ctx.cr6.gt) goto loc_8809FB98;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809FB6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,1636(r1)
	ctx.current_instruction = 0x8809FB74;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x8809FB78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r5,r7,r11
	ctx.current_instruction = 0x8809FB7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r26
	ctx.current_instruction = 0x8809FB88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// lwzx r10,r3,r26
	ctx.current_instruction = 0x8809FB8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809fba4
	goto loc_8809FBA4;
loc_8809FB98:
	// lwz r26,1636(r1)
	ctx.current_instruction = 0x8809FB98;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r11,20(r26)
	ctx.current_instruction = 0x8809FB9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809FBA4:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,1380(r28)
	ctx.current_instruction = 0x8809FBA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 1380);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809FBB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8809FBC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FBC0:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r11,240(r1)
	ctx.current_instruction = 0x8809FBC4;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x8809fbd0
	goto loc_8809FBD0;
loc_8809FBCC:
	// lwz r26,1636(r1)
	ctx.current_instruction = 0x8809FBCC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
loc_8809FBD0:
	// lwz r10,220(r1)
	ctx.current_instruction = 0x8809FBD0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,236
	ctx.r6.s64 = ctx.r1.s64 + 236;
	// stw r26,140(r1)
	ctx.current_instruction = 0x8809FBDC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// srawi r11,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// stw r7,188(r1)
	ctx.current_instruction = 0x8809FBE4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// srawi r9,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 1;
	// stw r9,156(r1)
	ctx.current_instruction = 0x8809FBEC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r6,180(r1)
	ctx.current_instruction = 0x8809FBF0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// stw r10,108(r1)
	ctx.current_instruction = 0x8809FBF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r31,r15,1
	ctx.r31.s64 = ctx.r15.s64 + 1;
	// lwz r8,296(r1)
	ctx.current_instruction = 0x8809FC00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r30,r20,1
	ctx.r30.s64 = ctx.r20.s64 + 1;
	// stw r11,164(r1)
	ctx.current_instruction = 0x8809FC08;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// lwz r11,28464(r28)
	ctx.current_instruction = 0x8809FC10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 28464);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r27,1628(r1)
	ctx.current_instruction = 0x8809FC18;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r29,216(r1)
	ctx.current_instruction = 0x8809FC20;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,172(r1)
	ctx.current_instruction = 0x8809FC28;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r8,196(r1)
	ctx.current_instruction = 0x8809FC30;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lwz r10,284(r1)
	ctx.current_instruction = 0x8809FC34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,240(r1)
	ctx.current_instruction = 0x8809FC3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r4,1500(r1)
	ctx.current_instruction = 0x8809FC40;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// stw r25,148(r1)
	ctx.current_instruction = 0x8809FC44;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r27,132(r1)
	ctx.current_instruction = 0x8809FC48;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r16,92(r1)
	ctx.current_instruction = 0x8809FC4C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r31,124(r1)
	ctx.current_instruction = 0x8809FC50;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r17,84(r1)
	ctx.current_instruction = 0x8809FC54;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// stw r30,116(r1)
	ctx.current_instruction = 0x8809FC58;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,100(r1)
	ctx.current_instruction = 0x8809FC5C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x8809FC64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FC64:
	// clrlwi r31,r19,30
	ctx.r31.u64 = ctx.r19.u32 & 0x3;
	// li r25,16
	ctx.r25.s64 = 16;
	// clrlwi r30,r18,30
	ctx.r30.u64 = ctx.r18.u32 & 0x3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8809fc80
	if (!ctx.cr6.eq) goto loc_8809FC80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8809fdf0
	if (ctx.cr6.eq) goto loc_8809FDF0;
loc_8809FC80:
	// lwz r11,232(r1)
	ctx.current_instruction = 0x8809FC80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x8809fca4
	if (!ctx.cr6.eq) goto loc_8809FCA4;
	// lwz r11,268(r1)
	ctx.current_instruction = 0x8809FC90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r10,236(r1)
	ctx.current_instruction = 0x8809FC94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x8809fdf0
	if (ctx.cr6.eq) goto loc_8809FDF0;
loc_8809FCA4:
	// srawi r29,r19,2
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r19.s32 >> 2;
	// lwz r9,1572(r1)
	ctx.current_instruction = 0x8809FCA8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// srawi r28,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r18.s32 >> 2;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809fccc
	if (ctx.cr6.lt) goto loc_8809FCCC;
	// lwz r9,1580(r1)
	ctx.current_instruction = 0x8809FCC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809fcd0
	if (!ctx.cr6.gt) goto loc_8809FCD0;
loc_8809FCCC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8809FCD0:
	// lwz r9,1588(r1)
	ctx.current_instruction = 0x8809FCD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809fce8
	if (ctx.cr6.lt) goto loc_8809FCE8;
	// lwz r9,1596(r1)
	ctx.current_instruction = 0x8809FCDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809fcec
	if (!ctx.cr6.gt) goto loc_8809FCEC;
loc_8809FCE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8809FCEC:
	// lwz r9,1492(r1)
	ctx.current_instruction = 0x8809FCEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r8,1508(r1)
	ctx.current_instruction = 0x8809FCF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r26,220(r1)
	ctx.current_instruction = 0x8809FCFC;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,1380(r9)
	ctx.current_instruction = 0x8809FD08;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 1380);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r9)
	ctx.current_instruction = 0x8809FD14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 1560);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bne cr6,0x8809fd3c
	if (!ctx.cr6.eq) goto loc_8809FD3C;
	// lwz r11,2488(r9)
	ctx.current_instruction = 0x8809FD24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2488);
	// lwz r9,2308(r9)
	ctx.current_instruction = 0x8809FD28;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 2308);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809FD2C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FD38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FD38:
	// b 0x8809fd50
	goto loc_8809FD50;
loc_8809FD3C:
	// lwz r11,2496(r9)
	ctx.current_instruction = 0x8809FD3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2496);
	// lwz r9,2308(r9)
	ctx.current_instruction = 0x8809FD40;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 2308);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809FD44;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FD50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FD50:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809FD50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809FD5C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FD70:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x8809fdb0
	if (ctx.cr6.gt) goto loc_8809FDB0;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809FD80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1636(r1)
	ctx.current_instruction = 0x8809FD8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x8809FD90;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r5,r7,r11
	ctx.current_instruction = 0x8809FD94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x8809FDA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r8,r10
	ctx.current_instruction = 0x8809FDA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809fdbc
	goto loc_8809FDBC;
loc_8809FDB0:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809FDB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809FDB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809FDBC:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8809FDC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809fdf4
	if (!ctx.cr6.lt) goto loc_8809FDF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r31,232(r1)
	ctx.current_instruction = 0x8809FDD0;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r30,236(r1)
	ctx.current_instruction = 0x8809FDD4;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r10,240(r1)
	ctx.current_instruction = 0x8809FDD8;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r29,248(r1)
	ctx.current_instruction = 0x8809FDDC;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// stw r28,260(r1)
	ctx.current_instruction = 0x8809FDE0;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r9,244(r1)
	ctx.current_instruction = 0x8809FDE4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,252(r1)
	ctx.current_instruction = 0x8809FDE8;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// b 0x8809fdf4
	goto loc_8809FDF4;
loc_8809FDF0:
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8809FDF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
loc_8809FDF4:
	// lwz r10,1604(r1)
	ctx.current_instruction = 0x8809FDF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8809ffbc
	if (ctx.cr6.eq) goto loc_8809FFBC;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x8809FE00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8809fe18
	if (!ctx.cr6.eq) goto loc_8809FE18;
	// lwz r10,1556(r1)
	ctx.current_instruction = 0x8809FE0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// lwz r9,1564(r1)
	ctx.current_instruction = 0x8809FE10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// b 0x8809fe20
	goto loc_8809FE20;
loc_8809FE18:
	// lwz r10,1540(r1)
	ctx.current_instruction = 0x8809FE18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r9,1548(r1)
	ctx.current_instruction = 0x8809FE1C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
loc_8809FE20:
	// clrlwi r29,r10,30
	ctx.r29.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8809fe38
	if (!ctx.cr6.eq) goto loc_8809FE38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8809ffbc
	if (ctx.cr6.eq) goto loc_8809FFBC;
loc_8809FE38:
	// lwz r8,252(r1)
	ctx.current_instruction = 0x8809FE38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r7,248(r1)
	ctx.current_instruction = 0x8809FE3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r6,232(r1)
	ctx.current_instruction = 0x8809FE40;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8809fe78
	if (!ctx.cr6.eq) goto loc_8809FE78;
	// lwz r8,244(r1)
	ctx.current_instruction = 0x8809FE58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,260(r1)
	ctx.current_instruction = 0x8809FE5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r6,236(r1)
	ctx.current_instruction = 0x8809FE60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8809ffbc
	if (ctx.cr6.eq) goto loc_8809FFBC;
loc_8809FE78:
	// srawi r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	// srawi r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	// lwz r9,1572(r1)
	ctx.current_instruction = 0x8809FE80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809fea0
	if (ctx.cr6.lt) goto loc_8809FEA0;
	// lwz r9,1580(r1)
	ctx.current_instruction = 0x8809FE94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809fea4
	if (!ctx.cr6.gt) goto loc_8809FEA4;
loc_8809FEA0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8809FEA4:
	// lwz r9,1588(r1)
	ctx.current_instruction = 0x8809FEA4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8809febc
	if (ctx.cr6.lt) goto loc_8809FEBC;
	// lwz r9,1596(r1)
	ctx.current_instruction = 0x8809FEB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1596);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8809fec0
	if (!ctx.cr6.gt) goto loc_8809FEC0;
loc_8809FEBC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8809FEC0:
	// lwz r9,1492(r1)
	ctx.current_instruction = 0x8809FEC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r8,1508(r1)
	ctx.current_instruction = 0x8809FEC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r27,220(r1)
	ctx.current_instruction = 0x8809FED0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,1380(r9)
	ctx.current_instruction = 0x8809FEDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 1380);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,1560(r9)
	ctx.current_instruction = 0x8809FEE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 1560);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bne cr6,0x8809ff10
	if (!ctx.cr6.eq) goto loc_8809FF10;
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809FEF8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r11,2488(r9)
	ctx.current_instruction = 0x8809FEFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2488);
	// lwz r9,2308(r9)
	ctx.current_instruction = 0x8809FF00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 2308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FF0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FF0C:
	// b 0x8809ff24
	goto loc_8809FF24;
loc_8809FF10:
	// lwz r11,2496(r9)
	ctx.current_instruction = 0x8809FF10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2496);
	// lwz r9,2308(r9)
	ctx.current_instruction = 0x8809FF14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 2308);
	// stw r25,84(r1)
	ctx.current_instruction = 0x8809FF18;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FF24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FF24:
	// lwz r11,208(r1)
	ctx.current_instruction = 0x8809FF24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,1500(r1)
	ctx.current_instruction = 0x8809FF30;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1500);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8809FF44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8809FF44:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,158
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 158, ctx.xer);
	// bgt cr6,0x8809ff84
	if (ctx.cr6.gt) goto loc_8809FF84;
	// lwz r11,212(r1)
	ctx.current_instruction = 0x8809FF54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1636(r1)
	ctx.current_instruction = 0x8809FF60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwzx r6,r8,r11
	ctx.current_instruction = 0x8809FF64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r5,r7,r11
	ctx.current_instruction = 0x8809FF68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r10
	ctx.current_instruction = 0x8809FF74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r10,r8,r10
	ctx.current_instruction = 0x8809FF78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8809ff90
	goto loc_8809FF90;
loc_8809FF84:
	// lwz r11,1636(r1)
	ctx.current_instruction = 0x8809FF84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// lwz r10,20(r11)
	ctx.current_instruction = 0x8809FF88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8809FF90:
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,240(r1)
	ctx.current_instruction = 0x8809FF94;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8809ffbc
	if (!ctx.cr6.lt) goto loc_8809FFBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r29,232(r1)
	ctx.current_instruction = 0x8809FFA4;
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// stw r28,236(r1)
	ctx.current_instruction = 0x8809FFA8;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,248(r1)
	ctx.current_instruction = 0x8809FFAC;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r30,260(r1)
	ctx.current_instruction = 0x8809FFB0;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r9,244(r1)
	ctx.current_instruction = 0x8809FFB4;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r9,252(r1)
	ctx.current_instruction = 0x8809FFB8;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
loc_8809FFBC:
	// lwz r10,252(r1)
	ctx.current_instruction = 0x8809FFBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,248(r1)
	ctx.current_instruction = 0x8809FFC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r8,244(r1)
	ctx.current_instruction = 0x8809FFC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,260(r1)
	ctx.current_instruction = 0x8809FFC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,232(r1)
	ctx.current_instruction = 0x8809FFD0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r5,1660(r1)
	ctx.current_instruction = 0x8809FFD8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1668(r1)
	ctx.current_instruction = 0x8809FFE0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// lwz r7,236(r1)
	ctx.current_instruction = 0x8809FFE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1676(r1)
	ctx.current_instruction = 0x8809FFEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1676);
	// add r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r4,0(r5)
	ctx.current_instruction = 0x8809FFF8;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	ctx.current_instruction = 0x8809FFFC;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r11,0(r6)
	ctx.current_instruction = 0x880A0000;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F8CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F8CE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F8CE8) {
			switch (rex_dispatch_address) {
				case 0x880F8D54:
				case 0x880F8D64:
				case 0x880F8E14:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F8CE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F8D54: goto loc_880F8D54;
		case 0x880F8D64: goto loc_880F8D64;
		case 0x880F8E14: goto loc_880F8E14;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880F8CEC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x880F8CF0;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880F8CF4;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x880F8CF8;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.current_instruction = 0x880F8CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x880f8d64
	if (!ctx.cr6.gt) goto loc_880F8D64;
	// lwz r11,72(r3)
	ctx.current_instruction = 0x880F8D10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,8(r11)
	ctx.current_instruction = 0x880F8D14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f8d54
	if (!ctx.cr6.eq) goto loc_880F8D54;
	// lwz r10,40(r3)
	ctx.current_instruction = 0x880F8D20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,44(r3)
	ctx.current_instruction = 0x880F8D24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x880f8d3c
	if (!ctx.cr6.eq) goto loc_880F8D3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x880f8d5c
	goto loc_880F8D5C;
loc_880F8D3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880f8d54
	if (!ctx.cr6.eq) goto loc_880F8D54;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x880F8D54;
	sub_880E6960(ctx, base);
loc_880F8D54:
	// lwz r5,20(r31)
	ctx.current_instruction = 0x880F8D54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,40(r31)
	ctx.current_instruction = 0x880F8D58;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
loc_880F8D5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880e6960
	ctx.lr = 0x880F8D64;
	sub_880E6960(ctx, base);
loc_880F8D64:
	// lwz r10,0(r31)
	ctx.current_instruction = 0x880F8D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,40(r31)
	ctx.current_instruction = 0x880F8D6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r9,24(r31)
	ctx.current_instruction = 0x880F8D74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addic. r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mullw r10,r6,r8
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// stw r8,68(r31)
	ctx.current_instruction = 0x880F8D84;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble 0x880f8dd8
	if (!ctx.cr0.gt) goto loc_880F8DD8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_880F8D94:
	// lbz r8,0(r10)
	ctx.current_instruction = 0x880F8D94;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r6,56(r31)
	ctx.current_instruction = 0x880F8D9C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stwx r5,r9,r6
	ctx.current_instruction = 0x880F8DB4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x880F8DBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r4,r9,r3
	ctx.current_instruction = 0x880F8DC0;
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x880F8DC8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x880f8d94
	if (ctx.cr6.lt) goto loc_880F8D94;
loc_880F8DD8:
	// lwz r9,0(r31)
	ctx.current_instruction = 0x880F8DD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x880f8dfc
	if (!ctx.cr6.lt) goto loc_880F8DFC;
	// lbz r10,0(r10)
	ctx.current_instruction = 0x880F8DE4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,56(r31)
	ctx.current_instruction = 0x880F8DEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stwx r7,r8,r9
	ctx.current_instruction = 0x880F8DF8;
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
loc_880F8DFC:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,60(r31)
	ctx.current_instruction = 0x880F8E00;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,0(r31)
	ctx.current_instruction = 0x880F8E08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.current_instruction = 0x880F8E0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8813c710
	ctx.lr = 0x880F8E14;
	sub_8813C710(ctx, base);
loc_880F8E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880F8E18;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880F8E20;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880F8E24;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FA49C) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880FA49C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FA49C;
	ctx.current_instruction = 0x880FA49C;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880FAC68) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FAC68;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FAC68) {
			switch (rex_dispatch_address) {
				case 0x880FAC70:
				case 0x880FAC9C:
				case 0x880FACA8:
				case 0x880FACE8:
				case 0x880FAD08:
				case 0x880FAD58:
				case 0x880FADA0:
				case 0x880FAE0C:
				case 0x880FAE80:
				case 0x880FAEEC:
				case 0x880FAF78:
				case 0x880FAFF4:
				case 0x880FB05C:
				case 0x880FB0B4:
				case 0x880FB0D8:
				case 0x880FB144:
				case 0x880FB18C:
				case 0x880FB19C:
				case 0x880FB1C0:
				case 0x880FB210:
				case 0x880FB254:
				case 0x880FB2C8:
				case 0x880FB344:
				case 0x880FB3AC:
				case 0x880FB404:
				case 0x880FB428:
				case 0x880FB494:
				case 0x880FB5FC:
				case 0x880FB678:
				case 0x880FB6E0:
				case 0x880FB738:
				case 0x880FB75C:
				case 0x880FB7C8:
				case 0x880FB890:
				case 0x880FB90C:
				case 0x880FB974:
				case 0x880FB9CC:
				case 0x880FB9F0:
				case 0x880FBA5C:
				case 0x880FBB18:
				case 0x880FBB3C:
				case 0x880FBB6C:
				case 0x880FBC20:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FAC68;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FAC70: goto loc_880FAC70;
		case 0x880FAC9C: goto loc_880FAC9C;
		case 0x880FACA8: goto loc_880FACA8;
		case 0x880FACE8: goto loc_880FACE8;
		case 0x880FAD08: goto loc_880FAD08;
		case 0x880FAD58: goto loc_880FAD58;
		case 0x880FADA0: goto loc_880FADA0;
		case 0x880FAE0C: goto loc_880FAE0C;
		case 0x880FAE80: goto loc_880FAE80;
		case 0x880FAEEC: goto loc_880FAEEC;
		case 0x880FAF78: goto loc_880FAF78;
		case 0x880FAFF4: goto loc_880FAFF4;
		case 0x880FB05C: goto loc_880FB05C;
		case 0x880FB0B4: goto loc_880FB0B4;
		case 0x880FB0D8: goto loc_880FB0D8;
		case 0x880FB144: goto loc_880FB144;
		case 0x880FB18C: goto loc_880FB18C;
		case 0x880FB19C: goto loc_880FB19C;
		case 0x880FB1C0: goto loc_880FB1C0;
		case 0x880FB210: goto loc_880FB210;
		case 0x880FB254: goto loc_880FB254;
		case 0x880FB2C8: goto loc_880FB2C8;
		case 0x880FB344: goto loc_880FB344;
		case 0x880FB3AC: goto loc_880FB3AC;
		case 0x880FB404: goto loc_880FB404;
		case 0x880FB428: goto loc_880FB428;
		case 0x880FB494: goto loc_880FB494;
		case 0x880FB5FC: goto loc_880FB5FC;
		case 0x880FB678: goto loc_880FB678;
		case 0x880FB6E0: goto loc_880FB6E0;
		case 0x880FB738: goto loc_880FB738;
		case 0x880FB75C: goto loc_880FB75C;
		case 0x880FB7C8: goto loc_880FB7C8;
		case 0x880FB890: goto loc_880FB890;
		case 0x880FB90C: goto loc_880FB90C;
		case 0x880FB974: goto loc_880FB974;
		case 0x880FB9CC: goto loc_880FB9CC;
		case 0x880FB9F0: goto loc_880FB9F0;
		case 0x880FBA5C: goto loc_880FBA5C;
		case 0x880FBB18: goto loc_880FBB18;
		case 0x880FBB3C: goto loc_880FBB3C;
		case 0x880FBB6C: goto loc_880FBB6C;
		case 0x880FBC20: goto loc_880FBC20;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880FAC70;
	__savegprlr_14(ctx, base);
loc_880FAC70:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x880FAC70;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2800(r3)
	ctx.current_instruction = 0x880FAC74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2800);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r14,7868(r3)
	ctx.current_instruction = 0x880FAC7C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880facb0
	if (!ctx.cr6.eq) goto loc_880FACB0;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880FAC8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880faca4
	if (!ctx.cr6.eq) goto loc_880FACA4;
	// bl 0x880fa4a0
	ctx.lr = 0x880FAC9C;
	sub_880FA4A0(ctx, base);
loc_880FAC9C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FACA4:
	// bl 0x880d90e8
	ctx.lr = 0x880FACA8;
	sub_880D90E8(ctx, base);
loc_880FACA8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FACB0:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FACB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,2248(r31)
	ctx.current_instruction = 0x880FACB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2248);
	// mullw r9,r11,r6
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r18,r8,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x880face8
	if (!ctx.cr6.eq) goto loc_880FACE8;
	// lbz r11,88(r15)
	ctx.current_instruction = 0x880FACD0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x880e6960
	ctx.lr = 0x880FACE8;
	sub_880E6960(ctx, base);
loc_880FACE8:
	// lwz r11,2244(r31)
	ctx.current_instruction = 0x880FACE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fad08
	if (!ctx.cr6.eq) goto loc_880FAD08;
	// lwz r11,0(r15)
	ctx.current_instruction = 0x880FACF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FACFC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x880e6960
	ctx.lr = 0x880FAD08;
	sub_880E6960(ctx, base);
loc_880FAD08:
	// lwz r11,21092(r31)
	ctx.current_instruction = 0x880FAD08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fad58
	if (ctx.cr6.eq) goto loc_880FAD58;
	// lbz r11,88(r15)
	ctx.current_instruction = 0x880FAD14;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 88);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880fad30
	if (!ctx.cr6.eq) goto loc_880FAD30;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x880fad50
	goto loc_880FAD50;
loc_880FAD30:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880fad40
	if (!ctx.cr6.eq) goto loc_880FAD40;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x880fad4c
	goto loc_880FAD4C;
loc_880FAD40:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x880fad58
	if (!ctx.cr6.eq) goto loc_880FAD58;
	// li r4,0
	ctx.r4.s64 = 0;
loc_880FAD4C:
	// li r5,2
	ctx.r5.s64 = 2;
loc_880FAD50:
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAD50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// bl 0x880e6960
	ctx.lr = 0x880FAD58;
	sub_880E6960(ctx, base);
loc_880FAD58:
	// lwz r11,0(r15)
	ctx.current_instruction = 0x880FAD58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880faf18
	if (ctx.cr6.eq) goto loc_880FAF18;
	// lbz r11,88(r15)
	ctx.current_instruction = 0x880FAD68;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 88);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fadc0
	if (!ctx.cr6.eq) goto loc_880FADC0;
	// lwz r11,2324(r31)
	ctx.current_instruction = 0x880FAD78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.current_instruction = 0x880FAD80;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fbc38
	if (ctx.cr6.eq) goto loc_880FBC38;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAD94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FADA0;
	sub_880E6960(ctx, base);
loc_880FADA0:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FADA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fbc38
	if (ctx.cr6.eq) goto loc_880FBC38;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FADAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FADB4;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FADC0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// bne cr6,0x880fae38
	if (!ctx.cr6.eq) goto loc_880FAE38;
loc_880FADCC:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FADCC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// lwz r8,2324(r31)
	ctx.current_instruction = 0x880FADD8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.current_instruction = 0x880FADEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fae24
	if (ctx.cr6.eq) goto loc_880FAE24;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAE00;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FAE0C;
	sub_880E6960(ctx, base);
loc_880FAE0C:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FAE0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fae24
	if (ctx.cr6.eq) goto loc_880FAE24;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FAE18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FAE20;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FAE24:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x880fadcc
	if (ctx.cr6.lt) goto loc_880FADCC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FAE38:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x880faeac
	if (!ctx.cr6.eq) goto loc_880FAEAC;
loc_880FAE40:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FAE40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// lwz r8,2324(r31)
	ctx.current_instruction = 0x880FAE4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.current_instruction = 0x880FAE60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fae98
	if (ctx.cr6.eq) goto loc_880FAE98;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAE74;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FAE80;
	sub_880E6960(ctx, base);
loc_880FAE80:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FAE80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fae98
	if (ctx.cr6.eq) goto loc_880FAE98;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FAE8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FAE94;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FAE98:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x880fae40
	if (ctx.cr6.lt) goto loc_880FAE40;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FAEAC:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880FAEAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// lwz r8,2324(r31)
	ctx.current_instruction = 0x880FAEB8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.current_instruction = 0x880FAECC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880faf04
	if (ctx.cr6.eq) goto loc_880FAF04;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAEE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FAEEC;
	sub_880E6960(ctx, base);
loc_880FAEEC:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FAEEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880faf04
	if (ctx.cr6.eq) goto loc_880FAF04;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FAEF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FAF00;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FAF04:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x880faeac
	if (ctx.cr6.lt) goto loc_880FAEAC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FAF18:
	// lbz r10,147(r15)
	ctx.current_instruction = 0x880FAF18;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r15.u32 + 147);
	// lis r11,-30681
	ctx.r11.s64 = -2010710016;
	// lbz r9,146(r15)
	ctx.current_instruction = 0x880FAF20;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r15.u32 + 146);
	// li r16,0
	ctx.r16.s64 = 0;
	// lbz r8,88(r15)
	ctx.current_instruction = 0x880FAF28;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r15.u32 + 88);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// li r17,0
	ctx.r17.s64 = 0;
	// or r20,r7,r6
	ctx.r20.u64 = ctx.r7.u64 | ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r19,r11,30824
	ctx.r19.s64 = ctx.r11.s64 + 30824;
	// bne cr6,0x880fb1f4
	if (!ctx.cr6.eq) goto loc_880FB1F4;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FAF48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// rlwinm r28,r18,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FAF50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// lwz r27,2324(r31)
	ctx.current_instruction = 0x880FAF54;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAF58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,88(r10)
	ctx.current_instruction = 0x880FAF5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r30,0(r9)
	ctx.current_instruction = 0x880FAF60;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r29,r30,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FAF6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FAF70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FAF78;
	sub_880E6960(ctx, base);
loc_880FAF78:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FAF78;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fafbc
	if (ctx.cr6.eq) goto loc_880FAFBC;
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FAF84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// addi r9,r30,7169
	ctx.r9.s64 = ctx.r30.s64 + 7169;
	// lwz r10,28620(r31)
	ctx.current_instruction = 0x880FAF8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r8)
	ctx.current_instruction = 0x880FAF98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880FAFA0;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880FAFA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880FAFAC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880FAFB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880FAFB8;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880FAFBC:
	// lwz r11,31548(r31)
	ctx.current_instruction = 0x880FAFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb020
	if (ctx.cr6.eq) goto loc_880FB020;
	// cmpwi cr6,r30,35
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 35, ctx.xer);
	// beq cr6,0x880fb094
	if (ctx.cr6.eq) goto loc_880FB094;
	// cmpwi cr6,r30,73
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 73, ctx.xer);
	// beq cr6,0x880fb094
	if (ctx.cr6.eq) goto loc_880FB094;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FAFD8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FAFDC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FAFE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880FAFE4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r9,14,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3F;
	// rlwinm r4,r9,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFF;
	// bl 0x880e6960
	ctx.lr = 0x880FAFF4;
	sub_880E6960(ctx, base);
loc_880FAFF4:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FAFF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb114
	if (ctx.cr6.eq) goto loc_880FB114;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB000;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,28624(r31)
	ctx.current_instruction = 0x880FB004;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r9,88(r10)
	ctx.current_instruction = 0x880FB008;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880FB00C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r8,14,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3F;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,28624(r31)
	ctx.current_instruction = 0x880FB018;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r7.u32);
	// b 0x880fb114
	goto loc_880FB114;
loc_880FB020:
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x880fb094
	if (ctx.cr6.eq) goto loc_880FB094;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// beq cr6,0x880fb094
	if (ctx.cr6.eq) goto loc_880FB094;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB030;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB034;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB038;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mulli r11,r9,73
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r10)
	ctx.current_instruction = 0x880FB040;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r10,0(r8)
	ctx.current_instruction = 0x880FB044;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x880FB048;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFF;
	// lbzx r5,r6,r19
	ctx.current_instruction = 0x880FB054;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r19.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FB05C;
	sub_880E6960(ctx, base);
loc_880FB05C:
	// lwz r5,28568(r31)
	ctx.current_instruction = 0x880FB05C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fb114
	if (ctx.cr6.eq) goto loc_880FB114;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB06C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB070;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// mulli r9,r9,73
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r11)
	ctx.current_instruction = 0x880FB078;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r8)
	ctx.current_instruction = 0x880FB07C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r7,r19
	ctx.current_instruction = 0x880FB084;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,28624(r31)
	ctx.current_instruction = 0x880FB08C;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r6.u32);
	// b 0x880fb114
	goto loc_880FB114;
loc_880FB094:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB094;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2596(r31)
	ctx.current_instruction = 0x880FB098;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lhzx r10,r27,r28
	ctx.current_instruction = 0x880FB09C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB0A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lwz r8,36(r11)
	ctx.current_instruction = 0x880FB0A8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB0B4;
	sub_880E6960(ctx, base);
loc_880FB0B4:
	// lwz r7,7192(r31)
	ctx.current_instruction = 0x880FB0B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwzx r6,r27,r28
	ctx.current_instruction = 0x880FB0B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880FB0BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB0C4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,36(r7)
	ctx.current_instruction = 0x880FB0C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// srawi r4,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 20;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB0D8;
	sub_880E6960(ctx, base);
loc_880FB0D8:
	// lwz r10,28568(r31)
	ctx.current_instruction = 0x880FB0D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fb114
	if (ctx.cr6.eq) goto loc_880FB114;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB0E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,2596(r31)
	ctx.current_instruction = 0x880FB0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r8,28628(r31)
	ctx.current_instruction = 0x880FB0EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r9,2600(r31)
	ctx.current_instruction = 0x880FB0F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r7,36(r10)
	ctx.current_instruction = 0x880FB0F4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880FB100;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// lwz r6,36(r10)
	ctx.current_instruction = 0x880FB104;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28628(r31)
	ctx.current_instruction = 0x880FB110;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r5.u32);
loc_880FB114:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FB118;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,88(r11)
	ctx.current_instruction = 0x880FB120;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwzx r9,r27,r28
	ctx.current_instruction = 0x880FB124;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fb15c
	if (ctx.cr6.eq) goto loc_880FB15C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB138;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FB144;
	sub_880E6960(ctx, base);
loc_880FB144:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FB144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb15c
	if (ctx.cr6.eq) goto loc_880FB15C;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FB150;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FB158;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FB15C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x880fb1a4
	if (!ctx.cr6.eq) goto loc_880FB1A4;
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x880FB164;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fbc38
	if (ctx.cr6.eq) goto loc_880FBC38;
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880FB174;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb18c
	if (ctx.cr6.eq) goto loc_880FB18C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r15)
	ctx.current_instruction = 0x880FB184;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880FB18C;
	sub_880FA448(ctx, base);
loc_880FB18C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r15)
	ctx.current_instruction = 0x880FB190;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB19C;
	sub_880E6960(ctx, base);
loc_880FB19C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880FB1A4:
	// lwz r11,116(r15)
	ctx.current_instruction = 0x880FB1A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb1c0
	if (ctx.cr6.eq) goto loc_880FB1C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28(r15)
	ctx.current_instruction = 0x880FB1B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB1C0;
	sub_880E6960(ctx, base);
loc_880FB1C0:
	// lwz r11,1608(r31)
	ctx.current_instruction = 0x880FB1C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// lwz r16,1536(r31)
	ctx.current_instruction = 0x880FB1C4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb1f0
	if (ctx.cr6.eq) goto loc_880FB1F0;
	// lwz r11,1564(r31)
	ctx.current_instruction = 0x880FB1D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb1f0
	if (ctx.cr6.eq) goto loc_880FB1F0;
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x880FB1DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fb1f4
	if (ctx.cr6.eq) goto loc_880FB1F4;
loc_880FB1F0:
	// li r17,0
	ctx.r17.s64 = 0;
loc_880FB1F4:
	// lwz r11,20800(r31)
	ctx.current_instruction = 0x880FB1F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20800);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20804(r31)
	ctx.current_instruction = 0x880FB1FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20804);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB200;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwzx r4,r11,r10
	ctx.current_instruction = 0x880FB204;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r9,r20
	ctx.current_instruction = 0x880FB208;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r20.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FB210;
	sub_880E6960(ctx, base);
loc_880FB210:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB210;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb230
	if (ctx.cr6.eq) goto loc_880FB230;
	// lwz r11,20804(r31)
	ctx.current_instruction = 0x880FB21C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20804);
	// lwz r10,28604(r31)
	ctx.current_instruction = 0x880FB220;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28604);
	// lbzx r11,r11,r20
	ctx.current_instruction = 0x880FB224;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,28604(r31)
	ctx.current_instruction = 0x880FB22C;
	REX_STORE_U32(ctx.r31.u32 + 28604, ctx.r10.u32);
loc_880FB230:
	// lwz r11,2428(r31)
	ctx.current_instruction = 0x880FB230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb254
	if (ctx.cr6.eq) goto loc_880FB254;
	// lbz r11,88(r15)
	ctx.current_instruction = 0x880FB23C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880fb254
	if (!ctx.cr6.eq) goto loc_880FB254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r15)
	ctx.current_instruction = 0x880FB24C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880FB254;
	sub_880FA448(ctx, base);
loc_880FB254:
	// lbz r11,88(r15)
	ctx.current_instruction = 0x880FB254;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 88);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880fb584
	if (!ctx.cr6.eq) goto loc_880FB584;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r26,0
	ctx.r26.s64 = 0;
loc_880FB274:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FB274;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// lwz r27,2324(r31)
	ctx.current_instruction = 0x880FB280;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r8,r25,r20
	ctx.r8.u64 = ctx.r25.u64 & ctx.r20.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x880fb474
	if (ctx.cr6.eq) goto loc_880FB474;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB2A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FB2A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB2A8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,88(r10)
	ctx.current_instruction = 0x880FB2AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r30,0(r9)
	ctx.current_instruction = 0x880FB2B0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r29,r30,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FB2BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FB2C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FB2C8;
	sub_880E6960(ctx, base);
loc_880FB2C8:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB2C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb30c
	if (ctx.cr6.eq) goto loc_880FB30C;
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FB2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880FB2DC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880FB2E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880FB2F0;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880FB2F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880FB2FC;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880FB300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880FB308;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880FB30C:
	// lwz r11,31548(r31)
	ctx.current_instruction = 0x880FB30C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb370
	if (ctx.cr6.eq) goto loc_880FB370;
	// cmpwi cr6,r30,35
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 35, ctx.xer);
	// beq cr6,0x880fb3e4
	if (ctx.cr6.eq) goto loc_880FB3E4;
	// cmpwi cr6,r30,73
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 73, ctx.xer);
	// beq cr6,0x880fb3e4
	if (ctx.cr6.eq) goto loc_880FB3E4;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB32C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FB330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880FB334;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r9,14,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3F;
	// rlwinm r4,r9,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFF;
	// bl 0x880e6960
	ctx.lr = 0x880FB344;
	sub_880E6960(ctx, base);
loc_880FB344:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB344;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb464
	if (ctx.cr6.eq) goto loc_880FB464;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB350;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB354;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r9,88(r11)
	ctx.current_instruction = 0x880FB358;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880FB35C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,14,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3F;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,28624(r31)
	ctx.current_instruction = 0x880FB368;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r7.u32);
	// b 0x880fb464
	goto loc_880FB464;
loc_880FB370:
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x880fb3e4
	if (ctx.cr6.eq) goto loc_880FB3E4;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// beq cr6,0x880fb3e4
	if (ctx.cr6.eq) goto loc_880FB3E4;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB380;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB384;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB388;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mulli r11,r9,73
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r10)
	ctx.current_instruction = 0x880FB390;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r10,0(r8)
	ctx.current_instruction = 0x880FB394;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x880FB398;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFF;
	// lbzx r5,r6,r19
	ctx.current_instruction = 0x880FB3A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r19.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FB3AC;
	sub_880E6960(ctx, base);
loc_880FB3AC:
	// lwz r5,28568(r31)
	ctx.current_instruction = 0x880FB3AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fb464
	if (ctx.cr6.eq) goto loc_880FB464;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB3B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB3BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB3C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// mulli r9,r9,73
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r11)
	ctx.current_instruction = 0x880FB3C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r8)
	ctx.current_instruction = 0x880FB3CC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r7,r19
	ctx.current_instruction = 0x880FB3D4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,28624(r31)
	ctx.current_instruction = 0x880FB3DC;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r6.u32);
	// b 0x880fb464
	goto loc_880FB464;
loc_880FB3E4:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB3E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2596(r31)
	ctx.current_instruction = 0x880FB3E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lhzx r10,r27,r28
	ctx.current_instruction = 0x880FB3EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB3F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lwz r8,36(r11)
	ctx.current_instruction = 0x880FB3F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB404;
	sub_880E6960(ctx, base);
loc_880FB404:
	// lwz r7,7192(r31)
	ctx.current_instruction = 0x880FB404;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwzx r6,r27,r28
	ctx.current_instruction = 0x880FB408;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880FB40C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB414;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,36(r7)
	ctx.current_instruction = 0x880FB418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// srawi r4,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 20;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB428;
	sub_880E6960(ctx, base);
loc_880FB428:
	// lwz r10,28568(r31)
	ctx.current_instruction = 0x880FB428;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fb464
	if (ctx.cr6.eq) goto loc_880FB464;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB434;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,2596(r31)
	ctx.current_instruction = 0x880FB438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r8,28628(r31)
	ctx.current_instruction = 0x880FB43C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r9,2600(r31)
	ctx.current_instruction = 0x880FB440;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r7,36(r10)
	ctx.current_instruction = 0x880FB444;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880FB450;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// lwz r6,36(r10)
	ctx.current_instruction = 0x880FB454;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28628(r31)
	ctx.current_instruction = 0x880FB460;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r5.u32);
loc_880FB464:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB464;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FB468;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,88(r11)
	ctx.current_instruction = 0x880FB470;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_880FB474:
	// lwzx r11,r27,r28
	ctx.current_instruction = 0x880FB474;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fb4ac
	if (ctx.cr6.eq) goto loc_880FB4AC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB488;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FB494;
	sub_880E6960(ctx, base);
loc_880FB494:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FB494;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb4ac
	if (ctx.cr6.eq) goto loc_880FB4AC;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FB4A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FB4A8;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FB4AC:
	// lwz r10,2324(r31)
	ctx.current_instruction = 0x880FB4AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// lwzx r9,r27,r28
	ctx.current_instruction = 0x880FB4B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// rlwinm r11,r9,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// lwzx r8,r10,r28
	ctx.current_instruction = 0x880FB4B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 | ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r8,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// beq cr6,0x880fb4e0
	if (ctx.cr6.eq) goto loc_880FB4E0;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x880fb4e4
	if (ctx.cr6.eq) goto loc_880FB4E4;
loc_880FB4E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_880FB4E4:
	// or r17,r10,r17
	ctx.r17.u64 = ctx.r10.u64 | ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880fb500
	if (!ctx.cr6.eq) goto loc_880FB500;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x880fb504
	if (ctx.cr6.eq) goto loc_880FB504;
loc_880FB500:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880FB504:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x880fb274
	if (ctx.cr6.lt) goto loc_880FB274;
	// clrlwi r11,r20,30
	ctx.r11.u64 = ctx.r20.u32 & 0x3;
	// lwz r10,1536(r31)
	ctx.current_instruction = 0x880FB51C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 | ctx.r16.u64;
	// or r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 | ctx.r23.u64;
	// and r16,r8,r10
	ctx.r16.u64 = ctx.r8.u64 & ctx.r10.u64;
	// beq 0x880fb544
	if (ctx.cr0.eq) goto loc_880FB544;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x880fb548
	if (ctx.cr6.lt) goto loc_880FB548;
loc_880FB544:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880FB548:
	// lwz r8,1608(r31)
	ctx.current_instruction = 0x880FB548;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// or r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 | ctx.r17.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb568
	if (ctx.cr6.eq) goto loc_880FB568;
	// lwz r11,1564(r31)
	ctx.current_instruction = 0x880FB558;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x880fb56c
	if (!ctx.cr6.eq) goto loc_880FB56C;
loc_880FB568:
	// li r11,0
	ctx.r11.s64 = 0;
loc_880FB56C:
	// lwz r8,2428(r31)
	ctx.current_instruction = 0x880FB56C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// and r17,r11,r10
	ctx.r17.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fbb18
	if (ctx.cr6.eq) goto loc_880FBB18;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x880fbb08
	goto loc_880FBB08;
loc_880FB584:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880fb81c
	if (!ctx.cr6.eq) goto loc_880FB81C;
	// clrlwi r23,r20,27
	ctx.r23.u64 = ctx.r20.u32 & 0x1F;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwinm r23,r23,0,29,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r21,3
	ctx.r21.s64 = 3;
loc_880FB5A8:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FB5A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// lwz r27,2324(r31)
	ctx.current_instruction = 0x880FB5B4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r8,r25,r20
	ctx.r8.u64 = ctx.r25.u64 & ctx.r20.u64;
	// add r7,r11,r18
	ctx.r7.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x880fb7a8
	if (ctx.cr6.eq) goto loc_880FB7A8;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB5D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FB5D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB5DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,88(r10)
	ctx.current_instruction = 0x880FB5E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r30,0(r9)
	ctx.current_instruction = 0x880FB5E4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r29,r30,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FB5F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FB5F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FB5FC;
	sub_880E6960(ctx, base);
loc_880FB5FC:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB5FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb640
	if (ctx.cr6.eq) goto loc_880FB640;
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FB608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880FB610;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880FB61C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880FB624;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880FB628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880FB630;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880FB634;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880FB63C;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880FB640:
	// lwz r11,31548(r31)
	ctx.current_instruction = 0x880FB640;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb6a4
	if (ctx.cr6.eq) goto loc_880FB6A4;
	// cmpwi cr6,r30,35
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 35, ctx.xer);
	// beq cr6,0x880fb718
	if (ctx.cr6.eq) goto loc_880FB718;
	// cmpwi cr6,r30,73
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 73, ctx.xer);
	// beq cr6,0x880fb718
	if (ctx.cr6.eq) goto loc_880FB718;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB65C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB660;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FB664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880FB668;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r9,14,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3F;
	// rlwinm r4,r9,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFF;
	// bl 0x880e6960
	ctx.lr = 0x880FB678;
	sub_880E6960(ctx, base);
loc_880FB678:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB678;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb798
	if (ctx.cr6.eq) goto loc_880FB798;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB684;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB688;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r9,88(r11)
	ctx.current_instruction = 0x880FB68C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880FB690;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,14,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3F;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,28624(r31)
	ctx.current_instruction = 0x880FB69C;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r7.u32);
	// b 0x880fb798
	goto loc_880FB798;
loc_880FB6A4:
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x880fb718
	if (ctx.cr6.eq) goto loc_880FB718;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// beq cr6,0x880fb718
	if (ctx.cr6.eq) goto loc_880FB718;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB6B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB6B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB6BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mulli r11,r9,73
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r10)
	ctx.current_instruction = 0x880FB6C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r10,0(r8)
	ctx.current_instruction = 0x880FB6C8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x880FB6CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFF;
	// lbzx r5,r6,r19
	ctx.current_instruction = 0x880FB6D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r19.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FB6E0;
	sub_880E6960(ctx, base);
loc_880FB6E0:
	// lwz r5,28568(r31)
	ctx.current_instruction = 0x880FB6E0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fb798
	if (ctx.cr6.eq) goto loc_880FB798;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB6EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB6F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB6F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// mulli r9,r9,73
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r11)
	ctx.current_instruction = 0x880FB6FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r8)
	ctx.current_instruction = 0x880FB700;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r7,r19
	ctx.current_instruction = 0x880FB708;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,28624(r31)
	ctx.current_instruction = 0x880FB710;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r6.u32);
	// b 0x880fb798
	goto loc_880FB798;
loc_880FB718:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB718;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2596(r31)
	ctx.current_instruction = 0x880FB71C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lhzx r10,r28,r27
	ctx.current_instruction = 0x880FB720;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r27.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB724;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lwz r8,36(r11)
	ctx.current_instruction = 0x880FB72C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB738;
	sub_880E6960(ctx, base);
loc_880FB738:
	// lwz r7,7192(r31)
	ctx.current_instruction = 0x880FB738;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwzx r6,r28,r27
	ctx.current_instruction = 0x880FB73C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880FB740;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB748;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,36(r7)
	ctx.current_instruction = 0x880FB74C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// srawi r4,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 20;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB75C;
	sub_880E6960(ctx, base);
loc_880FB75C:
	// lwz r10,28568(r31)
	ctx.current_instruction = 0x880FB75C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fb798
	if (ctx.cr6.eq) goto loc_880FB798;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,2596(r31)
	ctx.current_instruction = 0x880FB76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r8,28628(r31)
	ctx.current_instruction = 0x880FB770;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r9,2600(r31)
	ctx.current_instruction = 0x880FB774;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r7,36(r10)
	ctx.current_instruction = 0x880FB778;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880FB784;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// lwz r6,36(r10)
	ctx.current_instruction = 0x880FB788;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28628(r31)
	ctx.current_instruction = 0x880FB794;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r5.u32);
loc_880FB798:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FB79C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,88(r11)
	ctx.current_instruction = 0x880FB7A4;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_880FB7A8:
	// lwzx r11,r28,r27
	ctx.current_instruction = 0x880FB7A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fb7e0
	if (ctx.cr6.eq) goto loc_880FB7E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB7BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FB7C8;
	sub_880E6960(ctx, base);
loc_880FB7C8:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FB7C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb7e0
	if (ctx.cr6.eq) goto loc_880FB7E0;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FB7D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FB7DC;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FB7E0:
	// lwzx r11,r28,r27
	ctx.current_instruction = 0x880FB7E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fb7f8
	if (ctx.cr6.eq) goto loc_880FB7F8;
	// slw r10,r21,r24
	ctx.r10.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r24.u8 & 0x3F));
	// or r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 | ctx.r22.u64;
loc_880FB7F8:
	// subfic r10,r26,5
	ctx.xer.ca = ctx.r26.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r26.u64;
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// addic. r24,r24,-2
	ctx.xer.ca = ctx.r24.u32 > 1;
	ctx.r24.s64 = ctx.r24.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r23,r8,r23
	ctx.r23.u64 = ctx.r8.u64 | ctx.r23.u64;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// srawi r25,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 2;
	// bgt 0x880fb5a8
	if (ctx.cr0.gt) goto loc_880FB5A8;
	// b 0x880fbab0
	goto loc_880FBAB0;
loc_880FB81C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x880fbb3c
	if (!ctx.cr6.eq) goto loc_880FBB3C;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r22,0
	ctx.r22.s64 = 0;
	// clrlwi r23,r20,28
	ctx.r23.u64 = ctx.r20.u32 & 0xF;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r21,5
	ctx.r21.s64 = 5;
loc_880FB83C:
	// lwz r11,720(r31)
	ctx.current_instruction = 0x880FB83C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// lwz r27,2324(r31)
	ctx.current_instruction = 0x880FB848;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 2324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r8,r25,r20
	ctx.r8.u64 = ctx.r25.u64 & ctx.r20.u64;
	// add r7,r11,r18
	ctx.r7.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x880fba3c
	if (ctx.cr6.eq) goto loc_880FBA3C;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB868;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FB86C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB870;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r9,88(r10)
	ctx.current_instruction = 0x880FB874;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r30,0(r9)
	ctx.current_instruction = 0x880FB878;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r29,r30,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FB884;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FB888;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FB890;
	sub_880E6960(ctx, base);
loc_880FB890:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB890;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fb8d4
	if (ctx.cr6.eq) goto loc_880FB8D4;
	// lwz r11,20816(r31)
	ctx.current_instruction = 0x880FB89C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20816);
	// addi r10,r30,7169
	ctx.r10.s64 = ctx.r30.s64 + 7169;
	// lwz r9,28620(r31)
	ctx.current_instruction = 0x880FB8A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28620);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.current_instruction = 0x880FB8B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,28620(r31)
	ctx.current_instruction = 0x880FB8B8;
	REX_STORE_U32(ctx.r31.u32 + 28620, ctx.r7.u32);
	// lwzx r10,r11,r31
	ctx.current_instruction = 0x880FB8BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stwx r6,r11,r31
	ctx.current_instruction = 0x880FB8C4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,30148(r31)
	ctx.current_instruction = 0x880FB8C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30148);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,30148(r31)
	ctx.current_instruction = 0x880FB8D0;
	REX_STORE_U32(ctx.r31.u32 + 30148, ctx.r5.u32);
loc_880FB8D4:
	// lwz r11,31548(r31)
	ctx.current_instruction = 0x880FB8D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fb938
	if (ctx.cr6.eq) goto loc_880FB938;
	// cmpwi cr6,r30,35
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 35, ctx.xer);
	// beq cr6,0x880fb9ac
	if (ctx.cr6.eq) goto loc_880FB9AC;
	// cmpwi cr6,r30,73
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 73, ctx.xer);
	// beq cr6,0x880fb9ac
	if (ctx.cr6.eq) goto loc_880FB9AC;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB8F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB8F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FB8F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r10)
	ctx.current_instruction = 0x880FB8FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r9,14,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3F;
	// rlwinm r4,r9,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFF;
	// bl 0x880e6960
	ctx.lr = 0x880FB90C;
	sub_880E6960(ctx, base);
loc_880FB90C:
	// lwz r8,28568(r31)
	ctx.current_instruction = 0x880FB90C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fba2c
	if (ctx.cr6.eq) goto loc_880FBA2C;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB918;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB91C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r9,88(r11)
	ctx.current_instruction = 0x880FB920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880FB924;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,14,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3F;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,28624(r31)
	ctx.current_instruction = 0x880FB930;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r7.u32);
	// b 0x880fba2c
	goto loc_880FBA2C;
loc_880FB938:
	// cmpwi cr6,r30,34
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 34, ctx.xer);
	// beq cr6,0x880fb9ac
	if (ctx.cr6.eq) goto loc_880FB9AC;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 71, ctx.xer);
	// beq cr6,0x880fb9ac
	if (ctx.cr6.eq) goto loc_880FB9AC;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB948;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB94C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB950;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// mulli r11,r9,73
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r10)
	ctx.current_instruction = 0x880FB958;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// lbz r10,0(r8)
	ctx.current_instruction = 0x880FB95C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x880FB960;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFF;
	// lbzx r5,r6,r19
	ctx.current_instruction = 0x880FB96C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r19.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FB974;
	sub_880E6960(ctx, base);
loc_880FB974:
	// lwz r5,28568(r31)
	ctx.current_instruction = 0x880FB974;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880fba2c
	if (ctx.cr6.eq) goto loc_880FBA2C;
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2560(r31)
	ctx.current_instruction = 0x880FB984;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// lwz r10,28624(r31)
	ctx.current_instruction = 0x880FB988;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28624);
	// mulli r9,r9,73
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(73));
	// lwz r8,88(r11)
	ctx.current_instruction = 0x880FB990;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lbz r11,0(r8)
	ctx.current_instruction = 0x880FB994;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r7,r19
	ctx.current_instruction = 0x880FB99C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r19.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,28624(r31)
	ctx.current_instruction = 0x880FB9A4;
	REX_STORE_U32(ctx.r31.u32 + 28624, ctx.r6.u32);
	// b 0x880fba2c
	goto loc_880FBA2C;
loc_880FB9AC:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FB9AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r9,2596(r31)
	ctx.current_instruction = 0x880FB9B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lhzx r10,r28,r27
	ctx.current_instruction = 0x880FB9B4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r27.u32);
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB9B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lwz r8,36(r11)
	ctx.current_instruction = 0x880FB9C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB9CC;
	sub_880E6960(ctx, base);
loc_880FB9CC:
	// lwz r7,7192(r31)
	ctx.current_instruction = 0x880FB9CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwzx r6,r28,r27
	ctx.current_instruction = 0x880FB9D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// lwz r5,2600(r31)
	ctx.current_instruction = 0x880FB9D4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FB9DC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// lwz r11,36(r7)
	ctx.current_instruction = 0x880FB9E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// srawi r4,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 20;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FB9F0;
	sub_880E6960(ctx, base);
loc_880FB9F0:
	// lwz r10,28568(r31)
	ctx.current_instruction = 0x880FB9F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fba2c
	if (ctx.cr6.eq) goto loc_880FBA2C;
	// lwz r10,7192(r31)
	ctx.current_instruction = 0x880FB9FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r11,2596(r31)
	ctx.current_instruction = 0x880FBA00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2596);
	// lwz r8,28628(r31)
	ctx.current_instruction = 0x880FBA04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28628);
	// lwz r9,2600(r31)
	ctx.current_instruction = 0x880FBA08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2600);
	// lwz r7,36(r10)
	ctx.current_instruction = 0x880FBA0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28628(r31)
	ctx.current_instruction = 0x880FBA18;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r11.u32);
	// lwz r6,36(r10)
	ctx.current_instruction = 0x880FBA1C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28628(r31)
	ctx.current_instruction = 0x880FBA28;
	REX_STORE_U32(ctx.r31.u32 + 28628, ctx.r5.u32);
loc_880FBA2C:
	// lwz r11,7192(r31)
	ctx.current_instruction = 0x880FBA2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,88(r11)
	ctx.current_instruction = 0x880FBA30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,88(r11)
	ctx.current_instruction = 0x880FBA38;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
loc_880FBA3C:
	// lwzx r11,r28,r27
	ctx.current_instruction = 0x880FBA3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880fba74
	if (ctx.cr6.eq) goto loc_880FBA74;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FBA50;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x880e6960
	ctx.lr = 0x880FBA5C;
	sub_880E6960(ctx, base);
loc_880FBA5C:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x880FBA5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fba74
	if (ctx.cr6.eq) goto loc_880FBA74;
	// lwz r11,28636(r31)
	ctx.current_instruction = 0x880FBA68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28636(r31)
	ctx.current_instruction = 0x880FBA70;
	REX_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_880FBA74:
	// lwzx r11,r28,r27
	ctx.current_instruction = 0x880FBA74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880fba8c
	if (ctx.cr6.eq) goto loc_880FBA8C;
	// slw r10,r21,r24
	ctx.r10.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r24.u8 & 0x3F));
	// or r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 | ctx.r22.u64;
loc_880FBA8C:
	// subfic r10,r26,5
	ctx.xer.ca = ctx.r26.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r26.u64;
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r23,r8,r23
	ctx.r23.u64 = ctx.r8.u64 | ctx.r23.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// srawi r25,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 1;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bgt cr6,0x880fb83c
	if (ctx.cr6.gt) goto loc_880FB83C;
loc_880FBAB0:
	// cmpwi cr6,r22,60
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 60, ctx.xer);
	// bne cr6,0x880fbabc
	if (!ctx.cr6.eq) goto loc_880FBABC;
	// li r22,63
	ctx.r22.s64 = 63;
loc_880FBABC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x880fbad0
	if (!ctx.cr6.eq) goto loc_880FBAD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x880fbad4
	if (ctx.cr6.eq) goto loc_880FBAD4;
loc_880FBAD0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_880FBAD4:
	// lwz r10,1608(r31)
	ctx.current_instruction = 0x880FBAD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1608);
	// andc r9,r23,r22
	ctx.r9.u64 = ctx.r23.u64 & ~ctx.r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r17,r9,r17
	ctx.r17.u64 = ctx.r9.u64 | ctx.r17.u64;
	// beq cr6,0x880fbaf4
	if (ctx.cr6.eq) goto loc_880FBAF4;
	// lwz r10,1564(r31)
	ctx.current_instruction = 0x880FBAE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880fbaf8
	if (!ctx.cr6.eq) goto loc_880FBAF8;
loc_880FBAF4:
	// li r17,0
	ctx.r17.s64 = 0;
loc_880FBAF8:
	// lwz r10,2428(r31)
	ctx.current_instruction = 0x880FBAF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880fbb18
	if (ctx.cr6.eq) goto loc_880FBB18;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_880FBB08:
	// beq cr6,0x880fbb18
	if (ctx.cr6.eq) goto loc_880FBB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r15)
	ctx.current_instruction = 0x880FBB10;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 96);
	// bl 0x880fa448
	ctx.lr = 0x880FBB18;
	sub_880FA448(ctx, base);
loc_880FBB18:
	// lwz r11,116(r15)
	ctx.current_instruction = 0x880FBB18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fbb3c
	if (ctx.cr6.eq) goto loc_880FBB3C;
	// lwz r4,28(r15)
	ctx.current_instruction = 0x880FBB24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x880fbb3c
	if (ctx.cr6.eq) goto loc_880FBB3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x880e6960
	ctx.lr = 0x880FBB3C;
	sub_880E6960(ctx, base);
loc_880FBB3C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x880fbb6c
	if (ctx.cr6.eq) goto loc_880FBB6C;
	// lwz r11,0(r15)
	ctx.current_instruction = 0x880FBB44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// lis r9,-30680
	ctx.r9.s64 = -2010644480;
	// rlwinm r8,r11,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r7,r10,2724
	ctx.r7.s64 = ctx.r10.s64 + 2724;
	// addi r6,r9,2720
	ctx.r6.s64 = ctx.r9.s64 + 2720;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbzx r5,r8,r7
	ctx.current_instruction = 0x880FBB60;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbzx r4,r8,r6
	ctx.current_instruction = 0x880FBB64;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// bl 0x880e6960
	ctx.lr = 0x880FBB6C;
	sub_880E6960(ctx, base);
loc_880FBB6C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x880fbc38
	if (ctx.cr6.eq) goto loc_880FBC38;
	// lwz r10,0(r15)
	ctx.current_instruction = 0x880FBB74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r15,4
	ctx.r9.s64 = ctx.r15.s64 + 4;
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// rlwinm r10,r8,7,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x8;
loc_880FBB88:
	// lwz r8,0(r9)
	ctx.current_instruction = 0x880FBB88;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880fbba4
	if (ctx.cr6.eq) goto loc_880FBBA4;
	// add r8,r11,r15
	ctx.r8.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lbz r7,74(r8)
	ctx.current_instruction = 0x880FBB98;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 74);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880fbbb8
	if (ctx.cr6.eq) goto loc_880FBBB8;
loc_880FBBA4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x880fbbb8
	if (!ctx.cr6.lt) goto loc_880FBBB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x880fbb88
	goto loc_880FBB88;
loc_880FBBB8:
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// lbz r9,56(r11)
	ctx.current_instruction = 0x880FBBBC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x880fbbdc
	if (!ctx.cr6.eq) goto loc_880FBBDC;
	// lbz r11,128(r11)
	ctx.current_instruction = 0x880FBBCC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x880fbc04
	goto loc_880FBC04;
loc_880FBBDC:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x880fbbf8
	if (!ctx.cr6.eq) goto loc_880FBBF8;
	// lbz r11,134(r11)
	ctx.current_instruction = 0x880FBBE4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 134);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// b 0x880fbc04
	goto loc_880FBC04;
loc_880FBBF8:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x880fbc04
	if (!ctx.cr6.eq) goto loc_880FBC04;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
loc_880FBC04:
	// lwz r11,30208(r31)
	ctx.current_instruction = 0x880FBC04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30208);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,7868(r31)
	ctx.current_instruction = 0x880FBC0C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7868);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x880FBC14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880FBC18;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x880e6960
	ctx.lr = 0x880FBC20;
	sub_880E6960(ctx, base);
loc_880FBC20:
	// lwz r11,30208(r31)
	ctx.current_instruction = 0x880FBC20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30208);
	// lwz r10,30180(r31)
	ctx.current_instruction = 0x880FBC24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30180);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.current_instruction = 0x880FBC2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,30180(r31)
	ctx.current_instruction = 0x880FBC34;
	REX_STORE_U32(ctx.r31.u32 + 30180, ctx.r8.u32);
loc_880FBC38:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125908) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88125908);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125908;
	ctx.current_instruction = 0x88125908;
	// lwz r11,32(r4)
	ctx.current_instruction = 0x88125908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8812591c
	if (!ctx.cr6.gt) goto loc_8812591C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r4)
	ctx.current_instruction = 0x88125918;
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
loc_8812591C:
	// b 0x88124e18
	sub_88124E18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88125D48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125D48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125D48) {
			switch (rex_dispatch_address) {
				case 0x88125D50:
				case 0x88125DA4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125D48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125D50: goto loc_88125D50;
		case 0x88125DA4: goto loc_88125DA4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88125D50;
	__savegprlr_27(ctx, base);
loc_88125D50:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88125D50;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// ori r27,r9,3
	ctx.r27.u64 = ctx.r9.u64 | 3;
	// addi r30,r10,5584
	ctx.r30.s64 = ctx.r10.s64 + 5584;
loc_88125D78:
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.current_instruction = 0x88125D80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88125D84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88125db4
	if (ctx.cr6.eq) goto loc_88125DB4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88125DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88125DA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x88125dc8
	if (!ctx.cr6.lt) goto loc_88125DC8;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x88125dc8
	if (!ctx.cr6.eq) goto loc_88125DC8;
loc_88125DB4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x88125d78
	if (ctx.cr6.lt) goto loc_88125D78;
loc_88125DC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88127C90) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88127C90;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88127C90) {
			switch (rex_dispatch_address) {
				case 0x88127CE8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127C90;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88127CE8: goto loc_88127CE8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88127C94;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88127C98;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88127C9C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88127CA0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subfic r9,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r9.u64 = static_cast<uint64_t>(4) - ctx.r4.u64;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,80(r1)
	ctx.current_instruction = 0x88127CBC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// subf r30,r5,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88127ce8
	if (!ctx.cr6.gt) goto loc_88127CE8;
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x88054c28
	ctx.lr = 0x88127CE8;
	sub_88054C28(ctx, base);
loc_88127CE8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88127CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// sraw r3,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88127CF8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88127D00;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88127D04;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88129BA0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88129BA0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88129BA0;
	ctx.current_instruction = 0x88129BA0;
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.current_instruction = 0x88129BA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88129c58
	if (!ctx.cr6.gt) goto loc_88129C58;
	// lwz r11,176(r3)
	ctx.current_instruction = 0x88129BB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88129c58
	if (!ctx.cr6.eq) goto loc_88129C58;
	// lhz r11,34(r3)
	ctx.current_instruction = 0x88129BC0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88129c48
	if (!ctx.cr6.gt) goto loc_88129C48;
	// lwz r8,320(r3)
	ctx.current_instruction = 0x88129BCC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,444(r3)
	ctx.current_instruction = 0x88129BD4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88129BDC:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r11,424(r11)
	ctx.current_instruction = 0x88129BE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88129BE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r4,-2(r10)
	ctx.current_instruction = 0x88129BEC;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r10,0(r10)
	ctx.current_instruction = 0x88129BF0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// beq cr6,0x88129c10
	if (ctx.cr6.eq) goto loc_88129C10;
	// lwz r4,456(r3)
	ctx.current_instruction = 0x88129C00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r10,r10,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r11,r11,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x88129c28
	goto loc_88129C28;
loc_88129C10:
	// lwz r4,448(r3)
	ctx.current_instruction = 0x88129C10;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88129c28
	if (ctx.cr6.eq) goto loc_88129C28;
	// lwz r4,456(r3)
	ctx.current_instruction = 0x88129C1C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
loc_88129C28:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x88129c34
	if (!ctx.cr6.gt) goto loc_88129C34;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_88129C34:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x88129c40
	if (!ctx.cr6.gt) goto loc_88129C40;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_88129C40:
	// addi r9,r9,1776
	ctx.r9.s64 = ctx.r9.s64 + 1776;
	// bdnz 0x88129bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88129BDC;
loc_88129C48:
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r3,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88129C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812C070) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8812C070);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812C070;
	ctx.current_instruction = 0x8812C070;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	ctx.current_instruction = 0x8812C074;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,0(r3)
	ctx.current_instruction = 0x8812C07C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	ctx.current_instruction = 0x8812C084;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	ctx.current_instruction = 0x8812C088;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	ctx.current_instruction = 0x8812C08C;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x8812C090;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	ctx.current_instruction = 0x8812C094;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,76(r3)
	ctx.current_instruction = 0x8812C098;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	ctx.current_instruction = 0x8812C09C;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,52(r3)
	ctx.current_instruction = 0x8812C0A0;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.current_instruction = 0x8812C0A4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,212(r8)
	ctx.current_instruction = 0x8812C0A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 212);
	// stw r7,56(r3)
	ctx.current_instruction = 0x8812C0AC;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r9,60(r3)
	ctx.current_instruction = 0x8812C0B0;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x8812C0B4;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	ctx.current_instruction = 0x8812C0B8;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x8812C0BC;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x8812C0C0;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x8812C0C4;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r6,704(r4)
	ctx.current_instruction = 0x8812C0C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 704);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8812c0f0
	if (ctx.cr6.eq) goto loc_8812C0F0;
	// stw r11,68(r3)
	ctx.current_instruction = 0x8812C0D4;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,76(r3)
	ctx.current_instruction = 0x8812C0D8;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,28(r3)
	ctx.current_instruction = 0x8812C0DC;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x8812C0E0;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x8812C0E4;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	ctx.current_instruction = 0x8812C0E8;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,80(r3)
	ctx.current_instruction = 0x8812C0EC;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_8812C0F0:
	// lis r11,-30714
	ctx.r11.s64 = -2012872704;
	// addi r10,r11,5216
	ctx.r10.s64 = ctx.r11.s64 + 5216;
	// stw r10,84(r3)
	ctx.current_instruction = 0x8812C0F8;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812E108) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812E108;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812E108) {
			switch (rex_dispatch_address) {
				case 0x8812E110:
				case 0x8812E118:
				case 0x8812E164:
				case 0x8812E2EC:
				case 0x8812ECC0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812E108;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812E110: goto loc_8812E110;
		case 0x8812E118: goto loc_8812E118;
		case 0x8812E164: goto loc_8812E164;
		case 0x8812E2EC: goto loc_8812E2EC;
		case 0x8812ECC0: goto loc_8812ECC0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x8812E110;
	__savegprlr_18(ctx, base);
loc_8812E110:
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef278
	ctx.lr = 0x8812E118;
	__savefpr_24(ctx, base);
loc_8812E118:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r31,60(r3)
	ctx.current_instruction = 0x8812E11C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r24,552(r3)
	ctx.current_instruction = 0x8812E124;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lwz r5,320(r8)
	ctx.current_instruction = 0x8812E134;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// ble cr6,0x8812e168
	if (!ctx.cr6.gt) goto loc_8812E168;
	// lwz r11,576(r8)
	ctx.current_instruction = 0x8812E13C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8812e154
	if (ctx.cr6.eq) goto loc_8812E154;
	// lwz r11,572(r8)
	ctx.current_instruction = 0x8812E148;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8812e168
	if (!ctx.cr6.eq) goto loc_8812E168;
loc_8812E154:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef2c4
	ctx.lr = 0x8812E164;
	__restfpr_24(ctx, base);
loc_8812E164:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8812E168:
	// lhz r11,580(r8)
	ctx.current_instruction = 0x8812E168;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812e1b8
	if (!ctx.cr6.gt) goto loc_8812E1B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,584(r8)
	ctx.current_instruction = 0x8812E17C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812E184:
	// lhzx r10,r10,r7
	ctx.current_instruction = 0x8812E184;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r28,r11,r5
	ctx.r28.u64 = ctx.r11.u64 + ctx.r5.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,40(r28)
	ctx.current_instruction = 0x8812E1A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r29,r29,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// and r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 & ctx.r9.u64;
	// blt cr6,0x8812e184
	if (ctx.cr6.lt) goto loc_8812E184;
loc_8812E1B8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bgt cr6,0x8812e2f0
	if (ctx.cr6.gt) goto loc_8812E2F0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8812e2f0
	if (!ctx.cr6.eq) goto loc_8812E2F0;
	// lwz r11,68(r5)
	ctx.current_instruction = 0x8812E1C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8812ecb8
	if (ctx.cr6.eq) goto loc_8812ECB8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812ecb8
	if (!ctx.cr6.eq) goto loc_8812ECB8;
	// lwz r10,320(r8)
	ctx.current_instruction = 0x8812E1DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lhz r9,34(r8)
	ctx.current_instruction = 0x8812E1E0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.current_instruction = 0x8812E1E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,1832(r10)
	ctx.current_instruction = 0x8812E1EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// beq cr6,0x8812e220
	if (ctx.cr6.eq) goto loc_8812E220;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812E1F8:
	// lwz r7,320(r8)
	ctx.current_instruction = 0x8812E1F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r6,r10,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// stw r30,40(r7)
	ctx.current_instruction = 0x8812E20C;
	REX_STORE_U32(ctx.r7.u32 + 40, ctx.r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lhz r4,34(r8)
	ctx.current_instruction = 0x8812E214;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8812e1f8
	if (ctx.cr6.lt) goto loc_8812E1F8;
loc_8812E220:
	// lhz r10,120(r5)
	ctx.current_instruction = 0x8812E220;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 120);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8812e2b4
	if (ctx.cr6.lt) goto loc_8812E2B4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8812E248:
	// lfs f0,0(r11)
	ctx.current_instruction = 0x8812E248;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	ctx.current_instruction = 0x8812E24C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	ctx.current_instruction = 0x8812E254;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,0(r9)
	ctx.current_instruction = 0x8812E25C;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,4(r9)
	ctx.current_instruction = 0x8812E260;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r11)
	ctx.current_instruction = 0x8812E264;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,4(r11)
	ctx.current_instruction = 0x8812E26C;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f7,4(r9)
	ctx.current_instruction = 0x8812E274;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	ctx.current_instruction = 0x8812E278;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	ctx.current_instruction = 0x8812E27C;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,8(r11)
	ctx.current_instruction = 0x8812E284;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// stfs f3,8(r9)
	ctx.current_instruction = 0x8812E28C;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	ctx.current_instruction = 0x8812E290;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r9)
	ctx.current_instruction = 0x8812E294;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,12(r11)
	ctx.current_instruction = 0x8812E29C;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f13,12(r9)
	ctx.current_instruction = 0x8812E2A4;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8812e248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812E248;
loc_8812E2B4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812ecb8
	if (!ctx.cr6.gt) goto loc_8812ECB8;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8812E2C4:
	// lfs f0,0(r11)
	ctx.current_instruction = 0x8812E2C4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	ctx.current_instruction = 0x8812E2C8;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	ctx.current_instruction = 0x8812E2D0;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f11,r9,r11
	ctx.current_instruction = 0x8812E2D8;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8812e2c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812E2C4;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef2c4
	ctx.lr = 0x8812E2EC;
	__restfpr_24(ctx, base);
loc_8812E2EC:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8812E2F0:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8812ecb8
	if (ctx.cr6.lt) goto loc_8812ECB8;
	// lhz r23,730(r8)
	ctx.current_instruction = 0x8812E2F8;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r8.u32 + 730);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8812ecb8
	if (!ctx.cr6.eq) goto loc_8812ECB8;
	// lwz r11,572(r8)
	ctx.current_instruction = 0x8812E304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8812ecb8
	if (!ctx.cr6.gt) goto loc_8812ECB8;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x8812E31C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24100(r10)
	ctx.current_instruction = 0x8812E320;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24100);
	ctx.f13.f64 = double(temp.f32);
loc_8812E324:
	// lwz r11,576(r8)
	ctx.current_instruction = 0x8812E324;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 576);
	// mulli r10,r22,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(152));
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r26)
	ctx.current_instruction = 0x8812E330;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r30,4(r26)
	ctx.current_instruction = 0x8812E334;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8812eca8
	if (!ctx.cr6.eq) goto loc_8812ECA8;
	// lwz r6,0(r26)
	ctx.current_instruction = 0x8812E340;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8812eca8
	if (ctx.cr6.eq) goto loc_8812ECA8;
	// lwz r11,12(r26)
	ctx.current_instruction = 0x8812E34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812e364
	if (!ctx.cr6.eq) goto loc_8812E364;
	// lwz r10,16(r26)
	ctx.current_instruction = 0x8812E358;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8812eca8
	if (ctx.cr6.eq) goto loc_8812ECA8;
loc_8812E364:
	// lhz r10,34(r8)
	ctx.current_instruction = 0x8812E364;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8812e468
	if (!ctx.cr6.eq) goto loc_8812E468;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812e468
	if (!ctx.cr6.eq) goto loc_8812E468;
	// lwz r11,16(r26)
	ctx.current_instruction = 0x8812E378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8812e468
	if (!ctx.cr6.eq) goto loc_8812E468;
	// lwz r10,320(r8)
	ctx.current_instruction = 0x8812E384;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E38C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,56(r10)
	ctx.current_instruction = 0x8812E394;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,1832(r10)
	ctx.current_instruction = 0x8812E398;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1832);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// clrlwi r7,r23,16
	ctx.r7.u64 = ctx.r23.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_8812E3B4:
	// lwzx r11,r30,r9
	ctx.current_instruction = 0x8812E3B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,308(r8)
	ctx.current_instruction = 0x8812E3BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// lwzx r10,r11,r9
	ctx.current_instruction = 0x8812E3C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x8812e410
	if (!ctx.cr6.eq) goto loc_8812E410;
loc_8812E3C8:
	// lwz r11,308(r8)
	ctx.current_instruction = 0x8812E3C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8812E3D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e3e0
	if (!ctx.cr6.lt) goto loc_8812E3E0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8812E3E0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e450
	if (!ctx.cr6.lt) goto loc_8812E450;
	// lfs f12,4(r5)
	ctx.current_instruction = 0x8812E3E8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,4(r6)
	ctx.current_instruction = 0x8812E3F0;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f10,4(r6)
	ctx.current_instruction = 0x8812E3F8;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,4(r5)
	ctx.current_instruction = 0x8812E400;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x8812e3c8
	goto loc_8812E3C8;
loc_8812E410:
	// lwz r11,308(r8)
	ctx.current_instruction = 0x8812E410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8812E418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e428
	if (!ctx.cr6.lt) goto loc_8812E428;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8812E428:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8812e450
	if (!ctx.cr6.lt) goto loc_8812E450;
	// lfs f12,4(r6)
	ctx.current_instruction = 0x8812E430;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfsu f11,4(r6)
	ctx.current_instruction = 0x8812E43C;
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lfs f10,4(r5)
	ctx.current_instruction = 0x8812E440;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfsu f9,4(r5)
	ctx.current_instruction = 0x8812E448;
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// b 0x8812e410
	goto loc_8812E410;
loc_8812E450:
	// lwz r11,304(r8)
	ctx.current_instruction = 0x8812E450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812e3b4
	if (ctx.cr6.lt) goto loc_8812E3B4;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E468:
	// lhz r10,580(r8)
	ctx.current_instruction = 0x8812E468;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// lwz r11,556(r8)
	ctx.current_instruction = 0x8812E46C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 556);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,148(r26)
	ctx.current_instruction = 0x8812E474;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812e4d8
	if (!ctx.cr6.gt) goto loc_8812E4D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_8812E48C:
	// lwz r7,584(r8)
	ctx.current_instruction = 0x8812E48C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 584);
	// lhzx r9,r9,r7
	ctx.current_instruction = 0x8812E490;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r30
	ctx.current_instruction = 0x8812E49C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8812e4bc
	if (!ctx.cr6.eq) goto loc_8812E4BC;
	// lwz r7,320(r8)
	ctx.current_instruction = 0x8812E4A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// mulli r9,r9,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,144(r9)
	ctx.current_instruction = 0x8812E4B4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 144);
	// stwu r7,4(r31)
	ctx.current_instruction = 0x8812E4B8;
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r31.u32 = ea;
loc_8812E4BC:
	// lhz r7,580(r8)
	ctx.current_instruction = 0x8812E4BC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 580);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8812e48c
	if (ctx.cr6.lt) goto loc_8812E48C;
loc_8812E4D8:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8812e5dc
	if (!ctx.cr6.eq) goto loc_8812E5DC;
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E4E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
loc_8812E4F8:
	// lwzx r9,r6,r29
	ctx.current_instruction = 0x8812E4F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812e580
	if (!ctx.cr6.eq) goto loc_8812E580;
	// lwzx r5,r9,r6
	ctx.current_instruction = 0x8812E508;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r31,r23,16
	ctx.r31.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E510:
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E510;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r9,4(r9)
	ctx.current_instruction = 0x8812E518;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e528
	if (!ctx.cr6.lt) goto loc_8812E528;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8812E528:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e5c4
	if (!ctx.cr6.lt) goto loc_8812E5C4;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8812E530;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,0(r10)
	ctx.current_instruction = 0x8812E534;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x8812E538;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,12(r10)
	ctx.current_instruction = 0x8812E53C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	ctx.current_instruction = 0x8812E540;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r28,r9,4
	ctx.r28.s64 = ctx.r9.s64 + 4;
	// lfs f9,8(r10)
	ctx.current_instruction = 0x8812E548;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r28,0(r11)
	ctx.current_instruction = 0x8812E554;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lfs f8,0(r9)
	ctx.current_instruction = 0x8812E558;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r27,4(r11)
	ctx.current_instruction = 0x8812E55C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lfs f7,0(r7)
	ctx.current_instruction = 0x8812E560;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f4,f10,f7,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f4,0(r9)
	ctx.current_instruction = 0x8812E570;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f3,f9,f8,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f3,0(r7)
	ctx.current_instruction = 0x8812E578;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8812e510
	goto loc_8812E510;
loc_8812E580:
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8812E584;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8812E588;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,4(r9)
	ctx.current_instruction = 0x8812E58C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.current_instruction = 0x8812E590;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x8812E5A0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E5A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,0(r9)
	ctx.current_instruction = 0x8812E5AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x8812E5B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	ctx.current_instruction = 0x8812E5C0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_8812E5C4:
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E5C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812e4f8
	if (ctx.cr6.lt) goto loc_8812E4F8;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E5DC:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8812e740
	if (!ctx.cr6.eq) goto loc_8812E740;
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E5E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r26,24
	ctx.r28.s64 = ctx.r26.s64 + 24;
loc_8812E5FC:
	// lwzx r9,r5,r28
	ctx.current_instruction = 0x8812E5FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E604;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812e6c0
	if (!ctx.cr6.eq) goto loc_8812E6C0;
	// lwzx r31,r9,r5
	ctx.current_instruction = 0x8812E60C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// clrlwi r30,r23,16
	ctx.r30.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E614:
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E614;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,4(r9)
	ctx.current_instruction = 0x8812E61C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e62c
	if (!ctx.cr6.lt) goto loc_8812E62C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8812E62C:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8812e728
	if (!ctx.cr6.lt) goto loc_8812E728;
	// lwz r7,8(r11)
	ctx.current_instruction = 0x8812E634;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.current_instruction = 0x8812E638;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x8812E63C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,16(r10)
	ctx.current_instruction = 0x8812E640;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r10)
	ctx.current_instruction = 0x8812E644;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x8812E648;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,4(r10)
	ctx.current_instruction = 0x8812E64C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// lfs f8,12(r10)
	ctx.current_instruction = 0x8812E654;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r9,4
	ctx.r26.s64 = ctx.r9.s64 + 4;
	// lfs f7,0(r7)
	ctx.current_instruction = 0x8812E65C;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	ctx.r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r6)
	ctx.current_instruction = 0x8812E664;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r9)
	ctx.current_instruction = 0x8812E670;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,24(r10)
	ctx.current_instruction = 0x8812E678;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r10)
	ctx.current_instruction = 0x8812E67C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f11,20(r10)
	ctx.current_instruction = 0x8812E684;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,0(r11)
	ctx.current_instruction = 0x8812E688;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lfs f10,32(r10)
	ctx.current_instruction = 0x8812E68C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stw r25,4(r11)
	ctx.current_instruction = 0x8812E690;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r27,8(r11)
	ctx.current_instruction = 0x8812E694;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// fmadds f9,f9,f6,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f5.f64)));
	// fmadds f8,f8,f3,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f4.f64)));
	// fmadds f6,f1,f3,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f5,f3,f12,f9
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f5,0(r9)
	ctx.current_instruction = 0x8812E6A8;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f4,f11,f7,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f8.f64)));
	// stfs f4,0(r6)
	ctx.current_instruction = 0x8812E6B0;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f3,f10,f7,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfs f3,0(r7)
	ctx.current_instruction = 0x8812E6B8;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8812e614
	goto loc_8812E614;
loc_8812E6C0:
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8812E6C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x8812E6C8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.current_instruction = 0x8812E6CC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,4(r9)
	ctx.current_instruction = 0x8812E6D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.current_instruction = 0x8812E6D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x8812E6E4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E6E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,0(r9)
	ctx.current_instruction = 0x8812E6F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.current_instruction = 0x8812E6F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r6,4(r11)
	ctx.current_instruction = 0x8812E704;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812E708;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r7,4(r9)
	ctx.current_instruction = 0x8812E710;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.current_instruction = 0x8812E714;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r7,8(r11)
	ctx.current_instruction = 0x8812E724;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_8812E728:
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E728;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8812e5fc
	if (ctx.cr6.lt) goto loc_8812E5FC;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E740:
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bne cr6,0x8812e914
	if (!ctx.cr6.eq) goto loc_8812E914;
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E748;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r26,24
	ctx.r27.s64 = ctx.r26.s64 + 24;
loc_8812E760:
	// lwzx r7,r9,r27
	ctx.current_instruction = 0x8812E760;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E768;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812e870
	if (!ctx.cr6.eq) goto loc_8812E870;
	// lwzx r30,r9,r7
	ctx.current_instruction = 0x8812E770;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r29,r23,16
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E778:
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E778;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.current_instruction = 0x8812E780;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812e790
	if (!ctx.cr6.lt) goto loc_8812E790;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8812E790:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812e8fc
	if (!ctx.cr6.lt) goto loc_8812E8FC;
	// lwz r6,8(r11)
	ctx.current_instruction = 0x8812E798;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.current_instruction = 0x8812E79C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8812E7A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,20(r10)
	ctx.current_instruction = 0x8812E7A4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r10)
	ctx.current_instruction = 0x8812E7A8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8812E7AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,52(r10)
	ctx.current_instruction = 0x8812E7B0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	ctx.current_instruction = 0x8812E7B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,4(r10)
	ctx.current_instruction = 0x8812E7B8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r7,4
	ctx.r26.s64 = ctx.r7.s64 + 4;
	// lfs f7,0(r6)
	ctx.current_instruction = 0x8812E7C0;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r6,4
	ctx.r25.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r5)
	ctx.current_instruction = 0x8812E7C8;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,0(r7)
	ctx.current_instruction = 0x8812E7D4;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,16(r10)
	ctx.current_instruction = 0x8812E7DC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,32(r10)
	ctx.current_instruction = 0x8812E7E4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r10)
	ctx.current_instruction = 0x8812E7E8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r21,r5,4
	ctx.r21.s64 = ctx.r5.s64 + 4;
	// lfs f9,0(r31)
	ctx.current_instruction = 0x8812E7F0;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lfs f31,12(r10)
	ctx.current_instruction = 0x8812E7F8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// stw r26,0(r11)
	ctx.current_instruction = 0x8812E7FC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lfs f30,24(r10)
	ctx.current_instruction = 0x8812E800;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// stw r21,4(r11)
	ctx.current_instruction = 0x8812E804;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f29,40(r10)
	ctx.current_instruction = 0x8812E808;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// stw r25,8(r11)
	ctx.current_instruction = 0x8812E80C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lfs f28,56(r10)
	ctx.current_instruction = 0x8812E810;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// stw r20,12(r11)
	ctx.current_instruction = 0x8812E814;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// fmadds f8,f8,f6,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f6,0(r10)
	ctx.current_instruction = 0x8812E81C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f1,f3,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f4.f64)));
	// lfs f4,28(r10)
	ctx.current_instruction = 0x8812E824;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f11,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f2.f64)));
	// lfs f1,44(r10)
	ctx.current_instruction = 0x8812E82C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f10,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f12.f64)));
	// lfs f11,60(r10)
	ctx.current_instruction = 0x8812E834;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmadds f10,f31,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f31.f64, ctx.f9.f64, ctx.f8.f64)));
	// fmadds f8,f30,f7,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f30.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f5,f29,f7,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f2,f28,f7,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f12,f6,f3,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f10.f64)));
	// stfs f12,0(r7)
	ctx.current_instruction = 0x8812E850;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f10,f4,f9,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f10,0(r5)
	ctx.current_instruction = 0x8812E858;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f8,f1,f9,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f8,0(r6)
	ctx.current_instruction = 0x8812E860;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f7,f11,f9,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f2.f64)));
	// stfs f7,0(r31)
	ctx.current_instruction = 0x8812E868;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x8812e778
	goto loc_8812E778;
loc_8812E870:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.current_instruction = 0x8812E874;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8812E878;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.current_instruction = 0x8812E87C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.current_instruction = 0x8812E880;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,4(r7)
	ctx.current_instruction = 0x8812E884;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.current_instruction = 0x8812E888;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x8812E898;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E89C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.current_instruction = 0x8812E8A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.current_instruction = 0x8812E8A8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	ctx.current_instruction = 0x8812E8B8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E8BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.current_instruction = 0x8812E8C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,4(r7)
	ctx.current_instruction = 0x8812E8C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r7,r6,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	ctx.current_instruction = 0x8812E8D8;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E8DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.current_instruction = 0x8812E8E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.current_instruction = 0x8812E8E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,12(r11)
	ctx.current_instruction = 0x8812E8F8;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_8812E8FC:
	// lwz r7,304(r8)
	ctx.current_instruction = 0x8812E8FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812e760
	if (ctx.cr6.lt) goto loc_8812E760;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812E914:
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne cr6,0x8812eb68
	if (!ctx.cr6.eq) goto loc_8812EB68;
	// lwz r9,304(r8)
	ctx.current_instruction = 0x8812E920;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
loc_8812E934:
	// lwzx r7,r9,r26
	ctx.current_instruction = 0x8812E934;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E93C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// bne cr6,0x8812eaa0
	if (!ctx.cr6.eq) goto loc_8812EAA0;
	// lwzx r29,r9,r7
	ctx.current_instruction = 0x8812E944;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r28,r23,16
	ctx.r28.u64 = ctx.r23.u32 & 0xFFFF;
loc_8812E94C:
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812E94C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r7,4(r7)
	ctx.current_instruction = 0x8812E954;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812e964
	if (!ctx.cr6.lt) goto loc_8812E964;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_8812E964:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8812eb50
	if (!ctx.cr6.lt) goto loc_8812EB50;
	// lwz r5,8(r11)
	ctx.current_instruction = 0x8812E96C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,8(r10)
	ctx.current_instruction = 0x8812E970;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,4(r11)
	ctx.current_instruction = 0x8812E974;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,24(r10)
	ctx.current_instruction = 0x8812E978;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r10)
	ctx.current_instruction = 0x8812E97C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x8812E980;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f9,64(r10)
	ctx.current_instruction = 0x8812E984;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,12(r11)
	ctx.current_instruction = 0x8812E988;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f8,84(r10)
	ctx.current_instruction = 0x8812E98C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lwz r30,16(r11)
	ctx.current_instruction = 0x8812E990;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f7,0(r5)
	ctx.current_instruction = 0x8812E994;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r25,r7,4
	ctx.r25.s64 = ctx.r7.s64 + 4;
	// lfs f6,0(r6)
	ctx.current_instruction = 0x8812E99C;
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f3,4(r10)
	ctx.current_instruction = 0x8812E9A8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f1,0(r7)
	ctx.current_instruction = 0x8812E9B0;
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,20(r10)
	ctx.current_instruction = 0x8812E9B8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f9,40(r10)
	ctx.current_instruction = 0x8812E9C0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r10)
	ctx.current_instruction = 0x8812E9C4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// addi r21,r6,4
	ctx.r21.s64 = ctx.r6.s64 + 4;
	// lfs f31,80(r10)
	ctx.current_instruction = 0x8812E9CC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// addi r20,r5,4
	ctx.r20.s64 = ctx.r5.s64 + 4;
	// lfs f30,0(r31)
	ctx.current_instruction = 0x8812E9D4;
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r19,r31,4
	ctx.r19.s64 = ctx.r31.s64 + 4;
	// lfs f29,12(r10)
	ctx.current_instruction = 0x8812E9DC;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// addi r18,r30,4
	ctx.r18.s64 = ctx.r30.s64 + 4;
	// lfs f28,28(r10)
	ctx.current_instruction = 0x8812E9E4;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// stw r25,0(r11)
	ctx.current_instruction = 0x8812E9E8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// fmadds f6,f3,f6,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f5,48(r10)
	ctx.current_instruction = 0x8812E9F0;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f1,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f4.f64)));
	// lfs f3,68(r10)
	ctx.current_instruction = 0x8812E9F8;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f9,f1,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f2.f64)));
	// lfs f11,88(r10)
	ctx.current_instruction = 0x8812EA00;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f8,f1,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f12.f64)));
	// lfs f8,0(r30)
	ctx.current_instruction = 0x8812EA08;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f31,f1,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f1.f64, ctx.f10.f64)));
	// lfs f10,16(r10)
	ctx.current_instruction = 0x8812EA10;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,32(r10)
	ctx.current_instruction = 0x8812EA14;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// stw r21,4(r11)
	ctx.current_instruction = 0x8812EA18;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lfs f27,52(r10)
	ctx.current_instruction = 0x8812EA1C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// stw r20,8(r11)
	ctx.current_instruction = 0x8812EA20;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// lfs f26,72(r10)
	ctx.current_instruction = 0x8812EA24;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f26.f64 = double(temp.f32);
	// stw r19,12(r11)
	ctx.current_instruction = 0x8812EA28;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
	// lfs f25,92(r10)
	ctx.current_instruction = 0x8812EA2C;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f25.f64 = double(temp.f32);
	// stw r18,16(r11)
	ctx.current_instruction = 0x8812EA30;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r18.u32);
	// lfs f24,0(r10)
	ctx.current_instruction = 0x8812EA34;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fmadds f6,f29,f30,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f29.f64, ctx.f30.f64, ctx.f6.f64)));
	// lfs f29,36(r10)
	ctx.current_instruction = 0x8812EA40;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f28,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f28.f64, ctx.f7.f64, ctx.f4.f64)));
	// lfs f28,56(r10)
	ctx.current_instruction = 0x8812EA48;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f2,f5,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f2.f64)));
	// lfs f5,76(r10)
	ctx.current_instruction = 0x8812EA50;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f3,f7,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f9.f64)));
	// lfs f9,96(r10)
	ctx.current_instruction = 0x8812EA58;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f11,f7,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f6,f10,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f4,f31,f30,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f4.f64)));
	// fmadds f2,f27,f30,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f30.f64, ctx.f2.f64)));
	// fmadds f12,f26,f30,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f26.f64, ctx.f30.f64, ctx.f3.f64)));
	// fmadds f11,f25,f30,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f25.f64, ctx.f30.f64, ctx.f7.f64)));
	// fmadds f10,f24,f1,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f24.f64, ctx.f1.f64, ctx.f6.f64)));
	// stfs f10,0(r7)
	ctx.current_instruction = 0x8812EA78;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f7,f29,f8,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f29.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f7,0(r6)
	ctx.current_instruction = 0x8812EA80;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f6,f28,f8,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f6,0(r5)
	ctx.current_instruction = 0x8812EA88;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f5,f5,f8,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f12.f64)));
	// stfs f5,0(r31)
	ctx.current_instruction = 0x8812EA90;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f9,f8,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f11.f64)));
	// stfs f4,0(r30)
	ctx.current_instruction = 0x8812EA98;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8812e94c
	goto loc_8812E94C;
loc_8812EAA0:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r11)
	ctx.current_instruction = 0x8812EAA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8812EAA8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.current_instruction = 0x8812EAAC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	ctx.current_instruction = 0x8812EAB0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.current_instruction = 0x8812EAB4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,4(r7)
	ctx.current_instruction = 0x8812EAB8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.current_instruction = 0x8812EABC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	ctx.current_instruction = 0x8812EACC;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812EAD0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.current_instruction = 0x8812EAD8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.current_instruction = 0x8812EADC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r5,4(r11)
	ctx.current_instruction = 0x8812EAEC;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812EAF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.current_instruction = 0x8812EAF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.current_instruction = 0x8812EAFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	ctx.current_instruction = 0x8812EB0C;
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812EB10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,4(r7)
	ctx.current_instruction = 0x8812EB18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.current_instruction = 0x8812EB1C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r30
	ctx.r5.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r5,12(r11)
	ctx.current_instruction = 0x8812EB2C;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r7,308(r8)
	ctx.current_instruction = 0x8812EB30;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,4(r7)
	ctx.current_instruction = 0x8812EB38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.current_instruction = 0x8812EB3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// stw r6,16(r11)
	ctx.current_instruction = 0x8812EB4C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
loc_8812EB50:
	// lwz r7,304(r8)
	ctx.current_instruction = 0x8812EB50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8812e934
	if (ctx.cr6.lt) goto loc_8812E934;
	// b 0x8812eca8
	goto loc_8812ECA8;
loc_8812EB68:
	// lwz r10,304(r8)
	ctx.current_instruction = 0x8812EB68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8812eca8
	if (!ctx.cr6.gt) goto loc_8812ECA8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r26,24
	ctx.r25.s64 = ctx.r26.s64 + 24;
loc_8812EB7C:
	// lwzx r10,r30,r25
	ctx.current_instruction = 0x8812EB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8812ec50
	if (!ctx.cr6.eq) goto loc_8812EC50;
	// lwz r10,308(r8)
	ctx.current_instruction = 0x8812EB88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// clrlwi r29,r23,16
	ctx.r29.u64 = ctx.r23.u32 & 0xFFFF;
	// lwzx r28,r30,r10
	ctx.current_instruction = 0x8812EB90;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
loc_8812EB94:
	// lwz r10,308(r8)
	ctx.current_instruction = 0x8812EB94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.current_instruction = 0x8812EB9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812ebac
	if (!ctx.cr6.lt) goto loc_8812EBAC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8812EBAC:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8812ec94
	if (!ctx.cr6.lt) goto loc_8812EC94;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812ec48
	if (!ctx.cr6.gt) goto loc_8812EC48;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8812EBC0:
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// lwz r5,148(r26)
	ctx.current_instruction = 0x8812EBC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stfsx f0,r9,r24
	ctx.current_instruction = 0x8812EBD8;
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
loc_8812EBDC:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r24
	ctx.current_instruction = 0x8812EBE0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r21,r5,r11
	ctx.current_instruction = 0x8812EBEC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lfsx f11,r5,r7
	ctx.current_instruction = 0x8812EBF0;
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lfs f10,0(r21)
	ctx.current_instruction = 0x8812EBF8;
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// stfsx f9,r9,r24
	ctx.current_instruction = 0x8812EC00;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
	// blt cr6,0x8812ebdc
	if (ctx.cr6.lt) goto loc_8812EBDC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8812ebc0
	if (ctx.cr6.lt) goto loc_8812EBC0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812EC20:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r7,r9,r11
	ctx.current_instruction = 0x8812EC2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r9,r24
	ctx.current_instruction = 0x8812EC30;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// stwx r5,r9,r11
	ctx.current_instruction = 0x8812EC3C;
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stfs f12,0(r7)
	ctx.current_instruction = 0x8812EC40;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x8812ec20
	if (ctx.cr6.lt) goto loc_8812EC20;
loc_8812EC48:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8812eb94
	goto loc_8812EB94;
loc_8812EC50:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8812ec94
	if (!ctx.cr6.gt) goto loc_8812EC94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8812EC5C:
	// lwz r9,308(r8)
	ctx.current_instruction = 0x8812EC5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwzx r5,r7,r11
	ctx.current_instruction = 0x8812EC70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// lwz r31,4(r9)
	ctx.current_instruction = 0x8812EC78;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.current_instruction = 0x8812EC7C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r5,r7,r11
	ctx.current_instruction = 0x8812EC8C;
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
	// blt cr6,0x8812ec5c
	if (ctx.cr6.lt) goto loc_8812EC5C;
loc_8812EC94:
	// lwz r10,304(r8)
	ctx.current_instruction = 0x8812EC94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8812eb7c
	if (ctx.cr6.lt) goto loc_8812EB7C;
loc_8812ECA8:
	// lwz r11,572(r8)
	ctx.current_instruction = 0x8812ECA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 572);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8812e324
	if (ctx.cr6.lt) goto loc_8812E324;
loc_8812ECB8:
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x881ef2c4
	ctx.lr = 0x8812ECC0;
	__restfpr_24(ctx, base);
loc_8812ECC0:
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CAE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CAE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CAE8) {
			switch (rex_dispatch_address) {
				case 0x8814CAF0:
				case 0x8814CB18:
				case 0x8814CB34:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CAE8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CAF0: goto loc_8814CAF0;
		case 0x8814CB18: goto loc_8814CB18;
		case 0x8814CB34: goto loc_8814CB34;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814CAF0;
	__savegprlr_28(ctx, base);
loc_8814CAF0:
	// stwu r1,-896(r1)
	ctx.current_instruction = 0x8814CAF0;
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
	// bl 0x8814baf8
	ctx.lr = 0x8814CB18;
	sub_8814BAF8(ctx, base);
loc_8814CB18:
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
	// bl 0x8814c338
	ctx.lr = 0x8814CB34;
	sub_8814C338(ctx, base);
loc_8814CB34:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814CE48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814CE48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814CE48) {
			switch (rex_dispatch_address) {
				case 0x8814CE80:
				case 0x8814CE94:
				case 0x8814CEA8:
				case 0x8814CEBC:
				case 0x8814CED0:
				case 0x8814CEE4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814CE48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814CE80: goto loc_8814CE80;
		case 0x8814CE94: goto loc_8814CE94;
		case 0x8814CEA8: goto loc_8814CEA8;
		case 0x8814CEBC: goto loc_8814CEBC;
		case 0x8814CED0: goto loc_8814CED0;
		case 0x8814CEE4: goto loc_8814CEE4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8814CE4C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8814CE50;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8814CE54;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8814CE58;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,712(r3)
	ctx.current_instruction = 0x8814CE5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8814cee8
	if (ctx.cr6.eq) goto loc_8814CEE8;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8814CE6C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ce84
	if (ctx.cr6.eq) goto loc_8814CE84;
	// bl 0x8815d0c0
	ctx.lr = 0x8814CE80;
	sub_8815D0C0(ctx, base);
loc_8814CE80:
	// stw r30,0(r31)
	ctx.current_instruction = 0x8814CE80;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8814CE84:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x8814CE84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ce98
	if (ctx.cr6.eq) goto loc_8814CE98;
	// bl 0x8815d398
	ctx.lr = 0x8814CE94;
	sub_8815D398(ctx, base);
loc_8814CE94:
	// stw r30,4(r31)
	ctx.current_instruction = 0x8814CE94;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8814CE98:
	// lwz r3,36(r31)
	ctx.current_instruction = 0x8814CE98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ceac
	if (ctx.cr6.eq) goto loc_8814CEAC;
	// bl 0x8815d268
	ctx.lr = 0x8814CEA8;
	sub_8815D268(ctx, base);
loc_8814CEA8:
	// stw r30,36(r31)
	ctx.current_instruction = 0x8814CEA8;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_8814CEAC:
	// lwz r3,40(r31)
	ctx.current_instruction = 0x8814CEAC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cec0
	if (ctx.cr6.eq) goto loc_8814CEC0;
	// bl 0x8815d398
	ctx.lr = 0x8814CEBC;
	sub_8815D398(ctx, base);
loc_8814CEBC:
	// stw r30,40(r31)
	ctx.current_instruction = 0x8814CEBC;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8814CEC0:
	// lwz r3,44(r31)
	ctx.current_instruction = 0x8814CEC0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814ced4
	if (ctx.cr6.eq) goto loc_8814CED4;
	// bl 0x8815d398
	ctx.lr = 0x8814CED0;
	sub_8815D398(ctx, base);
loc_8814CED0:
	// stw r30,44(r31)
	ctx.current_instruction = 0x8814CED0;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8814CED4:
	// lwz r3,48(r31)
	ctx.current_instruction = 0x8814CED4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8814cee8
	if (ctx.cr6.eq) goto loc_8814CEE8;
	// bl 0x8815d268
	ctx.lr = 0x8814CEE4;
	sub_8815D268(ctx, base);
loc_8814CEE4:
	// stw r30,48(r31)
	ctx.current_instruction = 0x8814CEE4;
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_8814CEE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8814CEEC;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8814CEF4;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8814CEF8;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8814FF88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814FF88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814FF88) {
			switch (rex_dispatch_address) {
				case 0x8814FF90:
				case 0x8814FFD0:
				case 0x8814FFE4:
				case 0x8814FFF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814FF88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814FF90: goto loc_8814FF90;
		case 0x8814FFD0: goto loc_8814FFD0;
		case 0x8814FFE4: goto loc_8814FFE4;
		case 0x8814FFF8: goto loc_8814FFF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814FF90;
	__savegprlr_28(ctx, base);
loc_8814FF90:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8814FF90;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,21940(r3)
	ctx.current_instruction = 0x8814FF98;
	REX_STORE_U32(ctx.r3.u32 + 21940, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x88150018
	if (!ctx.cr6.eq) goto loc_88150018;
	// lwz r11,21944(r31)
	ctx.current_instruction = 0x8814FFAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,0(r11)
	ctx.current_instruction = 0x8814FFB8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r3,21944(r31)
	ctx.current_instruction = 0x8814FFBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// lwz r9,21980(r31)
	ctx.current_instruction = 0x8814FFC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,21948(r31)
	ctx.current_instruction = 0x8814FFC8;
	REX_STORE_U32(ctx.r31.u32 + 21948, ctx.r10.u32);
	// bl 0x88052d90
	ctx.lr = 0x8814FFD0;
	sub_88052D90(ctx, base);
loc_8814FFD0:
	// lwz r8,21980(r31)
	ctx.current_instruction = 0x8814FFD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,21956(r31)
	ctx.current_instruction = 0x8814FFD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x8814FFE4;
	sub_88052D90(ctx, base);
loc_8814FFE4:
	// lwz r7,21980(r31)
	ctx.current_instruction = 0x8814FFE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,21972(r31)
	ctx.current_instruction = 0x8814FFEC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88052d90
	ctx.lr = 0x8814FFF8;
	sub_88052D90(ctx, base);
loc_8814FFF8:
	// lwz r6,21972(r31)
	ctx.current_instruction = 0x8814FFF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// stw r29,21976(r31)
	ctx.current_instruction = 0x8814FFFC;
	REX_STORE_U32(ctx.r31.u32 + 21976, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,21960(r31)
	ctx.current_instruction = 0x88150004;
	REX_STORE_U32(ctx.r31.u32 + 21960, ctx.r29.u32);
	// stw r29,21964(r31)
	ctx.current_instruction = 0x88150008;
	REX_STORE_U32(ctx.r31.u32 + 21964, ctx.r29.u32);
	// stw r6,21968(r31)
	ctx.current_instruction = 0x8815000C;
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88150018:
	// lwz r10,188(r31)
	ctx.current_instruction = 0x88150018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,21948(r31)
	ctx.current_instruction = 0x8815001C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88150038
	if (ctx.cr6.lt) goto loc_88150038;
loc_8815002C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_88150038:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21944(r31)
	ctx.current_instruction = 0x8815003C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// lwz r9,0(r5)
	ctx.current_instruction = 0x88150040;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r8)
	ctx.current_instruction = 0x88150048;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8815005c
	if (ctx.cr6.gt) goto loc_8815005C;
	// lwz r11,21980(r31)
	ctx.current_instruction = 0x88150054;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// stw r11,0(r5)
	ctx.current_instruction = 0x88150058;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8815005C:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x8815005C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,21980(r31)
	ctx.current_instruction = 0x88150060;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x881501b0
	if (ctx.cr6.lt) goto loc_881501B0;
	// lwz r30,21948(r31)
	ctx.current_instruction = 0x8815006C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x881500e4
	if (!ctx.cr6.gt) goto loc_881500E4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x881500bc
	if (!ctx.cr6.gt) goto loc_881500BC;
	// lwz r8,21944(r31)
	ctx.current_instruction = 0x8815008C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// li r11,8
	ctx.r11.s64 = 8;
	// rotlwi r29,r30,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
loc_88150098:
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r28,r11,r8
	ctx.current_instruction = 0x8815009C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// lwz r4,-4(r4)
	ctx.current_instruction = 0x881500AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r4,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r4.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// blt cr6,0x88150098
	if (ctx.cr6.lt) goto loc_88150098;
loc_881500BC:
	// lwz r10,21944(r31)
	ctx.current_instruction = 0x881500BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,-2
	ctx.r8.s64 = ctx.r30.s64 + -2;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r11,r9,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,-4(r4)
	ctx.current_instruction = 0x881500D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881500DC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x88150180
	goto loc_88150180;
loc_881500E4:
	// bne cr6,0x881500fc
	if (!ctx.cr6.eq) goto loc_881500FC;
	// lwz r11,21944(r31)
	ctx.current_instruction = 0x881500E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x881500EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r5)
	ctx.current_instruction = 0x881500F4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x88150180
	goto loc_88150180;
loc_881500FC:
	// lwz r11,21984(r31)
	ctx.current_instruction = 0x881500FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21984);
	// lwz r10,21992(r31)
	ctx.current_instruction = 0x88150100;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21992);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8815014c
	if (!ctx.cr6.gt) goto loc_8815014C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8815014c
	if (!ctx.cr6.gt) goto loc_8815014C;
	// lwz r9,92(r31)
	ctx.current_instruction = 0x88150114;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,21944(r31)
	ctx.current_instruction = 0x8815011C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srawi r30,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 4;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r4,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// lwz r10,-4(r8)
	ctx.current_instruction = 0x88150144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x88150178
	goto loc_88150178;
loc_8815014C:
	// lwz r9,21988(r31)
	ctx.current_instruction = 0x8815014C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21988);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x88150180
	if (!ctx.cr6.gt) goto loc_88150180;
	// lwz r10,21944(r31)
	ctx.current_instruction = 0x88150158;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,92(r31)
	ctx.current_instruction = 0x88150160;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// lwz r10,-4(r4)
	ctx.current_instruction = 0x88150174;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
loc_88150178:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r5)
	ctx.current_instruction = 0x8815017C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_88150180:
	// lwz r11,21980(r31)
	ctx.current_instruction = 0x88150180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21980);
	// lwz r10,0(r5)
	ctx.current_instruction = 0x88150184;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x881501b0
	if (!ctx.cr6.gt) goto loc_881501B0;
	// lwz r10,21948(r31)
	ctx.current_instruction = 0x88150194;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// lwz r9,21944(r31)
	ctx.current_instruction = 0x88150198;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.current_instruction = 0x881501A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8815002c
	if (!ctx.cr6.gt) goto loc_8815002C;
	// stw r11,0(r5)
	ctx.current_instruction = 0x881501AC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_881501B0:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881501B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,21972(r31)
	ctx.current_instruction = 0x881501B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 21972);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	ctx.current_instruction = 0x881501C4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,21948(r31)
	ctx.current_instruction = 0x881501C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// lwz r10,21944(r31)
	ctx.current_instruction = 0x881501CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21944);
	// beq cr6,0x881501fc
	if (ctx.cr6.eq) goto loc_881501FC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r5)
	ctx.current_instruction = 0x881501D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r7,r10
	ctx.current_instruction = 0x881501E0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,21956(r31)
	ctx.current_instruction = 0x881501E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// lwz r11,21948(r31)
	ctx.current_instruction = 0x881501E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r5
	ctx.current_instruction = 0x881501F4;
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// b 0x88150218
	goto loc_88150218;
loc_881501FC:
	// lwz r9,0(r5)
	ctx.current_instruction = 0x881501FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	ctx.current_instruction = 0x88150204;
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r5,21948(r31)
	ctx.current_instruction = 0x88150208;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,21956(r31)
	ctx.current_instruction = 0x88150210;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21956);
	// stwx r6,r7,r4
	ctx.current_instruction = 0x88150214;
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r6.u32);
loc_88150218:
	// lwz r10,21948(r31)
	ctx.current_instruction = 0x88150218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21948);
	// lwz r11,21984(r31)
	ctx.current_instruction = 0x8815021C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21984);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,21948(r31)
	ctx.current_instruction = 0x88150228;
	REX_STORE_U32(ctx.r31.u32 + 21948, ctx.r10.u32);
	// stw r9,21984(r31)
	ctx.current_instruction = 0x8815022C;
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815B408) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8815B408);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815B408;
	ctx.current_instruction = 0x8815B408;
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lwz r10,3980(r3)
	ctx.current_instruction = 0x8815B40C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3980);
	// lis r9,-30696
	ctx.r9.s64 = -2011693056;
	// lis r8,-30696
	ctx.r8.s64 = -2011693056;
	// lis r7,-30696
	ctx.r7.s64 = -2011693056;
	// addi r4,r11,9320
	ctx.r4.s64 = ctx.r11.s64 + 9320;
	// lis r6,-30696
	ctx.r6.s64 = -2011693056;
	// addi r11,r9,11312
	ctx.r11.s64 = ctx.r9.s64 + 11312;
	// stw r4,3196(r3)
	ctx.current_instruction = 0x8815B428;
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r4.u32);
	// addi r9,r8,10352
	ctx.r9.s64 = ctx.r8.s64 + 10352;
	// lis r5,-30696
	ctx.r5.s64 = -2011693056;
	// stw r11,3200(r3)
	ctx.current_instruction = 0x8815B434;
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r11.u32);
	// addi r8,r7,12184
	ctx.r8.s64 = ctx.r7.s64 + 12184;
	// stw r9,3216(r3)
	ctx.current_instruction = 0x8815B43C;
	REX_STORE_U32(ctx.r3.u32 + 3216, ctx.r9.u32);
	// addi r7,r6,12688
	ctx.r7.s64 = ctx.r6.s64 + 12688;
	// addi r6,r5,14480
	ctx.r6.s64 = ctx.r5.s64 + 14480;
	// stw r8,3204(r3)
	ctx.current_instruction = 0x8815B448;
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r8.u32);
	// stw r7,3208(r3)
	ctx.current_instruction = 0x8815B44C;
	REX_STORE_U32(ctx.r3.u32 + 3208, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,3212(r3)
	ctx.current_instruction = 0x8815B454;
	REX_STORE_U32(ctx.r3.u32 + 3212, ctx.r6.u32);
	// beq cr6,0x8815b480
	if (ctx.cr6.eq) goto loc_8815B480;
	// lis r11,-30696
	ctx.r11.s64 = -2011693056;
	// lis r10,-30696
	ctx.r10.s64 = -2011693056;
	// lis r9,-30696
	ctx.r9.s64 = -2011693056;
	// addi r8,r11,10352
	ctx.r8.s64 = ctx.r11.s64 + 10352;
	// addi r7,r10,13248
	ctx.r7.s64 = ctx.r10.s64 + 13248;
	// addi r6,r9,13832
	ctx.r6.s64 = ctx.r9.s64 + 13832;
	// stw r8,3200(r3)
	ctx.current_instruction = 0x8815B474;
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r8.u32);
	// stw r7,3204(r3)
	ctx.current_instruction = 0x8815B478;
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r7.u32);
	// stw r6,3208(r3)
	ctx.current_instruction = 0x8815B47C;
	REX_STORE_U32(ctx.r3.u32 + 3208, ctx.r6.u32);
loc_8815B480:
	// lwz r11,1792(r3)
	ctx.current_instruction = 0x8815B480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815b4dc
	if (ctx.cr6.eq) goto loc_8815B4DC;
	// lis r11,-30693
	ctx.r11.s64 = -2011496448;
	// lis r10,-30693
	ctx.r10.s64 = -2011496448;
	// lis r9,-30693
	ctx.r9.s64 = -2011496448;
	// lis r8,-30693
	ctx.r8.s64 = -2011496448;
	// addi r4,r11,25120
	ctx.r4.s64 = ctx.r11.s64 + 25120;
	// lis r7,-30693
	ctx.r7.s64 = -2011496448;
	// addi r11,r10,24192
	ctx.r11.s64 = ctx.r10.s64 + 24192;
	// stw r4,3196(r3)
	ctx.current_instruction = 0x8815B4A8;
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r4.u32);
	// addi r10,r9,26224
	ctx.r10.s64 = ctx.r9.s64 + 26224;
	// lis r6,-30693
	ctx.r6.s64 = -2011496448;
	// stw r11,3200(r3)
	ctx.current_instruction = 0x8815B4B4;
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r11.u32);
	// addi r9,r8,27128
	ctx.r9.s64 = ctx.r8.s64 + 27128;
	// stw r10,3204(r3)
	ctx.current_instruction = 0x8815B4BC;
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r10.u32);
	// addi r8,r7,27968
	ctx.r8.s64 = ctx.r7.s64 + 27968;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,3208(r3)
	ctx.current_instruction = 0x8815B4C8;
	REX_STORE_U32(ctx.r3.u32 + 3208, ctx.r9.u32);
	// addi r7,r6,24192
	ctx.r7.s64 = ctx.r6.s64 + 24192;
	// stw r8,3212(r3)
	ctx.current_instruction = 0x8815B4D0;
	REX_STORE_U32(ctx.r3.u32 + 3212, ctx.r8.u32);
	// stw r5,1800(r3)
	ctx.current_instruction = 0x8815B4D4;
	REX_STORE_U32(ctx.r3.u32 + 1800, ctx.r5.u32);
	// stw r7,3216(r3)
	ctx.current_instruction = 0x8815B4D8;
	REX_STORE_U32(ctx.r3.u32 + 3216, ctx.r7.u32);
loc_8815B4DC:
	// lwz r11,1800(r3)
	ctx.current_instruction = 0x8815B4DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1800);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8815b508
	if (ctx.cr6.eq) goto loc_8815B508;
	// stw r11,1920(r3)
	ctx.current_instruction = 0x8815B4F4;
	REX_STORE_U32(ctx.r3.u32 + 1920, ctx.r11.u32);
	// stw r10,1924(r3)
	ctx.current_instruction = 0x8815B4F8;
	REX_STORE_U32(ctx.r3.u32 + 1924, ctx.r10.u32);
	// stw r11,1928(r3)
	ctx.current_instruction = 0x8815B4FC;
	REX_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
	// stw r9,1932(r3)
	ctx.current_instruction = 0x8815B500;
	REX_STORE_U32(ctx.r3.u32 + 1932, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8815B508:
	// stw r11,1924(r3)
	ctx.current_instruction = 0x8815B508;
	REX_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
	// stw r10,1920(r3)
	ctx.current_instruction = 0x8815B50C;
	REX_STORE_U32(ctx.r3.u32 + 1920, ctx.r10.u32);
	// stw r9,1928(r3)
	ctx.current_instruction = 0x8815B510;
	REX_STORE_U32(ctx.r3.u32 + 1928, ctx.r9.u32);
	// stw r11,1932(r3)
	ctx.current_instruction = 0x8815B514;
	REX_STORE_U32(ctx.r3.u32 + 1932, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815E2F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815E2F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815E2F0) {
			switch (rex_dispatch_address) {
				case 0x8815E30C:
				case 0x8815E314:
				case 0x8815E31C:
				case 0x8815E324:
				case 0x8815E32C:
				case 0x8815E344:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E2F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815E30C: goto loc_8815E30C;
		case 0x8815E314: goto loc_8815E314;
		case 0x8815E31C: goto loc_8815E31C;
		case 0x8815E324: goto loc_8815E324;
		case 0x8815E32C: goto loc_8815E32C;
		case 0x8815E344: goto loc_8815E344;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8815E2F4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8815E2F8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8815E2FC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x881c4560
	ctx.lr = 0x8815E30C;
	sub_881C4560(ctx, base);
loc_8815E30C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x881c4560
	ctx.lr = 0x8815E314;
	sub_881C4560(ctx, base);
loc_8815E314:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x881c4560
	ctx.lr = 0x8815E31C;
	sub_881C4560(ctx, base);
loc_8815E31C:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x881c4560
	ctx.lr = 0x8815E324;
	sub_881C4560(ctx, base);
loc_8815E324:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8814cfe0
	ctx.lr = 0x8815E32C;
	sub_8814CFE0(ctx, base);
loc_8815E32C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8815e34c
	if (ctx.cr6.eq) goto loc_8815E34C;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x8815E334;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e34c
	if (ctx.cr6.eq) goto loc_8815E34C;
	// bl 0x8815ba70
	ctx.lr = 0x8815E344;
	sub_8815BA70(ctx, base);
loc_8815E344:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	ctx.current_instruction = 0x8815E348;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8815E34C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8815E350;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8815E358;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8815E948) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815E948;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815E948) {
			switch (rex_dispatch_address) {
				case 0x8815E950:
				case 0x8815E9D4:
				case 0x8815EA1C:
				case 0x8815EA94:
				case 0x8815EADC:
				case 0x8815EB7C:
				case 0x8815EBC4:
				case 0x8815EC58:
				case 0x8815ECA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E948;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815E950: goto loc_8815E950;
		case 0x8815E9D4: goto loc_8815E9D4;
		case 0x8815EA1C: goto loc_8815EA1C;
		case 0x8815EA94: goto loc_8815EA94;
		case 0x8815EADC: goto loc_8815EADC;
		case 0x8815EB7C: goto loc_8815EB7C;
		case 0x8815EBC4: goto loc_8815EBC4;
		case 0x8815EC58: goto loc_8815EC58;
		case 0x8815ECA0: goto loc_8815ECA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x8815E950;
	__savegprlr_27(ctx, base);
loc_8815E950:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8815E950;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15536(r3)
	ctx.current_instruction = 0x8815E954;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8815ea2c
	if (ctx.cr6.lt) goto loc_8815EA2C;
	// lwz r11,3940(r3)
	ctx.current_instruction = 0x8815E964;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815eca4
	if (ctx.cr6.eq) goto loc_8815ECA4;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8815E970;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815E97C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815e9e4
	if (!ctx.cr6.lt) goto loc_8815E9E4;
loc_8815E98C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e9e4
	if (ctx.cr6.eq) goto loc_8815E9E4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815E998;
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
	ctx.current_instruction = 0x8815E9BC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815E9C4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815e9d4
	if (!ctx.cr0.lt) goto loc_8815E9D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815E9D4;
	sub_88156678(ctx, base);
loc_8815E9D4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815E9D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815e98c
	if (ctx.cr6.gt) goto loc_8815E98C;
loc_8815E9E4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815E9E8;
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
	ctx.current_instruction = 0x8815EA00;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EA0C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815ea1c
	if (!ctx.cr0.lt) goto loc_8815EA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EA1C;
	sub_88156678(ctx, base);
loc_8815EA1C:
	// stw r30,4004(r27)
	ctx.current_instruction = 0x8815EA1C;
	REX_STORE_U32(ctx.r27.u32 + 4004, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8815EA2C:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815EA2C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,5
	ctx.r30.s64 = 5;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EA3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8815eaa4
	if (!ctx.cr6.lt) goto loc_8815EAA4;
loc_8815EA4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815eaa4
	if (ctx.cr6.eq) goto loc_8815EAA4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EA58;
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
	ctx.current_instruction = 0x8815EA7C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EA84;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815ea94
	if (!ctx.cr0.lt) goto loc_8815EA94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EA94;
	sub_88156678(ctx, base);
loc_8815EA94:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EA94;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815ea4c
	if (ctx.cr6.gt) goto loc_8815EA4C;
loc_8815EAA4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815EAA8;
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
	ctx.current_instruction = 0x8815EAC0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EACC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815eadc
	if (!ctx.cr0.lt) goto loc_8815EADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EADC;
	sub_88156678(ctx, base);
loc_8815EADC:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815EADC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8815EAE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8815eb0c
	if (ctx.cr6.eq) goto loc_8815EB0C;
loc_8815EAEC:
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r28,3956(r27)
	ctx.current_instruction = 0x8815EAF0;
	REX_STORE_U32(ctx.r27.u32 + 3956, ctx.r28.u32);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,3712(r27)
	ctx.current_instruction = 0x8815EAF8;
	REX_STORE_U32(ctx.r27.u32 + 3712, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,3716(r27)
	ctx.current_instruction = 0x8815EB00;
	REX_STORE_U32(ctx.r27.u32 + 3716, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8815EB0C:
	// lwz r11,3712(r27)
	ctx.current_instruction = 0x8815EB0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8815eb1c
	if (!ctx.cr6.eq) goto loc_8815EB1C;
	// stw r30,3712(r27)
	ctx.current_instruction = 0x8815EB18;
	REX_STORE_U32(ctx.r27.u32 + 3712, ctx.r30.u32);
loc_8815EB1C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EB1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,11
	ctx.r30.s64 = 11;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x8815eb8c
	if (!ctx.cr6.lt) goto loc_8815EB8C;
loc_8815EB34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815eb8c
	if (ctx.cr6.eq) goto loc_8815EB8C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EB40;
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
	ctx.current_instruction = 0x8815EB64;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EB6C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815eb7c
	if (!ctx.cr0.lt) goto loc_8815EB7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EB7C;
	sub_88156678(ctx, base);
loc_8815EB7C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EB7C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815eb34
	if (ctx.cr6.gt) goto loc_8815EB34;
loc_8815EB8C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815EB90;
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
	ctx.current_instruction = 0x8815EBA8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EBB4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815ebc4
	if (!ctx.cr0.lt) goto loc_8815EBC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EBC4;
	sub_88156678(ctx, base);
loc_8815EBC4:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// stw r30,3716(r27)
	ctx.current_instruction = 0x8815EBC8;
	REX_STORE_U32(ctx.r27.u32 + 3716, ctx.r30.u32);
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// stw r30,-11664(r11)
	ctx.current_instruction = 0x8815EBD0;
	REX_STORE_U32(ctx.r11.u32 + -11664, ctx.r30.u32);
	// lwz r11,3712(r27)
	ctx.current_instruction = 0x8815EBD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 3712);
	// stw r11,-11660(r10)
	ctx.current_instruction = 0x8815EBD8;
	REX_STORE_U32(ctx.r10.u32 + -11660, ctx.r11.u32);
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8815EBDC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,20(r31)
	ctx.current_instruction = 0x8815EBE0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8815eaec
	if (!ctx.cr6.eq) goto loc_8815EAEC;
	// lwz r11,15536(r27)
	ctx.current_instruction = 0x8815EBEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 15536);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8815eca4
	if (ctx.cr6.eq) goto loc_8815ECA4;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EBF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8815ec68
	if (!ctx.cr6.lt) goto loc_8815EC68;
loc_8815EC10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815ec68
	if (ctx.cr6.eq) goto loc_8815EC68;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8815EC1C;
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
	ctx.current_instruction = 0x8815EC40;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8815EC48;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8815ec58
	if (!ctx.cr0.lt) goto loc_8815EC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815EC58;
	sub_88156678(ctx, base);
loc_8815EC58:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8815EC58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8815ec10
	if (ctx.cr6.gt) goto loc_8815EC10;
loc_8815EC68:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8815EC6C;
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
	ctx.current_instruction = 0x8815EC84;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8815EC90;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8815eca0
	if (!ctx.cr0.lt) goto loc_8815ECA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8815ECA0;
	sub_88156678(ctx, base);
loc_8815ECA0:
	// stw r30,3956(r27)
	ctx.current_instruction = 0x8815ECA0;
	REX_STORE_U32(ctx.r27.u32 + 3956, ctx.r30.u32);
loc_8815ECA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8816E4A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8816E4A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8816E4A8) {
			switch (rex_dispatch_address) {
				case 0x8816E4B0:
				case 0x8816E4E4:
				case 0x8816E594:
				case 0x8816E5DC:
				case 0x8816E6A8:
				case 0x8816E6F0:
				case 0x8816E788:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8816E4A8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8816E4B0: goto loc_8816E4B0;
		case 0x8816E4E4: goto loc_8816E4E4;
		case 0x8816E594: goto loc_8816E594;
		case 0x8816E5DC: goto loc_8816E5DC;
		case 0x8816E6A8: goto loc_8816E6A8;
		case 0x8816E6F0: goto loc_8816E6F0;
		case 0x8816E788: goto loc_8816E788;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8816E4B0;
	__savegprlr_25(ctx, base);
loc_8816E4B0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8816E4B0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8816E4B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816E4CC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// srd r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.current_instruction = 0x8816E4DC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x88156500
	ctx.lr = 0x8816E4E4;
	sub_88156500(ctx, base);
loc_8816E4E4:
	// lbz r11,1(r30)
	ctx.current_instruction = 0x8816E4E4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8816e4f8
	if (!ctx.cr6.eq) goto loc_8816E4F8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20(r31)
	ctx.current_instruction = 0x8816E4F4;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8816E4F8:
	// lwz r31,84(r27)
	ctx.current_instruction = 0x8816E4F8;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,20(r31)
	ctx.current_instruction = 0x8816E504;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8816e704
	if (!ctx.cr6.eq) goto loc_8816E704;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8816e790
	if (ctx.cr6.eq) goto loc_8816E790;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E51C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x8816e648
	if (ctx.cr6.gt) goto loc_8816E648;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// ble cr6,0x8816e544
	if (!ctx.cr6.gt) goto loc_8816E544;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8816e5e0
	goto loc_8816E5E0;
loc_8816E544:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816e5a4
	if (!ctx.cr6.gt) goto loc_8816E5A4;
loc_8816E54C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816e5a4
	if (ctx.cr6.eq) goto loc_8816E5A4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816E558;
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
	ctx.current_instruction = 0x8816E57C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816E584;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816e594
	if (!ctx.cr0.lt) goto loc_8816E594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E594;
	sub_88156678(ctx, base);
loc_8816E594:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E594;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816e54c
	if (ctx.cr6.gt) goto loc_8816E54C;
loc_8816E5A4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816E5A8;
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
	ctx.current_instruction = 0x8816E5C0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816E5CC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816e5dc
	if (!ctx.cr0.lt) goto loc_8816E5DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E5DC;
	sub_88156678(ctx, base);
loc_8816E5DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8816E5E0:
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816E5E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816E5E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8816e704
	if (!ctx.cr6.eq) goto loc_8816E704;
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// stw r26,0(r25)
	ctx.current_instruction = 0x8816E5F8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8816e638
	if (!ctx.cr6.eq) goto loc_8816E638;
	// subfic r10,r28,8
	ctx.xer.ca = ctx.r28.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r28.u64;
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x8816E618;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// li r8,255
	ctx.r8.s64 = 255;
	// sraw r7,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// andc r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// stw r5,0(r9)
	ctx.current_instruction = 0x8816E62C;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816E638:
	// lwz r10,1764(r27)
	ctx.current_instruction = 0x8816E638;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r11,0(r10)
	ctx.current_instruction = 0x8816E63C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816E648:
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// ble cr6,0x8816e658
	if (!ctx.cr6.gt) goto loc_8816E658;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8816e6f4
	goto loc_8816E6F4;
loc_8816E658:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8816e6b8
	if (!ctx.cr6.gt) goto loc_8816E6B8;
loc_8816E660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816e6b8
	if (ctx.cr6.eq) goto loc_8816E6B8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x8816E66C;
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
	ctx.current_instruction = 0x8816E690;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816E698;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816e6a8
	if (!ctx.cr0.lt) goto loc_8816E6A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E6A8;
	sub_88156678(ctx, base);
loc_8816E6A8:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816E6A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816e660
	if (ctx.cr6.gt) goto loc_8816E660;
loc_8816E6B8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816E6BC;
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
	ctx.current_instruction = 0x8816E6D4;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x8816E6E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8816e6f0
	if (!ctx.cr0.lt) goto loc_8816E6F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816E6F0;
	sub_88156678(ctx, base);
loc_8816E6F0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8816E6F4:
	// lwz r10,84(r27)
	ctx.current_instruction = 0x8816E6F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.current_instruction = 0x8816E6F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8816e71c
	if (ctx.cr6.eq) goto loc_8816E71C;
loc_8816E704:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x8816E708;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,1764(r27)
	ctx.current_instruction = 0x8816E70C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r26,0(r10)
	ctx.current_instruction = 0x8816E710;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816E71C:
	// addi r10,r28,-1
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// stw r26,0(r25)
	ctx.current_instruction = 0x8816E720;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8816e75c
	if (!ctx.cr6.eq) goto loc_8816E75C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,1764(r27)
	ctx.current_instruction = 0x8816E73C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// subfic r8,r28,16
	ctx.xer.ca = ctx.r28.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r28.u64;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// sraw r6,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r6.s64 = ctx.r7.s32 >> temp.u32;
	// andc r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stw r4,0(r9)
	ctx.current_instruction = 0x8816E754;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// b 0x8816e764
	goto loc_8816E764;
loc_8816E75C:
	// lwz r10,1764(r27)
	ctx.current_instruction = 0x8816E75C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r11,0(r10)
	ctx.current_instruction = 0x8816E760;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8816E764:
	// lwz r3,84(r27)
	ctx.current_instruction = 0x8816E764;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 84);
	// ld r11,0(r3)
	ctx.current_instruction = 0x8816E768;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.current_instruction = 0x8816E76C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	ctx.current_instruction = 0x8816E778;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x8816E77C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8816e7a0
	if (!ctx.cr0.lt) goto loc_8816E7A0;
	// bl 0x88156678
	ctx.lr = 0x8816E788;
	sub_88156678(ctx, base);
loc_8816E788:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_8816E790:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r25)
	ctx.current_instruction = 0x8816E794;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// lwz r11,1764(r27)
	ctx.current_instruction = 0x8816E798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1764);
	// stw r26,0(r11)
	ctx.current_instruction = 0x8816E79C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8816E7A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88178F78) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88178F78;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88178F78) {
			switch (rex_dispatch_address) {
				case 0x88178F80:
				case 0x8817912C:
				case 0x88179148:
				case 0x88179160:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88178F78;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88178F80: goto loc_88178F80;
		case 0x8817912C: goto loc_8817912C;
		case 0x88179148: goto loc_88179148;
		case 0x88179160: goto loc_88179160;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88178F80;
	__savegprlr_23(ctx, base);
loc_88178F80:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88178F80;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r9,40(r3)
	ctx.current_instruction = 0x88178F88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r7,36(r3)
	ctx.current_instruction = 0x88178F94;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r3,80(r1)
	ctx.current_instruction = 0x88178FA4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f6,80(r1)
	ctx.current_instruction = 0x88178FA8;
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	ctx.current_instruction = 0x88178FAC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f5,80(r1)
	ctx.current_instruction = 0x88178FB0;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,44(r11)
	ctx.current_instruction = 0x88178FB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lfs f7,48(r11)
	ctx.current_instruction = 0x88178FC8;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// std r3,80(r1)
	ctx.current_instruction = 0x88178FCC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f4,80(r1)
	ctx.current_instruction = 0x88178FD0;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lfd f12,13824(r9)
	ctx.current_instruction = 0x88178FE0;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 13824);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// fmul f12,f3,f12
	ctx.f12.f64 = ctx.f3.f64 * ctx.f12.f64;
	// lis r6,-30719
	ctx.r6.s64 = -2013200384;
	// lis r7,-30719
	ctx.r7.s64 = -2013200384;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r3,-30720
	ctx.r3.s64 = -2013265920;
	// lfd f13,20088(r8)
	ctx.current_instruction = 0x88178FFC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + 20088);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lfd f0,20080(r6)
	ctx.current_instruction = 0x88179004;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 20080);
	// fmul f5,f1,f13
	ctx.f5.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fmul f6,f2,f0
	ctx.f6.f64 = ctx.f2.f64 * ctx.f0.f64;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lfd f11,20072(r7)
	ctx.current_instruction = 0x88179014;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20072);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfd f8,13816(r9)
	ctx.current_instruction = 0x8817901C;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r9.u32 + 13816);
	// lfd f0,13864(r8)
	ctx.current_instruction = 0x88179020;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 13864);
	// lfd f9,13856(r3)
	ctx.current_instruction = 0x88179024;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r3.u32 + 13856);
	// lfd f10,13808(r6)
	ctx.current_instruction = 0x88179028;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r6.u32 + 13808);
	// fmadd f4,f2,f10,f12
	ctx.f4.f64 = std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f12.f64);
	// fmsub f12,f2,f0,f5
	ctx.f12.f64 = std::fma(ctx.f2.f64, ctx.f0.f64, -ctx.f5.f64);
	// fmadd f13,f1,f11,f6
	ctx.f13.f64 = std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f6.f64);
	// fmadd f11,f1,f8,f4
	ctx.f11.f64 = std::fma(ctx.f1.f64, ctx.f8.f64, ctx.f4.f64);
	// fnmsub f9,f3,f9,f12
	ctx.f9.f64 = -std::fma(ctx.f3.f64, ctx.f9.f64, -ctx.f12.f64);
	// fmsub f10,f3,f0,f13
	ctx.f10.f64 = std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f13.f64);
	// fmul f8,f11,f7
	ctx.f8.f64 = ctx.f11.f64 * ctx.f7.f64;
	// fmul f5,f9,f7
	ctx.f5.f64 = ctx.f9.f64 * ctx.f7.f64;
	// fmul f6,f10,f7
	ctx.f6.f64 = ctx.f10.f64 * ctx.f7.f64;
	// fctiwz f4,f8
	ctx.f4.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,80(r1)
	ctx.current_instruction = 0x88179054;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x88179058;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f5
	ctx.f2.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,88(r1)
	ctx.current_instruction = 0x88179060;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// fctiwz f3,f6
	ctx.f3.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f3,80(r1)
	ctx.current_instruction = 0x88179068;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r30,84(r1)
	ctx.current_instruction = 0x8817906C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,92(r1)
	ctx.current_instruction = 0x88179070;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// lwz r23,260(r1)
	ctx.current_instruction = 0x881790A8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// lwz r24,268(r1)
	ctx.current_instruction = 0x881790B4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8817916c
	if (ctx.cr6.eq) goto loc_8817916C;
	// lwz r8,4(r11)
	ctx.current_instruction = 0x881790C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// lwz r7,0(r11)
	ctx.current_instruction = 0x881790C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r31,r8,r7
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// ble cr6,0x881790dc
	if (!ctx.cr6.gt) goto loc_881790DC;
	// li r7,255
	ctx.r7.s64 = 255;
	// b 0x881790e8
	goto loc_881790E8;
loc_881790DC:
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_881790E8:
	// cmpwi cr6,r30,384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 384, ctx.xer);
	// ble cr6,0x881790f8
	if (!ctx.cr6.gt) goto loc_881790F8;
	// li r30,384
	ctx.r30.s64 = 384;
	// b 0x88179104
	goto loc_88179104;
loc_881790F8:
	// cmpwi cr6,r30,-384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -384, ctx.xer);
	// bge cr6,0x88179104
	if (!ctx.cr6.lt) goto loc_88179104;
	// li r30,-384
	ctx.r30.s64 = -384;
loc_88179104:
	// cmpwi cr6,r29,384
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 384, ctx.xer);
	// ble cr6,0x88179114
	if (!ctx.cr6.gt) goto loc_88179114;
	// li r29,384
	ctx.r29.s64 = 384;
	// b 0x88179120
	goto loc_88179120;
loc_88179114:
	// cmpwi cr6,r29,-384
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -384, ctx.xer);
	// bge cr6,0x88179120
	if (!ctx.cr6.lt) goto loc_88179120;
	// li r29,-384
	ctx.r29.s64 = -384;
loc_88179120:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x88176d18
	ctx.lr = 0x8817912C;
	sub_88176D18(ctx, base);
loc_8817912C:
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x88176da8
	ctx.lr = 0x88179148;
	sub_88176DA8(ctx, base);
loc_88179148:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88176da8
	ctx.lr = 0x88179160;
	sub_88176DA8(ctx, base);
loc_88179160:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8817916C:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8817BEA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8817BEA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8817BEA8) {
			switch (rex_dispatch_address) {
				case 0x8817BEB0:
				case 0x8817BF64:
				case 0x8817C004:
				case 0x8817C040:
				case 0x8817C05C:
				case 0x8817C1A8:
				case 0x8817C1E8:
				case 0x8817C224:
				case 0x8817C23C:
				case 0x8817C310:
				case 0x8817C340:
				case 0x8817C384:
				case 0x8817C3B4:
				case 0x8817C3F8:
				case 0x8817C428:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8817BEA8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8817BEB0: goto loc_8817BEB0;
		case 0x8817BF64: goto loc_8817BF64;
		case 0x8817C004: goto loc_8817C004;
		case 0x8817C040: goto loc_8817C040;
		case 0x8817C05C: goto loc_8817C05C;
		case 0x8817C1A8: goto loc_8817C1A8;
		case 0x8817C1E8: goto loc_8817C1E8;
		case 0x8817C224: goto loc_8817C224;
		case 0x8817C23C: goto loc_8817C23C;
		case 0x8817C310: goto loc_8817C310;
		case 0x8817C340: goto loc_8817C340;
		case 0x8817C384: goto loc_8817C384;
		case 0x8817C3B4: goto loc_8817C3B4;
		case 0x8817C3F8: goto loc_8817C3F8;
		case 0x8817C428: goto loc_8817C428;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x8817BEB0;
	__savegprlr_18(ctx, base);
loc_8817BEB0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x8817BEB0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8817c434
	if (!ctx.cr6.gt) goto loc_8817C434;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8817c434
	if (!ctx.cr6.gt) goto loc_8817C434;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8817bef0
	if (!ctx.cr6.gt) goto loc_8817BEF0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
loc_8817BEF0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r19,308(r1)
	ctx.current_instruction = 0x8817BF00;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r20,316(r1)
	ctx.current_instruction = 0x8817BF0C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r21,324(r1)
	ctx.current_instruction = 0x8817BF18;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r24,332(r1)
	ctx.current_instruction = 0x8817BF24;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r25,340(r1)
	ctx.current_instruction = 0x8817BF30;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r26,348(r1)
	ctx.current_instruction = 0x8817BF3C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// lwz r27,356(r1)
	ctx.current_instruction = 0x8817BF48;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8817c434
	if (ctx.cr6.eq) goto loc_8817C434;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88177cf0
	ctx.lr = 0x8817BF64;
	sub_88177CF0(ctx, base);
loc_8817BF64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8817c438
	if (!ctx.cr6.eq) goto loc_8817C438;
	// addi r18,r18,-11
	ctx.r18.s64 = ctx.r18.s64 + -11;
	// stw r29,0(r31)
	ctx.current_instruction = 0x8817BF70;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	ctx.current_instruction = 0x8817BF74;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r18,20
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 20, ctx.xer);
	// bgt cr6,0x8817c434
	if (ctx.cr6.gt) goto loc_8817C434;
	// lis r12,-30696
	ctx.r12.s64 = -2011693056;
	// rlwinm r0,r18,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16488
	ctx.r12.s64 = ctx.r12.s64 + -16488;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x8817BF8C;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r18.u32) {
	case 0:
		goto loc_8817BFEC;
	case 1:
		goto loc_8817C02C;
	case 2:
		goto loc_8817C434;
	case 3:
		goto loc_8817C044;
	case 4:
		goto loc_8817C044;
	case 5:
		goto loc_8817C084;
	case 6:
		goto loc_8817C044;
	case 7:
		goto loc_8817C14C;
	case 8:
		goto loc_8817C1D0;
	case 9:
		goto loc_8817C190;
	case 10:
		goto loc_8817C434;
	case 11:
		goto loc_8817C434;
	case 12:
		goto loc_8817C1D0;
	case 13:
		goto loc_8817C1D0;
	case 14:
		goto loc_8817C434;
	case 15:
		goto loc_8817C434;
	case 16:
		goto loc_8817C1D0;
	case 17:
		goto loc_8817C434;
	case 18:
		goto loc_8817C1D0;
	case 19:
		goto loc_8817C210;
	case 20:
		goto loc_8817C228;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8817BFEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.current_instruction = 0x8817BFF0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817BFF4;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817BFF8;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817BFFC;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x88179178
	ctx.lr = 0x8817C004;
	sub_88179178(ctx, base);
loc_8817C004:
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C008;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,12
	ctx.r10.s64 = 12;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r11
	ctx.current_instruction = 0x8817C014;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,4(r30)
	ctx.current_instruction = 0x8817C018;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	ctx.current_instruction = 0x8817C020;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,16(r30)
	ctx.current_instruction = 0x8817C024;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8817c260
	goto loc_8817C260;
loc_8817C02C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817C030;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817C034;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817C038;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x88179738
	ctx.lr = 0x8817C040;
	sub_88179738(ctx, base);
loc_8817C040:
	// b 0x8817c23c
	goto loc_8817C23C;
loc_8817C044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.current_instruction = 0x8817C048;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817C04C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817C050;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817C054;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x88179a88
	ctx.lr = 0x8817C05C;
	sub_88179A88(ctx, base);
loc_8817C05C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C060;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,12
	ctx.r10.s64 = 12;
	// stfiwx f13,r31,r11
	ctx.current_instruction = 0x8817C06C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,4(r30)
	ctx.current_instruction = 0x8817C070;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	ctx.current_instruction = 0x8817C078;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,16(r30)
	ctx.current_instruction = 0x8817C07C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8817c260
	goto loc_8817C260;
loc_8817C084:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C088;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lfs f13,6732(r11)
	ctx.current_instruction = 0x8817C090;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20160(r10)
	ctx.current_instruction = 0x8817C094;
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20160);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8817c0a8
	if (!ctx.cr6.lt) goto loc_8817C0A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8817c0c4
	goto loc_8817C0C4;
loc_8817C0A8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8817c0b8
	if (!ctx.cr6.gt) goto loc_8817C0B8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8817c0c4
	goto loc_8817C0C4;
loc_8817C0B8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	ctx.current_instruction = 0x8817C0BC;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8817C0C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8817C0C4:
	// stw r11,36(r31)
	ctx.current_instruction = 0x8817C0C4;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f0,4(r30)
	ctx.current_instruction = 0x8817C0C8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8817c0dc
	if (!ctx.cr6.lt) goto loc_8817C0DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8817c0f8
	goto loc_8817C0F8;
loc_8817C0DC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8817c0ec
	if (!ctx.cr6.gt) goto loc_8817C0EC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8817c0f8
	goto loc_8817C0F8;
loc_8817C0EC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	ctx.current_instruction = 0x8817C0F0;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8817C0F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8817C0F8:
	// stw r11,40(r31)
	ctx.current_instruction = 0x8817C0F8;
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f0,8(r30)
	ctx.current_instruction = 0x8817C0FC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8817c110
	if (!ctx.cr6.lt) goto loc_8817C110;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8817c12c
	goto loc_8817C12C;
loc_8817C110:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8817c120
	if (!ctx.cr6.gt) goto loc_8817C120;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8817c12c
	goto loc_8817C12C;
loc_8817C120:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	ctx.current_instruction = 0x8817C124;
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.current_instruction = 0x8817C128;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8817C12C:
	// stw r11,44(r31)
	ctx.current_instruction = 0x8817C12C;
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lfs f0,12(r30)
	ctx.current_instruction = 0x8817C130;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	ctx.current_instruction = 0x8817C134;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,16(r30)
	ctx.current_instruction = 0x8817C138;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,16
	ctx.r12.s64 = 16;
	// stfiwx f12,r31,r12
	ctx.current_instruction = 0x8817C144;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f12.u32);
	// b 0x8817c26c
	goto loc_8817C26C;
loc_8817C14C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C150;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,12
	ctx.r10.s64 = 12;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r11
	ctx.current_instruction = 0x8817C15C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,4(r30)
	ctx.current_instruction = 0x8817C160;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	ctx.current_instruction = 0x8817C168;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,8(r30)
	ctx.current_instruction = 0x8817C16C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r31)
	ctx.current_instruction = 0x8817C170;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,12(r30)
	ctx.current_instruction = 0x8817C174;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r31)
	ctx.current_instruction = 0x8817C178;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f8,16(r30)
	ctx.current_instruction = 0x8817C17C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r12,16
	ctx.r12.s64 = 16;
	// stfiwx f7,r31,r12
	ctx.current_instruction = 0x8817C188;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f7.u32);
	// b 0x8817c26c
	goto loc_8817C26C;
loc_8817C190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.current_instruction = 0x8817C194;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817C198;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817C19C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817C1A0;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8817a068
	ctx.lr = 0x8817C1A8;
	sub_8817A068(ctx, base);
loc_8817C1A8:
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C1AC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,12
	ctx.r10.s64 = 12;
	// stfiwx f13,r31,r11
	ctx.current_instruction = 0x8817C1B8;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,4(r30)
	ctx.current_instruction = 0x8817C1BC;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	ctx.current_instruction = 0x8817C1C4;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,16(r30)
	ctx.current_instruction = 0x8817C1C8;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8817c260
	goto loc_8817C260;
loc_8817C1D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,12(r30)
	ctx.current_instruction = 0x8817C1D4;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817C1D8;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817C1DC;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817C1E0;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8817a3a0
	ctx.lr = 0x8817C1E8;
	sub_8817A3A0(ctx, base);
loc_8817C1E8:
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C1EC;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,12
	ctx.r10.s64 = 12;
	// stfiwx f13,r31,r11
	ctx.current_instruction = 0x8817C1F8;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,4(r30)
	ctx.current_instruction = 0x8817C1FC;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	ctx.current_instruction = 0x8817C204;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,16(r30)
	ctx.current_instruction = 0x8817C208;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8817c260
	goto loc_8817C260;
loc_8817C210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817C214;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817C218;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817C21C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8817a760
	ctx.lr = 0x8817C224;
	sub_8817A760(ctx, base);
loc_8817C224:
	// b 0x8817c23c
	goto loc_8817C23C;
loc_8817C228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,8(r30)
	ctx.current_instruction = 0x8817C22C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	ctx.current_instruction = 0x8817C230;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	ctx.current_instruction = 0x8817C234;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8817b290
	ctx.lr = 0x8817C23C;
	sub_8817B290(ctx, base);
loc_8817C23C:
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f0,0(r30)
	ctx.current_instruction = 0x8817C240;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r10,12
	ctx.r10.s64 = 12;
	// stfiwx f13,r31,r11
	ctx.current_instruction = 0x8817C24C;
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
	// lfs f12,4(r30)
	ctx.current_instruction = 0x8817C250;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	ctx.current_instruction = 0x8817C258;
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,12(r30)
	ctx.current_instruction = 0x8817C25C;
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
loc_8817C260:
	// fctiwz f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,16
	ctx.r12.s64 = 16;
	// stfiwx f9,r31,r12
	ctx.current_instruction = 0x8817C268;
	REX_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f9.u32);
loc_8817C26C:
	// lis r12,-30696
	ctx.r12.s64 = -2011693056;
	// rlwinm r0,r18,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15740
	ctx.r12.s64 = ctx.r12.s64 + -15740;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x8817C278;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r18.u32) {
	case 0:
		goto loc_8817C2D8;
	case 1:
		goto loc_8817C2D8;
	case 2:
		goto loc_8817C434;
	case 3:
		goto loc_8817C2D8;
	case 4:
		goto loc_8817C2D8;
	case 5:
		goto loc_8817C3C0;
	case 6:
		goto loc_8817C2D8;
	case 7:
		goto loc_8817C34C;
	case 8:
		goto loc_8817C2D8;
	case 9:
		goto loc_8817C2D8;
	case 10:
		goto loc_8817C434;
	case 11:
		goto loc_8817C434;
	case 12:
		goto loc_8817C2D8;
	case 13:
		goto loc_8817C2D8;
	case 14:
		goto loc_8817C434;
	case 15:
		goto loc_8817C434;
	case 16:
		goto loc_8817C434;
	case 17:
		goto loc_8817C434;
	case 18:
		goto loc_8817C2D8;
	case 19:
		goto loc_8817C2D8;
	case 20:
		goto loc_8817C2D8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8817C2D8:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8817C2D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8817c31c
	if (ctx.cr6.eq) goto loc_8817C31C;
	// stw r27,92(r1)
	ctx.current_instruction = 0x8817C2EC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8817C2F4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x88177f88
	ctx.lr = 0x8817C310;
	sub_88177F88(ctx, base);
loc_8817C310:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8817C31C:
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r27,92(r1)
	ctx.current_instruction = 0x8817C320;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8817C328;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88177f88
	ctx.lr = 0x8817C340;
	sub_88177F88(ctx, base);
loc_8817C340:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8817C34C:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8817C34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8817c390
	if (ctx.cr6.eq) goto loc_8817C390;
	// stw r27,92(r1)
	ctx.current_instruction = 0x8817C360;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8817C368;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x88178bf8
	ctx.lr = 0x8817C384;
	sub_88178BF8(ctx, base);
loc_8817C384:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8817C390:
	// stw r26,84(r1)
	ctx.current_instruction = 0x8817C390;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r27,92(r1)
	ctx.current_instruction = 0x8817C398;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88178bf8
	ctx.lr = 0x8817C3B4;
	sub_88178BF8(ctx, base);
loc_8817C3B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8817C3C0:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x8817C3C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8817c404
	if (ctx.cr6.eq) goto loc_8817C404;
	// stw r27,92(r1)
	ctx.current_instruction = 0x8817C3D4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8817C3DC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x88178f78
	ctx.lr = 0x8817C3F8;
	sub_88178F78(ctx, base);
loc_8817C3F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8817C404:
	// stw r27,92(r1)
	ctx.current_instruction = 0x8817C404;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8817C40C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x88178f78
	ctx.lr = 0x8817C428;
	sub_88178F78(ctx, base);
loc_8817C428:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_8817C434:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8817C438:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88189840) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88189840;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88189840) {
			switch (rex_dispatch_address) {
				case 0x88189848:
				case 0x88189938:
				case 0x88189950:
				case 0x88189968:
				case 0x88189980:
				case 0x881899B0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88189840;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88189848: goto loc_88189848;
		case 0x88189938: goto loc_88189938;
		case 0x88189950: goto loc_88189950;
		case 0x88189968: goto loc_88189968;
		case 0x88189980: goto loc_88189980;
		case 0x881899B0: goto loc_881899B0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88189848;
	__savegprlr_23(ctx, base);
loc_88189848:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88189848;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x8818984C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88189864;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,16(r11)
	ctx.current_instruction = 0x88189870;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// lwz r23,244(r1)
	ctx.current_instruction = 0x881898A8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// blt cr6,0x881899c0
	if (ctx.cr6.lt) goto loc_881899C0;
	// lwz r11,36(r31)
	ctx.current_instruction = 0x881898B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x881898c4
	if (ctx.cr6.gt) goto loc_881898C4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881898C4:
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x881899c0
	if (ctx.cr6.gt) goto loc_881899C0;
	// lwz r11,40(r31)
	ctx.current_instruction = 0x881898D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x881898e0
	if (ctx.cr6.gt) goto loc_881898E0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881898E0:
	// add r10,r27,r7
	ctx.r10.u64 = ctx.r27.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x881899c0
	if (ctx.cr6.gt) goto loc_881899C0;
	// lwz r11,44(r31)
	ctx.current_instruction = 0x881898EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x881898fc
	if (ctx.cr6.gt) goto loc_881898FC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_881898FC:
	// add r10,r26,r24
	ctx.r10.u64 = ctx.r26.u64 + ctx.r24.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x881899c0
	if (ctx.cr6.gt) goto loc_881899C0;
	// lwz r11,48(r31)
	ctx.current_instruction = 0x88189908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x88189918
	if (ctx.cr6.gt) goto loc_88189918;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_88189918:
	// add r10,r25,r23
	ctx.r10.u64 = ctx.r25.u64 + ctx.r23.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x881899c0
	if (ctx.cr6.gt) goto loc_881899C0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r6,296(r31)
	ctx.current_instruction = 0x88189928;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 296);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88188368
	ctx.lr = 0x88189938;
	sub_88188368(ctx, base);
loc_88189938:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881899c0
	if (!ctx.cr6.eq) goto loc_881899C0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88188368
	ctx.lr = 0x88189950;
	sub_88188368(ctx, base);
loc_88189950:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881899c0
	if (!ctx.cr6.eq) goto loc_881899C0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88188368
	ctx.lr = 0x88189968;
	sub_88188368(ctx, base);
loc_88189968:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881899c0
	if (!ctx.cr6.eq) goto loc_881899C0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88188368
	ctx.lr = 0x88189980;
	sub_88188368(ctx, base);
loc_88189980:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881899c0
	if (!ctx.cr6.eq) goto loc_881899C0;
	// stw r29,4(r31)
	ctx.current_instruction = 0x88189988;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,8(r31)
	ctx.current_instruction = 0x88189990;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r26,20(r31)
	ctx.current_instruction = 0x88189994;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r25,24(r31)
	ctx.current_instruction = 0x88189998;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r28,12(r31)
	ctx.current_instruction = 0x8818999C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r7,16(r31)
	ctx.current_instruction = 0x881899A0;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r24,28(r31)
	ctx.current_instruction = 0x881899A4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r24.u32);
	// stw r23,32(r31)
	ctx.current_instruction = 0x881899A8;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// bl 0x881886a0
	ctx.lr = 0x881899B0;
	sub_881886A0(ctx, base);
loc_881899B0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881899C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88190C28) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88190C28;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88190C28) {
			switch (rex_dispatch_address) {
				case 0x88190C30:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88190C28;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x88190C30: goto loc_88190C30;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88190C30;
	__savegprlr_14(ctx, base);
loc_88190C30:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88190dec
	if (!ctx.cr6.eq) goto loc_88190DEC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r8,16(r3)
	ctx.current_instruction = 0x88190C3C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// mulli r9,r5,3811
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(3811));
	// lhz r16,2(r3)
	ctx.current_instruction = 0x88190C44;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r7,4(r3)
	ctx.current_instruction = 0x88190C48;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r6,32(r3)
	ctx.current_instruction = 0x88190C4C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// lhz r4,6(r3)
	ctx.current_instruction = 0x88190C50;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r31,48(r3)
	ctx.current_instruction = 0x88190C54;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 48);
	// lhz r27,22(r3)
	ctx.current_instruction = 0x88190C58;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// lhz r30,8(r3)
	ctx.current_instruction = 0x88190C5C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r29,64(r3)
	ctx.current_instruction = 0x88190C60;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 64);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lhz r28,20(r3)
	ctx.current_instruction = 0x88190C68;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r25,34(r3)
	ctx.current_instruction = 0x88190C70;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r24,50(r3)
	ctx.current_instruction = 0x88190C78;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mulli r26,r5,487
	ctx.r26.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(487));
	// lhz r23,10(r3)
	ctx.current_instruction = 0x88190C80;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// lhz r22,80(r3)
	ctx.current_instruction = 0x88190C84;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// lhz r21,12(r3)
	ctx.current_instruction = 0x88190C88;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r20,96(r3)
	ctx.current_instruction = 0x88190C8C;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 96);
	// lhz r19,26(r3)
	ctx.current_instruction = 0x88190C90;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// lhz r18,82(r3)
	ctx.current_instruction = 0x88190C94;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r3.u32 + 82);
	// lhz r17,14(r3)
	ctx.current_instruction = 0x88190C98;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r15,112(r3)
	ctx.current_instruction = 0x88190C9C;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r3.u32 + 112);
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// lhz r14,24(r3)
	ctx.current_instruction = 0x88190CA4;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// add r9,r26,r11
	ctx.r9.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r16,r10,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mulli r26,r5,506
	ctx.r26.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(506));
	// sth r16,2(r3)
	ctx.current_instruction = 0x88190CB8;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r16.u16);
	// stw r10,-160(r1)
	ctx.current_instruction = 0x88190CBC;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r6,r26,r11
	ctx.r6.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subf r26,r10,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// mulli r9,r5,135
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(135));
	// sth r26,4(r3)
	ctx.current_instruction = 0x88190CDC;
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r26.u16);
	// sth r7,32(r3)
	ctx.current_instruction = 0x88190CE0;
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r10,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r10.u64;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// sth r6,6(r3)
	ctx.current_instruction = 0x88190CF8;
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// mulli r7,r5,173
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(173));
	// sth r4,48(r3)
	ctx.current_instruction = 0x88190D00;
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r4.u16);
	// add r8,r27,r10
	ctx.r8.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lwz r27,-160(r1)
	ctx.current_instruction = 0x88190D08;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// sth r8,22(r3)
	ctx.current_instruction = 0x88190D14;
	REX_STORE_U16(ctx.r3.u32 + 22, ctx.r8.u16);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r29,r28,r10
	ctx.r29.u64 = ctx.r28.u64 + ctx.r10.u64;
	// mulli r7,r5,61
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(61));
	// sth r27,16(r3)
	ctx.current_instruction = 0x88190D24;
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r27.u16);
	// sth r29,20(r3)
	ctx.current_instruction = 0x88190D28;
	REX_STORE_U16(ctx.r3.u32 + 20, ctx.r29.u16);
	// lhz r29,18(r3)
	ctx.current_instruction = 0x88190D2C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// subf r31,r10,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r10.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// add r4,r25,r10
	ctx.r4.u64 = ctx.r25.u64 + ctx.r10.u64;
	// sth r31,8(r3)
	ctx.current_instruction = 0x88190D3C;
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r31.u16);
	// add r28,r24,r10
	ctx.r28.u64 = ctx.r24.u64 + ctx.r10.u64;
	// sth r30,64(r3)
	ctx.current_instruction = 0x88190D44;
	REX_STORE_U16(ctx.r3.u32 + 64, ctx.r30.u16);
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// lhz r31,72(r3)
	ctx.current_instruction = 0x88190D4C;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r30,66(r3)
	ctx.current_instruction = 0x88190D54;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 66);
	// mulli r27,r5,42
	ctx.r27.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(42));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mulli r5,r5,1084
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1084));
	// subf r26,r10,r23
	ctx.r26.u64 = ctx.r23.u64 - ctx.r10.u64;
	// subf r25,r10,r22
	ctx.r25.u64 = ctx.r22.u64 - ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// add r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r27,r19,r11
	ctx.r27.u64 = ctx.r19.u64 + ctx.r11.u64;
	// sth r4,34(r3)
	ctx.current_instruction = 0x88190D80;
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r4.u16);
	// add r23,r18,r11
	ctx.r23.u64 = ctx.r18.u64 + ctx.r11.u64;
	// sth r28,50(r3)
	ctx.current_instruction = 0x88190D88;
	REX_STORE_U16(ctx.r3.u32 + 50, ctx.r28.u16);
	// subf r22,r11,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r11.u64;
	// sth r26,10(r3)
	ctx.current_instruction = 0x88190D90;
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r26.u16);
	// subf r24,r11,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r11.u64;
	// sth r25,80(r3)
	ctx.current_instruction = 0x88190D98;
	REX_STORE_U16(ctx.r3.u32 + 80, ctx.r25.u16);
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// sth r22,12(r3)
	ctx.current_instruction = 0x88190DA0;
	REX_STORE_U16(ctx.r3.u32 + 12, ctx.r22.u16);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// sth r24,96(r3)
	ctx.current_instruction = 0x88190DA8;
	REX_STORE_U16(ctx.r3.u32 + 96, ctx.r24.u16);
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// sth r27,26(r3)
	ctx.current_instruction = 0x88190DB0;
	REX_STORE_U16(ctx.r3.u32 + 26, ctx.r27.u16);
	// subf r5,r11,r17
	ctx.r5.u64 = ctx.r17.u64 - ctx.r11.u64;
	// sth r23,82(r3)
	ctx.current_instruction = 0x88190DB8;
	REX_STORE_U16(ctx.r3.u32 + 82, ctx.r23.u16);
	// subf r31,r11,r15
	ctx.r31.u64 = ctx.r15.u64 - ctx.r11.u64;
	// add r6,r14,r11
	ctx.r6.u64 = ctx.r14.u64 + ctx.r11.u64;
	// sth r5,14(r3)
	ctx.current_instruction = 0x88190DC4;
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r31,112(r3)
	ctx.current_instruction = 0x88190DCC;
	REX_STORE_U16(ctx.r3.u32 + 112, ctx.r31.u16);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// sth r6,24(r3)
	ctx.current_instruction = 0x88190DD4;
	REX_STORE_U16(ctx.r3.u32 + 24, ctx.r6.u16);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r7,72(r3)
	ctx.current_instruction = 0x88190DDC;
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r7.u16);
	// sth r11,66(r3)
	ctx.current_instruction = 0x88190DE0;
	REX_STORE_U16(ctx.r3.u32 + 66, ctx.r11.u16);
	// sth r10,18(r3)
	ctx.current_instruction = 0x88190DE4;
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88190DEC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// ori r11,r4,32768
	ctx.r11.u64 = ctx.r4.u64 | 32768;
	// lwz r10,-11676(r10)
	ctx.current_instruction = 0x88190E04;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -11676);
	// li r8,3
	ctx.r8.s64 = 3;
	// mulli r9,r5,6269
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(6269));
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// mulli r31,r5,708
	ctx.r31.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(708));
	// slw r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lhzx r8,r9,r3
	ctx.current_instruction = 0x88190E3C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r31,5
	ctx.r31.s64 = 5;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// slw r4,r31,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r7.u8 & 0x3F));
	// sthx r6,r9,r3
	ctx.current_instruction = 0x88190E58;
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u16);
	// mulli r6,r5,172
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(172));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// mulli r5,r5,73
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(73));
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lhzx r6,r10,r3
	ctx.current_instruction = 0x88190E78;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// sthx r11,r10,r3
	ctx.current_instruction = 0x88190E88;
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r3
	ctx.current_instruction = 0x88190E90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// subf r7,r4,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// sthx r7,r9,r3
	ctx.current_instruction = 0x88190E9C;
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u16);
	// lhzx r4,r10,r3
	ctx.current_instruction = 0x88190EA0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// subf r11,r8,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r8.u64;
	// sthx r11,r10,r3
	ctx.current_instruction = 0x88190EA8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88197270) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88197270;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88197270) {
			switch (rex_dispatch_address) {
				case 0x881972B8:
				case 0x881972EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88197270;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881972B8: goto loc_881972B8;
		case 0x881972EC: goto loc_881972EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88197274;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88197278;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8819727C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,14864(r3)
	ctx.current_instruction = 0x88197280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14864);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881972bc
	if (!ctx.cr6.eq) goto loc_881972BC;
	// lwz r11,14860(r3)
	ctx.current_instruction = 0x88197290;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881972f4
	if (!ctx.cr6.eq) goto loc_881972F4;
	// lwz r11,216(r3)
	ctx.current_instruction = 0x8819729C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r10,208(r3)
	ctx.current_instruction = 0x881972A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r5,3796(r3)
	ctx.current_instruction = 0x881972A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r4,3792(r3)
	ctx.current_instruction = 0x881972AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// lwz r3,3788(r3)
	ctx.current_instruction = 0x881972B0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// bl 0x88197108
	ctx.lr = 0x881972B8;
	sub_88197108(ctx, base);
loc_881972B8:
	// b 0x881972ec
	goto loc_881972EC;
loc_881972BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881972f4
	if (!ctx.cr6.eq) goto loc_881972F4;
	// lwz r11,14860(r31)
	ctx.current_instruction = 0x881972C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881972f4
	if (!ctx.cr6.eq) goto loc_881972F4;
	// lwz r11,216(r31)
	ctx.current_instruction = 0x881972D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881972D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r5,3796(r31)
	ctx.current_instruction = 0x881972D8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r4,3792(r31)
	ctx.current_instruction = 0x881972E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r3,3788(r31)
	ctx.current_instruction = 0x881972E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// bl 0x881971c0
	ctx.lr = 0x881972EC;
	sub_881971C0(ctx, base);
loc_881972EC:
	// lwz r9,14860(r31)
	ctx.current_instruction = 0x881972EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14860);
	// stw r9,14864(r31)
	ctx.current_instruction = 0x881972F0;
	REX_STORE_U32(ctx.r31.u32 + 14864, ctx.r9.u32);
loc_881972F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881972F8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88197300;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88197FE8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88197FE8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88197FE8) {
			switch (rex_dispatch_address) {
				case 0x88197FF0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88197FE8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88197FF0: goto loc_88197FF0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88197FF0;
	__savegprlr_22(ctx, base);
loc_88197FF0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xF)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x88198328
	if (ctx.cr6.eq) goto loc_88198328;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x881982a8
	if (ctx.cr6.eq) goto loc_881982A8;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vor128 v7,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v6,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x4)));
	// lvlx128 v56,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-176
	ctx.r30.s64 = ctx.r1.s64 + -176;
	// lvrx128 v59,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v4,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v8,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v57,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v58,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v1,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,-144
	ctx.r29.s64 = ctx.r1.s64 + -144;
	// vor128 v10,v62,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// vslh v3,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// vslh v2,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r28,r1,-144
	ctx.r28.s64 = ctx.r1.s64 + -144;
	// vaddshs v5,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghh v7,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghh v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v24,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r25,r1,-192
	ctx.r25.s64 = ctx.r1.s64 + -192;
	// vaddshs v31,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v8,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r24,r1,-160
	ctx.r24.s64 = ctx.r1.s64 + -160;
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// subf r23,r7,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r7.u64;
	// vslh v28,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// subf r22,r3,r6
	ctx.r22.u64 = ctx.r6.u64 - ctx.r3.u64;
	// vsubshs v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vaddshs v27,v31,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vaddshs v26,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v21,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vsubshs v23,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v22,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v16,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v17,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v19,v23,v6
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v9,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v10,v17,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v15,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v11,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v10,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v13,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v55,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v54,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v11,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v52,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v10,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v53,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v55,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-176(r1)
	ctx.current_instruction = 0x8819814C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stvx128 v54,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-144(r1)
	ctx.current_instruction = 0x88198154;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v52,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-192(r1)
	ctx.current_instruction = 0x8819815C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stvx128 v53,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-156(r1)
	ctx.current_instruction = 0x88198164;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r25,-160(r1)
	ctx.current_instruction = 0x88198168;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r25,0(r22)
	ctx.current_instruction = 0x88198170;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r25.u32);
	// lwz r26,-172(r1)
	ctx.current_instruction = 0x88198174;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r25,-140(r1)
	ctx.current_instruction = 0x88198178;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r27,-188(r1)
	ctx.current_instruction = 0x8819817C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,0(r23)
	ctx.current_instruction = 0x88198180;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// stw r30,0(r6)
	ctx.current_instruction = 0x88198184;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stwx r29,r6,r7
	ctx.current_instruction = 0x88198188;
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r29.u32);
	// stw r28,4(r22)
	ctx.current_instruction = 0x8819818C;
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r28.u32);
	// stw r26,4(r23)
	ctx.current_instruction = 0x88198190;
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// stw r25,4(r6)
	ctx.current_instruction = 0x88198194;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r25.u32);
	// stw r27,4(r9)
	ctx.current_instruction = 0x88198198;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// bne cr6,0x88198548
	if (!ctx.cr6.eq) goto loc_88198548;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvlx128 v51,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// lvlx128 v50,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r31,r9
	ctx.r8.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvlx128 v49,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// lvrx128 v48,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// lvrx128 v47,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v13,v50,v48
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvlx128 v46,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvrx128 v45,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// lvrx128 v44,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v46,v45
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vor128 v10,v51,v44
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// vaddshs v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vaddshs v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// vaddshs v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r29,r1,-192
	ctx.r29.s64 = ctx.r1.s64 + -192;
	// vaddshs v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkshus128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v42,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v41,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stvx128 v43,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-144(r1)
	ctx.current_instruction = 0x88198254;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,-160(r1)
	ctx.current_instruction = 0x8819825C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-176(r1)
	ctx.current_instruction = 0x88198264;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stvx128 v40,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-188(r1)
	ctx.current_instruction = 0x8819826C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r30,-140(r1)
	ctx.current_instruction = 0x88198270;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r29,-156(r1)
	ctx.current_instruction = 0x88198278;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r28,-172(r1)
	ctx.current_instruction = 0x8819827C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,-192(r1)
	ctx.current_instruction = 0x88198280;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,0(r10)
	ctx.current_instruction = 0x88198284;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stwx r6,r10,r7
	ctx.current_instruction = 0x88198288;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r5,r3,r10
	ctx.current_instruction = 0x8819828C;
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r4,0(r11)
	ctx.current_instruction = 0x88198290;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r31,4(r10)
	ctx.current_instruction = 0x88198294;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r30,4(r9)
	ctx.current_instruction = 0x88198298;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// stw r29,4(r8)
	ctx.current_instruction = 0x8819829C;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// stw r28,4(r11)
	ctx.current_instruction = 0x881982A0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881982A8:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v38,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vor128 v12,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r10,r3,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r3.u64;
	// vor128 v11,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vaddshs v13,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v35,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v34,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-144(r1)
	ctx.current_instruction = 0x88198300;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-156(r1)
	ctx.current_instruction = 0x88198308;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r6,-140(r1)
	ctx.current_instruction = 0x8819830C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r5,-160(r1)
	ctx.current_instruction = 0x88198310;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stw r5,0(r10)
	ctx.current_instruction = 0x88198314;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stwx r9,r10,r7
	ctx.current_instruction = 0x88198318;
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r8,4(r10)
	ctx.current_instruction = 0x8819831C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r6,4(r11)
	ctx.current_instruction = 0x88198320;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_88198328:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88198548
	if (ctx.cr6.eq) goto loc_88198548;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// beq cr6,0x881983b4
	if (ctx.cr6.eq) goto loc_881983B4;
	// lvrx128 v32,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// lvlx128 v33,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// vor128 v13,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vaddshs v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v61,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-140(r1)
	ctx.current_instruction = 0x8819838C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r11,-144(r1)
	ctx.current_instruction = 0x88198390;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,0(r6)
	ctx.current_instruction = 0x88198398;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,-160(r1)
	ctx.current_instruction = 0x8819839C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r8,-156(r1)
	ctx.current_instruction = 0x881983A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// stwx r10,r6,r7
	ctx.current_instruction = 0x881983A4;
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r3,4(r6)
	ctx.current_instruction = 0x881983A8;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r8,4(r9)
	ctx.current_instruction = 0x881983AC;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_881983B4:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v58,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// vor128 v13,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vor128 v12,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vaddshs v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r1,-160
	ctx.r30.s64 = ctx.r1.s64 + -160;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vaddshs v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvrx128 v56,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vpkshus128 v52,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvlx128 v54,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v47,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-176
	ctx.r29.s64 = ctx.r1.s64 + -176;
	// stvx128 v13,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvrx128 v53,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// lvlx128 v49,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// addi r30,r1,-112
	ctx.r30.s64 = ctx.r1.s64 + -112;
	// lvrx128 v48,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v12,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v9,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvrx128 v46,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// lvlx128 v45,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v8,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vaddshs v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vpkshus128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// vpkshus128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r29,r1,-144
	ctx.r29.s64 = ctx.r1.s64 + -144;
	// vaddshs v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// vpkshus128 v44,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r4,r1,-176
	ctx.r4.s64 = ctx.r1.s64 + -176;
	// stvx128 v9,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// stvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v42,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v11,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v44,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r29,-192(r1)
	ctx.current_instruction = 0x881984C8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stvx128 v42,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-112
	ctx.r4.s64 = ctx.r1.s64 + -112;
	// lwz r30,-144(r1)
	ctx.current_instruction = 0x881984D4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r31,-176(r1)
	ctx.current_instruction = 0x881984DC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r28,-140(r1)
	ctx.current_instruction = 0x881984E4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vpkshus128 v43,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r3,-160(r1)
	ctx.current_instruction = 0x881984F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-128(r1)
	ctx.current_instruction = 0x881984FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stw r3,0(r6)
	ctx.current_instruction = 0x88198500;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stwx r31,r6,r7
	ctx.current_instruction = 0x88198504;
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r31.u32);
	// lwz r3,-156(r1)
	ctx.current_instruction = 0x88198508;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// stw r29,0(r11)
	ctx.current_instruction = 0x8819850C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r7,-172(r1)
	ctx.current_instruction = 0x88198510;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stw r4,0(r10)
	ctx.current_instruction = 0x88198514;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r31,-188(r1)
	ctx.current_instruction = 0x88198518;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r29,-112(r1)
	ctx.current_instruction = 0x8819851C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r4,-124(r1)
	ctx.current_instruction = 0x88198520;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// stw r29,0(r9)
	ctx.current_instruction = 0x88198524;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stw r30,0(r8)
	ctx.current_instruction = 0x88198528;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
	// stw r3,4(r6)
	ctx.current_instruction = 0x8819852C;
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r7,4(r5)
	ctx.current_instruction = 0x88198530;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r31,4(r11)
	ctx.current_instruction = 0x88198534;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r29,-108(r1)
	ctx.current_instruction = 0x88198538;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r4,4(r10)
	ctx.current_instruction = 0x8819853C;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r29,4(r9)
	ctx.current_instruction = 0x88198540;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stw r28,4(r8)
	ctx.current_instruction = 0x88198544;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
loc_88198548:
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B10E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B10E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B10E0) {
			switch (rex_dispatch_address) {
				case 0x881B10E8:
				case 0x881B1148:
				case 0x881B11CC:
				case 0x881B1240:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B10E0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B10E8: goto loc_881B10E8;
		case 0x881B1148: goto loc_881B1148;
		case 0x881B11CC: goto loc_881B11CC;
		case 0x881B1240: goto loc_881B1240;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881B10E8;
	__savegprlr_24(ctx, base);
loc_881B10E8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881B10E8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,276(r1)
	ctx.current_instruction = 0x881B10F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881b1184
	if (!ctx.cr6.gt) goto loc_881B1184;
	// lwz r27,260(r1)
	ctx.current_instruction = 0x881B1114;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r30,r11,r6
	ctx.r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_881B1120:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b1144
	if (!ctx.cr6.gt) goto loc_881B1144;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881B1134:
	// lbzx r9,r11,r31
	ctx.current_instruction = 0x881B1134;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x881B113C;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b1134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1134;
loc_881B1144:
	// bl 0x881b0d38
	ctx.lr = 0x881B1148;
	sub_881B0D38(ctx, base);
loc_881B1148:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b1178
	if (!ctx.cr6.gt) goto loc_881B1178;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_881B1160:
	// lwzu r8,4(r10)
	ctx.current_instruction = 0x881B1160;
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	ctx.current_instruction = 0x881B116C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x881b1160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1160;
loc_881B1178:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x881b1120
	if (!ctx.cr0.eq) goto loc_881B1120;
loc_881B1184:
	// lwz r29,252(r1)
	ctx.current_instruction = 0x881B1184;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r27,268(r1)
	ctx.current_instruction = 0x881B118C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,244(r1)
	ctx.current_instruction = 0x881B1190;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881b1208
	if (!ctx.cr6.gt) goto loc_881B1208;
	// subf r30,r28,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r28.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_881B11A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b11c8
	if (!ctx.cr6.gt) goto loc_881B11C8;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881B11B8:
	// lbzx r9,r11,r31
	ctx.current_instruction = 0x881B11B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x881B11C0;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b11b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B11B8;
loc_881B11C8:
	// bl 0x881b0d38
	ctx.lr = 0x881B11CC;
	sub_881B0D38(ctx, base);
loc_881B11CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b11fc
	if (!ctx.cr6.gt) goto loc_881B11FC;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_881B11E4:
	// lwzu r8,4(r10)
	ctx.current_instruction = 0x881B11E4;
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	ctx.current_instruction = 0x881B11F0;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x881b11e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B11E4;
loc_881B11FC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x881b11a4
	if (!ctx.cr0.eq) goto loc_881B11A4;
loc_881B1208:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881b127c
	if (!ctx.cr6.gt) goto loc_881B127C;
	// subf r30,r25,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r25.u64;
loc_881B1218:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b123c
	if (!ctx.cr6.gt) goto loc_881B123C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881B122C:
	// lbzx r9,r11,r31
	ctx.current_instruction = 0x881B122C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x881B1234;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x881b122c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B122C;
loc_881B123C:
	// bl 0x881b0d38
	ctx.lr = 0x881B1240;
	sub_881B0D38(ctx, base);
loc_881B1240:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x881b1270
	if (!ctx.cr6.gt) goto loc_881B1270;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_881B1258:
	// lwzu r8,4(r10)
	ctx.current_instruction = 0x881B1258;
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r31
	ctx.current_instruction = 0x881B1264;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bdnz 0x881b1258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B1258;
loc_881B1270:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x881b1218
	if (!ctx.cr0.eq) goto loc_881B1218;
loc_881B127C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B33E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B33E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B33E8) {
			switch (rex_dispatch_address) {
				case 0x881B33F0:
				case 0x881B3414:
				case 0x881B343C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B33E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B33F0: goto loc_881B33F0;
		case 0x881B3414: goto loc_881B3414;
		case 0x881B343C: goto loc_881B343C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881B33F0;
	__savegprlr_29(ctx, base);
loc_881B33F0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881B33F0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b344c
	if (ctx.cr6.eq) goto loc_881B344C;
	// lwz r3,8(r3)
	ctx.current_instruction = 0x881B3400;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3420
	if (ctx.cr6.eq) goto loc_881B3420;
loc_881B340C:
	// lwz r31,0(r3)
	ctx.current_instruction = 0x881B340C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8815ba70
	ctx.lr = 0x881B3414;
	sub_8815BA70(ctx, base);
loc_881B3414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881b340c
	if (!ctx.cr6.eq) goto loc_881B340C;
loc_881B3420:
	// lwz r3,0(r30)
	ctx.current_instruction = 0x881B3420;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,8(r30)
	ctx.current_instruction = 0x881B3428;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b3448
	if (ctx.cr6.eq) goto loc_881B3448;
loc_881B3434:
	// lwz r31,0(r3)
	ctx.current_instruction = 0x881B3434;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8815ba70
	ctx.lr = 0x881B343C;
	sub_8815BA70(ctx, base);
loc_881B343C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x881b3434
	if (!ctx.cr6.eq) goto loc_881B3434;
loc_881B3448:
	// stw r29,0(r30)
	ctx.current_instruction = 0x881B3448;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_881B344C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B3A88) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881B3A88);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B3A88;
	ctx.current_instruction = 0x881B3A88;
	PPCRegister temp{};
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881b3a9c
	if (ctx.cr6.lt) goto loc_881B3A9C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x881b3aa0
	goto loc_881B3AA0;
loc_881B3A9C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_881B3AA0:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x881b3ab0
	if (!ctx.cr6.gt) goto loc_881B3AB0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x881b3abc
	goto loc_881B3ABC;
loc_881B3AB0:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881b3abc
	if (!ctx.cr6.gt) goto loc_881B3ABC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_881B3ABC:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x881b3acc
	if (!ctx.cr6.gt) goto loc_881B3ACC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x881b3ad8
	goto loc_881B3AD8;
loc_881B3ACC:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881b3ad8
	if (!ctx.cr6.gt) goto loc_881B3AD8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_881B3AD8:
	// lwz r7,84(r1)
	ctx.current_instruction = 0x881B3AD8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881b3af0
	if (ctx.cr6.lt) goto loc_881B3AF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_881B3AF0:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x881b3b00
	if (!ctx.cr6.gt) goto loc_881B3B00;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x881b3b0c
	goto loc_881B3B0C;
loc_881B3B00:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881b3b0c
	if (!ctx.cr6.gt) goto loc_881B3B0C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_881B3B0C:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x881b3b1c
	if (!ctx.cr6.gt) goto loc_881B3B1C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x881b3b28
	goto loc_881B3B28;
loc_881B3B1C:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881b3b28
	if (!ctx.cr6.gt) goto loc_881B3B28;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_881B3B28:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x881b3b38
	if (!ctx.cr6.gt) goto loc_881B3B38;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x881b3b44
	goto loc_881B3B44;
loc_881B3B38:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881b3b44
	if (!ctx.cr6.gt) goto loc_881B3B44;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_881B3B44:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x881b3b54
	if (!ctx.cr6.gt) goto loc_881B3B54;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x881b3b60
	goto loc_881B3B60;
loc_881B3B54:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x881b3b60
	if (!ctx.cr6.gt) goto loc_881B3B60;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_881B3B60:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfc r10,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r9,r7,r11
	ctx.r9.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_881B56E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B56E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B56E8) {
			switch (rex_dispatch_address) {
				case 0x881B56F0:
				case 0x881B5718:
				case 0x881B5730:
				case 0x881B5764:
				case 0x881B57C4:
				case 0x881B57D8:
				case 0x881B57EC:
				case 0x881B5800:
				case 0x881B580C:
				case 0x881B5824:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B56E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B56F0: goto loc_881B56F0;
		case 0x881B5718: goto loc_881B5718;
		case 0x881B5730: goto loc_881B5730;
		case 0x881B5764: goto loc_881B5764;
		case 0x881B57C4: goto loc_881B57C4;
		case 0x881B57D8: goto loc_881B57D8;
		case 0x881B57EC: goto loc_881B57EC;
		case 0x881B5800: goto loc_881B5800;
		case 0x881B580C: goto loc_881B580C;
		case 0x881B5824: goto loc_881B5824;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x881B56F0;
	__savegprlr_25(ctx, base);
loc_881B56F0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881B56F0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.current_instruction = 0x881B56F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r5,r10,18168
	ctx.r5.s64 = ctx.r10.s64 + 18168;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8815e468
	ctx.lr = 0x881B5718;
	sub_8815E468(ctx, base);
loc_881B5718:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b5824
	if (ctx.cr6.eq) goto loc_881B5824;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x881B5730;
	sub_88052D90(ctx, base);
loc_881B5730:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r29)
	ctx.current_instruction = 0x881B5738;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,60(r29)
	ctx.current_instruction = 0x881B5740;
	REX_STORE_U32(ctx.r29.u32 + 60, ctx.r31.u32);
	// stw r31,4(r29)
	ctx.current_instruction = 0x881B5744;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// stw r11,72(r29)
	ctx.current_instruction = 0x881B574C;
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r10,64(r29)
	ctx.current_instruction = 0x881B5750;
	REX_STORE_U32(ctx.r29.u32 + 64, ctx.r10.u32);
loc_881B5754:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881b48f0
	ctx.lr = 0x881B5764;
	sub_881B48F0(ctx, base);
loc_881B5764:
	// stw r3,0(r30)
	ctx.current_instruction = 0x881B5764;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881b5790
	if (ctx.cr6.eq) goto loc_881B5790;
	// lwz r11,64(r29)
	ctx.current_instruction = 0x881B5770;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 64);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881b5754
	if (ctx.cr6.lt) goto loc_881B5754;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
loc_881B5790:
	// addic. r26,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r26.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x881b5818
	if (ctx.cr0.lt) goto loc_881B5818;
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_881B57A4:
	// lwz r31,0(r28)
	ctx.current_instruction = 0x881B57A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,24688(r27)
	ctx.current_instruction = 0x881B57A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24688);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x881b580c
	if (ctx.cr6.eq) goto loc_881B580C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,44(r31)
	ctx.current_instruction = 0x881B57BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x881b5a88
	ctx.lr = 0x881B57C4;
	sub_881B5A88(ctx, base);
loc_881B57C4:
	// lwz r4,44(r31)
	ctx.current_instruction = 0x881B57C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b57d8
	if (ctx.cr6.eq) goto loc_881B57D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B57D8;
	sub_8815E528(ctx, base);
loc_881B57D8:
	// lwz r4,48(r31)
	ctx.current_instruction = 0x881B57D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b57ec
	if (ctx.cr6.eq) goto loc_881B57EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B57EC;
	sub_8815E528(ctx, base);
loc_881B57EC:
	// lwz r4,40(r31)
	ctx.current_instruction = 0x881B57EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x881b5800
	if (ctx.cr6.eq) goto loc_881B5800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B5800;
	sub_8815E528(ctx, base);
loc_881B5800:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B580C;
	sub_8815E528(ctx, base);
loc_881B580C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x881b57a4
	if (!ctx.cr0.lt) goto loc_881B57A4;
loc_881B5818:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8815e528
	ctx.lr = 0x881B5824;
	sub_8815E528(ctx, base);
loc_881B5824:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881BD1C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881BD1C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881BD1C8) {
			switch (rex_dispatch_address) {
				case 0x881BD1D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881BD1C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881BD1D0: goto loc_881BD1D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881BD1D0;
	__savegprlr_14(ctx, base);
loc_881BD1D0:
	// addi r10,r1,-241
	ctx.r10.s64 = ctx.r1.s64 + -241;
	// lwz r11,256(r3)
	ctx.current_instruction = 0x881BD1D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stw r4,28(r1)
	ctx.current_instruction = 0x881BD1D8;
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r16,r10,0,0,27
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r16,-336(r1)
	ctx.current_instruction = 0x881BD1E4;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r16.u32);
	// beq cr6,0x881bd774
	if (ctx.cr6.eq) goto loc_881BD774;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x881bd310
	if (ctx.cr6.eq) goto loc_881BD310;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD204:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x881BD204;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x881BD208;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x881bd204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD204;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD228:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881BD228;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881BD22C;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881bd228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD228;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD24C:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881BD24C;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881BD250;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881bd24c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD24C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD270:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881BD270;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881BD274;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881bd270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD270;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD294:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881BD294;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881BD298;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881bd294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD294;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD2B8:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881BD2B8;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881BD2BC;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881bd2b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD2B8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD2DC:
	// lbzu r9,1(r8)
	ctx.current_instruction = 0x881BD2DC;
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ctx.current_instruction = 0x881BD2E0;
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x881bd2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD2DC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881BD300:
	// lbzu r9,1(r11)
	ctx.current_instruction = 0x881BD300;
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ctx.current_instruction = 0x881BD304;
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x881bd300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD300;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BD310:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bne cr6,0x881bd4e4
	if (!ctx.cr6.eq) goto loc_881BD4E4;
loc_881BD334:
	// lbz r5,0(r10)
	ctx.current_instruction = 0x881BD334;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,-1(r10)
	ctx.current_instruction = 0x881BD338;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r4,-2(r10)
	ctx.current_instruction = 0x881BD33C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lbzx r3,r8,r9
	ctx.current_instruction = 0x881BD344;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD360;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-2(r9)
	ctx.current_instruction = 0x881BD364;
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r7.u8);
	// lbz r4,2(r10)
	ctx.current_instruction = 0x881BD368;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,-1(r10)
	ctx.current_instruction = 0x881BD36C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r5,r8,r9
	ctx.current_instruction = 0x881BD370;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x881BD374;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD394;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-1(r9)
	ctx.current_instruction = 0x881BD398;
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// lbz r4,3(r10)
	ctx.current_instruction = 0x881BD39C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,0(r10)
	ctx.current_instruction = 0x881BD3A0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x881BD3A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbzx r7,r8,r9
	ctx.current_instruction = 0x881BD3A8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD3C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,0(r9)
	ctx.current_instruction = 0x881BD3CC;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbz r4,4(r10)
	ctx.current_instruction = 0x881BD3D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r3,r8,r9
	ctx.current_instruction = 0x881BD3D4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BD3D8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,2(r10)
	ctx.current_instruction = 0x881BD3DC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD3FC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,1(r9)
	ctx.current_instruction = 0x881BD400;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// lbz r4,5(r10)
	ctx.current_instruction = 0x881BD404;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r3,2(r10)
	ctx.current_instruction = 0x881BD408;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,4(r10)
	ctx.current_instruction = 0x881BD40C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,3(r10)
	ctx.current_instruction = 0x881BD410;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD430;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	ctx.current_instruction = 0x881BD434;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// lbz r4,6(r10)
	ctx.current_instruction = 0x881BD438;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r3,3(r10)
	ctx.current_instruction = 0x881BD43C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,5(r10)
	ctx.current_instruction = 0x881BD440;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,4(r10)
	ctx.current_instruction = 0x881BD444;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD464;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	ctx.current_instruction = 0x881BD468;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// lbz r5,6(r10)
	ctx.current_instruction = 0x881BD46C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,5(r10)
	ctx.current_instruction = 0x881BD470;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,7(r10)
	ctx.current_instruction = 0x881BD47C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,4(r10)
	ctx.current_instruction = 0x881BD480;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD498;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,4(r9)
	ctx.current_instruction = 0x881BD49C;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// lbz r3,8(r10)
	ctx.current_instruction = 0x881BD4A0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r4,5(r10)
	ctx.current_instruction = 0x881BD4A4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,7(r10)
	ctx.current_instruction = 0x881BD4A8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r7,6(r10)
	ctx.current_instruction = 0x881BD4AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD4D0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,5(r9)
	ctx.current_instruction = 0x881BD4D4;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x881bd334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD334;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BD4E4:
	// lbz r5,-1(r10)
	ctx.current_instruction = 0x881BD4E4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x881BD4E8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,-2(r10)
	ctx.current_instruction = 0x881BD4EC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r3,r9,r8
	ctx.current_instruction = 0x881BD4F4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD510;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-2(r9)
	ctx.current_instruction = 0x881BD514;
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,0(r10)
	ctx.current_instruction = 0x881BD51C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD52C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,-2(r9)
	ctx.current_instruction = 0x881BD530;
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r3.u8);
	// lbz r4,2(r10)
	ctx.current_instruction = 0x881BD534;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,-1(r10)
	ctx.current_instruction = 0x881BD538;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,0(r10)
	ctx.current_instruction = 0x881BD53C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r9,r8
	ctx.current_instruction = 0x881BD540;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD560;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,-1(r9)
	ctx.current_instruction = 0x881BD564;
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r5,r9,r8
	ctx.current_instruction = 0x881BD56C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD57C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,-1(r9)
	ctx.current_instruction = 0x881BD580;
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r3.u8);
	// lbz r4,3(r10)
	ctx.current_instruction = 0x881BD584;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r3,0(r10)
	ctx.current_instruction = 0x881BD588;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r9,r8
	ctx.current_instruction = 0x881BD58C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbz r7,2(r10)
	ctx.current_instruction = 0x881BD590;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD5B0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,0(r9)
	ctx.current_instruction = 0x881BD5B4;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.current_instruction = 0x881BD5B8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,0(r9)
	ctx.current_instruction = 0x881BD5BC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD5CC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,0(r9)
	ctx.current_instruction = 0x881BD5D0;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lbz r4,4(r10)
	ctx.current_instruction = 0x881BD5D4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r3,r9,r8
	ctx.current_instruction = 0x881BD5D8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x881BD5DC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,3(r10)
	ctx.current_instruction = 0x881BD5E0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD600;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,1(r9)
	ctx.current_instruction = 0x881BD604;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BD60C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD61C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,1(r9)
	ctx.current_instruction = 0x881BD620;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r3.u8);
	// lbz r7,4(r10)
	ctx.current_instruction = 0x881BD624;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BD628;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,5(r10)
	ctx.current_instruction = 0x881BD62C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r3,2(r10)
	ctx.current_instruction = 0x881BD634;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD650;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,2(r9)
	ctx.current_instruction = 0x881BD654;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,4(r10)
	ctx.current_instruction = 0x881BD65C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD66C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,2(r9)
	ctx.current_instruction = 0x881BD670;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbz r3,6(r10)
	ctx.current_instruction = 0x881BD674;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r4,3(r10)
	ctx.current_instruction = 0x881BD678;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,4(r10)
	ctx.current_instruction = 0x881BD67C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r7,5(r10)
	ctx.current_instruction = 0x881BD680;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// subf r7,r4,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD6A0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	ctx.current_instruction = 0x881BD6A4;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,5(r10)
	ctx.current_instruction = 0x881BD6AC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD6BC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,3(r9)
	ctx.current_instruction = 0x881BD6C0;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r3.u8);
	// lbz r4,7(r10)
	ctx.current_instruction = 0x881BD6C4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r3,4(r10)
	ctx.current_instruction = 0x881BD6C8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,5(r10)
	ctx.current_instruction = 0x881BD6CC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r7,6(r10)
	ctx.current_instruction = 0x881BD6D0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD6F0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,4(r9)
	ctx.current_instruction = 0x881BD6F4;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,6(r10)
	ctx.current_instruction = 0x881BD6FC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD70C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,4(r9)
	ctx.current_instruction = 0x881BD710;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r3.u8);
	// lbz r4,8(r10)
	ctx.current_instruction = 0x881BD714;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r3,5(r10)
	ctx.current_instruction = 0x881BD718;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r5,6(r10)
	ctx.current_instruction = 0x881BD71C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,7(r10)
	ctx.current_instruction = 0x881BD720;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r4,r7,8
	ctx.r4.s64 = ctx.r7.s64 + 8;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// lbzx r7,r3,r11
	ctx.current_instruction = 0x881BD740;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r7,5(r9)
	ctx.current_instruction = 0x881BD744;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,7(r10)
	ctx.current_instruction = 0x881BD74C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BD760;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r3,5(r9)
	ctx.current_instruction = 0x881BD764;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x881bd4e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD4E4;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BD774:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// beq cr6,0x881bde50
	if (ctx.cr6.eq) goto loc_881BDE50;
	// subf r7,r6,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,-324(r1)
	ctx.current_instruction = 0x881BD784;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r31,r6,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// bne cr6,0x881bd980
	if (!ctx.cr6.eq) goto loc_881BD980;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r30,r6,2
	ctx.r30.s64 = ctx.r6.s64 + 2;
	// addi r29,r6,3
	ctx.r29.s64 = ctx.r6.s64 + 3;
	// addi r28,r6,4
	ctx.r28.s64 = ctx.r6.s64 + 4;
	// addi r27,r6,5
	ctx.r27.s64 = ctx.r6.s64 + 5;
	// addi r26,r6,-2
	ctx.r26.s64 = ctx.r6.s64 + -2;
loc_881BD7C8:
	// lbz r5,-2(r10)
	ctx.current_instruction = 0x881BD7C8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// lbzx r7,r10,r26
	ctx.current_instruction = 0x881BD7CC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// lbz r25,-2(r9)
	ctx.current_instruction = 0x881BD7D0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -2);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r24,0(r31)
	ctx.current_instruction = 0x881BD7D8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.current_instruction = 0x881BD7F4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,-2(r8)
	ctx.current_instruction = 0x881BD7F8;
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r7.u8);
	// lbz r25,-1(r9)
	ctx.current_instruction = 0x881BD7FC;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// lbz r24,1(r31)
	ctx.current_instruction = 0x881BD800;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// lbzx r7,r10,r4
	ctx.current_instruction = 0x881BD804;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbz r5,-1(r10)
	ctx.current_instruction = 0x881BD808;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.current_instruction = 0x881BD828;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,-1(r8)
	ctx.current_instruction = 0x881BD82C;
	REX_STORE_U8(ctx.r8.u32 + -1, ctx.r5.u8);
	// lbz r25,2(r31)
	ctx.current_instruction = 0x881BD830;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r24,0(r9)
	ctx.current_instruction = 0x881BD834;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r5,0(r10)
	ctx.current_instruction = 0x881BD838;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r7,r10,r6
	ctx.current_instruction = 0x881BD83C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.current_instruction = 0x881BD85C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,0(r8)
	ctx.current_instruction = 0x881BD860;
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lbz r25,1(r9)
	ctx.current_instruction = 0x881BD864;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r24,3(r31)
	ctx.current_instruction = 0x881BD868;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,1(r10)
	ctx.current_instruction = 0x881BD86C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzx r7,r10,r3
	ctx.current_instruction = 0x881BD870;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.current_instruction = 0x881BD890;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,1(r8)
	ctx.current_instruction = 0x881BD894;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r5.u8);
	// lbz r25,2(r9)
	ctx.current_instruction = 0x881BD898;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r24,4(r31)
	ctx.current_instruction = 0x881BD89C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r5,2(r10)
	ctx.current_instruction = 0x881BD8A0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbzx r7,r10,r30
	ctx.current_instruction = 0x881BD8A4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.current_instruction = 0x881BD8C4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,2(r8)
	ctx.current_instruction = 0x881BD8C8;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lbz r24,3(r9)
	ctx.current_instruction = 0x881BD8CC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r25,5(r31)
	ctx.current_instruction = 0x881BD8D0;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BD8D4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbzx r7,r10,r29
	ctx.current_instruction = 0x881BD8D8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// subf r7,r25,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r25.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.current_instruction = 0x881BD8F8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,3(r8)
	ctx.current_instruction = 0x881BD8FC;
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r5.u8);
	// lbz r5,4(r10)
	ctx.current_instruction = 0x881BD900;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbzx r7,r10,r28
	ctx.current_instruction = 0x881BD904;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r25,4(r9)
	ctx.current_instruction = 0x881BD910;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r24,6(r31)
	ctx.current_instruction = 0x881BD914;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r25,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r25.u64;
	// subf r7,r24,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r24.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// lbzx r7,r5,r11
	ctx.current_instruction = 0x881BD92C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r7,4(r8)
	ctx.current_instruction = 0x881BD930;
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r7.u8);
	// lbz r24,7(r31)
	ctx.current_instruction = 0x881BD934;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r5,5(r10)
	ctx.current_instruction = 0x881BD93C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbzx r7,r10,r27
	ctx.current_instruction = 0x881BD940;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r25,5(r9)
	ctx.current_instruction = 0x881BD948;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r7,r25,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r25.u64;
	// subf r7,r24,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r24.u64;
	// addi r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 8;
	// srawi r7,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 4;
	// lbzx r5,r7,r11
	ctx.current_instruction = 0x881BD96C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r5,5(r8)
	ctx.current_instruction = 0x881BD970;
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r5.u8);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// bdnz 0x881bd7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD7C8;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BD980:
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r9,r16,-1
	ctx.r9.s64 = ctx.r16.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881BD990:
	// lbz r29,0(r10)
	ctx.current_instruction = 0x881BD990;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r27,-1(r10)
	ctx.current_instruction = 0x881BD994;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r18,-2(r10)
	ctx.current_instruction = 0x881BD998;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r25,r27,r29
	ctx.r25.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbz r30,1(r10)
	ctx.current_instruction = 0x881BD9A0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r26,r18,r27
	ctx.r26.u64 = ctx.r18.u64 + ctx.r27.u64;
	// lbz r3,2(r10)
	ctx.current_instruction = 0x881BD9A8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r17,r25,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BD9B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r24,r29,r30
	ctx.r24.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbz r8,4(r10)
	ctx.current_instruction = 0x881BD9B8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r25,r25,r17
	ctx.r25.u64 = ctx.r25.u64 + ctx.r17.u64;
	// lbz r28,5(r10)
	ctx.current_instruction = 0x881BD9C0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r16,r26,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r15,-3(r10)
	ctx.current_instruction = 0x881BD9C8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// stw r25,-328(r1)
	ctx.current_instruction = 0x881BD9CC;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r25.u32);
	// add r23,r3,r30
	ctx.r23.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r4,r24,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r19,6(r10)
	ctx.current_instruction = 0x881BD9D8;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r16,r26,r16
	ctx.r16.u64 = ctx.r26.u64 + ctx.r16.u64;
	// lbz r14,7(r10)
	ctx.current_instruction = 0x881BD9E0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r5,r3
	ctx.r22.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 + ctx.r4.u64;
	// rlwinm r26,r23,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r8,r5
	ctx.r21.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r20,r28,r8
	ctx.r20.u64 = ctx.r28.u64 + ctx.r8.u64;
	// subf r24,r15,r16
	ctx.r24.u64 = ctx.r16.u64 - ctx.r15.u64;
	// add r23,r23,r26
	ctx.r23.u64 = ctx.r23.u64 + ctx.r26.u64;
	// rlwinm r17,r22,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r27,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r27.u64;
	// rlwinm r26,r20,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r21,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r29,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r29.u64;
	// subf r24,r29,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r29.u64;
	// add r22,r22,r17
	ctx.r22.u64 = ctx.r22.u64 + ctx.r17.u64;
	// add r23,r20,r26
	ctx.r23.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r25,r21,r25
	ctx.r25.u64 = ctx.r21.u64 + ctx.r25.u64;
	// subf r26,r3,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r3.u64;
	// lwz r16,-328(r1)
	ctx.current_instruction = 0x881BDA28;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// subf r22,r8,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r8.u64;
	// subf r18,r18,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r18.u64;
	// subf r27,r5,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r5.u64;
	// subf r29,r30,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r30.u64;
	// subf r25,r28,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r28.u64;
	// addi r24,r29,8
	ctx.r24.s64 = ctx.r29.s64 + 8;
	// subf r29,r30,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r30.u64;
	// subf r30,r3,r25
	ctx.r30.u64 = ctx.r25.u64 - ctx.r3.u64;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// subf r23,r19,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r19.u64;
	// add r3,r19,r28
	ctx.r3.u64 = ctx.r19.u64 + ctx.r28.u64;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r27,8
	ctx.r28.s64 = ctx.r27.s64 + 8;
	// subf r5,r5,r23
	ctx.r5.u64 = ctx.r23.u64 - ctx.r5.u64;
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BDA68;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// srawi r27,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// srawi r26,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// stb r4,1(r9)
	ctx.current_instruction = 0x881BDA80;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// addi r25,r5,8
	ctx.r25.s64 = ctx.r5.s64 + 8;
	// lbzx r27,r27,r11
	ctx.current_instruction = 0x881BDA88;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r26,r26,r11
	ctx.current_instruction = 0x881BDA94;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbzx r5,r28,r11
	ctx.current_instruction = 0x881BDAA0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// srawi r4,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 4;
	// stb r27,2(r9)
	ctx.current_instruction = 0x881BDAA8;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r27.u8);
	// lbzx r29,r29,r11
	ctx.current_instruction = 0x881BDAAC;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// subf r3,r14,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r14.u64;
	// stb r26,3(r9)
	ctx.current_instruction = 0x881BDAB4;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r26.u8);
	// lbzx r30,r30,r11
	ctx.current_instruction = 0x881BDAB8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stb r5,4(r9)
	ctx.current_instruction = 0x881BDAC0;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BDAC4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stb r29,5(r9)
	ctx.current_instruction = 0x881BDACC;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r29.u8);
	// stb r30,6(r9)
	ctx.current_instruction = 0x881BDAD0;
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r30.u8);
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// stb r4,7(r9)
	ctx.current_instruction = 0x881BDAD8;
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r4.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r8,r11
	ctx.current_instruction = 0x881BDAE0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stbu r5,8(r9)
	ctx.current_instruction = 0x881BDAE4;
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881bd990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BD990;
	// lwz r4,-324(r1)
	ctx.current_instruction = 0x881BDAEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subfic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lwz r3,28(r1)
	ctx.current_instruction = 0x881BDAF4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r5,-336(r1)
	ctx.current_instruction = 0x881BDB00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r8,-276(r1)
	ctx.current_instruction = 0x881BDB08;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r4,-328(r1)
	ctx.current_instruction = 0x881BDB10;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r4.u32);
	// subfic r3,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,-324(r1)
	ctx.current_instruction = 0x881BDB20;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r4,-336(r1)
	ctx.current_instruction = 0x881BDB2C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
loc_881BDB34:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r27,-276(r1)
	ctx.current_instruction = 0x881BDB38;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r19,-328(r1)
	ctx.current_instruction = 0x881BDB40;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r16,r28,-8
	ctx.r16.s64 = ctx.r28.s64 + -8;
	// addi r28,r8,18
	ctx.r28.s64 = ctx.r8.s64 + 18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// subf r29,r7,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r28,-296(r1)
	ctx.current_instruction = 0x881BDB5C;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r28.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r16,-284(r1)
	ctx.current_instruction = 0x881BDB64;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r16.u32);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r10,-280(r1)
	ctx.current_instruction = 0x881BDB6C;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// subf r4,r7,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r7.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// addi r17,r8,-6
	ctx.r17.s64 = ctx.r8.s64 + -6;
	// stw r10,-332(r1)
	ctx.current_instruction = 0x881BDB80;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r10.u32);
	// add r15,r3,r9
	ctx.r15.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r28,r29,-2
	ctx.r28.s64 = ctx.r29.s64 + -2;
	// stw r17,-288(r1)
	ctx.current_instruction = 0x881BDB8C;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r17.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r15,-304(r1)
	ctx.current_instruction = 0x881BDB94;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r15.u32);
	// stw r28,-292(r1)
	ctx.current_instruction = 0x881BDB98;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r8,8
	ctx.r26.s64 = ctx.r8.s64 + 8;
	// stw r9,-316(r1)
	ctx.current_instruction = 0x881BDBA4;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r9.u32);
	// addi r25,r8,16
	ctx.r25.s64 = ctx.r8.s64 + 16;
	// addi r24,r8,9
	ctx.r24.s64 = ctx.r8.s64 + 9;
	// addi r23,r8,1
	ctx.r23.s64 = ctx.r8.s64 + 1;
	// addi r22,r8,17
	ctx.r22.s64 = ctx.r8.s64 + 17;
	// addi r21,r8,-7
	ctx.r21.s64 = ctx.r8.s64 + -7;
	// add r20,r27,r5
	ctx.r20.u64 = ctx.r27.u64 + ctx.r5.u64;
	// add r19,r19,r30
	ctx.r19.u64 = ctx.r19.u64 + ctx.r30.u64;
	// b 0x881bdbd8
	goto loc_881BDBD8;
loc_881BDBC8:
	// lwz r28,-292(r1)
	ctx.current_instruction = 0x881BDBC8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r16,-284(r1)
	ctx.current_instruction = 0x881BDBCC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// lwz r17,-288(r1)
	ctx.current_instruction = 0x881BDBD0;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// lwz r15,-304(r1)
	ctx.current_instruction = 0x881BDBD4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
loc_881BDBD8:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r8,r10
	ctx.current_instruction = 0x881BDBDC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r4,r26,r10
	ctx.current_instruction = 0x881BDBE0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// subf r18,r7,r31
	ctx.r18.u64 = ctx.r31.u64 - ctx.r7.u64;
	// lbzx r27,r10,r7
	ctx.current_instruction = 0x881BDBE8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbzx r14,r25,r10
	ctx.current_instruction = 0x881BDBF0;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lbzx r29,r23,r10
	ctx.current_instruction = 0x881BDBF4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// lbzx r3,r28,r9
	ctx.current_instruction = 0x881BDBF8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r9,r16
	ctx.current_instruction = 0x881BDC00;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r16.u32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbzx r27,r18,r9
	ctx.current_instruction = 0x881BDC08;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// add r18,r4,r28
	ctx.r18.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lbzx r15,r15,r9
	ctx.current_instruction = 0x881BDC10;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r24,r10
	ctx.current_instruction = 0x881BDC18;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// subf r18,r14,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r14.u64;
	// lbzx r17,r17,r10
	ctx.current_instruction = 0x881BDC20;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbzx r28,r21,r10
	ctx.current_instruction = 0x881BDC28;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lwz r14,-316(r1)
	ctx.current_instruction = 0x881BDC30;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// stw r28,-308(r1)
	ctx.current_instruction = 0x881BDC34;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r28.u32);
	// subf r28,r16,r18
	ctx.r28.u64 = ctx.r18.u64 - ctx.r16.u64;
	// subf r16,r27,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r27.u64;
	// lbzx r3,r22,r10
	ctx.current_instruction = 0x881BDC40;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r27,-280(r1)
	ctx.current_instruction = 0x881BDC48;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r27,-320(r1)
	ctx.current_instruction = 0x881BDC4C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r27.u32);
	// addi r27,r8,10
	ctx.r27.s64 = ctx.r8.s64 + 10;
	// stw r28,-312(r1)
	ctx.current_instruction = 0x881BDC54;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r28.u32);
	// subf r28,r15,r16
	ctx.r28.u64 = ctx.r16.u64 - ctx.r15.u64;
	// lwz r16,-312(r1)
	ctx.current_instruction = 0x881BDC5C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// srawi r16,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 4;
	// stw r3,-300(r1)
	ctx.current_instruction = 0x881BDC64;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r3.u32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// lbzx r27,r27,r10
	ctx.current_instruction = 0x881BDC70;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r18,-296(r1)
	ctx.current_instruction = 0x881BDC78;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// srawi r15,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r15.s64 = ctx.r29.s32 >> 4;
	// lbzx r29,r16,r11
	ctx.current_instruction = 0x881BDC80;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// lwz r16,-308(r1)
	ctx.current_instruction = 0x881BDC84;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbzx r3,r3,r10
	ctx.current_instruction = 0x881BDC88;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lbzx r18,r18,r10
	ctx.current_instruction = 0x881BDC90;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// add r27,r4,r28
	ctx.r27.u64 = ctx.r4.u64 + ctx.r28.u64;
	// lbzx r4,r15,r11
	ctx.current_instruction = 0x881BDC98;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r16,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r16.u64;
	// lwz r16,-300(r1)
	ctx.current_instruction = 0x881BDCA4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r3,r29,r4
	ctx.r3.u64 = ctx.r29.u64 + ctx.r4.u64;
	// subf r4,r16,r27
	ctx.r4.u64 = ctx.r27.u64 - ctx.r16.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r29,r17,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r17.u64;
	// lwz r17,-320(r1)
	ctx.current_instruction = 0x881BDCBC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// srawi r28,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 1;
	// addi r27,r4,8
	ctx.r27.s64 = ctx.r4.s64 + 8;
	// subf r4,r18,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r18.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r18,r4,8
	ctx.r18.s64 = ctx.r4.s64 + 8;
	// lbzx r4,r28,r11
	ctx.current_instruction = 0x881BDCD4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// stbx r4,r14,r9
	ctx.current_instruction = 0x881BDCD8;
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r4.u8);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// lbzx r28,r17,r10
	ctx.current_instruction = 0x881BDCE0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// lbzx r4,r19,r10
	ctx.current_instruction = 0x881BDCE4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// lbzx r29,r9,r10
	ctx.current_instruction = 0x881BDCE8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r9,r20,r10
	ctx.current_instruction = 0x881BDCEC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r28,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// srawi r29,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 4;
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881BDD10;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r4,r29,r11
	ctx.current_instruction = 0x881BDD14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r17,-332(r1)
	ctx.current_instruction = 0x881BDD20;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// lwz r27,-324(r1)
	ctx.current_instruction = 0x881BDD28;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addi r29,r8,-5
	ctx.r29.s64 = ctx.r8.s64 + -5;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x881BDD34;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r30,r10
	ctx.current_instruction = 0x881BDD38;
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r28,r3,r10
	ctx.current_instruction = 0x881BDD3C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// lbzx r4,r4,r10
	ctx.current_instruction = 0x881BDD44;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r5,r10
	ctx.current_instruction = 0x881BDD48;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r3,r10
	ctx.current_instruction = 0x881BDD54;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lbzx r28,r29,r10
	ctx.current_instruction = 0x881BDD64;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x881BDD68;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r29,r18,4
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r18.s32 >> 4;
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x881BDD80;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BDD84;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r29,r29,r11
	ctx.current_instruction = 0x881BDD8C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r3,r8,19
	ctx.r3.s64 = ctx.r8.s64 + 19;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// lbzx r18,r3,r10
	ctx.current_instruction = 0x881BDDA0;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r9,r28,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r28.u64;
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// lbzx r3,r29,r11
	ctx.current_instruction = 0x881BDDB8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// addi r29,r9,8
	ctx.r29.s64 = ctx.r9.s64 + 8;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// stbx r3,r9,r10
	ctx.current_instruction = 0x881BDDC4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lbzx r3,r17,r10
	ctx.current_instruction = 0x881BDDCC;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// lbzx r4,r4,r10
	ctx.current_instruction = 0x881BDDD0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x881BDDD4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 3;
	// lbzx r28,r4,r10
	ctx.current_instruction = 0x881BDDE0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r3,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r3.u64;
	// subf r9,r28,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r28.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// srawi r4,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 4;
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x881BDE00;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BDE04;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// lbzx r3,r4,r11
	ctx.current_instruction = 0x881BDE18;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stbx r3,r9,r10
	ctx.current_instruction = 0x881BDE1C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x881bdbc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BDBC8;
	// lwz r10,-336(r1)
	ctx.current_instruction = 0x881BDE28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,-336(r1)
	ctx.current_instruction = 0x881BDE3C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// bne 0x881bdb34
	if (!ctx.cr0.eq) goto loc_881BDB34;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BDE50:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r8,11
	ctx.r8.s64 = 11;
	// subf r7,r6,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r10,-320(r1)
	ctx.current_instruction = 0x881BDE5C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r18,r6,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r9,r16,-1
	ctx.r9.s64 = ctx.r16.s64 + -1;
	// stw r18,-328(r1)
	ctx.current_instruction = 0x881BDE6C;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r18.u32);
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bne cr6,0x881be198
	if (!ctx.cr6.eq) goto loc_881BE198;
loc_881BDE7C:
	// lbz r31,0(r10)
	ctx.current_instruction = 0x881BDE7C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,-1(r10)
	ctx.current_instruction = 0x881BDE80;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r20,-2(r10)
	ctx.current_instruction = 0x881BDE84;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r27,r29,r31
	ctx.r27.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r3,1(r10)
	ctx.current_instruction = 0x881BDE8C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r28,r29,r20
	ctx.r28.u64 = ctx.r29.u64 + ctx.r20.u64;
	// lbz r5,2(r10)
	ctx.current_instruction = 0x881BDE94;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r19,r27,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,3(r10)
	ctx.current_instruction = 0x881BDE9C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r8,4(r10)
	ctx.current_instruction = 0x881BDEA4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r27,r27,r19
	ctx.r27.u64 = ctx.r27.u64 + ctx.r19.u64;
	// lbz r30,5(r10)
	ctx.current_instruction = 0x881BDEAC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r17,r28,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r15,-3(r10)
	ctx.current_instruction = 0x881BDEB4;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// stw r27,-332(r1)
	ctx.current_instruction = 0x881BDEB8;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r27.u32);
	// add r25,r3,r5
	ctx.r25.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r18,r26,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r21,6(r10)
	ctx.current_instruction = 0x881BDEC4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r17,r28,r17
	ctx.r17.u64 = ctx.r28.u64 + ctx.r17.u64;
	// lbz r14,7(r10)
	ctx.current_instruction = 0x881BDECC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r24,r7,r5
	ctx.r24.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r28,r25,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 + ctx.r18.u64;
	// add r22,r30,r8
	ctx.r22.u64 = ctx.r30.u64 + ctx.r8.u64;
	// rlwinm r19,r24,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r18,r15,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r15.u64;
	// add r23,r8,r7
	ctx.r23.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r25,r28
	ctx.r25.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r24,r24,r19
	ctx.r24.u64 = ctx.r24.u64 + ctx.r19.u64;
	// rlwinm r28,r22,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r29,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r27,r23,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r29,r31,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r31.u64;
	// subf r25,r31,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r31.u64;
	// subf r24,r3,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r3.u64;
	// add r28,r22,r28
	ctx.r28.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 + ctx.r27.u64;
	// lwz r17,-332(r1)
	ctx.current_instruction = 0x881BDF14;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r28,r21,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r21.u64;
	// subf r27,r30,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r30.u64;
	// subf r17,r3,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r3.u64;
	// subf r3,r5,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r5.u64;
	// subf r31,r20,r17
	ctx.r31.u64 = ctx.r17.u64 - ctx.r20.u64;
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// subf r29,r7,r25
	ctx.r29.u64 = ctx.r25.u64 - ctx.r7.u64;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// subf r31,r8,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r8.u64;
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// subf r3,r5,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r5.u64;
	// srawi r28,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 4;
	// add r5,r21,r30
	ctx.r5.u64 = ctx.r21.u64 + ctx.r30.u64;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// srawi r29,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r25.s32 >> 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srawi r27,r24,4
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r24.s32 >> 4;
	// lbzx r28,r28,r11
	ctx.current_instruction = 0x881BDF60;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// addi r26,r7,8
	ctx.r26.s64 = ctx.r7.s64 + 8;
	// lbzx r29,r29,r11
	ctx.current_instruction = 0x881BDF70;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r28,1(r9)
	ctx.current_instruction = 0x881BDF7C;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r28.u8);
	// srawi r3,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 4;
	// lbzx r27,r27,r11
	ctx.current_instruction = 0x881BDF84;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lbzx r5,r30,r11
	ctx.current_instruction = 0x881BDF8C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// srawi r28,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r26.s32 >> 4;
	// stb r29,2(r9)
	ctx.current_instruction = 0x881BDF94;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r29.u8);
	// lbzx r31,r31,r11
	ctx.current_instruction = 0x881BDF98;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// lbzx r3,r3,r11
	ctx.current_instruction = 0x881BDFA0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stb r27,3(r9)
	ctx.current_instruction = 0x881BDFA8;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r27.u8);
	// lbzx r30,r28,r11
	ctx.current_instruction = 0x881BDFAC;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r5,4(r9)
	ctx.current_instruction = 0x881BDFB4;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// stb r31,5(r9)
	ctx.current_instruction = 0x881BDFB8;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r31.u8);
	// stb r3,6(r9)
	ctx.current_instruction = 0x881BDFBC;
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r3.u8);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// stb r30,7(r9)
	ctx.current_instruction = 0x881BDFC4;
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r30.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r5,r7,r11
	ctx.current_instruction = 0x881BDFCC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stbu r5,8(r9)
	ctx.current_instruction = 0x881BDFD0;
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881bde7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BDE7C;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// addi r10,r16,8
	ctx.r10.s64 = ctx.r16.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_881BDFE8:
	// lbz r7,8(r10)
	ctx.current_instruction = 0x881BDFE8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r8,0(r10)
	ctx.current_instruction = 0x881BDFEC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.current_instruction = 0x881BDFF0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,9(r10)
	ctx.current_instruction = 0x881BDFF8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// lbz r31,16(r10)
	ctx.current_instruction = 0x881BDFFC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r30,-8(r10)
	ctx.current_instruction = 0x881BE004;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -8);
	// lbz r29,17(r10)
	ctx.current_instruction = 0x881BE008;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 17);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r28,-7(r10)
	ctx.current_instruction = 0x881BE010;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -7);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r3,10(r10)
	ctx.current_instruction = 0x881BE018;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// subf r5,r31,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r31.u64;
	// lbz r31,2(r10)
	ctx.current_instruction = 0x881BE020;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r25,18(r10)
	ctx.current_instruction = 0x881BE028;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r30.u64;
	// lbz r27,19(r10)
	ctx.current_instruction = 0x881BE030;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 19);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,11(r10)
	ctx.current_instruction = 0x881BE038;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BE040;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// subf r4,r29,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r29.u64;
	// lbz r26,-5(r10)
	ctx.current_instruction = 0x881BE048;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// srawi r24,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 4;
	// lbz r30,12(r10)
	ctx.current_instruction = 0x881BE050;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lbz r29,4(r10)
	ctx.current_instruction = 0x881BE058;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r31,-6(r10)
	ctx.current_instruction = 0x881BE060;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// lbz r3,5(r10)
	ctx.current_instruction = 0x881BE068;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r23,20(r10)
	ctx.current_instruction = 0x881BE070;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 20);
	// lbzx r24,r24,r11
	ctx.current_instruction = 0x881BE074;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// srawi r28,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 4;
	// add r22,r8,r4
	ctx.r22.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lbz r4,13(r10)
	ctx.current_instruction = 0x881BE080;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 13);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r21,-4(r10)
	ctx.current_instruction = 0x881BE088;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// subf r5,r25,r22
	ctx.r5.u64 = ctx.r22.u64 - ctx.r25.u64;
	// lbz r25,21(r10)
	ctx.current_instruction = 0x881BE090;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r22,-3(r10)
	ctx.current_instruction = 0x881BE098;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// stb r24,-2(r9)
	ctx.current_instruction = 0x881BE0A0;
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r24.u8);
	// add r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,14(r10)
	ctx.current_instruction = 0x881BE0A8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// add r8,r30,r29
	ctx.r8.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r31,r27,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r27.u64;
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// lbz r5,6(r10)
	ctx.current_instruction = 0x881BE0B8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// subf r31,r26,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r26.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// add r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r4,r23,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r23.u64;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// subf r4,r25,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r25.u64;
	// srawi r3,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 4;
	// subf r8,r22,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r22.u64;
	// lbzx r4,r28,r11
	ctx.current_instruction = 0x881BE0F8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r31,r8,8
	ctx.r31.s64 = ctx.r8.s64 + 8;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// srawi r7,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 4;
	// stb r4,-1(r9)
	ctx.current_instruction = 0x881BE108;
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r4.u8);
	// lbzx r5,r30,r11
	ctx.current_instruction = 0x881BE10C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stb r5,0(r9)
	ctx.current_instruction = 0x881BE110;
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbzx r4,r29,r11
	ctx.current_instruction = 0x881BE114;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r4,1(r9)
	ctx.current_instruction = 0x881BE118;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// lbzx r3,r3,r11
	ctx.current_instruction = 0x881BE11C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r3,2(r9)
	ctx.current_instruction = 0x881BE120;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbzx r7,r7,r11
	ctx.current_instruction = 0x881BE124;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r7,3(r9)
	ctx.current_instruction = 0x881BE128;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r4,7(r10)
	ctx.current_instruction = 0x881BE130;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r7,15(r10)
	ctx.current_instruction = 0x881BE134;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r3,22(r10)
	ctx.current_instruction = 0x881BE13C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 22);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r5,-2(r10)
	ctx.current_instruction = 0x881BE144;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r4,r3,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lbz r3,23(r10)
	ctx.current_instruction = 0x881BE14C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 23);
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r31,-1(r10)
	ctx.current_instruction = 0x881BE154;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// subf r8,r31,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r31.u64;
	// srawi r3,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 4;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// lbzx r5,r3,r11
	ctx.current_instruction = 0x881BE17C;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r5,4(r9)
	ctx.current_instruction = 0x881BE180;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbzx r4,r7,r11
	ctx.current_instruction = 0x881BE184;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r4,5(r9)
	ctx.current_instruction = 0x881BE188;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r4.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// bdnz 0x881bdfe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BDFE8;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BE198:
	// lbz r30,0(r10)
	ctx.current_instruction = 0x881BE198;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,-1(r10)
	ctx.current_instruction = 0x881BE19C;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r19,-2(r10)
	ctx.current_instruction = 0x881BE1A0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r26,r30,r28
	ctx.r26.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r31,1(r10)
	ctx.current_instruction = 0x881BE1A8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r27,r28,r19
	ctx.r27.u64 = ctx.r28.u64 + ctx.r19.u64;
	// lbz r3,2(r10)
	ctx.current_instruction = 0x881BE1B0;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r17,r26,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r5,3(r10)
	ctx.current_instruction = 0x881BE1B8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r25,r30,r31
	ctx.r25.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r8,4(r10)
	ctx.current_instruction = 0x881BE1C0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// add r26,r26,r17
	ctx.r26.u64 = ctx.r26.u64 + ctx.r17.u64;
	// lbz r15,-3(r10)
	ctx.current_instruction = 0x881BE1C8;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// rlwinm r16,r27,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r29,5(r10)
	ctx.current_instruction = 0x881BE1D0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stw r26,-332(r1)
	ctx.current_instruction = 0x881BE1D4;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r26.u32);
	// rlwinm r4,r25,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r3,r31
	ctx.r24.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r20,6(r10)
	ctx.current_instruction = 0x881BE1E0;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r16,r27,r16
	ctx.r16.u64 = ctx.r27.u64 + ctx.r16.u64;
	// lbz r14,7(r10)
	ctx.current_instruction = 0x881BE1E8;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r8,r5
	ctx.r22.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r23,r5,r3
	ctx.r23.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r4,r25,r4
	ctx.r4.u64 = ctx.r25.u64 + ctx.r4.u64;
	// rlwinm r27,r24,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r25,r15,r16
	ctx.r25.u64 = ctx.r16.u64 - ctx.r15.u64;
	// add r21,r29,r8
	ctx.r21.u64 = ctx.r29.u64 + ctx.r8.u64;
	// rlwinm r26,r22,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r23,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r24,r27
	ctx.r24.u64 = ctx.r24.u64 + ctx.r27.u64;
	// add r22,r22,r26
	ctx.r22.u64 = ctx.r22.u64 + ctx.r26.u64;
	// rlwinm r27,r21,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r26,r30,r25
	ctx.r26.u64 = ctx.r25.u64 - ctx.r30.u64;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 + ctx.r17.u64;
	// subf r25,r30,r24
	ctx.r25.u64 = ctx.r24.u64 - ctx.r30.u64;
	// add r24,r21,r27
	ctx.r24.u64 = ctx.r21.u64 + ctx.r27.u64;
	// subf r27,r28,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r28.u64;
	// lwz r16,-332(r1)
	ctx.current_instruction = 0x881BE230;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r23,r8,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r8.u64;
	// subf r28,r5,r25
	ctx.r28.u64 = ctx.r25.u64 - ctx.r5.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r4,r29,r22
	ctx.r4.u64 = ctx.r22.u64 - ctx.r29.u64;
	// subf r30,r19,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r19.u64;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r25,r30,8
	ctx.r25.s64 = ctx.r30.s64 + 8;
	// subf r30,r31,r23
	ctx.r30.u64 = ctx.r23.u64 - ctx.r31.u64;
	// subf r31,r3,r4
	ctx.r31.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// srawi r27,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 4;
	// subf r24,r20,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r20.u64;
	// add r3,r20,r29
	ctx.r3.u64 = ctx.r20.u64 + ctx.r29.u64;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// subf r5,r5,r24
	ctx.r5.u64 = ctx.r24.u64 - ctx.r5.u64;
	// srawi r28,r25,4
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 4;
	// lbzx r27,r27,r11
	ctx.current_instruction = 0x881BE274;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// srawi r29,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 4;
	// addi r26,r5,8
	ctx.r26.s64 = ctx.r5.s64 + 8;
	// stb r27,1(r9)
	ctx.current_instruction = 0x881BE28C;
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r27.u8);
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// lbzx r28,r28,r11
	ctx.current_instruction = 0x881BE294;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r5,r3,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BE29C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// srawi r31,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 4;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbzx r5,r29,r11
	ctx.current_instruction = 0x881BE2A8;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// srawi r27,r26,4
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 4;
	// lbzx r30,r30,r11
	ctx.current_instruction = 0x881BE2B0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// subf r3,r14,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r14.u64;
	// stb r28,2(r9)
	ctx.current_instruction = 0x881BE2B8;
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r28.u8);
	// lbzx r31,r31,r11
	ctx.current_instruction = 0x881BE2BC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stb r4,3(r9)
	ctx.current_instruction = 0x881BE2C4;
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r4.u8);
	// lbzx r29,r27,r11
	ctx.current_instruction = 0x881BE2C8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stb r5,4(r9)
	ctx.current_instruction = 0x881BE2D0;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// stb r30,5(r9)
	ctx.current_instruction = 0x881BE2D4;
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r30.u8);
	// stb r31,6(r9)
	ctx.current_instruction = 0x881BE2D8;
	REX_STORE_U8(ctx.r9.u32 + 6, ctx.r31.u8);
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// stb r29,7(r9)
	ctx.current_instruction = 0x881BE2E0;
	REX_STORE_U8(ctx.r9.u32 + 7, ctx.r29.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r4,r5,r11
	ctx.current_instruction = 0x881BE2E8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stbu r4,8(r9)
	ctx.current_instruction = 0x881BE2EC;
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x881be198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BE198;
	// lwz r4,-320(r1)
	ctx.current_instruction = 0x881BE2F4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subfic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r6.u64;
	// lwz r3,28(r1)
	ctx.current_instruction = 0x881BE2FC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r9,r4,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r5,-336(r1)
	ctx.current_instruction = 0x881BE308;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r8,-276(r1)
	ctx.current_instruction = 0x881BE310;
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r8.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r4,-332(r1)
	ctx.current_instruction = 0x881BE318;
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r4.u32);
	// subfic r3,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,-324(r1)
	ctx.current_instruction = 0x881BE328;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r3.u32);
	// addi r8,r5,8
	ctx.r8.s64 = ctx.r5.s64 + 8;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// stw r4,-336(r1)
	ctx.current_instruction = 0x881BE334;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r4.u32);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
loc_881BE33C:
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r28,-276(r1)
	ctx.current_instruction = 0x881BE340;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// subf r29,r7,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r20,-332(r1)
	ctx.current_instruction = 0x881BE348;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// addi r16,r29,-8
	ctx.r16.s64 = ctx.r29.s64 + -8;
	// addi r29,r8,18
	ctx.r29.s64 = ctx.r8.s64 + 18;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// subf r30,r7,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r7.u64;
	// stw r29,-296(r1)
	ctx.current_instruction = 0x881BE364;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r29.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r16,-312(r1)
	ctx.current_instruction = 0x881BE36C;
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r16.u32);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r10,-316(r1)
	ctx.current_instruction = 0x881BE374;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r10.u32);
	// subf r4,r7,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r6,-2
	ctx.r9.s64 = ctx.r6.s64 + -2;
	// addi r17,r8,-6
	ctx.r17.s64 = ctx.r8.s64 + -6;
	// stw r10,-272(r1)
	ctx.current_instruction = 0x881BE388;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r10.u32);
	// add r15,r3,r9
	ctx.r15.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r29,r30,-2
	ctx.r29.s64 = ctx.r30.s64 + -2;
	// stw r17,-308(r1)
	ctx.current_instruction = 0x881BE394;
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r17.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r15,-300(r1)
	ctx.current_instruction = 0x881BE39C;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r15.u32);
	// stw r29,-320(r1)
	ctx.current_instruction = 0x881BE3A0;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r8,8
	ctx.r27.s64 = ctx.r8.s64 + 8;
	// stw r9,-280(r1)
	ctx.current_instruction = 0x881BE3AC;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// addi r26,r8,16
	ctx.r26.s64 = ctx.r8.s64 + 16;
	// addi r25,r8,9
	ctx.r25.s64 = ctx.r8.s64 + 9;
	// addi r24,r8,1
	ctx.r24.s64 = ctx.r8.s64 + 1;
	// addi r23,r8,17
	ctx.r23.s64 = ctx.r8.s64 + 17;
	// addi r22,r8,-7
	ctx.r22.s64 = ctx.r8.s64 + -7;
	// add r21,r28,r5
	ctx.r21.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r20,r20,r31
	ctx.r20.u64 = ctx.r20.u64 + ctx.r31.u64;
	// addi r19,r18,1
	ctx.r19.s64 = ctx.r18.s64 + 1;
	// b 0x881be3e4
	goto loc_881BE3E4;
loc_881BE3D4:
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x881BE3D4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r15,-300(r1)
	ctx.current_instruction = 0x881BE3D8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r17,-308(r1)
	ctx.current_instruction = 0x881BE3DC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r16,-312(r1)
	ctx.current_instruction = 0x881BE3E0;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
loc_881BE3E4:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r3,r10,r8
	ctx.current_instruction = 0x881BE3E8;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r4,r27,r10
	ctx.current_instruction = 0x881BE3EC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// subf r18,r7,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r7.u64;
	// lbzx r28,r10,r7
	ctx.current_instruction = 0x881BE3F4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbzx r14,r26,r10
	ctx.current_instruction = 0x881BE3FC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// lbzx r30,r25,r10
	ctx.current_instruction = 0x881BE400;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r10.u32);
	// lbzx r3,r29,r9
	ctx.current_instruction = 0x881BE404;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r16,r16,r9
	ctx.current_instruction = 0x881BE40C;
	ctx.r16.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r9.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbzx r28,r18,r9
	ctx.current_instruction = 0x881BE414;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r9.u32);
	// add r18,r4,r29
	ctx.r18.u64 = ctx.r4.u64 + ctx.r29.u64;
	// lbzx r15,r15,r9
	ctx.current_instruction = 0x881BE41C;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r9.u32);
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r24,r10
	ctx.current_instruction = 0x881BE424;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// subf r18,r14,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r14.u64;
	// lbzx r17,r17,r10
	ctx.current_instruction = 0x881BE42C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r10.u32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbzx r29,r22,r10
	ctx.current_instruction = 0x881BE434;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// add r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lwz r14,-280(r1)
	ctx.current_instruction = 0x881BE43C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// stw r29,-288(r1)
	ctx.current_instruction = 0x881BE440;
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// subf r29,r16,r18
	ctx.r29.u64 = ctx.r18.u64 - ctx.r16.u64;
	// subf r16,r28,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r28.u64;
	// lbzx r3,r23,r10
	ctx.current_instruction = 0x881BE44C;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r10.u32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r28,-316(r1)
	ctx.current_instruction = 0x881BE454;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r18,-296(r1)
	ctx.current_instruction = 0x881BE458;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r29,-304(r1)
	ctx.current_instruction = 0x881BE45C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r29.u32);
	// subf r29,r15,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r15.u64;
	// stw r3,-284(r1)
	ctx.current_instruction = 0x881BE464;
	REX_STORE_U32(ctx.r1.u32 + -284, ctx.r3.u32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// stw r28,-292(r1)
	ctx.current_instruction = 0x881BE46C;
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r28.u32);
	// addi r28,r8,10
	ctx.r28.s64 = ctx.r8.s64 + 10;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// lbzx r18,r18,r10
	ctx.current_instruction = 0x881BE478;
	ctx.r18.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r3,r10
	ctx.current_instruction = 0x881BE480;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r28,r28,r10
	ctx.current_instruction = 0x881BE484;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r28,r4,r29
	ctx.r28.u64 = ctx.r4.u64 + ctx.r29.u64;
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r16,-304(r1)
	ctx.current_instruction = 0x881BE498;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r16,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 4;
	// srawi r15,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r15.s64 = ctx.r30.s32 >> 4;
	// lbzx r30,r16,r11
	ctx.current_instruction = 0x881BE4A4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r11.u32);
	// lbzx r4,r15,r11
	ctx.current_instruction = 0x881BE4A8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r11.u32);
	// lwz r16,-288(r1)
	ctx.current_instruction = 0x881BE4AC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// add r3,r30,r4
	ctx.r3.u64 = ctx.r30.u64 + ctx.r4.u64;
	// subf r28,r16,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r16.u64;
	// lwz r16,-284(r1)
	ctx.current_instruction = 0x881BE4B8;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r4,r16,r28
	ctx.r4.u64 = ctx.r28.u64 - ctx.r16.u64;
	// subf r30,r17,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r17.u64;
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 1;
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// subf r4,r18,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r18.u64;
	// lwz r18,-292(r1)
	ctx.current_instruction = 0x881BE4D4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r17,r4,8
	ctx.r17.s64 = ctx.r4.s64 + 8;
	// lbzx r4,r29,r11
	ctx.current_instruction = 0x881BE4E0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stbx r4,r14,r9
	ctx.current_instruction = 0x881BE4E4;
	REX_STORE_U8(ctx.r14.u32 + ctx.r9.u32, ctx.r4.u8);
	// lbzx r29,r10,r19
	ctx.current_instruction = 0x881BE4E8;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// lbzx r4,r20,r10
	ctx.current_instruction = 0x881BE4EC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// lbzx r9,r21,r10
	ctx.current_instruction = 0x881BE4F0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// lbzx r30,r18,r10
	ctx.current_instruction = 0x881BE4F4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r4,r30,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r30.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// srawi r30,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 4;
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881BE518;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r4,r30,r11
	ctx.current_instruction = 0x881BE51C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r18,-328(r1)
	ctx.current_instruction = 0x881BE52C;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// addi r30,r8,-5
	ctx.r30.s64 = ctx.r8.s64 + -5;
	// lwz r28,-272(r1)
	ctx.current_instruction = 0x881BE534;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r16,-324(r1)
	ctx.current_instruction = 0x881BE53C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// lbzx r15,r30,r10
	ctx.current_instruction = 0x881BE540;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r9,r9,r11
	ctx.current_instruction = 0x881BE544;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r9,r10,r31
	ctx.current_instruction = 0x881BE548;
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u8);
	// lbzx r9,r10,r5
	ctx.current_instruction = 0x881BE54C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzx r4,r10,r4
	ctx.current_instruction = 0x881BE550;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r29,r3,r10
	ctx.current_instruction = 0x881BE554;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// addi r3,r8,11
	ctx.r3.s64 = ctx.r8.s64 + 11;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r4,r18,2
	ctx.r4.s64 = ctx.r18.s64 + 2;
	// lbzx r3,r3,r10
	ctx.current_instruction = 0x881BE564;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// lbzx r30,r10,r4
	ctx.current_instruction = 0x881BE568;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r9,r29,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r29.u64;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r30.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// srawi r30,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r17.s32 >> 4;
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x881BE58C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BE590;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzx r30,r30,r11
	ctx.current_instruction = 0x881BE598;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r8,19
	ctx.r3.s64 = ctx.r8.s64 + 19;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbzx r29,r3,r10
	ctx.current_instruction = 0x881BE5A4;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// subf r9,r15,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r15.u64;
	// addi r30,r18,3
	ctx.r30.s64 = ctx.r18.s64 + 3;
	// subf r9,r29,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r29.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// lbzx r4,r4,r11
	ctx.current_instruction = 0x881BE5C8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// srawi r29,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 4;
	// stbx r4,r9,r10
	ctx.current_instruction = 0x881BE5D4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// lbzx r28,r28,r10
	ctx.current_instruction = 0x881BE5DC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// lbzx r30,r30,r10
	ctx.current_instruction = 0x881BE5E0;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// lbzx r3,r9,r10
	ctx.current_instruction = 0x881BE5E4;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r16,r5
	ctx.r9.u64 = ctx.r16.u64 + ctx.r5.u64;
	// lbzx r9,r9,r10
	ctx.current_instruction = 0x881BE5EC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r4,r29,r11
	ctx.current_instruction = 0x881BE5F8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r3,r28,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r9,r30,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r30.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// lbzx r9,r3,r11
	ctx.current_instruction = 0x881BE610;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// lbzx r4,r3,r11
	ctx.current_instruction = 0x881BE624;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stbx r4,r9,r10
	ctx.current_instruction = 0x881BE628;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x881be3d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881BE3D4;
	// lwz r10,-336(r1)
	ctx.current_instruction = 0x881BE634;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// add r18,r18,r6
	ctx.r18.u64 = ctx.r18.u64 + ctx.r6.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r18,-328(r1)
	ctx.current_instruction = 0x881BE644;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r18.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r10,-336(r1)
	ctx.current_instruction = 0x881BE64C;
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r10.u32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bne 0x881be33c
	if (!ctx.cr0.eq) goto loc_881BE33C;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_27) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EED48);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EED48;
	ctx.current_instruction = 0x881EED48;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDE4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDE4;
	ctx.current_instruction = 0x881EEDE4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_89) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE3C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE3C;
	ctx.current_instruction = 0x881EEE3C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_75) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF064);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF064;
	ctx.current_instruction = 0x881EF064;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_119) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF1C4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF1C4;
	ctx.current_instruction = 0x881EF1C4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savefpr_27) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF284);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EF284;
	ctx.current_instruction = 0x881EF284;
	// stfd f27,-40(r12)
	ctx.current_instruction = 0x881EF284;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__restfpr_22) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF2BC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF2BC;
	ctx.current_instruction = 0x881EF2BC;
	// lfd f22,-80(r12)
	ctx.current_instruction = 0x881EF2BC;
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_881F0408) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F0408;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F0408) {
			switch (rex_dispatch_address) {
				case 0x881F0410:
				case 0x881F0428:
				case 0x881F0434:
				case 0x881F0458:
				case 0x881F0464:
				case 0x881F046C:
				case 0x881F0470:
				case 0x881F0490:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0408;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F0410: goto loc_881F0410;
		case 0x881F0428: goto loc_881F0428;
		case 0x881F0434: goto loc_881F0434;
		case 0x881F0458: goto loc_881F0458;
		case 0x881F0464: goto loc_881F0464;
		case 0x881F046C: goto loc_881F046C;
		case 0x881F0470: goto loc_881F0470;
		case 0x881F0490: goto loc_881F0490;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881F0410;
	__savegprlr_29(ctx, base);
loc_881F0410:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F0410;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x881f043c
	if (!ctx.cr6.eq) goto loc_881F043C;
	// bl 0x880529c8
	ctx.lr = 0x881F0428;
	sub_880529C8(ctx, base);
loc_881F0428:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881F042C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x881F0434;
	sub_880523E8(ctx, base);
loc_881F0434:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f049c
	goto loc_881F049C;
loc_881F043C:
	// lwz r11,12(r31)
	ctx.current_instruction = 0x881F043C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f0494
	if (ctx.cr0.eq) goto loc_881F0494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f0f88
	ctx.lr = 0x881F0458;
	sub_881F0F88(ctx, base);
loc_881F0458:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f1710
	ctx.lr = 0x881F0464;
	sub_881F1710(ctx, base);
loc_881F0464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f1308
	ctx.lr = 0x881F046C;
	sub_881F1308(ctx, base);
loc_881F046C:
	// bl 0x881f0aa0
	ctx.lr = 0x881F0470;
	sub_881F0AA0(ctx, base);
loc_881F0470:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x881f0480
	if (!ctx.cr0.lt) goto loc_881F0480;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x881f0494
	goto loc_881F0494;
loc_881F0480:
	// lwz r3,28(r31)
	ctx.current_instruction = 0x881F0480;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881f0494
	if (ctx.cr6.eq) goto loc_881F0494;
	// bl 0x88052278
	ctx.lr = 0x881F0490;
	sub_88052278(ctx, base);
loc_881F0490:
	// stw r29,28(r31)
	ctx.current_instruction = 0x881F0490;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_881F0494:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	ctx.current_instruction = 0x881F0498;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_881F049C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F18F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F18F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F18F8) {
			switch (rex_dispatch_address) {
				case 0x881F191C:
				case 0x881F196C:
				case 0x881F1974:
				case 0x881F1988:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F18F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F191C: goto loc_881F191C;
		case 0x881F196C: goto loc_881F196C;
		case 0x881F1974: goto loc_881F1974;
		case 0x881F1988: goto loc_881F1988;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881F18FC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881F1900;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881F1904;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F190C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x88052218
	ctx.lr = 0x881F191C;
	sub_88052218(ctx, base);
loc_881F191C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.current_instruction = 0x881F1920;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881f197c
	if (ctx.cr6.eq) goto loc_881F197C;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// addi r9,r11,23924
	ctx.r9.s64 = ctx.r11.s64 + 23924;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.current_instruction = 0x881F1938;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_881F193C:
	// stw r3,80(r31)
	ctx.current_instruction = 0x881F193C;
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881f196c
	if (ctx.cr6.eq) goto loc_881F196C;
	// lwz r9,0(r3)
	ctx.current_instruction = 0x881F1948;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881f1960
	if (ctx.cr6.eq) goto loc_881F1960;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x881f193c
	goto loc_881F193C;
loc_881F1960:
	// lwz r10,4(r3)
	ctx.current_instruction = 0x881F1960;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	ctx.current_instruction = 0x881F1964;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x88052278
	ctx.lr = 0x881F196C;
	sub_88052278(ctx, base);
loc_881F196C:
	// lwz r3,4(r30)
	ctx.current_instruction = 0x881F196C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x88052278
	ctx.lr = 0x881F1974;
	sub_88052278(ctx, base);
loc_881F1974:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	ctx.current_instruction = 0x881F1978;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_881F197C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x881f19a0
	ctx.lr = 0x881F1988;
	sub_881F19A0(ctx, base);
loc_881F1988:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881F198C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881F1994;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881F1998;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881FC478) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881FC478;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881FC478) {
			switch (rex_dispatch_address) {
				case 0x881FC480:
				case 0x881FC4A0:
				case 0x881FC4B4:
				case 0x881FC4C8:
				case 0x881FC4E0:
				case 0x881FC4F8:
				case 0x881FC520:
				case 0x881FC550:
				case 0x881FC5B0:
				case 0x881FC5BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881FC478;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881FC480: goto loc_881FC480;
		case 0x881FC4A0: goto loc_881FC4A0;
		case 0x881FC4B4: goto loc_881FC4B4;
		case 0x881FC4C8: goto loc_881FC4C8;
		case 0x881FC4E0: goto loc_881FC4E0;
		case 0x881FC4F8: goto loc_881FC4F8;
		case 0x881FC520: goto loc_881FC520;
		case 0x881FC550: goto loc_881FC550;
		case 0x881FC5B0: goto loc_881FC5B0;
		case 0x881FC5BC: goto loc_881FC5BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x881FC480;
	__savegprlr_27(ctx, base);
loc_881FC480:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x881FC480;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.current_instruction = 0x881FC484;
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
	// bl 0x88211e78
	ctx.lr = 0x881FC4A0;
	sub_88211E78(ctx, base);
loc_881FC4A0:
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r28,r31,22432
	ctx.r28.s64 = ctx.r31.s64 + 22432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24352(r10)
	ctx.current_instruction = 0x881FC4AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x881FC4B4;
	sub_881FC868(ctx, base);
loc_881FC4B4:
	// addi r29,r30,1408
	ctx.r29.s64 = ctx.r30.s64 + 1408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88212f48
	ctx.lr = 0x881FC4C8;
	sub_88212F48(ctx, base);
loc_881FC4C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc600
	if (!ctx.cr6.eq) goto loc_881FC600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88242bc0
	ctx.lr = 0x881FC4E0;
	sub_88242BC0(ctx, base);
loc_881FC4E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc600
	if (!ctx.cr6.eq) goto loc_881FC600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8823be68
	ctx.lr = 0x881FC4F8;
	sub_8823BE68(ctx, base);
loc_881FC4F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc600
	if (!ctx.cr6.eq) goto loc_881FC600;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC500;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
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
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x88217750
	ctx.lr = 0x881FC520;
	sub_88217750(ctx, base);
loc_881FC520:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881fc600
	if (!ctx.cr6.eq) goto loc_881FC600;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881FC528;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881fc5b0
	if (ctx.cr6.eq) goto loc_881FC5B0;
	// lhz r11,52(r30)
	ctx.current_instruction = 0x881FC534;
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
	ctx.lr = 0x881FC550;
	sub_8817FD58(ctx, base);
loc_881FC550:
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881FC550;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.current_instruction = 0x881FC554;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881FC560;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,3780(r31)
	ctx.current_instruction = 0x881FC568;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881FC56C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,220(r31)
	ctx.current_instruction = 0x881FC574;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,1368(r30)
	ctx.current_instruction = 0x881FC57C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 1368);
	// lwz r29,3776(r31)
	ctx.current_instruction = 0x881FC580;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// lhz r30,52(r30)
	ctx.current_instruction = 0x881FC588;
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
	ctx.lr = 0x881FC5B0;
	sub_8817EA48(ctx, base);
loc_881FC5B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x881FC5BC;
	sub_881FCBB0(ctx, base);
loc_881FC5BC:
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881FC5BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881fc5e4
	if (!ctx.cr6.eq) goto loc_881FC5E4;
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x881FC5C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881fc5e4
	if (!ctx.cr6.eq) goto loc_881FC5E4;
	// lwz r11,15260(r31)
	ctx.current_instruction = 0x881FC5D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x881fc5e8
	if (ctx.cr6.eq) goto loc_881FC5E8;
loc_881FC5E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_881FC5E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	ctx.current_instruction = 0x881FC5EC;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,15628(r31)
	ctx.current_instruction = 0x881FC5F4;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,15600(r31)
	ctx.current_instruction = 0x881FC5FC;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r9.u32);
loc_881FC600:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88215008) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88215008;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88215008) {
			switch (rex_dispatch_address) {
				case 0x88215168:
				case 0x88215220:
				case 0x88215284:
				case 0x88215300:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88215008;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88215168: goto loc_88215168;
		case 0x88215220: goto loc_88215220;
		case 0x88215284: goto loc_88215284;
		case 0x88215300: goto loc_88215300;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// addic r1,r1,-56
	ctx.xer.ca = ctx.r1.u32 > 55;
	ctx.r1.s64 = ctx.r1.s64 + -56;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r12,56(r1)
	ctx.current_instruction = 0x88215014;
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r12.u32);
	// std r31,48(r1)
	ctx.current_instruction = 0x88215018;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r31.u64);
	// std r30,40(r1)
	ctx.current_instruction = 0x8821501C;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r30.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,0(r1)
	ctx.current_instruction = 0x88215024;
	REX_STORE_U32(ctx.r1.u32 + 0, ctx.r3.u32);
	// stw r4,8(r1)
	ctx.current_instruction = 0x88215028;
	REX_STORE_U32(ctx.r1.u32 + 8, ctx.r4.u32);
	// stw r5,16(r1)
	ctx.current_instruction = 0x8821502C;
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r5.u32);
	// stw r6,24(r1)
	ctx.current_instruction = 0x88215030;
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r6.u32);
	// lwz r11,0(r4)
	ctx.current_instruction = 0x88215034;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r12,8(r4)
	ctx.current_instruction = 0x88215038;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r12,1
	ctx.r5.s64 = ctx.r12.s64 + 1;
	// lwz r2,4(r4)
	ctx.current_instruction = 0x88215040;
	ctx.r2.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,36(r4)
	ctx.current_instruction = 0x88215044;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r4,0(r3)
	ctx.current_instruction = 0x88215048;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88215050;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215054;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.current_instruction = 0x8821505C;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
loc_88215060:
	// rldicl r11,r7,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 10) & 0x3FF;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.current_instruction = 0x88215068;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrldi r11,r8,60
	ctx.r11.u64 = ctx.r8.u64 & 0xF;
	// blt cr6,0x882151ec
	if (ctx.cr6.lt) goto loc_882151EC;
	// sld r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf. r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x88215114
	if (ctx.cr0.lt) goto loc_88215114;
loc_8821508C:
	// rldicl r11,r7,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0x1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rldicr r7,r7,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// blt 0x88215250
	if (ctx.cr0.lt) goto loc_88215250;
loc_8821509C:
	// rldicr r12,r8,1,62
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r11,r11,7,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 7) & 0xFFFFFFFFFFFFFF80;
	// cmpw cr6,r8,r2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// cmpw cr5,r8,r5
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lhzx r12,r31,r12
	ctx.current_instruction = 0x882150AC;
	ctx.r12.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r12.u32);
	// or r12,r12,r11
	ctx.r12.u64 = ctx.r12.u64 | ctx.r11.u64;
	// sth r12,0(r3)
	ctx.current_instruction = 0x882150B4;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r12.u16);
	// clrldi r12,r12,57
	ctx.r12.u64 = ctx.r12.u64 & 0x7F;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r12,r12,1
	ctx.r12.s64 = ctx.r12.s64 + 1;
	// subf. r10,r12,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cror 4*cr1+eq,lt,4*cr6+eq
	ctx.cr1.eq = ctx.cr0.lt | ctx.cr6.eq;
	// crorc eq,4*cr1+eq,4*cr5+lt
	ctx.cr0.eq = ctx.cr1.eq | !(ctx.cr5.lt);
	// bne 0x88215060
	if (!ctx.cr0.eq) goto loc_88215060;
	// std r7,0(r4)
	ctx.current_instruction = 0x882150D4;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,8(r4)
	ctx.current_instruction = 0x882150DC;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8821538c
	if (ctx.cr6.lt) goto loc_8821538C;
	// cmpw cr5,r8,r2
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// beq cr5,0x882152b8
	if (ctx.cr5.eq) goto loc_882152B8;
loc_882150EC:
	// lwz r4,24(r1)
	ctx.current_instruction = 0x882150EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r12,56(r1)
	ctx.current_instruction = 0x882150F0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// ld r31,48(r1)
	ctx.current_instruction = 0x88215100;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// ld r30,40(r1)
	ctx.current_instruction = 0x88215108;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addic r1,r1,56
	ctx.xer.ca = ctx.r1.u32 > 4294967239;
	ctx.r1.s64 = ctx.r1.s64 + 56;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88215114:
	// lwz r12,12(r4)
	ctx.current_instruction = 0x88215114;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,16(r4)
	ctx.current_instruction = 0x88215118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r11,r12,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r12.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x882151b4
	if (ctx.cr6.gt) goto loc_882151B4;
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	ctx.current_instruction = 0x8821512C;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	ctx.current_instruction = 0x88215130;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	ctx.current_instruction = 0x88215134;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x88215138;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x88215140;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	ctx.current_instruction = 0x88215144;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	ctx.current_instruction = 0x88215148;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	ctx.current_instruction = 0x8821514C;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	ctx.current_instruction = 0x88215150;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	ctx.current_instruction = 0x88215154;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x88215158;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x8821515C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	ctx.current_instruction = 0x88215160;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x88156440
	ctx.lr = 0x88215168;
	sub_88156440(ctx, base);
loc_88215168:
	// ld r4,24(r1)
	ctx.current_instruction = 0x88215168;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r6,40(r1)
	ctx.current_instruction = 0x8821516C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r12,88(r1)
	ctx.current_instruction = 0x88215170;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r12,r3
	ctx.r12.u64 = ctx.r3.u64;
	// ld r7,48(r1)
	ctx.current_instruction = 0x88215178;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r2,8(r1)
	ctx.current_instruction = 0x8821517C;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// cmpwi cr6,r12,1
	ctx.cr6.compare<int32_t>(ctx.r12.s32, 1, ctx.xer);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215184;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r5,32(r1)
	ctx.current_instruction = 0x88215188;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.current_instruction = 0x8821518C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r9,64(r1)
	ctx.current_instruction = 0x88215194;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.current_instruction = 0x88215198;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.current_instruction = 0x8821519C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,16(r1)
	ctx.current_instruction = 0x882151A0;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.current_instruction = 0x882151A8;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// bne cr6,0x8821508c
	if (!ctx.cr6.eq) goto loc_8821508C;
	// b 0x88215114
	goto loc_88215114;
loc_882151B4:
	// lhz r11,0(r12)
	ctx.current_instruction = 0x882151B4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r12.u32 + 0);
	// lhz r0,2(r12)
	ctx.current_instruction = 0x882151B8;
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
	ctx.current_instruction = 0x882151CC;
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + -2);
	// stw r12,12(r4)
	ctx.current_instruction = 0x882151D0;
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
	// b 0x8821508c
	goto loc_8821508C;
loc_882151EC:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	ctx.current_instruction = 0x882151F0;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	ctx.current_instruction = 0x882151F4;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r2,8(r1)
	ctx.current_instruction = 0x882151FC;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x88215200;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x88215208;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	ctx.current_instruction = 0x8821520C;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r9,64(r1)
	ctx.current_instruction = 0x88215214;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x88215218;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// bl 0x88214d80
	ctx.lr = 0x88215220;
	sub_88214D80(ctx, base);
loc_88215220:
	// ld r4,24(r1)
	ctx.current_instruction = 0x88215220;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r5,32(r1)
	ctx.current_instruction = 0x88215228;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r2,8(r1)
	ctx.current_instruction = 0x8821522C;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r9,64(r1)
	ctx.current_instruction = 0x88215230;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.current_instruction = 0x88215234;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215238;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r3,16(r1)
	ctx.current_instruction = 0x8821523C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.current_instruction = 0x88215244;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// b 0x8821508c
	goto loc_8821508C;
loc_88215250:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	ctx.current_instruction = 0x88215254;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	ctx.current_instruction = 0x88215258;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	ctx.current_instruction = 0x8821525C;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x88215260;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x88215268;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	ctx.current_instruction = 0x8821526C;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r8,56(r1)
	ctx.current_instruction = 0x88215270;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	ctx.current_instruction = 0x88215274;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x88215278;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x8821527C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x88214f38
	ctx.lr = 0x88215284;
	sub_88214F38(ctx, base);
loc_88215284:
	// ld r4,24(r1)
	ctx.current_instruction = 0x88215284;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r2,8(r1)
	ctx.current_instruction = 0x88215288;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r5,32(r1)
	ctx.current_instruction = 0x8821528C;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.current_instruction = 0x88215290;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.current_instruction = 0x88215294;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215298;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r10,72(r1)
	ctx.current_instruction = 0x8821529C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.current_instruction = 0x882152A0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r3,16(r1)
	ctx.current_instruction = 0x882152A8;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.current_instruction = 0x882152B0;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x8821509c
	goto loc_8821509C;
loc_882152B8:
	// lwz r6,0(r1)
	ctx.current_instruction = 0x882152B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r7,8(r1)
	ctx.current_instruction = 0x882152BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r2,8(r1)
	ctx.current_instruction = 0x882152C4;
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	ctx.current_instruction = 0x882152C8;
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r4,24(r1)
	ctx.current_instruction = 0x882152D0;
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r5,32(r1)
	ctx.current_instruction = 0x882152D8;
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// rlwinm r5,r11,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// std r6,40(r1)
	ctx.current_instruction = 0x882152E0;
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	ctx.current_instruction = 0x882152E4;
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	ctx.current_instruction = 0x882152E8;
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	ctx.current_instruction = 0x882152EC;
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	ctx.current_instruction = 0x882152F0;
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	ctx.current_instruction = 0x882152F4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	ctx.current_instruction = 0x882152F8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// bl 0x881fd470
	ctx.lr = 0x88215300;
	sub_881FD470(ctx, base);
loc_88215300:
	// ld r8,56(r1)
	ctx.current_instruction = 0x88215300;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// addic. r8,r3,0
	ctx.xer.ca = ctx.r3.u32 > 4294967295;
	ctx.r8.s64 = ctx.r3.s64 + 0;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r2,8(r1)
	ctx.current_instruction = 0x88215308;
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r4,24(r1)
	ctx.current_instruction = 0x8821530C;
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.current_instruction = 0x88215310;
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.current_instruction = 0x88215314;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.current_instruction = 0x88215318;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r9,64(r1)
	ctx.current_instruction = 0x8821531C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.current_instruction = 0x88215320;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.current_instruction = 0x88215324;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r12,88(r1)
	ctx.current_instruction = 0x88215328;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,16(r1)
	ctx.current_instruction = 0x8821532C;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blt 0x8821538c
	if (ctx.cr0.lt) goto loc_8821538C;
	// clrldi r11,r8,57
	ctx.r11.u64 = ctx.r8.u64 & 0x7F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r12,r11,r12
	ctx.r12.u64 = ctx.r12.u64 - ctx.r11.u64;
	// rlwinm r11,r8,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// add r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 + ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8821536c
	if (ctx.cr6.eq) goto loc_8821536C;
	// ori r12,r8,64
	ctx.r12.u64 = ctx.r8.u64 | 64;
	// li r30,128
	ctx.r30.s64 = 128;
	// sth r12,-2(r3)
	ctx.current_instruction = 0x8821535C;
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r12.u16);
	// sth r11,0(r3)
	ctx.current_instruction = 0x88215360;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x88215370
	goto loc_88215370;
loc_8821536C:
	// sth r8,-2(r3)
	ctx.current_instruction = 0x8821536C;
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r8.u16);
loc_88215370:
	// lwz r6,8(r4)
	ctx.current_instruction = 0x88215370;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r8,16,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// ld r7,0(r4)
	ctx.current_instruction = 0x88215378;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x88215060
	if (ctx.cr6.lt) goto loc_88215060;
	// b 0x882150ec
	goto loc_882150EC;
loc_8821538C:
	// lwz r12,56(r1)
	ctx.current_instruction = 0x8821538C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,-1
	ctx.r3.s64 = -1;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	ctx.current_instruction = 0x88215398;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	ctx.current_instruction = 0x8821539C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addic r1,r1,56
	ctx.xer.ca = ctx.r1.u32 > 4294967239;
	ctx.r1.s64 = ctx.r1.s64 + 56;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88219910) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88219910;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88219910) {
			switch (rex_dispatch_address) {
				case 0x88219918:
				case 0x88219960:
				case 0x88219978:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88219910;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88219918: goto loc_88219918;
		case 0x88219960: goto loc_88219960;
		case 0x88219978: goto loc_88219978;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88219918;
	__savegprlr_29(ctx, base);
loc_88219918:
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88219920;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// vslh v12,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// vsubshs v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x882186f8
	ctx.lr = 0x88219960;
	sub_882186F8(ctx, base);
loc_88219960:
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88219210
	ctx.lr = 0x88219978;
	sub_88219210(ctx, base);
loc_88219978:
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

DEFINE_REX_FUNC(sub_8821AA40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821AA40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821AA40) {
			switch (rex_dispatch_address) {
				case 0x8821AA48:
				case 0x8821ADEC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821AA40;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821AA48: goto loc_8821AA48;
		case 0x8821ADEC: goto loc_8821ADEC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8821AA48;
	__savegprlr_29(ctx, base);
loc_8821AA48:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8821AA48;
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
	// vaddshs v30,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
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
	// bne cr6,0x8821abf0
	if (!ctx.cr6.eq) goto loc_8821ABF0;
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
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821addc
	if (!ctx.cr6.gt) goto loc_8821ADDC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8821AB10:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v3,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vadduhm v23,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v26,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v22,v3,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor v4,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v31
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v16,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v6,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v31,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v3,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v28,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v26,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v24,v28,v31
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsubshs v23,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsubshs v22,v7,v14
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v21,v26,v30
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v20,v24,v30
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v19,v23,v27
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v18,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v6,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v3,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v17,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x8821ab10
	if (ctx.cr6.lt) goto loc_8821AB10;
	// b 0x8821addc
	goto loc_8821ADDC;
loc_8821ABF0:
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
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x8821addc
	if (!ctx.cr6.gt) goto loc_8821ADDC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_8821AC7C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v28,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v41,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v19,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v2
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v17,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v25,v31
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v14,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v22,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrghb v15,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v26,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v25,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v31,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vadduhm v19,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v21,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v14,v16
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v21,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vor v4,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// vslh v19,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubshs v15,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v14,v31,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v24,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v28,v22,v30
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v27,v20,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vslh v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v20,v15,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v14,v21
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubshs v18,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v17,v4,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v16,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v15,v28,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v14,v27,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v28,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v27,v16,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vsrah v26,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// stvx128 v26,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x8821ac7c
	if (ctx.cr6.lt) goto loc_8821AC7C;
loc_8821ADDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88219500
	ctx.lr = 0x8821ADEC;
	sub_88219500(ctx, base);
loc_8821ADEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223B68) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88223B68);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223B68;
	ctx.current_instruction = 0x88223B68;
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x882225e0
	sub_882225E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88223DD0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88223DD0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88223DD0) {
			switch (rex_dispatch_address) {
				case 0x88223DD8:
				case 0x88224358:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88223DD0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88223DD8: goto loc_88223DD8;
		case 0x88224358: goto loc_88224358;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88223DD8;
	__savegprlr_14(ctx, base);
loc_88223DD8:
	// stwu r1,-1024(r1)
	ctx.current_instruction = 0x88223DD8;
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	ctx.current_instruction = 0x88223DE0;
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	ctx.current_instruction = 0x88223DE8;
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	ctx.current_instruction = 0x88223DFC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x88224280
	if (ctx.cr6.eq) goto loc_88224280;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x882240bc
	if (ctx.cr6.eq) goto loc_882240BC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224048
	if (!ctx.cr6.gt) goto loc_88224048;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	ctx.current_instruction = 0x88223E24;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	ctx.r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
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
	// li r15,144
	ctx.r15.s64 = 144;
	// li r16,192
	ctx.r16.s64 = 192;
	// li r17,240
	ctx.r17.s64 = 240;
	// li r18,-80
	ctx.r18.s64 = -80;
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r20,64
	ctx.r20.s64 = 64;
	// li r21,112
	ctx.r21.s64 = 112;
	// li r22,160
	ctx.r22.s64 = 160;
	// li r23,208
	ctx.r23.s64 = 208;
	// li r24,256
	ctx.r24.s64 = 256;
loc_88223E70:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	ctx.current_instruction = 0x88223E8C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	ctx.r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	ctx.r27.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	ctx.r29.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	ctx.r25.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (ctx.r29.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + ctx.r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + ctx.r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + ctx.r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x88223e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88223E70;
	// lwz r28,1068(r1)
	ctx.current_instruction = 0x88224040;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x88224044;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_88224048:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88224340
	if (!ctx.cr6.gt) goto loc_88224340;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8822407C:
	// lbzx r6,r29,r11
	ctx.current_instruction = 0x8822407C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ctx.current_instruction = 0x88224080;
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	ctx.current_instruction = 0x88224088;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = ctx.r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// sth r3,48(r9)
	ctx.current_instruction = 0x882240A8;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ctx.current_instruction = 0x882240B0;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8822407c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8822407C;
	// b 0x88224340
	goto loc_88224340;
loc_882240BC:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	ctx.r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	ctx.r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	ctx.r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	ctx.r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r5,4
	ctx.r5.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88224240:
	// lbzx r6,r10,r5
	ctx.current_instruction = 0x88224240;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ctx.current_instruction = 0x88224244;
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	ctx.current_instruction = 0x88224248;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r6,48(r9)
	ctx.current_instruction = 0x8822426C;
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ctx.current_instruction = 0x88224274;
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x88224240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88224240;
	// b 0x88224340
	goto loc_88224340;
loc_88224280:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	ctx.r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_88224340:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.current_instruction = 0x88224344;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88222df8
	ctx.lr = 0x88224358;
	sub_88222DF8(ctx, base);
loc_88224358:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

