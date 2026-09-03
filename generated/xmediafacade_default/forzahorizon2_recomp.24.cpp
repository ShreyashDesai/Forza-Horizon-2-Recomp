#include "forzahorizon2_funcs.24.h"

DEFINE_REX_FUNC(sub_88050238) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050238);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88050238;
	ctx.current_instruction = 0x88050238;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,108(r11)
	ctx.current_instruction = 0x88050240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_15) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88050864);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x88050864;
	ctx.current_instruction = 0x88050864;
	// ld r15,-144(r1)
	ctx.current_instruction = 0x88050864;
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.current_instruction = 0x88050868;
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.current_instruction = 0x8805086C;
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.current_instruction = 0x88050870;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.current_instruction = 0x88050874;
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.current_instruction = 0x88050878;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.current_instruction = 0x8805087C;
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.current_instruction = 0x88050880;
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.current_instruction = 0x88050884;
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.current_instruction = 0x88050888;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.current_instruction = 0x8805088C;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
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

DEFINE_REX_FUNC(sub_88052358) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88052358;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88052358) {
			switch (rex_dispatch_address) {
				case 0x88052370:
				case 0x8805238C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88052358;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88052370: goto loc_88052370;
		case 0x8805238C: goto loc_8805238C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805235C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88052360;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88052368;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x88050a80
	ctx.lr = 0x88052370;
	sub_88050A80(ctx, base);
loc_88052370:
	// lwz r11,108(r3)
	ctx.current_instruction = 0x88052370;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88052398
	if (ctx.cr6.eq) goto loc_88052398;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8805238C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805238C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_88052398:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x88243650
	ctx.lr = 0x880523A4;
	__imp__KeBugCheck(ctx, base);
}

DEFINE_REX_FUNC(sub_880547A0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880547A0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880547A0;
	ctx.current_instruction = 0x880547A0;
	uint32_t ea{};
	// std r3,-8(r1)
	ctx.current_instruction = 0x880547A0;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// clrlwi r6,r3,29
	ctx.r6.u64 = ctx.r3.u32 & 0x7;
	// dcbt r0,r4
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,8
	ctx.xer.ca = ctx.r6.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - ctx.r6.u64;
	// beq 0x88054804
	if (ctx.cr0.eq) goto loc_88054804;
	// cmplw r5,r6
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble 0x88054820
	if (!ctx.cr0.gt) goto loc_88054820;
	// cmplwi r6,4
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq 0x880547f0
	if (ctx.cr0.eq) goto loc_880547F0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_880547D8:
	// lbzu r6,1(r4)
	ctx.current_instruction = 0x880547D8;
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ctx.current_instruction = 0x880547DC;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x880547d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880547D8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x88054804
	goto loc_88054804;
loc_880547F0:
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lwz r6,0(r4)
	ctx.current_instruction = 0x880547F4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r6,0(r3)
	ctx.current_instruction = 0x880547FC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_88054804:
	// clrlwi r6,r4,29
	ctx.r6.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// cmplwi cr1,r6,0
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// cmplwi cr7,r5,128
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// beq cr6,0x880549e8
	if (ctx.cr6.eq) goto loc_880549E8;
	// bne cr1,0x88054b18
	if (!ctx.cr1.eq) goto loc_88054B18;
	// bge cr7,0x880548bc
	if (!ctx.cr7.lt) goto loc_880548BC;
loc_88054820:
	// dcbtst r0,r3
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_8805482C:
	// rlwinm r7,r5,29,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0xF;
	// clrlwi r6,r5,29
	ctx.r6.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x88054850
	if (ctx.cr1.eq) goto loc_88054850;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88054844:
	// ldu r7,8(r4)
	ctx.current_instruction = 0x88054844;
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ctx.current_instruction = 0x88054848;
	ea = 8 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x88054844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054844;
loc_88054850:
	// cmplwi cr1,r6,4
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x88054874
	if (ctx.cr6.eq) goto loc_88054874;
	// beq cr1,0x8805487c
	if (ctx.cr1.eq) goto loc_8805487C;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88054868:
	// lbzu r7,1(r4)
	ctx.current_instruction = 0x88054868;
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ctx.current_instruction = 0x8805486C;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x88054868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054868;
loc_88054874:
	// ld r3,-8(r1)
	ctx.current_instruction = 0x88054874;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8805487C:
	// clrlwi r6,r3,30
	ctx.r6.u64 = ctx.r3.u32 & 0x3;
	// lwz r5,8(r4)
	ctx.current_instruction = 0x88054880;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x88054898
	if (!ctx.cr0.eq) goto loc_88054898;
	// stw r5,8(r3)
	ctx.current_instruction = 0x8805488C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r3,-8(r1)
	ctx.current_instruction = 0x88054890;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88054898:
	// lbz r8,8(r4)
	ctx.current_instruction = 0x88054898;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r7,9(r4)
	ctx.current_instruction = 0x8805489C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r6,10(r4)
	ctx.current_instruction = 0x880548A0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,8(r3)
	ctx.current_instruction = 0x880548A4;
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stb r7,9(r3)
	ctx.current_instruction = 0x880548A8;
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// stb r6,10(r3)
	ctx.current_instruction = 0x880548AC;
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r6.u8);
	// stb r5,11(r3)
	ctx.current_instruction = 0x880548B0;
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r5.u8);
	// ld r3,-8(r1)
	ctx.current_instruction = 0x880548B4;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880548BC:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// beq 0x880548ec
	if (ctx.cr0.eq) goto loc_880548EC;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_880548E0:
	// ldu r7,8(r4)
	ctx.current_instruction = 0x880548E0;
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ctx.current_instruction = 0x880548E4;
	ea = 8 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x880548e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880548E0;
loc_880548EC:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x8805482c
	if (ctx.cr0.eq) goto loc_8805482C;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8805491C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x8805491c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805491C;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.u64 = ctx.r12.u64 - ctx.r9.u64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8805493C:
	// ld r6,8(r4)
	ctx.current_instruction = 0x8805493C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,16(r4)
	ctx.current_instruction = 0x88054940;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// ld r8,24(r4)
	ctx.current_instruction = 0x88054944;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,8(r3)
	ctx.current_instruction = 0x88054948;
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// ld r6,32(r4)
	ctx.current_instruction = 0x8805494C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// std r7,16(r3)
	ctx.current_instruction = 0x88054950;
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// ld r7,40(r4)
	ctx.current_instruction = 0x88054954;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,24(r3)
	ctx.current_instruction = 0x88054958;
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// ld r8,48(r4)
	ctx.current_instruction = 0x8805495C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,32(r3)
	ctx.current_instruction = 0x88054960;
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// ld r6,56(r4)
	ctx.current_instruction = 0x88054964;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
	// std r7,40(r3)
	ctx.current_instruction = 0x88054968;
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// ld r7,64(r4)
	ctx.current_instruction = 0x8805496C;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,48(r3)
	ctx.current_instruction = 0x88054970;
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// ld r8,72(r4)
	ctx.current_instruction = 0x88054974;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 72);
	// std r6,56(r3)
	ctx.current_instruction = 0x88054978;
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r6,80(r4)
	ctx.current_instruction = 0x8805497C;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 80);
	// std r7,64(r3)
	ctx.current_instruction = 0x88054980;
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// ld r7,88(r4)
	ctx.current_instruction = 0x88054984;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 88);
	// std r8,72(r3)
	ctx.current_instruction = 0x88054988;
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// ld r8,96(r4)
	ctx.current_instruction = 0x8805498C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 96);
	// std r6,80(r3)
	ctx.current_instruction = 0x88054990;
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r6.u64);
	// ld r6,104(r4)
	ctx.current_instruction = 0x88054994;
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 104);
	// std r7,88(r3)
	ctx.current_instruction = 0x88054998;
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// ld r7,112(r4)
	ctx.current_instruction = 0x8805499C;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 112);
	// std r8,96(r3)
	ctx.current_instruction = 0x880549A0;
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r8,120(r4)
	ctx.current_instruction = 0x880549A4;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 120);
	// std r6,104(r3)
	ctx.current_instruction = 0x880549A8;
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ldu r6,128(r4)
	ctx.current_instruction = 0x880549AC;
	ea = 128 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// std r7,112(r3)
	ctx.current_instruction = 0x880549B0;
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// std r8,120(r3)
	ctx.current_instruction = 0x880549B4;
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r8.u64);
	// stdu r6,128(r3)
	ctx.current_instruction = 0x880549B8;
	ea = 128 + ctx.r3.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r3.u32 = ea;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x880549d0
	if (!ctx.cr0.lt) goto loc_880549D0;
	// dcbt r9,r4
	// bdnz 0x8805493c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805493C;
	// b 0x8805482c
	goto loc_8805482C;
loc_880549D0:
	// beq cr1,0x880549e0
	if (ctx.cr1.eq) goto loc_880549E0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_880549E0:
	// bdnz 0x8805493c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8805493C;
	// b 0x8805482c
	goto loc_8805482C;
loc_880549E8:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// bge cr7,0x88054a40
	if (!ctx.cr7.lt) goto loc_88054A40;
	// dcbtst r0,r3
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_880549F8:
	// rlwinm r7,r5,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1F;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x88054a1c
	if (ctx.cr1.eq) goto loc_88054A1C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88054A10:
	// lwzu r7,4(r4)
	ctx.current_instruction = 0x88054A10;
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ctx.current_instruction = 0x88054A14;
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x88054a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054A10;
loc_88054A1C:
	// beq cr6,0x88054a38
	if (ctx.cr6.eq) goto loc_88054A38;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88054A2C:
	// lbzu r7,1(r4)
	ctx.current_instruction = 0x88054A2C;
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ctx.current_instruction = 0x88054A30;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x88054a2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054A2C;
loc_88054A38:
	// ld r3,-8(r1)
	ctx.current_instruction = 0x88054A38;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88054A40:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// beq 0x88054a6c
	if (ctx.cr0.eq) goto loc_88054A6C;
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_88054A60:
	// lwzu r7,4(r4)
	ctx.current_instruction = 0x88054A60;
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ctx.current_instruction = 0x88054A64;
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x88054a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054A60;
loc_88054A6C:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x880549f8
	if (ctx.cr0.eq) goto loc_880549F8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88054A9C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x88054a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054A9C;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.u64 = ctx.r12.u64 - ctx.r9.u64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88054ABC:
	// li r6,8
	ctx.r6.s64 = 8;
loc_88054AC0:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r0,4(r4)
	ctx.current_instruction = 0x88054AC4;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.current_instruction = 0x88054AC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.current_instruction = 0x88054ACC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r0,4(r3)
	ctx.current_instruction = 0x88054AD4;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r0.u32);
	// lwzu r0,16(r4)
	ctx.current_instruction = 0x88054AD8;
	ea = 16 + ctx.r4.u32;
	ctx.r0.u64 = REX_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stw r7,8(r3)
	ctx.current_instruction = 0x88054ADC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	ctx.current_instruction = 0x88054AE0;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwu r0,16(r3)
	ctx.current_instruction = 0x88054AE4;
	ea = 16 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r0.u32);
	ctx.r3.u32 = ea;
	// bne 0x88054ac0
	if (!ctx.cr0.eq) goto loc_88054AC0;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x88054b00
	if (!ctx.cr0.lt) goto loc_88054B00;
	// dcbt r9,r4
	// bdnz 0x88054abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054ABC;
	// b 0x880549f8
	goto loc_880549F8;
loc_88054B00:
	// beq cr1,0x88054b10
	if (ctx.cr1.eq) goto loc_88054B10;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_88054B10:
	// bdnz 0x88054abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054ABC;
	// b 0x880549f8
	goto loc_880549F8;
loc_88054B18:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bge cr7,0x88054b4c
	if (!ctx.cr7.lt) goto loc_88054B4C;
	// dcbtst r0,r3
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_88054B28:
	// clrlwi r6,r5,25
	ctx.r6.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// beq 0x88054b44
	if (ctx.cr0.eq) goto loc_88054B44;
loc_88054B38:
	// lbzu r6,1(r4)
	ctx.current_instruction = 0x88054B38;
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ctx.current_instruction = 0x88054B3C;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x88054b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054B38;
loc_88054B44:
	// ld r3,-8(r1)
	ctx.current_instruction = 0x88054B44;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88054B4C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// beq 0x88054b74
	if (ctx.cr0.eq) goto loc_88054B74;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88054B68:
	// lbzu r6,1(r4)
	ctx.current_instruction = 0x88054B68;
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ctx.current_instruction = 0x88054B6C;
	ea = 1 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x88054b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054B68;
loc_88054B74:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x88054b28
	if (ctx.cr0.eq) goto loc_88054B28;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_88054BA4:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x88054ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054BA4;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r9,r12
	ctx.r11.u64 = ctx.r12.u64 - ctx.r9.u64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_88054BC4:
	// li r6,32
	ctx.r6.s64 = 32;
loc_88054BC8:
	// lbz r7,4(r4)
	ctx.current_instruction = 0x88054BC8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r8,3(r4)
	ctx.current_instruction = 0x88054BCC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,2(r4)
	ctx.current_instruction = 0x88054BD8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,1(r4)
	ctx.current_instruction = 0x88054BE4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r7,1(r3)
	ctx.current_instruction = 0x88054BF0;
	REX_STORE_U32(ctx.r3.u32 + 1, ctx.r7.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x88054bc8
	if (!ctx.cr0.eq) goto loc_88054BC8;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x88054c10
	if (!ctx.cr0.lt) goto loc_88054C10;
	// dcbt r9,r4
	// bdnz 0x88054bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054BC4;
	// b 0x88054b28
	goto loc_88054B28;
loc_88054C10:
	// beq cr1,0x88054c20
	if (ctx.cr1.eq) goto loc_88054C20;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_88054C20:
	// bdnz 0x88054bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88054BC4;
	// b 0x88054b28
	goto loc_88054B28;
}

DEFINE_REX_FUNC(sub_88062438) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88062438;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88062438) {
			switch (rex_dispatch_address) {
				case 0x8806244C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88062438;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806244C: goto loc_8806244C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806243C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88062440;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x88057958
	ctx.lr = 0x8806244C;
	sub_88057958(ctx, base);
loc_8806244C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88062454;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88063B18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88063B18);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063B18;
	ctx.current_instruction = 0x88063B18;
	uint32_t ea{};
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88063B30:
	// stwu r8,4(r10)
	ctx.current_instruction = 0x88063B30;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x88063b30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88063B30;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88063B38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,24(r5)
	ctx.current_instruction = 0x88063B40;
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r4,28(r5)
	ctx.current_instruction = 0x88063B44;
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// stw r9,32(r5)
	ctx.current_instruction = 0x88063B48;
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r9.u32);
	// stw r10,0(r5)
	ctx.current_instruction = 0x88063B4C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x88063B50;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x88063b98
	if (ctx.cr6.eq) goto loc_88063B98;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x88063b70
	if (ctx.cr6.eq) goto loc_88063B70;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,184
	ctx.r3.u64 = ctx.r3.u64 | 184;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063B70:
	// stw r3,8(r5)
	ctx.current_instruction = 0x88063B70;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x88063B78;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.current_instruction = 0x88063B7C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,12(r5)
	ctx.current_instruction = 0x88063B80;
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88063B84;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r7)
	ctx.current_instruction = 0x88063B88;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,4(r5)
	ctx.current_instruction = 0x88063B8C;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r6,16(r5)
	ctx.current_instruction = 0x88063B90;
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88063B98:
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88063B98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88063BA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,8(r5)
	ctx.current_instruction = 0x88063BA4;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.current_instruction = 0x88063BA8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r6,14(r7)
	ctx.current_instruction = 0x88063BAC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// stw r9,4(r5)
	ctx.current_instruction = 0x88063BB0;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stb r6,12(r5)
	ctx.current_instruction = 0x88063BB4;
	REX_STORE_U8(ctx.r5.u32 + 12, ctx.r6.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065588) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88065588);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065588;
	ctx.current_instruction = 0x88065588;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	ctx.current_instruction = 0x8806558C;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x88065590;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x88065594;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,112(r3)
	ctx.current_instruction = 0x88065598;
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	ctx.current_instruction = 0x8806559C;
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	ctx.current_instruction = 0x880655A0;
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065B60) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88065B60);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065B60;
	ctx.current_instruction = 0x88065B60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88065b80
	if (ctx.cr6.eq) goto loc_88065B80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x88065b80
	if (ctx.cr6.eq) goto loc_88065B80;
	// lhz r11,238(r3)
	ctx.current_instruction = 0x88065B70;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 238);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	ctx.current_instruction = 0x88065B78;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88065B80:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065F08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88065F08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88065F08) {
			switch (rex_dispatch_address) {
				case 0x88065F10:
				case 0x88065F70:
				case 0x88066294:
				case 0x880662CC:
				case 0x88066304:
				case 0x8806633C:
				case 0x88066374:
				case 0x880663AC:
				case 0x880663D0:
				case 0x8806641C:
				case 0x880664BC:
				case 0x88066710:
				case 0x88066728:
				case 0x88066740:
				case 0x88066844:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065F08;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88065F10: goto loc_88065F10;
		case 0x88065F70: goto loc_88065F70;
		case 0x88066294: goto loc_88066294;
		case 0x880662CC: goto loc_880662CC;
		case 0x88066304: goto loc_88066304;
		case 0x8806633C: goto loc_8806633C;
		case 0x88066374: goto loc_88066374;
		case 0x880663AC: goto loc_880663AC;
		case 0x880663D0: goto loc_880663D0;
		case 0x8806641C: goto loc_8806641C;
		case 0x880664BC: goto loc_880664BC;
		case 0x88066710: goto loc_88066710;
		case 0x88066728: goto loc_88066728;
		case 0x88066740: goto loc_88066740;
		case 0x88066844: goto loc_88066844;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88065F10;
	__savegprlr_14(ctx, base);
loc_88065F10:
	// stwu r1,-512(r1)
	ctx.current_instruction = 0x88065F10;
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// sth r5,550(r1)
	ctx.current_instruction = 0x88065F18;
	REX_STORE_U16(ctx.r1.u32 + 550, ctx.r5.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,556(r1)
	ctx.current_instruction = 0x88065F20;
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r19,240(r1)
	ctx.current_instruction = 0x88065F28;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// stw r19,248(r1)
	ctx.current_instruction = 0x88065F30;
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r19.u32);
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// stw r19,244(r1)
	ctx.current_instruction = 0x88065F38;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r19,236(r1)
	ctx.current_instruction = 0x88065F40;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r19.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// beq cr6,0x88066868
	if (ctx.cr6.eq) goto loc_88066868;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88066868
	if (ctx.cr6.eq) goto loc_88066868;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88066868
	if (ctx.cr6.eq) goto loc_88066868;
	// sth r10,236(r3)
	ctx.current_instruction = 0x88065F64;
	REX_STORE_U16(ctx.r3.u32 + 236, ctx.r10.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x880d0210
	ctx.lr = 0x88065F70;
	sub_880D0210(ctx, base);
loc_88065F70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x88065f84
	if (ctx.cr6.eq) goto loc_88065F84;
loc_88065F78:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88065F84:
	// lwz r11,64(r31)
	ctx.current_instruction = 0x88065F84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065f78
	if (ctx.cr6.eq) goto loc_88065F78;
	// lhz r11,76(r31)
	ctx.current_instruction = 0x88065F90;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065f78
	if (ctx.cr6.eq) goto loc_88065F78;
	// lwz r11,72(r31)
	ctx.current_instruction = 0x88065F9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065f78
	if (ctx.cr6.eq) goto loc_88065F78;
	// lwz r11,68(r31)
	ctx.current_instruction = 0x88065FA8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88065f78
	if (ctx.cr6.eq) goto loc_88065F78;
	// lwz r20,232(r31)
	ctx.current_instruction = 0x88065FB4;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x880663f8
	if (ctx.cr6.eq) goto loc_880663F8;
	// li r11,101
	ctx.r11.s64 = 101;
	// stb r19,198(r1)
	ctx.current_instruction = 0x88065FC4;
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r19.u8);
	// li r9,87
	ctx.r9.s64 = 87;
	// stb r19,131(r1)
	ctx.current_instruction = 0x88065FCC;
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r19.u8);
	// li r10,77
	ctx.r10.s64 = 77;
	// stb r11,186(r1)
	ctx.current_instruction = 0x88065FD4;
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r11.u8);
	// li r6,82
	ctx.r6.s64 = 82;
	// stb r9,176(r1)
	ctx.current_instruction = 0x88065FDC;
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r9.u8);
	// li r5,65
	ctx.r5.s64 = 65;
	// stb r10,177(r1)
	ctx.current_instruction = 0x88065FE4;
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r10.u8);
	// li r8,97
	ctx.r8.s64 = 97;
	// stb r9,179(r1)
	ctx.current_instruction = 0x88065FEC;
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r9.u8);
	// li r28,47
	ctx.r28.s64 = 47;
	// stb r10,180(r1)
	ctx.current_instruction = 0x88065FF4;
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// li r29,68
	ctx.r29.s64 = 68;
	// stb r5,181(r1)
	ctx.current_instruction = 0x88065FFC;
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r5.u8);
	// li r4,67
	ctx.r4.s64 = 67;
	// stb r28,178(r1)
	ctx.current_instruction = 0x88066004;
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r28.u8);
	// li r7,114
	ctx.r7.s64 = 114;
	// stb r29,182(r1)
	ctx.current_instruction = 0x8806600C;
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r29.u8);
	// li r23,80
	ctx.r23.s64 = 80;
	// stb r6,183(r1)
	ctx.current_instruction = 0x88066014;
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r6.u8);
	// li r24,107
	ctx.r24.s64 = 107;
	// stb r4,184(r1)
	ctx.current_instruction = 0x8806601C;
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r4.u8);
	// li r3,103
	ctx.r3.s64 = 103;
	// stb r23,185(r1)
	ctx.current_instruction = 0x88066024;
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r23.u8);
	// li r25,102
	ctx.r25.s64 = 102;
	// stb r8,187(r1)
	ctx.current_instruction = 0x8806602C;
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r8.u8);
	// li r30,110
	ctx.r30.s64 = 110;
	// stb r24,188(r1)
	ctx.current_instruction = 0x88066034;
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r24.u8);
	// li r27,99
	ctx.r27.s64 = 99;
	// stb r6,189(r1)
	ctx.current_instruction = 0x8806603C;
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r6.u8);
	// li r26,84
	ctx.r26.s64 = 84;
	// stb r11,190(r1)
	ctx.current_instruction = 0x88066044;
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r11.u8);
	// li r21,116
	ctx.r21.s64 = 116;
	// stb r25,191(r1)
	ctx.current_instruction = 0x8806604C;
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r25.u8);
	// li r22,118
	ctx.r22.s64 = 118;
	// stb r11,192(r1)
	ctx.current_instruction = 0x88066054;
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stb r7,193(r1)
	ctx.current_instruction = 0x88066058;
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r7.u8);
	// stb r11,194(r1)
	ctx.current_instruction = 0x8806605C;
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r11.u8);
	// stb r30,195(r1)
	ctx.current_instruction = 0x88066060;
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r30.u8);
	// stb r27,196(r1)
	ctx.current_instruction = 0x88066064;
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r27.u8);
	// stb r11,197(r1)
	ctx.current_instruction = 0x88066068;
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// stb r9,112(r1)
	ctx.current_instruction = 0x8806606C;
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,113(r1)
	ctx.current_instruction = 0x88066070;
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r28,114(r1)
	ctx.current_instruction = 0x88066074;
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r28.u8);
	// stb r9,115(r1)
	ctx.current_instruction = 0x88066078;
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,116(r1)
	ctx.current_instruction = 0x8806607C;
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r5,117(r1)
	ctx.current_instruction = 0x88066080;
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r5.u8);
	// stb r29,118(r1)
	ctx.current_instruction = 0x88066084;
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r29.u8);
	// stb r6,119(r1)
	ctx.current_instruction = 0x88066088;
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r6.u8);
	// stb r4,120(r1)
	ctx.current_instruction = 0x8806608C;
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r4.u8);
	// stb r23,121(r1)
	ctx.current_instruction = 0x88066090;
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r23.u8);
	// stb r11,122(r1)
	ctx.current_instruction = 0x88066094;
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r11.u8);
	// stb r8,123(r1)
	ctx.current_instruction = 0x88066098;
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r8.u8);
	// stb r24,124(r1)
	ctx.current_instruction = 0x8806609C;
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r24.u8);
	// stb r26,125(r1)
	ctx.current_instruction = 0x880660A0;
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r26.u8);
	// stb r8,126(r1)
	ctx.current_instruction = 0x880660A4;
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r7,127(r1)
	ctx.current_instruction = 0x880660A8;
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r7.u8);
	// stb r3,128(r1)
	ctx.current_instruction = 0x880660AC;
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r3.u8);
	// stb r11,129(r1)
	ctx.current_instruction = 0x880660B0;
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// stb r21,130(r1)
	ctx.current_instruction = 0x880660B4;
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r21.u8);
	// stb r9,208(r1)
	ctx.current_instruction = 0x880660B8;
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r9.u8);
	// stb r10,209(r1)
	ctx.current_instruction = 0x880660BC;
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r10.u8);
	// stb r28,210(r1)
	ctx.current_instruction = 0x880660C0;
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r28.u8);
	// stb r9,211(r1)
	ctx.current_instruction = 0x880660C4;
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r9.u8);
	// stb r10,212(r1)
	ctx.current_instruction = 0x880660C8;
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r10.u8);
	// stb r5,213(r1)
	ctx.current_instruction = 0x880660CC;
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r5.u8);
	// stb r29,214(r1)
	ctx.current_instruction = 0x880660D0;
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r29.u8);
	// stb r6,215(r1)
	ctx.current_instruction = 0x880660D4;
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r6.u8);
	// stb r4,216(r1)
	ctx.current_instruction = 0x880660D8;
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r4.u8);
	// stb r5,217(r1)
	ctx.current_instruction = 0x880660DC;
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r5.u8);
	// stb r22,218(r1)
	ctx.current_instruction = 0x880660E0;
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r22.u8);
	// stb r11,219(r1)
	ctx.current_instruction = 0x880660E4;
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r11.u8);
	// stb r7,220(r1)
	ctx.current_instruction = 0x880660E8;
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r7.u8);
	// stb r8,221(r1)
	ctx.current_instruction = 0x880660EC;
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r8.u8);
	// stb r3,222(r1)
	ctx.current_instruction = 0x880660F0;
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r3.u8);
	// stb r11,223(r1)
	ctx.current_instruction = 0x880660F4;
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// stb r6,224(r1)
	ctx.current_instruction = 0x880660F8;
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// stb r11,225(r1)
	ctx.current_instruction = 0x880660FC;
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r11.u8);
	// stb r25,226(r1)
	ctx.current_instruction = 0x88066100;
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r25.u8);
	// std r31,344(r1)
	ctx.current_instruction = 0x88066104;
	REX_STORE_U64(ctx.r1.u32 + 344, ctx.r31.u64);
	// li r31,70
	ctx.r31.s64 = 70;
	// std r20,336(r1)
	ctx.current_instruction = 0x8806610C;
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r20.u64);
	// li r23,111
	ctx.r23.s64 = 111;
	// std r18,352(r1)
	ctx.current_instruction = 0x88066114;
	REX_STORE_U64(ctx.r1.u32 + 352, ctx.r18.u64);
	// li r18,104
	ctx.r18.s64 = 104;
	// std r17,328(r1)
	ctx.current_instruction = 0x8806611C;
	REX_STORE_U64(ctx.r1.u32 + 328, ctx.r17.u64);
	// li r17,115
	ctx.r17.s64 = 115;
	// lhz r25,0(r20)
	ctx.current_instruction = 0x88066124;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// li r20,100
	ctx.r20.s64 = 100;
	// stb r27,231(r1)
	ctx.current_instruction = 0x8806612C;
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r27.u8);
	// li r27,37
	ctx.r27.s64 = 37;
	// li r24,108
	ctx.r24.s64 = 108;
	// stb r31,80(r1)
	ctx.current_instruction = 0x88066138;
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r20,83(r1)
	ctx.current_instruction = 0x8806613C;
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r20.u8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r18,89(r1)
	ctx.current_instruction = 0x88066144;
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r18.u8);
	// stb r17,95(r1)
	ctx.current_instruction = 0x88066148;
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r17.u8);
	// stb r11,227(r1)
	ctx.current_instruction = 0x8806614C;
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r11.u8);
	// stb r7,228(r1)
	ctx.current_instruction = 0x88066150;
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r7.u8);
	// stb r11,229(r1)
	ctx.current_instruction = 0x88066154;
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r11.u8);
	// stb r30,230(r1)
	ctx.current_instruction = 0x88066158;
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r30.u8);
	// stb r11,232(r1)
	ctx.current_instruction = 0x8806615C;
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stb r19,233(r1)
	ctx.current_instruction = 0x88066160;
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r19.u8);
	// stb r9,144(r1)
	ctx.current_instruction = 0x88066164;
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// stb r10,145(r1)
	ctx.current_instruction = 0x88066168;
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r10.u8);
	// stb r28,146(r1)
	ctx.current_instruction = 0x8806616C;
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r28.u8);
	// stb r9,147(r1)
	ctx.current_instruction = 0x88066170;
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r9.u8);
	// ld r31,344(r1)
	ctx.current_instruction = 0x88066174;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 344);
	// ld r20,336(r1)
	ctx.current_instruction = 0x88066178;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + 336);
	// ld r18,352(r1)
	ctx.current_instruction = 0x8806617C;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + 352);
	// ld r17,328(r1)
	ctx.current_instruction = 0x88066180;
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + 328);
	// stb r10,148(r1)
	ctx.current_instruction = 0x88066184;
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r10.u8);
	// stb r5,149(r1)
	ctx.current_instruction = 0x88066188;
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r5.u8);
	// stb r29,150(r1)
	ctx.current_instruction = 0x8806618C;
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r29.u8);
	// stb r6,151(r1)
	ctx.current_instruction = 0x88066190;
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r6.u8);
	// stb r4,152(r1)
	ctx.current_instruction = 0x88066194;
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r4.u8);
	// stb r5,153(r1)
	ctx.current_instruction = 0x88066198;
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r5.u8);
	// stb r22,154(r1)
	ctx.current_instruction = 0x8806619C;
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r22.u8);
	// stb r11,155(r1)
	ctx.current_instruction = 0x880661A0;
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// stb r7,156(r1)
	ctx.current_instruction = 0x880661A4;
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// stb r8,157(r1)
	ctx.current_instruction = 0x880661A8;
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r8.u8);
	// stb r3,158(r1)
	ctx.current_instruction = 0x880661AC;
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r3.u8);
	// stb r11,159(r1)
	ctx.current_instruction = 0x880661B0;
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// stb r26,160(r1)
	ctx.current_instruction = 0x880661B4;
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// stb r8,161(r1)
	ctx.current_instruction = 0x880661B8;
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r8.u8);
	// stb r7,162(r1)
	ctx.current_instruction = 0x880661BC;
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r7.u8);
	// stb r3,163(r1)
	ctx.current_instruction = 0x880661C0;
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r3.u8);
	// stb r11,164(r1)
	ctx.current_instruction = 0x880661C4;
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// stb r21,165(r1)
	ctx.current_instruction = 0x880661C8;
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r21.u8);
	// stb r19,166(r1)
	ctx.current_instruction = 0x880661CC;
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r19.u8);
	// stb r23,81(r1)
	ctx.current_instruction = 0x880661D0;
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r23.u8);
	// stb r24,82(r1)
	ctx.current_instruction = 0x880661D4;
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r24.u8);
	// stb r27,84(r1)
	ctx.current_instruction = 0x880661D8;
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// stb r26,85(r1)
	ctx.current_instruction = 0x880661DC;
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r26.u8);
	// stb r23,86(r1)
	ctx.current_instruction = 0x880661E0;
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r23.u8);
	// stb r27,87(r1)
	ctx.current_instruction = 0x880661E4;
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// stb r4,88(r1)
	ctx.current_instruction = 0x880661E8;
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r8,90(r1)
	ctx.current_instruction = 0x880661EC;
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r30,91(r1)
	ctx.current_instruction = 0x880661F0;
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r30.u8);
	// stb r30,92(r1)
	ctx.current_instruction = 0x880661F4;
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// stb r11,93(r1)
	ctx.current_instruction = 0x880661F8;
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// stb r24,94(r1)
	ctx.current_instruction = 0x880661FC;
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r24.u8);
	// stb r27,96(r1)
	ctx.current_instruction = 0x88066200;
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// stb r19,97(r1)
	ctx.current_instruction = 0x88066204;
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r19.u8);
	// stw r19,288(r1)
	ctx.current_instruction = 0x88066208;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r19.u32);
	// stw r19,292(r1)
	ctx.current_instruction = 0x8806620C;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r19.u32);
	// stw r19,296(r1)
	ctx.current_instruction = 0x88066210;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r19.u32);
	// beq cr6,0x880663f8
	if (ctx.cr6.eq) goto loc_880663F8;
	// lwz r11,4(r20)
	ctx.current_instruction = 0x88066218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880663f8
	if (ctx.cr6.eq) goto loc_880663F8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x880663f8
	if (ctx.cr6.eq) goto loc_880663F8;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r28,236(r1)
	ctx.current_instruction = 0x88066230;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r27,244(r1)
	ctx.current_instruction = 0x88066234;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lwz r26,248(r1)
	ctx.current_instruction = 0x8806623C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
	// lwz r25,240(r1)
	ctx.current_instruction = 0x88066244;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
loc_88066248:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,232(r31)
	ctx.current_instruction = 0x8806624C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88066258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r11,2(r9)
	ctx.current_instruction = 0x88066260;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88066278
	if (ctx.cr6.eq) goto loc_88066278;
	// lhz r9,228(r31)
	ctx.current_instruction = 0x8806626C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 228);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880663d8
	if (!ctx.cr6.eq) goto loc_880663D8;
loc_88066278:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x88066278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r5,4(r11)
	ctx.current_instruction = 0x88066288;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x8806628C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x880656f0
	ctx.lr = 0x88066294;
	sub_880656F0(ctx, base);
loc_88066294:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88066294;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8806629C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x880662b4
	if (!ctx.cr6.eq) goto loc_880662B4;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.current_instruction = 0x880662A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r25,0(r9)
	ctx.current_instruction = 0x880662AC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x880663d8
	goto loc_880663D8;
loc_880662B4:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lhz r5,4(r11)
	ctx.current_instruction = 0x880662C0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x880662C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x880656f0
	ctx.lr = 0x880662CC;
	sub_880656F0(ctx, base);
loc_880662CC:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x880662CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x880662D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x880662ec
	if (!ctx.cr6.eq) goto loc_880662EC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.current_instruction = 0x880662E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r26,0(r9)
	ctx.current_instruction = 0x880662E4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x880663d8
	goto loc_880663D8;
loc_880662EC:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lhz r5,4(r11)
	ctx.current_instruction = 0x880662F8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x880662FC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x880656f0
	ctx.lr = 0x88066304;
	sub_880656F0(ctx, base);
loc_88066304:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88066304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8806630C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x88066324
	if (!ctx.cr6.eq) goto loc_88066324;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.current_instruction = 0x88066318;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r27,0(r9)
	ctx.current_instruction = 0x8806631C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x880663d8
	goto loc_880663D8;
loc_88066324:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lhz r5,4(r11)
	ctx.current_instruction = 0x88066330;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x88066334;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x880656f0
	ctx.lr = 0x8806633C;
	sub_880656F0(ctx, base);
loc_8806633C:
	// lwz r11,232(r31)
	ctx.current_instruction = 0x8806633C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88066344;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x8806635c
	if (!ctx.cr6.eq) goto loc_8806635C;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.current_instruction = 0x88066350;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r28,0(r9)
	ctx.current_instruction = 0x88066354;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x880663d8
	goto loc_880663D8;
loc_8806635C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,4(r11)
	ctx.current_instruction = 0x88066368;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.current_instruction = 0x8806636C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x880656f0
	ctx.lr = 0x88066374;
	sub_880656F0(ctx, base);
loc_88066374:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880663d8
	if (!ctx.cr6.eq) goto loc_880663D8;
	// lwz r11,288(r1)
	ctx.current_instruction = 0x8806637C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lhz r9,76(r31)
	ctx.current_instruction = 0x88066380;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r8,292(r1)
	ctx.current_instruction = 0x88066384;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x880663d4
	if (!ctx.cr6.eq) goto loc_880663D4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mullw r23,r10,r11
	ctx.r23.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r23,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x88050340
	ctx.lr = 0x880663AC;
	sub_88050340(ctx, base);
loc_880663AC:
	// lwz r9,232(r31)
	ctx.current_instruction = 0x880663AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// clrlwi r6,r23,16
	ctx.r6.u64 = ctx.r23.u32 & 0xFFFF;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r11,4(r9)
	ctx.current_instruction = 0x880663BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,8(r11)
	ctx.current_instruction = 0x880663C4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.current_instruction = 0x880663C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x880657e8
	ctx.lr = 0x880663D0;
	sub_880657E8(ctx, base);
loc_880663D0:
	// b 0x880663d8
	goto loc_880663D8;
loc_880663D4:
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
loc_880663D8:
	// lwz r10,232(r31)
	ctx.current_instruction = 0x880663D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lhz r8,0(r10)
	ctx.current_instruction = 0x880663E8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x88066248
	if (ctx.cr6.lt) goto loc_88066248;
	// b 0x88066410
	goto loc_88066410;
loc_880663F8:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// lwz r28,236(r1)
	ctx.current_instruction = 0x880663FC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r27,244(r1)
	ctx.current_instruction = 0x88066400;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r26,248(r1)
	ctx.current_instruction = 0x88066404;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// ori r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 32768;
	// lwz r25,240(r1)
	ctx.current_instruction = 0x8806640C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
loc_88066410:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x880d1680
	ctx.lr = 0x8806641C;
	sub_880D1680(ctx, base);
loc_8806641C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,584(r31)
	ctx.current_instruction = 0x88066420;
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r3.u32);
	// bne cr6,0x88066434
	if (!ctx.cr6.eq) goto loc_88066434;
loc_88066428:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88066434:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lhz r10,90(r31)
	ctx.current_instruction = 0x88066438;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 90);
	// lwz r5,72(r31)
	ctx.current_instruction = 0x8806643C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lhz r7,62(r31)
	ctx.current_instruction = 0x88066448;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 62);
	// lhz r6,76(r31)
	ctx.current_instruction = 0x8806644C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x88066454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,68(r31)
	ctx.current_instruction = 0x88066458;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r30,92(r31)
	ctx.current_instruction = 0x8806645C;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// lwz r29,96(r31)
	ctx.current_instruction = 0x88066460;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lhz r23,84(r31)
	ctx.current_instruction = 0x88066464;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r22,86(r31)
	ctx.current_instruction = 0x88066468;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r31.u32 + 86);
	// std r19,0(r11)
	ctx.current_instruction = 0x8806646C;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// std r19,8(r11)
	ctx.current_instruction = 0x88066470;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r19.u64);
	// stw r8,16(r18)
	ctx.current_instruction = 0x88066474;
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r8.u32);
	// lwz r8,64(r31)
	ctx.current_instruction = 0x88066478;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// std r19,16(r11)
	ctx.current_instruction = 0x8806647C;
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r19.u64);
	// stw r8,0(r18)
	ctx.current_instruction = 0x88066480;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
	// lhz r8,92(r31)
	ctx.current_instruction = 0x88066484;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 92);
	// stw r19,24(r11)
	ctx.current_instruction = 0x88066488;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r19.u32);
	// sth r7,304(r1)
	ctx.current_instruction = 0x8806648C;
	REX_STORE_U16(ctx.r1.u32 + 304, ctx.r7.u16);
	// sth r6,306(r1)
	ctx.current_instruction = 0x88066490;
	REX_STORE_U16(ctx.r1.u32 + 306, ctx.r6.u16);
	// stw r10,308(r1)
	ctx.current_instruction = 0x88066494;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// stw r9,312(r1)
	ctx.current_instruction = 0x88066498;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// sth r30,318(r1)
	ctx.current_instruction = 0x8806649C;
	REX_STORE_U16(ctx.r1.u32 + 318, ctx.r30.u16);
	// stw r29,320(r1)
	ctx.current_instruction = 0x880664A0;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// sth r23,324(r1)
	ctx.current_instruction = 0x880664A4;
	REX_STORE_U16(ctx.r1.u32 + 324, ctx.r23.u16);
	// sth r5,316(r1)
	ctx.current_instruction = 0x880664A8;
	REX_STORE_U16(ctx.r1.u32 + 316, ctx.r5.u16);
	// sth r22,326(r1)
	ctx.current_instruction = 0x880664AC;
	REX_STORE_U16(ctx.r1.u32 + 326, ctx.r22.u16);
	// sth r19,256(r1)
	ctx.current_instruction = 0x880664B0;
	REX_STORE_U16(ctx.r1.u32 + 256, ctx.r19.u16);
	// stw r8,12(r18)
	ctx.current_instruction = 0x880664B4;
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r8.u32);
	// bl 0x880d8fa0
	ctx.lr = 0x880664BC;
	sub_880D8FA0(ctx, base);
loc_880664BC:
	// clrlwi r7,r17,31
	ctx.r7.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r8,r17,16
	ctx.r8.u64 = ctx.r17.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880664fc
	if (ctx.cr6.eq) goto loc_880664FC;
	// stw r16,8(r18)
	ctx.current_instruction = 0x880664CC;
	REX_STORE_U32(ctx.r18.u32 + 8, ctx.r16.u32);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r19,4(r18)
	ctx.current_instruction = 0x880664D8;
	REX_STORE_U32(ctx.r18.u32 + 4, ctx.r19.u32);
	// beq cr6,0x880664fc
	if (ctx.cr6.eq) goto loc_880664FC;
loc_880664E0:
	// lwz r9,4(r18)
	ctx.current_instruction = 0x880664E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r18)
	ctx.current_instruction = 0x880664F4;
	REX_STORE_U32(ctx.r18.u32 + 4, ctx.r10.u32);
	// bne cr6,0x880664e0
	if (!ctx.cr6.eq) goto loc_880664E0;
loc_880664FC:
	// rlwinm r11,r8,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r29,3
	ctx.r29.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806653c
	if (ctx.cr6.eq) goto loc_8806653C;
	// lhz r9,256(r1)
	ctx.current_instruction = 0x8806650C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 256);
	// lwz r11,4(r18)
	ctx.current_instruction = 0x88066510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// ori r10,r9,256
	ctx.r10.u64 = ctx.r9.u64 | 256;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// sth r10,256(r1)
	ctx.current_instruction = 0x8806651C;
	REX_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// ble cr6,0x88066528
	if (!ctx.cr6.gt) goto loc_88066528;
	// li r11,2
	ctx.r11.s64 = 2;
loc_88066528:
	// stw r11,4(r18)
	ctx.current_instruction = 0x88066528;
	REX_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x88066540
	if (!ctx.cr6.eq) goto loc_88066540;
	// stw r29,8(r18)
	ctx.current_instruction = 0x88066534;
	REX_STORE_U32(ctx.r18.u32 + 8, ctx.r29.u32);
	// b 0x88066540
	goto loc_88066540;
loc_8806653C:
	// lhz r10,256(r1)
	ctx.current_instruction = 0x8806653C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 256);
loc_88066540:
	// rlwinm r9,r8,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// li r7,4
	ctx.r7.s64 = 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88066564
	if (ctx.cr6.eq) goto loc_88066564;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,12(r18)
	ctx.current_instruction = 0x88066558;
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r11.u32);
	// stw r6,16(r18)
	ctx.current_instruction = 0x8806655C;
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r6.u32);
	// b 0x88066588
	goto loc_88066588;
loc_88066564:
	// rlwinm r11,r8,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88066578
	if (ctx.cr6.eq) goto loc_88066578;
	// stw r29,16(r18)
	ctx.current_instruction = 0x88066570;
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r29.u32);
	// b 0x88066588
	goto loc_88066588;
loc_88066578:
	// rlwinm r11,r8,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88066588
	if (ctx.cr6.eq) goto loc_88066588;
	// stw r7,16(r18)
	ctx.current_instruction = 0x88066584;
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r7.u32);
loc_88066588:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// sth r19,280(r1)
	ctx.current_instruction = 0x8806658C;
	REX_STORE_U16(ctx.r1.u32 + 280, ctx.r19.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880665ac
	if (ctx.cr6.eq) goto loc_880665AC;
	// lhz r11,550(r1)
	ctx.current_instruction = 0x88066598;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 550);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// sth r10,256(r1)
	ctx.current_instruction = 0x880665A4;
	REX_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// sth r11,280(r1)
	ctx.current_instruction = 0x880665A8;
	REX_STORE_U16(ctx.r1.u32 + 280, ctx.r11.u16);
loc_880665AC:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880665e0
	if (ctx.cr6.eq) goto loc_880665E0;
	// lwz r11,308(r1)
	ctx.current_instruction = 0x880665B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bne cr6,0x880665d4
	if (!ctx.cr6.eq) goto loc_880665D4;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// bne cr6,0x880665dc
	if (!ctx.cr6.eq) goto loc_880665DC;
	// li r14,22050
	ctx.r14.s64 = 22050;
	// b 0x880665dc
	goto loc_880665DC;
loc_880665D4:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x880665e0
	if (ctx.cr6.eq) goto loc_880665E0;
loc_880665DC:
	// stw r14,0(r18)
	ctx.current_instruction = 0x880665DC;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r14.u32);
loc_880665E0:
	// rlwinm r11,r8,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880665fc
	if (ctx.cr6.eq) goto loc_880665FC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// sth r10,256(r1)
	ctx.current_instruction = 0x880665F4;
	REX_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// b 0x8806663c
	goto loc_8806663C;
loc_880665FC:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88066624
	if (ctx.cr6.eq) goto loc_88066624;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x88066608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r5,r10,2
	ctx.r5.u64 = ctx.r10.u64 | 2;
	// stw r6,0(r18)
	ctx.current_instruction = 0x88066618;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r6.u32);
	// sth r5,256(r1)
	ctx.current_instruction = 0x8806661C;
	REX_STORE_U16(ctx.r1.u32 + 256, ctx.r5.u16);
	// b 0x8806663c
	goto loc_8806663C;
loc_88066624:
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8806663c
	if (ctx.cr6.eq) goto loc_8806663C;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x88066630;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,0(r18)
	ctx.current_instruction = 0x88066638;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
loc_8806663C:
	// rlwinm r11,r8,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880666a0
	if (ctx.cr6.eq) goto loc_880666A0;
	// lis r11,-16841
	ctx.r11.s64 = -1103691776;
	// lwz r10,0(r18)
	ctx.current_instruction = 0x8806664C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r11,50747
	ctx.r5.u64 = ctx.r11.u64 | 50747;
	// ori r11,r6,44100
	ctx.r11.u64 = ctx.r6.u64 | 44100;
	// mulhwu r4,r10,r5
	ctx.r4.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r3,r4,17,15,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFFF;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf. r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x88066674
	if (!ctx.cr0.eq) goto loc_88066674;
	// stw r11,0(r18)
	ctx.current_instruction = 0x88066670;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_88066674:
	// lis r11,1398
	ctx.r11.s64 = 91619328;
	// lwz r10,0(r18)
	ctx.current_instruction = 0x88066678;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r11,6641
	ctx.r5.u64 = ctx.r11.u64 | 6641;
	// ori r11,r6,48000
	ctx.r11.u64 = ctx.r6.u64 | 48000;
	// mulhwu r4,r10,r5
	ctx.r4.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r3,r4,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf. r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x880666a0
	if (!ctx.cr0.eq) goto loc_880666A0;
	// stw r11,0(r18)
	ctx.current_instruction = 0x8806669C;
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_880666A0:
	// rlwinm r11,r8,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x880666e0
	if (ctx.cr6.eq) goto loc_880666E0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x88066428
	if (!ctx.cr6.eq) goto loc_88066428;
	// rlwinm r11,r8,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88066428
	if (!ctx.cr6.eq) goto loc_88066428;
	// rlwinm r11,r8,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88066428
	if (!ctx.cr6.eq) goto loc_88066428;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,20(r18)
	ctx.current_instruction = 0x880666D4;
	REX_STORE_U32(ctx.r18.u32 + 20, ctx.r30.u32);
	// stw r7,16(r18)
	ctx.current_instruction = 0x880666D8;
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r7.u32);
	// stw r11,12(r18)
	ctx.current_instruction = 0x880666DC;
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r11.u32);
loc_880666E0:
	// stw r25,264(r1)
	ctx.current_instruction = 0x880666E0;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,268(r1)
	ctx.current_instruction = 0x880666E8;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r26.u32);
	// addi r7,r31,588
	ctx.r7.s64 = ctx.r31.s64 + 588;
	// stw r27,272(r1)
	ctx.current_instruction = 0x880666F0;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r27.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r28,276(r1)
	ctx.current_instruction = 0x880666F8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r15,260(r1)
	ctx.current_instruction = 0x88066700;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r15.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,584(r31)
	ctx.current_instruction = 0x88066708;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x880d8638
	ctx.lr = 0x88066710;
	sub_880D8638(ctx, base);
loc_88066710:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8806686c
	if (ctx.cr6.lt) goto loc_8806686C;
	// bne cr6,0x88066428
	if (!ctx.cr6.eq) goto loc_88066428;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x88050340
	ctx.lr = 0x88066728;
	sub_88050340(ctx, base);
loc_88066728:
	// stw r3,616(r31)
	ctx.current_instruction = 0x88066728;
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88066740
	if (ctx.cr6.eq) goto loc_88066740;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x880547a0
	ctx.lr = 0x88066740;
	sub_880547A0(ctx, base);
loc_88066740:
	// lwz r9,552(r31)
	ctx.current_instruction = 0x88066740;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// stw r19,548(r31)
	ctx.current_instruction = 0x88066744;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r19.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88066798
	if (!ctx.cr6.eq) goto loc_88066798;
	// lwz r11,152(r31)
	ctx.current_instruction = 0x88066750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88066790
	if (!ctx.cr6.gt) goto loc_88066790;
	// lbz r11,156(r31)
	ctx.current_instruction = 0x8806675C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bne cr6,0x880667b0
	if (!ctx.cr6.eq) goto loc_880667B0;
	// lbz r11,157(r31)
	ctx.current_instruction = 0x88066768;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 157);
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// bne cr6,0x880667b0
	if (!ctx.cr6.eq) goto loc_880667B0;
	// lbz r11,158(r31)
	ctx.current_instruction = 0x88066774;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 158);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x880667b0
	if (!ctx.cr6.eq) goto loc_880667B0;
	// lbz r11,159(r31)
	ctx.current_instruction = 0x88066780;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 159);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880667b0
	if (!ctx.cr6.eq) goto loc_880667B0;
	// stw r30,548(r31)
	ctx.current_instruction = 0x8806678C;
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
loc_88066790:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880667bc
	if (ctx.cr6.eq) goto loc_880667BC;
loc_88066798:
	// lwz r11,152(r31)
	ctx.current_instruction = 0x88066798;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880667bc
	if (!ctx.cr6.eq) goto loc_880667BC;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880667B0:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_880667BC:
	// ld r10,40(r31)
	ctx.current_instruction = 0x880667BC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r11,28(r31)
	ctx.current_instruction = 0x880667C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,48(r31)
	ctx.current_instruction = 0x880667C8;
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// beq cr6,0x880667fc
	if (ctx.cr6.eq) goto loc_880667FC;
	// lwz r8,556(r1)
	ctx.current_instruction = 0x880667D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880667e4
	if (ctx.cr6.eq) goto loc_880667E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	ctx.current_instruction = 0x880667E0;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_880667E4:
	// lwz r11,28(r31)
	ctx.current_instruction = 0x880667E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,20(r31)
	ctx.current_instruction = 0x880667E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mulld r11,r7,r8
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,48(r31)
	ctx.current_instruction = 0x880667F8;
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r6.u64);
loc_880667FC:
	// lwz r11,56(r31)
	ctx.current_instruction = 0x880667FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x88066818
	if (ctx.cr6.eq) goto loc_88066818;
	// lwz r11,20(r31)
	ctx.current_instruction = 0x8806680C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// std r10,48(r31)
	ctx.current_instruction = 0x88066814;
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
loc_88066818:
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88066818;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,392(r31)
	ctx.current_instruction = 0x88066820;
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// std r11,0(r31)
	ctx.current_instruction = 0x88066828;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	ctx.current_instruction = 0x8806682C;
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// beq cr6,0x8806683c
	if (ctx.cr6.eq) goto loc_8806683C;
	// lwz r3,24(r31)
	ctx.current_instruction = 0x88066834;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x88066840
	goto loc_88066840;
loc_8806683C:
	// li r3,256
	ctx.r3.s64 = 256;
loc_88066840:
	// bl 0x88050340
	ctx.lr = 0x88066844;
	sub_88050340(ctx, base);
loc_88066844:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r3,612(r31)
	ctx.current_instruction = 0x8806684C;
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r3.u32);
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88066868:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8806686C:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88085938) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88085938;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88085938) {
			switch (rex_dispatch_address) {
				case 0x88085940:
				case 0x880859C8:
				case 0x880859E4:
				case 0x88085A2C:
				case 0x88085A70:
				case 0x88085ABC:
				case 0x88085AE8:
				case 0x88085B2C:
				case 0x88085B74:
				case 0x88085BC0:
				case 0x88085BEC:
				case 0x88085C30:
				case 0x88085C78:
				case 0x88085CC4:
				case 0x88085CE8:
				case 0x88085D2C:
				case 0x88085D70:
				case 0x88085DBC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88085938;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88085940: goto loc_88085940;
		case 0x880859C8: goto loc_880859C8;
		case 0x880859E4: goto loc_880859E4;
		case 0x88085A2C: goto loc_88085A2C;
		case 0x88085A70: goto loc_88085A70;
		case 0x88085ABC: goto loc_88085ABC;
		case 0x88085AE8: goto loc_88085AE8;
		case 0x88085B2C: goto loc_88085B2C;
		case 0x88085B74: goto loc_88085B74;
		case 0x88085BC0: goto loc_88085BC0;
		case 0x88085BEC: goto loc_88085BEC;
		case 0x88085C30: goto loc_88085C30;
		case 0x88085C78: goto loc_88085C78;
		case 0x88085CC4: goto loc_88085CC4;
		case 0x88085CE8: goto loc_88085CE8;
		case 0x88085D2C: goto loc_88085D2C;
		case 0x88085D70: goto loc_88085D70;
		case 0x88085DBC: goto loc_88085DBC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x88085940;
	__savegprlr_17(ctx, base);
loc_88085940:
	// stwu r1,-2592(r1)
	ctx.current_instruction = 0x88085940;
	ea = -2592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,20036(r31)
	ctx.current_instruction = 0x88085958;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20036);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r11,4997
	ctx.r8.s64 = ctx.r11.s64 + 4997;
	// addi r7,r11,5000
	ctx.r7.s64 = ctx.r11.s64 + 5000;
	// stw r29,120(r1)
	ctx.current_instruction = 0x8808596C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,116(r1)
	ctx.current_instruction = 0x88085974;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// lwz r9,28544(r31)
	ctx.current_instruction = 0x88085980;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28544);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// addi r10,r1,959
	ctx.r10.s64 = ctx.r1.s64 + 959;
	// lwzx r25,r11,r31
	ctx.current_instruction = 0x8808598C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r27,r1,1567
	ctx.r27.s64 = ctx.r1.s64 + 1567;
	// lwzx r17,r7,r31
	ctx.current_instruction = 0x88085994;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r23,r10,0,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r29,124(r1)
	ctx.current_instruction = 0x8808599C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r1,415
	ctx.r10.s64 = ctx.r1.s64 + 415;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// rlwinm r26,r10,0,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// rlwinm r22,r27,0,0,25
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFC0;
	// bctrl 
	ctx.lr = 0x880859C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880859C8:
	// lwz r9,8076(r31)
	ctx.current_instruction = 0x880859C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880859E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880859E4:
	// lwz r11,96(r21)
	ctx.current_instruction = 0x880859E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// lwz r19,2700(r1)
	ctx.current_instruction = 0x880859E8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 2700);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r18,2708(r1)
	ctx.current_instruction = 0x880859F0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 2708);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x880859FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88085A04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r29,108(r1)
	ctx.current_instruction = 0x88085A0C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,100(r1)
	ctx.current_instruction = 0x88085A14;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stw r18,92(r1)
	ctx.current_instruction = 0x88085A18;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88085A1C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r27,8208(r31)
	ctx.current_instruction = 0x88085A20;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085A2C:
	// lhz r10,112(r1)
	ctx.current_instruction = 0x88085A2C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085ac4
	if (ctx.cr6.eq) goto loc_88085AC4;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88085a8c
	if (!ctx.cr0.gt) goto loc_88085A8C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_88085A4C:
	// lhz r10,6(r27)
	ctx.current_instruction = 0x88085A4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r27)
	ctx.current_instruction = 0x88085A54;
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085A70;
	sub_8810F120(ctx, base);
loc_88085A70:
	// lhz r9,112(r1)
	ctx.current_instruction = 0x88085A70;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085a4c
	if (ctx.cr6.lt) goto loc_88085A4C;
loc_88085A8C:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.current_instruction = 0x88085AA4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.current_instruction = 0x88085AAC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085ABC;
	sub_8810F240(ctx, base);
loc_88085ABC:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085AC4:
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// ble cr6,0x88085dc4
	if (!ctx.cr6.gt) goto loc_88085DC4;
	// lwz r11,8076(r31)
	ctx.current_instruction = 0x88085ACC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r23,16
	ctx.r3.s64 = ctx.r23.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88085AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085AE8:
	// lwz r11,96(r21)
	ctx.current_instruction = 0x88085AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x88085AF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r6,108(r1)
	ctx.current_instruction = 0x88085AF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88085B04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r19,100(r1)
	ctx.current_instruction = 0x88085B0C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88085B10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,92(r1)
	ctx.current_instruction = 0x88085B1C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// lwz r27,8208(r31)
	ctx.current_instruction = 0x88085B20;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085B2C:
	// lhz r10,112(r1)
	ctx.current_instruction = 0x88085B2C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085bc8
	if (ctx.cr6.eq) goto loc_88085BC8;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// ble 0x88085b90
	if (!ctx.cr0.gt) goto loc_88085B90;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_88085B50:
	// lhz r10,6(r27)
	ctx.current_instruction = 0x88085B50;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r27)
	ctx.current_instruction = 0x88085B58;
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085B74;
	sub_8810F120(ctx, base);
loc_88085B74:
	// lhz r9,112(r1)
	ctx.current_instruction = 0x88085B74;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085b50
	if (ctx.cr6.lt) goto loc_88085B50;
loc_88085B90:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.current_instruction = 0x88085BA8;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.current_instruction = 0x88085BB0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085BC0;
	sub_8810F240(ctx, base);
loc_88085BC0:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085BC8:
	// cmpwi cr6,r20,8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 8, ctx.xer);
	// ble cr6,0x88085dc4
	if (!ctx.cr6.gt) goto loc_88085DC4;
	// lwz r11,8076(r31)
	ctx.current_instruction = 0x88085BD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r23,256
	ctx.r3.s64 = ctx.r23.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88085BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085BEC:
	// lwz r11,96(r21)
	ctx.current_instruction = 0x88085BEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x88085BF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// stw r6,108(r1)
	ctx.current_instruction = 0x88085BFC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88085C08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r19,100(r1)
	ctx.current_instruction = 0x88085C10;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r18,92(r1)
	ctx.current_instruction = 0x88085C18;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x88085C20;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r27,8208(r31)
	ctx.current_instruction = 0x88085C24;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085C30:
	// lhz r10,112(r1)
	ctx.current_instruction = 0x88085C30;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085ccc
	if (ctx.cr6.eq) goto loc_88085CCC;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// ble 0x88085c94
	if (!ctx.cr0.gt) goto loc_88085C94;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_88085C54:
	// lhz r10,6(r27)
	ctx.current_instruction = 0x88085C54;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r27)
	ctx.current_instruction = 0x88085C5C;
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085C78;
	sub_8810F120(ctx, base);
loc_88085C78:
	// lhz r9,112(r1)
	ctx.current_instruction = 0x88085C78;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085c54
	if (ctx.cr6.lt) goto loc_88085C54;
loc_88085C94:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.current_instruction = 0x88085CAC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.current_instruction = 0x88085CB4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085CC4;
	sub_8810F240(ctx, base);
loc_88085CC4:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085CCC:
	// lwz r11,8076(r31)
	ctx.current_instruction = 0x88085CCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8076);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r23,272
	ctx.r3.s64 = ctx.r23.s64 + 272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88085CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085CE8:
	// lwz r11,96(r21)
	ctx.current_instruction = 0x88085CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r19,100(r1)
	ctx.current_instruction = 0x88085CF0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r10,108(r1)
	ctx.current_instruction = 0x88085CF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r18,92(r1)
	ctx.current_instruction = 0x88085D00;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,8264(r31)
	ctx.current_instruction = 0x88085D0C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8264);
	// stw r11,84(r1)
	ctx.current_instruction = 0x88085D10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,8208(r31)
	ctx.current_instruction = 0x88085D1C;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 8208);
	// lwz r10,8304(r31)
	ctx.current_instruction = 0x88085D20;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8304);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x88085D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88085D2C:
	// lhz r10,112(r1)
	ctx.current_instruction = 0x88085D2C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88085dc4
	if (ctx.cr6.eq) goto loc_88085DC4;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x88085d8c
	if (!ctx.cr0.gt) goto loc_88085D8C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_88085D4C:
	// lhz r10,6(r28)
	ctx.current_instruction = 0x88085D4C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzu r11,4(r28)
	ctx.current_instruction = 0x88085D54;
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f120
	ctx.lr = 0x88085D70;
	sub_8810F120(ctx, base);
loc_88085D70:
	// lhz r9,112(r1)
	ctx.current_instruction = 0x88085D70;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88085d4c
	if (ctx.cr6.lt) goto loc_88085D4C;
loc_88085D8C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lhzx r5,r11,r10
	ctx.current_instruction = 0x88085DA4;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r9
	ctx.current_instruction = 0x88085DAC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8810f240
	ctx.lr = 0x88085DBC;
	sub_8810F240(ctx, base);
loc_88085DBC:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_88085DC4:
	// lwz r11,2676(r1)
	ctx.current_instruction = 0x88085DC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2676);
	// lwz r10,124(r1)
	ctx.current_instruction = 0x88085DC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,2684(r1)
	ctx.current_instruction = 0x88085DCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2684);
	// lwz r8,2692(r1)
	ctx.current_instruction = 0x88085DD0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2692);
	// srawi r7,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 8;
	// stw r30,0(r11)
	ctx.current_instruction = 0x88085DD8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r7,0(r9)
	ctx.current_instruction = 0x88085DDC;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r28,0(r8)
	ctx.current_instruction = 0x88085DE0;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// addi r1,r1,2592
	ctx.r1.s64 = ctx.r1.s64 + 2592;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880AFC70) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880AFC70;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880AFC70) {
			switch (rex_dispatch_address) {
				case 0x880AFC78:
				case 0x880AFE54:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880AFC70;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880AFC78: goto loc_880AFC78;
		case 0x880AFE54: goto loc_880AFE54;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880AFC78;
	__savegprlr_14(ctx, base);
loc_880AFC78:
	// stwu r1,-480(r1)
	ctx.current_instruction = 0x880AFC78;
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,284(r1)
	ctx.current_instruction = 0x880AFC7C;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r7,272(r1)
	ctx.current_instruction = 0x880AFC84;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r7,628(r1)
	ctx.current_instruction = 0x880AFC8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// addi r27,r1,652
	ctx.r27.s64 = ctx.r1.s64 + 652;
	// lwz r9,644(r1)
	ctx.current_instruction = 0x880AFC94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// addi r26,r1,280
	ctx.r26.s64 = ctx.r1.s64 + 280;
	// lwz r11,564(r1)
	ctx.current_instruction = 0x880AFC9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// addi r25,r1,292
	ctx.r25.s64 = ctx.r1.s64 + 292;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// lwz r10,580(r1)
	ctx.current_instruction = 0x880AFCA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// stw r8,288(r1)
	ctx.current_instruction = 0x880AFCAC;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// stw r9,260(r1)
	ctx.current_instruction = 0x880AFCB0;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,620(r1)
	ctx.current_instruction = 0x880AFCB8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r8,636(r1)
	ctx.current_instruction = 0x880AFCBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// lwz r23,2608(r28)
	ctx.current_instruction = 0x880AFCC4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r28.u32 + 2608);
	// rlwinm r22,r11,1,30,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2;
	// lwz r9,684(r1)
	ctx.current_instruction = 0x880AFCCC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 684);
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r29.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,572(r1)
	ctx.current_instruction = 0x880AFCD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// subf r9,r9,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r9.u64;
	// lwz r21,2616(r28)
	ctx.current_instruction = 0x880AFCE0;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r28.u32 + 2616);
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r5,276(r1)
	ctx.current_instruction = 0x880AFCE8;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r8,264(r1)
	ctx.current_instruction = 0x880AFCF0;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// lwz r8,676(r1)
	ctx.current_instruction = 0x880AFCF8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// and r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 & ctx.r21.u64;
	// lwz r9,612(r1)
	ctx.current_instruction = 0x880AFD00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// stw r24,256(r1)
	ctx.current_instruction = 0x880AFD04;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,2604(r28)
	ctx.current_instruction = 0x880AFD0C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r28.u32 + 2604);
	// rlwinm r10,r10,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// lwz r19,1380(r28)
	ctx.current_instruction = 0x880AFD14;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r28.u32 + 1380);
	// subf r8,r8,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r8.u64;
	// lwz r20,2612(r28)
	ctx.current_instruction = 0x880AFD1C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r28.u32 + 2612);
	// mullw r11,r19,r11
	ctx.r11.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r11.s32);
	// lwz r18,1384(r28)
	ctx.current_instruction = 0x880AFD24;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r28.u32 + 1384);
	// stw r4,280(r1)
	ctx.current_instruction = 0x880AFD28;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
	// lwz r17,740(r1)
	ctx.current_instruction = 0x880AFD2C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r16,708(r1)
	ctx.current_instruction = 0x880AFD30;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r19,660(r1)
	ctx.current_instruction = 0x880AFD34;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r5,260(r1)
	ctx.current_instruction = 0x880AFD38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r9,260(r1)
	ctx.current_instruction = 0x880AFD3C;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// lwz r15,692(r1)
	ctx.current_instruction = 0x880AFD40;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r14,668(r1)
	ctx.current_instruction = 0x880AFD44;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// std r29,320(r1)
	ctx.current_instruction = 0x880AFD48;
	REX_STORE_U64(ctx.r1.u32 + 320, ctx.r29.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r28,292(r1)
	ctx.current_instruction = 0x880AFD50;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// mullw r9,r31,r18
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// lwz r31,628(r1)
	ctx.current_instruction = 0x880AFD58;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// std r30,312(r1)
	ctx.current_instruction = 0x880AFD5C;
	REX_STORE_U64(ctx.r1.u32 + 312, ctx.r30.u64);
	// lwz r18,264(r1)
	ctx.current_instruction = 0x880AFD60;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// std r3,304(r1)
	ctx.current_instruction = 0x880AFD64;
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r3.u64);
	// stw r6,268(r1)
	ctx.current_instruction = 0x880AFD68;
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// lwz r4,256(r1)
	ctx.current_instruction = 0x880AFD6C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,256(r1)
	ctx.current_instruction = 0x880AFD70;
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// stw r7,296(r1)
	ctx.current_instruction = 0x880AFD74;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// lwz r29,604(r1)
	ctx.current_instruction = 0x880AFD78;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r28,596(r1)
	ctx.current_instruction = 0x880AFD7C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// and r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 & ctx.r20.u64;
	// lwz r20,700(r1)
	ctx.current_instruction = 0x880AFD84;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r30,588(r1)
	ctx.current_instruction = 0x880AFD88;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// subf r7,r23,r21
	ctx.r7.u64 = ctx.r21.u64 - ctx.r23.u64;
	// subf r11,r24,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r24.u64;
	// lwz r3,652(r1)
	ctx.current_instruction = 0x880AFD94;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r6,580(r1)
	ctx.current_instruction = 0x880AFD98;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// stw r17,244(r1)
	ctx.current_instruction = 0x880AFD9C;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r17.u32);
	// lwz r8,260(r1)
	ctx.current_instruction = 0x880AFDA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r16,212(r1)
	ctx.current_instruction = 0x880AFDA4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// stw r20,204(r1)
	ctx.current_instruction = 0x880AFDA8;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r20.u32);
	// stw r19,196(r1)
	ctx.current_instruction = 0x880AFDAC;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// stw r15,140(r1)
	ctx.current_instruction = 0x880AFDB0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// stw r14,132(r1)
	ctx.current_instruction = 0x880AFDB4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// stw r8,124(r1)
	ctx.current_instruction = 0x880AFDB8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r31,264(r1)
	ctx.current_instruction = 0x880AFDBC;
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stw r7,172(r1)
	ctx.current_instruction = 0x880AFDC0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r11,164(r1)
	ctx.current_instruction = 0x880AFDC8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// stw r28,108(r1)
	ctx.current_instruction = 0x880AFDD0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r8,r18,1
	ctx.r8.s64 = ctx.r18.s64 + 1;
	// stw r3,92(r1)
	ctx.current_instruction = 0x880AFDD8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r10,180(r1)
	ctx.current_instruction = 0x880AFDDC;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r30,100(r1)
	ctx.current_instruction = 0x880AFDE0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r7,256(r1)
	ctx.current_instruction = 0x880AFDE4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880AFDE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// ld r30,312(r1)
	ctx.current_instruction = 0x880AFDEC;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,284(r1)
	ctx.current_instruction = 0x880AFDF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r28,264(r1)
	ctx.current_instruction = 0x880AFDF8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r27,236(r1)
	ctx.current_instruction = 0x880AFDFC;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r27.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ld r3,304(r1)
	ctx.current_instruction = 0x880AFE04;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// subf r28,r28,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r28.u64;
	// lwz r10,620(r1)
	ctx.current_instruction = 0x880AFE0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r27,288(r1)
	ctx.current_instruction = 0x880AFE10;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// stw r9,156(r1)
	ctx.current_instruction = 0x880AFE14;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// add r9,r31,r7
	ctx.r9.u64 = ctx.r31.u64 + ctx.r7.u64;
	// stw r8,148(r1)
	ctx.current_instruction = 0x880AFE1C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,268(r1)
	ctx.current_instruction = 0x880AFE28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// add r8,r31,r27
	ctx.r8.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r5,276(r1)
	ctx.current_instruction = 0x880AFE30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,280(r1)
	ctx.current_instruction = 0x880AFE34;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r3,292(r1)
	ctx.current_instruction = 0x880AFE38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r29,116(r1)
	ctx.current_instruction = 0x880AFE3C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r26,228(r1)
	ctx.current_instruction = 0x880AFE40;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r25,220(r1)
	ctx.current_instruction = 0x880AFE44;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// stw r22,188(r1)
	ctx.current_instruction = 0x880AFE48;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// stw r28,84(r1)
	ctx.current_instruction = 0x880AFE4C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8808e518
	ctx.lr = 0x880AFE54;
	sub_8808E518(ctx, base);
loc_880AFE54:
	// lwz r10,292(r1)
	ctx.current_instruction = 0x880AFE54;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,296(r1)
	ctx.current_instruction = 0x880AFE58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,716(r1)
	ctx.current_instruction = 0x880AFE5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r4,724(r1)
	ctx.current_instruction = 0x880AFE60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,280(r1)
	ctx.current_instruction = 0x880AFE68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// ld r29,320(r1)
	ctx.current_instruction = 0x880AFE6C;
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
	// lwz r10,732(r1)
	ctx.current_instruction = 0x880AFE70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r8,652(r1)
	ctx.current_instruction = 0x880AFE74;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r3,0(r6)
	ctx.current_instruction = 0x880AFE7C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r9,0(r4)
	ctx.current_instruction = 0x880AFE80;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r10)
	ctx.current_instruction = 0x880AFE84;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880BAB58) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880BAB58;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880BAB58) {
			switch (rex_dispatch_address) {
				case 0x880BAB60:
				case 0x880BAF88:
				case 0x880BAFB0:
				case 0x880BAFD8:
				case 0x880BAFFC:
				case 0x880BB040:
				case 0x880BB068:
				case 0x880BB08C:
				case 0x880BB110:
				case 0x880BB138:
				case 0x880BB160:
				case 0x880BB18C:
				case 0x880BB1E8:
				case 0x880BB210:
				case 0x880BB238:
				case 0x880BB280:
				case 0x880BB298:
				case 0x880BB2E8:
				case 0x880BB36C:
				case 0x880BB3A8:
				case 0x880BB3D8:
				case 0x880BB414:
				case 0x880BB464:
				case 0x880BB47C:
				case 0x880BB494:
				case 0x880BB4AC:
				case 0x880BB4CC:
				case 0x880BB530:
				case 0x880BB548:
				case 0x880BB560:
				case 0x880BB578:
				case 0x880BB5C4:
				case 0x880BB5F0:
				case 0x880BB61C:
				case 0x880BB694:
				case 0x880BB6DC:
				case 0x880BB718:
				case 0x880BB7EC:
				case 0x880BB878:
				case 0x880BB918:
				case 0x880BB990:
				case 0x880BBA44:
				case 0x880BBA84:
				case 0x880BBAB4:
				case 0x880BBB60:
				case 0x880BBBDC:
				case 0x880BBC74:
				case 0x880BBCE8:
				case 0x880BBE80:
				case 0x880BBF2C:
				case 0x880BBFCC:
				case 0x880BC02C:
				case 0x880BC0E8:
				case 0x880BC180:
				case 0x880BC1DC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880BAB58;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880BAB60: goto loc_880BAB60;
		case 0x880BAF88: goto loc_880BAF88;
		case 0x880BAFB0: goto loc_880BAFB0;
		case 0x880BAFD8: goto loc_880BAFD8;
		case 0x880BAFFC: goto loc_880BAFFC;
		case 0x880BB040: goto loc_880BB040;
		case 0x880BB068: goto loc_880BB068;
		case 0x880BB08C: goto loc_880BB08C;
		case 0x880BB110: goto loc_880BB110;
		case 0x880BB138: goto loc_880BB138;
		case 0x880BB160: goto loc_880BB160;
		case 0x880BB18C: goto loc_880BB18C;
		case 0x880BB1E8: goto loc_880BB1E8;
		case 0x880BB210: goto loc_880BB210;
		case 0x880BB238: goto loc_880BB238;
		case 0x880BB280: goto loc_880BB280;
		case 0x880BB298: goto loc_880BB298;
		case 0x880BB2E8: goto loc_880BB2E8;
		case 0x880BB36C: goto loc_880BB36C;
		case 0x880BB3A8: goto loc_880BB3A8;
		case 0x880BB3D8: goto loc_880BB3D8;
		case 0x880BB414: goto loc_880BB414;
		case 0x880BB464: goto loc_880BB464;
		case 0x880BB47C: goto loc_880BB47C;
		case 0x880BB494: goto loc_880BB494;
		case 0x880BB4AC: goto loc_880BB4AC;
		case 0x880BB4CC: goto loc_880BB4CC;
		case 0x880BB530: goto loc_880BB530;
		case 0x880BB548: goto loc_880BB548;
		case 0x880BB560: goto loc_880BB560;
		case 0x880BB578: goto loc_880BB578;
		case 0x880BB5C4: goto loc_880BB5C4;
		case 0x880BB5F0: goto loc_880BB5F0;
		case 0x880BB61C: goto loc_880BB61C;
		case 0x880BB694: goto loc_880BB694;
		case 0x880BB6DC: goto loc_880BB6DC;
		case 0x880BB718: goto loc_880BB718;
		case 0x880BB7EC: goto loc_880BB7EC;
		case 0x880BB878: goto loc_880BB878;
		case 0x880BB918: goto loc_880BB918;
		case 0x880BB990: goto loc_880BB990;
		case 0x880BBA44: goto loc_880BBA44;
		case 0x880BBA84: goto loc_880BBA84;
		case 0x880BBAB4: goto loc_880BBAB4;
		case 0x880BBB60: goto loc_880BBB60;
		case 0x880BBBDC: goto loc_880BBBDC;
		case 0x880BBC74: goto loc_880BBC74;
		case 0x880BBCE8: goto loc_880BBCE8;
		case 0x880BBE80: goto loc_880BBE80;
		case 0x880BBF2C: goto loc_880BBF2C;
		case 0x880BBFCC: goto loc_880BBFCC;
		case 0x880BC02C: goto loc_880BC02C;
		case 0x880BC0E8: goto loc_880BC0E8;
		case 0x880BC180: goto loc_880BC180;
		case 0x880BC1DC: goto loc_880BC1DC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880BAB60;
	__savegprlr_14(ctx, base);
loc_880BAB60:
	// stfd f29,-176(r1)
	ctx.current_instruction = 0x880BAB60;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	ctx.current_instruction = 0x880BAB64;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	ctx.current_instruction = 0x880BAB68;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.current_instruction = 0x880BAB6C;
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ctx.current_instruction = 0x880BAB70;
	ea = -4336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,2527
	ctx.r11.s64 = ctx.r1.s64 + 2527;
	// stw r6,4380(r1)
	ctx.current_instruction = 0x880BAB78;
	REX_STORE_U32(ctx.r1.u32 + 4380, ctx.r6.u32);
	// addi r6,r1,2879
	ctx.r6.s64 = ctx.r1.s64 + 2879;
	// stw r7,4388(r1)
	ctx.current_instruction = 0x880BAB80;
	REX_STORE_U32(ctx.r1.u32 + 4388, ctx.r7.u32);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r7,1380(r3)
	ctx.current_instruction = 0x880BAB88;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// stw r8,4396(r1)
	ctx.current_instruction = 0x880BAB8C;
	REX_STORE_U32(ctx.r1.u32 + 4396, ctx.r8.u32);
	// rlwinm r8,r6,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,532(r1)
	ctx.current_instruction = 0x880BAB94;
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,4372(r1)
	ctx.current_instruction = 0x880BABA0;
	REX_STORE_U32(ctx.r1.u32 + 4372, ctx.r5.u32);
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// stw r4,4364(r1)
	ctx.current_instruction = 0x880BABA8;
	REX_STORE_U32(ctx.r1.u32 + 4364, ctx.r4.u32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// lwz r10,6804(r3)
	ctx.current_instruction = 0x880BABB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6804);
	// addi r5,r8,256
	ctx.r5.s64 = ctx.r8.s64 + 256;
	// lwz r9,6808(r3)
	ctx.current_instruction = 0x880BABB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6808);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,364(r1)
	ctx.current_instruction = 0x880BABC0;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// lwz r4,720(r3)
	ctx.current_instruction = 0x880BABC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,320(r1)
	ctx.current_instruction = 0x880BABCC;
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// addi r5,r5,256
	ctx.r5.s64 = ctx.r5.s64 + 256;
	// lis r26,-30720
	ctx.r26.s64 = -2013265920;
	// lwz r29,6844(r3)
	ctx.current_instruction = 0x880BABD8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 6844);
	// stw r6,516(r1)
	ctx.current_instruction = 0x880BABDC;
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r6.u32);
	// mullw r8,r4,r27
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// lwz r28,784(r3)
	ctx.current_instruction = 0x880BABE4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// lwz r25,7816(r3)
	ctx.current_instruction = 0x880BABE8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 7816);
	// stw r5,276(r1)
	ctx.current_instruction = 0x880BABEC;
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// lwz r7,7764(r3)
	ctx.current_instruction = 0x880BABF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 7764);
	// lfd f31,1488(r26)
	ctx.current_instruction = 0x880BABF4;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r26.u32 + 1488);
	// stw r8,448(r1)
	ctx.current_instruction = 0x880BABF8;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stw r29,624(r1)
	ctx.current_instruction = 0x880BAC00;
	REX_STORE_U32(ctx.r1.u32 + 624, ctx.r29.u32);
	// stw r28,604(r1)
	ctx.current_instruction = 0x880BAC04;
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r28.u32);
	// stw r25,612(r1)
	ctx.current_instruction = 0x880BAC08;
	REX_STORE_U32(ctx.r1.u32 + 612, ctx.r25.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28044(r3)
	ctx.current_instruction = 0x880BAC20;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28044);
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r5,672(r1)
	ctx.current_instruction = 0x880BAC28;
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r5.u32);
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// mulli r8,r8,276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(276));
	// stw r20,424(r1)
	ctx.current_instruction = 0x880BAC34;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r20.u32);
	// stw r6,360(r1)
	ctx.current_instruction = 0x880BAC38;
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// stw r20,436(r1)
	ctx.current_instruction = 0x880BAC3C;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r20.u32);
	// stw r20,340(r1)
	ctx.current_instruction = 0x880BAC40;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,632(r1)
	ctx.current_instruction = 0x880BAC4C;
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x880bacdc
	if (ctx.cr6.eq) goto loc_880BACDC;
	// lwz r10,6820(r31)
	ctx.current_instruction = 0x880BAC58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6820);
	// lwz r8,6824(r31)
	ctx.current_instruction = 0x880BAC5C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 6824);
	// lwz r7,6836(r31)
	ctx.current_instruction = 0x880BAC60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 6836);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1400(r31)
	ctx.current_instruction = 0x880BAC68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1400);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,6840(r31)
	ctx.current_instruction = 0x880BAC70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6840);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,24(r31)
	ctx.current_instruction = 0x880BAC78;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r6,28(r31)
	ctx.current_instruction = 0x880BAC84;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r26,r5,r10
	ctx.r26.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r9,7808(r31)
	ctx.current_instruction = 0x880BAC8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7808);
	// lwz r5,7812(r31)
	ctx.current_instruction = 0x880BAC90;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7812);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r25,6848(r31)
	ctx.current_instruction = 0x880BAC98;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 6848);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r24,6852(r31)
	ctx.current_instruction = 0x880BACA0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 6852);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// stw r28,676(r1)
	ctx.current_instruction = 0x880BACAC;
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r28.u32);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// stw r26,656(r1)
	ctx.current_instruction = 0x880BACB4;
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r26.u32);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r6,616(r1)
	ctx.current_instruction = 0x880BACBC;
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r6.u32);
	// stw r25,608(r1)
	ctx.current_instruction = 0x880BACC0;
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r25.u32);
	// stw r9,660(r1)
	ctx.current_instruction = 0x880BACC4;
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r9.u32);
	// stw r24,648(r1)
	ctx.current_instruction = 0x880BACC8;
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r24.u32);
	// stw r5,668(r1)
	ctx.current_instruction = 0x880BACCC;
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r5.u32);
	// stw r10,628(r1)
	ctx.current_instruction = 0x880BACD0;
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// stw r8,652(r1)
	ctx.current_instruction = 0x880BACD4;
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r8.u32);
	// stw r7,636(r1)
	ctx.current_instruction = 0x880BACD8;
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r7.u32);
loc_880BACDC:
	// lwz r11,2204(r31)
	ctx.current_instruction = 0x880BACDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x880bacf8
	if (!ctx.cr6.eq) goto loc_880BACF8;
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// stw r11,272(r1)
	ctx.current_instruction = 0x880BACF0;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// b 0x880bad00
	goto loc_880BAD00;
loc_880BACF8:
	// stw r20,272(r1)
	ctx.current_instruction = 0x880BACF8;
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r20.u32);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
loc_880BAD00:
	// lwz r10,20820(r31)
	ctx.current_instruction = 0x880BAD00;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20820);
	// lwz r9,2144(r31)
	ctx.current_instruction = 0x880BAD04;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2144);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// lwz r8,580(r10)
	ctx.current_instruction = 0x880BAD0C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 580);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,504(r1)
	ctx.current_instruction = 0x880BAD14;
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r8.u32);
	// bne cr6,0x880bad28
	if (!ctx.cr6.eq) goto loc_880BAD28;
	// stw r11,500(r1)
	ctx.current_instruction = 0x880BAD1C;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
	// stw r10,508(r1)
	ctx.current_instruction = 0x880BAD20;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// b 0x880bad30
	goto loc_880BAD30;
loc_880BAD28:
	// stw r11,508(r1)
	ctx.current_instruction = 0x880BAD28;
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// stw r10,500(r1)
	ctx.current_instruction = 0x880BAD2C;
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
loc_880BAD30:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x880bc564
	if (!ctx.cr6.lt) goto loc_880BC564;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f29,12088(r11)
	ctx.current_instruction = 0x880BAD3C;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 12088);
loc_880BAD40:
	// lwz r11,796(r31)
	ctx.current_instruction = 0x880BAD40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,364(r1)
	ctx.current_instruction = 0x880BAD48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mullw r8,r11,r27
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// lwz r9,1380(r31)
	ctx.current_instruction = 0x880BAD50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r7,672(r1)
	ctx.current_instruction = 0x880BAD54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r6,624(r1)
	ctx.current_instruction = 0x880BAD58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 624);
	// lwz r5,632(r1)
	ctx.current_instruction = 0x880BAD5C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r30,604(r1)
	ctx.current_instruction = 0x880BAD60;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r28,612(r1)
	ctx.current_instruction = 0x880BAD64;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// stw r20,524(r1)
	ctx.current_instruction = 0x880BAD68;
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r20.u32);
	// stw r20,488(r1)
	ctx.current_instruction = 0x880BAD6C;
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r20.u32);
	// stw r20,372(r1)
	ctx.current_instruction = 0x880BAD70;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r20.u32);
	// stw r20,288(r1)
	ctx.current_instruction = 0x880BAD74;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r20.u32);
	// mullw r11,r27,r10
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r9,r27
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r8,384(r1)
	ctx.current_instruction = 0x880BAD98;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,324(r1)
	ctx.current_instruction = 0x880BADA0;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r6,392(r1)
	ctx.current_instruction = 0x880BADA8;
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r6.u32);
	// stw r5,296(r1)
	ctx.current_instruction = 0x880BADAC;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r5.u32);
	// stw r10,280(r1)
	ctx.current_instruction = 0x880BADB0;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// beq cr6,0x880bae5c
	if (ctx.cr6.eq) goto loc_880BAE5C;
	// lwz r10,796(r31)
	ctx.current_instruction = 0x880BADB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 796);
	// lwz r9,1384(r31)
	ctx.current_instruction = 0x880BADBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r7,676(r1)
	ctx.current_instruction = 0x880BADC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// mullw r6,r9,r27
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// lwz r5,656(r1)
	ctx.current_instruction = 0x880BADCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r30,608(r1)
	ctx.current_instruction = 0x880BADD0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// lwz r28,648(r1)
	ctx.current_instruction = 0x880BADD4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r23,628(r1)
	ctx.current_instruction = 0x880BADD8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r22,652(r1)
	ctx.current_instruction = 0x880BADDC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r26,616(r1)
	ctx.current_instruction = 0x880BADE0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r25,660(r1)
	ctx.current_instruction = 0x880BADE4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r24,668(r1)
	ctx.current_instruction = 0x880BADE8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r21,636(r1)
	ctx.current_instruction = 0x880BADEC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// stw r20,428(r1)
	ctx.current_instruction = 0x880BADF0;
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r20.u32);
	// mullw r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// stw r20,432(r1)
	ctx.current_instruction = 0x880BADF8;
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r20.u32);
	// stw r20,452(r1)
	ctx.current_instruction = 0x880BADFC;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r20.u32);
	// stw r20,464(r1)
	ctx.current_instruction = 0x880BAE00;
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r20.u32);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r8,420(r1)
	ctx.current_instruction = 0x880BAE18;
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r8.u32);
	// add r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r7,312(r1)
	ctx.current_instruction = 0x880BAE20;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r7.u32);
	// stw r6,396(r1)
	ctx.current_instruction = 0x880BAE24;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r5,380(r1)
	ctx.current_instruction = 0x880BAE2C;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r5.u32);
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r6,456(r1)
	ctx.current_instruction = 0x880BAE38;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r6.u32);
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r5,440(r1)
	ctx.current_instruction = 0x880BAE40;
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r5.u32);
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r9,304(r1)
	ctx.current_instruction = 0x880BAE48;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r8,308(r1)
	ctx.current_instruction = 0x880BAE50;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// stw r7,316(r1)
	ctx.current_instruction = 0x880BAE54;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r7.u32);
	// stw r11,472(r1)
	ctx.current_instruction = 0x880BAE58;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
loc_880BAE5C:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x880bc524
	if (ctx.cr6.eq) goto loc_880BC524;
	// lwz r10,4364(r1)
	ctx.current_instruction = 0x880BAE68;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 4364);
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r27,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subfic r8,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r8.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,600(r1)
	ctx.current_instruction = 0x880BAE7C;
	REX_STORE_U32(ctx.r1.u32 + 600, ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,496(r1)
	ctx.current_instruction = 0x880BAE84;
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r6.u32);
loc_880BAE88:
	// lwz r9,720(r31)
	ctx.current_instruction = 0x880BAE88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,6892(r31)
	ctx.current_instruction = 0x880BAE90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6892);
	// clrlwi r25,r26,31
	ctx.r25.u64 = ctx.r26.u32 & 0x1;
	// mullw r8,r9,r27
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r23,r11,-16
	ctx.xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r23.u64 = static_cast<uint64_t>(-16) - ctx.r11.u64;
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + ctx.r26.u64;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r9.s32, ctx.xer);
	// stw r6,444(r1)
	ctx.current_instruction = 0x880BAEB4;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// bge cr6,0x880baec0
	if (!ctx.cr6.lt) goto loc_880BAEC0;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
loc_880BAEC0:
	// lwz r9,1352(r31)
	ctx.current_instruction = 0x880BAEC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1352);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r21,r11,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x880baed8
	if (!ctx.cr6.gt) goto loc_880BAED8;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
loc_880BAED8:
	// lwz r11,6896(r31)
	ctx.current_instruction = 0x880BAED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6896);
	// lwz r22,600(r1)
	ctx.current_instruction = 0x880BAEDC;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x880baef0
	if (!ctx.cr6.lt) goto loc_880BAEF0;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_880BAEF0:
	// lwz r9,1360(r31)
	ctx.current_instruction = 0x880BAEF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r24,r10,r9
	ctx.r24.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x880baf0c
	if (!ctx.cr6.gt) goto loc_880BAF0C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_880BAF0C:
	// srawi r19,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r23.s32 >> 2;
	// srawi r18,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r21.s32 >> 2;
	// srawi r17,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 2;
	// srawi r16,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r16.s64 = ctx.r24.s32 >> 2;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880bb24c
	if (!ctx.cr6.eq) goto loc_880BB24C;
	// lwz r11,148(r29)
	ctx.current_instruction = 0x880BAF24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r7,324(r1)
	ctx.current_instruction = 0x880BAF2C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,724(r31)
	ctx.current_instruction = 0x880BAF34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// subf r6,r26,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r26.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r5,r27,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r27.u64;
	// beq cr6,0x880bb004
	if (ctx.cr6.eq) goto loc_880BB004;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r30,532(r1)
	ctx.current_instruction = 0x880BAF4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r15,320(r1)
	ctx.current_instruction = 0x880BAF50;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r9,380(r1)
	ctx.current_instruction = 0x880BAF5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// lwz r8,396(r1)
	ctx.current_instruction = 0x880BAF64;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// stw r5,84(r1)
	ctx.current_instruction = 0x880BAF68;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r20,92(r1)
	ctx.current_instruction = 0x880BAF74;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BAF88;
	sub_880C3EC8(ctx, base);
loc_880BAF88:
	// lwz r4,7200(r31)
	ctx.current_instruction = 0x880BAF88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880bafb0
	if (ctx.cr6.eq) goto loc_880BAFB0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bafb0
	if (!ctx.cr6.eq) goto loc_880BAFB0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BAFB0;
	sub_880EB138(ctx, base);
loc_880BAFB0:
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x880BAFB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r15,360(r1)
	ctx.current_instruction = 0x880BAFB8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BAFD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BAFD8:
	// lwz r10,7088(r31)
	ctx.current_instruction = 0x880BAFD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// addi r6,r15,32
	ctx.r6.s64 = ctx.r15.s64 + 32;
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
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x880BAFFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BAFFC:
	// lwz r28,320(r1)
	ctx.current_instruction = 0x880BAFFC;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// b 0x880bb068
	goto loc_880BB068;
loc_880BB004:
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r28,320(r1)
	ctx.current_instruction = 0x880BB008;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880BB018;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r9,92(r1)
	ctx.current_instruction = 0x880BB020;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BB040;
	sub_880C3EC8(ctx, base);
loc_880BB040:
	// lwz r10,7200(r31)
	ctx.current_instruction = 0x880BB040;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb068
	if (ctx.cr6.eq) goto loc_880BB068;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bb068
	if (!ctx.cr6.eq) goto loc_880BB068;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BB068;
	sub_880EB138(ctx, base);
loc_880BB068:
	// lwz r11,7084(r31)
	ctx.current_instruction = 0x880BB068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r6,276(r1)
	ctx.current_instruction = 0x880BB074;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB08C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB08C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x880BB08C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x880bb238
	if (!ctx.cr6.lt) goto loc_880BB238;
	// lwz r9,148(r29)
	ctx.current_instruction = 0x880BB09C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,724(r31)
	ctx.current_instruction = 0x880BB0A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// beq cr6,0x880bb194
	if (ctx.cr6.eq) goto loc_880BB194;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,320(r1)
	ctx.current_instruction = 0x880BB0B0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r28,516(r1)
	ctx.current_instruction = 0x880BB0B8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// subf r5,r27,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r27.u64;
	// lwz r6,380(r1)
	ctx.current_instruction = 0x880BB0C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,396(r1)
	ctx.current_instruction = 0x880BB0C8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880BB0D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r30,r8,256
	ctx.r30.s64 = ctx.r8.s64 + 256;
	// stw r20,92(r1)
	ctx.current_instruction = 0x880BB0D8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r15,r28,64
	ctx.r15.s64 = ctx.r28.s64 + 64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880BB0EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r6,8
	ctx.r9.s64 = ctx.r6.s64 + 8;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BB110;
	sub_880C3EC8(ctx, base);
loc_880BB110:
	// lwz r7,7200(r31)
	ctx.current_instruction = 0x880BB110;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880bb138
	if (ctx.cr6.eq) goto loc_880BB138;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bb138
	if (!ctx.cr6.eq) goto loc_880BB138;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BB138;
	sub_880EB138(ctx, base);
loc_880BB138:
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x880BB138;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r10,360(r1)
	ctx.current_instruction = 0x880BB140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB160:
	// lwz r9,360(r1)
	ctx.current_instruction = 0x880BB160;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,7088(r31)
	ctx.current_instruction = 0x880BB180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB18C:
	// lwz r28,320(r1)
	ctx.current_instruction = 0x880BB18C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// b 0x880bb210
	goto loc_880BB210;
loc_880BB194:
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lwz r6,324(r1)
	ctx.current_instruction = 0x880BB198;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r3,r27,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// subf r4,r11,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stw r8,92(r1)
	ctx.current_instruction = 0x880BB1B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r30,r28,256
	ctx.r30.s64 = ctx.r28.s64 + 256;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880BB1C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r7,r6,16
	ctx.r7.s64 = ctx.r6.s64 + 16;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c3ec8
	ctx.lr = 0x880BB1E8;
	sub_880C3EC8(ctx, base);
loc_880BB1E8:
	// lwz r7,7200(r31)
	ctx.current_instruction = 0x880BB1E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 7200);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880bb210
	if (ctx.cr6.eq) goto loc_880BB210;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x880bb210
	if (!ctx.cr6.eq) goto loc_880BB210;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb138
	ctx.lr = 0x880BB210;
	sub_880EB138(ctx, base);
loc_880BB210:
	// lwz r11,7084(r31)
	ctx.current_instruction = 0x880BB210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7084);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r10,276(r1)
	ctx.current_instruction = 0x880BB218;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB238:
	// lwz r11,28044(r31)
	ctx.current_instruction = 0x880BB238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb26c
	if (ctx.cr6.eq) goto loc_880BB26C;
	// lwz r11,532(r1)
	ctx.current_instruction = 0x880BB244;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// b 0x880bb260
	goto loc_880BB260;
loc_880BB24C:
	// lwz r11,320(r1)
	ctx.current_instruction = 0x880BB24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r11,256
	ctx.r28.s64 = ctx.r11.s64 + 256;
	// beq cr6,0x880bb26c
	if (ctx.cr6.eq) goto loc_880BB26C;
	// lwz r11,516(r1)
	ctx.current_instruction = 0x880BB25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
loc_880BB260:
	// stw r11,284(r1)
	ctx.current_instruction = 0x880BB260;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,292(r1)
	ctx.current_instruction = 0x880BB268;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
loc_880BB26C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880eb9e0
	ctx.lr = 0x880BB280;
	sub_880EB9E0(ctx, base);
loc_880BB280:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BB280;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb4b8
	if (ctx.cr6.eq) goto loc_880BB4B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ebc20
	ctx.lr = 0x880BB298;
	sub_880EBC20(ctx, base);
loc_880BB298:
	// addi r5,r1,664
	ctx.r5.s64 = ctx.r1.s64 + 664;
	// addi r10,r1,488
	ctx.r10.s64 = ctx.r1.s64 + 488;
	// lwz r6,96(r29)
	ctx.current_instruction = 0x880BB2A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// stw r5,124(r1)
	ctx.current_instruction = 0x880BB2A4;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r1,644
	ctx.r4.s64 = ctx.r1.s64 + 644;
	// addi r3,r1,620
	ctx.r3.s64 = ctx.r1.s64 + 620;
	// stw r10,92(r1)
	ctx.current_instruction = 0x880BB2B0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,524
	ctx.r11.s64 = ctx.r1.s64 + 524;
	// stw r4,116(r1)
	ctx.current_instruction = 0x880BB2B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r3,108(r1)
	ctx.current_instruction = 0x880BB2BC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r9,524(r1)
	ctx.current_instruction = 0x880BB2C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,488(r1)
	ctx.current_instruction = 0x880BB2D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x880BB2D8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x880BB2E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x880f6078
	ctx.lr = 0x880BB2E8;
	sub_880F6078(ctx, base);
loc_880BB2E8:
	// lwz r10,644(r1)
	ctx.current_instruction = 0x880BB2E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r9,504(r1)
	ctx.current_instruction = 0x880BB2EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r6,112(r29)
	ctx.current_instruction = 0x880BB2F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r5,620(r1)
	ctx.current_instruction = 0x880BB2F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,664(r1)
	ctx.current_instruction = 0x880BB2FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 664);
	// mullw r10,r6,r5
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r7,288(r1)
	ctx.current_instruction = 0x880BB304;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r4,148(r29)
	ctx.current_instruction = 0x880BB308;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r15,r10,r7
	ctx.r15.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r3,300(r1)
	ctx.current_instruction = 0x880BB31C;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r15,288(r1)
	ctx.current_instruction = 0x880BB324;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r15.u32);
	// beq cr6,0x880bb450
	if (ctx.cr6.eq) goto loc_880BB450;
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880BB32C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// stw r20,368(r1)
	ctx.current_instruction = 0x880BB330;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r20,336(r1)
	ctx.current_instruction = 0x880BB338;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r20.u32);
	// stw r20,356(r1)
	ctx.current_instruction = 0x880BB33C;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r20.u32);
	// stw r20,288(r1)
	ctx.current_instruction = 0x880BB340;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb3a8
	if (ctx.cr6.eq) goto loc_880BB3A8;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880BB34C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,2520(r31)
	ctx.current_instruction = 0x880BB354;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r3,284(r1)
	ctx.current_instruction = 0x880BB35C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB36C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB36C:
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// lwz r7,96(r29)
	ctx.current_instruction = 0x880BB370;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lwz r9,432(r1)
	ctx.current_instruction = 0x880BB378;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// stw r8,100(r1)
	ctx.current_instruction = 0x880BB37C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// stw r6,84(r1)
	ctx.current_instruction = 0x880BB384;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,464(r1)
	ctx.current_instruction = 0x880BB390;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,284(r1)
	ctx.current_instruction = 0x880BB398;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880BB3A0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x880f6d30
	ctx.lr = 0x880BB3A8;
	sub_880F6D30(ctx, base);
loc_880BB3A8:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880BB3A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb414
	if (ctx.cr6.eq) goto loc_880BB414;
	// lwz r11,276(r1)
	ctx.current_instruction = 0x880BB3B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,2520(r31)
	ctx.current_instruction = 0x880BB3C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// lwz r3,292(r1)
	ctx.current_instruction = 0x880BB3C8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB3D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB3D8:
	// addi r8,r1,428
	ctx.r8.s64 = ctx.r1.s64 + 428;
	// lwz r7,96(r29)
	ctx.current_instruction = 0x880BB3DC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r9,428(r1)
	ctx.current_instruction = 0x880BB3E4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stw r8,100(r1)
	ctx.current_instruction = 0x880BB3EC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r6,92(r1)
	ctx.current_instruction = 0x880BB3F0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r5,84(r1)
	ctx.current_instruction = 0x880BB3F8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,452(r1)
	ctx.current_instruction = 0x880BB404;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,292(r1)
	ctx.current_instruction = 0x880BB40C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x880f6d30
	ctx.lr = 0x880BB414;
	sub_880F6D30(ctx, base);
loc_880BB414:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880BB414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,356(r1)
	ctx.current_instruction = 0x880BB418;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,336(r1)
	ctx.current_instruction = 0x880BB41C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r8,368(r1)
	ctx.current_instruction = 0x880BB420;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,300(r1)
	ctx.current_instruction = 0x880BB428;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,432(r1)
	ctx.current_instruction = 0x880BB42C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,428(r1)
	ctx.current_instruction = 0x880BB434;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// stw r4,300(r1)
	ctx.current_instruction = 0x880BB440;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// stw r3,288(r1)
	ctx.current_instruction = 0x880BB444;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// stw r6,464(r1)
	ctx.current_instruction = 0x880BB448;
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r6.u32);
	// stw r5,452(r1)
	ctx.current_instruction = 0x880BB44C;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
loc_880BB450:
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880BB450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB464:
	// lwz r10,7136(r31)
	ctx.current_instruction = 0x880BB464;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB47C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB47C:
	// lwz r9,7136(r31)
	ctx.current_instruction = 0x880BB47C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880BB494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB494:
	// lwz r8,7136(r31)
	ctx.current_instruction = 0x880BB494;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880BB4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB4AC:
	// add r15,r3,r30
	ctx.r15.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r15,368(r1)
	ctx.current_instruction = 0x880BB4B0;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r15.u32);
	// b 0x880bb604
	goto loc_880BB604;
loc_880BB4B8:
	// lwz r11,28024(r31)
	ctx.current_instruction = 0x880BB4B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28024);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb520
	if (ctx.cr6.eq) goto loc_880BB520;
	// bl 0x880856c8
	ctx.lr = 0x880BB4CC;
	sub_880856C8(ctx, base);
loc_880BB4CC:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,1416(r31)
	ctx.current_instruction = 0x880BB4D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// std r11,712(r1)
	ctx.current_instruction = 0x880BB4D4;
	REX_STORE_U64(ctx.r1.u32 + 712, ctx.r11.u64);
	// lfd f0,712(r1)
	ctx.current_instruction = 0x880BB4D8;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 712);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r9,504(r1)
	ctx.current_instruction = 0x880BB4E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r8,288(r1)
	ctx.current_instruction = 0x880BB4EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r15,368(r1)
	ctx.current_instruction = 0x880BB4F0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadd f11,f12,f29
	ctx.f11.f64 = ctx.f12.f64 + ctx.f29.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,480(r1)
	ctx.current_instruction = 0x880BB504;
	REX_STORE_U64(ctx.r1.u32 + 480, ctx.f10.u64);
	// lwz r11,484(r1)
	ctx.current_instruction = 0x880BB508;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,300(r1)
	ctx.current_instruction = 0x880BB514;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r7,288(r1)
	ctx.current_instruction = 0x880BB518;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// b 0x880bb604
	goto loc_880BB604;
loc_880BB520:
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880BB520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,16
	ctx.r4.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB530:
	// lwz r10,7136(r31)
	ctx.current_instruction = 0x880BB530;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880BB548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB548:
	// lwz r9,7136(r31)
	ctx.current_instruction = 0x880BB548;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880BB560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB560:
	// lwz r8,7136(r31)
	ctx.current_instruction = 0x880BB560;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880BB578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB578:
	// lwz r7,19228(r31)
	ctx.current_instruction = 0x880BB578;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19228);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r6,148(r29)
	ctx.current_instruction = 0x880BB580;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,368(r1)
	ctx.current_instruction = 0x880BB588;
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r30,300(r1)
	ctx.current_instruction = 0x880BB598;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// beq cr6,0x880bb5f8
	if (ctx.cr6.eq) goto loc_880BB5F8;
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880BB5A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb5cc
	if (ctx.cr6.eq) goto loc_880BB5CC;
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880BB5B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,284(r1)
	ctx.current_instruction = 0x880BB5B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB5C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB5C4:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r30,300(r1)
	ctx.current_instruction = 0x880BB5C8;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
loc_880BB5CC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x880BB5CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb5f8
	if (ctx.cr6.eq) goto loc_880BB5F8;
	// lwz r11,7136(r31)
	ctx.current_instruction = 0x880BB5DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7136);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,292(r1)
	ctx.current_instruction = 0x880BB5E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880BB5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880BB5F0:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r30,300(r1)
	ctx.current_instruction = 0x880BB5F4;
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
loc_880BB5F8:
	// lwz r11,288(r1)
	ctx.current_instruction = 0x880BB5F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,288(r1)
	ctx.current_instruction = 0x880BB600;
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
loc_880BB604:
	// stw r15,152(r29)
	ctx.current_instruction = 0x880BB604;
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r15.u32);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,100(r29)
	ctx.current_instruction = 0x880BB610;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085888
	ctx.lr = 0x880BB61C;
	sub_88085888(ctx, base);
loc_880BB61C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x880bb6e8
	if (!ctx.cr6.eq) goto loc_880BB6E8;
	// lwz r11,148(r29)
	ctx.current_instruction = 0x880BB624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,276(r1)
	ctx.current_instruction = 0x880BB62C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb6a0
	if (ctx.cr6.eq) goto loc_880BB6A0;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x880BB638;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r15,r1,1728
	ctx.r15.s64 = ctx.r1.s64 + 1728;
	// stw r18,140(r1)
	ctx.current_instruction = 0x880BB640;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// addi r30,r1,2112
	ctx.r30.s64 = ctx.r1.s64 + 2112;
	// stw r19,132(r1)
	ctx.current_instruction = 0x880BB648;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r20,124(r1)
	ctx.current_instruction = 0x880BB650;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r15,164(r1)
	ctx.current_instruction = 0x880BB658;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880BB65C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r16,156(r1)
	ctx.current_instruction = 0x880BB660;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// stw r17,148(r1)
	ctx.current_instruction = 0x880BB664;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// lwz r10,456(r1)
	ctx.current_instruction = 0x880BB668;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r5,360(r1)
	ctx.current_instruction = 0x880BB66C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r9,384(r1)
	ctx.current_instruction = 0x880BB670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// stw r26,108(r1)
	ctx.current_instruction = 0x880BB678;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r27,116(r1)
	ctx.current_instruction = 0x880BB67C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r10,84(r1)
	ctx.current_instruction = 0x880BB680;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,420(r1)
	ctx.current_instruction = 0x880BB684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// stw r11,100(r1)
	ctx.current_instruction = 0x880BB688;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,172(r1)
	ctx.current_instruction = 0x880BB68C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x880d9d48
	ctx.lr = 0x880BB694;
	sub_880D9D48(ctx, base);
loc_880BB694:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,436(r1)
	ctx.current_instruction = 0x880BB698;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// b 0x880bb6ec
	goto loc_880BB6EC;
loc_880BB6A0:
	// addi r11,r1,2112
	ctx.r11.s64 = ctx.r1.s64 + 2112;
	// stw r17,100(r1)
	ctx.current_instruction = 0x880BB6A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// addi r30,r1,1728
	ctx.r30.s64 = ctx.r1.s64 + 1728;
	// lwz r7,364(r1)
	ctx.current_instruction = 0x880BB6AC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BB6B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,116(r1)
	ctx.current_instruction = 0x880BB6B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,384(r1)
	ctx.current_instruction = 0x880BB6C4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r18,92(r1)
	ctx.current_instruction = 0x880BB6CC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r16,108(r1)
	ctx.current_instruction = 0x880BB6D0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x880BB6D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x880d9a38
	ctx.lr = 0x880BB6DC;
	sub_880D9A38(ctx, base);
loc_880BB6DC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,436(r1)
	ctx.current_instruction = 0x880BB6E0;
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// b 0x880bb6ec
	goto loc_880BB6EC;
loc_880BB6E8:
	// lwz r30,436(r1)
	ctx.current_instruction = 0x880BB6E8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_880BB6EC:
	// lwz r11,496(r1)
	ctx.current_instruction = 0x880BB6EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,2460(r31)
	ctx.current_instruction = 0x880BB6F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,2456(r31)
	ctx.current_instruction = 0x880BB700;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880BB70C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880BB718;
	sub_88243CB0(ctx, base);
loc_880BB718:
	// lwz r10,28032(r31)
	ctx.current_instruction = 0x880BB718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// lwz r11,148(r29)
	ctx.current_instruction = 0x880BB71C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bb87c
	if (ctx.cr6.eq) goto loc_880BB87C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb7f0
	if (ctx.cr6.eq) goto loc_880BB7F0;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,272(r1)
	ctx.current_instruction = 0x880BB734;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// stw r30,148(r1)
	ctx.current_instruction = 0x880BB73C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r14,164(r1)
	ctx.current_instruction = 0x880BB744;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// stw r6,356(r1)
	ctx.current_instruction = 0x880BB74C;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r6.u32);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// stw r24,140(r1)
	ctx.current_instruction = 0x880BB754;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r10,336(r1)
	ctx.current_instruction = 0x880BB758;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// addi r15,r1,332
	ctx.r15.s64 = ctx.r1.s64 + 332;
	// stw r5,460(r1)
	ctx.current_instruction = 0x880BB760;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r5.u32);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// stw r15,204(r1)
	ctx.current_instruction = 0x880BB768;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r15.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r4,468(r1)
	ctx.current_instruction = 0x880BB770;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r4.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// stw r11,220(r1)
	ctx.current_instruction = 0x880BB778;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// rlwinm r30,r8,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stw r9,156(r1)
	ctx.current_instruction = 0x880BB780;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r3,212(r1)
	ctx.current_instruction = 0x880BB788;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880BB794;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BB79C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,296(r1)
	ctx.current_instruction = 0x880BB7A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BB7A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BB7A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r22,132(r1)
	ctx.current_instruction = 0x880BB7AC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	ctx.current_instruction = 0x880BB7B0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r20,188(r1)
	ctx.current_instruction = 0x880BB7B4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// stw r23,116(r1)
	ctx.current_instruction = 0x880BB7B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x880BB7BC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880BB7C0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x880BB7C4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r15,336(r1)
	ctx.current_instruction = 0x880BB7C8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// stw r15,196(r1)
	ctx.current_instruction = 0x880BB7CC;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// lwz r15,356(r1)
	ctx.current_instruction = 0x880BB7D0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r15,180(r1)
	ctx.current_instruction = 0x880BB7D4;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// lwz r15,460(r1)
	ctx.current_instruction = 0x880BB7D8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// stw r15,172(r1)
	ctx.current_instruction = 0x880BB7DC;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// lwz r15,468(r1)
	ctx.current_instruction = 0x880BB7E0;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// stw r15,84(r1)
	ctx.current_instruction = 0x880BB7E4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// bl 0x880b48f0
	ctx.lr = 0x880BB7EC;
	sub_880B48F0(ctx, base);
loc_880BB7EC:
	// b 0x880bb990
	goto loc_880BB990;
loc_880BB7F0:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r30,116(r1)
	ctx.current_instruction = 0x880BB7F4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BB7FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r4,164(r1)
	ctx.current_instruction = 0x880BB800;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r9,r1,328
	ctx.r9.s64 = ctx.r1.s64 + 328;
	// stw r10,188(r1)
	ctx.current_instruction = 0x880BB808;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,332
	ctx.r8.s64 = ctx.r1.s64 + 332;
	// stw r9,180(r1)
	ctx.current_instruction = 0x880BB814;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// add r6,r25,r10
	ctx.r6.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r5,296(r1)
	ctx.current_instruction = 0x880BB81C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BB824;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r8,172(r1)
	ctx.current_instruction = 0x880BB82C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r7,140(r1)
	ctx.current_instruction = 0x880BB834;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// rlwinm r30,r6,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880BB83C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r14,132(r1)
	ctx.current_instruction = 0x880BB844;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x880BB84C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BB854;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// stw r20,156(r1)
	ctx.current_instruction = 0x880BB85C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r21,92(r1)
	ctx.current_instruction = 0x880BB864;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r23,84(r1)
	ctx.current_instruction = 0x880BB86C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880b3830
	ctx.lr = 0x880BB878;
	sub_880B3830(ctx, base);
loc_880BB878:
	// b 0x880bb990
	goto loc_880BB990;
loc_880BB87C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BB880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880bb91c
	if (ctx.cr6.eq) goto loc_880BB91C;
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// stw r30,148(r1)
	ctx.current_instruction = 0x880BB894;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r9,r1,816
	ctx.r9.s64 = ctx.r1.s64 + 816;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880BB89C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// stw r10,172(r1)
	ctx.current_instruction = 0x880BB8A4;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,84(r1)
	ctx.current_instruction = 0x880BB8A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,212(r1)
	ctx.current_instruction = 0x880BB8B0;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r14,164(r1)
	ctx.current_instruction = 0x880BB8B8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// add r5,r25,r10
	ctx.r5.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r24,140(r1)
	ctx.current_instruction = 0x880BB8C0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r22,132(r1)
	ctx.current_instruction = 0x880BB8C8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// rlwinm r30,r5,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// stw r21,124(r1)
	ctx.current_instruction = 0x880BB8D0;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// addi r6,r1,332
	ctx.r6.s64 = ctx.r1.s64 + 332;
	// stw r26,100(r1)
	ctx.current_instruction = 0x880BB8D8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r15,r1,352
	ctx.r15.s64 = ctx.r1.s64 + 352;
	// stw r29,92(r1)
	ctx.current_instruction = 0x880BB8E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r23,116(r1)
	ctx.current_instruction = 0x880BB8E8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x880BB8EC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r8,180(r1)
	ctx.current_instruction = 0x880BB8F0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r6,204(r1)
	ctx.current_instruction = 0x880BB8F4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880BB8F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BB8FC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r7,296(r1)
	ctx.current_instruction = 0x880BB900;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BB904;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BB908;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r20,188(r1)
	ctx.current_instruction = 0x880BB90C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// stw r15,196(r1)
	ctx.current_instruction = 0x880BB910;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
	// bl 0x880b43d8
	ctx.lr = 0x880BB918;
	sub_880B43D8(ctx, base);
loc_880BB918:
	// b 0x880bb990
	goto loc_880BB990;
loc_880BB91C:
	// addi r10,r1,328
	ctx.r10.s64 = ctx.r1.s64 + 328;
	// stw r30,116(r1)
	ctx.current_instruction = 0x880BB920;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r1,332
	ctx.r9.s64 = ctx.r1.s64 + 332;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BB928;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stw r10,180(r1)
	ctx.current_instruction = 0x880BB930;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// stw r9,172(r1)
	ctx.current_instruction = 0x880BB938;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// stw r8,164(r1)
	ctx.current_instruction = 0x880BB940;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r7,148(r1)
	ctx.current_instruction = 0x880BB944;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,140(r1)
	ctx.current_instruction = 0x880BB94C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r14,132(r1)
	ctx.current_instruction = 0x880BB954;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// add r5,r25,r10
	ctx.r5.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r20,156(r1)
	ctx.current_instruction = 0x880BB95C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x880BB964;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// rlwinm r30,r5,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BB96C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,296(r1)
	ctx.current_instruction = 0x880BB978;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// stw r21,92(r1)
	ctx.current_instruction = 0x880BB980;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r23,84(r1)
	ctx.current_instruction = 0x880BB988;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x880b3028
	ctx.lr = 0x880BB990;
	sub_880B3028(ctx, base);
loc_880BB990:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BB990;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bb9b8
	if (ctx.cr6.eq) goto loc_880BB9B8;
	// lwz r11,108(r29)
	ctx.current_instruction = 0x880BB99C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,508(r1)
	ctx.current_instruction = 0x880BB9A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r9,328(r1)
	ctx.current_instruction = 0x880BB9A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r15,r11,r9
	ctx.r15.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r15,328(r1)
	ctx.current_instruction = 0x880BB9B0;
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r15.u32);
	// b 0x880bb9bc
	goto loc_880BB9BC;
loc_880BB9B8:
	// lwz r15,328(r1)
	ctx.current_instruction = 0x880BB9B8;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
loc_880BB9BC:
	// lwz r11,352(r1)
	ctx.current_instruction = 0x880BB9BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r10,332(r1)
	ctx.current_instruction = 0x880BB9C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,688(r1)
	ctx.current_instruction = 0x880BB9C8;
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
	// stw r10,692(r1)
	ctx.current_instruction = 0x880BB9CC;
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// bne cr6,0x880bba88
	if (!ctx.cr6.eq) goto loc_880BBA88;
	// lwz r11,148(r29)
	ctx.current_instruction = 0x880BB9D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,276(r1)
	ctx.current_instruction = 0x880BB9DC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bba48
	if (ctx.cr6.eq) goto loc_880BBA48;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x880BB9E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// lwz r9,472(r1)
	ctx.current_instruction = 0x880BB9F0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// addi r6,r1,960
	ctx.r6.s64 = ctx.r1.s64 + 960;
	// stw r10,172(r1)
	ctx.current_instruction = 0x880BB9F8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r6,164(r1)
	ctx.current_instruction = 0x880BBA00;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r16,156(r1)
	ctx.current_instruction = 0x880BBA08;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// stw r17,148(r1)
	ctx.current_instruction = 0x880BBA0C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r9,84(r1)
	ctx.current_instruction = 0x880BBA10;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r18,140(r1)
	ctx.current_instruction = 0x880BBA14;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stw r20,124(r1)
	ctx.current_instruction = 0x880BBA18;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x880BBA1C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r11,100(r1)
	ctx.current_instruction = 0x880BBA20;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,360(r1)
	ctx.current_instruction = 0x880BBA24;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r10,440(r1)
	ctx.current_instruction = 0x880BBA28;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// lwz r9,392(r1)
	ctx.current_instruction = 0x880BBA30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// stw r19,132(r1)
	ctx.current_instruction = 0x880BBA34;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r27,116(r1)
	ctx.current_instruction = 0x880BBA38;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x880BBA3C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x880d9d48
	ctx.lr = 0x880BBA44;
	sub_880D9D48(ctx, base);
loc_880BBA44:
	// b 0x880bba84
	goto loc_880BBA84;
loc_880BBA48:
	// stw r18,92(r1)
	ctx.current_instruction = 0x880BBA48;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// addi r11,r1,1344
	ctx.r11.s64 = ctx.r1.s64 + 1344;
	// stw r19,84(r1)
	ctx.current_instruction = 0x880BBA50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r25,r1,960
	ctx.r25.s64 = ctx.r1.s64 + 960;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,364(r1)
	ctx.current_instruction = 0x880BBA5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r6,392(r1)
	ctx.current_instruction = 0x880BBA64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BBA6C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r16,108(r1)
	ctx.current_instruction = 0x880BBA74;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stw r17,100(r1)
	ctx.current_instruction = 0x880BBA78;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r25,116(r1)
	ctx.current_instruction = 0x880BBA7C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// bl 0x880d9a38
	ctx.lr = 0x880BBA84;
	sub_880D9A38(ctx, base);
loc_880BBA84:
	// stw r3,340(r1)
	ctx.current_instruction = 0x880BBA84;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
loc_880BBA88:
	// lwz r11,496(r1)
	ctx.current_instruction = 0x880BBA88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,2468(r31)
	ctx.current_instruction = 0x880BBA94;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,2464(r31)
	ctx.current_instruction = 0x880BBA9C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880BBAA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88243cb0
	ctx.lr = 0x880BBAB4;
	sub_88243CB0(ctx, base);
loc_880BBAB4:
	// lwz r10,28032(r31)
	ctx.current_instruction = 0x880BBAB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// lwz r11,148(r29)
	ctx.current_instruction = 0x880BBAB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880bbbe0
	if (ctx.cr6.eq) goto loc_880BBBE0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BBAC8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// beq cr6,0x880bbb64
	if (ctx.cr6.eq) goto loc_880BBB64;
	// addi r8,r1,348
	ctx.r8.s64 = ctx.r1.s64 + 348;
	// stw r10,220(r1)
	ctx.current_instruction = 0x880BBAD8;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880BBAE0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r8,212(r1)
	ctx.current_instruction = 0x880BBAE4;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// addi r6,r1,408
	ctx.r6.s64 = ctx.r1.s64 + 408;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// stw r7,204(r1)
	ctx.current_instruction = 0x880BBAF0;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r6,196(r1)
	ctx.current_instruction = 0x880BBAF8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// addi r8,r1,736
	ctx.r8.s64 = ctx.r1.s64 + 736;
	// stw r5,180(r1)
	ctx.current_instruction = 0x880BBB00;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// stw r3,172(r1)
	ctx.current_instruction = 0x880BBB04;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880BBB0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r14,164(r1)
	ctx.current_instruction = 0x880BBB14;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r20,188(r1)
	ctx.current_instruction = 0x880BBB1C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,132(r1)
	ctx.current_instruction = 0x880BBB24;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	ctx.current_instruction = 0x880BBB28;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x880BBB2C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x880BBB30;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880BBB34;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lwz r9,340(r1)
	ctx.current_instruction = 0x880BBB38;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880BBB3C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880BBB40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BBB44;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BBB48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r9,148(r1)
	ctx.current_instruction = 0x880BBB4C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r9,316(r1)
	ctx.current_instruction = 0x880BBB50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r24,140(r1)
	ctx.current_instruction = 0x880BBB54;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r23,116(r1)
	ctx.current_instruction = 0x880BBB58;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// bl 0x880b48f0
	ctx.lr = 0x880BBB60;
	sub_880B48F0(ctx, base);
loc_880BBB60:
	// b 0x880bbce8
	goto loc_880BBCE8;
loc_880BBB64:
	// lwz r6,340(r1)
	ctx.current_instruction = 0x880BBB64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r10,188(r1)
	ctx.current_instruction = 0x880BBB70;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// stw r5,180(r1)
	ctx.current_instruction = 0x880BBB78;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BBB80;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stw r4,172(r1)
	ctx.current_instruction = 0x880BBB88;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// stw r3,164(r1)
	ctx.current_instruction = 0x880BBB8C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r8,148(r1)
	ctx.current_instruction = 0x880BBB94;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r7,140(r1)
	ctx.current_instruction = 0x880BBB9C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r6,116(r1)
	ctx.current_instruction = 0x880BBBA4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r14,132(r1)
	ctx.current_instruction = 0x880BBBAC;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stw r20,156(r1)
	ctx.current_instruction = 0x880BBBB4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x880BBBBC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880BBBC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BBBCC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x880BBBD0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r23,84(r1)
	ctx.current_instruction = 0x880BBBD4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x880b3830
	ctx.lr = 0x880BBBDC;
	sub_880B3830(ctx, base);
loc_880BBBDC:
	// b 0x880bbce8
	goto loc_880BBCE8;
loc_880BBBE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BBBE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// beq cr6,0x880bbc78
	if (ctx.cr6.eq) goto loc_880BBC78;
	// addi r8,r1,576
	ctx.r8.s64 = ctx.r1.s64 + 576;
	// lwz r9,340(r1)
	ctx.current_instruction = 0x880BBBF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r10,r1,408
	ctx.r10.s64 = ctx.r1.s64 + 408;
	// stw r11,156(r1)
	ctx.current_instruction = 0x880BBBFC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r8,172(r1)
	ctx.current_instruction = 0x880BBC00;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,348
	ctx.r6.s64 = ctx.r1.s64 + 348;
	// stw r10,196(r1)
	ctx.current_instruction = 0x880BBC0C;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r7,84(r1)
	ctx.current_instruction = 0x880BBC14;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r9,148(r1)
	ctx.current_instruction = 0x880BBC18;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r6,212(r1)
	ctx.current_instruction = 0x880BBC20;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,204(r1)
	ctx.current_instruction = 0x880BBC28;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r8,180(r1)
	ctx.current_instruction = 0x880BBC30;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,164(r1)
	ctx.current_instruction = 0x880BBC38;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// stw r24,140(r1)
	ctx.current_instruction = 0x880BBC3C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r22,132(r1)
	ctx.current_instruction = 0x880BBC40;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r21,124(r1)
	ctx.current_instruction = 0x880BBC44;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r26,100(r1)
	ctx.current_instruction = 0x880BBC48;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,92(r1)
	ctx.current_instruction = 0x880BBC4C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r20,188(r1)
	ctx.current_instruction = 0x880BBC50;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// lwz r9,316(r1)
	ctx.current_instruction = 0x880BBC54;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880BBC58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,280(r1)
	ctx.current_instruction = 0x880BBC5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BBC60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BBC64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r23,116(r1)
	ctx.current_instruction = 0x880BBC68;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r27,108(r1)
	ctx.current_instruction = 0x880BBC6C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// bl 0x880b43d8
	ctx.lr = 0x880BBC74;
	sub_880B43D8(ctx, base);
loc_880BBC74:
	// b 0x880bbce8
	goto loc_880BBCE8;
loc_880BBC78:
	// lwz r6,340(r1)
	ctx.current_instruction = 0x880BBC78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r10,r1,348
	ctx.r10.s64 = ctx.r1.s64 + 348;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// stw r5,172(r1)
	ctx.current_instruction = 0x880BBC84;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r10,180(r1)
	ctx.current_instruction = 0x880BBC8C;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BBC94;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r4,164(r1)
	ctx.current_instruction = 0x880BBC98;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880BBCA0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r7,140(r1)
	ctx.current_instruction = 0x880BBCA8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r6,116(r1)
	ctx.current_instruction = 0x880BBCB0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r14,132(r1)
	ctx.current_instruction = 0x880BBCB8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stw r20,156(r1)
	ctx.current_instruction = 0x880BBCC0;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r20.u32);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,108(r1)
	ctx.current_instruction = 0x880BBCC8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BBCD0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,92(r1)
	ctx.current_instruction = 0x880BBCD8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r23,84(r1)
	ctx.current_instruction = 0x880BBCDC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lwz r5,280(r1)
	ctx.current_instruction = 0x880BBCE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x880b3028
	ctx.lr = 0x880BBCE8;
	sub_880B3028(ctx, base);
loc_880BBCE8:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BBCE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bbd10
	if (ctx.cr6.eq) goto loc_880BBD10;
	// lwz r11,108(r29)
	ctx.current_instruction = 0x880BBCF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,500(r1)
	ctx.current_instruction = 0x880BBCF8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r9,348(r1)
	ctx.current_instruction = 0x880BBCFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r25,348(r1)
	ctx.current_instruction = 0x880BBD08;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r25.u32);
	// b 0x880bbd14
	goto loc_880BBD14;
loc_880BBD10:
	// lwz r25,348(r1)
	ctx.current_instruction = 0x880BBD10;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_880BBD14:
	// lwz r24,408(r1)
	ctx.current_instruction = 0x880BBD14;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// cmpw cr6,r15,r25
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r25.s32, ctx.xer);
	// lwz r23,416(r1)
	ctx.current_instruction = 0x880BBD1C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r11,92(r29)
	ctx.current_instruction = 0x880BBD24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// li r17,3
	ctx.r17.s64 = 3;
	// stw r24,696(r1)
	ctx.current_instruction = 0x880BBD2C;
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r24.u32);
	// stw r23,700(r1)
	ctx.current_instruction = 0x880BBD30;
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r23.u32);
	// bge cr6,0x880bbd44
	if (!ctx.cr6.lt) goto loc_880BBD44;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// rlwimi r11,r18,30,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x880bbd4c
	goto loc_880BBD4C;
loc_880BBD44:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwimi r11,r17,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
loc_880BBD4C:
	// lwz r16,352(r1)
	ctx.current_instruction = 0x880BBD4C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r11,92(r29)
	ctx.current_instruction = 0x880BBD50;
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r16,16384
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 16384, ctx.xer);
	// beq cr6,0x880bc070
	if (ctx.cr6.eq) goto loc_880BC070;
	// cmpwi cr6,r24,16384
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 16384, ctx.xer);
	// beq cr6,0x880bc070
	if (ctx.cr6.eq) goto loc_880BC070;
	// lwz r11,28032(r31)
	ctx.current_instruction = 0x880BBD64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// lwz r22,276(r1)
	ctx.current_instruction = 0x880BBD68;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,148(r29)
	ctx.current_instruction = 0x880BBD70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// beq cr6,0x880bbf30
	if (ctx.cr6.eq) goto loc_880BBF30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// beq cr6,0x880bbe88
	if (ctx.cr6.eq) goto loc_880BBE88;
	// addi r9,r1,344
	ctx.r9.s64 = ctx.r1.s64 + 344;
	// lwz r10,316(r1)
	ctx.current_instruction = 0x880BBD88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r7,r1,492
	ctx.r7.s64 = ctx.r1.s64 + 492;
	// lwz r8,308(r1)
	ctx.current_instruction = 0x880BBD90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r9,260(r1)
	ctx.current_instruction = 0x880BBD94;
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// addi r9,r1,896
	ctx.r9.s64 = ctx.r1.s64 + 896;
	// stw r7,252(r1)
	ctx.current_instruction = 0x880BBD9C;
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// stw r9,468(r1)
	ctx.current_instruction = 0x880BBDA4;
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// stw r7,460(r1)
	ctx.current_instruction = 0x880BBDAC;
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r7.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stw r5,148(r1)
	ctx.current_instruction = 0x880BBDB4;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// addi r5,r1,520
	ctx.r5.s64 = ctx.r1.s64 + 520;
	// stw r4,356(r1)
	ctx.current_instruction = 0x880BBDBC;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r4.u32);
	// addi r16,r1,528
	ctx.r16.s64 = ctx.r1.s64 + 528;
	// stw r5,336(r1)
	ctx.current_instruction = 0x880BBDC4;
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r5.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r16,244(r1)
	ctx.current_instruction = 0x880BBDCC;
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r16.u32);
	// addi r19,r1,688
	ctx.r19.s64 = ctx.r1.s64 + 688;
	// stw r3,640(r1)
	ctx.current_instruction = 0x880BBDD4;
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r3.u32);
	// addi r21,r1,736
	ctx.r21.s64 = ctx.r1.s64 + 736;
	// stw r19,480(r1)
	ctx.current_instruction = 0x880BBDDC;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r19.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,92(r1)
	ctx.current_instruction = 0x880BBDE4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// lwz r19,280(r1)
	ctx.current_instruction = 0x880BBDEC;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,280(r1)
	ctx.current_instruction = 0x880BBDF4;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// lwz r6,272(r1)
	ctx.current_instruction = 0x880BBDF8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x880BBE00;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r21,156(r1)
	ctx.current_instruction = 0x880BBE04;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880BBE08;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r14,140(r1)
	ctx.current_instruction = 0x880BBE0C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// stw r6,132(r1)
	ctx.current_instruction = 0x880BBE10;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x880BBE14;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,108(r1)
	ctx.current_instruction = 0x880BBE18;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BBE1C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// lwz r16,468(r1)
	ctx.current_instruction = 0x880BBE20;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// stw r16,188(r1)
	ctx.current_instruction = 0x880BBE24;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// lwz r16,460(r1)
	ctx.current_instruction = 0x880BBE28;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r21,296(r1)
	ctx.current_instruction = 0x880BBE2C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880BBE30;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BBE38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BBE3C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stw r16,236(r1)
	ctx.current_instruction = 0x880BBE40;
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r16.u32);
	// lwz r16,336(r1)
	ctx.current_instruction = 0x880BBE44;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BBE48;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r11,172(r1)
	ctx.current_instruction = 0x880BBE4C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r27,124(r1)
	ctx.current_instruction = 0x880BBE50;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r11,180(r1)
	ctx.current_instruction = 0x880BBE54;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r16,228(r1)
	ctx.current_instruction = 0x880BBE58;
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r16.u32);
	// lwz r16,356(r1)
	ctx.current_instruction = 0x880BBE5C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r16,220(r1)
	ctx.current_instruction = 0x880BBE60;
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r16.u32);
	// lwz r16,640(r1)
	ctx.current_instruction = 0x880BBE64;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// stw r16,212(r1)
	ctx.current_instruction = 0x880BBE68;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r16.u32);
	// lwz r16,480(r1)
	ctx.current_instruction = 0x880BBE6C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// stw r16,204(r1)
	ctx.current_instruction = 0x880BBE70;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r16.u32);
	// lwz r16,280(r1)
	ctx.current_instruction = 0x880BBE74;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r16,196(r1)
	ctx.current_instruction = 0x880BBE78;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// bl 0x880b0990
	ctx.lr = 0x880BBE80;
	sub_880B0990(ctx, base);
loc_880BBE80:
	// lwz r16,352(r1)
	ctx.current_instruction = 0x880BBE80;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// b 0x880bc02c
	goto loc_880BC02C;
loc_880BBE88:
	// stw r11,132(r1)
	ctx.current_instruction = 0x880BBE88;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BBE90;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BBE98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// stw r3,148(r1)
	ctx.current_instruction = 0x880BBEA0;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// stw r10,212(r1)
	ctx.current_instruction = 0x880BBEAC;
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r3,100(r1)
	ctx.current_instruction = 0x880BBEB0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r1,492
	ctx.r9.s64 = ctx.r1.s64 + 492;
	// stw r5,164(r1)
	ctx.current_instruction = 0x880BBEB8;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880BBEC0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,520
	ctx.r7.s64 = ctx.r1.s64 + 520;
	// stw r4,156(r1)
	ctx.current_instruction = 0x880BBEC8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lwz r19,280(r1)
	ctx.current_instruction = 0x880BBED4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// lwz r21,296(r1)
	ctx.current_instruction = 0x880BBEDC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// stw r9,204(r1)
	ctx.current_instruction = 0x880BBEE4;
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r8,188(r1)
	ctx.current_instruction = 0x880BBEE8;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r7,180(r1)
	ctx.current_instruction = 0x880BBEF0;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r6,172(r1)
	ctx.current_instruction = 0x880BBEF8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r10,140(r1)
	ctx.current_instruction = 0x880BBF00;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r5,196(r1)
	ctx.current_instruction = 0x880BBF08;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r4,108(r1)
	ctx.current_instruction = 0x880BBF10;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,116(r1)
	ctx.current_instruction = 0x880BBF1C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,92(r1)
	ctx.current_instruction = 0x880BBF24;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x880941f8
	ctx.lr = 0x880BBF2C;
	sub_880941F8(ctx, base);
loc_880BBF2C:
	// b 0x880bc02c
	goto loc_880BC02C;
loc_880BBF30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r1)
	ctx.current_instruction = 0x880BBF34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r19,280(r1)
	ctx.current_instruction = 0x880BBF38;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x880bbfd0
	if (ctx.cr6.eq) goto loc_880BBFD0;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// stw r11,132(r1)
	ctx.current_instruction = 0x880BBF4C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r8,316(r1)
	ctx.current_instruction = 0x880BBF50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// stw r4,480(r1)
	ctx.current_instruction = 0x880BBF58;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r4.u32);
	// addi r9,r1,544
	ctx.r9.s64 = ctx.r1.s64 + 544;
	// lwz r6,308(r1)
	ctx.current_instruction = 0x880BBF60;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r21,r1,816
	ctx.r21.s64 = ctx.r1.s64 + 816;
	// stw r10,188(r1)
	ctx.current_instruction = 0x880BBF6C;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// stw r9,180(r1)
	ctx.current_instruction = 0x880BBF70;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r5,156(r1)
	ctx.current_instruction = 0x880BBF78;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r21,148(r1)
	ctx.current_instruction = 0x880BBF80;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r8,92(r1)
	ctx.current_instruction = 0x880BBF84;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r6,84(r1)
	ctx.current_instruction = 0x880BBF88;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r30,164(r1)
	ctx.current_instruction = 0x880BBF8C;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r14,140(r1)
	ctx.current_instruction = 0x880BBF90;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// stw r27,124(r1)
	ctx.current_instruction = 0x880BBF94;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x880BBF98;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,108(r1)
	ctx.current_instruction = 0x880BBF9C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BBFA0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// lwz r21,296(r1)
	ctx.current_instruction = 0x880BBFA4;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r7,172(r1)
	ctx.current_instruction = 0x880BBFA8;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880BBFB0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BBFB4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BBFB8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BBFBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,480(r1)
	ctx.current_instruction = 0x880BBFC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// stw r11,196(r1)
	ctx.current_instruction = 0x880BBFC4;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x880b0090
	ctx.lr = 0x880BBFCC;
	sub_880B0090(ctx, base);
loc_880BBFCC:
	// b 0x880bc02c
	goto loc_880BC02C;
loc_880BBFD0:
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// stw r7,124(r1)
	ctx.current_instruction = 0x880BBFD4;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stw r30,116(r1)
	ctx.current_instruction = 0x880BBFDC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// stw r10,148(r1)
	ctx.current_instruction = 0x880BBFE4;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// stw r9,140(r1)
	ctx.current_instruction = 0x880BBFEC;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// stw r8,132(r1)
	ctx.current_instruction = 0x880BBFF4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r6,108(r1)
	ctx.current_instruction = 0x880BBFF8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r5,100(r1)
	ctx.current_instruction = 0x880BC000;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r14,92(r1)
	ctx.current_instruction = 0x880BC008;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880BC010;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r21,296(r1)
	ctx.current_instruction = 0x880BC018;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x88093bc8
	ctx.lr = 0x880BC02C;
	sub_88093BC8(ctx, base);
loc_880BC02C:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BC02C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bc050
	if (ctx.cr6.eq) goto loc_880BC050;
	// lwz r11,108(r29)
	ctx.current_instruction = 0x880BC038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r10,344(r1)
	ctx.current_instruction = 0x880BC03C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,344(r1)
	ctx.current_instruction = 0x880BC048;
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// b 0x880bc054
	goto loc_880BC054;
loc_880BC050:
	// lwz r11,344(r1)
	ctx.current_instruction = 0x880BC050;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
loc_880BC054:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880bc07c
	if (!ctx.cr6.lt) goto loc_880BC07C;
	// lwz r10,92(r29)
	ctx.current_instruction = 0x880BC05C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r18,29,0,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 29) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,92(r29)
	ctx.current_instruction = 0x880BC068;
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
	// b 0x880bc07c
	goto loc_880BC07C;
loc_880BC070:
	// lwz r19,280(r1)
	ctx.current_instruction = 0x880BC070;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r21,296(r1)
	ctx.current_instruction = 0x880BC074;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r22,276(r1)
	ctx.current_instruction = 0x880BC078;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_880BC07C:
	// lwz r11,444(r1)
	ctx.current_instruction = 0x880BC07C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r10,2448(r31)
	ctx.current_instruction = 0x880BC080;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x880BC088;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,2452(r31)
	ctx.current_instruction = 0x880BC08C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// bne cr6,0x880bc0b4
	if (!ctx.cr6.eq) goto loc_880BC0B4;
	// sthx r20,r11,r10
	ctx.current_instruction = 0x880BC09C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r20.u16);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r9,2448(r31)
	ctx.current_instruction = 0x880BC0A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// sthx r20,r11,r9
	ctx.current_instruction = 0x880BC0AC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r20.u16);
	// b 0x880bc0bc
	goto loc_880BC0BC;
loc_880BC0B4:
	// lhzx r9,r11,r10
	ctx.current_instruction = 0x880BC0B4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
loc_880BC0BC:
	// addi r9,r1,388
	ctx.r9.s64 = ctx.r1.s64 + 388;
	// lwz r6,272(r1)
	ctx.current_instruction = 0x880BC0C0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r11,r1,404
	ctx.r11.s64 = ctx.r1.s64 + 404;
	// stw r9,84(r1)
	ctx.current_instruction = 0x880BC0C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r9,r1,412
	ctx.r9.s64 = ctx.r1.s64 + 412;
	// stw r11,92(r1)
	ctx.current_instruction = 0x880BC0D4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810cea8
	ctx.lr = 0x880BC0E8;
	sub_8810CEA8(ctx, base);
loc_880BC0E8:
	// lwz r8,148(r29)
	ctx.current_instruction = 0x880BC0E8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// lwz r11,404(r1)
	ctx.current_instruction = 0x880BC0EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x880bc184
	if (ctx.cr6.eq) goto loc_880BC184;
	// lwz r7,412(r1)
	ctx.current_instruction = 0x880BC0F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addi r9,r1,376
	ctx.r9.s64 = ctx.r1.s64 + 376;
	// lwz r4,316(r1)
	ctx.current_instruction = 0x880BC100;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// stw r9,188(r1)
	ctx.current_instruction = 0x880BC108;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r11,172(r1)
	ctx.current_instruction = 0x880BC110;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,388(r1)
	ctx.current_instruction = 0x880BC118;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r7,444(r1)
	ctx.current_instruction = 0x880BC11C;
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r7.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// stw r4,480(r1)
	ctx.current_instruction = 0x880BC124;
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,400(r1)
	ctx.current_instruction = 0x880BC12C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r28,308(r1)
	ctx.current_instruction = 0x880BC130;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r6,180(r1)
	ctx.current_instruction = 0x880BC134;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r8,164(r1)
	ctx.current_instruction = 0x880BC138;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r30,140(r1)
	ctx.current_instruction = 0x880BC13C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r5,156(r1)
	ctx.current_instruction = 0x880BC140;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r27,124(r1)
	ctx.current_instruction = 0x880BC144;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r28,84(r1)
	ctx.current_instruction = 0x880BC148;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r14,132(r1)
	ctx.current_instruction = 0x880BC14C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880BC150;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x880BC154;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r29,108(r1)
	ctx.current_instruction = 0x880BC158;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BC15C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.current_instruction = 0x880BC160;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,284(r1)
	ctx.current_instruction = 0x880BC164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,444(r1)
	ctx.current_instruction = 0x880BC168;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r9,480(r1)
	ctx.current_instruction = 0x880BC16C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// stw r11,148(r1)
	ctx.current_instruction = 0x880BC170;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x880BC174;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r9,304(r1)
	ctx.current_instruction = 0x880BC178;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x880b1810
	ctx.lr = 0x880BC180;
	sub_880B1810(ctx, base);
loc_880BC180:
	// b 0x880bc1dc
	goto loc_880BC1DC;
loc_880BC184:
	// lwz r6,388(r1)
	ctx.current_instruction = 0x880BC184;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r8,r1,376
	ctx.r8.s64 = ctx.r1.s64 + 376;
	// lwz r4,400(r1)
	ctx.current_instruction = 0x880BC18C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// lwz r3,412(r1)
	ctx.current_instruction = 0x880BC194;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r8,140(r1)
	ctx.current_instruction = 0x880BC19C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r5,132(r1)
	ctx.current_instruction = 0x880BC1A4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r6,116(r1)
	ctx.current_instruction = 0x880BC1AC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r4,108(r1)
	ctx.current_instruction = 0x880BC1B4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r3,100(r1)
	ctx.current_instruction = 0x880BC1BC;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,124(r1)
	ctx.current_instruction = 0x880BC1C4;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	ctx.current_instruction = 0x880BC1CC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,84(r1)
	ctx.current_instruction = 0x880BC1D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x88094a90
	ctx.lr = 0x880BC1DC;
	sub_88094A90(ctx, base);
loc_880BC1DC:
	// lwz r11,28020(r31)
	ctx.current_instruction = 0x880BC1DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880bc1fc
	if (ctx.cr6.eq) goto loc_880BC1FC;
	// lwz r10,376(r1)
	ctx.current_instruction = 0x880BC1E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r11,108(r29)
	ctx.current_instruction = 0x880BC1EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,376(r1)
	ctx.current_instruction = 0x880BC1F4;
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// b 0x880bc200
	goto loc_880BC200;
loc_880BC1FC:
	// lwz r11,376(r1)
	ctx.current_instruction = 0x880BC1FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
loc_880BC200:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880bc218
	if (!ctx.cr6.lt) goto loc_880BC218;
	// lwz r10,92(r29)
	ctx.current_instruction = 0x880BC208;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r18,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,92(r29)
	ctx.current_instruction = 0x880BC214;
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r10.u32);
loc_880BC218:
	// lwz r11,6856(r31)
	ctx.current_instruction = 0x880BC218;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880bc234
	if (!ctx.cr6.eq) goto loc_880BC234;
	// lwz r11,92(r29)
	ctx.current_instruction = 0x880BC224;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// rlwimi r11,r18,30,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x880bc248
	goto loc_880BC248;
loc_880BC234:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880bc24c
	if (!ctx.cr6.eq) goto loc_880BC24C;
	// lwz r11,92(r29)
	ctx.current_instruction = 0x880BC23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwimi r11,r17,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
loc_880BC248:
	// stw r11,92(r29)
	ctx.current_instruction = 0x880BC248;
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
loc_880BC24C:
	// lwz r11,300(r1)
	ctx.current_instruction = 0x880BC24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,448(r1)
	ctx.current_instruction = 0x880BC250;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x880bc298
	if (!ctx.cr6.lt) goto loc_880BC298;
	// lwz r10,6792(r31)
	ctx.current_instruction = 0x880BC25C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r5,372(r1)
	ctx.current_instruction = 0x880BC264;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r6,424(r1)
	ctx.current_instruction = 0x880BC26C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// stbx r8,r9,r10
	ctx.current_instruction = 0x880BC278;
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,92(r29)
	ctx.current_instruction = 0x880BC27C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// rlwimi r11,r7,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r4,424(r1)
	ctx.current_instruction = 0x880BC284;
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r4.u32);
	// stw r3,372(r1)
	ctx.current_instruction = 0x880BC288;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// stw r17,84(r29)
	ctx.current_instruction = 0x880BC28C;
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r17.u32);
	// stw r11,92(r29)
	ctx.current_instruction = 0x880BC290;
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// b 0x880bc2c4
	goto loc_880BC2C4;
loc_880BC298:
	// lwz r11,6792(r31)
	ctx.current_instruction = 0x880BC298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// lwz r10,372(r1)
	ctx.current_instruction = 0x880BC29C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stbx r20,r9,r11
	ctx.current_instruction = 0x880BC2A4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r20.u8);
	// stw r20,84(r29)
	ctx.current_instruction = 0x880BC2A8;
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r20.u32);
	// stw r8,372(r1)
	ctx.current_instruction = 0x880BC2AC;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// lwz r7,28044(r31)
	ctx.current_instruction = 0x880BC2B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x880bc2c4
	if (ctx.cr6.eq) goto loc_880BC2C4;
	// stw r20,452(r1)
	ctx.current_instruction = 0x880BC2BC;
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r20.u32);
	// stw r20,464(r1)
	ctx.current_instruction = 0x880BC2C0;
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r20.u32);
loc_880BC2C4:
	// lwz r11,92(r29)
	ctx.current_instruction = 0x880BC2C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r8,r11,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880bc2f4
	if (ctx.cr6.eq) goto loc_880BC2F4;
	// lwz r10,6856(r31)
	ctx.current_instruction = 0x880BC2D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x880bc2ec
	if (ctx.cr6.eq) goto loc_880BC2EC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x880bc2f4
	if (!ctx.cr6.eq) goto loc_880BC2F4;
loc_880BC2EC:
	// rlwimi r11,r10,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,92(r29)
	ctx.current_instruction = 0x880BC2F0;
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
loc_880BC2F4:
	// lwz r11,92(r29)
	ctx.current_instruction = 0x880BC2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x880bc338
	if (!ctx.cr6.eq) goto loc_880BC338;
	// lwz r11,2456(r31)
	ctx.current_instruction = 0x880BC304;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,332(r1)
	ctx.current_instruction = 0x880BC30C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// sthx r16,r11,r10
	ctx.current_instruction = 0x880BC310;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r16.u16);
	// lwz r5,2460(r31)
	ctx.current_instruction = 0x880BC314;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r7,r10,r5
	ctx.current_instruction = 0x880BC318;
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u16);
	// lwz r4,388(r1)
	ctx.current_instruction = 0x880BC31C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r3,2464(r31)
	ctx.current_instruction = 0x880BC320;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r4,r10,r3
	ctx.current_instruction = 0x880BC324;
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u16);
	// lwz r7,2468(r31)
	ctx.current_instruction = 0x880BC328;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// lwz r8,404(r1)
	ctx.current_instruction = 0x880BC32C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// sthx r8,r7,r10
	ctx.current_instruction = 0x880BC330;
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC338:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x880bc370
	if (!ctx.cr6.eq) goto loc_880BC370;
	// lwz r11,2464(r31)
	ctx.current_instruction = 0x880BC340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r10,r11
	ctx.current_instruction = 0x880BC348;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u16);
	// lwz r6,2468(r31)
	ctx.current_instruction = 0x880BC34C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r23,r6,r10
	ctx.current_instruction = 0x880BC350;
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r23.u16);
	// lwz r4,2456(r31)
	ctx.current_instruction = 0x880BC354;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// lwz r5,412(r1)
	ctx.current_instruction = 0x880BC358;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// sthx r5,r4,r10
	ctx.current_instruction = 0x880BC35C;
	REX_STORE_U16(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u16);
	// lwz r11,400(r1)
	ctx.current_instruction = 0x880BC360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r7,2460(r31)
	ctx.current_instruction = 0x880BC364;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r11,r10,r7
	ctx.current_instruction = 0x880BC368;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC370:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x880bc3e0
	if (!ctx.cr6.eq) goto loc_880BC3E0;
	// lwz r11,28032(r31)
	ctx.current_instruction = 0x880BC378;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28032);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2456(r31)
	ctx.current_instruction = 0x880BC384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// beq cr6,0x880bc3bc
	if (ctx.cr6.eq) goto loc_880BC3BC;
	// lwz r8,520(r1)
	ctx.current_instruction = 0x880BC38C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,512(r1)
	ctx.current_instruction = 0x880BC390;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r5,528(r1)
	ctx.current_instruction = 0x880BC394;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r3,492(r1)
	ctx.current_instruction = 0x880BC398;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// sthx r8,r11,r10
	ctx.current_instruction = 0x880BC39C;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r7,2460(r31)
	ctx.current_instruction = 0x880BC3A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r4,r10,r7
	ctx.current_instruction = 0x880BC3A4;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u16);
	// lwz r6,2464(r31)
	ctx.current_instruction = 0x880BC3A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r5,r10,r6
	ctx.current_instruction = 0x880BC3AC;
	REX_STORE_U16(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u16);
	// lwz r5,2468(r31)
	ctx.current_instruction = 0x880BC3B0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r3,r5,r10
	ctx.current_instruction = 0x880BC3B4;
	REX_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r3.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC3BC:
	// sthx r16,r11,r10
	ctx.current_instruction = 0x880BC3BC;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r16.u16);
	// lwz r3,2460(r31)
	ctx.current_instruction = 0x880BC3C0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lwz r7,332(r1)
	ctx.current_instruction = 0x880BC3C4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// sthx r7,r10,r3
	ctx.current_instruction = 0x880BC3C8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u16);
	// lwz r11,2464(r31)
	ctx.current_instruction = 0x880BC3CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r24,r10,r11
	ctx.current_instruction = 0x880BC3D0;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u16);
	// lwz r8,2468(r31)
	ctx.current_instruction = 0x880BC3D4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r23,r8,r10
	ctx.current_instruction = 0x880BC3D8;
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r23.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC3E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x880bc420
	if (!ctx.cr6.eq) goto loc_880BC420;
	// lwz r11,412(r1)
	ctx.current_instruction = 0x880BC3E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,2456(r31)
	ctx.current_instruction = 0x880BC3F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// sthx r11,r8,r10
	ctx.current_instruction = 0x880BC3F4;
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r6,400(r1)
	ctx.current_instruction = 0x880BC3F8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r5,2460(r31)
	ctx.current_instruction = 0x880BC3FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r6,r10,r5
	ctx.current_instruction = 0x880BC400;
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u16);
	// lwz r3,388(r1)
	ctx.current_instruction = 0x880BC404;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,2464(r31)
	ctx.current_instruction = 0x880BC408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// sthx r3,r10,r11
	ctx.current_instruction = 0x880BC40C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// lwz r7,404(r1)
	ctx.current_instruction = 0x880BC410;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,2468(r31)
	ctx.current_instruction = 0x880BC414;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r7,r6,r10
	ctx.current_instruction = 0x880BC418;
	REX_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u16);
	// b 0x880bc450
	goto loc_880BC450;
loc_880BC420:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x880bc450
	if (!ctx.cr6.eq) goto loc_880BC450;
	// lwz r10,2464(r31)
	ctx.current_instruction = 0x880BC428;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// sthx r11,r8,r10
	ctx.current_instruction = 0x880BC434;
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r7,2456(r31)
	ctx.current_instruction = 0x880BC438;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	// sthx r11,r7,r8
	ctx.current_instruction = 0x880BC43C;
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r6,2468(r31)
	ctx.current_instruction = 0x880BC440;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// sthx r11,r6,r8
	ctx.current_instruction = 0x880BC444;
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r5,2460(r31)
	ctx.current_instruction = 0x880BC448;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// sthx r11,r8,r5
	ctx.current_instruction = 0x880BC44C;
	REX_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u16);
loc_880BC450:
	// lwz r11,324(r1)
	ctx.current_instruction = 0x880BC450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// lwz r3,28044(r31)
	ctx.current_instruction = 0x880BC458;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28044);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r10,296(r1)
	ctx.current_instruction = 0x880BC464;
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// stw r8,280(r1)
	ctx.current_instruction = 0x880BC468;
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r7,324(r1)
	ctx.current_instruction = 0x880BC470;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// beq cr6,0x880bc4f0
	if (ctx.cr6.eq) goto loc_880BC4F0;
	// lwz r11,396(r1)
	ctx.current_instruction = 0x880BC478;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r8,312(r1)
	ctx.current_instruction = 0x880BC47C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r10,380(r1)
	ctx.current_instruction = 0x880BC480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwz r6,304(r1)
	ctx.current_instruction = 0x880BC488;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880BC494;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// lwz r10,316(r1)
	ctx.current_instruction = 0x880BC49C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r6,420(r1)
	ctx.current_instruction = 0x880BC4A0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// lwz r30,456(r1)
	ctx.current_instruction = 0x880BC4A8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r28,440(r1)
	ctx.current_instruction = 0x880BC4B0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r25,472(r1)
	ctx.current_instruction = 0x880BC4B8;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r7,396(r1)
	ctx.current_instruction = 0x880BC4C0;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r7.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r7,r25,4
	ctx.r7.s64 = ctx.r25.s64 + 4;
	// stw r5,380(r1)
	ctx.current_instruction = 0x880BC4CC;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r5.u32);
	// stw r11,312(r1)
	ctx.current_instruction = 0x880BC4D0;
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r8,304(r1)
	ctx.current_instruction = 0x880BC4D4;
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// stw r4,308(r1)
	ctx.current_instruction = 0x880BC4D8;
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r4.u32);
	// stw r10,316(r1)
	ctx.current_instruction = 0x880BC4DC;
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// stw r6,420(r1)
	ctx.current_instruction = 0x880BC4E0;
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r6.u32);
	// stw r30,456(r1)
	ctx.current_instruction = 0x880BC4E4;
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r28,440(r1)
	ctx.current_instruction = 0x880BC4E8;
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r28.u32);
	// stw r7,472(r1)
	ctx.current_instruction = 0x880BC4EC;
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r7.u32);
loc_880BC4F0:
	// lwz r11,384(r1)
	ctx.current_instruction = 0x880BC4F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,392(r1)
	ctx.current_instruction = 0x880BC4F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r4,720(r31)
	ctx.current_instruction = 0x880BC500;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r9,448(r1)
	ctx.current_instruction = 0x880BC50C;
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// stw r8,384(r1)
	ctx.current_instruction = 0x880BC510;
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// addi r29,r29,276
	ctx.r29.s64 = ctx.r29.s64 + 276;
	// stw r7,392(r1)
	ctx.current_instruction = 0x880BC518;
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r7.u32);
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x880bae88
	if (ctx.cr6.lt) goto loc_880BAE88;
loc_880BC524:
	// lwz r11,372(r1)
	ctx.current_instruction = 0x880BC524;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,288(r1)
	ctx.current_instruction = 0x880BC52C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,4372(r1)
	ctx.current_instruction = 0x880BC534;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 4372);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,728(r1)
	ctx.current_instruction = 0x880BC53C;
	REX_STORE_U64(ctx.r1.u32 + 728, ctx.r9.u64);
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// std r7,720(r1)
	ctx.current_instruction = 0x880BC544;
	REX_STORE_U64(ctx.r1.u32 + 720, ctx.r7.u64);
	// lfd f0,728(r1)
	ctx.current_instruction = 0x880BC548;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 728);
	// lfd f13,720(r1)
	ctx.current_instruction = 0x880BC54C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 720);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fadd f30,f12,f30
	ctx.f30.f64 = ctx.f12.f64 + ctx.f30.f64;
	// fadd f31,f11,f31
	ctx.f31.f64 = ctx.f11.f64 + ctx.f31.f64;
	// blt cr6,0x880bad40
	if (ctx.cr6.lt) goto loc_880BAD40;
loc_880BC564:
	// lwz r11,424(r1)
	ctx.current_instruction = 0x880BC564;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r10,4380(r1)
	ctx.current_instruction = 0x880BC568;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 4380);
	// lwz r9,4396(r1)
	ctx.current_instruction = 0x880BC56C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 4396);
	// lwz r8,4388(r1)
	ctx.current_instruction = 0x880BC570;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 4388);
	// stw r11,0(r10)
	ctx.current_instruction = 0x880BC574;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stfd f31,0(r9)
	ctx.current_instruction = 0x880BC578;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.f31.u64);
	// stfd f30,0(r8)
	ctx.current_instruction = 0x880BC57C;
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.f30.u64);
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// lfd f29,-176(r1)
	ctx.current_instruction = 0x880BC584;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.current_instruction = 0x880BC588;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.current_instruction = 0x880BC58C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F2280) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F2280);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F2280;
	ctx.current_instruction = 0x880F2280;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x880f228c
	if (!ctx.cr6.gt) goto loc_880F228C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_880F228C:
	// lwz r11,28136(r3)
	ctx.current_instruction = 0x880F228C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,1408
	ctx.r11.s64 = ctx.r11.s64 + 1408;
	// bne cr6,0x880f22f8
	if (!ctx.cr6.eq) goto loc_880F22F8;
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.current_instruction = 0x880F22A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r6,28176(r3)
	ctx.current_instruction = 0x880F22B4;
	REX_STORE_U32(ctx.r3.u32 + 28176, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.current_instruction = 0x880F22C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,28180(r3)
	ctx.current_instruction = 0x880F22C8;
	REX_STORE_U32(ctx.r3.u32 + 28180, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.current_instruction = 0x880F22CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,28184(r3)
	ctx.current_instruction = 0x880F22D0;
	REX_STORE_U32(ctx.r3.u32 + 28184, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.current_instruction = 0x880F22D4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,28188(r3)
	ctx.current_instruction = 0x880F22D8;
	REX_STORE_U32(ctx.r3.u32 + 28188, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.current_instruction = 0x880F22DC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,28192(r3)
	ctx.current_instruction = 0x880F22E0;
	REX_STORE_U32(ctx.r3.u32 + 28192, ctx.r6.u32);
	// lwzx r5,r10,r4
	ctx.current_instruction = 0x880F22E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r5,28196(r3)
	ctx.current_instruction = 0x880F22E8;
	REX_STORE_U32(ctx.r3.u32 + 28196, ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.current_instruction = 0x880F22EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,28200(r3)
	ctx.current_instruction = 0x880F22F0;
	REX_STORE_U32(ctx.r3.u32 + 28200, ctx.r4.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880F22F8:
	// mulli r7,r4,28
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// lwzx r4,r7,r6
	ctx.current_instruction = 0x880F2310;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r9,12
	ctx.r6.s64 = ctx.r9.s64 + 12;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stw r4,28176(r3)
	ctx.current_instruction = 0x880F2328;
	REX_STORE_U32(ctx.r3.u32 + 28176, ctx.r4.u32);
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r7,r5
	ctx.current_instruction = 0x880F2338;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r10,28180(r3)
	ctx.current_instruction = 0x880F233C;
	REX_STORE_U32(ctx.r3.u32 + 28180, ctx.r10.u32);
	// lwzx r8,r7,r8
	ctx.current_instruction = 0x880F2340;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r8,28184(r3)
	ctx.current_instruction = 0x880F2344;
	REX_STORE_U32(ctx.r3.u32 + 28184, ctx.r8.u32);
	// lwzx r6,r7,r6
	ctx.current_instruction = 0x880F2348;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stw r6,28188(r3)
	ctx.current_instruction = 0x880F234C;
	REX_STORE_U32(ctx.r3.u32 + 28188, ctx.r6.u32);
	// lwzx r5,r7,r9
	ctx.current_instruction = 0x880F2350;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r5,28192(r3)
	ctx.current_instruction = 0x880F2354;
	REX_STORE_U32(ctx.r3.u32 + 28192, ctx.r5.u32);
	// lwzx r4,r7,r4
	ctx.current_instruction = 0x880F2358;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// stw r4,28196(r3)
	ctx.current_instruction = 0x880F235C;
	REX_STORE_U32(ctx.r3.u32 + 28196, ctx.r4.u32);
	// lwzx r11,r7,r11
	ctx.current_instruction = 0x880F2360;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r11,28200(r3)
	ctx.current_instruction = 0x880F2364;
	REX_STORE_U32(ctx.r3.u32 + 28200, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F3C08) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F3C08;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F3C08) {
			switch (rex_dispatch_address) {
				case 0x880F3C10:
				case 0x880F3CA4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F3C08;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F3C10: goto loc_880F3C10;
		case 0x880F3CA4: goto loc_880F3CA4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F3C10;
	__savegprlr_26(ctx, base);
loc_880F3C10:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F3C10;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r4)
	ctx.current_instruction = 0x880F3C14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1384(r3)
	ctx.current_instruction = 0x880F3C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1384);
	// lwz r30,264(r4)
	ctx.current_instruction = 0x880F3C20;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// lwz r8,1380(r3)
	ctx.current_instruction = 0x880F3C24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// lwz r29,28132(r3)
	ctx.current_instruction = 0x880F3C2C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28132);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880F3C34;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r28,268(r4)
	ctx.current_instruction = 0x880F3C3C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// lwz r10,244(r4)
	ctx.current_instruction = 0x880F3C40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 244);
	// lwz r9,236(r4)
	ctx.current_instruction = 0x880F3C44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// lwz r3,19100(r3)
	ctx.current_instruction = 0x880F3C48;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19100);
	// lwz r5,19096(r31)
	ctx.current_instruction = 0x880F3C4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r7,19092(r31)
	ctx.current_instruction = 0x880F3C50;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r27,720(r31)
	ctx.current_instruction = 0x880F3C54;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// mullw r26,r8,r30
	ctx.r26.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// mullw r8,r6,r29
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r29.s32);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r3,r30,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r30.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r27,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88108918
	ctx.lr = 0x880F3CA4;
	sub_88108918(ctx, base);
loc_880F3CA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F56F0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F56F0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F56F0;
	ctx.current_instruction = 0x880F56F0;
	// std r31,-8(r1)
	ctx.current_instruction = 0x880F56F0;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x880f57b0
	if (!ctx.cr6.gt) goto loc_880F57B0;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
loc_880F5708:
	// lbz r9,-3(r11)
	ctx.current_instruction = 0x880F5708;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880F570C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,-2(r11)
	ctx.current_instruction = 0x880F5710;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lbz r9,-1(r11)
	ctx.current_instruction = 0x880F5718;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r31,r3,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r7,r9,37
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(37));
	// subf r9,r3,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// cmpwi cr6,r10,-128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -128, ctx.xer);
	// bge cr6,0x880f5750
	if (!ctx.cr6.lt) goto loc_880F5750;
	// li r10,-128
	ctx.r10.s64 = -128;
	// b 0x880f575c
	goto loc_880F575C;
loc_880F5750:
	// cmpwi cr6,r10,383
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 383, ctx.xer);
	// ble cr6,0x880f575c
	if (!ctx.cr6.gt) goto loc_880F575C;
	// li r10,383
	ctx.r10.s64 = 383;
loc_880F575C:
	// sth r10,0(r4)
	ctx.current_instruction = 0x880F575C;
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880F5760;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,-3(r11)
	ctx.current_instruction = 0x880F5764;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r3,r8,37
	ctx.r3.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(37));
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmpwi cr6,r10,-128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -128, ctx.xer);
	// bge cr6,0x880f5790
	if (!ctx.cr6.lt) goto loc_880F5790;
	// li r10,-128
	ctx.r10.s64 = -128;
	// b 0x880f579c
	goto loc_880F579C;
loc_880F5790:
	// cmpwi cr6,r10,383
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 383, ctx.xer);
	// ble cr6,0x880f579c
	if (!ctx.cr6.gt) goto loc_880F579C;
	// li r10,383
	ctx.r10.s64 = 383;
loc_880F579C:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r10,2(r4)
	ctx.current_instruction = 0x880F57A4;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// bdnz 0x880f5708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F5708;
loc_880F57B0:
	// ld r31,-8(r1)
	ctx.current_instruction = 0x880F57B0;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F6078) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F6078;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F6078) {
			switch (rex_dispatch_address) {
				case 0x880F6080:
				case 0x880F6110:
				case 0x880F612C:
				case 0x880F61BC:
				case 0x880F61D4:
				case 0x880F61EC:
				case 0x880F6214:
				case 0x880F6250:
				case 0x880F62C4:
				case 0x880F62E0:
				case 0x880F62F8:
				case 0x880F6314:
				case 0x880F63EC:
				case 0x880F6460:
				case 0x880F647C:
				case 0x880F6494:
				case 0x880F64BC:
				case 0x880F654C:
				case 0x880F65C0:
				case 0x880F65DC:
				case 0x880F65F4:
				case 0x880F6610:
				case 0x880F6650:
				case 0x880F666C:
				case 0x880F668C:
				case 0x880F66AC:
				case 0x880F66CC:
				case 0x880F66E4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F6078;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F6080: goto loc_880F6080;
		case 0x880F6110: goto loc_880F6110;
		case 0x880F612C: goto loc_880F612C;
		case 0x880F61BC: goto loc_880F61BC;
		case 0x880F61D4: goto loc_880F61D4;
		case 0x880F61EC: goto loc_880F61EC;
		case 0x880F6214: goto loc_880F6214;
		case 0x880F6250: goto loc_880F6250;
		case 0x880F62C4: goto loc_880F62C4;
		case 0x880F62E0: goto loc_880F62E0;
		case 0x880F62F8: goto loc_880F62F8;
		case 0x880F6314: goto loc_880F6314;
		case 0x880F63EC: goto loc_880F63EC;
		case 0x880F6460: goto loc_880F6460;
		case 0x880F647C: goto loc_880F647C;
		case 0x880F6494: goto loc_880F6494;
		case 0x880F64BC: goto loc_880F64BC;
		case 0x880F654C: goto loc_880F654C;
		case 0x880F65C0: goto loc_880F65C0;
		case 0x880F65DC: goto loc_880F65DC;
		case 0x880F65F4: goto loc_880F65F4;
		case 0x880F6610: goto loc_880F6610;
		case 0x880F6650: goto loc_880F6650;
		case 0x880F666C: goto loc_880F666C;
		case 0x880F668C: goto loc_880F668C;
		case 0x880F66AC: goto loc_880F66AC;
		case 0x880F66CC: goto loc_880F66CC;
		case 0x880F66E4: goto loc_880F66E4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880F6080;
	__savegprlr_14(ctx, base);
loc_880F6080:
	// stfd f29,-176(r1)
	ctx.current_instruction = 0x880F6080;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	ctx.current_instruction = 0x880F6084;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	ctx.current_instruction = 0x880F6088;
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-2496(r1)
	ctx.current_instruction = 0x880F608C;
	ea = -2496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,2564(r1)
	ctx.current_instruction = 0x880F6094;
	REX_STORE_U32(ctx.r1.u32 + 2564, ctx.r9.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r4,2524(r1)
	ctx.current_instruction = 0x880F609C;
	REX_STORE_U32(ctx.r1.u32 + 2524, ctx.r4.u32);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
	// lwz r10,27940(r31)
	ctx.current_instruction = 0x880F60AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 27940);
	// addi r8,r1,1199
	ctx.r8.s64 = ctx.r1.s64 + 1199;
	// addi r7,r1,1775
	ctx.r7.s64 = ctx.r1.s64 + 1775;
	// lwz r19,8240(r31)
	ctx.current_instruction = 0x880F60B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 8240);
	// mulli r11,r6,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(52));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// rlwinm r28,r9,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r30,r8,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r24,r7,0,0,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x880f60f0
	if (ctx.cr6.eq) goto loc_880F60F0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r22,32
	ctx.r22.s64 = 32;
	// b 0x880f60f8
	goto loc_880F60F8;
loc_880F60F0:
	// li r11,128
	ctx.r11.s64 = 128;
	// li r22,16
	ctx.r22.s64 = 16;
loc_880F60F8:
	// stw r11,104(r1)
	ctx.current_instruction = 0x880F60F8;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r11,2520(r31)
	ctx.current_instruction = 0x880F6100;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880F6110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F6110:
	// lwz r10,8072(r31)
	ctx.current_instruction = 0x880F6110;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880F612C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F612C:
	// lhz r7,0(r28)
	ctx.current_instruction = 0x880F612C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r27)
	ctx.current_instruction = 0x880F6130;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// std r5,80(r1)
	ctx.current_instruction = 0x880F6140;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880F6144;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f31,19224(r9)
	ctx.current_instruction = 0x880F6154;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 19224);
	// addi r11,r11,12088
	ctx.r11.s64 = ctx.r11.s64 + 12088;
	// lfd f29,1488(r8)
	ctx.current_instruction = 0x880F615C;
	ctx.f29.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfd f30,0(r11)
	ctx.current_instruction = 0x880F6164;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x880f6188
	if (!ctx.cr6.gt) goto loc_880F6188;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x880F617C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880F6180;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x880f6198
	goto loc_880F6198;
loc_880F6188:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x880F6190;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880F6194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880F6198:
	// sth r11,112(r1)
	ctx.current_instruction = 0x880F6198;
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880feb98
	ctx.lr = 0x880F61BC;
	sub_880FEB98(ctx, base);
loc_880F61BC:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5f28
	ctx.lr = 0x880F61D4;
	sub_880F5F28(ctx, base);
loc_880F61D4:
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5fb8
	ctx.lr = 0x880F61EC;
	sub_880F5FB8(ctx, base);
loc_880F61EC:
	// srawi r26,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 1;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5a18
	ctx.lr = 0x880F6214;
	sub_880F5A18(ctx, base);
loc_880F6214:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfc r10,r26,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r26.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// eqv r9,r26,r11
	ctx.r9.u64 = ~(ctx.r26.u64 ^ ctx.r11.u64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// clrlwi r23,r7,31
	ctx.r23.u64 = ctx.r7.u32 & 0x1;
	// lwz r11,8072(r31)
	ctx.current_instruction = 0x880F623C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// lhz r10,112(r1)
	ctx.current_instruction = 0x880F6240;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r25,r10
	ctx.r25.s64 = ctx.r10.s16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880F6250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F6250:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x880F6250;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r27)
	ctx.current_instruction = 0x880F6254;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	ctx.current_instruction = 0x880F625C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880F6260;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x880f6290
	if (!ctx.cr6.gt) goto loc_880F6290;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x880F6284;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880F6288;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x880f62a0
	goto loc_880F62A0;
loc_880F6290:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	ctx.current_instruction = 0x880F6298;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.current_instruction = 0x880F629C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_880F62A0:
	// sth r11,112(r1)
	ctx.current_instruction = 0x880F62A0;
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880feb98
	ctx.lr = 0x880F62C4;
	sub_880FEB98(ctx, base);
loc_880F62C4:
	// addi r5,r24,128
	ctx.r5.s64 = ctx.r24.s64 + 128;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r5,80(r1)
	ctx.current_instruction = 0x880F62D0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5f28
	ctx.lr = 0x880F62E0;
	sub_880F5F28(ctx, base);
loc_880F62E0:
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5fb8
	ctx.lr = 0x880F62F8;
	sub_880F5FB8(ctx, base);
loc_880F62F8:
	// srawi r26,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5920
	ctx.lr = 0x880F6314;
	sub_880F5920(ctx, base);
loc_880F6314:
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,112(r1)
	ctx.current_instruction = 0x880F6318;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// subfc r8,r26,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r26.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r26.u64;
	// lwz r6,96(r1)
	ctx.current_instruction = 0x880F6320;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// eqv r7,r26,r11
	ctx.r7.u64 = ~(ctx.r26.u64 ^ ctx.r11.u64);
	// lwz r5,100(r1)
	ctx.current_instruction = 0x880F6328;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lwz r10,2580(r1)
	ctx.current_instruction = 0x880F6330;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2580);
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r3,96(r1)
	ctx.current_instruction = 0x880F6338;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r4,100(r1)
	ctx.current_instruction = 0x880F6340;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// add r16,r3,r6
	ctx.r16.u64 = ctx.r3.u64 + ctx.r6.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// add r15,r3,r5
	ctx.r15.u64 = ctx.r3.u64 + ctx.r5.u64;
	// or r17,r8,r23
	ctx.r17.u64 = ctx.r8.u64 | ctx.r23.u64;
	// beq cr6,0x880f6388
	if (ctx.cr6.eq) goto loc_880F6388;
	// subf r11,r25,r14
	ctx.r11.u64 = ctx.r14.u64 - ctx.r25.u64;
	// subf r9,r10,r14
	ctx.r9.u64 = ctx.r14.u64 - ctx.r10.u64;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// xor r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r14,r10
	ctx.r14.u64 = ctx.r10.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880f638c
	if (ctx.cr6.lt) goto loc_880F638C;
loc_880F6388:
	// mr r14,r25
	ctx.r14.u64 = ctx.r25.u64;
loc_880F638C:
	// lwz r11,2564(r1)
	ctx.current_instruction = 0x880F638C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880f63c4
	if (ctx.cr6.eq) goto loc_880F63C4;
	// subf r10,r25,r18
	ctx.r10.u64 = ctx.r18.u64 - ctx.r25.u64;
	// subf r9,r11,r18
	ctx.r9.u64 = ctx.r18.u64 - ctx.r11.u64;
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
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x880f63c8
	if (ctx.cr6.lt) goto loc_880F63C8;
loc_880F63C4:
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
loc_880F63C8:
	// lwz r11,104(r1)
	ctx.current_instruction = 0x880F63C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8072(r31)
	ctx.current_instruction = 0x880F63D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880F63EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F63EC:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x880F63EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r27)
	ctx.current_instruction = 0x880F63F0;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,88(r1)
	ctx.current_instruction = 0x880F63F8;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x880F63FC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x880f642c
	if (!ctx.cr6.gt) goto loc_880F642C;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	ctx.current_instruction = 0x880F6420;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880F6424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x880f643c
	goto loc_880F643C;
loc_880F642C:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	ctx.current_instruction = 0x880F6434;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880F6438;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_880F643C:
	// sth r11,112(r1)
	ctx.current_instruction = 0x880F643C;
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880feb98
	ctx.lr = 0x880F6460;
	sub_880FEB98(ctx, base);
loc_880F6460:
	// addi r23,r24,256
	ctx.r23.s64 = ctx.r24.s64 + 256;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5f28
	ctx.lr = 0x880F647C;
	sub_880F5F28(ctx, base);
loc_880F647C:
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5fb8
	ctx.lr = 0x880F6494;
	sub_880F5FB8(ctx, base);
loc_880F6494:
	// srawi r26,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 1;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5a18
	ctx.lr = 0x880F64BC;
	sub_880F5A18(ctx, base);
loc_880F64BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,96(r1)
	ctx.current_instruction = 0x880F64C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// subfc r8,r26,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r26.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r26.u64;
	// lwz r14,100(r1)
	ctx.current_instruction = 0x880F64C8;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// eqv r7,r26,r11
	ctx.r7.u64 = ~(ctx.r26.u64 ^ ctx.r11.u64);
	// lwz r9,88(r1)
	ctx.current_instruction = 0x880F64D0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r18,r10,r16
	ctx.r18.u64 = ctx.r10.u64 + ctx.r16.u64;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subf r6,r14,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r14.u64;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// or r26,r3,r17
	ctx.r26.u64 = ctx.r3.u64 | ctx.r17.u64;
	// lhz r11,112(r1)
	ctx.current_instruction = 0x880F64EC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// add r25,r9,r15
	ctx.r25.u64 = ctx.r9.u64 + ctx.r15.u64;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 31;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// subf r5,r9,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r4,r8,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r8.u64;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x880f6524
	if (ctx.cr6.lt) goto loc_880F6524;
	// mr r17,r14
	ctx.r17.u64 = ctx.r14.u64;
loc_880F6524:
	// lwz r16,104(r1)
	ctx.current_instruction = 0x880F6524;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8072(r31)
	ctx.current_instruction = 0x880F652C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8072);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r9,r16,8
	ctx.r9.s64 = ctx.r16.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880F654C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F654C:
	// lhz r8,0(r28)
	ctx.current_instruction = 0x880F654C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lfs f0,48(r27)
	ctx.current_instruction = 0x880F6550;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,88(r1)
	ctx.current_instruction = 0x880F6558;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x880F655C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fmul f11,f12,f31
	ctx.f11.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x880f658c
	if (!ctx.cr6.gt) goto loc_880F658C;
	// fmadd f13,f0,f31,f30
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	ctx.current_instruction = 0x880F6580;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880F6584;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x880f659c
	goto loc_880F659C;
loc_880F658C:
	// fmsub f13,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	ctx.current_instruction = 0x880F6594;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.current_instruction = 0x880F6598;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_880F659C:
	// sth r11,112(r1)
	ctx.current_instruction = 0x880F659C;
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880feb98
	ctx.lr = 0x880F65C0;
	sub_880FEB98(ctx, base);
loc_880F65C0:
	// addi r27,r24,384
	ctx.r27.s64 = ctx.r24.s64 + 384;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5f28
	ctx.lr = 0x880F65DC;
	sub_880F5F28(ctx, base);
loc_880F65DC:
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5fb8
	ctx.lr = 0x880F65F4;
	sub_880F5FB8(ctx, base);
loc_880F65F4:
	// srawi r28,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 1;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f5920
	ctx.lr = 0x880F6610;
	sub_880F5920(ctx, base);
loc_880F6610:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lhz r9,112(r1)
	ctx.current_instruction = 0x880F6618;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// subfc r8,r28,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r28.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r28.u64;
	// eqv r7,r28,r11
	ctx.r7.u64 = ~(ctx.r28.u64 ^ ctx.r11.u64);
	// li r5,512
	ctx.r5.s64 = 512;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r19,r10,r18
	ctx.r19.u64 = ctx.r10.u64 + ctx.r18.u64;
	// extsh r21,r9
	ctx.r21.s64 = ctx.r9.s16;
	// or r20,r8,r26
	ctx.r20.u64 = ctx.r8.u64 | ctx.r26.u64;
	// add r18,r10,r25
	ctx.r18.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bl 0x88052d90
	ctx.lr = 0x880F6650;
	sub_88052D90(ctx, base);
loc_880F6650:
	// lwz r7,8088(r31)
	ctx.current_instruction = 0x880F6650;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x880F666C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F666C:
	// lwz r11,8088(r31)
	ctx.current_instruction = 0x880F666C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// addi r28,r30,128
	ctx.r28.s64 = ctx.r30.s64 + 128;
	// li r6,255
	ctx.r6.s64 = 255;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880F6678;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x880F668C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F668C:
	// lwz r10,8088(r31)
	ctx.current_instruction = 0x880F668C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// addi r26,r30,256
	ctx.r26.s64 = ctx.r30.s64 + 256;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x880F66AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F66AC:
	// lwz r9,8088(r31)
	ctx.current_instruction = 0x880F66AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8088);
	// addi r25,r30,384
	ctx.r25.s64 = ctx.r30.s64 + 384;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x880F66CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F66CC:
	// lwz r8,2516(r31)
	ctx.current_instruction = 0x880F66CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880F66E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880F66E4:
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r7,2524(r1)
	ctx.current_instruction = 0x880F66E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2524);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// addi r11,r7,6
	ctx.r11.s64 = ctx.r7.s64 + 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F66F8:
	// lhz r9,30(r10)
	ctx.current_instruction = 0x880F66F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// lhz r8,28(r10)
	ctx.current_instruction = 0x880F66FC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhz r9,22(r10)
	ctx.current_instruction = 0x880F6704;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r8,20(r10)
	ctx.current_instruction = 0x880F670C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r6,26(r10)
	ctx.current_instruction = 0x880F6714;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r4,24(r10)
	ctx.current_instruction = 0x880F6718;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// extsh r27,r8
	ctx.r27.s64 = ctx.r8.s16;
	// lhz r31,18(r10)
	ctx.current_instruction = 0x880F6720;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzu r9,16(r10)
	ctx.current_instruction = 0x880F6728;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r24,-6(r11)
	ctx.current_instruction = 0x880F6730;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r8,0(r11)
	ctx.current_instruction = 0x880F673C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r23,-3(r11)
	ctx.current_instruction = 0x880F6740;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// lbz r3,-5(r11)
	ctx.current_instruction = 0x880F6748;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// subf r9,r24,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r24.u64;
	// lbz r24,-4(r11)
	ctx.current_instruction = 0x880F6750;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// std r10,80(r1)
	ctx.current_instruction = 0x880F6758;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lbz r17,-2(r11)
	ctx.current_instruction = 0x880F675C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r15,-1(r11)
	ctx.current_instruction = 0x880F6760;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r10,1(r11)
	ctx.current_instruction = 0x880F6764;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r9,r9
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r3,r24,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r24.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r3,r23,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r23.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r4,r17,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r17.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r3,r15,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r15.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r6,r10,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r10.u64;
	// ld r10,80(r1)
	ctx.current_instruction = 0x880F67AC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bdnz 0x880f66f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F66F8;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r28,-16
	ctx.r10.s64 = ctx.r28.s64 + -16;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F67D8:
	// lhz r9,30(r10)
	ctx.current_instruction = 0x880F67D8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// lhz r8,28(r10)
	ctx.current_instruction = 0x880F67DC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lhz r9,22(r10)
	ctx.current_instruction = 0x880F67E4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lhz r8,20(r10)
	ctx.current_instruction = 0x880F67EC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lhz r31,18(r10)
	ctx.current_instruction = 0x880F67F0;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r6,26(r10)
	ctx.current_instruction = 0x880F67F8;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// lhz r4,24(r10)
	ctx.current_instruction = 0x880F6800;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhzu r9,16(r10)
	ctx.current_instruction = 0x880F6808;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880F6810;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r27,0(r11)
	ctx.current_instruction = 0x880F681C;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880F6824;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r27,r27,r9
	ctx.r27.u64 = ctx.r9.u64 - ctx.r27.u64;
	// lbz r24,3(r11)
	ctx.current_instruction = 0x880F682C;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lbz r8,7(r11)
	ctx.current_instruction = 0x880F6834;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r23,4(r11)
	ctx.current_instruction = 0x880F6838;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r17,5(r11)
	ctx.current_instruction = 0x880F683C;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r15,6(r11)
	ctx.current_instruction = 0x880F6840;
	ctx.r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// stw r8,80(r1)
	ctx.current_instruction = 0x880F6844;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mullw r8,r27,r27
	ctx.r8.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r27.s32);
	// subf r31,r31,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r31.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r31,r31
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// subf r31,r24,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r24.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r31,r31
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// subf r4,r23,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r23.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r6,r17,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r17.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// subf r4,r15,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r15.u64;
	// lwz r3,80(r1)
	ctx.current_instruction = 0x880F6880;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// subf r6,r3,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r3.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r6
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bdnz 0x880f67d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F67D8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r6,r16,r7
	ctx.r6.u64 = ctx.r16.u64 + ctx.r7.u64;
	// addi r10,r26,-16
	ctx.r10.s64 = ctx.r26.s64 + -16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F68BC:
	// lhz r9,20(r10)
	ctx.current_instruction = 0x880F68BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lhz r8,18(r10)
	ctx.current_instruction = 0x880F68C0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lbz r7,2(r11)
	ctx.current_instruction = 0x880F68C8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// lbz r4,1(r11)
	ctx.current_instruction = 0x880F68D0;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r9,22(r10)
	ctx.current_instruction = 0x880F68D4;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// subf r8,r7,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lbz r5,3(r11)
	ctx.current_instruction = 0x880F68E0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r3,24(r10)
	ctx.current_instruction = 0x880F68E8;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// mullw r8,r8,r8
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lbz r31,4(r11)
	ctx.current_instruction = 0x880F68F0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lhz r30,26(r10)
	ctx.current_instruction = 0x880F68F4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r28,28(r10)
	ctx.current_instruction = 0x880F68F8;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lbz r27,5(r11)
	ctx.current_instruction = 0x880F68FC;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r26,6(r11)
	ctx.current_instruction = 0x880F6900;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lhz r24,30(r10)
	ctx.current_instruction = 0x880F6904;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// lhzu r9,16(r10)
	ctx.current_instruction = 0x880F6908;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lbz r23,7(r11)
	ctx.current_instruction = 0x880F690C;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r17,0(r11)
	ctx.current_instruction = 0x880F6910;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r7,r7,r7
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r8,r5,r5
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r3,r31,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r31.u64;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r8,r3,r3
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r3,r27,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r27.u64;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r5,r26,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r26.u64;
	// mullw r8,r3,r3
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// extsh r4,r24
	ctx.r4.s64 = ctx.r24.s16;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r9,r5,r5
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r7,r23,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r23.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// subf r5,r17,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r17.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r5,r5
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bdnz 0x880f68bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F68BC;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r25,-16
	ctx.r10.s64 = ctx.r25.s64 + -16;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880F6994:
	// lhz r8,28(r10)
	ctx.current_instruction = 0x880F6994;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lhz r9,30(r10)
	ctx.current_instruction = 0x880F6998;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhz r8,20(r10)
	ctx.current_instruction = 0x880F69A0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r7,26(r10)
	ctx.current_instruction = 0x880F69A8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r5,24(r10)
	ctx.current_instruction = 0x880F69AC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// lhz r3,22(r10)
	ctx.current_instruction = 0x880F69B4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r31,18(r10)
	ctx.current_instruction = 0x880F69BC;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhzu r9,16(r10)
	ctx.current_instruction = 0x880F69C4;
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbz r8,1(r11)
	ctx.current_instruction = 0x880F69CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r28,0(r11)
	ctx.current_instruction = 0x880F69D8;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r8,r8,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r8.u64;
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880F69E0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r28,r28,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r28.u64;
	// lbz r27,3(r11)
	ctx.current_instruction = 0x880F69E8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// lbz r26,4(r11)
	ctx.current_instruction = 0x880F69F0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r25,5(r11)
	ctx.current_instruction = 0x880F69F4;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r24,6(r11)
	ctx.current_instruction = 0x880F69F8;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r23,7(r11)
	ctx.current_instruction = 0x880F69FC;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// mullw r8,r28,r28
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r28.s32);
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r31,r31
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// subf r3,r27,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r27.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r5,r26,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r26.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r5,r5
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// subf r3,r25,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r25.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r3,r3
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// subf r7,r24,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r24.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// subf r6,r23,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r23.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r6,r6
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bdnz 0x880f6994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880F6994;
	// lwz r11,2620(r1)
	ctx.current_instruction = 0x880F6A5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2620);
	// mulli r10,r29,200
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(200));
	// lwz r9,2604(r1)
	ctx.current_instruction = 0x880F6A64;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2604);
	// lwz r8,2612(r1)
	ctx.current_instruction = 0x880F6A68;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 2612);
	// lwz r7,2588(r1)
	ctx.current_instruction = 0x880F6A6C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 2588);
	// lwz r6,2596(r1)
	ctx.current_instruction = 0x880F6A70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 2596);
	// srawi r5,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r5,0(r11)
	ctx.current_instruction = 0x880F6A7C;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r19,0(r9)
	ctx.current_instruction = 0x880F6A80;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
	// stw r18,0(r8)
	ctx.current_instruction = 0x880F6A84;
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r18.u32);
	// stw r14,0(r7)
	ctx.current_instruction = 0x880F6A88;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r14.u32);
	// stw r21,0(r6)
	ctx.current_instruction = 0x880F6A8C;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r21.u32);
	// addi r1,r1,2496
	ctx.r1.s64 = ctx.r1.s64 + 2496;
	// lfd f29,-176(r1)
	ctx.current_instruction = 0x880F6A94;
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.current_instruction = 0x880F6A98;
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.current_instruction = 0x880F6A9C;
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810E5C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810E5C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810E5C0) {
			switch (rex_dispatch_address) {
				case 0x8810E5C8:
				case 0x8810E5D4:
				case 0x8810E6A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810E5C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810E5C8: goto loc_8810E5C8;
		case 0x8810E5D4: goto loc_8810E5D4;
		case 0x8810E6A8: goto loc_8810E6A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x8810E5C8;
	__savegprlr_23(ctx, base);
loc_8810E5C8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x8810E5C8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8813f550
	ctx.lr = 0x8810E5D4;
	sub_8813F550(ctx, base);
loc_8810E5D4:
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// lis r8,-30692
	ctx.r8.s64 = -2011430912;
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// lis r5,-30703
	ctx.r5.s64 = -2012151808;
	// lis r4,-30703
	ctx.r4.s64 = -2012151808;
	// addi r11,r11,-15944
	ctx.r11.s64 = ctx.r11.s64 + -15944;
	// addi r10,r10,-18000
	ctx.r10.s64 = ctx.r10.s64 + -18000;
	// addi r9,r9,-15888
	ctx.r9.s64 = ctx.r9.s64 + -15888;
	// stw r11,2652(r31)
	ctx.current_instruction = 0x8810E600;
	REX_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// addi r8,r8,16944
	ctx.r8.s64 = ctx.r8.s64 + 16944;
	// stw r10,2656(r31)
	ctx.current_instruction = 0x8810E608;
	REX_STORE_U32(ctx.r31.u32 + 2656, ctx.r10.u32);
	// addi r7,r7,-14816
	ctx.r7.s64 = ctx.r7.s64 + -14816;
	// stw r9,2660(r31)
	ctx.current_instruction = 0x8810E610;
	REX_STORE_U32(ctx.r31.u32 + 2660, ctx.r9.u32);
	// addi r6,r6,-14592
	ctx.r6.s64 = ctx.r6.s64 + -14592;
	// stw r8,2844(r31)
	ctx.current_instruction = 0x8810E618;
	REX_STORE_U32(ctx.r31.u32 + 2844, ctx.r8.u32);
	// addi r5,r5,-11664
	ctx.r5.s64 = ctx.r5.s64 + -11664;
	// stw r7,2416(r31)
	ctx.current_instruction = 0x8810E620;
	REX_STORE_U32(ctx.r31.u32 + 2416, ctx.r7.u32);
	// addi r4,r4,-9552
	ctx.r4.s64 = ctx.r4.s64 + -9552;
	// stw r6,2420(r31)
	ctx.current_instruction = 0x8810E628;
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r6.u32);
	// lis r3,-30703
	ctx.r3.s64 = -2012151808;
	// stw r5,2488(r31)
	ctx.current_instruction = 0x8810E630;
	REX_STORE_U32(ctx.r31.u32 + 2488, ctx.r5.u32);
	// lis r30,-30703
	ctx.r30.s64 = -2012151808;
	// stw r4,2492(r31)
	ctx.current_instruction = 0x8810E638;
	REX_STORE_U32(ctx.r31.u32 + 2492, ctx.r4.u32);
	// lis r29,-30703
	ctx.r29.s64 = -2012151808;
	// lis r28,-30703
	ctx.r28.s64 = -2012151808;
	// lis r27,-30703
	ctx.r27.s64 = -2012151808;
	// lis r26,-30703
	ctx.r26.s64 = -2012151808;
	// lis r25,-30703
	ctx.r25.s64 = -2012151808;
	// lis r24,-30703
	ctx.r24.s64 = -2012151808;
	// lis r23,-30703
	ctx.r23.s64 = -2012151808;
	// addi r3,r3,-7216
	ctx.r3.s64 = ctx.r3.s64 + -7216;
	// addi r11,r30,-6968
	ctx.r11.s64 = ctx.r30.s64 + -6968;
	// addi r10,r29,-7464
	ctx.r10.s64 = ctx.r29.s64 + -7464;
	// stw r3,2500(r31)
	ctx.current_instruction = 0x8810E664;
	REX_STORE_U32(ctx.r31.u32 + 2500, ctx.r3.u32);
	// addi r9,r28,-11744
	ctx.r9.s64 = ctx.r28.s64 + -11744;
	// stw r11,2504(r31)
	ctx.current_instruction = 0x8810E66C;
	REX_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// addi r8,r27,-11952
	ctx.r8.s64 = ctx.r27.s64 + -11952;
	// stw r10,2496(r31)
	ctx.current_instruction = 0x8810E674;
	REX_STORE_U32(ctx.r31.u32 + 2496, ctx.r10.u32);
	// addi r7,r26,-11848
	ctx.r7.s64 = ctx.r26.s64 + -11848;
	// stw r9,2508(r31)
	ctx.current_instruction = 0x8810E67C;
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r9.u32);
	// addi r6,r25,-11896
	ctx.r6.s64 = ctx.r25.s64 + -11896;
	// stw r8,2512(r31)
	ctx.current_instruction = 0x8810E684;
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r8.u32);
	// addi r5,r24,-11792
	ctx.r5.s64 = ctx.r24.s64 + -11792;
	// stw r7,2516(r31)
	ctx.current_instruction = 0x8810E68C;
	REX_STORE_U32(ctx.r31.u32 + 2516, ctx.r7.u32);
	// addi r4,r23,-12240
	ctx.r4.s64 = ctx.r23.s64 + -12240;
	// stw r6,2520(r31)
	ctx.current_instruction = 0x8810E694;
	REX_STORE_U32(ctx.r31.u32 + 2520, ctx.r6.u32);
	// stw r5,2524(r31)
	ctx.current_instruction = 0x8810E698;
	REX_STORE_U32(ctx.r31.u32 + 2524, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,2528(r31)
	ctx.current_instruction = 0x8810E6A0;
	REX_STORE_U32(ctx.r31.u32 + 2528, ctx.r4.u32);
	// bl 0x880f6040
	ctx.lr = 0x8810E6A8;
	sub_880F6040(ctx, base);
loc_8810E6A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88110578) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88110578;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88110578) {
			switch (rex_dispatch_address) {
				case 0x88110580:
				case 0x881105C8:
				case 0x881105E8:
				case 0x88110614:
				case 0x8811065C:
				case 0x88110698:
				case 0x881106D4:
				case 0x881106F4:
				case 0x88110720:
				case 0x88110764:
				case 0x881107A0:
				case 0x881107D0:
				case 0x881107F0:
				case 0x8811081C:
				case 0x88110860:
				case 0x8811089C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88110578;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88110580: goto loc_88110580;
		case 0x881105C8: goto loc_881105C8;
		case 0x881105E8: goto loc_881105E8;
		case 0x88110614: goto loc_88110614;
		case 0x8811065C: goto loc_8811065C;
		case 0x88110698: goto loc_88110698;
		case 0x881106D4: goto loc_881106D4;
		case 0x881106F4: goto loc_881106F4;
		case 0x88110720: goto loc_88110720;
		case 0x88110764: goto loc_88110764;
		case 0x881107A0: goto loc_881107A0;
		case 0x881107D0: goto loc_881107D0;
		case 0x881107F0: goto loc_881107F0;
		case 0x8811081C: goto loc_8811081C;
		case 0x88110860: goto loc_88110860;
		case 0x8811089C: goto loc_8811089C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88110580;
	__savegprlr_23(ctx, base);
loc_88110580:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88110580;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,7868(r3)
	ctx.current_instruction = 0x88110584;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r23,r4,4
	ctx.r23.s64 = ctx.r4.s64 + 4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_881105A0:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x881105A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881105c8
	if (ctx.cr6.eq) goto loc_881105C8;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r25,-1
	ctx.r7.s64 = ctx.r25.s64 + -1;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x881105C8;
	sub_880FF798(ctx, base);
loc_881105C8:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x881105C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881105f4
	if (ctx.cr6.eq) goto loc_881105F4;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ffa50
	ctx.lr = 0x881105E8;
	sub_880FFA50(ctx, base);
loc_881105E8:
	// lwz r11,30200(r31)
	ctx.current_instruction = 0x881105E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,30200(r31)
	ctx.current_instruction = 0x881105F0;
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r10.u32);
loc_881105F4:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x881105F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// lwz r6,20048(r31)
	ctx.current_instruction = 0x88110600;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20048);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f348
	ctx.lr = 0x88110614;
	sub_8810F348(ctx, base);
loc_88110614:
	// lwz r10,0(r23)
	ctx.current_instruction = 0x88110614;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88110698
	if (!ctx.cr6.eq) goto loc_88110698;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x88110624;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x88110674
	if (!ctx.cr6.gt) goto loc_88110674;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88110640:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88110640;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x88110648;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810ed80
	ctx.lr = 0x8811065C;
	sub_8810ED80(ctx, base);
loc_8811065C:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x8811065C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88110640
	if (ctx.cr6.lt) goto loc_88110640;
loc_88110674:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88110684;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x88110688;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ef50
	ctx.lr = 0x88110698;
	sub_8810EF50(ctx, base);
loc_88110698:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// ble cr6,0x881105a0
	if (!ctx.cr6.gt) goto loc_881105A0;
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x881106AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881106d4
	if (ctx.cr6.eq) goto loc_881106D4;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x881106D4;
	sub_880FF798(ctx, base);
loc_881106D4:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x881106D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88110700
	if (ctx.cr6.eq) goto loc_88110700;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ffa50
	ctx.lr = 0x881106F4;
	sub_880FFA50(ctx, base);
loc_881106F4:
	// lwz r11,30200(r31)
	ctx.current_instruction = 0x881106F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,30200(r31)
	ctx.current_instruction = 0x881106FC;
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r10.u32);
loc_88110700:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x88110700;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// lwz r6,20052(r31)
	ctx.current_instruction = 0x8811070C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20052);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f348
	ctx.lr = 0x88110720;
	sub_8810F348(ctx, base);
loc_88110720:
	// lwz r10,0(r23)
	ctx.current_instruction = 0x88110720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x881107a0
	if (!ctx.cr6.eq) goto loc_881107A0;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x8811072C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8811077c
	if (!ctx.cr6.gt) goto loc_8811077C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88110748:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88110748;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x88110750;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x88110764;
	sub_8810E9E0(ctx, base);
loc_88110764:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x88110764;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88110748
	if (ctx.cr6.lt) goto loc_88110748;
loc_8811077C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x8811078C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x88110790;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x881107A0;
	sub_8810EBB0(ctx, base);
loc_881107A0:
	// lwz r11,28568(r31)
	ctx.current_instruction = 0x881107A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28568);
	// addi r26,r26,256
	ctx.r26.s64 = ctx.r26.s64 + 256;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881107d0
	if (ctx.cr6.eq) goto loc_881107D0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ff798
	ctx.lr = 0x881107D0;
	sub_880FF798(ctx, base);
loc_881107D0:
	// lwz r11,28560(r31)
	ctx.current_instruction = 0x881107D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881107fc
	if (ctx.cr6.eq) goto loc_881107FC;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ffa50
	ctx.lr = 0x881107F0;
	sub_880FFA50(ctx, base);
loc_881107F0:
	// lwz r11,30200(r31)
	ctx.current_instruction = 0x881107F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30200);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,30200(r31)
	ctx.current_instruction = 0x881107F8;
	REX_STORE_U32(ctx.r31.u32 + 30200, ctx.r10.u32);
loc_881107FC:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x881107FC;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// lwz r6,20052(r31)
	ctx.current_instruction = 0x88110808;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20052);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810f348
	ctx.lr = 0x8811081C;
	sub_8810F348(ctx, base);
loc_8811081C:
	// lwz r10,4(r23)
	ctx.current_instruction = 0x8811081C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8811089c
	if (!ctx.cr6.eq) goto loc_8811089C;
	// lhz r11,0(r28)
	ctx.current_instruction = 0x88110828;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// li r30,2
	ctx.r30.s64 = 2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x88110878
	if (!ctx.cr6.gt) goto loc_88110878;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_88110844:
	// lhz r10,6(r29)
	ctx.current_instruction = 0x88110844;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhzu r11,4(r29)
	ctx.current_instruction = 0x8811084C;
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x88110860;
	sub_8810E9E0(ctx, base);
loc_88110860:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x88110860;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88110844
	if (ctx.cr6.lt) goto loc_88110844;
loc_88110878:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88110888;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x8811088C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x8811089C;
	sub_8810EBB0(ctx, base);
loc_8811089C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881196F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881196F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881196F8) {
			switch (rex_dispatch_address) {
				case 0x88119700:
				case 0x881197A8:
				case 0x881197C8:
				case 0x881197E8:
				case 0x88119824:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881196F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88119700: goto loc_88119700;
		case 0x881197A8: goto loc_881197A8;
		case 0x881197C8: goto loc_881197C8;
		case 0x881197E8: goto loc_881197E8;
		case 0x88119824: goto loc_88119824;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88119700;
	__savegprlr_22(ctx, base);
loc_88119700:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88119700;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,28(r3)
	ctx.current_instruction = 0x88119704;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8811974c
	if (ctx.cr6.eq) goto loc_8811974C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8811974c
	if (ctx.cr6.eq) goto loc_8811974C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8811974c
	if (ctx.cr6.eq) goto loc_8811974C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8811974c
	if (ctx.cr6.eq) goto loc_8811974C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8811975c
	if (!ctx.cr6.eq) goto loc_8811975C;
loc_8811974C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
loc_8811975C:
	// stw r29,0(r30)
	ctx.current_instruction = 0x8811975C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// sth r29,4(r30)
	ctx.current_instruction = 0x88119764;
	REX_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// sth r29,6(r30)
	ctx.current_instruction = 0x8811976C;
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r29.u16);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r29,8(r30)
	ctx.current_instruction = 0x88119774;
	REX_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r29,9(r30)
	ctx.current_instruction = 0x8811977C;
	REX_STORE_U8(ctx.r30.u32 + 9, ctx.r29.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r29,10(r30)
	ctx.current_instruction = 0x88119784;
	REX_STORE_U8(ctx.r30.u32 + 10, ctx.r29.u8);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// stb r29,11(r30)
	ctx.current_instruction = 0x8811978C;
	REX_STORE_U8(ctx.r30.u32 + 11, ctx.r29.u8);
	// addi r23,r30,6
	ctx.r23.s64 = ctx.r30.s64 + 6;
	// stb r29,12(r30)
	ctx.current_instruction = 0x88119794;
	REX_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// stb r29,13(r30)
	ctx.current_instruction = 0x88119798;
	REX_STORE_U8(ctx.r30.u32 + 13, ctx.r29.u8);
	// stb r29,14(r30)
	ctx.current_instruction = 0x8811979C;
	REX_STORE_U8(ctx.r30.u32 + 14, ctx.r29.u8);
	// stb r29,15(r30)
	ctx.current_instruction = 0x881197A0;
	REX_STORE_U8(ctx.r30.u32 + 15, ctx.r29.u8);
	// bl 0x88119390
	ctx.lr = 0x881197A8;
	sub_88119390(ctx, base);
loc_881197A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881198a0
	if (ctx.cr6.lt) goto loc_881198A0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88119210
	ctx.lr = 0x881197C8;
	sub_88119210(ctx, base);
loc_881197C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881198a0
	if (ctx.cr6.lt) goto loc_881198A0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x88119210
	ctx.lr = 0x881197E8;
	sub_88119210(ctx, base);
loc_881197E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881198a0
	if (ctx.cr6.lt) goto loc_881198A0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_881197F4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x881197F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88119850
	if (!ctx.cr6.eq) goto loc_88119850;
	// lwz r11,0(r22)
	ctx.current_instruction = 0x88119800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.current_instruction = 0x8811980C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88119818;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88119824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88119824:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x881198a0
	if (ctx.cr6.lt) goto loc_881198A0;
	// lwz r10,0(r31)
	ctx.current_instruction = 0x8811982C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// ld r11,8(r22)
	ctx.current_instruction = 0x88119834;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r22.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r22)
	ctx.current_instruction = 0x8811983C;
	REX_STORE_U64(ctx.r22.u32 + 8, ctx.r11.u64);
	// lwz r10,0(r27)
	ctx.current_instruction = 0x88119840;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r31)
	ctx.current_instruction = 0x88119844;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r27)
	ctx.current_instruction = 0x8811984C;
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_88119850:
	// lwz r9,0(r28)
	ctx.current_instruction = 0x88119850;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r9,r10
	ctx.current_instruction = 0x88119868;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r25,r8
	ctx.r25.s64 = ctx.r8.s8;
	// extsb r26,r6
	ctx.r26.s64 = ctx.r6.s8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// stb r5,8(r7)
	ctx.current_instruction = 0x8811987C;
	REX_STORE_U8(ctx.r7.u32 + 8, ctx.r5.u8);
	// lwz r11,0(r31)
	ctx.current_instruction = 0x88119880;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	ctx.current_instruction = 0x88119888;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x881197f4
	if (ctx.cr6.lt) goto loc_881197F4;
	// lwz r10,0(r28)
	ctx.current_instruction = 0x88119890;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x8811989C;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_881198A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811E2E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811E2E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811E2E8) {
			switch (rex_dispatch_address) {
				case 0x8811E2F0:
				case 0x8811E348:
				case 0x8811E358:
				case 0x8811E384:
				case 0x8811E394:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811E2E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811E2F0: goto loc_8811E2F0;
		case 0x8811E348: goto loc_8811E348;
		case 0x8811E358: goto loc_8811E358;
		case 0x8811E384: goto loc_8811E384;
		case 0x8811E394: goto loc_8811E394;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x8811E2F0;
	__savegprlr_29(ctx, base);
loc_8811E2F0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8811E2F0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.current_instruction = 0x8811E2F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8811e320
	if (!ctx.cr6.eq) goto loc_8811E320;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x8811E308;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e320
	if (ctx.cr6.eq) goto loc_8811E320;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// b 0x8811e33c
	goto loc_8811E33C;
loc_8811E320:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8811e358
	if (!ctx.cr6.eq) goto loc_8811E358;
	// lwz r11,8(r30)
	ctx.current_instruction = 0x8811E328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e358
	if (ctx.cr6.eq) goto loc_8811E358;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
loc_8811E33C:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811E340;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E348;
	sub_880CB318(ctx, base);
loc_8811E348:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811E350;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E358;
	sub_880CB318(ctx, base);
loc_8811E358:
	// lwz r11,28(r30)
	ctx.current_instruction = 0x8811E358;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811e394
	if (ctx.cr6.eq) goto loc_8811E394;
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811E368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8811e384
	if (ctx.cr6.eq) goto loc_8811E384;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811E37C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x880cb318
	ctx.lr = 0x8811E384;
	sub_880CB318(ctx, base);
loc_8811E384:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,224(r29)
	ctx.current_instruction = 0x8811E388;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x880cb318
	ctx.lr = 0x8811E394;
	sub_880CB318(ctx, base);
loc_8811E394:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8811EE88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8811EE88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8811EE88) {
			switch (rex_dispatch_address) {
				case 0x8811EE90:
				case 0x8811EED8:
				case 0x8811EF9C:
				case 0x8811EFB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8811EE88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8811EE90: goto loc_8811EE90;
		case 0x8811EED8: goto loc_8811EED8;
		case 0x8811EF9C: goto loc_8811EF9C;
		case 0x8811EFB8: goto loc_8811EFB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8811EE90;
	__savegprlr_26(ctx, base);
loc_8811EE90:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8811EE90;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	ctx.current_instruction = 0x8811EEA0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	ctx.current_instruction = 0x8811EEA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8811eec4
	if (!ctx.cr6.eq) goto loc_8811EEC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EEC4:
	// lwz r29,28(r28)
	ctx.current_instruction = 0x8811EEC4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,148(r29)
	ctx.current_instruction = 0x8811EED0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x880cb730
	ctx.lr = 0x8811EED8;
	sub_880CB730(ctx, base);
loc_8811EED8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ef9c
	if (ctx.cr6.lt) goto loc_8811EF9C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811EEE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811EEE8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8811ef4c
	if (!ctx.cr6.eq) goto loc_8811EF4C;
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8811EEF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811ef4c
	if (ctx.cr6.eq) goto loc_8811EF4C;
	// stw r31,4(r11)
	ctx.current_instruction = 0x8811EF00;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.current_instruction = 0x8811EF08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,8(r10)
	ctx.current_instruction = 0x8811EF0C;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r9,80(r1)
	ctx.current_instruction = 0x8811EF10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r9)
	ctx.current_instruction = 0x8811EF14;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// lwz r8,80(r1)
	ctx.current_instruction = 0x8811EF18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,20(r8)
	ctx.current_instruction = 0x8811EF1C;
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r31.u32);
	// lwz r7,80(r1)
	ctx.current_instruction = 0x8811EF20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r7)
	ctx.current_instruction = 0x8811EF24;
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r31.u32);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811EF28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r6)
	ctx.current_instruction = 0x8811EF2C;
	REX_STORE_U8(ctx.r6.u32 + 32, ctx.r31.u8);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EF30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r5)
	ctx.current_instruction = 0x8811EF34;
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r31.u32);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8811EF38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,40(r4)
	ctx.current_instruction = 0x8811EF3C;
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r31.u32);
	// lwz r3,80(r1)
	ctx.current_instruction = 0x8811EF40;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,76(r3)
	ctx.current_instruction = 0x8811EF44;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811EF48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8811EF4C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8811EF4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8811f010
	if (ctx.cr6.gt) goto loc_8811F010;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8811ef7c
	if (ctx.cr6.eq) goto loc_8811EF7C;
	// bdz 0x8811ef7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8811EF7C;
	// bdnz 0x8811efa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8811EFA8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,161
	ctx.r3.u64 = ctx.r3.u64 | 161;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EF7C:
	// stw r26,4(r11)
	ctx.current_instruction = 0x8811EF7C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811EF80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r11)
	ctx.current_instruction = 0x8811EF84;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
loc_8811EF88:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811EF88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,4(r11)
	ctx.current_instruction = 0x8811EF94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8811eaf8
	ctx.lr = 0x8811EF9C;
	sub_8811EAF8(ctx, base);
loc_8811EF9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8811EFA8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,32(r11)
	ctx.current_instruction = 0x8811EFAC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r29)
	ctx.current_instruction = 0x8811EFB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x880cb730
	ctx.lr = 0x8811EFB8;
	sub_880CB730(ctx, base);
loc_8811EFB8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8811ef9c
	if (ctx.cr6.lt) goto loc_8811EF9C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8811ef88
	if (!ctx.cr6.eq) goto loc_8811EF88;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8811EFCC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,4(r11)
	ctx.current_instruction = 0x8811EFD0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.current_instruction = 0x8811EFD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,4(r10)
	ctx.current_instruction = 0x8811EFD8;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r9,84(r1)
	ctx.current_instruction = 0x8811EFDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r9)
	ctx.current_instruction = 0x8811EFE0;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x8811EFE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r8)
	ctx.current_instruction = 0x8811EFE8;
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r31.u8);
	// lwz r7,84(r1)
	ctx.current_instruction = 0x8811EFEC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r7)
	ctx.current_instruction = 0x8811EFF0;
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r31.u32);
	// lwz r6,80(r1)
	ctx.current_instruction = 0x8811EFF4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r6)
	ctx.current_instruction = 0x8811EFF8;
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r31.u32);
	// lwz r5,80(r1)
	ctx.current_instruction = 0x8811EFFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r5)
	ctx.current_instruction = 0x8811F000;
	REX_STORE_U8(ctx.r5.u32 + 32, ctx.r31.u8);
	// lwz r4,80(r1)
	ctx.current_instruction = 0x8811F004;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r4)
	ctx.current_instruction = 0x8811F008;
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r31.u32);
	// b 0x8811ef88
	goto loc_8811EF88;
loc_8811F010:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122B78) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88122B78);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122B78;
	ctx.current_instruction = 0x88122B78;
	// b 0x881227c8
	sub_881227C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88122D18) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88122D18;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88122D18) {
			switch (rex_dispatch_address) {
				case 0x88122D20:
				case 0x88122D70:
				case 0x88122DB8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88122D18;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88122D20: goto loc_88122D20;
		case 0x88122D70: goto loc_88122D70;
		case 0x88122DB8: goto loc_88122DB8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88122D20;
	__savegprlr_27(ctx, base);
loc_88122D20:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88122D20;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x88122D24;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r31)
	ctx.current_instruction = 0x88122D38;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88122d58
	if (!ctx.cr6.gt) goto loc_88122D58;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r4,80(r31)
	ctx.current_instruction = 0x88122D48;
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r4.u64);
	// stw r11,88(r31)
	ctx.current_instruction = 0x88122D4C;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88122D58:
	// lwz r11,76(r31)
	ctx.current_instruction = 0x88122D58;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.current_instruction = 0x88122D64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88122D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88122D70:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88122db8
	if (ctx.cr6.lt) goto loc_88122DB8;
	// lwz r11,12(r31)
	ctx.current_instruction = 0x88122D7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// std r30,32(r31)
	ctx.current_instruction = 0x88122D80;
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r30,64(r31)
	ctx.current_instruction = 0x88122D84;
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r29,80(r31)
	ctx.current_instruction = 0x88122D8C;
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r29.u64);
	// stw r29,88(r31)
	ctx.current_instruction = 0x88122D90;
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// std r30,40(r31)
	ctx.current_instruction = 0x88122D94;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// stw r29,92(r31)
	ctx.current_instruction = 0x88122D98;
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// std r29,96(r31)
	ctx.current_instruction = 0x88122D9C;
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r29.u64);
	// bne cr6,0x88122db8
	if (!ctx.cr6.eq) goto loc_88122DB8;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x88122DA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x88122db8
	if (!ctx.cr6.gt) goto loc_88122DB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881226c8
	ctx.lr = 0x88122DB8;
	sub_881226C8(ctx, base);
loc_88122DB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88124220) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88124220;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88124220) {
			switch (rex_dispatch_address) {
				case 0x88124240:
				case 0x88124248:
				case 0x88124268:
				case 0x88124284:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88124220;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88124240: goto loc_88124240;
		case 0x88124248: goto loc_88124248;
		case 0x88124268: goto loc_88124268;
		case 0x88124284: goto loc_88124284;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x88124224;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88124228;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8812422C;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.current_instruction = 0x88124230;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	ctx.current_instruction = 0x88124238;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x88123a90
	ctx.lr = 0x88124240;
	sub_88123A90(ctx, base);
loc_88124240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88123ec0
	ctx.lr = 0x88124248;
	sub_88123EC0(ctx, base);
loc_88124248:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88124248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.current_instruction = 0x88124250;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812426c
	if (ctx.cr6.eq) goto loc_8812426C;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,48(r11)
	ctx.current_instruction = 0x88124260;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x880cb318
	ctx.lr = 0x88124268;
	sub_880CB318(ctx, base);
loc_88124268:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88124268;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8812426C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88124284
	if (ctx.cr6.eq) goto loc_88124284;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r11)
	ctx.current_instruction = 0x88124278;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x880cb318
	ctx.lr = 0x88124284;
	sub_880CB318(ctx, base);
loc_88124284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88124288;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88124290;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88125218) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88125218;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88125218) {
			switch (rex_dispatch_address) {
				case 0x88125274:
				case 0x881252EC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88125218;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88125274: goto loc_88125274;
		case 0x881252EC: goto loc_881252EC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812521C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88125220;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88125224;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88125228;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.current_instruction = 0x8812522C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	ctx.current_instruction = 0x88125234;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8812523C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88125308
	if (ctx.cr6.eq) goto loc_88125308;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x88125248;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x8812524C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88125254;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x88125308
	if (ctx.cr6.eq) goto loc_88125308;
loc_8812525C:
	// lwz r10,52(r31)
	ctx.current_instruction = 0x8812525C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x88125260;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.current_instruction = 0x88125268;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88125274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88125274:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125308
	if (ctx.cr6.lt) goto loc_88125308;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8812527C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r11)
	ctx.current_instruction = 0x88125280;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8812529c
	if (ctx.cr6.eq) goto loc_8812529C;
	// lwz r9,4(r11)
	ctx.current_instruction = 0x8812528C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r10)
	ctx.current_instruction = 0x88125294;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88125298;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8812529C:
	// lwz r10,4(r11)
	ctx.current_instruction = 0x8812529C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881252b4
	if (ctx.cr6.eq) goto loc_881252B4;
	// lwz r9,8(r11)
	ctx.current_instruction = 0x881252A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	ctx.current_instruction = 0x881252B0;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_881252B4:
	// lwz r11,24(r31)
	ctx.current_instruction = 0x881252B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,120(r31)
	ctx.current_instruction = 0x881252B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.current_instruction = 0x881252BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,24(r31)
	ctx.current_instruction = 0x881252C8;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r8,120(r31)
	ctx.current_instruction = 0x881252CC;
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// bne 0x881252dc
	if (!ctx.cr0.eq) goto loc_881252DC;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881252D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,4(r11)
	ctx.current_instruction = 0x881252D8;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_881252DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.current_instruction = 0x881252E0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x880cb318
	ctx.lr = 0x881252EC;
	sub_880CB318(ctx, base);
loc_881252EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88125308
	if (ctx.cr6.lt) goto loc_88125308;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x881252F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881252F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88125300;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8812525c
	if (!ctx.cr6.eq) goto loc_8812525C;
loc_88125308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8812530C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x88125314;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x88125318;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88127FA8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88127FA8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88127FA8;
	ctx.current_instruction = 0x88127FA8;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r3,2(r11)
	ctx.current_instruction = 0x88127FBC;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r10,1(r11)
	ctx.current_instruction = 0x88127FC0;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	ctx.current_instruction = 0x88127FC4;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88129938) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88129938;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88129938) {
			switch (rex_dispatch_address) {
				case 0x881299A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88129938;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881299A0: goto loc_881299A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8812993C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x88129940;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88129974
	if (ctx.cr6.lt) goto loc_88129974;
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// bge cr6,0x88129974
	if (!ctx.cr6.lt) goto loc_88129974;
	// lis r11,-30719
	ctx.r11.s64 = -2013200384;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8832
	ctx.r9.s64 = ctx.r11.s64 + 8832;
	// lfsx f1,r10,r9
	ctx.current_instruction = 0x88129960;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88129968;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88129974:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// std r11,80(r1)
	ctx.current_instruction = 0x8812997C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88129980;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,12504(r9)
	ctx.current_instruction = 0x88129990;
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12504);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,12096(r10)
	ctx.current_instruction = 0x88129994;
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 12096);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x881ef940
	ctx.lr = 0x881299A0;
	sub_881EF940(ctx, base);
loc_881299A0:
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881299A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8812B0C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8812B0C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8812B0C0) {
			switch (rex_dispatch_address) {
				case 0x8812B0C8:
				case 0x8812B508:
				case 0x8812B518:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8812B0C0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8812B0C8: goto loc_8812B0C8;
		case 0x8812B508: goto loc_8812B508;
		case 0x8812B518: goto loc_8812B518;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8812B0C8;
	__savegprlr_14(ctx, base);
loc_8812B0C8:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x8812B0C8;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r22,0(r4)
	ctx.current_instruction = 0x8812B0D0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r25,48(r4)
	ctx.current_instruction = 0x8812B0D4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,40(r4)
	ctx.current_instruction = 0x8812B0DC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r27,36(r4)
	ctx.current_instruction = 0x8812B0E0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r30,4(r4)
	ctx.current_instruction = 0x8812B0E4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,140(r1)
	ctx.current_instruction = 0x8812B0E8;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r4,32(r4)
	ctx.current_instruction = 0x8812B0EC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r26,24(r28)
	ctx.current_instruction = 0x8812B0F0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r10,20(r28)
	ctx.current_instruction = 0x8812B0F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// lhz r9,30(r28)
	ctx.current_instruction = 0x8812B0F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 30);
	// lwz r11,8(r28)
	ctx.current_instruction = 0x8812B0FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r22,128(r1)
	ctx.current_instruction = 0x8812B100;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// stw r25,116(r1)
	ctx.current_instruction = 0x8812B104;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r24,120(r1)
	ctx.current_instruction = 0x8812B108;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r27,124(r1)
	ctx.current_instruction = 0x8812B10C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r30,112(r1)
	ctx.current_instruction = 0x8812B110;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r4,84(r1)
	ctx.current_instruction = 0x8812B114;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r26,132(r1)
	ctx.current_instruction = 0x8812B118;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r10,144(r1)
	ctx.current_instruction = 0x8812B11C;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// sth r9,80(r1)
	ctx.current_instruction = 0x8812B120;
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// ble cr6,0x8812b5c0
	if (!ctx.cr6.gt) goto loc_8812B5C0;
	// rlwinm r20,r11,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,108(r1)
	ctx.current_instruction = 0x8812B12C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r23,r5,-4
	ctx.r23.s64 = ctx.r5.s64 + -4;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r20,104(r1)
	ctx.current_instruction = 0x8812B138;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// stw r23,340(r1)
	ctx.current_instruction = 0x8812B13C;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
loc_8812B140:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,136(r1)
	ctx.current_instruction = 0x8812B144;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r7,88(r1)
	ctx.current_instruction = 0x8812B154;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,96(r1)
	ctx.current_instruction = 0x8812B15C;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8812B164;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x8812B16C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8812b370
	if (ctx.cr6.lt) goto loc_8812B370;
loc_8812B178:
	// lhz r9,14(r10)
	ctx.current_instruction = 0x8812B178;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// lhz r8,12(r10)
	ctx.current_instruction = 0x8812B17C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r7,14(r11)
	ctx.current_instruction = 0x8812B180;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,12(r11)
	ctx.current_instruction = 0x8812B188;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r30,4(r10)
	ctx.current_instruction = 0x8812B194;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r29,30(r10)
	ctx.current_instruction = 0x8812B19C;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// lhz r6,6(r10)
	ctx.current_instruction = 0x8812B1A4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r7,10(r10)
	ctx.current_instruction = 0x8812B1A8;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r3,8(r10)
	ctx.current_instruction = 0x8812B1AC;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r28,28(r10)
	ctx.current_instruction = 0x8812B1B0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lhz r27,2(r10)
	ctx.current_instruction = 0x8812B1B4;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r26,26(r10)
	ctx.current_instruction = 0x8812B1B8;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r25,0(r10)
	ctx.current_instruction = 0x8812B1BC;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r24,24(r10)
	ctx.current_instruction = 0x8812B1C0;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// lhz r23,22(r10)
	ctx.current_instruction = 0x8812B1C4;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r31,10(r11)
	ctx.current_instruction = 0x8812B1C8;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lhz r5,20(r10)
	ctx.current_instruction = 0x8812B1D0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lwz r10,88(r1)
	ctx.current_instruction = 0x8812B1D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r4,8(r11)
	ctx.current_instruction = 0x8812B1D8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r22,6(r11)
	ctx.current_instruction = 0x8812B1DC;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r21,4(r11)
	ctx.current_instruction = 0x8812B1E0;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r20,30(r11)
	ctx.current_instruction = 0x8812B1E4;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// stw r10,88(r1)
	ctx.current_instruction = 0x8812B1E8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lhz r19,28(r11)
	ctx.current_instruction = 0x8812B1EC;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r18,2(r11)
	ctx.current_instruction = 0x8812B1F0;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r17,26(r11)
	ctx.current_instruction = 0x8812B1F4;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r9,20(r11)
	ctx.current_instruction = 0x8812B1FC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r16,0(r11)
	ctx.current_instruction = 0x8812B204;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhz r15,24(r11)
	ctx.current_instruction = 0x8812B20C;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r14,22(r11)
	ctx.current_instruction = 0x8812B214;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r9,82(r1)
	ctx.current_instruction = 0x8812B21C;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// mullw r9,r7,r31
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r6,r22
	ctx.r6.s64 = ctx.r22.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r6
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// extsh r4,r30
	ctx.r4.s64 = ctx.r30.s16;
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// extsh r3,r21
	ctx.r3.s64 = ctx.r21.s16;
	// extsh r31,r20
	ctx.r31.s64 = ctx.r20.s16;
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// extsh r29,r19
	ctx.r29.s64 = ctx.r19.s16;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// mullw r9,r30,r29
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// extsh r4,r27
	ctx.r4.s64 = ctx.r27.s16;
	// extsh r3,r18
	ctx.r3.s64 = ctx.r18.s16;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// extsh r31,r17
	ctx.r31.s64 = ctx.r17.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// extsh r4,r25
	ctx.r4.s64 = ctx.r25.s16;
	// extsh r3,r16
	ctx.r3.s64 = ctx.r16.s16;
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// extsh r31,r15
	ctx.r31.s64 = ctx.r15.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r4,r3
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r31.s32);
	// lwz r6,88(r1)
	ctx.current_instruction = 0x8812B2A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsh r4,r23
	ctx.r4.s64 = ctx.r23.s16;
	// extsh r3,r14
	ctx.r3.s64 = ctx.r14.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r9,r4,r3
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,100(r1)
	ctx.current_instruction = 0x8812B2C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r4,82(r1)
	ctx.current_instruction = 0x8812B2C4;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r6,18(r11)
	ctx.current_instruction = 0x8812B2D0;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhz r4,16(r11)
	ctx.current_instruction = 0x8812B2D8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwz r30,112(r1)
	ctx.current_instruction = 0x8812B2E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r31,18(r10)
	ctx.current_instruction = 0x8812B2E4;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// mullw r8,r5,r3
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lhz r29,16(r10)
	ctx.current_instruction = 0x8812B2EC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// lwz r3,96(r1)
	ctx.current_instruction = 0x8812B2F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.current_instruction = 0x8812B2F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,88(r1)
	ctx.current_instruction = 0x8812B2F8;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r31,r6
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r6,r4
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,92(r1)
	ctx.current_instruction = 0x8812B328;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// stw r6,96(r1)
	ctx.current_instruction = 0x8812B330;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,100(r1)
	ctx.current_instruction = 0x8812B338;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8812b178
	if (ctx.cr6.lt) goto loc_8812B178;
	// lwz r23,340(r1)
	ctx.current_instruction = 0x8812B344;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r25,116(r1)
	ctx.current_instruction = 0x8812B348;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,120(r1)
	ctx.current_instruction = 0x8812B34C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r27,124(r1)
	ctx.current_instruction = 0x8812B350;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r22,128(r1)
	ctx.current_instruction = 0x8812B354;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,84(r1)
	ctx.current_instruction = 0x8812B358;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,132(r1)
	ctx.current_instruction = 0x8812B35C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.current_instruction = 0x8812B360;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r28,140(r1)
	ctx.current_instruction = 0x8812B364;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r20,104(r1)
	ctx.current_instruction = 0x8812B368;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r21,108(r1)
	ctx.current_instruction = 0x8812B36C;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8812B370:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8812b44c
	if (!ctx.cr6.lt) goto loc_8812B44C;
	// lhz r9,14(r11)
	ctx.current_instruction = 0x8812B378;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r5,14(r10)
	ctx.current_instruction = 0x8812B37C;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lhz r9,12(r10)
	ctx.current_instruction = 0x8812B384;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r8,12(r11)
	ctx.current_instruction = 0x8812B38C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r20,r9
	ctx.r20.s64 = ctx.r9.s16;
	// lhz r31,10(r11)
	ctx.current_instruction = 0x8812B394;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mullw r9,r5,r3
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lhz r3,6(r11)
	ctx.current_instruction = 0x8812B39C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r5,4(r11)
	ctx.current_instruction = 0x8812B3A0;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r19,8(r11)
	ctx.current_instruction = 0x8812B3A4;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r18,2(r11)
	ctx.current_instruction = 0x8812B3A8;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r17,0(r11)
	ctx.current_instruction = 0x8812B3AC;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r10)
	ctx.current_instruction = 0x8812B3B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r29,10(r10)
	ctx.current_instruction = 0x8812B3B4;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r16,8(r10)
	ctx.current_instruction = 0x8812B3B8;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r15,6(r10)
	ctx.current_instruction = 0x8812B3BC;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r14,4(r10)
	ctx.current_instruction = 0x8812B3C0;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r10,0(r10)
	ctx.current_instruction = 0x8812B3C4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r11,82(r1)
	ctx.current_instruction = 0x8812B3CC;
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r11,r20,r8
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r8.s32);
	// lwz r20,104(r1)
	ctx.current_instruction = 0x8812B3D8;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// sth r10,84(r1)
	ctx.current_instruction = 0x8812B3DC;
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// extsh r9,r16
	ctx.r9.s64 = ctx.r16.s16;
	// extsh r8,r19
	ctx.r8.s64 = ctx.r19.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// extsh r9,r15
	ctx.r9.s64 = ctx.r15.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r8,82(r1)
	ctx.current_instruction = 0x8812B40C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// extsh r3,r14
	ctx.r3.s64 = ctx.r14.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r8,84(r1)
	ctx.current_instruction = 0x8812B424;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r3,r18
	ctx.r3.s64 = ctx.r18.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r3,r17
	ctx.r3.s64 = ctx.r17.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8812B44C:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,144(r1)
	ctx.current_instruction = 0x8812B450;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,4(r23)
	ctx.current_instruction = 0x8812B460;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// sraw r10,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8812b4b0
	if (!ctx.cr6.gt) goto loc_8812B4B0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8812b4ec
	if (!ctx.cr6.gt) goto loc_8812B4EC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r8,r25,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r25.u64;
loc_8812B488:
	// lhzx r10,r8,r11
	ctx.current_instruction = 0x8812B488;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x8812B48C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	ctx.current_instruction = 0x8812B4A0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8812b488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812B488;
	// b 0x8812b4ec
	goto loc_8812B4EC;
loc_8812B4B0:
	// bge cr6,0x8812b4ec
	if (!ctx.cr6.lt) goto loc_8812B4EC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8812b4ec
	if (!ctx.cr6.gt) goto loc_8812B4EC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r10,r25,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r25.u64;
loc_8812B4C8:
	// lhzx r9,r10,r11
	ctx.current_instruction = 0x8812B4C8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r8,0(r11)
	ctx.current_instruction = 0x8812B4CC;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// sth r3,0(r11)
	ctx.current_instruction = 0x8812B4E0;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8812b4c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8812B4C8;
loc_8812B4EC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8812b520
	if (!ctx.cr6.eq) goto loc_8812B520;
	// rlwinm r31,r22,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x8812B508;
	sub_880547A0(ctx, base);
loc_8812B508:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r31,r24
	ctx.r3.u64 = ctx.r31.u64 + ctx.r24.u64;
	// bl 0x880547a0
	ctx.lr = 0x8812B518;
	sub_880547A0(ctx, base);
loc_8812B518:
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// b 0x8812b524
	goto loc_8812B524;
loc_8812B520:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_8812B524:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,84(r1)
	ctx.current_instruction = 0x8812B528;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// sthx r29,r10,r27
	ctx.current_instruction = 0x8812B534;
	REX_STORE_U16(ctx.r10.u32 + ctx.r27.u32, ctx.r29.u16);
	// ble cr6,0x8812b558
	if (!ctx.cr6.gt) goto loc_8812B558;
	// lhz r9,80(r1)
	ctx.current_instruction = 0x8812B53C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,32767
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32767, ctx.xer);
	// sth r9,0(r11)
	ctx.current_instruction = 0x8812B544;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// ble cr6,0x8812b588
	if (!ctx.cr6.gt) goto loc_8812B588;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// sthx r9,r10,r27
	ctx.current_instruction = 0x8812B550;
	REX_STORE_U16(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u16);
	// b 0x8812b588
	goto loc_8812B588;
loc_8812B558:
	// bge cr6,0x8812b580
	if (!ctx.cr6.lt) goto loc_8812B580;
	// lhz r9,80(r1)
	ctx.current_instruction = 0x8812B55C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-32768
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -32768, ctx.xer);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// sth r7,0(r11)
	ctx.current_instruction = 0x8812B56C;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// bge cr6,0x8812b588
	if (!ctx.cr6.lt) goto loc_8812B588;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// sthx r9,r10,r27
	ctx.current_instruction = 0x8812B578;
	REX_STORE_U16(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u16);
	// b 0x8812b588
	goto loc_8812B588;
loc_8812B580:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	ctx.current_instruction = 0x8812B584;
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_8812B588:
	// lhzx r9,r20,r11
	ctx.current_instruction = 0x8812B588;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// sthx r7,r20,r11
	ctx.current_instruction = 0x8812B598;
	REX_STORE_U16(ctx.r20.u32 + ctx.r11.u32, ctx.r7.u16);
	// lhzx r6,r10,r11
	ctx.current_instruction = 0x8812B59C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// sthx r3,r10,r11
	ctx.current_instruction = 0x8812B5AC;
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// stwu r29,4(r23)
	ctx.current_instruction = 0x8812B5B0;
	ea = 4 + ctx.r23.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r23.u32 = ea;
	// stw r21,108(r1)
	ctx.current_instruction = 0x8812B5B4;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r23,340(r1)
	ctx.current_instruction = 0x8812B5B8;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r23.u32);
	// bne 0x8812b140
	if (!ctx.cr0.eq) goto loc_8812B140;
loc_8812B5C0:
	// stw r4,32(r28)
	ctx.current_instruction = 0x8812B5C0;
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r4.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813C710) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813C710;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813C710) {
			switch (rex_dispatch_address) {
				case 0x8813C718:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813C710;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813C718: goto loc_8813C718;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8813C718;
	__savegprlr_24(ctx, base);
loc_8813C718:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,-168
	ctx.r10.s64 = ctx.r1.s64 + -168;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8813C72C:
	// stdu r9,8(r10)
	ctx.current_instruction = 0x8813C72C;
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8813c72c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8813C72C;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r28,-160(r1)
	ctx.current_instruction = 0x8813C73C;
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8813c858
	if (!ctx.cr6.gt) goto loc_8813C858;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r27,r26,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r26.u64;
loc_8813C754:
	// lwzux r3,r27,r26
	ctx.current_instruction = 0x8813C754;
	ea = ctx.r27.u32 + ctx.r26.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x8813c858
	if (!ctx.cr6.lt) goto loc_8813C858;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// subfic r11,r3,20
	ctx.xer.ca = ctx.r3.u32 <= 20;
	ctx.r11.u64 = static_cast<uint64_t>(20) - ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r4,0(r10)
	ctx.current_instruction = 0x8813C774;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r11,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// and r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r11,0(r6)
	ctx.current_instruction = 0x8813C784;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8813c79c
	if (ctx.cr6.eq) goto loc_8813C79C;
	// lwz r31,-4(r10)
	ctx.current_instruction = 0x8813C794;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x8813c7a0
	goto loc_8813C7A0;
loc_8813C79C:
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
loc_8813C7A0:
	// stw r31,0(r10)
	ctx.current_instruction = 0x8813C7A0;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8813c7b0
	if (!ctx.cr6.eq) goto loc_8813C7B0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8813C7B0:
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8813c814
	if (!ctx.cr6.gt) goto loc_8813C814;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8813C7C8:
	// lwz r10,0(r11)
	ctx.current_instruction = 0x8813C7C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8813c814
	if (!ctx.cr6.eq) goto loc_8813C814;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r24,r10,r8
	ctx.r24.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8813c7ec
	if (ctx.cr6.eq) goto loc_8813C7EC;
	// lwz r10,-4(r11)
	ctx.current_instruction = 0x8813C7E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8813c7f0
	goto loc_8813C7F0;
loc_8813C7EC:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8813C7F0:
	// stw r10,0(r11)
	ctx.current_instruction = 0x8813C7F0;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8813c804
	if (!ctx.cr6.eq) goto loc_8813C804;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8813C804:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8813c7c8
	if (ctx.cr6.gt) goto loc_8813C7C8;
loc_8813C814:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x8813c84c
	if (!ctx.cr6.lt) goto loc_8813C84C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8813C830:
	// lwz r9,4(r10)
	ctx.current_instruction = 0x8813C830;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8813c84c
	if (!ctx.cr6.eq) goto loc_8813C84C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r31,4(r10)
	ctx.current_instruction = 0x8813C840;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x8813c830
	if (ctx.cr6.lt) goto loc_8813C830;
loc_8813C84C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8813c754
	if (ctx.cr6.lt) goto loc_8813C754;
loc_8813C858:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8813FBF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8813FBF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8813FBF0) {
			switch (rex_dispatch_address) {
				case 0x8813FBF8:
				case 0x8813FC7C:
				case 0x8813FCC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8813FBF0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8813FBF8: goto loc_8813FBF8;
		case 0x8813FC7C: goto loc_8813FC7C;
		case 0x8813FCC8: goto loc_8813FCC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x8813FBF8;
	__savegprlr_26(ctx, base);
loc_8813FBF8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8813FBF8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.current_instruction = 0x8813FBFC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r10,108(r31)
	ctx.current_instruction = 0x8813FC14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8813fc30
	if (!ctx.cr6.gt) goto loc_8813FC30;
loc_8813FC20:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_8813FC30:
	// lwz r10,36(r31)
	ctx.current_instruction = 0x8813FC30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8813fc20
	if (!ctx.cr6.eq) goto loc_8813FC20;
	// lwz r8,32(r31)
	ctx.current_instruction = 0x8813FC40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,68(r31)
	ctx.current_instruction = 0x8813FC4C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r26,r8,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r6,r10,r8
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bl 0x88155690
	ctx.lr = 0x8813FC7C;
	sub_88155690(ctx, base);
loc_8813FC7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8813fc9c
	if (ctx.cr6.eq) goto loc_8813FC9C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8813fcac
	if (!ctx.cr6.eq) goto loc_8813FCAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r30)
	ctx.current_instruction = 0x8813FC90;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r3,0(r29)
	ctx.current_instruction = 0x8813FC94;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x8813fcac
	goto loc_8813FCAC;
loc_8813FC9C:
	// lwz r11,108(r31)
	ctx.current_instruction = 0x8813FC9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	ctx.current_instruction = 0x8813FCA4;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	ctx.current_instruction = 0x8813FCA8;
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8813FCAC:
	// ld r11,72(r31)
	ctx.current_instruction = 0x8813FCAC;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 72);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// std r11,0(r27)
	ctx.current_instruction = 0x8813FCB4;
	REX_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// beq cr6,0x8813fcc4
	if (ctx.cr6.eq) goto loc_8813FCC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	ctx.current_instruction = 0x8813FCC0;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8813FCC4:
	// bl 0x8813f6e8
	ctx.lr = 0x8813FCC8;
	sub_8813F6E8(ctx, base);
loc_8813FCC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881411E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881411E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881411E8) {
			switch (rex_dispatch_address) {
				case 0x881411F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881411E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881411F0: goto loc_881411F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881411F0;
	__savegprlr_14(ctx, base);
loc_881411F0:
	// lwz r11,32(r3)
	ctx.current_instruction = 0x881411F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,36(r3)
	ctx.current_instruction = 0x881411F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,4(r3)
	ctx.current_instruction = 0x88141204;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,48(r3)
	ctx.current_instruction = 0x8814120C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,20(r1)
	ctx.current_instruction = 0x88141214;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,-212(r1)
	ctx.current_instruction = 0x8814121C;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,-196(r1)
	ctx.current_instruction = 0x88141224;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r8.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r31,-216(r1)
	ctx.current_instruction = 0x8814122C;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,-200(r1)
	ctx.current_instruction = 0x88141234;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,-224(r1)
	ctx.current_instruction = 0x8814123C;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,-220(r1)
	ctx.current_instruction = 0x88141244;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r28.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r5,-228(r1)
	ctx.current_instruction = 0x8814124C;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r29,-208(r1)
	ctx.current_instruction = 0x88141254;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r29.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r10,-232(r1)
	ctx.current_instruction = 0x8814125C;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,-188(r1)
	ctx.current_instruction = 0x88141264;
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r6.u32);
	// stw r27,-184(r1)
	ctx.current_instruction = 0x88141268;
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r27.u32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// stw r26,-180(r1)
	ctx.current_instruction = 0x88141270;
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r26.u32);
	// stw r25,-176(r1)
	ctx.current_instruction = 0x88141274;
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// stw r9,-204(r1)
	ctx.current_instruction = 0x88141278;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// blt cr6,0x881414c0
	if (ctx.cr6.lt) goto loc_881414C0;
	// addi r9,r24,-1
	ctx.r9.s64 = ctx.r24.s64 + -1;
	// stw r9,-192(r1)
	ctx.current_instruction = 0x88141284;
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
loc_88141288:
	// lhz r9,2(r10)
	ctx.current_instruction = 0x88141288;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r11)
	ctx.current_instruction = 0x8814128C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r6,0(r10)
	ctx.current_instruction = 0x88141294;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r28,10(r10)
	ctx.current_instruction = 0x8814129C;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r27,8(r10)
	ctx.current_instruction = 0x881412A0;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// mullw r8,r7,r5
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lhz r7,0(r11)
	ctx.current_instruction = 0x881412AC;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,14(r10)
	ctx.current_instruction = 0x881412B0;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// stw r8,-236(r1)
	ctx.current_instruction = 0x881412B4;
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r8.u32);
	// lhz r25,12(r10)
	ctx.current_instruction = 0x881412B8;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r14,26(r10)
	ctx.current_instruction = 0x881412BC;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r4,6(r10)
	ctx.current_instruction = 0x881412C0;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r3,4(r10)
	ctx.current_instruction = 0x881412C4;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,22(r10)
	ctx.current_instruction = 0x881412C8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r31,20(r10)
	ctx.current_instruction = 0x881412CC;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// lhz r24,18(r10)
	ctx.current_instruction = 0x881412D0;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// lhz r23,16(r10)
	ctx.current_instruction = 0x881412D4;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r5,4(r11)
	ctx.current_instruction = 0x881412DC;
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r10,-228(r1)
	ctx.current_instruction = 0x881412E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r22,r5
	ctx.r22.s64 = ctx.r5.s16;
	// lhz r29,20(r11)
	ctx.current_instruction = 0x881412F0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// mullw r5,r9,r7
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r9,-224(r1)
	ctx.current_instruction = 0x881412F8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// lhz r6,6(r11)
	ctx.current_instruction = 0x881412FC;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r30,22(r11)
	ctx.current_instruction = 0x88141300;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// stw r10,-224(r1)
	ctx.current_instruction = 0x88141304;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// lhz r21,10(r11)
	ctx.current_instruction = 0x88141308;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// stw r9,-228(r1)
	ctx.current_instruction = 0x8814130C;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r9.u32);
	// lhz r19,14(r11)
	ctx.current_instruction = 0x88141310;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r20,8(r11)
	ctx.current_instruction = 0x88141314;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r7,-236(r1)
	ctx.current_instruction = 0x88141318;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lhz r18,12(r11)
	ctx.current_instruction = 0x8814131C;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r17,r29
	ctx.r17.s64 = ctx.r29.s16;
	// lwz r29,-232(r1)
	ctx.current_instruction = 0x88141324;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r16,18(r11)
	ctx.current_instruction = 0x8814132C;
	ctx.r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r15,16(r11)
	ctx.current_instruction = 0x88141334;
	ctx.r15.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// mullw r6,r4,r6
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// sth r14,-240(r1)
	ctx.current_instruction = 0x8814133C;
	REX_STORE_U16(ctx.r1.u32 + -240, ctx.r14.u16);
	// lhz r14,26(r11)
	ctx.current_instruction = 0x88141340;
	ctx.r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r4,24(r29)
	ctx.current_instruction = 0x88141344;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + 24);
	// std r11,-168(r1)
	ctx.current_instruction = 0x88141348;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r11.u64);
	// lhz r11,24(r11)
	ctx.current_instruction = 0x8814134C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// sth r4,-236(r1)
	ctx.current_instruction = 0x88141350;
	REX_STORE_U16(ctx.r1.u32 + -236, ctx.r4.u16);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// mullw r10,r8,r30
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// mullw r29,r3,r22
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r22.s32);
	// mullw r4,r31,r17
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r17.s32);
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// extsh r8,r21
	ctx.r8.s64 = ctx.r21.s16;
	// extsh r31,r27
	ctx.r31.s64 = ctx.r27.s16;
	// extsh r28,r26
	ctx.r28.s64 = ctx.r26.s16;
	// extsh r27,r19
	ctx.r27.s64 = ctx.r19.s16;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// lwz r28,-224(r1)
	ctx.current_instruction = 0x88141388;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// extsh r26,r25
	ctx.r26.s64 = ctx.r25.s16;
	// extsh r30,r20
	ctx.r30.s64 = ctx.r20.s16;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// lwz r28,-228(r1)
	ctx.current_instruction = 0x88141398;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// extsh r25,r18
	ctx.r25.s64 = ctx.r18.s16;
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// extsh r22,r16
	ctx.r22.s64 = ctx.r16.s16;
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// extsh r21,r15
	ctx.r21.s64 = ctx.r15.s16;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r30,r31,r30
	ctx.r30.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// mullw r31,r26,r25
	ctx.r31.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// mullw r9,r24,r22
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// mullw r3,r23,r21
	ctx.r3.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r21.s32);
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + ctx.r28.u64;
	// lhz r28,-240(r1)
	ctx.current_instruction = 0x881413CC;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -240);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r6,-220(r1)
	ctx.current_instruction = 0x881413D8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// extsh r3,r28
	ctx.r3.s64 = ctx.r28.s16;
	// lhz r28,-236(r1)
	ctx.current_instruction = 0x881413E0;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -236);
	// sth r11,-236(r1)
	ctx.current_instruction = 0x881413E4;
	REX_STORE_U16(ctx.r1.u32 + -236, ctx.r11.u16);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// ld r11,-168(r1)
	ctx.current_instruction = 0x881413F0;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lhz r28,-236(r1)
	ctx.current_instruction = 0x881413F4;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -236);
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// add r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r10,-232(r1)
	ctx.current_instruction = 0x88141400;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lhz r30,30(r11)
	ctx.current_instruction = 0x88141404;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// mullw r6,r31,r29
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// lhz r26,28(r11)
	ctx.current_instruction = 0x8814140C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lwz r29,-212(r1)
	ctx.current_instruction = 0x88141410;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r24,-208(r1)
	ctx.current_instruction = 0x88141414;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lhz r31,30(r10)
	ctx.current_instruction = 0x88141418;
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// lhz r23,28(r10)
	ctx.current_instruction = 0x8814141C;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lwz r22,-204(r1)
	ctx.current_instruction = 0x88141420;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r21,-200(r1)
	ctx.current_instruction = 0x88141424;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r20,-196(r1)
	ctx.current_instruction = 0x88141428;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// lwz r19,-192(r1)
	ctx.current_instruction = 0x8814142C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// extsh r25,r30
	ctx.r25.s64 = ctx.r30.s16;
	// lwz r30,-216(r1)
	ctx.current_instruction = 0x88141434;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// extsh r18,r31
	ctx.r18.s64 = ctx.r31.s16;
	// stw r5,-228(r1)
	ctx.current_instruction = 0x8814143C;
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// add r31,r7,r30
	ctx.r31.u64 = ctx.r7.u64 + ctx.r30.u64;
	// stw r4,-224(r1)
	ctx.current_instruction = 0x88141444;
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// extsh r27,r14
	ctx.r27.s64 = ctx.r14.s16;
	// stw r28,-220(r1)
	ctx.current_instruction = 0x8814144C;
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r28.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// stw r31,-216(r1)
	ctx.current_instruction = 0x88141454;
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// add r30,r8,r29
	ctx.r30.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r29,r9,r24
	ctx.r29.u64 = ctx.r9.u64 + ctx.r24.u64;
	// mullw r9,r18,r25
	ctx.r9.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r25.s32);
	// stw r30,-212(r1)
	ctx.current_instruction = 0x88141468;
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r30.u32);
	// stw r29,-208(r1)
	ctx.current_instruction = 0x8814146C;
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r29.u32);
	// mullw r7,r3,r27
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// mullw r8,r23,r26
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r26.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r22,2
	ctx.r9.s64 = ctx.r22.s64 + 2;
	// add r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 + ctx.r21.u64;
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + ctx.r20.u64;
	// stw r9,-204(r1)
	ctx.current_instruction = 0x8814148C;
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r9.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r7,-200(r1)
	ctx.current_instruction = 0x88141494;
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// stw r8,-196(r1)
	ctx.current_instruction = 0x88141498;
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r8.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,-232(r1)
	ctx.current_instruction = 0x881414A0;
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r10.u32);
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x88141288
	if (ctx.cr6.lt) goto loc_88141288;
	// lwz r3,20(r1)
	ctx.current_instruction = 0x881414AC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,-188(r1)
	ctx.current_instruction = 0x881414B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r27,-184(r1)
	ctx.current_instruction = 0x881414B4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// lwz r26,-180(r1)
	ctx.current_instruction = 0x881414B8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r25,-176(r1)
	ctx.current_instruction = 0x881414BC;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
loc_881414C0:
	// lwz r24,4(r3)
	ctx.current_instruction = 0x881414C0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8814157c
	if (!ctx.cr6.lt) goto loc_8814157C;
	// lhz r25,2(r10)
	ctx.current_instruction = 0x881414CC;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r27,4(r10)
	ctx.current_instruction = 0x881414D0;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r22,r25
	ctx.r22.s64 = ctx.r25.s16;
	// lhz r25,0(r11)
	ctx.current_instruction = 0x881414D8;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r26,4(r11)
	ctx.current_instruction = 0x881414DC;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r19,r25
	ctx.r19.s64 = ctx.r25.s16;
	// lhz r25,8(r10)
	ctx.current_instruction = 0x881414E8;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r9,6(r10)
	ctx.current_instruction = 0x881414EC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lhz r6,6(r11)
	ctx.current_instruction = 0x881414F4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r16,r25
	ctx.r16.s64 = ctx.r25.s16;
	// lhz r23,0(r10)
	ctx.current_instruction = 0x881414FC;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r21,10(r10)
	ctx.current_instruction = 0x88141504;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r17,14(r10)
	ctx.current_instruction = 0x8814150C;
	ctx.r17.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lhz r25,14(r11)
	ctx.current_instruction = 0x88141514;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// lhz r24,2(r11)
	ctx.current_instruction = 0x8814151C;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r17,r17
	ctx.r17.s64 = ctx.r17.s16;
	// lhz r20,10(r11)
	ctx.current_instruction = 0x88141524;
	ctx.r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r15,r25
	ctx.r15.s64 = ctx.r25.s16;
	// lhz r18,8(r11)
	ctx.current_instruction = 0x8814152C;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lhz r10,12(r10)
	ctx.current_instruction = 0x88141534;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// mullw r25,r27,r26
	ctx.r25.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// lhz r11,12(r11)
	ctx.current_instruction = 0x8814153C;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r14,r11
	ctx.r14.s64 = ctx.r11.s16;
	// extsh r20,r20
	ctx.r20.s64 = ctx.r20.s16;
	// extsh r18,r18
	ctx.r18.s64 = ctx.r18.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mullw r27,r9,r6
	ctx.r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r22,r24
	ctx.r6.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r24.s32);
	// mullw r24,r23,r19
	ctx.r24.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r19.s32);
	// mullw r9,r21,r20
	ctx.r9.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r20.s32);
	// mullw r26,r16,r18
	ctx.r26.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r18.s32);
	// mullw r11,r17,r15
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r15.s32);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r14.s32);
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + ctx.r24.u64;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8814157C:
	// lwz r11,24(r3)
	ctx.current_instruction = 0x8814157C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.current_instruction = 0x88141580;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sraw r3,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r3.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A228) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814A228);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A228;
	ctx.current_instruction = 0x8814A228;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x88148ca0
	sub_88148CA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A238) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814A238);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A238;
	ctx.current_instruction = 0x8814A238;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x88148ee8
	sub_88148EE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A258) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814A258);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A258;
	ctx.current_instruction = 0x8814A258;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x881493a0
	sub_881493A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A388) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8814A388);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A388;
	ctx.current_instruction = 0x8814A388;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x881494e8
	sub_881494E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814A3F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814A3F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814A3F8) {
			switch (rex_dispatch_address) {
				case 0x8814A400:
				case 0x8814A434:
				case 0x8814A450:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814A3F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814A400: goto loc_8814A400;
		case 0x8814A434: goto loc_8814A434;
		case 0x8814A450: goto loc_8814A450;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814A400;
	__savegprlr_28(ctx, base);
loc_8814A400:
	// stwu r1,-1152(r1)
	ctx.current_instruction = 0x8814A400;
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
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x88149950
	ctx.lr = 0x8814A434;
	sub_88149950(ctx, base);
loc_8814A434:
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
	ctx.lr = 0x8814A450;
	sub_88149E68(ctx, base);
loc_8814A450:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8814ACC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8814ACC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8814ACC0) {
			switch (rex_dispatch_address) {
				case 0x8814ACC8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8814ACC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8814ACC8: goto loc_8814ACC8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8814ACC8;
	__savegprlr_28(ctx, base);
loc_8814ACC8:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r11,-50(r1)
	ctx.current_instruction = 0x8814ACE4;
	REX_STORE_U16(ctx.r1.u32 + -50, ctx.r11.u16);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r11,16
	ctx.r11.s64 = 16;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v54,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lvx128 v57,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v60,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v56,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v63,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v5,v58,v53,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v52,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v61,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v50,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// vperm128 v3,v52,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v51,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v31,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v62,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v46,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v2,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vsubshs v1,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsplth v11,v31,7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v27,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm128 v26,v49,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v25,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vperm128 v24,v47,v46,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v23,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vslh v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vslh v19,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r31,r30,r6
	ctx.r31.u64 = ctx.r30.u64 + ctx.r6.u64;
	// vaddshs v22,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v4,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v21,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r10,4
	ctx.r10.s64 = 4;
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vmrghb v2,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v18,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v17,v23,v10
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v16,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v0,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v7,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v1,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v30,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v15,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v28,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v26,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v27,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v22,v26,v10
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsrah v24,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v23,v28,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v21,v15,v9
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v20,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v45,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vaddshs v19,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v18,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v17,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v21,v21
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v16,v24,v6
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v15,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v14,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v43,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsrah v0,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx128 v45,r0,r5
	ctx.current_instruction = 0x8814AE78;
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v13,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v42,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v12,v15,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvewx128 v45,r5,r10
	ctx.current_instruction = 0x8814AE88;
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// stvewx128 v44,r0,r4
	ctx.current_instruction = 0x8814AE90;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v11,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvewx128 v44,r4,r10
	ctx.current_instruction = 0x8814AE98;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvewx128 v43,r0,r30
	ctx.current_instruction = 0x8814AEA0;
	ea = (ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v39,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvewx128 v43,r30,r10
	ctx.current_instruction = 0x8814AEA8;
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r31
	ctx.current_instruction = 0x8814AEAC;
	ea = (ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v38,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v42,r31,r10
	ctx.current_instruction = 0x8814AEB4;
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r7
	ctx.current_instruction = 0x8814AEB8;
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r7,r10
	ctx.current_instruction = 0x8814AEBC;
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r9
	ctx.current_instruction = 0x8814AEC0;
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r9,r10
	ctx.current_instruction = 0x8814AEC4;
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r0,r8
	ctx.current_instruction = 0x8814AEC8;
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r8,r10
	ctx.current_instruction = 0x8814AECC;
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r6
	ctx.current_instruction = 0x8814AED0;
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r6,r10
	ctx.current_instruction = 0x8814AED4;
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88155378) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88155378;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88155378) {
			switch (rex_dispatch_address) {
				case 0x88155380:
				case 0x88155394:
				case 0x881553AC:
				case 0x88155428:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88155378;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88155380: goto loc_88155380;
		case 0x88155394: goto loc_88155394;
		case 0x881553AC: goto loc_881553AC;
		case 0x88155428: goto loc_88155428;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88155380;
	__savegprlr_27(ctx, base);
loc_88155380:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88155380;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,22064(r3)
	ctx.current_instruction = 0x8815538C;
	REX_STORE_U32(ctx.r3.u32 + 22064, ctx.r28.u32);
	// bl 0x8815ad38
	ctx.lr = 0x88155394;
	sub_8815AD38(ctx, base);
loc_88155394:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,156(r31)
	ctx.current_instruction = 0x881553A0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r29,160(r31)
	ctx.current_instruction = 0x881553A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x881533f0
	ctx.lr = 0x881553AC;
	sub_881533F0(ctx, base);
loc_881553AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88155484
	if (!ctx.cr6.eq) goto loc_88155484;
	// lwz r4,156(r31)
	ctx.current_instruction = 0x881553B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,22056(r31)
	ctx.current_instruction = 0x881553B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22056);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88155480
	if (ctx.cr6.gt) goto loc_88155480;
	// lwz r5,160(r31)
	ctx.current_instruction = 0x881553C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,22060(r31)
	ctx.current_instruction = 0x881553C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22060);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88155480
	if (ctx.cr6.gt) goto loc_88155480;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x881553e4
	if (!ctx.cr6.eq) goto loc_881553E4;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x881553ec
	if (ctx.cr6.eq) goto loc_881553EC;
loc_881553E4:
	// stw r30,22084(r31)
	ctx.current_instruction = 0x881553E4;
	REX_STORE_U32(ctx.r31.u32 + 22084, ctx.r30.u32);
	// stw r29,22088(r31)
	ctx.current_instruction = 0x881553E8;
	REX_STORE_U32(ctx.r31.u32 + 22088, ctx.r29.u32);
loc_881553EC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x88155408
	if (!ctx.cr6.eq) goto loc_88155408;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x88155408
	if (!ctx.cr6.eq) goto loc_88155408;
	// stw r27,21888(r31)
	ctx.current_instruction = 0x88155400;
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r27.u32);
	// b 0x88155420
	goto loc_88155420;
loc_88155408:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// stw r28,21888(r31)
	ctx.current_instruction = 0x8815540C;
	REX_STORE_U32(ctx.r31.u32 + 21888, ctx.r28.u32);
	// addi r10,r10,-20280
	ctx.r10.s64 = ctx.r10.s64 + -20280;
	// lwz r11,0(r10)
	ctx.current_instruction = 0x88155414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	ctx.current_instruction = 0x8815541C;
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_88155420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815bc60
	ctx.lr = 0x88155428;
	sub_8815BC60(ctx, base);
loc_88155428:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815548c
	if (!ctx.cr6.eq) goto loc_8815548C;
	// lwz r11,21992(r31)
	ctx.current_instruction = 0x88155430;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21992);
	// stw r28,22064(r31)
	ctx.current_instruction = 0x88155434;
	REX_STORE_U32(ctx.r31.u32 + 22064, ctx.r28.u32);
	// stw r28,3728(r31)
	ctx.current_instruction = 0x88155438;
	REX_STORE_U32(ctx.r31.u32 + 3728, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x88155464
	if (!ctx.cr6.gt) goto loc_88155464;
	// lwz r10,21984(r31)
	ctx.current_instruction = 0x88155444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21984);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r27,21992(r31)
	ctx.current_instruction = 0x8815544C;
	REX_STORE_U32(ctx.r31.u32 + 21992, ctx.r27.u32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r27,21984(r31)
	ctx.current_instruction = 0x88155454;
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r27.u32);
	// stw r11,21988(r31)
	ctx.current_instruction = 0x88155458;
	REX_STORE_U32(ctx.r31.u32 + 21988, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155464:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,21988(r31)
	ctx.current_instruction = 0x88155468;
	REX_STORE_U32(ctx.r31.u32 + 21988, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,21992(r31)
	ctx.current_instruction = 0x88155470;
	REX_STORE_U32(ctx.r31.u32 + 21992, ctx.r27.u32);
	// stw r27,21984(r31)
	ctx.current_instruction = 0x88155474;
	REX_STORE_U32(ctx.r31.u32 + 21984, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_88155480:
	// li r3,1
	ctx.r3.s64 = 1;
loc_88155484:
	// stw r29,160(r31)
	ctx.current_instruction = 0x88155484;
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r30,156(r31)
	ctx.current_instruction = 0x88155488;
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_8815548C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88159E48) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88159E48;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88159E48) {
			switch (rex_dispatch_address) {
				case 0x88159E50:
				case 0x88159E70:
				case 0x88159E94:
				case 0x88159EB8:
				case 0x88159EDC:
				case 0x88159F00:
				case 0x88159F24:
				case 0x88159F48:
				case 0x88159F70:
				case 0x88159F98:
				case 0x88159FC0:
				case 0x88159FE8:
				case 0x8815A020:
				case 0x8815A048:
				case 0x8815A070:
				case 0x8815A098:
				case 0x8815A0DC:
				case 0x8815A104:
				case 0x8815A12C:
				case 0x8815A154:
				case 0x8815A188:
				case 0x8815A1AC:
				case 0x8815A1D0:
				case 0x8815A1F4:
				case 0x8815A218:
				case 0x8815A23C:
				case 0x8815A260:
				case 0x8815A284:
				case 0x8815A2A8:
				case 0x8815A2CC:
				case 0x8815A300:
				case 0x8815A328:
				case 0x8815A350:
				case 0x8815A378:
				case 0x8815A3B0:
				case 0x8815A3D8:
				case 0x8815A400:
				case 0x8815A428:
				case 0x8815A460:
				case 0x8815A488:
				case 0x8815A4B0:
				case 0x8815A4D8:
				case 0x8815A500:
				case 0x8815A528:
				case 0x8815A550:
				case 0x8815A578:
				case 0x8815A5BC:
				case 0x8815A5E0:
				case 0x8815A604:
				case 0x8815A628:
				case 0x8815A64C:
				case 0x8815A670:
				case 0x8815A694:
				case 0x8815A6B8:
				case 0x8815A6DC:
				case 0x8815A700:
				case 0x8815A724:
				case 0x8815A748:
				case 0x8815A770:
				case 0x8815A798:
				case 0x8815A7C0:
				case 0x8815A7E8:
				case 0x8815A810:
				case 0x8815A838:
				case 0x8815A860:
				case 0x8815A888:
				case 0x8815A8D0:
				case 0x8815A8F8:
				case 0x8815A920:
				case 0x8815A948:
				case 0x8815A970:
				case 0x8815A998:
				case 0x8815A9C0:
				case 0x8815A9E8:
				case 0x8815AA30:
				case 0x8815AA58:
				case 0x8815AA80:
				case 0x8815AAA8:
				case 0x8815AAE0:
				case 0x8815AB08:
				case 0x8815AB30:
				case 0x8815AB58:
				case 0x8815AB8C:
				case 0x8815ABB0:
				case 0x8815ABD4:
				case 0x8815ABF8:
				case 0x8815AC1C:
				case 0x8815AC40:
				case 0x8815AC64:
				case 0x8815AC88:
				case 0x8815ACAC:
				case 0x8815ACD0:
				case 0x8815ACF4:
				case 0x8815AD18:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88159E48;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88159E50: goto loc_88159E50;
		case 0x88159E70: goto loc_88159E70;
		case 0x88159E94: goto loc_88159E94;
		case 0x88159EB8: goto loc_88159EB8;
		case 0x88159EDC: goto loc_88159EDC;
		case 0x88159F00: goto loc_88159F00;
		case 0x88159F24: goto loc_88159F24;
		case 0x88159F48: goto loc_88159F48;
		case 0x88159F70: goto loc_88159F70;
		case 0x88159F98: goto loc_88159F98;
		case 0x88159FC0: goto loc_88159FC0;
		case 0x88159FE8: goto loc_88159FE8;
		case 0x8815A020: goto loc_8815A020;
		case 0x8815A048: goto loc_8815A048;
		case 0x8815A070: goto loc_8815A070;
		case 0x8815A098: goto loc_8815A098;
		case 0x8815A0DC: goto loc_8815A0DC;
		case 0x8815A104: goto loc_8815A104;
		case 0x8815A12C: goto loc_8815A12C;
		case 0x8815A154: goto loc_8815A154;
		case 0x8815A188: goto loc_8815A188;
		case 0x8815A1AC: goto loc_8815A1AC;
		case 0x8815A1D0: goto loc_8815A1D0;
		case 0x8815A1F4: goto loc_8815A1F4;
		case 0x8815A218: goto loc_8815A218;
		case 0x8815A23C: goto loc_8815A23C;
		case 0x8815A260: goto loc_8815A260;
		case 0x8815A284: goto loc_8815A284;
		case 0x8815A2A8: goto loc_8815A2A8;
		case 0x8815A2CC: goto loc_8815A2CC;
		case 0x8815A300: goto loc_8815A300;
		case 0x8815A328: goto loc_8815A328;
		case 0x8815A350: goto loc_8815A350;
		case 0x8815A378: goto loc_8815A378;
		case 0x8815A3B0: goto loc_8815A3B0;
		case 0x8815A3D8: goto loc_8815A3D8;
		case 0x8815A400: goto loc_8815A400;
		case 0x8815A428: goto loc_8815A428;
		case 0x8815A460: goto loc_8815A460;
		case 0x8815A488: goto loc_8815A488;
		case 0x8815A4B0: goto loc_8815A4B0;
		case 0x8815A4D8: goto loc_8815A4D8;
		case 0x8815A500: goto loc_8815A500;
		case 0x8815A528: goto loc_8815A528;
		case 0x8815A550: goto loc_8815A550;
		case 0x8815A578: goto loc_8815A578;
		case 0x8815A5BC: goto loc_8815A5BC;
		case 0x8815A5E0: goto loc_8815A5E0;
		case 0x8815A604: goto loc_8815A604;
		case 0x8815A628: goto loc_8815A628;
		case 0x8815A64C: goto loc_8815A64C;
		case 0x8815A670: goto loc_8815A670;
		case 0x8815A694: goto loc_8815A694;
		case 0x8815A6B8: goto loc_8815A6B8;
		case 0x8815A6DC: goto loc_8815A6DC;
		case 0x8815A700: goto loc_8815A700;
		case 0x8815A724: goto loc_8815A724;
		case 0x8815A748: goto loc_8815A748;
		case 0x8815A770: goto loc_8815A770;
		case 0x8815A798: goto loc_8815A798;
		case 0x8815A7C0: goto loc_8815A7C0;
		case 0x8815A7E8: goto loc_8815A7E8;
		case 0x8815A810: goto loc_8815A810;
		case 0x8815A838: goto loc_8815A838;
		case 0x8815A860: goto loc_8815A860;
		case 0x8815A888: goto loc_8815A888;
		case 0x8815A8D0: goto loc_8815A8D0;
		case 0x8815A8F8: goto loc_8815A8F8;
		case 0x8815A920: goto loc_8815A920;
		case 0x8815A948: goto loc_8815A948;
		case 0x8815A970: goto loc_8815A970;
		case 0x8815A998: goto loc_8815A998;
		case 0x8815A9C0: goto loc_8815A9C0;
		case 0x8815A9E8: goto loc_8815A9E8;
		case 0x8815AA30: goto loc_8815AA30;
		case 0x8815AA58: goto loc_8815AA58;
		case 0x8815AA80: goto loc_8815AA80;
		case 0x8815AAA8: goto loc_8815AAA8;
		case 0x8815AAE0: goto loc_8815AAE0;
		case 0x8815AB08: goto loc_8815AB08;
		case 0x8815AB30: goto loc_8815AB30;
		case 0x8815AB58: goto loc_8815AB58;
		case 0x8815AB8C: goto loc_8815AB8C;
		case 0x8815ABB0: goto loc_8815ABB0;
		case 0x8815ABD4: goto loc_8815ABD4;
		case 0x8815ABF8: goto loc_8815ABF8;
		case 0x8815AC1C: goto loc_8815AC1C;
		case 0x8815AC40: goto loc_8815AC40;
		case 0x8815AC64: goto loc_8815AC64;
		case 0x8815AC88: goto loc_8815AC88;
		case 0x8815ACAC: goto loc_8815ACAC;
		case 0x8815ACD0: goto loc_8815ACD0;
		case 0x8815ACF4: goto loc_8815ACF4;
		case 0x8815AD18: goto loc_8815AD18;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88159E50;
	__savegprlr_23(ctx, base);
loc_88159E50:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88159E50;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r3)
	ctx.current_instruction = 0x88159E58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3376);
	// addi r4,r3,1992
	ctx.r4.s64 = ctx.r3.s64 + 1992;
	// addi r6,r11,-22512
	ctx.r6.s64 = ctx.r11.s64 + -22512;
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159E70;
	sub_881B5C98(ctx, base);
loc_88159E70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159E7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-26920
	ctx.r6.s64 = ctx.r11.s64 + -26920;
	// addi r4,r31,2004
	ctx.r4.s64 = ctx.r31.s64 + 2004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159E94;
	sub_881B5C98(ctx, base);
loc_88159E94:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159EA0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-16024
	ctx.r6.s64 = ctx.r11.s64 + -16024;
	// addi r4,r31,2120
	ctx.r4.s64 = ctx.r31.s64 + 2120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159EB8;
	sub_881B5C98(ctx, base);
loc_88159EB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159EC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-16544
	ctx.r6.s64 = ctx.r11.s64 + -16544;
	// addi r4,r31,2132
	ctx.r4.s64 = ctx.r31.s64 + 2132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159EDC;
	sub_881B5C98(ctx, base);
loc_88159EDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159EE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-18104
	ctx.r6.s64 = ctx.r11.s64 + -18104;
	// addi r4,r31,2148
	ctx.r4.s64 = ctx.r31.s64 + 2148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F00;
	sub_881B5C98(ctx, base);
loc_88159F00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159F0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-17584
	ctx.r6.s64 = ctx.r11.s64 + -17584;
	// addi r4,r31,2160
	ctx.r4.s64 = ctx.r31.s64 + 2160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F24;
	sub_881B5C98(ctx, base);
loc_88159F24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159F30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-17064
	ctx.r6.s64 = ctx.r11.s64 + -17064;
	// addi r4,r31,2172
	ctx.r4.s64 = ctx.r31.s64 + 2172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F48;
	sub_881B5C98(ctx, base);
loc_88159F48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159F54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,2284
	ctx.r30.s64 = ctx.r31.s64 + 2284;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13808
	ctx.r6.s64 = ctx.r11.s64 + -13808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F70;
	sub_881B5C98(ctx, base);
loc_88159F70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159F7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,2296
	ctx.r27.s64 = ctx.r31.s64 + 2296;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13544
	ctx.r6.s64 = ctx.r11.s64 + -13544;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159F98;
	sub_881B5C98(ctx, base);
loc_88159F98:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159FA4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,2308
	ctx.r28.s64 = ctx.r31.s64 + 2308;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13280
	ctx.r6.s64 = ctx.r11.s64 + -13280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159FC0;
	sub_881B5C98(ctx, base);
loc_88159FC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x88159FCC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,2320
	ctx.r29.s64 = ctx.r31.s64 + 2320;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-13016
	ctx.r6.s64 = ctx.r11.s64 + -13016;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x88159FE8;
	sub_881B5C98(ctx, base);
loc_88159FE8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,2384(r31)
	ctx.current_instruction = 0x88159FF0;
	REX_STORE_U32(ctx.r31.u32 + 2384, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,2388(r31)
	ctx.current_instruction = 0x88159FF8;
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r27.u32);
	// addi r30,r31,2332
	ctx.r30.s64 = ctx.r31.s64 + 2332;
	// stw r28,2392(r31)
	ctx.current_instruction = 0x8815A000;
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r28.u32);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r29,2396(r31)
	ctx.current_instruction = 0x8815A008;
	REX_STORE_U32(ctx.r31.u32 + 2396, ctx.r29.u32);
	// addi r6,r11,-12752
	ctx.r6.s64 = ctx.r11.s64 + -12752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A014;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A020;
	sub_881B5C98(ctx, base);
loc_8815A020:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A02C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,2344
	ctx.r27.s64 = ctx.r31.s64 + 2344;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12456
	ctx.r6.s64 = ctx.r11.s64 + -12456;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A048;
	sub_881B5C98(ctx, base);
loc_8815A048:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A054;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,2356
	ctx.r28.s64 = ctx.r31.s64 + 2356;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12160
	ctx.r6.s64 = ctx.r11.s64 + -12160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A070;
	sub_881B5C98(ctx, base);
loc_8815A070:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A07C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,2368
	ctx.r29.s64 = ctx.r31.s64 + 2368;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-11864
	ctx.r6.s64 = ctx.r11.s64 + -11864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A098;
	sub_881B5C98(ctx, base);
loc_8815A098:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lwz r11,22304(r31)
	ctx.current_instruction = 0x8815A0A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22304);
	// stw r30,2400(r31)
	ctx.current_instruction = 0x8815A0A4;
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,2404(r31)
	ctx.current_instruction = 0x8815A0AC;
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r27.u32);
	// stw r28,2408(r31)
	ctx.current_instruction = 0x8815A0B0;
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r28.u32);
	// stw r29,2412(r31)
	ctx.current_instruction = 0x8815A0B4;
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r29.u32);
	// beq cr6,0x8815a16c
	if (ctx.cr6.eq) goto loc_8815A16C;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A0C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,22360
	ctx.r27.s64 = ctx.r31.s64 + 22360;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-11568
	ctx.r6.s64 = ctx.r11.s64 + -11568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A0DC;
	sub_881B5C98(ctx, base);
loc_8815A0DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A0E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,22372
	ctx.r28.s64 = ctx.r31.s64 + 22372;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-11264
	ctx.r6.s64 = ctx.r11.s64 + -11264;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A104;
	sub_881B5C98(ctx, base);
loc_8815A104:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A110;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,22384
	ctx.r29.s64 = ctx.r31.s64 + 22384;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10960
	ctx.r6.s64 = ctx.r11.s64 + -10960;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A12C;
	sub_881B5C98(ctx, base);
loc_8815A12C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A138;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,22396
	ctx.r30.s64 = ctx.r31.s64 + 22396;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10656
	ctx.r6.s64 = ctx.r11.s64 + -10656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A154;
	sub_881B5C98(ctx, base);
loc_8815A154:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r27,2400(r31)
	ctx.current_instruction = 0x8815A15C;
	REX_STORE_U32(ctx.r31.u32 + 2400, ctx.r27.u32);
	// stw r28,2404(r31)
	ctx.current_instruction = 0x8815A160;
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r28.u32);
	// stw r29,2408(r31)
	ctx.current_instruction = 0x8815A164;
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r29.u32);
	// stw r30,2412(r31)
	ctx.current_instruction = 0x8815A168;
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r30.u32);
loc_8815A16C:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A170;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-10352
	ctx.r6.s64 = ctx.r11.s64 + -10352;
	// addi r4,r31,22348
	ctx.r4.s64 = ctx.r31.s64 + 22348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A188;
	sub_881B5C98(ctx, base);
loc_8815A188:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A194;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10160
	ctx.r6.s64 = ctx.r11.s64 + -10160;
	// addi r4,r31,2444
	ctx.r4.s64 = ctx.r31.s64 + 2444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A1AC;
	sub_881B5C98(ctx, base);
loc_8815A1AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A1B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10224
	ctx.r6.s64 = ctx.r11.s64 + -10224;
	// addi r4,r31,2456
	ctx.r4.s64 = ctx.r31.s64 + 2456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A1D0;
	sub_881B5C98(ctx, base);
loc_8815A1D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A1DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-10288
	ctx.r6.s64 = ctx.r11.s64 + -10288;
	// addi r4,r31,2468
	ctx.r4.s64 = ctx.r31.s64 + 2468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A1F4;
	sub_881B5C98(ctx, base);
loc_8815A1F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A200;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-10096
	ctx.r6.s64 = ctx.r11.s64 + -10096;
	// addi r4,r31,2484
	ctx.r4.s64 = ctx.r31.s64 + 2484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A218;
	sub_881B5C98(ctx, base);
loc_8815A218:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A224;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-10024
	ctx.r6.s64 = ctx.r11.s64 + -10024;
	// addi r4,r31,2496
	ctx.r4.s64 = ctx.r31.s64 + 2496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A23C;
	sub_881B5C98(ctx, base);
loc_8815A23C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A248;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,-9952
	ctx.r6.s64 = ctx.r11.s64 + -9952;
	// addi r4,r31,2508
	ctx.r4.s64 = ctx.r31.s64 + 2508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A260;
	sub_881B5C98(ctx, base);
loc_8815A260:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A26C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9884
	ctx.r6.s64 = ctx.r11.s64 + -9884;
	// addi r4,r31,2524
	ctx.r4.s64 = ctx.r31.s64 + 2524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A284;
	sub_881B5C98(ctx, base);
loc_8815A284:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A290;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9848
	ctx.r6.s64 = ctx.r11.s64 + -9848;
	// addi r4,r31,2536
	ctx.r4.s64 = ctx.r31.s64 + 2536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A2A8;
	sub_881B5C98(ctx, base);
loc_8815A2A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A2B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,-9812
	ctx.r6.s64 = ctx.r11.s64 + -9812;
	// addi r4,r31,2548
	ctx.r4.s64 = ctx.r31.s64 + 2548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A2CC;
	sub_881B5C98(ctx, base);
loc_8815A2CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x8815A2D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8815ab70
	if (!ctx.cr6.eq) goto loc_8815AB70;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A2E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,20788
	ctx.r30.s64 = ctx.r31.s64 + 20788;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-1512
	ctx.r6.s64 = ctx.r11.s64 + -1512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A300;
	sub_881B5C98(ctx, base);
loc_8815A300:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A30C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,20800
	ctx.r27.s64 = ctx.r31.s64 + 20800;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-1448
	ctx.r6.s64 = ctx.r11.s64 + -1448;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A328;
	sub_881B5C98(ctx, base);
loc_8815A328:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A334;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,20812
	ctx.r28.s64 = ctx.r31.s64 + 20812;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-1384
	ctx.r6.s64 = ctx.r11.s64 + -1384;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A350;
	sub_881B5C98(ctx, base);
loc_8815A350:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A35C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,20824
	ctx.r29.s64 = ctx.r31.s64 + 20824;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1320
	ctx.r6.s64 = ctx.r11.s64 + -1320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A378;
	sub_881B5C98(ctx, base);
loc_8815A378:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20772(r31)
	ctx.current_instruction = 0x8815A380;
	REX_STORE_U32(ctx.r31.u32 + 20772, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,20776(r31)
	ctx.current_instruction = 0x8815A388;
	REX_STORE_U32(ctx.r31.u32 + 20776, ctx.r27.u32);
	// addi r30,r31,20852
	ctx.r30.s64 = ctx.r31.s64 + 20852;
	// stw r28,20780(r31)
	ctx.current_instruction = 0x8815A390;
	REX_STORE_U32(ctx.r31.u32 + 20780, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20784(r31)
	ctx.current_instruction = 0x8815A398;
	REX_STORE_U32(ctx.r31.u32 + 20784, ctx.r29.u32);
	// addi r6,r11,-1256
	ctx.r6.s64 = ctx.r11.s64 + -1256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A3A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A3B0;
	sub_881B5C98(ctx, base);
loc_8815A3B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A3BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,20864
	ctx.r27.s64 = ctx.r31.s64 + 20864;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1216
	ctx.r6.s64 = ctx.r11.s64 + -1216;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A3D8;
	sub_881B5C98(ctx, base);
loc_8815A3D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A3E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,20876
	ctx.r28.s64 = ctx.r31.s64 + 20876;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1176
	ctx.r6.s64 = ctx.r11.s64 + -1176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A400;
	sub_881B5C98(ctx, base);
loc_8815A400:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A40C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,20888
	ctx.r29.s64 = ctx.r31.s64 + 20888;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1136
	ctx.r6.s64 = ctx.r11.s64 + -1136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A428;
	sub_881B5C98(ctx, base);
loc_8815A428:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20836(r31)
	ctx.current_instruction = 0x8815A430;
	REX_STORE_U32(ctx.r31.u32 + 20836, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,20840(r31)
	ctx.current_instruction = 0x8815A438;
	REX_STORE_U32(ctx.r31.u32 + 20840, ctx.r27.u32);
	// addi r26,r31,21008
	ctx.r26.s64 = ctx.r31.s64 + 21008;
	// stw r28,20844(r31)
	ctx.current_instruction = 0x8815A440;
	REX_STORE_U32(ctx.r31.u32 + 20844, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20848(r31)
	ctx.current_instruction = 0x8815A448;
	REX_STORE_U32(ctx.r31.u32 + 20848, ctx.r29.u32);
	// addi r6,r11,-1096
	ctx.r6.s64 = ctx.r11.s64 + -1096;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A454;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A460;
	sub_881B5C98(ctx, base);
loc_8815A460:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A46C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r23,r31,21020
	ctx.r23.s64 = ctx.r31.s64 + 21020;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-840
	ctx.r6.s64 = ctx.r11.s64 + -840;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A488;
	sub_881B5C98(ctx, base);
loc_8815A488:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A494;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r24,r31,21032
	ctx.r24.s64 = ctx.r31.s64 + 21032;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-584
	ctx.r6.s64 = ctx.r11.s64 + -584;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A4B0;
	sub_881B5C98(ctx, base);
loc_8815A4B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A4BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r25,r31,21044
	ctx.r25.s64 = ctx.r31.s64 + 21044;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-328
	ctx.r6.s64 = ctx.r11.s64 + -328;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A4D8;
	sub_881B5C98(ctx, base);
loc_8815A4D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A4E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21056
	ctx.r27.s64 = ctx.r31.s64 + 21056;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-72
	ctx.r6.s64 = ctx.r11.s64 + -72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A500;
	sub_881B5C98(ctx, base);
loc_8815A500:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A50C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21068
	ctx.r28.s64 = ctx.r31.s64 + 21068;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,184
	ctx.r6.s64 = ctx.r11.s64 + 184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A528;
	sub_881B5C98(ctx, base);
loc_8815A528:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A534;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21080
	ctx.r29.s64 = ctx.r31.s64 + 21080;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,440
	ctx.r6.s64 = ctx.r11.s64 + 440;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A550;
	sub_881B5C98(ctx, base);
loc_8815A550:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A55C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,21092
	ctx.r30.s64 = ctx.r31.s64 + 21092;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,696
	ctx.r6.s64 = ctx.r11.s64 + 696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A578;
	sub_881B5C98(ctx, base);
loc_8815A578:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r26,21720(r31)
	ctx.current_instruction = 0x8815A580;
	REX_STORE_U32(ctx.r31.u32 + 21720, ctx.r26.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r23,21724(r31)
	ctx.current_instruction = 0x8815A588;
	REX_STORE_U32(ctx.r31.u32 + 21724, ctx.r23.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r24,21728(r31)
	ctx.current_instruction = 0x8815A590;
	REX_STORE_U32(ctx.r31.u32 + 21728, ctx.r24.u32);
	// addi r6,r11,952
	ctx.r6.s64 = ctx.r11.s64 + 952;
	// stw r25,21732(r31)
	ctx.current_instruction = 0x8815A598;
	REX_STORE_U32(ctx.r31.u32 + 21732, ctx.r25.u32);
	// addi r4,r31,21104
	ctx.r4.s64 = ctx.r31.s64 + 21104;
	// stw r27,21736(r31)
	ctx.current_instruction = 0x8815A5A0;
	REX_STORE_U32(ctx.r31.u32 + 21736, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,21740(r31)
	ctx.current_instruction = 0x8815A5A8;
	REX_STORE_U32(ctx.r31.u32 + 21740, ctx.r28.u32);
	// stw r29,21744(r31)
	ctx.current_instruction = 0x8815A5AC;
	REX_STORE_U32(ctx.r31.u32 + 21744, ctx.r29.u32);
	// stw r30,21748(r31)
	ctx.current_instruction = 0x8815A5B0;
	REX_STORE_U32(ctx.r31.u32 + 21748, ctx.r30.u32);
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A5B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b5c98
	ctx.lr = 0x8815A5BC;
	sub_881B5C98(ctx, base);
loc_8815A5BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A5C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,1464
	ctx.r6.s64 = ctx.r11.s64 + 1464;
	// addi r4,r31,21116
	ctx.r4.s64 = ctx.r31.s64 + 21116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A5E0;
	sub_881B5C98(ctx, base);
loc_8815A5E0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A5EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,1976
	ctx.r6.s64 = ctx.r11.s64 + 1976;
	// addi r4,r31,21128
	ctx.r4.s64 = ctx.r31.s64 + 21128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A604;
	sub_881B5C98(ctx, base);
loc_8815A604:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A610;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,2488
	ctx.r6.s64 = ctx.r11.s64 + 2488;
	// addi r4,r31,21140
	ctx.r4.s64 = ctx.r31.s64 + 21140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A628;
	sub_881B5C98(ctx, base);
loc_8815A628:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A634;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,3000
	ctx.r6.s64 = ctx.r11.s64 + 3000;
	// addi r4,r31,21152
	ctx.r4.s64 = ctx.r31.s64 + 21152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A64C;
	sub_881B5C98(ctx, base);
loc_8815A64C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A658;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,3512
	ctx.r6.s64 = ctx.r11.s64 + 3512;
	// addi r4,r31,21164
	ctx.r4.s64 = ctx.r31.s64 + 21164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A670;
	sub_881B5C98(ctx, base);
loc_8815A670:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A67C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4024
	ctx.r6.s64 = ctx.r11.s64 + 4024;
	// addi r4,r31,21176
	ctx.r4.s64 = ctx.r31.s64 + 21176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A694;
	sub_881B5C98(ctx, base);
loc_8815A694:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A6A0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,4536
	ctx.r6.s64 = ctx.r11.s64 + 4536;
	// addi r4,r31,21188
	ctx.r4.s64 = ctx.r31.s64 + 21188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A6B8;
	sub_881B5C98(ctx, base);
loc_8815A6B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A6C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5048
	ctx.r6.s64 = ctx.r11.s64 + 5048;
	// addi r4,r31,21200
	ctx.r4.s64 = ctx.r31.s64 + 21200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A6DC;
	sub_881B5C98(ctx, base);
loc_8815A6DC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A6E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5344
	ctx.r6.s64 = ctx.r11.s64 + 5344;
	// addi r4,r31,21212
	ctx.r4.s64 = ctx.r31.s64 + 21212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A700;
	sub_881B5C98(ctx, base);
loc_8815A700:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A70C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,5640
	ctx.r6.s64 = ctx.r11.s64 + 5640;
	// addi r4,r31,21224
	ctx.r4.s64 = ctx.r31.s64 + 21224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A724;
	sub_881B5C98(ctx, base);
loc_8815A724:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A730;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5936
	ctx.r6.s64 = ctx.r11.s64 + 5936;
	// addi r4,r31,21236
	ctx.r4.s64 = ctx.r31.s64 + 21236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A748;
	sub_881B5C98(ctx, base);
loc_8815A748:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A754;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r30,r31,21248
	ctx.r30.s64 = ctx.r31.s64 + 21248;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2308
	ctx.r6.s64 = ctx.r11.s64 + -2308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A770;
	sub_881B5C98(ctx, base);
loc_8815A770:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A77C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r23,r31,21260
	ctx.r23.s64 = ctx.r31.s64 + 21260;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2212
	ctx.r6.s64 = ctx.r11.s64 + -2212;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A798;
	sub_881B5C98(ctx, base);
loc_8815A798:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A7A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r24,r31,21272
	ctx.r24.s64 = ctx.r31.s64 + 21272;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2116
	ctx.r6.s64 = ctx.r11.s64 + -2116;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A7C0;
	sub_881B5C98(ctx, base);
loc_8815A7C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A7CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r25,r31,21284
	ctx.r25.s64 = ctx.r31.s64 + 21284;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2020
	ctx.r6.s64 = ctx.r11.s64 + -2020;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A7E8;
	sub_881B5C98(ctx, base);
loc_8815A7E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A7F4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,21296
	ctx.r26.s64 = ctx.r31.s64 + 21296;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1992
	ctx.r6.s64 = ctx.r11.s64 + -1992;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A810;
	sub_881B5C98(ctx, base);
loc_8815A810:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A81C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21308
	ctx.r27.s64 = ctx.r31.s64 + 21308;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1964
	ctx.r6.s64 = ctx.r11.s64 + -1964;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A838;
	sub_881B5C98(ctx, base);
loc_8815A838:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A844;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21320
	ctx.r28.s64 = ctx.r31.s64 + 21320;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1936
	ctx.r6.s64 = ctx.r11.s64 + -1936;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A860;
	sub_881B5C98(ctx, base);
loc_8815A860:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A86C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21332
	ctx.r29.s64 = ctx.r31.s64 + 21332;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1908
	ctx.r6.s64 = ctx.r11.s64 + -1908;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A888;
	sub_881B5C98(ctx, base);
loc_8815A888:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20936(r31)
	ctx.current_instruction = 0x8815A890;
	REX_STORE_U32(ctx.r31.u32 + 20936, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r23,20940(r31)
	ctx.current_instruction = 0x8815A898;
	REX_STORE_U32(ctx.r31.u32 + 20940, ctx.r23.u32);
	// addi r30,r31,21344
	ctx.r30.s64 = ctx.r31.s64 + 21344;
	// stw r24,20944(r31)
	ctx.current_instruction = 0x8815A8A0;
	REX_STORE_U32(ctx.r31.u32 + 20944, ctx.r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,20948(r31)
	ctx.current_instruction = 0x8815A8A8;
	REX_STORE_U32(ctx.r31.u32 + 20948, ctx.r25.u32);
	// addi r6,r11,-1880
	ctx.r6.s64 = ctx.r11.s64 + -1880;
	// stw r26,20952(r31)
	ctx.current_instruction = 0x8815A8B0;
	REX_STORE_U32(ctx.r31.u32 + 20952, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,20956(r31)
	ctx.current_instruction = 0x8815A8B8;
	REX_STORE_U32(ctx.r31.u32 + 20956, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20960(r31)
	ctx.current_instruction = 0x8815A8C0;
	REX_STORE_U32(ctx.r31.u32 + 20960, ctx.r28.u32);
	// stw r29,20964(r31)
	ctx.current_instruction = 0x8815A8C4;
	REX_STORE_U32(ctx.r31.u32 + 20964, ctx.r29.u32);
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A8C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b5c98
	ctx.lr = 0x8815A8D0;
	sub_881B5C98(ctx, base);
loc_8815A8D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A8DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r23,r31,21356
	ctx.r23.s64 = ctx.r31.s64 + 21356;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1844
	ctx.r6.s64 = ctx.r11.s64 + -1844;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A8F8;
	sub_881B5C98(ctx, base);
loc_8815A8F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A904;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r24,r31,21368
	ctx.r24.s64 = ctx.r31.s64 + 21368;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1808
	ctx.r6.s64 = ctx.r11.s64 + -1808;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A920;
	sub_881B5C98(ctx, base);
loc_8815A920:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A92C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r25,r31,21380
	ctx.r25.s64 = ctx.r31.s64 + 21380;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1772
	ctx.r6.s64 = ctx.r11.s64 + -1772;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A948;
	sub_881B5C98(ctx, base);
loc_8815A948:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A954;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r26,r31,21392
	ctx.r26.s64 = ctx.r31.s64 + 21392;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1736
	ctx.r6.s64 = ctx.r11.s64 + -1736;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A970;
	sub_881B5C98(ctx, base);
loc_8815A970:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A97C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21404
	ctx.r27.s64 = ctx.r31.s64 + 21404;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1700
	ctx.r6.s64 = ctx.r11.s64 + -1700;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A998;
	sub_881B5C98(ctx, base);
loc_8815A998:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A9A4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21416
	ctx.r28.s64 = ctx.r31.s64 + 21416;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1664
	ctx.r6.s64 = ctx.r11.s64 + -1664;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A9C0;
	sub_881B5C98(ctx, base);
loc_8815A9C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815A9CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21428
	ctx.r29.s64 = ctx.r31.s64 + 21428;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1628
	ctx.r6.s64 = ctx.r11.s64 + -1628;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815A9E8;
	sub_881B5C98(ctx, base);
loc_8815A9E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20904(r31)
	ctx.current_instruction = 0x8815A9F0;
	REX_STORE_U32(ctx.r31.u32 + 20904, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r23,20908(r31)
	ctx.current_instruction = 0x8815A9F8;
	REX_STORE_U32(ctx.r31.u32 + 20908, ctx.r23.u32);
	// addi r30,r31,21440
	ctx.r30.s64 = ctx.r31.s64 + 21440;
	// stw r24,20912(r31)
	ctx.current_instruction = 0x8815AA00;
	REX_STORE_U32(ctx.r31.u32 + 20912, ctx.r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,20916(r31)
	ctx.current_instruction = 0x8815AA08;
	REX_STORE_U32(ctx.r31.u32 + 20916, ctx.r25.u32);
	// addi r6,r11,-2376
	ctx.r6.s64 = ctx.r11.s64 + -2376;
	// stw r26,20920(r31)
	ctx.current_instruction = 0x8815AA10;
	REX_STORE_U32(ctx.r31.u32 + 20920, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,20924(r31)
	ctx.current_instruction = 0x8815AA18;
	REX_STORE_U32(ctx.r31.u32 + 20924, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20928(r31)
	ctx.current_instruction = 0x8815AA20;
	REX_STORE_U32(ctx.r31.u32 + 20928, ctx.r28.u32);
	// stw r29,20932(r31)
	ctx.current_instruction = 0x8815AA24;
	REX_STORE_U32(ctx.r31.u32 + 20932, ctx.r29.u32);
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AA28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// bl 0x881b5c98
	ctx.lr = 0x8815AA30;
	sub_881B5C98(ctx, base);
loc_8815AA30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AA3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21452
	ctx.r27.s64 = ctx.r31.s64 + 21452;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2280
	ctx.r6.s64 = ctx.r11.s64 + -2280;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AA58;
	sub_881B5C98(ctx, base);
loc_8815AA58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AA64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21464
	ctx.r28.s64 = ctx.r31.s64 + 21464;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2184
	ctx.r6.s64 = ctx.r11.s64 + -2184;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AA80;
	sub_881B5C98(ctx, base);
loc_8815AA80:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AA8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21476
	ctx.r29.s64 = ctx.r31.s64 + 21476;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-2088
	ctx.r6.s64 = ctx.r11.s64 + -2088;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AAA8;
	sub_881B5C98(ctx, base);
loc_8815AAA8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20972(r31)
	ctx.current_instruction = 0x8815AAB0;
	REX_STORE_U32(ctx.r31.u32 + 20972, ctx.r30.u32);
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// stw r27,20976(r31)
	ctx.current_instruction = 0x8815AAB8;
	REX_STORE_U32(ctx.r31.u32 + 20976, ctx.r27.u32);
	// addi r30,r31,21488
	ctx.r30.s64 = ctx.r31.s64 + 21488;
	// stw r28,20980(r31)
	ctx.current_instruction = 0x8815AAC0;
	REX_STORE_U32(ctx.r31.u32 + 20980, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20984(r31)
	ctx.current_instruction = 0x8815AAC8;
	REX_STORE_U32(ctx.r31.u32 + 20984, ctx.r29.u32);
	// addi r6,r11,-1592
	ctx.r6.s64 = ctx.r11.s64 + -1592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AAD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AAE0;
	sub_881B5C98(ctx, base);
loc_8815AAE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AAEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r27,r31,21500
	ctx.r27.s64 = ctx.r31.s64 + 21500;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1572
	ctx.r6.s64 = ctx.r11.s64 + -1572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB08;
	sub_881B5C98(ctx, base);
loc_8815AB08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AB14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r28,r31,21512
	ctx.r28.s64 = ctx.r31.s64 + 21512;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1552
	ctx.r6.s64 = ctx.r11.s64 + -1552;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB30;
	sub_881B5C98(ctx, base);
loc_8815AB30:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AB3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// addi r29,r31,21524
	ctx.r29.s64 = ctx.r31.s64 + 21524;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1532
	ctx.r6.s64 = ctx.r11.s64 + -1532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB58;
	sub_881B5C98(ctx, base);
loc_8815AB58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// stw r30,20992(r31)
	ctx.current_instruction = 0x8815AB60;
	REX_STORE_U32(ctx.r31.u32 + 20992, ctx.r30.u32);
	// stw r27,20996(r31)
	ctx.current_instruction = 0x8815AB64;
	REX_STORE_U32(ctx.r31.u32 + 20996, ctx.r27.u32);
	// stw r28,21000(r31)
	ctx.current_instruction = 0x8815AB68;
	REX_STORE_U32(ctx.r31.u32 + 21000, ctx.r28.u32);
	// stw r29,21004(r31)
	ctx.current_instruction = 0x8815AB6C;
	REX_STORE_U32(ctx.r31.u32 + 21004, ctx.r29.u32);
loc_8815AB70:
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AB74;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-15760
	ctx.r6.s64 = ctx.r11.s64 + -15760;
	// addi r4,r31,2044
	ctx.r4.s64 = ctx.r31.s64 + 2044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AB8C;
	sub_881B5C98(ctx, base);
loc_8815AB8C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AB98;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-15272
	ctx.r6.s64 = ctx.r11.s64 + -15272;
	// addi r4,r31,2056
	ctx.r4.s64 = ctx.r31.s64 + 2056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ABB0;
	sub_881B5C98(ctx, base);
loc_8815ABB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815ABBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-14784
	ctx.r6.s64 = ctx.r11.s64 + -14784;
	// addi r4,r31,2068
	ctx.r4.s64 = ctx.r31.s64 + 2068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ABD4;
	sub_881B5C98(ctx, base);
loc_8815ABD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815ABE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-14296
	ctx.r6.s64 = ctx.r11.s64 + -14296;
	// addi r4,r31,2080
	ctx.r4.s64 = ctx.r31.s64 + 2080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ABF8;
	sub_881B5C98(ctx, base);
loc_8815ABF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AC04;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-31680
	ctx.r6.s64 = ctx.r11.s64 + -31680;
	// addi r4,r31,2184
	ctx.r4.s64 = ctx.r31.s64 + 2184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC1C;
	sub_881B5C98(ctx, base);
loc_8815AC1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AC28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-31000
	ctx.r6.s64 = ctx.r11.s64 + -31000;
	// addi r4,r31,2196
	ctx.r4.s64 = ctx.r31.s64 + 2196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC40;
	sub_881B5C98(ctx, base);
loc_8815AC40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AC4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-30248
	ctx.r6.s64 = ctx.r11.s64 + -30248;
	// addi r4,r31,2208
	ctx.r4.s64 = ctx.r31.s64 + 2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC64;
	sub_881B5C98(ctx, base);
loc_8815AC64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AC70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-29648
	ctx.r6.s64 = ctx.r11.s64 + -29648;
	// addi r4,r31,2220
	ctx.r4.s64 = ctx.r31.s64 + 2220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AC88;
	sub_881B5C98(ctx, base);
loc_8815AC88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AC94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-29112
	ctx.r6.s64 = ctx.r11.s64 + -29112;
	// addi r4,r31,2232
	ctx.r4.s64 = ctx.r31.s64 + 2232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ACAC;
	sub_881B5C98(ctx, base);
loc_8815ACAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815ACB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-28696
	ctx.r6.s64 = ctx.r11.s64 + -28696;
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ACD0;
	sub_881B5C98(ctx, base);
loc_8815ACD0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815ACDC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-28280
	ctx.r6.s64 = ctx.r11.s64 + -28280;
	// addi r4,r31,2432
	ctx.r4.s64 = ctx.r31.s64 + 2432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815ACF4;
	sub_881B5C98(ctx, base);
loc_8815ACF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8815ad20
	if (!ctx.cr6.eq) goto loc_8815AD20;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// lwz r5,3376(r31)
	ctx.current_instruction = 0x8815AD00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-27576
	ctx.r6.s64 = ctx.r11.s64 + -27576;
	// addi r4,r31,2256
	ctx.r4.s64 = ctx.r31.s64 + 2256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881b5c98
	ctx.lr = 0x8815AD18;
	sub_881B5C98(ctx, base);
loc_8815AD18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815ad2c
	if (ctx.cr6.eq) goto loc_8815AD2C;
loc_8815AD20:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_8815AD2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881810E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881810E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881810E0) {
			switch (rex_dispatch_address) {
				case 0x881810E8:
				case 0x8818117C:
				case 0x88181CD0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881810E0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881810E8: goto loc_881810E8;
		case 0x8818117C: goto loc_8818117C;
		case 0x88181CD0: goto loc_88181CD0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881810E8;
	__savegprlr_23(ctx, base);
loc_881810E8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x881810E8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3792(r3)
	ctx.current_instruction = 0x881810EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,3812(r3)
	ctx.current_instruction = 0x881810F4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3812);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181114
	if (ctx.cr6.eq) goto loc_88181114;
	// lwz r10,224(r3)
	ctx.current_instruction = 0x88181108;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181118
	goto loc_88181118;
loc_88181114:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_88181118:
	// lwz r11,3796(r31)
	ctx.current_instruction = 0x88181118;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181130
	if (ctx.cr6.eq) goto loc_88181130;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88181124;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181134
	goto loc_88181134;
loc_88181130:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_88181134:
	// lwz r11,3820(r31)
	ctx.current_instruction = 0x88181134;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3820);
	// lwz r26,3828(r31)
	ctx.current_instruction = 0x88181138;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181150
	if (ctx.cr6.eq) goto loc_88181150;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88181144;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181154
	goto loc_88181154;
loc_88181150:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_88181154:
	// lwz r11,3824(r31)
	ctx.current_instruction = 0x88181154;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818116c
	if (ctx.cr6.eq) goto loc_8818116C;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88181160;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181170
	goto loc_88181170;
loc_8818116C:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_88181170:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881809d0
	ctx.lr = 0x8818117C;
	sub_881809D0(ctx, base);
loc_8818117C:
	// lwz r6,364(r31)
	ctx.current_instruction = 0x8818117C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// addi r8,r31,2940
	ctx.r8.s64 = ctx.r31.s64 + 2940;
	// addi r7,r31,2952
	ctx.r7.s64 = ctx.r31.s64 + 2952;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r6,8(r30)
	ctx.current_instruction = 0x8818118C;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// lwz r9,368(r31)
	ctx.current_instruction = 0x88181190;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r11,20688(r31)
	ctx.current_instruction = 0x88181194;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,12(r30)
	ctx.current_instruction = 0x881811A8;
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// lwz r9,372(r31)
	ctx.current_instruction = 0x881811AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r11,20688(r31)
	ctx.current_instruction = 0x881811B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,16(r30)
	ctx.current_instruction = 0x881811C4;
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,376(r31)
	ctx.current_instruction = 0x881811C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881811CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// mulli r10,r10,504
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(504));
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,20(r30)
	ctx.current_instruction = 0x881811D8;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r11,252(r31)
	ctx.current_instruction = 0x881811DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r6,248(r31)
	ctx.current_instruction = 0x881811E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// stb r5,24(r30)
	ctx.current_instruction = 0x881811F0;
	REX_STORE_U8(ctx.r30.u32 + 24, ctx.r5.u8);
	// lwz r3,352(r31)
	ctx.current_instruction = 0x881811F4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// stb r3,25(r30)
	ctx.current_instruction = 0x881811F8;
	REX_STORE_U8(ctx.r30.u32 + 25, ctx.r3.u8);
	// lwz r10,348(r31)
	ctx.current_instruction = 0x881811FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stb r10,26(r30)
	ctx.current_instruction = 0x88181200;
	REX_STORE_U8(ctx.r30.u32 + 26, ctx.r10.u8);
	// lwz r6,2380(r31)
	ctx.current_instruction = 0x88181204;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// stw r6,336(r30)
	ctx.current_instruction = 0x88181208;
	REX_STORE_U32(ctx.r30.u32 + 336, ctx.r6.u32);
	// lwz r5,20968(r31)
	ctx.current_instruction = 0x8818120C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20968);
	// stw r5,340(r30)
	ctx.current_instruction = 0x88181210;
	REX_STORE_U32(ctx.r30.u32 + 340, ctx.r5.u32);
	// lwz r4,20988(r31)
	ctx.current_instruction = 0x88181214;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20988);
	// stw r4,344(r30)
	ctx.current_instruction = 0x88181218;
	REX_STORE_U32(ctx.r30.u32 + 344, ctx.r4.u32);
	// lwz r3,284(r31)
	ctx.current_instruction = 0x8818121C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// stb r3,27(r30)
	ctx.current_instruction = 0x88181220;
	REX_STORE_U8(ctx.r30.u32 + 27, ctx.r3.u8);
	// lwz r10,396(r31)
	ctx.current_instruction = 0x88181224;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// stb r10,28(r30)
	ctx.current_instruction = 0x88181228;
	REX_STORE_U8(ctx.r30.u32 + 28, ctx.r10.u8);
	// lwz r6,332(r31)
	ctx.current_instruction = 0x8818122C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// stb r6,29(r30)
	ctx.current_instruction = 0x88181230;
	REX_STORE_U8(ctx.r30.u32 + 29, ctx.r6.u8);
	// lwz r11,4016(r31)
	ctx.current_instruction = 0x88181234;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stb r5,30(r30)
	ctx.current_instruction = 0x88181254;
	REX_STORE_U8(ctx.r30.u32 + 30, ctx.r5.u8);
	// lwz r4,2144(r31)
	ctx.current_instruction = 0x88181258;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2144);
	// stw r4,356(r30)
	ctx.current_instruction = 0x8818125C;
	REX_STORE_U32(ctx.r30.u32 + 356, ctx.r4.u32);
	// lwz r3,2520(r31)
	ctx.current_instruction = 0x88181260;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// stw r3,360(r30)
	ctx.current_instruction = 0x88181264;
	REX_STORE_U32(ctx.r30.u32 + 360, ctx.r3.u32);
	// sth r23,46(r30)
	ctx.current_instruction = 0x88181268;
	REX_STORE_U16(ctx.r30.u32 + 46, ctx.r23.u16);
	// sth r23,44(r30)
	ctx.current_instruction = 0x8818126C;
	REX_STORE_U16(ctx.r30.u32 + 44, ctx.r23.u16);
	// lwz r11,420(r31)
	ctx.current_instruction = 0x88181270;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 420);
	// sth r11,62(r30)
	ctx.current_instruction = 0x88181274;
	REX_STORE_U16(ctx.r30.u32 + 62, ctx.r11.u16);
	// lwz r9,424(r31)
	ctx.current_instruction = 0x88181278;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// sth r9,64(r30)
	ctx.current_instruction = 0x8818127C;
	REX_STORE_U16(ctx.r30.u32 + 64, ctx.r9.u16);
	// lwz r5,428(r31)
	ctx.current_instruction = 0x88181280;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 428);
	// sth r5,66(r30)
	ctx.current_instruction = 0x88181284;
	REX_STORE_U16(ctx.r30.u32 + 66, ctx.r5.u16);
	// lwz r3,432(r31)
	ctx.current_instruction = 0x88181288;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 432);
	// sth r3,68(r30)
	ctx.current_instruction = 0x8818128C;
	REX_STORE_U16(ctx.r30.u32 + 68, ctx.r3.u16);
	// lwz r10,412(r31)
	ctx.current_instruction = 0x88181290;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// sth r10,70(r30)
	ctx.current_instruction = 0x88181294;
	REX_STORE_U16(ctx.r30.u32 + 70, ctx.r10.u16);
	// lwz r6,416(r31)
	ctx.current_instruction = 0x88181298;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// sth r6,72(r30)
	ctx.current_instruction = 0x8818129C;
	REX_STORE_U16(ctx.r30.u32 + 72, ctx.r6.u16);
	// lwz r4,14836(r31)
	ctx.current_instruction = 0x881812A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14836);
	// stb r4,32(r30)
	ctx.current_instruction = 0x881812A4;
	REX_STORE_U8(ctx.r30.u32 + 32, ctx.r4.u8);
	// lwz r11,1796(r31)
	ctx.current_instruction = 0x881812A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1796);
	// stb r11,31(r30)
	ctx.current_instruction = 0x881812AC;
	REX_STORE_U8(ctx.r30.u32 + 31, ctx.r11.u8);
	// lwz r9,340(r31)
	ctx.current_instruction = 0x881812B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// stb r9,34(r30)
	ctx.current_instruction = 0x881812B4;
	REX_STORE_U8(ctx.r30.u32 + 34, ctx.r9.u8);
	// lwz r5,6608(r31)
	ctx.current_instruction = 0x881812B8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 6608);
	// stw r5,388(r30)
	ctx.current_instruction = 0x881812BC;
	REX_STORE_U32(ctx.r30.u32 + 388, ctx.r5.u32);
	// lwz r4,14816(r31)
	ctx.current_instruction = 0x881812C0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 14816);
	// stw r7,400(r30)
	ctx.current_instruction = 0x881812C4;
	REX_STORE_U32(ctx.r30.u32 + 400, ctx.r7.u32);
	// stw r4,392(r30)
	ctx.current_instruction = 0x881812C8;
	REX_STORE_U32(ctx.r30.u32 + 392, ctx.r4.u32);
	// stw r8,396(r30)
	ctx.current_instruction = 0x881812CC;
	REX_STORE_U32(ctx.r30.u32 + 396, ctx.r8.u32);
	// lwz r3,2916(r31)
	ctx.current_instruction = 0x881812D0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2916);
	// stw r3,404(r30)
	ctx.current_instruction = 0x881812D4;
	REX_STORE_U32(ctx.r30.u32 + 404, ctx.r3.u32);
	// lwz r11,2920(r31)
	ctx.current_instruction = 0x881812D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2920);
	// stw r11,408(r30)
	ctx.current_instruction = 0x881812DC;
	REX_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// lwz r10,2924(r31)
	ctx.current_instruction = 0x881812E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2924);
	// stw r10,412(r30)
	ctx.current_instruction = 0x881812E4;
	REX_STORE_U32(ctx.r30.u32 + 412, ctx.r10.u32);
	// lwz r9,2928(r31)
	ctx.current_instruction = 0x881812E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2928);
	// stw r9,416(r30)
	ctx.current_instruction = 0x881812EC;
	REX_STORE_U32(ctx.r30.u32 + 416, ctx.r9.u32);
	// lwz r8,2932(r31)
	ctx.current_instruction = 0x881812F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// stw r8,420(r30)
	ctx.current_instruction = 0x881812F4;
	REX_STORE_U32(ctx.r30.u32 + 420, ctx.r8.u32);
	// lwz r7,2936(r31)
	ctx.current_instruction = 0x881812F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2936);
	// stw r7,424(r30)
	ctx.current_instruction = 0x881812FC;
	REX_STORE_U32(ctx.r30.u32 + 424, ctx.r7.u32);
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x88181300;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// stw r6,96(r30)
	ctx.current_instruction = 0x88181304;
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r6.u32);
	// lwz r5,3004(r31)
	ctx.current_instruction = 0x88181308;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// stb r5,33(r30)
	ctx.current_instruction = 0x8818130C;
	REX_STORE_U8(ctx.r30.u32 + 33, ctx.r5.u8);
	// lwz r3,1836(r31)
	ctx.current_instruction = 0x88181310;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r3,444(r30)
	ctx.current_instruction = 0x88181314;
	REX_STORE_U32(ctx.r30.u32 + 444, ctx.r3.u32);
	// lwz r11,460(r31)
	ctx.current_instruction = 0x88181318;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// stb r11,48(r30)
	ctx.current_instruction = 0x8818131C;
	REX_STORE_U8(ctx.r30.u32 + 48, ctx.r11.u8);
	// stb r23,49(r30)
	ctx.current_instruction = 0x88181320;
	REX_STORE_U8(ctx.r30.u32 + 49, ctx.r23.u8);
	// lwz r9,3960(r31)
	ctx.current_instruction = 0x88181324;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3960);
	// stb r9,35(r30)
	ctx.current_instruction = 0x88181328;
	REX_STORE_U8(ctx.r30.u32 + 35, ctx.r9.u8);
	// lwz r7,136(r31)
	ctx.current_instruction = 0x8818132C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mulli r6,r7,-6
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(-6));
	// sth r6,368(r30)
	ctx.current_instruction = 0x88181334;
	REX_STORE_U16(ctx.r30.u32 + 368, ctx.r6.u16);
	// lwz r4,136(r31)
	ctx.current_instruction = 0x88181338;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,370(r30)
	ctx.current_instruction = 0x88181340;
	REX_STORE_U16(ctx.r30.u32 + 370, ctx.r3.u16);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88181344;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r9,372(r30)
	ctx.current_instruction = 0x8818134C;
	REX_STORE_U16(ctx.r30.u32 + 372, ctx.r9.u16);
	// lwz r7,136(r31)
	ctx.current_instruction = 0x88181350;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,374(r30)
	ctx.current_instruction = 0x88181358;
	REX_STORE_U16(ctx.r30.u32 + 374, ctx.r6.u16);
	// lwz r4,136(r31)
	ctx.current_instruction = 0x8818135C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// sth r3,364(r30)
	ctx.current_instruction = 0x88181364;
	REX_STORE_U16(ctx.r30.u32 + 364, ctx.r3.u16);
	// lwz r10,136(r31)
	ctx.current_instruction = 0x88181368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// sth r10,366(r30)
	ctx.current_instruction = 0x8818136C;
	REX_STORE_U16(ctx.r30.u32 + 366, ctx.r10.u16);
	// beq cr6,0x8818138c
	if (ctx.cr6.eq) goto loc_8818138C;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181374;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x88181378;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x88181390
	goto loc_88181390;
loc_8818138C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181390:
	// stw r11,464(r30)
	ctx.current_instruction = 0x88181390;
	REX_STORE_U32(ctx.r30.u32 + 464, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x881813a4
	if (!ctx.cr6.eq) goto loc_881813A4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881813A4:
	// stw r10,468(r30)
	ctx.current_instruction = 0x881813A4;
	REX_STORE_U32(ctx.r30.u32 + 468, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881813c0
	if (ctx.cr6.eq) goto loc_881813C0;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881813B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881813c4
	goto loc_881813C4;
loc_881813C0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881813C4:
	// stw r10,472(r30)
	ctx.current_instruction = 0x881813C4;
	REX_STORE_U32(ctx.r30.u32 + 472, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881813e4
	if (ctx.cr6.eq) goto loc_881813E4;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881813D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881813e8
	goto loc_881813E8;
loc_881813E4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881813E8:
	// stw r11,476(r30)
	ctx.current_instruction = 0x881813E8;
	REX_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8818140c
	if (ctx.cr6.eq) goto loc_8818140C;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881813F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881813F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x88181410
	goto loc_88181410;
loc_8818140C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181410:
	// stw r11,480(r30)
	ctx.current_instruction = 0x88181410;
	REX_STORE_U32(ctx.r30.u32 + 480, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88181434
	if (ctx.cr6.eq) goto loc_88181434;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x8818141C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x88181420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x88181438
	goto loc_88181438;
loc_88181434:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181438:
	// stw r11,484(r30)
	ctx.current_instruction = 0x88181438;
	REX_STORE_U32(ctx.r30.u32 + 484, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8818145c
	if (ctx.cr6.eq) goto loc_8818145C;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181444;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x88181448;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x88181460
	goto loc_88181460;
loc_8818145C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181460:
	// stw r11,512(r30)
	ctx.current_instruction = 0x88181460;
	REX_STORE_U32(ctx.r30.u32 + 512, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x88181474
	if (!ctx.cr6.eq) goto loc_88181474;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181474:
	// stw r10,516(r30)
	ctx.current_instruction = 0x88181474;
	REX_STORE_U32(ctx.r30.u32 + 516, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181490
	if (ctx.cr6.eq) goto loc_88181490;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x88181480;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181494
	goto loc_88181494;
loc_88181490:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181494:
	// stw r10,520(r30)
	ctx.current_instruction = 0x88181494;
	REX_STORE_U32(ctx.r30.u32 + 520, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881814b4
	if (ctx.cr6.eq) goto loc_881814B4;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881814A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881814b8
	goto loc_881814B8;
loc_881814B4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881814B8:
	// stw r11,524(r30)
	ctx.current_instruction = 0x881814B8;
	REX_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x881814dc
	if (ctx.cr6.eq) goto loc_881814DC;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881814C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881814C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x881814e0
	goto loc_881814E0;
loc_881814DC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881814E0:
	// stw r11,528(r30)
	ctx.current_instruction = 0x881814E0;
	REX_STORE_U32(ctx.r30.u32 + 528, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x88181504
	if (ctx.cr6.eq) goto loc_88181504;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881814EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881814F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x88181508
	goto loc_88181508;
loc_88181504:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181508:
	// stw r11,532(r30)
	ctx.current_instruction = 0x88181508;
	REX_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// lwz r11,21704(r31)
	ctx.current_instruction = 0x8818150C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881815e8
	if (!ctx.cr6.eq) goto loc_881815E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88181538
	if (ctx.cr6.eq) goto loc_88181538;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x88181524;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8818153c
	goto loc_8818153C;
loc_88181538:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818153C:
	// stw r11,488(r30)
	ctx.current_instruction = 0x8818153C;
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x88181550
	if (!ctx.cr6.eq) goto loc_88181550;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181550:
	// stw r10,492(r30)
	ctx.current_instruction = 0x88181550;
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818156c
	if (ctx.cr6.eq) goto loc_8818156C;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818155C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181570
	goto loc_88181570;
loc_8818156C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181570:
	// stw r10,496(r30)
	ctx.current_instruction = 0x88181570;
	REX_STORE_U32(ctx.r30.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181590
	if (ctx.cr6.eq) goto loc_88181590;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818157C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181594
	goto loc_88181594;
loc_88181590:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181594:
	// stw r11,500(r30)
	ctx.current_instruction = 0x88181594;
	REX_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x881815bc
	if (ctx.cr6.eq) goto loc_881815BC;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881815A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881815A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x881815c0
	goto loc_881815C0;
loc_881815BC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881815C0:
	// stw r11,504(r30)
	ctx.current_instruction = 0x881815C0;
	REX_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x88181740
	if (ctx.cr6.eq) goto loc_88181740;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881815CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881815D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x88181744
	goto loc_88181744;
loc_881815E8:
	// lwz r11,288(r31)
	ctx.current_instruction = 0x881815E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8818164c
	if (!ctx.cr6.eq) goto loc_8818164C;
	// lwz r11,20728(r31)
	ctx.current_instruction = 0x881815F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8818164c
	if (ctx.cr6.eq) goto loc_8818164C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88181618
	if (ctx.cr6.eq) goto loc_88181618;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181608;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8818161c
	goto loc_8818161C;
loc_88181618:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818161C:
	// stw r11,488(r30)
	ctx.current_instruction = 0x8818161C;
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x88181630
	if (!ctx.cr6.eq) goto loc_88181630;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181630:
	// stw r10,492(r30)
	ctx.current_instruction = 0x88181630;
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818156c
	if (ctx.cr6.eq) goto loc_8818156C;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818163C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181570
	goto loc_88181570;
loc_8818164C:
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x8818164C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88181678
	if (ctx.cr6.eq) goto loc_88181678;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181658;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x8818165C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r11,220(r31)
	ctx.current_instruction = 0x88181664;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8818167c
	goto loc_8818167C;
loc_88181678:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818167C:
	// stw r11,488(r30)
	ctx.current_instruction = 0x8818167C;
	REX_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x88181690
	if (!ctx.cr6.eq) goto loc_88181690;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181690:
	// stw r10,492(r30)
	ctx.current_instruction = 0x88181690;
	REX_STORE_U32(ctx.r30.u32 + 492, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881816ac
	if (ctx.cr6.eq) goto loc_881816AC;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818169C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881816b0
	goto loc_881816B0;
loc_881816AC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881816B0:
	// stw r10,496(r30)
	ctx.current_instruction = 0x881816B0;
	REX_STORE_U32(ctx.r30.u32 + 496, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881816d0
	if (ctx.cr6.eq) goto loc_881816D0;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881816BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881816d4
	goto loc_881816D4;
loc_881816D0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881816D4:
	// stw r11,500(r30)
	ctx.current_instruction = 0x881816D4;
	REX_STORE_U32(ctx.r30.u32 + 500, ctx.r11.u32);
	// lwz r11,3780(r31)
	ctx.current_instruction = 0x881816D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181708
	if (ctx.cr6.eq) goto loc_88181708;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881816E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,20688(r31)
	ctx.current_instruction = 0x881816E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x881816F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8818170c
	goto loc_8818170C;
loc_88181708:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818170C:
	// stw r11,504(r30)
	ctx.current_instruction = 0x8818170C;
	REX_STORE_U32(ctx.r30.u32 + 504, ctx.r11.u32);
	// lwz r11,3784(r31)
	ctx.current_instruction = 0x88181710;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181740
	if (ctx.cr6.eq) goto loc_88181740;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x8818171C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r9,20688(r31)
	ctx.current_instruction = 0x88181720;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r31)
	ctx.current_instruction = 0x88181728;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181744
	goto loc_88181744;
loc_88181740:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181744:
	// stw r11,508(r30)
	ctx.current_instruction = 0x88181744;
	REX_STORE_U32(ctx.r30.u32 + 508, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x88181768
	if (ctx.cr6.eq) goto loc_88181768;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181750;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x88181754;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x8818176c
	goto loc_8818176C;
loc_88181768:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818176C:
	// stw r11,536(r30)
	ctx.current_instruction = 0x8818176C;
	REX_STORE_U32(ctx.r30.u32 + 536, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x88181780
	if (!ctx.cr6.eq) goto loc_88181780;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181780:
	// stw r10,540(r30)
	ctx.current_instruction = 0x88181780;
	REX_STORE_U32(ctx.r30.u32 + 540, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818179c
	if (ctx.cr6.eq) goto loc_8818179C;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818178C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881817a0
	goto loc_881817A0;
loc_8818179C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_881817A0:
	// stw r10,544(r30)
	ctx.current_instruction = 0x881817A0;
	REX_STORE_U32(ctx.r30.u32 + 544, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881817c0
	if (ctx.cr6.eq) goto loc_881817C0;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x881817AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881817c4
	goto loc_881817C4;
loc_881817C0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881817C4:
	// stw r11,548(r30)
	ctx.current_instruction = 0x881817C4;
	REX_STORE_U32(ctx.r30.u32 + 548, ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x881817ec
	if (ctx.cr6.eq) goto loc_881817EC;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881817D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x881817D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x881817f0
	goto loc_881817F0;
loc_881817EC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881817F0:
	// stw r11,552(r30)
	ctx.current_instruction = 0x881817F0;
	REX_STORE_U32(ctx.r30.u32 + 552, ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x88181818
	if (ctx.cr6.eq) goto loc_88181818;
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881817FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x88181800;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x8818181c
	goto loc_8818181C;
loc_88181818:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818181C:
	// stw r11,556(r30)
	ctx.current_instruction = 0x8818181C;
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r10,1176(r30)
	ctx.current_instruction = 0x88181828;
	REX_STORE_U16(ctx.r30.u32 + 1176, ctx.r10.u16);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,204(r31)
	ctx.current_instruction = 0x88181830;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r30,1190
	ctx.r8.s64 = ctx.r30.s64 + 1190;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// sth r6,1178(r30)
	ctx.current_instruction = 0x88181848;
	REX_STORE_U16(ctx.r30.u32 + 1178, ctx.r6.u16);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8818184C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// sth r11,1180(r30)
	ctx.current_instruction = 0x8818185C;
	REX_STORE_U16(ctx.r30.u32 + 1180, ctx.r11.u16);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1182(r30)
	ctx.current_instruction = 0x88181878;
	REX_STORE_U16(ctx.r30.u32 + 1182, ctx.r5.u16);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x8818187C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// sth r9,1184(r30)
	ctx.current_instruction = 0x8818188C;
	REX_STORE_U16(ctx.r30.u32 + 1184, ctx.r9.u16);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181890;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// srawi r4,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 6;
	// sth r4,1186(r30)
	ctx.current_instruction = 0x881818A8;
	REX_STORE_U16(ctx.r30.u32 + 1186, ctx.r4.u16);
	// lwz r11,204(r31)
	ctx.current_instruction = 0x881818AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// sth r7,1188(r30)
	ctx.current_instruction = 0x881818C4;
	REX_STORE_U16(ctx.r30.u32 + 1188, ctx.r7.u16);
	// lwz r5,204(r31)
	ctx.current_instruction = 0x881818C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mulli r11,r5,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(28));
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// sth r3,1190(r30)
	ctx.current_instruction = 0x881818D8;
	REX_STORE_U16(ctx.r30.u32 + 1190, ctx.r3.u16);
loc_881818DC:
	// lwz r11,208(r31)
	ctx.current_instruction = 0x881818DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sthu r6,2(r8)
	ctx.current_instruction = 0x881818F4;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881818dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881818DC;
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x881818FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88181928
	if (ctx.cr6.eq) goto loc_88181928;
	// lwz r11,204(r31)
	ctx.current_instruction = 0x88181908;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,20688(r31)
	ctx.current_instruction = 0x8818190C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// lwz r11,220(r31)
	ctx.current_instruction = 0x88181914;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8818192c
	goto loc_8818192C;
loc_88181928:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8818192C:
	// stw r11,560(r30)
	ctx.current_instruction = 0x8818192C;
	REX_STORE_U32(ctx.r30.u32 + 560, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x88181940
	if (!ctx.cr6.eq) goto loc_88181940;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181940:
	// stw r10,564(r30)
	ctx.current_instruction = 0x88181940;
	REX_STORE_U32(ctx.r30.u32 + 564, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8818195c
	if (ctx.cr6.eq) goto loc_8818195C;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818194C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181960
	goto loc_88181960;
loc_8818195C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_88181960:
	// stw r10,568(r30)
	ctx.current_instruction = 0x88181960;
	REX_STORE_U32(ctx.r30.u32 + 568, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88181980
	if (ctx.cr6.eq) goto loc_88181980;
	// lwz r10,204(r31)
	ctx.current_instruction = 0x8818196C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x88181984
	goto loc_88181984;
loc_88181980:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_88181984:
	// stw r11,572(r30)
	ctx.current_instruction = 0x88181984;
	REX_STORE_U32(ctx.r30.u32 + 572, ctx.r11.u32);
	// lwz r11,3780(r31)
	ctx.current_instruction = 0x88181988;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881819b4
	if (ctx.cr6.eq) goto loc_881819B4;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x88181994;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r8,20688(r31)
	ctx.current_instruction = 0x88181998;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r9,224(r31)
	ctx.current_instruction = 0x881819A0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881819b8
	goto loc_881819B8;
loc_881819B4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881819B8:
	// stw r11,576(r30)
	ctx.current_instruction = 0x881819B8;
	REX_STORE_U32(ctx.r30.u32 + 576, ctx.r11.u32);
	// lwz r11,3784(r31)
	ctx.current_instruction = 0x881819BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881819e8
	if (ctx.cr6.eq) goto loc_881819E8;
	// lwz r10,208(r31)
	ctx.current_instruction = 0x881819C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r8,20688(r31)
	ctx.current_instruction = 0x881819CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r9,224(r31)
	ctx.current_instruction = 0x881819D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x881819ec
	goto loc_881819EC;
loc_881819E8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_881819EC:
	// stw r11,580(r30)
	ctx.current_instruction = 0x881819EC;
	REX_STORE_U32(ctx.r30.u32 + 580, ctx.r11.u32);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// lwz r10,3016(r31)
	ctx.current_instruction = 0x881819F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// stw r10,588(r30)
	ctx.current_instruction = 0x881819FC;
	REX_STORE_U32(ctx.r30.u32 + 588, ctx.r10.u32);
	// ori r5,r9,64
	ctx.r5.u64 = ctx.r9.u64 | 64;
	// stw r10,584(r30)
	ctx.current_instruction = 0x88181A04;
	REX_STORE_U32(ctx.r30.u32 + 584, ctx.r10.u32);
	// ori r4,r8,8
	ctx.r4.u64 = ctx.r8.u64 | 8;
	// lwz r26,3024(r31)
	ctx.current_instruction = 0x88181A0C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// stw r26,596(r30)
	ctx.current_instruction = 0x88181A14;
	REX_STORE_U32(ctx.r30.u32 + 596, ctx.r26.u32);
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// stw r26,592(r30)
	ctx.current_instruction = 0x88181A1C;
	REX_STORE_U32(ctx.r30.u32 + 592, ctx.r26.u32);
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// lwz r26,3028(r31)
	ctx.current_instruction = 0x88181A24;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// addi r11,r30,1120
	ctx.r11.s64 = ctx.r30.s64 + 1120;
	// stw r26,600(r30)
	ctx.current_instruction = 0x88181A2C;
	REX_STORE_U32(ctx.r30.u32 + 600, ctx.r26.u32);
	// addi r29,r31,23984
	ctx.r29.s64 = ctx.r31.s64 + 23984;
	// lwz r26,3036(r31)
	ctx.current_instruction = 0x88181A34;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// addi r28,r31,2120
	ctx.r28.s64 = ctx.r31.s64 + 2120;
	// stw r26,604(r30)
	ctx.current_instruction = 0x88181A3C;
	REX_STORE_U32(ctx.r30.u32 + 604, ctx.r26.u32);
	// addi r27,r31,24240
	ctx.r27.s64 = ctx.r31.s64 + 24240;
	// lwz r26,2560(r31)
	ctx.current_instruction = 0x88181A44;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2560);
	// stw r26,608(r30)
	ctx.current_instruction = 0x88181A48;
	REX_STORE_U32(ctx.r30.u32 + 608, ctx.r26.u32);
	// lwz r26,2480(r31)
	ctx.current_instruction = 0x88181A4C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// stw r26,612(r30)
	ctx.current_instruction = 0x88181A50;
	REX_STORE_U32(ctx.r30.u32 + 612, ctx.r26.u32);
	// lwz r26,1856(r31)
	ctx.current_instruction = 0x88181A54;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// lbz r6,35(r30)
	ctx.current_instruction = 0x88181A58;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 35);
	// addis r3,r6,31
	ctx.r3.s64 = ctx.r6.s64 + 2031616;
	// addis r10,r6,15
	ctx.r10.s64 = ctx.r6.s64 + 983040;
	// stw r26,620(r30)
	ctx.current_instruction = 0x88181A64;
	REX_STORE_U32(ctx.r30.u32 + 620, ctx.r26.u32);
	// addis r9,r6,7
	ctx.r9.s64 = ctx.r6.s64 + 458752;
	// lwz r26,1860(r31)
	ctx.current_instruction = 0x88181A6C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// addis r8,r6,3
	ctx.r8.s64 = ctx.r6.s64 + 196608;
	// stw r26,624(r30)
	ctx.current_instruction = 0x88181A74;
	REX_STORE_U32(ctx.r30.u32 + 624, ctx.r26.u32);
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lwz r26,1864(r31)
	ctx.current_instruction = 0x88181A7C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 1864);
	// addi r3,r3,31
	ctx.r3.s64 = ctx.r3.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// stw r5,1156(r30)
	ctx.current_instruction = 0x88181A88;
	REX_STORE_U32(ctx.r30.u32 + 1156, ctx.r5.u32);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// stw r3,1136(r30)
	ctx.current_instruction = 0x88181A90;
	REX_STORE_U32(ctx.r30.u32 + 1136, ctx.r3.u32);
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// stw r10,1140(r30)
	ctx.current_instruction = 0x88181A98;
	REX_STORE_U32(ctx.r30.u32 + 1140, ctx.r10.u32);
	// stw r9,1144(r30)
	ctx.current_instruction = 0x88181A9C;
	REX_STORE_U32(ctx.r30.u32 + 1144, ctx.r9.u32);
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r8,1148(r30)
	ctx.current_instruction = 0x88181AA4;
	REX_STORE_U32(ctx.r30.u32 + 1148, ctx.r8.u32);
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r26,632(r30)
	ctx.current_instruction = 0x88181AAC;
	REX_STORE_U32(ctx.r30.u32 + 632, ctx.r26.u32);
	// li r6,1104
	ctx.r6.s64 = 1104;
	// stw r7,1152(r30)
	ctx.current_instruction = 0x88181AB4;
	REX_STORE_U32(ctx.r30.u32 + 1152, ctx.r7.u32);
	// stw r4,1160(r30)
	ctx.current_instruction = 0x88181AB8;
	REX_STORE_U32(ctx.r30.u32 + 1160, ctx.r4.u32);
	// lbz r5,35(r30)
	ctx.current_instruction = 0x88181ABC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 35);
	// sth r5,1134(r30)
	ctx.current_instruction = 0x88181AC0;
	REX_STORE_U16(ctx.r30.u32 + 1134, ctx.r5.u16);
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,2096(r31)
	ctx.current_instruction = 0x88181AD8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2096);
	// stw r4,1224(r30)
	ctx.current_instruction = 0x88181ADC;
	REX_STORE_U32(ctx.r30.u32 + 1224, ctx.r4.u32);
	// lwz r3,2100(r31)
	ctx.current_instruction = 0x88181AE0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2100);
	// stw r3,1228(r30)
	ctx.current_instruction = 0x88181AE4;
	REX_STORE_U32(ctx.r30.u32 + 1228, ctx.r3.u32);
	// lwz r11,21712(r31)
	ctx.current_instruction = 0x88181AE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21712);
	// stw r11,1236(r30)
	ctx.current_instruction = 0x88181AEC;
	REX_STORE_U32(ctx.r30.u32 + 1236, ctx.r11.u32);
	// lwz r10,21716(r31)
	ctx.current_instruction = 0x88181AF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21716);
	// stw r10,1240(r30)
	ctx.current_instruction = 0x88181AF4;
	REX_STORE_U32(ctx.r30.u32 + 1240, ctx.r10.u32);
	// lwz r9,248(r31)
	ctx.current_instruction = 0x88181AF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// stb r9,1244(r30)
	ctx.current_instruction = 0x88181AFC;
	REX_STORE_U8(ctx.r30.u32 + 1244, ctx.r9.u8);
	// lwz r7,4036(r31)
	ctx.current_instruction = 0x88181B00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4036);
	// stb r7,1245(r30)
	ctx.current_instruction = 0x88181B04;
	REX_STORE_U8(ctx.r30.u32 + 1245, ctx.r7.u8);
	// lwz r5,4044(r31)
	ctx.current_instruction = 0x88181B08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4044);
	// stb r5,1246(r30)
	ctx.current_instruction = 0x88181B0C;
	REX_STORE_U8(ctx.r30.u32 + 1246, ctx.r5.u8);
	// lwz r3,252(r31)
	ctx.current_instruction = 0x88181B10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// stb r3,1249(r30)
	ctx.current_instruction = 0x88181B14;
	REX_STORE_U8(ctx.r30.u32 + 1249, ctx.r3.u8);
	// lwz r10,476(r31)
	ctx.current_instruction = 0x88181B18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 476);
	// stb r10,1250(r30)
	ctx.current_instruction = 0x88181B1C;
	REX_STORE_U8(ctx.r30.u32 + 1250, ctx.r10.u8);
	// lwz r8,21968(r31)
	ctx.current_instruction = 0x88181B20;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// stw r8,1304(r30)
	ctx.current_instruction = 0x88181B24;
	REX_STORE_U32(ctx.r30.u32 + 1304, ctx.r8.u32);
	// lwz r7,288(r31)
	ctx.current_instruction = 0x88181B28;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 288);
	// stw r7,1308(r30)
	ctx.current_instruction = 0x88181B2C;
	REX_STORE_U32(ctx.r30.u32 + 1308, ctx.r7.u32);
	// lwz r6,1952(r31)
	ctx.current_instruction = 0x88181B30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1952);
	// stb r6,1247(r30)
	ctx.current_instruction = 0x88181B34;
	REX_STORE_U8(ctx.r30.u32 + 1247, ctx.r6.u8);
	// lwz r4,1956(r31)
	ctx.current_instruction = 0x88181B38;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1956);
	// stb r4,1248(r30)
	ctx.current_instruction = 0x88181B3C;
	REX_STORE_U8(ctx.r30.u32 + 1248, ctx.r4.u8);
	// lwz r11,1948(r31)
	ctx.current_instruction = 0x88181B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1948);
	// stb r11,1251(r30)
	ctx.current_instruction = 0x88181B44;
	REX_STORE_U8(ctx.r30.u32 + 1251, ctx.r11.u8);
	// stw r29,1260(r30)
	ctx.current_instruction = 0x88181B48;
	REX_STORE_U32(ctx.r30.u32 + 1260, ctx.r29.u32);
	// stw r28,1232(r30)
	ctx.current_instruction = 0x88181B4C;
	REX_STORE_U32(ctx.r30.u32 + 1232, ctx.r28.u32);
	// lwz r9,20708(r31)
	ctx.current_instruction = 0x88181B50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20708);
	// stb r9,1254(r30)
	ctx.current_instruction = 0x88181B54;
	REX_STORE_U8(ctx.r30.u32 + 1254, ctx.r9.u8);
	// lwz r7,21644(r31)
	ctx.current_instruction = 0x88181B58;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 21644);
	// stb r7,1255(r30)
	ctx.current_instruction = 0x88181B5C;
	REX_STORE_U8(ctx.r30.u32 + 1255, ctx.r7.u8);
	// stw r27,1264(r30)
	ctx.current_instruction = 0x88181B60;
	REX_STORE_U32(ctx.r30.u32 + 1264, ctx.r27.u32);
	// lwz r5,20680(r31)
	ctx.current_instruction = 0x88181B64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20680);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x88181b98
	if (ctx.cr6.eq) goto loc_88181B98;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x88181B70;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88181b98
	if (!ctx.cr6.eq) goto loc_88181B98;
	// lwz r11,1836(r31)
	ctx.current_instruction = 0x88181B7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// stw r11,1268(r30)
	ctx.current_instruction = 0x88181B80;
	REX_STORE_U32(ctx.r30.u32 + 1268, ctx.r11.u32);
	// lwz r10,20752(r31)
	ctx.current_instruction = 0x88181B84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20752);
	// stw r10,1272(r30)
	ctx.current_instruction = 0x88181B88;
	REX_STORE_U32(ctx.r30.u32 + 1272, ctx.r10.u32);
	// lwz r9,20756(r31)
	ctx.current_instruction = 0x88181B8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20756);
	// stw r9,1300(r30)
	ctx.current_instruction = 0x88181B90;
	REX_STORE_U32(ctx.r30.u32 + 1300, ctx.r9.u32);
	// b 0x88181c18
	goto loc_88181C18;
loc_88181B98:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88181B98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x88181be8
	if (!ctx.cr6.eq) goto loc_88181BE8;
	// lwz r11,1816(r31)
	ctx.current_instruction = 0x88181BA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// stw r11,1268(r30)
	ctx.current_instruction = 0x88181BA8;
	REX_STORE_U32(ctx.r30.u32 + 1268, ctx.r11.u32);
	// lwz r10,1816(r31)
	ctx.current_instruction = 0x88181BAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// stw r10,1272(r30)
	ctx.current_instruction = 0x88181BB0;
	REX_STORE_U32(ctx.r30.u32 + 1272, ctx.r10.u32);
	// lwz r9,1824(r31)
	ctx.current_instruction = 0x88181BB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r9,1276(r30)
	ctx.current_instruction = 0x88181BB8;
	REX_STORE_U32(ctx.r30.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r31)
	ctx.current_instruction = 0x88181BBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r8,1280(r30)
	ctx.current_instruction = 0x88181BC0;
	REX_STORE_U32(ctx.r30.u32 + 1280, ctx.r8.u32);
	// lwz r7,1824(r31)
	ctx.current_instruction = 0x88181BC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r7,1284(r30)
	ctx.current_instruction = 0x88181BC8;
	REX_STORE_U32(ctx.r30.u32 + 1284, ctx.r7.u32);
	// lwz r6,1820(r31)
	ctx.current_instruction = 0x88181BCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r6,1288(r30)
	ctx.current_instruction = 0x88181BD0;
	REX_STORE_U32(ctx.r30.u32 + 1288, ctx.r6.u32);
	// lwz r5,1824(r31)
	ctx.current_instruction = 0x88181BD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r5,1292(r30)
	ctx.current_instruction = 0x88181BD8;
	REX_STORE_U32(ctx.r30.u32 + 1292, ctx.r5.u32);
	// lwz r4,1820(r31)
	ctx.current_instruction = 0x88181BDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r4,1296(r30)
	ctx.current_instruction = 0x88181BE0;
	REX_STORE_U32(ctx.r30.u32 + 1296, ctx.r4.u32);
	// b 0x88181c18
	goto loc_88181C18;
loc_88181BE8:
	// lwz r11,1812(r31)
	ctx.current_instruction = 0x88181BE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1812);
	// stw r11,1268(r30)
	ctx.current_instruction = 0x88181BEC;
	REX_STORE_U32(ctx.r30.u32 + 1268, ctx.r11.u32);
	// lwz r10,1824(r31)
	ctx.current_instruction = 0x88181BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1824);
	// stw r10,1272(r30)
	ctx.current_instruction = 0x88181BF4;
	REX_STORE_U32(ctx.r30.u32 + 1272, ctx.r10.u32);
	// lwz r9,1808(r31)
	ctx.current_instruction = 0x88181BF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1808);
	// stw r9,1276(r30)
	ctx.current_instruction = 0x88181BFC;
	REX_STORE_U32(ctx.r30.u32 + 1276, ctx.r9.u32);
	// lwz r8,1820(r31)
	ctx.current_instruction = 0x88181C00;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1820);
	// stw r8,1280(r30)
	ctx.current_instruction = 0x88181C04;
	REX_STORE_U32(ctx.r30.u32 + 1280, ctx.r8.u32);
	// lwz r7,1804(r31)
	ctx.current_instruction = 0x88181C08;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1804);
	// stw r7,1284(r30)
	ctx.current_instruction = 0x88181C0C;
	REX_STORE_U32(ctx.r30.u32 + 1284, ctx.r7.u32);
	// lwz r6,1816(r31)
	ctx.current_instruction = 0x88181C10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// stw r6,1288(r30)
	ctx.current_instruction = 0x88181C14;
	REX_STORE_U32(ctx.r30.u32 + 1288, ctx.r6.u32);
loc_88181C18:
	// sth r23,1256(r30)
	ctx.current_instruction = 0x88181C18;
	REX_STORE_U16(ctx.r30.u32 + 1256, ctx.r23.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r7,1800(r31)
	ctx.current_instruction = 0x88181C20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1800);
	// addi r9,r31,24304
	ctx.r9.s64 = ctx.r31.s64 + 24304;
	// stb r7,1252(r30)
	ctx.current_instruction = 0x88181C28;
	REX_STORE_U8(ctx.r30.u32 + 1252, ctx.r7.u8);
	// addi r8,r31,24496
	ctx.r8.s64 = ctx.r31.s64 + 24496;
	// lwz r5,1940(r31)
	ctx.current_instruction = 0x88181C30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1940);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,1253(r30)
	ctx.current_instruction = 0x88181C38;
	REX_STORE_U8(ctx.r30.u32 + 1253, ctx.r5.u8);
	// lwz r11,22284(r31)
	ctx.current_instruction = 0x88181C3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22284);
	// stw r11,1312(r30)
	ctx.current_instruction = 0x88181C40;
	REX_STORE_U32(ctx.r30.u32 + 1312, ctx.r11.u32);
	// lwz r7,3972(r31)
	ctx.current_instruction = 0x88181C44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// stw r7,1316(r30)
	ctx.current_instruction = 0x88181C48;
	REX_STORE_U32(ctx.r30.u32 + 1316, ctx.r7.u32);
	// lwz r6,3976(r31)
	ctx.current_instruction = 0x88181C4C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3976);
	// stw r6,1320(r30)
	ctx.current_instruction = 0x88181C50;
	REX_STORE_U32(ctx.r30.u32 + 1320, ctx.r6.u32);
	// lwz r5,20692(r31)
	ctx.current_instruction = 0x88181C54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20692);
	// stw r5,1380(r30)
	ctx.current_instruction = 0x88181C58;
	REX_STORE_U32(ctx.r30.u32 + 1380, ctx.r5.u32);
	// lwz r4,15284(r31)
	ctx.current_instruction = 0x88181C5C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15284);
	// stw r4,1384(r30)
	ctx.current_instruction = 0x88181C60;
	REX_STORE_U32(ctx.r30.u32 + 1384, ctx.r4.u32);
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88181C64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stb r4,1324(r30)
	ctx.current_instruction = 0x88181C78;
	REX_STORE_U8(ctx.r30.u32 + 1324, ctx.r4.u8);
	// lwz r11,3016(r31)
	ctx.current_instruction = 0x88181C7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3016);
	// stw r11,1328(r30)
	ctx.current_instruction = 0x88181C80;
	REX_STORE_U32(ctx.r30.u32 + 1328, ctx.r11.u32);
	// lwz r10,3020(r31)
	ctx.current_instruction = 0x88181C84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3020);
	// stw r10,1332(r30)
	ctx.current_instruction = 0x88181C88;
	REX_STORE_U32(ctx.r30.u32 + 1332, ctx.r10.u32);
	// lwz r7,3024(r31)
	ctx.current_instruction = 0x88181C8C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3024);
	// stw r7,1336(r30)
	ctx.current_instruction = 0x88181C90;
	REX_STORE_U32(ctx.r30.u32 + 1336, ctx.r7.u32);
	// lwz r6,3028(r31)
	ctx.current_instruction = 0x88181C94;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3028);
	// stw r6,1340(r30)
	ctx.current_instruction = 0x88181C98;
	REX_STORE_U32(ctx.r30.u32 + 1340, ctx.r6.u32);
	// lwz r5,3032(r31)
	ctx.current_instruction = 0x88181C9C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// stw r5,1344(r30)
	ctx.current_instruction = 0x88181CA0;
	REX_STORE_U32(ctx.r30.u32 + 1344, ctx.r5.u32);
	// lwz r4,3036(r31)
	ctx.current_instruction = 0x88181CA4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3036);
	// stw r4,1348(r30)
	ctx.current_instruction = 0x88181CA8;
	REX_STORE_U32(ctx.r30.u32 + 1348, ctx.r4.u32);
	// lwz r11,3040(r31)
	ctx.current_instruction = 0x88181CAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3040);
	// stw r11,1352(r30)
	ctx.current_instruction = 0x88181CB0;
	REX_STORE_U32(ctx.r30.u32 + 1352, ctx.r11.u32);
	// stw r9,1356(r30)
	ctx.current_instruction = 0x88181CB4;
	REX_STORE_U32(ctx.r30.u32 + 1356, ctx.r9.u32);
	// stw r8,1360(r30)
	ctx.current_instruction = 0x88181CB8;
	REX_STORE_U32(ctx.r30.u32 + 1360, ctx.r8.u32);
	// lwz r10,20768(r31)
	ctx.current_instruction = 0x88181CBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20768);
	// stw r10,1388(r30)
	ctx.current_instruction = 0x88181CC0;
	REX_STORE_U32(ctx.r30.u32 + 1388, ctx.r10.u32);
	// lwz r9,4016(r31)
	ctx.current_instruction = 0x88181CC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4016);
	// stw r9,1392(r30)
	ctx.current_instruction = 0x88181CC8;
	REX_STORE_U32(ctx.r30.u32 + 1392, ctx.r9.u32);
	// bl 0x88171708
	ctx.lr = 0x88181CD0;
	sub_88171708(ctx, base);
loc_88181CD0:
	// stw r3,380(r30)
	ctx.current_instruction = 0x88181CD0;
	REX_STORE_U32(ctx.r30.u32 + 380, ctx.r3.u32);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// lhz r8,52(r30)
	ctx.current_instruction = 0x88181CD8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// divw r6,r7,r3
	ctx.r6.u64 = uint32_t((ctx.r3.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r7.s32 / ctx.r3.s32 : 0);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r6,384(r30)
	ctx.current_instruction = 0x88181CE8;
	REX_STORE_U32(ctx.r30.u32 + 384, ctx.r6.u32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r3,14840(r31)
	ctx.current_instruction = 0x88181CF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 14840);
	// lwz r11,3428(r31)
	ctx.current_instruction = 0x88181CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3428);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stw r10,1596(r30)
	ctx.current_instruction = 0x88181D04;
	REX_STORE_U32(ctx.r30.u32 + 1596, ctx.r10.u32);
	// lwz r9,15340(r31)
	ctx.current_instruction = 0x88181D08;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15340);
	// stw r9,1696(r30)
	ctx.current_instruction = 0x88181D0C;
	REX_STORE_U32(ctx.r30.u32 + 1696, ctx.r9.u32);
	// lwz r8,15344(r31)
	ctx.current_instruction = 0x88181D10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15344);
	// stw r8,1700(r30)
	ctx.current_instruction = 0x88181D14;
	REX_STORE_U32(ctx.r30.u32 + 1700, ctx.r8.u32);
	// lwz r7,15348(r31)
	ctx.current_instruction = 0x88181D18;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 15348);
	// stw r7,1704(r30)
	ctx.current_instruction = 0x88181D1C;
	REX_STORE_U32(ctx.r30.u32 + 1704, ctx.r7.u32);
	// lwz r6,15352(r31)
	ctx.current_instruction = 0x88181D20;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 15352);
	// stw r6,1708(r30)
	ctx.current_instruction = 0x88181D24;
	REX_STORE_U32(ctx.r30.u32 + 1708, ctx.r6.u32);
	// lwz r5,20900(r31)
	ctx.current_instruction = 0x88181D28;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20900);
	// stw r5,1404(r30)
	ctx.current_instruction = 0x88181D2C;
	REX_STORE_U32(ctx.r30.u32 + 1404, ctx.r5.u32);
	// lwz r4,21700(r31)
	ctx.current_instruction = 0x88181D30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21700);
	// stw r4,1396(r30)
	ctx.current_instruction = 0x88181D34;
	REX_STORE_U32(ctx.r30.u32 + 1396, ctx.r4.u32);
	// lwz r3,21696(r31)
	ctx.current_instruction = 0x88181D38;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21696);
	// stw r3,1400(r30)
	ctx.current_instruction = 0x88181D3C;
	REX_STORE_U32(ctx.r30.u32 + 1400, ctx.r3.u32);
	// lwz r11,4020(r31)
	ctx.current_instruction = 0x88181D40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4020);
	// stw r11,1560(r30)
	ctx.current_instruction = 0x88181D44;
	REX_STORE_U32(ctx.r30.u32 + 1560, ctx.r11.u32);
	// lwz r10,20728(r31)
	ctx.current_instruction = 0x88181D48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20728);
	// stw r10,1564(r30)
	ctx.current_instruction = 0x88181D4C;
	REX_STORE_U32(ctx.r30.u32 + 1564, ctx.r10.u32);
	// lwz r9,20732(r31)
	ctx.current_instruction = 0x88181D50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20732);
	// stw r9,1568(r30)
	ctx.current_instruction = 0x88181D54;
	REX_STORE_U32(ctx.r30.u32 + 1568, ctx.r9.u32);
	// lwz r8,20736(r31)
	ctx.current_instruction = 0x88181D58;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20736);
	// stw r8,1572(r30)
	ctx.current_instruction = 0x88181D5C;
	REX_STORE_U32(ctx.r30.u32 + 1572, ctx.r8.u32);
	// lwz r7,20740(r31)
	ctx.current_instruction = 0x88181D60;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20740);
	// stw r7,1576(r30)
	ctx.current_instruction = 0x88181D64;
	REX_STORE_U32(ctx.r30.u32 + 1576, ctx.r7.u32);
	// lwz r6,20744(r31)
	ctx.current_instruction = 0x88181D68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20744);
	// stw r6,1580(r30)
	ctx.current_instruction = 0x88181D6C;
	REX_STORE_U32(ctx.r30.u32 + 1580, ctx.r6.u32);
	// lwz r5,20748(r31)
	ctx.current_instruction = 0x88181D70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20748);
	// stw r5,1584(r30)
	ctx.current_instruction = 0x88181D74;
	REX_STORE_U32(ctx.r30.u32 + 1584, ctx.r5.u32);
	// lwz r4,20688(r31)
	ctx.current_instruction = 0x88181D78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20688);
	// stw r4,1368(r30)
	ctx.current_instruction = 0x88181D7C;
	REX_STORE_U32(ctx.r30.u32 + 1368, ctx.r4.u32);
	// lwz r3,21704(r31)
	ctx.current_instruction = 0x88181D80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21704);
	// stw r3,1372(r30)
	ctx.current_instruction = 0x88181D84;
	REX_STORE_U32(ctx.r30.u32 + 1372, ctx.r3.u32);
	// lwz r11,22140(r31)
	ctx.current_instruction = 0x88181D88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// stw r11,1588(r30)
	ctx.current_instruction = 0x88181D8C;
	REX_STORE_U32(ctx.r30.u32 + 1588, ctx.r11.u32);
	// lwz r10,22140(r31)
	ctx.current_instruction = 0x88181D90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22140);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88181dd4
	if (!ctx.cr6.eq) goto loc_88181DD4;
	// lwz r11,21816(r31)
	ctx.current_instruction = 0x88181D9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21816);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,45788
	ctx.r8.u64 = ctx.r10.u64 | 45788;
	// ori r7,r9,45792
	ctx.r7.u64 = ctx.r9.u64 | 45792;
	// stw r11,1456(r30)
	ctx.current_instruction = 0x88181DB0;
	REX_STORE_U32(ctx.r30.u32 + 1456, ctx.r11.u32);
	// lwz r6,22172(r31)
	ctx.current_instruction = 0x88181DB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 22172);
	// stw r6,1460(r30)
	ctx.current_instruction = 0x88181DB8;
	REX_STORE_U32(ctx.r30.u32 + 1460, ctx.r6.u32);
	// lwz r5,21844(r31)
	ctx.current_instruction = 0x88181DBC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21844);
	// stw r5,1464(r30)
	ctx.current_instruction = 0x88181DC0;
	REX_STORE_U32(ctx.r30.u32 + 1464, ctx.r5.u32);
	// lwzx r4,r31,r8
	ctx.current_instruction = 0x88181DC4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r4,1484(r30)
	ctx.current_instruction = 0x88181DC8;
	REX_STORE_U32(ctx.r30.u32 + 1484, ctx.r4.u32);
	// lwzx r3,r31,r7
	ctx.current_instruction = 0x88181DCC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// stw r3,1480(r30)
	ctx.current_instruction = 0x88181DD0;
	REX_STORE_U32(ctx.r30.u32 + 1480, ctx.r3.u32);
loc_88181DD4:
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x88181DD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x88181dfc
	if (!ctx.cr6.eq) goto loc_88181DFC;
	// lwz r11,3004(r31)
	ctx.current_instruction = 0x88181DE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88181dfc
	if (!ctx.cr6.eq) goto loc_88181DFC;
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24364(r11)
	ctx.current_instruction = 0x88181DF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24364);
	// b 0x88181e04
	goto loc_88181E04;
loc_88181DFC:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lwz r11,24356(r11)
	ctx.current_instruction = 0x88181E00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24356);
loc_88181E04:
	// stw r11,1364(r30)
	ctx.current_instruction = 0x88181E04;
	REX_STORE_U32(ctx.r30.u32 + 1364, ctx.r11.u32);
	// lis r8,-30719
	ctx.r8.s64 = -2013200384;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r6,r8,20384
	ctx.r6.s64 = ctx.r8.s64 + 20384;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r11,1356(r30)
	ctx.current_instruction = 0x88181E20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1356);
	// lwz r10,204(r31)
	ctx.current_instruction = 0x88181E24;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_88181E2C:
	// lwz r9,-4(r8)
	ctx.current_instruction = 0x88181E2C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	ctx.current_instruction = 0x88181E30;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,-1(r11)
	ctx.current_instruction = 0x88181E40;
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stw r3,3(r11)
	ctx.current_instruction = 0x88181E44;
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88181e6c
	if (ctx.cr6.eq) goto loc_88181E6C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,0(r11)
	ctx.current_instruction = 0x88181E64;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stw r3,7(r11)
	ctx.current_instruction = 0x88181E68;
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r3.u32);
loc_88181E6C:
	// lwz r9,0(r8)
	ctx.current_instruction = 0x88181E6C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	ctx.current_instruction = 0x88181E70;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,11(r11)
	ctx.current_instruction = 0x88181E80;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r4.u8);
	// stw r3,15(r11)
	ctx.current_instruction = 0x88181E84;
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88181eac
	if (ctx.cr6.eq) goto loc_88181EAC;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,12(r11)
	ctx.current_instruction = 0x88181EA4;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// stw r3,19(r11)
	ctx.current_instruction = 0x88181EA8;
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r3.u32);
loc_88181EAC:
	// lwz r9,4(r8)
	ctx.current_instruction = 0x88181EAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	ctx.current_instruction = 0x88181EB0;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,23(r11)
	ctx.current_instruction = 0x88181EC0;
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r4.u8);
	// stw r3,27(r11)
	ctx.current_instruction = 0x88181EC4;
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88181eec
	if (ctx.cr6.eq) goto loc_88181EEC;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,24(r11)
	ctx.current_instruction = 0x88181EE4;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r4.u8);
	// stw r3,31(r11)
	ctx.current_instruction = 0x88181EE8;
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r3.u32);
loc_88181EEC:
	// lwz r9,8(r8)
	ctx.current_instruction = 0x88181EEC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	ctx.current_instruction = 0x88181EF0;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,35(r11)
	ctx.current_instruction = 0x88181F00;
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r4.u8);
	// stw r3,39(r11)
	ctx.current_instruction = 0x88181F04;
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x88181f2c
	if (ctx.cr6.eq) goto loc_88181F2C;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r9,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stb r4,36(r11)
	ctx.current_instruction = 0x88181F24;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r4.u8);
	// stw r3,43(r11)
	ctx.current_instruction = 0x88181F28;
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r3.u32);
loc_88181F2C:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x88181e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88181E2C;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,1360(r30)
	ctx.current_instruction = 0x88181F3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1360);
	// lwz r10,208(r31)
	ctx.current_instruction = 0x88181F40;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_88181F50:
	// lwz r9,-4(r8)
	ctx.current_instruction = 0x88181F50;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stb r7,0(r11)
	ctx.current_instruction = 0x88181F54;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,-1(r11)
	ctx.current_instruction = 0x88181F64;
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// stw r4,3(r11)
	ctx.current_instruction = 0x88181F68;
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88181f90
	if (ctx.cr6.eq) goto loc_88181F90;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,0(r11)
	ctx.current_instruction = 0x88181F88;
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stw r4,7(r11)
	ctx.current_instruction = 0x88181F8C;
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r4.u32);
loc_88181F90:
	// lwz r9,0(r8)
	ctx.current_instruction = 0x88181F90;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stb r7,12(r11)
	ctx.current_instruction = 0x88181F94;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,11(r11)
	ctx.current_instruction = 0x88181FA4;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r5.u8);
	// stw r4,15(r11)
	ctx.current_instruction = 0x88181FA8;
	REX_STORE_U32(ctx.r11.u32 + 15, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88181fd0
	if (ctx.cr6.eq) goto loc_88181FD0;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,12(r11)
	ctx.current_instruction = 0x88181FC8;
	REX_STORE_U8(ctx.r11.u32 + 12, ctx.r5.u8);
	// stw r4,19(r11)
	ctx.current_instruction = 0x88181FCC;
	REX_STORE_U32(ctx.r11.u32 + 19, ctx.r4.u32);
loc_88181FD0:
	// lwz r9,4(r8)
	ctx.current_instruction = 0x88181FD0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stb r7,24(r11)
	ctx.current_instruction = 0x88181FD4;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,23(r11)
	ctx.current_instruction = 0x88181FE4;
	REX_STORE_U8(ctx.r11.u32 + 23, ctx.r5.u8);
	// stw r4,27(r11)
	ctx.current_instruction = 0x88181FE8;
	REX_STORE_U32(ctx.r11.u32 + 27, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88182010
	if (ctx.cr6.eq) goto loc_88182010;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,24(r11)
	ctx.current_instruction = 0x88182008;
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r5.u8);
	// stw r4,31(r11)
	ctx.current_instruction = 0x8818200C;
	REX_STORE_U32(ctx.r11.u32 + 31, ctx.r4.u32);
loc_88182010:
	// lwz r9,8(r8)
	ctx.current_instruction = 0x88182010;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stb r7,36(r11)
	ctx.current_instruction = 0x88182014;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r7.u8);
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,35(r11)
	ctx.current_instruction = 0x88182024;
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r5.u8);
	// stw r4,39(r11)
	ctx.current_instruction = 0x88182028;
	REX_STORE_U32(ctx.r11.u32 + 39, ctx.r4.u32);
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x88182050
	if (ctx.cr6.eq) goto loc_88182050;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rlwinm r6,r9,0,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stb r5,36(r11)
	ctx.current_instruction = 0x88182048;
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r5.u8);
	// stw r4,43(r11)
	ctx.current_instruction = 0x8818204C;
	REX_STORE_U32(ctx.r11.u32 + 43, ctx.r4.u32);
loc_88182050:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x88181f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88181F50;
	// lwz r11,1600(r30)
	ctx.current_instruction = 0x8818205C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881822f4
	if (ctx.cr6.eq) goto loc_881822F4;
	// lwz r11,12(r11)
	ctx.current_instruction = 0x88182068;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x881822f4
	if (!ctx.cr6.eq) goto loc_881822F4;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,620(r30)
	ctx.current_instruction = 0x88182078;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 620);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19972
	ctx.r9.s64 = ctx.r9.s64 + -19972;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1604(r30)
	ctx.current_instruction = 0x88182090;
	REX_STORE_U32(ctx.r30.u32 + 1604, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881820AC:
	// lbzx r28,r11,r10
	ctx.current_instruction = 0x881820AC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,4,26,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0x30;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,25,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r9,r29
	ctx.current_instruction = 0x881820C4;
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881820C8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r11,r7
	ctx.current_instruction = 0x881820DC;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.current_instruction = 0x881820E0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x881820F4;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881820F8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,4,26,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x8818210C;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881820ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881820AC;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,624(r30)
	ctx.current_instruction = 0x8818211C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 624);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19940
	ctx.r9.s64 = ctx.r9.s64 + -19940;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1608(r30)
	ctx.current_instruction = 0x88182134;
	REX_STORE_U32(ctx.r30.u32 + 1608, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88182150:
	// lbzx r28,r11,r10
	ctx.current_instruction = 0x88182150;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,24,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xF8;
	// rlwinm r28,r28,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,26,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3E;
	// stbx r28,r9,r29
	ctx.current_instruction = 0x88182168;
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x8818216C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r11,r7
	ctx.current_instruction = 0x88182180;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.current_instruction = 0x88182184;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x88182198;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x8818219C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,24,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,26,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x881821B0;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88182150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88182150;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,632(r30)
	ctx.current_instruction = 0x881821C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 632);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-19908
	ctx.r9.s64 = ctx.r9.s64 + -19908;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1616(r30)
	ctx.current_instruction = 0x881821D8;
	REX_STORE_U32(ctx.r30.u32 + 1616, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_881821F4:
	// lbzx r28,r11,r10
	ctx.current_instruction = 0x881821F4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r28,3,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0x18;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r28,r28,0,25,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7E;
	// stbx r28,r9,r29
	ctx.current_instruction = 0x8818220C;
	REX_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x88182210;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r11,r7
	ctx.current_instruction = 0x88182224;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.current_instruction = 0x88182228;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x8818223C;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x88182240;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r28,r9,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// rlwinm r9,r9,0,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x88182254;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881821f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881821F4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r30)
	ctx.current_instruction = 0x88182264;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r9,r9,-20036
	ctx.r9.s64 = ctx.r9.s64 + -20036;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// stw r9,1620(r30)
	ctx.current_instruction = 0x8818227C;
	REX_STORE_U32(ctx.r30.u32 + 1620, ctx.r9.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_88182298:
	// lbzx r30,r11,r10
	ctx.current_instruction = 0x88182298;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stbx r30,r9,r31
	ctx.current_instruction = 0x881822AC;
	REX_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u8);
	// lbzx r9,r8,r11
	ctx.current_instruction = 0x881822B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r11,r7
	ctx.current_instruction = 0x881822C0;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lbzx r9,r11,r6
	ctx.current_instruction = 0x881822C4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	ctx.current_instruction = 0x881822D4;
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.current_instruction = 0x881822D8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	ctx.current_instruction = 0x881822E8;
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x88182298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88182298;
loc_881822F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B26F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B26F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B26F8) {
			switch (rex_dispatch_address) {
				case 0x881B2700:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B26F8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B2700: goto loc_881B2700;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881B2700;
	__savegprlr_26(ctx, base);
loc_881B2700:
	// lbz r11,2(r4)
	ctx.current_instruction = 0x881B2700;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// addi r26,r6,-4
	ctx.r26.s64 = ctx.r6.s64 + -4;
	// lbz r7,0(r4)
	ctx.current_instruction = 0x881B2708;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// subfic r8,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r8.u64 = static_cast<uint64_t>(5) - ctx.r11.u64;
	// lbz r30,4(r4)
	ctx.current_instruction = 0x881B2714;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mulli r31,r7,34
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(34));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r7,0(r5)
	ctx.current_instruction = 0x881B273C;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lbz r8,0(r4)
	ctx.current_instruction = 0x881B2740;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r31,2(r4)
	ctx.current_instruction = 0x881B2744;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r30,r31,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// mulli r7,r8,25
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r8,r31,r30
	ctx.r8.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r8,15
	ctx.r7.s64 = ctx.r8.s64 + 15;
	// srawi r8,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 5;
	// stw r8,4(r5)
	ctx.current_instruction = 0x881B2760;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lbz r7,4(r4)
	ctx.current_instruction = 0x881B2764;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r30,2(r4)
	ctx.current_instruction = 0x881B2768;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r31,6(r4)
	ctx.current_instruction = 0x881B276C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r8,0(r4)
	ctx.current_instruction = 0x881B2770;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rotlwi r7,r30,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// subf r30,r30,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r30.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r7,8(r5)
	ctx.current_instruction = 0x881B27A0;
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lbz r8,4(r4)
	ctx.current_instruction = 0x881B27A4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r30,0(r4)
	ctx.current_instruction = 0x881B27A8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r7,2(r4)
	ctx.current_instruction = 0x881B27AC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// rotlwi r29,r7,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// rotlwi r31,r8,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r7,r7,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r7.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r7,r30,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r30.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r7,12(r5)
	ctx.current_instruction = 0x881B27D8;
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// ble cr6,0x881b2884
	if (!ctx.cr6.gt) goto loc_881B2884;
	// addi r8,r26,-5
	ctx.r8.s64 = ctx.r26.s64 + -5;
	// addi r31,r4,-2
	ctx.r31.s64 = ctx.r4.s64 + -2;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r4,-4
	ctx.r27.s64 = ctx.r4.s64 + -4;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 + 12;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_881B27FC:
	// lbzx r7,r31,r11
	ctx.current_instruction = 0x881B27FC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r30,r10,r11
	ctx.current_instruction = 0x881B2800;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lbzx r28,r11,r4
	ctx.current_instruction = 0x881B2808;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r9,r11
	ctx.current_instruction = 0x881B280C;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r30.u64;
	// rotlwi r30,r28,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// stw r7,4(r8)
	ctx.current_instruction = 0x881B2838;
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lbzx r7,r31,r11
	ctx.current_instruction = 0x881B283C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r30,r11,r4
	ctx.current_instruction = 0x881B2840;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r27,r11
	ctx.current_instruction = 0x881B2844;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r28,r10,r11
	ctx.current_instruction = 0x881B2848;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// subf r7,r7,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r7.u64;
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// subf r30,r30,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r30.u64;
	// rlwinm r28,r7,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// srawi r7,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 5;
	// stwu r7,8(r8)
	ctx.current_instruction = 0x881B287C;
	ea = 8 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x881b27fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B27FC;
loc_881B2884:
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r5
	ctx.r31.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r4,r6,-3
	ctx.r4.s64 = ctx.r6.s64 + -3;
	// lbz r8,-4(r11)
	ctx.current_instruction = 0x881B2898;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r10,-6(r11)
	ctx.current_instruction = 0x881B28A0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r29,r8,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lbz r28,-2(r11)
	ctx.current_instruction = 0x881B28AC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r8,r8,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r6,-2
	ctx.r4.s64 = ctx.r6.s64 + -2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r28,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// stwx r10,r7,r5
	ctx.current_instruction = 0x881B28E0;
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r10.u32);
	// lbz r9,-6(r11)
	ctx.current_instruction = 0x881B28E4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r7,-4(r11)
	ctx.current_instruction = 0x881B28E8;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r10,-2(r11)
	ctx.current_instruction = 0x881B28EC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lbz r8,-8(r11)
	ctx.current_instruction = 0x881B28F8;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -8);
	// rotlwi r9,r7,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stwx r7,r30,r5
	ctx.current_instruction = 0x881B2920;
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r7.u32);
	// lbz r10,-2(r11)
	ctx.current_instruction = 0x881B2924;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,-4(r11)
	ctx.current_instruction = 0x881B2928;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// mulli r9,r10,25
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(25));
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// stwx r9,r29,r5
	ctx.current_instruction = 0x881B2944;
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r9.u32);
	// lbz r8,-2(r11)
	ctx.current_instruction = 0x881B2948;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r9,-6(r11)
	ctx.current_instruction = 0x881B294C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// lbz r7,-4(r11)
	ctx.current_instruction = 0x881B2950;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// subfic r10,r7,5
	ctx.xer.ca = ctx.r7.u32 <= 5;
	ctx.r10.u64 = static_cast<uint64_t>(5) - ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r8,r8,34
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(34));
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// stw r10,-4(r31)
	ctx.current_instruction = 0x881B2970;
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// ble cr6,0x881b29ac
	if (!ctx.cr6.gt) goto loc_881B29AC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r10,255
	ctx.r10.s64 = 255;
loc_881B2980:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881B2980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x881b2998
	if (!ctx.cr6.gt) goto loc_881B2998;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_881B2998:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbx r11,r4,r3
	ctx.current_instruction = 0x881B29A0;
	REX_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x881b2980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881B2980;
loc_881B29AC:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881B8F40) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B8F40;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B8F40) {
			switch (rex_dispatch_address) {
				case 0x881B8F94:
				case 0x881B8FE0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B8F40;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B8F94: goto loc_881B8F94;
		case 0x881B8FE0: goto loc_881B8FE0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881B8F44;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881B8F48;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881B8F4C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881B8F50;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,204(r1)
	ctx.current_instruction = 0x881B8F58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r5)
	ctx.current_instruction = 0x881B8F64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x881b8fb8
	if (!ctx.cr6.eq) goto loc_881B8FB8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881b8fac
	if (ctx.cr6.eq) goto loc_881B8FAC;
	// lwz r10,2988(r3)
	ctx.current_instruction = 0x881B8F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2988);
	// addi r3,r8,-8
	ctx.r3.s64 = ctx.r8.s64 + -8;
	// lwz r5,220(r1)
	ctx.current_instruction = 0x881B8F80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r30,4(r11)
	ctx.current_instruction = 0x881B8F84;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,212(r1)
	ctx.current_instruction = 0x881B8F88;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881B8F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B8F94:
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,0(r30)
	ctx.current_instruction = 0x881B8F98;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lwz r8,1912(r31)
	ctx.current_instruction = 0x881B8F9C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 1912);
	// sth r9,0(r8)
	ctx.current_instruction = 0x881B8FA0;
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// lwz r3,1912(r31)
	ctx.current_instruction = 0x881B8FA4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1912);
	// b 0x881b9004
	goto loc_881B9004;
loc_881B8FAC:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.current_instruction = 0x881B8FB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x881b9004
	goto loc_881B9004;
loc_881B8FB8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x881b8ff8
	if (ctx.cr6.eq) goto loc_881B8FF8;
	// lwz r4,212(r1)
	ctx.current_instruction = 0x881B8FC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,2988(r31)
	ctx.current_instruction = 0x881B8FC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2988);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,12(r11)
	ctx.current_instruction = 0x881B8FCC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,220(r1)
	ctx.current_instruction = 0x881B8FD0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x881B8FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B8FE0:
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r8,0(r30)
	ctx.current_instruction = 0x881B8FE4;
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// lwz r7,1916(r31)
	ctx.current_instruction = 0x881B8FE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 1916);
	// sth r8,0(r7)
	ctx.current_instruction = 0x881B8FEC;
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// lwz r3,1916(r31)
	ctx.current_instruction = 0x881B8FF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1916);
	// b 0x881b9004
	goto loc_881B9004;
loc_881B8FF8:
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.current_instruction = 0x881B9000;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_881B9004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881B9008;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881B9010;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881B9014;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881C22A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881C22A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881C22A0) {
			switch (rex_dispatch_address) {
				case 0x881C22A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881C22A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881C22A8: goto loc_881C22A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x881C22A8;
	__savegprlr_18(ctx, base);
loc_881C22A8:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,136(r3)
	ctx.current_instruction = 0x881C22AC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r9,140(r3)
	ctx.current_instruction = 0x881C22B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// lwz r11,1776(r3)
	ctx.current_instruction = 0x881C22BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1780(r3)
	ctx.current_instruction = 0x881C22C4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// mullw r7,r29,r31
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r23,r29,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r9,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x881c2310
	if (ctx.cr6.eq) goto loc_881C2310;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r11
	ctx.current_instruction = 0x881C22F4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x881c23b4
	if (ctx.cr6.eq) goto loc_881C23B4;
	// lhzx r11,r10,r8
	ctx.current_instruction = 0x881C2304;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// b 0x881c28a4
	goto loc_881C28A4;
loc_881C2310:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lhzx r28,r7,r8
	ctx.current_instruction = 0x881C2324;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lhzx r6,r7,r11
	ctx.current_instruction = 0x881C232C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r4,r8
	ctx.current_instruction = 0x881C2338;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r10,r4,r11
	ctx.current_instruction = 0x881C233C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhzx r4,r7,r11
	ctx.current_instruction = 0x881C2348;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r6,r5,-16384
	ctx.r6.s64 = ctx.r5.s64 + -16384;
	// lhzx r11,r27,r11
	ctx.current_instruction = 0x881C2350;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// addi r21,r9,-16384
	ctx.r21.s64 = ctx.r9.s64 + -16384;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhzx r19,r7,r8
	ctx.current_instruction = 0x881C235C;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r27,r27,r8
	ctx.current_instruction = 0x881C2364;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r8.u32);
	// addi r8,r10,-16384
	ctx.r8.s64 = ctx.r10.s64 + -16384;
	// addi r7,r11,-16384
	ctx.r7.s64 = ctx.r11.s64 + -16384;
	// cntlzw r20,r6
	ctx.r20.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cntlzw r21,r21
	ctx.r21.u64 = ctx.r21.u32 == 0 ? 32 : __builtin_clz(ctx.r21.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r6,r21,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 27) & 0x1;
	// rlwinm r7,r20,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 27) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// extsh r4,r28
	ctx.r4.s64 = ctx.r28.s16;
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// extsh r7,r19
	ctx.r7.s64 = ctx.r19.s16;
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x881c2490
	if (!ctx.cr6.gt) goto loc_881C2490;
loc_881C23B4:
	// mullw r10,r29,r25
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// lwz r9,1784(r30)
	ctx.current_instruction = 0x881C23B8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1784);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r8
	ctx.current_instruction = 0x881C23C8;
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r7,1788(r30)
	ctx.current_instruction = 0x881C23CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 1788);
	// sthx r11,r7,r8
	ctx.current_instruction = 0x881C23D0;
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r6,14836(r30)
	ctx.current_instruction = 0x881C23D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x881c2488
	if (!ctx.cr6.gt) goto loc_881C2488;
	// lwz r9,288(r30)
	ctx.current_instruction = 0x881C23E0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x881c2488
	if (!ctx.cr6.eq) goto loc_881C2488;
	// lwz r9,3084(r30)
	ctx.current_instruction = 0x881C23EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3084);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r31,0
	ctx.r31.s64 = 0;
	// sthx r31,r10,r9
	ctx.current_instruction = 0x881C23F8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u16);
	// lwz r9,3084(r30)
	ctx.current_instruction = 0x881C23FC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 3084);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r31,2(r8)
	ctx.current_instruction = 0x881C2404;
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r31.u16);
	// lwz r7,15536(r30)
	ctx.current_instruction = 0x881C2408;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// blt cr6,0x881c2488
	if (ctx.cr6.lt) goto loc_881C2488;
	// lwz r9,136(r30)
	ctx.current_instruction = 0x881C2414;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r7,15332(r30)
	ctx.current_instruction = 0x881C2418;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 15332);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r10,r7
	ctx.current_instruction = 0x881C243C;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r8,15332(r30)
	ctx.current_instruction = 0x881C2440;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 15332);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r11,2(r4)
	ctx.current_instruction = 0x881C2448;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lwz r3,15332(r30)
	ctx.current_instruction = 0x881C244C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 15332);
	// sthx r11,r9,r3
	ctx.current_instruction = 0x881C2450;
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u16);
	// lwz r8,15332(r30)
	ctx.current_instruction = 0x881C2454;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 15332);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r11,2(r8)
	ctx.current_instruction = 0x881C245C;
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// lwz r7,15336(r30)
	ctx.current_instruction = 0x881C2460;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 15336);
	// sthx r11,r10,r7
	ctx.current_instruction = 0x881C2464;
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r8,15336(r30)
	ctx.current_instruction = 0x881C2468;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 15336);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r11,2(r6)
	ctx.current_instruction = 0x881C2470;
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// lwz r5,15336(r30)
	ctx.current_instruction = 0x881C2474;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 15336);
	// sthx r11,r9,r5
	ctx.current_instruction = 0x881C2478;
	REX_STORE_U16(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u16);
	// lwz r10,15336(r30)
	ctx.current_instruction = 0x881C247C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 15336);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,2(r4)
	ctx.current_instruction = 0x881C2484;
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
loc_881C2488:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_881C2490:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x881c2668
	if (!ctx.cr6.eq) goto loc_881C2668;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x881c250c
	if (!ctx.cr6.eq) goto loc_881C250C;
	// subf r11,r5,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r5,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r31,r4,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r29,r6,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// subf r28,r4,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r4.u64;
	// xor r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// xor r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// xor r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 31;
	// or r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 | ctx.r31.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r29.u64;
	// andc r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r28.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r6,r31,r4
	ctx.r6.u64 = ctx.r31.u64 & ctx.r4.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r31,r7,r6
	ctx.r31.u64 = ctx.r7.u64 | ctx.r6.u64;
	// b 0x881c28a4
	goto loc_881C28A4;
loc_881C250C:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x881c2580
	if (!ctx.cr6.eq) goto loc_881C2580;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r3,r5,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r31,r4,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r29,r6,r8
	ctx.r29.u64 = ctx.r8.u64 - ctx.r6.u64;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// subf r28,r4,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r4.u64;
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// xor r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// srawi r10,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 31;
	// xor r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 31;
	// or r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 | ctx.r31.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// andc r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r29.u64;
	// andc r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r28.u64;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 | ctx.r8.u64;
	// and r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 & ctx.r4.u64;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r31,r6,r5
	ctx.r31.u64 = ctx.r6.u64 | ctx.r5.u64;
	// b 0x881c28a4
	goto loc_881C28A4;
loc_881C2580:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x881c25f4
	if (!ctx.cr6.eq) goto loc_881C25F4;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r3,r5,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r31,r4,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r29,r8,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r8.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// subf r28,r4,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r4.u64;
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// xor r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// srawi r9,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 31;
	// xor r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 31;
	// or r29,r9,r6
	ctx.r29.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 | ctx.r31.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// andc r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// andc r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r28.u64;
	// and r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 & ctx.r5.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r6,r31,r4
	ctx.r6.u64 = ctx.r31.u64 & ctx.r4.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r31,r7,r6
	ctx.r31.u64 = ctx.r7.u64 | ctx.r6.u64;
	// b 0x881c28a4
	goto loc_881C28A4;
loc_881C25F4:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x881c28a4
	if (!ctx.cr6.eq) goto loc_881C28A4;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r11,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r31,r8,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r29,r6,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// xor r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// subf r28,r8,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r8.u64;
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// xor r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// xor r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// srawi r4,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 31;
	// or r29,r5,r4
	ctx.r29.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 | ctx.r31.u64;
	// and r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 & ctx.r11.u64;
	// andc r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r29.u64;
	// and r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 & ctx.r8.u64;
	// andc r11,r6,r28
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r28.u64;
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// or r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r31,r4,r7
	ctx.r31.u64 = ctx.r4.u64 | ctx.r7.u64;
	// b 0x881c28a4
	goto loc_881C28A4;
loc_881C2668:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x881c26cc
	if (!ctx.cr6.eq) goto loc_881C26CC;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x881c2688
	if (ctx.cr6.eq) goto loc_881C2688;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_881C2688:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x881c2698
	if (ctx.cr6.eq) goto loc_881C2698;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
loc_881C2698:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x881c26a8
	if (ctx.cr6.eq) goto loc_881C26A8;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 + ctx.r31.u64;
loc_881C26A8:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// beq cr6,0x881c26b8
	if (ctx.cr6.eq) goto loc_881C26B8;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
loc_881C26B8:
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// b 0x881c28a4
	goto loc_881C28A4;
loc_881C26CC:
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r29,r9,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r28,r10,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r3,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 31;
	// subf r27,r9,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r31,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 31;
	// subf r26,r11,r9
	ctx.r26.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r29,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 31;
	// srawi r28,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 31;
	// srawi r27,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 31;
	// srawi r26,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 31;
	// not r21,r31
	ctx.r21.u64 = ~ctx.r31.u64;
	// not r26,r26
	ctx.r26.u64 = ~ctx.r26.u64;
	// not r20,r3
	ctx.r20.u64 = ~ctx.r3.u64;
	// not r28,r28
	ctx.r28.u64 = ~ctx.r28.u64;
	// not r29,r29
	ctx.r29.u64 = ~ctx.r29.u64;
	// not r27,r27
	ctx.r27.u64 = ~ctx.r27.u64;
	// and r19,r20,r26
	ctx.r19.u64 = ctx.r20.u64 & ctx.r26.u64;
	// and r18,r28,r21
	ctx.r18.u64 = ctx.r28.u64 & ctx.r21.u64;
	// and r20,r27,r20
	ctx.r20.u64 = ctx.r27.u64 & ctx.r20.u64;
	// and r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 & ctx.r29.u64;
	// and r18,r18,r10
	ctx.r18.u64 = ctx.r18.u64 & ctx.r10.u64;
	// and r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 & ctx.r11.u64;
	// and r27,r27,r29
	ctx.r27.u64 = ctx.r27.u64 & ctx.r29.u64;
	// and r20,r20,r10
	ctx.r20.u64 = ctx.r20.u64 & ctx.r10.u64;
	// and r26,r26,r21
	ctx.r26.u64 = ctx.r26.u64 & ctx.r21.u64;
	// and r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 & ctx.r11.u64;
	// and r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 & ctx.r9.u64;
	// or r19,r19,r18
	ctx.r19.u64 = ctx.r19.u64 | ctx.r18.u64;
	// and r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 & ctx.r9.u64;
	// or r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 | ctx.r28.u64;
	// or r27,r19,r27
	ctx.r27.u64 = ctx.r19.u64 | ctx.r27.u64;
	// or r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 | ctx.r26.u64;
	// subf r26,r27,r5
	ctx.r26.u64 = ctx.r5.u64 - ctx.r27.u64;
	// subf r20,r5,r28
	ctx.r20.u64 = ctx.r28.u64 - ctx.r5.u64;
	// xor r21,r3,r21
	ctx.r21.u64 = ctx.r3.u64 ^ ctx.r21.u64;
	// xor r19,r3,r29
	ctx.r19.u64 = ctx.r3.u64 ^ ctx.r29.u64;
	// subf r18,r28,r27
	ctx.r18.u64 = ctx.r27.u64 - ctx.r28.u64;
	// srawi r3,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 31;
	// srawi r26,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r20.s32 >> 31;
	// srawi r20,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r18.s32 >> 31;
	// eqv r26,r26,r3
	ctx.r26.u64 = ~(ctx.r26.u64 ^ ctx.r3.u64);
	// eqv r3,r20,r3
	ctx.r3.u64 = ~(ctx.r20.u64 ^ ctx.r3.u64);
	// and r10,r21,r10
	ctx.r10.u64 = ctx.r21.u64 & ctx.r10.u64;
	// or r21,r26,r3
	ctx.r21.u64 = ctx.r26.u64 | ctx.r3.u64;
	// xor r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r29.u64;
	// and r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 & ctx.r11.u64;
	// andc r29,r28,r21
	ctx.r29.u64 = ctx.r28.u64 & ~ctx.r21.u64;
	// and r3,r27,r3
	ctx.r3.u64 = ctx.r27.u64 & ctx.r3.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// and r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 & ctx.r5.u64;
	// or r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 | ctx.r3.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// subf r31,r6,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 31;
	// not r29,r10
	ctx.r29.u64 = ~ctx.r10.u64;
	// not r28,r9
	ctx.r28.u64 = ~ctx.r9.u64;
	// xor r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// xor r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r28.u64;
	// xor r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r28.u64;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// and r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subf r31,r7,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r27,r6,r7
	ctx.r27.u64 = ctx.r7.u64 - ctx.r6.u64;
	// or r21,r9,r5
	ctx.r21.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r20,r10,r6
	ctx.r20.u64 = ctx.r10.u64 & ctx.r6.u64;
	// subf r26,r8,r6
	ctx.r26.u64 = ctx.r6.u64 - ctx.r8.u64;
	// srawi r10,r31,31
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 31;
	// srawi r9,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r27.s32 >> 31;
	// srawi r5,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r26.s32 >> 31;
	// or r31,r21,r20
	ctx.r31.u64 = ctx.r21.u64 | ctx.r20.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// and r27,r11,r5
	ctx.r27.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 & ctx.r29.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// and r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 & ctx.r7.u64;
	// and r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r27,r27,r8
	ctx.r27.u64 = ctx.r27.u64 & ctx.r8.u64;
	// and r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ctx.r28.u64;
	// and r10,r5,r29
	ctx.r10.u64 = ctx.r5.u64 & ctx.r29.u64;
	// and r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ctx.r6.u64;
	// or r8,r27,r26
	ctx.r8.u64 = ctx.r27.u64 | ctx.r26.u64;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// or r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subf r7,r9,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// and r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ctx.r4.u64;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// and r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 & ctx.r5.u64;
	// andc r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 | ctx.r4.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r31,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r31.s64 = temp.s64;
loc_881C28A4:
	// lwz r11,136(r30)
	ctx.current_instruction = 0x881C28A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r10,14836(r30)
	ctx.current_instruction = 0x881C28A8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 14836);
	// mullw r11,r25,r11
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r11.s32);
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881c2958
	if (!ctx.cr6.gt) goto loc_881C2958;
	// lwz r11,15536(r30)
	ctx.current_instruction = 0x881C28BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x881c2940
	if (!ctx.cr6.eq) goto loc_881C2940;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r25,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x881c2900
	if (!ctx.cr6.lt) goto loc_881C2900;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r9.u64;
	// b 0x881c2914
	goto loc_881C2914;
loc_881C2900:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x881c2914
	if (!ctx.cr6.gt) goto loc_881C2914;
	// subf r11,r11,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_881C2914:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x881c292c
	if (!ctx.cr6.lt) goto loc_881C292C;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r10.u64;
	// b 0x881c2940
	goto loc_881C2940;
loc_881C292C:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x881c2940
	if (!ctx.cr6.gt) goto loc_881C2940;
	// subf r11,r10,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_881C2940:
	// lwz r10,3084(r30)
	ctx.current_instruction = 0x881C2940;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3084);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r7,r11,r10
	ctx.current_instruction = 0x881C2948;
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r10,3084(r30)
	ctx.current_instruction = 0x881C294C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 3084);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,2(r7)
	ctx.current_instruction = 0x881C2954;
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
loc_881C2958:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r10,1796(r30)
	ctx.current_instruction = 0x881C295C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1796);
	// rlwinm r9,r3,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xC;
	// addi r8,r11,13736
	ctx.r8.s64 = ctx.r11.s64 + 13736;
	// rlwinm r7,r31,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r11,r9,r8
	ctx.current_instruction = 0x881C2970;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r10,r7,r8
	ctx.current_instruction = 0x881C2974;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r9,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x881c29cc
	if (ctx.cr6.eq) goto loc_881C29CC;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c29ac
	if (ctx.cr6.eq) goto loc_881C29AC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x881c29a8
	if (!ctx.cr6.gt) goto loc_881C29A8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x881c29ac
	goto loc_881C29AC;
loc_881C29A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_881C29AC:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881c29cc
	if (ctx.cr6.eq) goto loc_881C29CC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x881c29c8
	if (!ctx.cr6.gt) goto loc_881C29C8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x881c29cc
	goto loc_881C29CC;
loc_881C29C8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_881C29CC:
	// lwz r11,15536(r30)
	ctx.current_instruction = 0x881C29CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15536);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x881c2a48
	if (!ctx.cr6.eq) goto loc_881C2A48;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r25,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bge cr6,0x881c2a08
	if (!ctx.cr6.lt) goto loc_881C2A08;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// b 0x881c2a1c
	goto loc_881C2A1C;
loc_881C2A08:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x881c2a1c
	if (!ctx.cr6.gt) goto loc_881C2A1C;
	// subf r11,r11,r23
	ctx.r11.u64 = ctx.r23.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_881C2A1C:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// bge cr6,0x881c2a34
	if (!ctx.cr6.lt) goto loc_881C2A34;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// b 0x881c2a48
	goto loc_881C2A48;
loc_881C2A34:
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x881c2a48
	if (!ctx.cr6.gt) goto loc_881C2A48;
	// subf r11,r8,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_881C2A48:
	// lwz r11,1784(r30)
	ctx.current_instruction = 0x881C2A48;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1784);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r9,r11,r8
	ctx.current_instruction = 0x881C2A54;
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r5,1788(r30)
	ctx.current_instruction = 0x881C2A58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1788);
	// sthx r10,r5,r8
	ctx.current_instruction = 0x881C2A5C;
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r10.u16);
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DAEC0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881DAEC0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DAEC0;
	ctx.current_instruction = 0x881DAEC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r3)
	ctx.current_instruction = 0x881DAECC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	ctx.current_instruction = 0x881DAED0;
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881DAED4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	ctx.current_instruction = 0x881DAED8;
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r9,16(r3)
	ctx.current_instruction = 0x881DAEDC;
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	ctx.current_instruction = 0x881DAEE0;
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	ctx.current_instruction = 0x881DAEE4;
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	ctx.current_instruction = 0x881DAEE8;
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	ctx.current_instruction = 0x881DAEEC;
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	ctx.current_instruction = 0x881DAEF0;
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	ctx.current_instruction = 0x881DAEF4;
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	ctx.current_instruction = 0x881DAEF8;
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	ctx.current_instruction = 0x881DAEFC;
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	ctx.current_instruction = 0x881DAF00;
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	ctx.current_instruction = 0x881DAF04;
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	ctx.current_instruction = 0x881DAF08;
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	ctx.current_instruction = 0x881DAF0C;
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	ctx.current_instruction = 0x881DAF10;
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	ctx.current_instruction = 0x881DAF14;
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	ctx.current_instruction = 0x881DAF18;
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	ctx.current_instruction = 0x881DAF1C;
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	ctx.current_instruction = 0x881DAF20;
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	ctx.current_instruction = 0x881DAF24;
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	ctx.current_instruction = 0x881DAF28;
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,14464(r3)
	ctx.current_instruction = 0x881DAF2C;
	REX_STORE_U32(ctx.r3.u32 + 14464, ctx.r11.u32);
	// stw r11,14468(r3)
	ctx.current_instruction = 0x881DAF30;
	REX_STORE_U32(ctx.r3.u32 + 14468, ctx.r11.u32);
	// stw r10,14472(r3)
	ctx.current_instruction = 0x881DAF34;
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r10.u32);
	// stw r10,14476(r3)
	ctx.current_instruction = 0x881DAF38;
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r10.u32);
	// stw r11,14480(r3)
	ctx.current_instruction = 0x881DAF3C;
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// stw r11,14484(r3)
	ctx.current_instruction = 0x881DAF40;
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r11.u32);
	// stw r11,14488(r3)
	ctx.current_instruction = 0x881DAF44;
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r11.u32);
	// stw r11,14492(r3)
	ctx.current_instruction = 0x881DAF48;
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r11.u32);
	// stw r11,14496(r3)
	ctx.current_instruction = 0x881DAF4C;
	REX_STORE_U32(ctx.r3.u32 + 14496, ctx.r11.u32);
	// stw r11,14500(r3)
	ctx.current_instruction = 0x881DAF50;
	REX_STORE_U32(ctx.r3.u32 + 14500, ctx.r11.u32);
	// stw r11,14504(r3)
	ctx.current_instruction = 0x881DAF54;
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// stw r11,14508(r3)
	ctx.current_instruction = 0x881DAF58;
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r11,14512(r3)
	ctx.current_instruction = 0x881DAF5C;
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r11,14516(r3)
	ctx.current_instruction = 0x881DAF60;
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// stw r11,14520(r3)
	ctx.current_instruction = 0x881DAF64;
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r11.u32);
	// stw r11,14524(r3)
	ctx.current_instruction = 0x881DAF68;
	REX_STORE_U32(ctx.r3.u32 + 14524, ctx.r11.u32);
	// stw r11,14528(r3)
	ctx.current_instruction = 0x881DAF6C;
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
	// stw r11,14532(r3)
	ctx.current_instruction = 0x881DAF70;
	REX_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// stw r11,14536(r3)
	ctx.current_instruction = 0x881DAF74;
	REX_STORE_U32(ctx.r3.u32 + 14536, ctx.r11.u32);
	// stw r11,14540(r3)
	ctx.current_instruction = 0x881DAF78;
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r11.u32);
	// stw r11,14544(r3)
	ctx.current_instruction = 0x881DAF7C;
	REX_STORE_U32(ctx.r3.u32 + 14544, ctx.r11.u32);
	// stw r11,14548(r3)
	ctx.current_instruction = 0x881DAF80;
	REX_STORE_U32(ctx.r3.u32 + 14548, ctx.r11.u32);
	// stw r11,14552(r3)
	ctx.current_instruction = 0x881DAF84;
	REX_STORE_U32(ctx.r3.u32 + 14552, ctx.r11.u32);
	// stw r11,14556(r3)
	ctx.current_instruction = 0x881DAF88;
	REX_STORE_U32(ctx.r3.u32 + 14556, ctx.r11.u32);
	// stw r10,14560(r3)
	ctx.current_instruction = 0x881DAF8C;
	REX_STORE_U32(ctx.r3.u32 + 14560, ctx.r10.u32);
	// stw r11,14580(r3)
	ctx.current_instruction = 0x881DAF90;
	REX_STORE_U32(ctx.r3.u32 + 14580, ctx.r11.u32);
	// stw r11,14584(r3)
	ctx.current_instruction = 0x881DAF94;
	REX_STORE_U32(ctx.r3.u32 + 14584, ctx.r11.u32);
	// stw r11,14588(r3)
	ctx.current_instruction = 0x881DAF98;
	REX_STORE_U32(ctx.r3.u32 + 14588, ctx.r11.u32);
	// stw r11,14592(r3)
	ctx.current_instruction = 0x881DAF9C;
	REX_STORE_U32(ctx.r3.u32 + 14592, ctx.r11.u32);
	// stw r11,14596(r3)
	ctx.current_instruction = 0x881DAFA0;
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r11.u32);
	// stw r11,14600(r3)
	ctx.current_instruction = 0x881DAFA4;
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r11.u32);
	// stw r11,14604(r3)
	ctx.current_instruction = 0x881DAFA8;
	REX_STORE_U32(ctx.r3.u32 + 14604, ctx.r11.u32);
	// stw r11,14608(r3)
	ctx.current_instruction = 0x881DAFAC;
	REX_STORE_U32(ctx.r3.u32 + 14608, ctx.r11.u32);
	// stw r11,14612(r3)
	ctx.current_instruction = 0x881DAFB0;
	REX_STORE_U32(ctx.r3.u32 + 14612, ctx.r11.u32);
	// stw r11,14616(r3)
	ctx.current_instruction = 0x881DAFB4;
	REX_STORE_U32(ctx.r3.u32 + 14616, ctx.r11.u32);
	// stw r11,14620(r3)
	ctx.current_instruction = 0x881DAFB8;
	REX_STORE_U32(ctx.r3.u32 + 14620, ctx.r11.u32);
	// stw r11,14624(r3)
	ctx.current_instruction = 0x881DAFBC;
	REX_STORE_U32(ctx.r3.u32 + 14624, ctx.r11.u32);
	// stw r11,14628(r3)
	ctx.current_instruction = 0x881DAFC0;
	REX_STORE_U32(ctx.r3.u32 + 14628, ctx.r11.u32);
	// stw r11,14632(r3)
	ctx.current_instruction = 0x881DAFC4;
	REX_STORE_U32(ctx.r3.u32 + 14632, ctx.r11.u32);
	// stw r11,14636(r3)
	ctx.current_instruction = 0x881DAFC8;
	REX_STORE_U32(ctx.r3.u32 + 14636, ctx.r11.u32);
	// stw r11,14640(r3)
	ctx.current_instruction = 0x881DAFCC;
	REX_STORE_U32(ctx.r3.u32 + 14640, ctx.r11.u32);
	// stw r11,14644(r3)
	ctx.current_instruction = 0x881DAFD0;
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r11.u32);
	// stw r11,14648(r3)
	ctx.current_instruction = 0x881DAFD4;
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r11.u32);
	// stw r11,14652(r3)
	ctx.current_instruction = 0x881DAFD8;
	REX_STORE_U32(ctx.r3.u32 + 14652, ctx.r11.u32);
	// stw r11,14656(r3)
	ctx.current_instruction = 0x881DAFDC;
	REX_STORE_U32(ctx.r3.u32 + 14656, ctx.r11.u32);
	// stw r11,14660(r3)
	ctx.current_instruction = 0x881DAFE0;
	REX_STORE_U32(ctx.r3.u32 + 14660, ctx.r11.u32);
	// stw r11,14664(r3)
	ctx.current_instruction = 0x881DAFE4;
	REX_STORE_U32(ctx.r3.u32 + 14664, ctx.r11.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881DCC30) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DCC30;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DCC30) {
			switch (rex_dispatch_address) {
				case 0x881DCC38:
				case 0x881DCD34:
				case 0x881DCD64:
				case 0x881DCD88:
				case 0x881DCDC4:
				case 0x881DCDFC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DCC30;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DCC38: goto loc_881DCC38;
		case 0x881DCD34: goto loc_881DCD34;
		case 0x881DCD64: goto loc_881DCD64;
		case 0x881DCD88: goto loc_881DCD88;
		case 0x881DCDC4: goto loc_881DCDC4;
		case 0x881DCDFC: goto loc_881DCDFC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805082c
	ctx.lr = 0x881DCC38;
	__savegprlr_21(ctx, base);
loc_881DCC38:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x881DCC38;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r1)
	ctx.current_instruction = 0x881DCC3C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r22,r9,r10
	ctx.r22.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r22,16
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 16, ctx.xer);
	// lwz r10,14588(r31)
	ctx.current_instruction = 0x881DCC4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// lwz r11,14596(r31)
	ctx.current_instruction = 0x881DCC50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r29,14540(r31)
	ctx.current_instruction = 0x881DCC58;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 14540);
	// lwz r28,14544(r31)
	ctx.current_instruction = 0x881DCC5C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r27,14548(r31)
	ctx.current_instruction = 0x881DCC60;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 14548);
	// lwz r26,14504(r31)
	ctx.current_instruction = 0x881DCC64;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 14504);
	// lwz r25,14508(r31)
	ctx.current_instruction = 0x881DCC68;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r24,14512(r31)
	ctx.current_instruction = 0x881DCC6C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 14512);
	// lwz r21,14644(r31)
	ctx.current_instruction = 0x881DCC70;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 14644);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// mullw r30,r11,r30
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r23,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r30.s32 >> 2;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addze r9,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r9.s64 = temp.s64;
	// add r23,r28,r10
	ctx.r23.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r28,r25,r9
	ctx.r28.u64 = ctx.r25.u64 + ctx.r9.u64;
	// add r10,r24,r9
	ctx.r10.u64 = ctx.r24.u64 + ctx.r9.u64;
	// add r25,r23,r4
	ctx.r25.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r24,r27,r5
	ctx.r24.u64 = ctx.r27.u64 + ctx.r5.u64;
	// rlwinm r26,r21,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r27,r28,r7
	ctx.r27.u64 = ctx.r28.u64 + ctx.r7.u64;
	// add r23,r10,r8
	ctx.r23.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x881dcd6c
	if (!ctx.cr6.gt) goto loc_881DCD6C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881dcd00
	if (!ctx.cr6.gt) goto loc_881DCD00;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
loc_881DCCD8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881dccfc
	if (!ctx.cr6.gt) goto loc_881DCCFC;
loc_881DCCE4:
	// lbzu r11,1(r9)
	ctx.current_instruction = 0x881DCCE4;
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,1(r8)
	ctx.current_instruction = 0x881DCCEC;
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// lwz r11,14596(r31)
	ctx.current_instruction = 0x881DCCF0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881dcce4
	if (ctx.cr6.lt) goto loc_881DCCE4;
loc_881DCCFC:
	// bdnz 0x881dccd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881DCCD8;
loc_881DCD00:
	// lwz r9,14480(r31)
	ctx.current_instruction = 0x881DCD00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14480);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,14528(r31)
	ctx.current_instruction = 0x881DCD0C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14528);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x881DCD14;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x881dc3d8
	ctx.lr = 0x881DCD34;
	sub_881DC3D8(ctx, base);
loc_881DCD34:
	// lwz r9,14480(r31)
	ctx.current_instruction = 0x881DCD34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 14480);
	// lwz r6,14596(r31)
	ctx.current_instruction = 0x881DCD38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// stw r28,84(r1)
	ctx.current_instruction = 0x881DCD44;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r5,14528(r31)
	ctx.current_instruction = 0x881DCD4C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14528);
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// bl 0x881dc3d8
	ctx.lr = 0x881DCD64;
	sub_881DC3D8(ctx, base);
loc_881DCD64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
loc_881DCD6C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881dce10
	if (!ctx.cr6.gt) goto loc_881DCE10;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_881DCD78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,14480(r31)
	ctx.current_instruction = 0x881DCD7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14480);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881ece80
	ctx.lr = 0x881DCD88;
	sub_881ECE80(ctx, base);
loc_881DCD88:
	// lwz r10,14596(r31)
	ctx.current_instruction = 0x881DCD88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 14596);
	// lwz r11,14588(r31)
	ctx.current_instruction = 0x881DCD8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14588);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x881dcd78
	if (!ctx.cr0.eq) goto loc_881DCD78;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881dce10
	if (!ctx.cr6.gt) goto loc_881DCE10;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_881DCDB4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,14488(r31)
	ctx.current_instruction = 0x881DCDB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14488);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881ece80
	ctx.lr = 0x881DCDC4;
	sub_881ECE80(ctx, base);
loc_881DCDC4:
	// lwz r11,14648(r31)
	ctx.current_instruction = 0x881DCDC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14648);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r25,r26,r25
	ctx.r25.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x881dcdb4
	if (!ctx.cr0.eq) goto loc_881DCDB4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x881dce10
	if (!ctx.cr6.gt) goto loc_881DCE10;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_881DCDEC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,14488(r31)
	ctx.current_instruction = 0x881DCDF0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 14488);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x881ece80
	ctx.lr = 0x881DCDFC;
	sub_881ECE80(ctx, base);
loc_881DCDFC:
	// lwz r11,14648(r31)
	ctx.current_instruction = 0x881DCDFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14648);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r24,r26,r24
	ctx.r24.u64 = ctx.r26.u64 + ctx.r24.u64;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bne 0x881dcdec
	if (!ctx.cr0.eq) goto loc_881DCDEC;
loc_881DCE10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805087c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881DF1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881DF1E0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881DF1E0) {
			switch (rex_dispatch_address) {
				case 0x881DF1E8:
				case 0x881DF374:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881DF1E0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881DF1E8: goto loc_881DF1E8;
		case 0x881DF374: goto loc_881DF374;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881DF1E8;
	__savegprlr_14(ctx, base);
loc_881DF1E8:
	// stwu r1,-256(r1)
	ctx.current_instruction = 0x881DF1E8;
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,356(r1)
	ctx.current_instruction = 0x881DF1EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// stw r9,324(r1)
	ctx.current_instruction = 0x881DF1F8;
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// srawi r11,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 31;
	// stw r4,284(r1)
	ctx.current_instruction = 0x881DF200;
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// xor r10,r24,r11
	ctx.r10.u64 = ctx.r24.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881df21c
	if (ctx.cr6.eq) goto loc_881DF21C;
	// srawi r26,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 1;
loc_881DF21C:
	// lwz r25,364(r1)
	ctx.current_instruction = 0x881DF21C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 31;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// xor r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x881df23c
	if (ctx.cr6.eq) goto loc_881DF23C;
	// srawi r27,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r25.s32 >> 1;
loc_881DF23C:
	// lwz r10,348(r1)
	ctx.current_instruction = 0x881DF23C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lis r31,1
	ctx.r31.s64 = 65536;
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,340(r1)
	ctx.current_instruction = 0x881DF248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r22,r10,-1
	ctx.r22.s64 = ctx.r10.s64 + -1;
	// subf r30,r31,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r31.u64;
	// rlwinm r19,r7,16,0,15
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// divw r16,r30,r22
	ctx.r16.u64 = uint32_t((ctx.r22.s32 && !(ctx.r30.s32 == INT32_MIN && ctx.r22.s32 == -1)) ? ctx.r30.s32 / ctx.r22.s32 : 0);
	// subf r21,r31,r19
	ctx.r21.u64 = ctx.r19.u64 - ctx.r31.u64;
	// srawi r31,r16,4
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r16.s32 >> 4;
	// rotlwi r28,r21,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r21.u32, 1);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// lis r29,0
	ctx.r29.s64 = 0;
	// addi r20,r9,-1
	ctx.r20.s64 = ctx.r9.s64 + -1;
	// ori r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 32768;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// andc r31,r20,r28
	ctx.r31.u64 = ctx.r20.u64 & ~ctx.r28.u64;
	// andc r30,r22,r30
	ctx.r30.u64 = ctx.r22.u64 & ~ctx.r30.u64;
	// subf r14,r29,r11
	ctx.r14.u64 = ctx.r11.u64 - ctx.r29.u64;
	// twllei r20,0
	if (ctx.r20.s32 == 0 || ctx.r20.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r20,r21,r20
	ctx.r20.u64 = uint32_t((ctx.r20.s32 && !(ctx.r21.s32 == INT32_MIN && ctx.r20.s32 == -1)) ? ctx.r21.s32 / ctx.r20.s32 : 0);
	// twlgei r31,-1
	if (ctx.r31.s32 == -1 || ctx.r31.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r30,-1
	if (ctx.r30.s32 == -1 || ctx.r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// rlwinm r18,r26,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r27,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// cmpw cr6,r14,r29
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x881df340
	if (ctx.cr6.lt) goto loc_881DF340;
	// srawi r11,r20,4
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 4;
	// lwz r27,380(r1)
	ctx.current_instruction = 0x881DF2C0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// subf r23,r29,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r29.u64;
loc_881DF2D4:
	// srawi r30,r21,17
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1FFFF) != 0);
	ctx.r30.s64 = ctx.r21.s32 >> 17;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x881df32c
	if (ctx.cr6.lt) goto loc_881DF32C;
	// mullw r28,r30,r15
	ctx.r28.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r15.s32);
	// add r26,r28,r6
	ctx.r26.u64 = ctx.r28.u64 + ctx.r6.u64;
	// addi r25,r27,1
	ctx.r25.s64 = ctx.r27.s64 + 1;
	// rlwinm r24,r20,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
loc_881DF2F8:
	// srawi r30,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 17;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// lbzx r30,r26,r30
	ctx.current_instruction = 0x881DF308;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// lbzx r4,r4,r5
	ctx.current_instruction = 0x881DF30C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stbx r30,r25,r31
	ctx.current_instruction = 0x881DF310;
	REX_STORE_U8(ctx.r25.u32 + ctx.r31.u32, ctx.r30.u8);
	// stbx r4,r27,r31
	ctx.current_instruction = 0x881DF314;
	REX_STORE_U8(ctx.r27.u32 + ctx.r31.u32, ctx.r4.u8);
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// ble cr6,0x881df2f8
	if (!ctx.cr6.gt) goto loc_881DF2F8;
	// lwz r25,364(r1)
	ctx.current_instruction = 0x881DF320;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r24,356(r1)
	ctx.current_instruction = 0x881DF324;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,284(r1)
	ctx.current_instruction = 0x881DF328;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
loc_881DF32C:
	// add r21,r17,r21
	ctx.r21.u64 = ctx.r17.u64 + ctx.r21.u64;
	// add r27,r27,r18
	ctx.r27.u64 = ctx.r27.u64 + ctx.r18.u64;
	// cmpw cr6,r21,r14
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x881df2d4
	if (!ctx.cr6.gt) goto loc_881DF2D4;
	// lwz r23,324(r1)
	ctx.current_instruction = 0x881DF33C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
loc_881DF340:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881df37c
	if (!ctx.cr6.eq) goto loc_881DF37C;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881df37c
	if (!ctx.cr6.eq) goto loc_881DF37C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r16,92(r1)
	ctx.current_instruction = 0x881DF35C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r20,84(r1)
	ctx.current_instruction = 0x881DF364;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x881DF36C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x881de768
	ctx.lr = 0x881DF374;
	sub_881DE768(ctx, base);
loc_881DF374:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881DF37C:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpw cr6,r14,r29
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x881df408
	if (ctx.cr6.lt) goto loc_881DF408;
	// srawi r11,r20,4
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r20.s32 >> 4;
	// rlwinm r5,r16,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r27,r24,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + ctx.r19.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// subf r30,r29,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r29.u64;
loc_881DF3A4:
	// add r11,r28,r16
	ctx.r11.u64 = ctx.r28.u64 + ctx.r16.u64;
	// srawi r9,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 16;
	// srawi r3,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x881df3f8
	if (ctx.cr6.lt) goto loc_881DF3F8;
	// mullw r7,r9,r23
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// mullw r9,r3,r23
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r23.s32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r31,r8,r24
	ctx.r31.u64 = ctx.r8.u64 + ctx.r24.u64;
loc_881DF3D4:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// lbzx r6,r7,r9
	ctx.current_instruction = 0x881DF3E0;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r3,r9
	ctx.current_instruction = 0x881DF3E4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stbx r6,r8,r10
	ctx.current_instruction = 0x881DF3E8;
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u8);
	// stbx r9,r31,r10
	ctx.current_instruction = 0x881DF3EC;
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// ble cr6,0x881df3d4
	if (!ctx.cr6.gt) goto loc_881DF3D4;
loc_881DF3F8:
	// add r28,r5,r28
	ctx.r28.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 + ctx.r8.u64;
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// ble cr6,0x881df3a4
	if (!ctx.cr6.gt) goto loc_881DF3A4;
loc_881DF408:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881E2AF8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881E2AF8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E2AF8;
	ctx.current_instruction = 0x881E2AF8;
	uint32_t ea{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881E2B08:
	// lhz r10,2(r11)
	ctx.current_instruction = 0x881E2B08;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthu r8,2(r11)
	ctx.current_instruction = 0x881E2B18;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x881e2b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E2B08;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881E3370) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881E3370;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881E3370) {
			switch (rex_dispatch_address) {
				case 0x881E3378:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881E3370;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881E3378: goto loc_881E3378;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805081c
	ctx.lr = 0x881E3378;
	__savegprlr_17(ctx, base);
loc_881E3378:
	// stwu r1,-1232(r1)
	ctx.current_instruction = 0x881E3378;
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// lis r10,-30718
	ctx.r10.s64 = -2013134848;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addi r10,r10,6888
	ctx.r10.s64 = ctx.r10.s64 + 6888;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x881e3640
	if (!ctx.cr6.eq) goto loc_881E3640;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881e33d8
	if (!ctx.cr6.eq) goto loc_881E33D8;
	// lwz r11,1324(r1)
	ctx.current_instruction = 0x881E33AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881e3be0
	if (!ctx.cr6.gt) goto loc_881E3BE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_881E33C4:
	// ldux r9,r11,r5
	ctx.current_instruction = 0x881E33C4;
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdux r9,r10,r7
	ctx.current_instruction = 0x881E33C8;
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x881e33c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E33C4;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881E33D8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// beq cr6,0x881e33e8
	if (ctx.cr6.eq) goto loc_881E33E8;
	// li r30,6
	ctx.r30.s64 = 6;
loc_881E33E8:
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// lwz r11,1316(r1)
	ctx.current_instruction = 0x881E33EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,1324(r1)
	ctx.current_instruction = 0x881E33F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// ble cr6,0x881e3be0
	if (!ctx.cr6.gt) goto loc_881E3BE0;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_881E3424:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r4,3
	ctx.r27.s64 = ctx.r4.s64 + 3;
	// addi r26,r28,3
	ctx.r26.s64 = ctx.r28.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881E3438:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r8,4(r10)
	ctx.current_instruction = 0x881E343C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r6,6(r10)
	ctx.current_instruction = 0x881E3440;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r24,2(r10)
	ctx.current_instruction = 0x881E3448;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r23,0(r10)
	ctx.current_instruction = 0x881E3450;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbzx r22,r4,r11
	ctx.current_instruction = 0x881E3458;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbzx r21,r31,r9
	ctx.current_instruction = 0x881E345C;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lbzx r20,r3,r9
	ctx.current_instruction = 0x881E3464;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r19,r9,r5
	ctx.current_instruction = 0x881E3468;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// mullw r8,r21,r8
	ctx.r8.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r20,r6
	ctx.r9.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r19,r24
	ctx.r9.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r24.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r23,r22
	ctx.r9.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r22.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// sraw. r9,r9,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e349c
	if (!ctx.cr0.lt) goto loc_881E349C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e34a8
	goto loc_881E34A8;
loc_881E349C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e34a8
	if (!ctx.cr6.gt) goto loc_881E34A8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E34A8:
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stbx r6,r28,r11
	ctx.current_instruction = 0x881E34B4;
	REX_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r6.u8);
	// lhz r24,2(r10)
	ctx.current_instruction = 0x881E34B8;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r23,0(r10)
	ctx.current_instruction = 0x881E34BC;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r19,1(r8)
	ctx.current_instruction = 0x881E34C0;
	ctx.r19.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbzx r22,r31,r9
	ctx.current_instruction = 0x881E34C4;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r21,r3,r9
	ctx.current_instruction = 0x881E34C8;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r20,r9,r5
	ctx.current_instruction = 0x881E34CC;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r9,4(r10)
	ctx.current_instruction = 0x881E34D0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r6,6(r10)
	ctx.current_instruction = 0x881E34D4;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r9,r21,r6
	ctx.r9.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r6.s32);
	// mullw r8,r22,r8
	ctx.r8.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r20,r6
	ctx.r9.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r23
	ctx.r6.s64 = ctx.r23.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r9,r6,r19
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r19.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// sraw. r8,r9,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881e3518
	if (!ctx.cr0.lt) goto loc_881E3518;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881e3524
	goto loc_881E3524;
loc_881E3518:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881e3524
	if (!ctx.cr6.gt) goto loc_881E3524;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881E3524:
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stb r8,1(r6)
	ctx.current_instruction = 0x881E3530;
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r8.u8);
	// lhz r24,4(r10)
	ctx.current_instruction = 0x881E3534;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r21,2(r10)
	ctx.current_instruction = 0x881E3538;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbzx r22,r31,r9
	ctx.current_instruction = 0x881E353C;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbz r20,0(r9)
	ctx.current_instruction = 0x881E3540;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lhz r6,0(r10)
	ctx.current_instruction = 0x881E3544;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r23,r6
	ctx.r23.s64 = ctx.r6.s16;
	// lhz r8,6(r10)
	ctx.current_instruction = 0x881E354C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbzx r6,r3,r9
	ctx.current_instruction = 0x881E3554;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbzx r8,r9,r5
	ctx.current_instruction = 0x881E3564;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// mullw r9,r22,r24
	ctx.r9.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r24.s32);
	// mullw r8,r8,r21
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r21.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r20
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r20.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r9,r29
	ctx.r6.u64 = ctx.r9.u64 + ctx.r29.u64;
	// sraw. r8,r6,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r8.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x881e3594
	if (!ctx.cr0.lt) goto loc_881E3594;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x881e35a0
	goto loc_881E35A0;
loc_881E3594:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x881e35a0
	if (!ctx.cr6.gt) goto loc_881E35A0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_881E35A0:
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stb r8,2(r6)
	ctx.current_instruction = 0x881E35A8;
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r8.u8);
	// lbzx r6,r3,r9
	ctx.current_instruction = 0x881E35AC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lhz r21,2(r10)
	ctx.current_instruction = 0x881E35B0;
	ctx.r21.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbzx r8,r27,r11
	ctx.current_instruction = 0x881E35B4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lhz r23,4(r10)
	ctx.current_instruction = 0x881E35B8;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbzx r24,r9,r5
	ctx.current_instruction = 0x881E35BC;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lbzx r9,r31,r9
	ctx.current_instruction = 0x881E35C0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lhz r22,6(r10)
	ctx.current_instruction = 0x881E35C8;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r23.s32);
	// lhz r23,0(r10)
	ctx.current_instruction = 0x881E35D0;
	ctx.r23.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r22,r22
	ctx.r22.s64 = ctx.r22.s16;
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// mullw r6,r6,r22
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r22.s32);
	// extsh r22,r21
	ctx.r22.s64 = ctx.r21.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r24,r22
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r22.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// sraw. r9,r8,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e360c
	if (!ctx.cr0.lt) goto loc_881E360C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3618
	goto loc_881E3618;
loc_881E360C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3618
	if (!ctx.cr6.gt) goto loc_881E3618;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3618:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r9,r26,r11
	ctx.current_instruction = 0x881E361C;
	REX_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x881e3438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3438;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 + ctx.r7.u64;
	// bne 0x881e3424
	if (!ctx.cr0.eq) goto loc_881E3424;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881E3640:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881e389c
	if (!ctx.cr6.eq) goto loc_881E389C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x881e3658
	if (ctx.cr6.eq) goto loc_881E3658;
	// li r3,6
	ctx.r3.s64 = 6;
loc_881E3658:
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r8,1316(r1)
	ctx.current_instruction = 0x881E365C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,1324(r1)
	ctx.current_instruction = 0x881E3664;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r31,r8,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r8.u64;
	// ble cr6,0x881e3be0
	if (!ctx.cr6.gt) goto loc_881E3BE0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_881E3680:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r4,2
	ctx.r29.s64 = ctx.r4.s64 + 2;
	// addi r28,r30,3
	ctx.r28.s64 = ctx.r30.s64 + 3;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881E3694:
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lhz r8,4(r11)
	ctx.current_instruction = 0x881E3698;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,2(r11)
	ctx.current_instruction = 0x881E369C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbzx r26,r4,r10
	ctx.current_instruction = 0x881E36A0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r25,6(r11)
	ctx.current_instruction = 0x881E36AC;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r24,0(r11)
	ctx.current_instruction = 0x881E36B0;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	ctx.current_instruction = 0x881E36B4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// lbz r22,2(r9)
	ctx.current_instruction = 0x881E36BC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r24,r24
	ctx.r24.s64 = ctx.r24.s16;
	// lbz r21,-1(r9)
	ctx.current_instruction = 0x881E36C4;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// mullw r8,r23,r8
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r26,r6
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
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
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e36f8
	if (!ctx.cr0.lt) goto loc_881E36F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3704
	goto loc_881E3704;
loc_881E36F8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3704
	if (!ctx.cr6.gt) goto loc_881E3704;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3704:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stbx r8,r30,r10
	ctx.current_instruction = 0x881E370C;
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r23,r4,r10
	ctx.current_instruction = 0x881E3710;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbz r24,2(r9)
	ctx.current_instruction = 0x881E3714;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lhz r6,6(r11)
	ctx.current_instruction = 0x881E3718;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,4(r11)
	ctx.current_instruction = 0x881E371C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r25,r6
	ctx.r25.s64 = ctx.r6.s16;
	// lhz r6,2(r11)
	ctx.current_instruction = 0x881E3724;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,3(r9)
	ctx.current_instruction = 0x881E3728;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r9,1(r9)
	ctx.current_instruction = 0x881E3730;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// lhz r24,0(r11)
	ctx.current_instruction = 0x881E373C;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r8,r26,r25
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r6
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e3770
	if (!ctx.cr0.lt) goto loc_881E3770;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e377c
	goto loc_881E377C;
loc_881E3770:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e377c
	if (!ctx.cr6.gt) goto loc_881E377C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E377C:
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stb r6,1(r8)
	ctx.current_instruction = 0x881E3788;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// lhz r24,6(r11)
	ctx.current_instruction = 0x881E378C;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r22,0(r11)
	ctx.current_instruction = 0x881E3790;
	ctx.r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r23,1(r9)
	ctx.current_instruction = 0x881E3794;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lhz r8,4(r11)
	ctx.current_instruction = 0x881E3798;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r6,2(r11)
	ctx.current_instruction = 0x881E379C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r26,3(r9)
	ctx.current_instruction = 0x881E37A0;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r25,2(r9)
	ctx.current_instruction = 0x881E37A8;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// lbz r26,4(r9)
	ctx.current_instruction = 0x881E37B4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r9,r25,r6
	ctx.r9.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
	// extsh r6,r22
	ctx.r6.s64 = ctx.r22.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r23,r6
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e37ec
	if (!ctx.cr0.lt) goto loc_881E37EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e37f8
	goto loc_881E37F8;
loc_881E37EC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e37f8
	if (!ctx.cr6.gt) goto loc_881E37F8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E37F8:
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stb r6,2(r8)
	ctx.current_instruction = 0x881E3804;
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r6.u8);
	// lhz r6,2(r11)
	ctx.current_instruction = 0x881E3808;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r26,4(r11)
	ctx.current_instruction = 0x881E380C;
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r8,1(r9)
	ctx.current_instruction = 0x881E3810;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r25,2(r9)
	ctx.current_instruction = 0x881E3818;
	ctx.r25.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// lbz r23,3(r9)
	ctx.current_instruction = 0x881E3820;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// mullw r9,r8,r6
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lhz r24,6(r11)
	ctx.current_instruction = 0x881E3828;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r6,0(r11)
	ctx.current_instruction = 0x881E382C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r8,r25,r26
	ctx.r8.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r26.s32);
	// lbzx r26,r29,r10
	ctx.current_instruction = 0x881E3834;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// extsh r25,r24
	ctx.r25.s64 = ctx.r24.s16;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sraw. r9,r9,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e3868
	if (!ctx.cr0.lt) goto loc_881E3868;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3874
	goto loc_881E3874;
loc_881E3868:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3874
	if (!ctx.cr6.gt) goto loc_881E3874;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3874:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r9,r28,r10
	ctx.current_instruction = 0x881E3878;
	REX_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x881e3694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3694;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// bne 0x881e3680
	if (!ctx.cr0.eq) goto loc_881E3680;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
loc_881E389C:
	// addi r9,r1,47
	ctx.r9.s64 = ctx.r1.s64 + 47;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// rlwinm r28,r9,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// beq cr6,0x881e38b8
	if (ctx.cr6.eq) goto loc_881E38B8;
	// li r8,6
	ctx.r8.s64 = 6;
loc_881E38B8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x881e38c8
	if (ctx.cr6.eq) goto loc_881E38C8;
	// li r9,6
	ctx.r9.s64 = 6;
loc_881E38C8:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,1316(r1)
	ctx.current_instruction = 0x881E38CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r23,1324(r1)
	ctx.current_instruction = 0x881E38D4;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// addi r31,r9,-7
	ctx.r31.s64 = ctx.r9.s64 + -7;
	// subfic r26,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r26.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r27,r9,-1
	ctx.r27.s64 = ctx.r9.s64 + -1;
	// ble cr6,0x881e3be0
	if (!ctx.cr6.gt) goto loc_881E3BE0;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r30,r5,r8
	ctx.r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r9,-1
	ctx.r25.s64 = ctx.r9.s64 + -1;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_881E3910:
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r8,r22,-2
	ctx.r8.s64 = ctx.r22.s64 + -2;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_881E3920:
	// lhz r4,4(r10)
	ctx.current_instruction = 0x881E3920;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r3,6(r10)
	ctx.current_instruction = 0x881E3924;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbzx r21,r9,r29
	ctx.current_instruction = 0x881E3928;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbzx r20,r9,r30
	ctx.current_instruction = 0x881E3930;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r19,2(r10)
	ctx.current_instruction = 0x881E3938;
	ctx.r19.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// lbzx r21,r9,r5
	ctx.current_instruction = 0x881E3940;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lhz r18,0(r10)
	ctx.current_instruction = 0x881E3944;
	ctx.r18.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r17,0(r9)
	ctx.current_instruction = 0x881E3948;
	ctx.r17.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r3.s32);
	// extsh r20,r19
	ctx.r20.s64 = ctx.r19.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r21,r20
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r20.s32);
	// extsh r21,r18
	ctx.r21.s64 = ctx.r18.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r17,r21
	ctx.r3.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r21.s32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r27
	ctx.r4.u64 = ctx.r4.u64 + ctx.r27.u64;
	// sraw r3,r4,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// sthu r4,2(r8)
	ctx.current_instruction = 0x881E397C;
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x881e3920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E3920;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r25,r25,r5
	ctx.r25.u64 = ctx.r25.u64 + ctx.r5.u64;
	// addi r22,r22,64
	ctx.r22.s64 = ctx.r22.s64 + 64;
	// bne 0x881e3910
	if (!ctx.cr0.eq) goto loc_881E3910;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881e3be0
	if (!ctx.cr6.gt) goto loc_881E3BE0;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r5,r6,2
	ctx.r5.s64 = ctx.r6.s64 + 2;
loc_881E39A4:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_881E39BC:
	// lhz r9,2(r10)
	ctx.current_instruction = 0x881E39BC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,-4(r10)
	ctx.current_instruction = 0x881E39C0;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r30,6(r11)
	ctx.current_instruction = 0x881E39C4;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,0(r11)
	ctx.current_instruction = 0x881E39CC;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lhz r28,-2(r10)
	ctx.current_instruction = 0x881E39D8;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhz r27,2(r11)
	ctx.current_instruction = 0x881E39E0;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// lhz r30,0(r10)
	ctx.current_instruction = 0x881E39E8;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r25,4(r11)
	ctx.current_instruction = 0x881E39EC;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// extsh r29,r25
	ctx.r29.s64 = ctx.r25.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// srawi. r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e3a2c
	if (!ctx.cr0.lt) goto loc_881E3A2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3a38
	goto loc_881E3A38;
loc_881E3A2C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3a38
	if (!ctx.cr6.gt) goto loc_881E3A38;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3A38:
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r9,-2(r8)
	ctx.current_instruction = 0x881E3A3C;
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r9.u8);
	// lhz r28,0(r10)
	ctx.current_instruction = 0x881E3A40;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r30,-2(r10)
	ctx.current_instruction = 0x881E3A44;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// lhz r8,4(r10)
	ctx.current_instruction = 0x881E3A4C;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r9,6(r11)
	ctx.current_instruction = 0x881E3A50;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r29,0(r11)
	ctx.current_instruction = 0x881E3A54;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r27,2(r11)
	ctx.current_instruction = 0x881E3A60;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhz r25,4(r11)
	ctx.current_instruction = 0x881E3A68;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r24,2(r10)
	ctx.current_instruction = 0x881E3A70;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// extsh r30,r27
	ctx.r30.s64 = ctx.r27.s16;
	// extsh r29,r28
	ctx.r29.s64 = ctx.r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// extsh r30,r25
	ctx.r30.s64 = ctx.r25.s16;
	// extsh r29,r24
	ctx.r29.s64 = ctx.r24.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + ctx.r26.u64;
	// srawi. r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e3ab0
	if (!ctx.cr0.lt) goto loc_881E3AB0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3abc
	goto loc_881E3ABC;
loc_881E3AB0:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3abc
	if (!ctx.cr6.gt) goto loc_881E3ABC;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3ABC:
	// stbx r9,r4,r6
	ctx.current_instruction = 0x881E3ABC;
	REX_STORE_U8(ctx.r4.u32 + ctx.r6.u32, ctx.r9.u8);
	// lhz r30,4(r11)
	ctx.current_instruction = 0x881E3AC0;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,6(r10)
	ctx.current_instruction = 0x881E3AC4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r9,0(r11)
	ctx.current_instruction = 0x881E3AC8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// lhz r29,0(r10)
	ctx.current_instruction = 0x881E3AD0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r8,6(r11)
	ctx.current_instruction = 0x881E3AD4;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhz r27,2(r10)
	ctx.current_instruction = 0x881E3AE0;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// lhz r24,2(r11)
	ctx.current_instruction = 0x881E3AE8;
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r8,r9,r29
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// lhz r29,4(r10)
	ctx.current_instruction = 0x881E3AF0;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r25,r28
	ctx.r9.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// extsh r28,r24
	ctx.r28.s64 = ctx.r24.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r28,r27
	ctx.r8.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r30,r29
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + ctx.r26.u64;
	// srawi. r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e3b30
	if (!ctx.cr0.lt) goto loc_881E3B30;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3b3c
	goto loc_881E3B3C;
loc_881E3B30:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3b3c
	if (!ctx.cr6.gt) goto loc_881E3B3C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3B3C:
	// stbx r9,r5,r6
	ctx.current_instruction = 0x881E3B3C;
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r9.u8);
	// lhz r25,4(r11)
	ctx.current_instruction = 0x881E3B40;
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r8,8(r10)
	ctx.current_instruction = 0x881E3B44;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r30,6(r11)
	ctx.current_instruction = 0x881E3B48;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lhz r8,2(r10)
	ctx.current_instruction = 0x881E3B50;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r29,0(r11)
	ctx.current_instruction = 0x881E3B54;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,4(r10)
	ctx.current_instruction = 0x881E3B60;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhz r27,2(r11)
	ctx.current_instruction = 0x881E3B68;
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// lhz r30,6(r10)
	ctx.current_instruction = 0x881E3B70;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r8,r29,r8
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// extsh r29,r27
	ctx.r29.s64 = ctx.r27.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r28
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// extsh r29,r25
	ctx.r29.s64 = ctx.r25.s16;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r29,r30
	ctx.r8.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// srawi. r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x881e3bb0
	if (!ctx.cr0.lt) goto loc_881E3BB0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x881e3bbc
	goto loc_881E3BBC;
loc_881E3BB0:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x881e3bbc
	if (!ctx.cr6.gt) goto loc_881E3BBC;
	// li r9,255
	ctx.r9.s64 = 255;
loc_881E3BBC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stbx r9,r3,r6
	ctx.current_instruction = 0x881E3BC4;
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x881e39bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881E39BC;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// bne 0x881e39a4
	if (!ctx.cr0.eq) goto loc_881E39A4;
loc_881E3BE0:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x8805086c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_85) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE1C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE1C;
	ctx.current_instruction = 0x881EEE1C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_104) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEEB4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEEB4;
	ctx.current_instruction = 0x881EEEB4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_127) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF6C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEF6C;
	ctx.current_instruction = 0x881EEF6C;
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(__restvmx_18) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEF98);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEF98;
	ctx.current_instruction = 0x881EEF98;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_91) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0E4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0E4;
	ctx.current_instruction = 0x881EF0E4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_102) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF13C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF13C;
	ctx.current_instruction = 0x881EF13C;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881F09B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881F09B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881F09B8) {
			switch (rex_dispatch_address) {
				case 0x881F09C0:
				case 0x881F09CC:
				case 0x881F0A10:
				case 0x881F0A1C:
				case 0x881F0A2C:
				case 0x881F0A30:
				case 0x881F0A3C:
				case 0x881F0A50:
				case 0x881F0A80:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F09B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881F09C0: goto loc_881F09C0;
		case 0x881F09CC: goto loc_881F09CC;
		case 0x881F0A10: goto loc_881F0A10;
		case 0x881F0A1C: goto loc_881F0A1C;
		case 0x881F0A2C: goto loc_881F0A2C;
		case 0x881F0A30: goto loc_881F0A30;
		case 0x881F0A3C: goto loc_881F0A3C;
		case 0x881F0A50: goto loc_881F0A50;
		case 0x881F0A80: goto loc_881F0A80;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x881F09C0;
	__savegprlr_29(ctx, base);
loc_881F09C0:
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881F09C0;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881f1a60
	ctx.lr = 0x881F09CC;
	sub_881F1A60(ctx, base);
loc_881F09CC:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r29,r11,24064
	ctx.r29.s64 = ctx.r11.s64 + 24064;
	// beq cr6,0x881f0a44
	if (ctx.cr6.eq) goto loc_881F0A44;
	// lwz r11,0(r29)
	ctx.current_instruction = 0x881F09DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x881f09f4
	if (!ctx.cr6.eq) goto loc_881F09F4;
	// lbz r10,148(r11)
	ctx.current_instruction = 0x881F09E8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 148);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x881f0a08
	if (!ctx.cr0.eq) goto loc_881F0A08;
loc_881F09F4:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x881f0a24
	if (!ctx.cr6.eq) goto loc_881F0A24;
	// lbz r11,76(r11)
	ctx.current_instruction = 0x881F09FC;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x881f0a24
	if (ctx.cr0.eq) goto loc_881F0A24;
loc_881F0A08:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x881f1a60
	ctx.lr = 0x881F0A10;
	sub_881F1A60(ctx, base);
loc_881F0A10:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x881f1a60
	ctx.lr = 0x881F0A1C;
	sub_881F1A60(ctx, base);
loc_881F0A1C:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x881f0a44
	if (ctx.cr6.eq) goto loc_881F0A44;
loc_881F0A24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f1a60
	ctx.lr = 0x881F0A2C;
	sub_881F1A60(ctx, base);
loc_881F0A2C:
	// bl 0x881ec570
	ctx.lr = 0x881F0A30;
	sub_881EC570(ctx, base);
loc_881F0A30:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x881f0a44
	if (!ctx.cr0.eq) goto loc_881F0A44;
	// bl 0x881e9030
	ctx.lr = 0x881F0A3C;
	sub_881E9030(ctx, base);
loc_881F0A3C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x881f0a48
	goto loc_881F0A48;
loc_881F0A44:
	// li r30,0
	ctx.r30.s64 = 0;
loc_881F0A48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881f19c8
	ctx.lr = 0x881F0A50;
	sub_881F19C8(ctx, base);
loc_881F0A50:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r11,r11,r29
	ctx.current_instruction = 0x881F0A64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	ctx.current_instruction = 0x881F0A70;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x881f0a88
	if (ctx.cr6.eq) goto loc_881F0A88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88052a38
	ctx.lr = 0x881F0A80;
	sub_88052A38(ctx, base);
loc_881F0A80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x881f0a8c
	goto loc_881F0A8C;
loc_881F0A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881F0A8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881F60E0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F60E0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F60E0;
	ctx.current_instruction = 0x881F60E0;
	uint32_t ea{};
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,144
	ctx.r9.s64 = 144;
	// add r2,r5,r8
	ctx.r2.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v14,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v11,r0,r2
	ea = (ctx.r2.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r12,r6,1,0,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v4,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// lvx128 v2,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v1,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v3,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lvx128 v12,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v15,r2,r10
	ea = (ctx.r2.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r2,r10
	ctx.r2.u64 = ctx.r2.u64 + ctx.r10.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// vavguh v3,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v6,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// lvx128 v7,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v17,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v18,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// lvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vavguh v7,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// lvx128 v20,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v1,v16
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vavguh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// lvx128 v18,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// lvx128 v19,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vaddshs v27,v4,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vpkshus v25,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vaddshs v28,v5,v20
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v21,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 + ctx.r12.u64;
	// lvx128 v23,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// stvewx v24,r0,r3
	ctx.current_instruction = 0x881F61D4;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stvewx v24,r0,r4
	ctx.current_instruction = 0x881F61DC;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v29,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// stvewx v25,r3,r6
	ctx.current_instruction = 0x881F61E4;
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v30,v7,v22
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// stvewx v25,r4,r6
	ctx.current_instruction = 0x881F61EC;
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v31,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvewx v26,r3,r12
	ctx.current_instruction = 0x881F61F4;
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v26,r4,r12
	ctx.current_instruction = 0x881F61FC;
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvewx v27,r3,r7
	ctx.current_instruction = 0x881F6204;
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvewx v27,r4,r7
	ctx.current_instruction = 0x881F620C;
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r12,r8
	ctx.r10.u64 = ctx.r12.u64 + ctx.r8.u64;
	// stvewx v28,r3,r8
	ctx.current_instruction = 0x881F6214;
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r4,r8
	ctx.current_instruction = 0x881F6220;
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ctx.current_instruction = 0x881F6224;
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ctx.current_instruction = 0x881F6228;
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ctx.current_instruction = 0x881F622C;
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ctx.current_instruction = 0x881F6230;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ctx.current_instruction = 0x881F6234;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ctx.current_instruction = 0x881F6238;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882171F8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882171F8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882171F8) {
			switch (rex_dispatch_address) {
				case 0x88217200:
				case 0x8821755C:
				case 0x88217644:
				case 0x8821768C:
				case 0x882176B4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882171F8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88217200: goto loc_88217200;
		case 0x8821755C: goto loc_8821755C;
		case 0x88217644: goto loc_88217644;
		case 0x8821768C: goto loc_8821768C;
		case 0x882176B4: goto loc_882176B4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x88217200;
	__savegprlr_14(ctx, base);
loc_88217200:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x88217200;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,22264(r3)
	ctx.current_instruction = 0x88217208;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 22264);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r3,340(r1)
	ctx.current_instruction = 0x88217210;
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,224(r31)
	ctx.current_instruction = 0x8821721C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,3780(r31)
	ctx.current_instruction = 0x88217220;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x88217224;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r9,3776(r31)
	ctx.current_instruction = 0x88217228;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,220(r31)
	ctx.current_instruction = 0x88217230;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r11,272(r31)
	ctx.current_instruction = 0x88217238;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r8,1312(r30)
	ctx.current_instruction = 0x8821723C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1312);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,20(r29)
	ctx.current_instruction = 0x88217244;
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r6.u32);
	// lwz r9,22276(r31)
	ctx.current_instruction = 0x88217248;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22276);
	// stw r9,24(r29)
	ctx.current_instruction = 0x8821724C;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// lwz r7,616(r30)
	ctx.current_instruction = 0x88217250;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// stw r7,36(r29)
	ctx.current_instruction = 0x88217254;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r30)
	ctx.current_instruction = 0x88217258;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 428);
	// stw r6,40(r29)
	ctx.current_instruction = 0x8821725C;
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r6.u32);
	// lwz r9,1164(r30)
	ctx.current_instruction = 0x88217260;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1164);
	// stw r9,44(r29)
	ctx.current_instruction = 0x88217264;
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r9.u32);
	// lwz r7,616(r30)
	ctx.current_instruction = 0x88217268;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// stw r7,36(r29)
	ctx.current_instruction = 0x8821726C;
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r30)
	ctx.current_instruction = 0x88217270;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 428);
	// stw r6,40(r29)
	ctx.current_instruction = 0x88217274;
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r6.u32);
	// lwz r9,1164(r30)
	ctx.current_instruction = 0x88217278;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1164);
	// stw r9,44(r29)
	ctx.current_instruction = 0x8821727C;
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r9.u32);
	// lhz r9,50(r30)
	ctx.current_instruction = 0x88217280;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 50);
	// lhz r6,52(r30)
	ctx.current_instruction = 0x88217284;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 52);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r9,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,92(r1)
	ctx.current_instruction = 0x88217290;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88217294;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,84(r1)
	ctx.current_instruction = 0x8821729C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	ctx.current_instruction = 0x882172A0;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,104(r1)
	ctx.current_instruction = 0x882172A4;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r6,112(r1)
	ctx.current_instruction = 0x882172A8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r7,108(r1)
	ctx.current_instruction = 0x882172AC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// beq cr6,0x88217748
	if (ctx.cr6.eq) goto loc_88217748;
	// li r15,16
	ctx.r15.s64 = 16;
	// li r14,32
	ctx.r14.s64 = 32;
	// li r16,48
	ctx.r16.s64 = 48;
	// li r17,64
	ctx.r17.s64 = 64;
	// li r18,80
	ctx.r18.s64 = 80;
	// li r19,96
	ctx.r19.s64 = 96;
	// li r20,112
	ctx.r20.s64 = 112;
loc_882172D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r24,92(r1)
	ctx.current_instruction = 0x882172D4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,84(r1)
	ctx.current_instruction = 0x882172D8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r22,88(r1)
	ctx.current_instruction = 0x882172E0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,96(r1)
	ctx.current_instruction = 0x882172E4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x88217704
	if (ctx.cr6.eq) goto loc_88217704;
loc_882172EC:
	// lwz r10,80(r1)
	ctx.current_instruction = 0x882172EC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// ld r11,0(r8)
	ctx.current_instruction = 0x882172F4;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r9,100(r1)
	ctx.current_instruction = 0x882172F8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r6,0(r10)
	ctx.current_instruction = 0x882172FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r6,0,21,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// beq cr6,0x882176d4
	if (ctx.cr6.eq) goto loc_882176D4;
	// rldicl r10,r11,8,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// lwz r7,388(r30)
	ctx.current_instruction = 0x88217310;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// rldicl r9,r11,16,48
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// stw r24,144(r1)
	ctx.current_instruction = 0x88217318;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// stw r23,160(r1)
	ctx.current_instruction = 0x88217320;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lhz r11,76(r30)
	ctx.current_instruction = 0x88217328;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 76);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r22,164(r1)
	ctx.current_instruction = 0x88217330;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// rlwinm r6,r6,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r24,8
	ctx.r8.s64 = ctx.r24.s64 + 8;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,124(r1)
	ctx.current_instruction = 0x88217344;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// clrlwi r21,r9,26
	ctx.r21.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,148(r1)
	ctx.current_instruction = 0x8821734C;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// add r28,r10,r7
	ctx.r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r10,74(r30)
	ctx.current_instruction = 0x88217354;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 74);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8821736c
	if (ctx.cr6.eq) goto loc_8821736C;
	// add r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// b 0x88217374
	goto loc_88217374;
loc_8821736C:
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
loc_88217374:
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// stw r9,152(r1)
	ctx.current_instruction = 0x88217378;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r10,120(r1)
	ctx.current_instruction = 0x8821737C;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r7,156(r1)
	ctx.current_instruction = 0x88217380;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lwz r8,-10076(r7)
	ctx.current_instruction = 0x88217388;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -10076);
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bgt cr6,0x882174d4
	if (ctx.cr6.gt) goto loc_882174D4;
	// lis r12,-30687
	ctx.r12.s64 = -2011103232;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29612
	ctx.r12.s64 = ctx.r12.s64 + 29612;
	// lwzx r0,r12,r0
	ctx.current_instruction = 0x882173A0;
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_882173D4;
	case 1:
		goto loc_88217428;
	case 2:
		goto loc_8821747C;
	case 3:
		goto loc_88217484;
	case 4:
		goto loc_882174D4;
	case 5:
		goto loc_882174D4;
	case 6:
		goto loc_882174D4;
	case 7:
		goto loc_882174D4;
	case 8:
		goto loc_882173D4;
	case 9:
		goto loc_88217428;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_882173D4:
	// addi r11,r24,128
	ctx.r11.s64 = ctx.r24.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x882174d4
	goto loc_882174D4;
loc_88217428:
	// addi r11,r9,128
	ctx.r11.s64 = ctx.r9.s64 + 128;
	// dcbt r0,r11
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r6,r11
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r11
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// dcbt r4,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r10.u64;
	// dcbt r5,r11
	// b 0x882174d4
	goto loc_882174D4;
loc_8821747C:
	// addi r10,r23,128
	ctx.r10.s64 = ctx.r23.s64 + 128;
	// b 0x88217488
	goto loc_88217488;
loc_88217484:
	// addi r10,r22,128
	ctx.r10.s64 = ctx.r22.s64 + 128;
loc_88217488:
	// dcbt r0,r10
	// dcbt r11,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r6,r10
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r10
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// dcbt r4,r10
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// dcbt r5,r10
loc_882174D4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// li r27,0
	ctx.r27.s64 = 0;
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
	// stw r11,-10076(r7)
	ctx.current_instruction = 0x882174EC;
	REX_STORE_U32(ctx.r7.u32 + -10076, ctx.r11.u32);
loc_882174F0:
	// clrlwi r10,r21,31
	ctx.r10.u64 = ctx.r21.u32 & 0x1;
	// rldicl r9,r26,20,44
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 20) & 0xFFFFF;
	// srawi r25,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r27.s32 >> 2;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x882176b8
	if (ctx.cr6.eq) goto loc_882176B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88217648
	if (!ctx.cr6.eq) goto loc_88217648;
	// lwz r11,24(r29)
	ctx.current_instruction = 0x88217510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r5,r30,168
	ctx.r5.s64 = ctx.r30.s64 + 168;
	// lwz r4,444(r30)
	ctx.current_instruction = 0x88217518;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r28)
	ctx.current_instruction = 0x88217524;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,4(r28)
	ctx.current_instruction = 0x88217528;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,40(r29)
	ctx.current_instruction = 0x88217530;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// lbz r8,0(r11)
	ctx.current_instruction = 0x88217534;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r29)
	ctx.current_instruction = 0x88217538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// stw r3,24(r29)
	ctx.current_instruction = 0x8821753C;
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r31
	ea = (ctx.r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x88217564
	if (ctx.cr6.lt) goto loc_88217564;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8817db68
	ctx.lr = 0x8821755C;
	sub_8817DB68(ctx, base);
loc_8821755C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x882175cc
	goto loc_882175CC;
loc_88217564:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x882175c8
	if (!ctx.cr6.gt) goto loc_882175C8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_88217570:
	// lhz r3,0(r11)
	ctx.current_instruction = 0x88217570;
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
	ctx.current_instruction = 0x88217598;
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
	ctx.current_instruction = 0x882175AC;
	ctx.r14.u64 = REX_LOAD_U8(ctx.r15.u32 + ctx.r5.u32);
	// rotlwi r15,r15,1
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 1);
	// or r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 | ctx.r9.u64;
	// sthx r8,r15,r31
	ctx.current_instruction = 0x882175B8;
	REX_STORE_U16(ctx.r15.u32 + ctx.r31.u32, ctx.r8.u16);
	// bdnz 0x88217570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88217570;
	// li r14,32
	ctx.r14.s64 = 32;
	// li r15,16
	ctx.r15.s64 = 16;
loc_882175C8:
	// stw r11,20(r29)
	ctx.current_instruction = 0x882175C8;
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_882175CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x88217638
	if (!ctx.cr6.eq) goto loc_88217638;
	// lhz r11,0(r31)
	ctx.current_instruction = 0x882175D4;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
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
	// stw r4,128(r1)
	ctx.current_instruction = 0x88217604;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
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
	// stvx128 v0,r31,r14
	ea = (ctx.r31.u32 + ctx.r14.u32) & ~0xF;
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
	// b 0x8821768c
	goto loc_8821768C;
loc_88217638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88217cc0
	ctx.lr = 0x88217644;
	sub_88217CC0(ctx, base);
loc_88217644:
	// b 0x8821768c
	goto loc_8821768C;
loc_88217648:
	// rldicl r10,r26,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r29)
	ctx.current_instruction = 0x8821764C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.current_instruction = 0x8821766C;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.current_instruction = 0x88217680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8821768C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8821768C:
	// lwz r11,960(r30)
	ctx.current_instruction = 0x8821768C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 960);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r5,r10,r9
	ctx.current_instruction = 0x882176A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.current_instruction = 0x882176AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x882176B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_882176B4:
	// lwz r31,340(r1)
	ctx.current_instruction = 0x882176B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_882176B8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r21,r21,31,1,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 31) & 0x7FFFFFFF;
	// rldicr r26,r26,8,55
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x882174f0
	if (ctx.cr6.lt) goto loc_882174F0;
	// lwz r7,108(r1)
	ctx.current_instruction = 0x882176CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,80(r1)
	ctx.current_instruction = 0x882176D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_882176D4:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x882176D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,100(r1)
	ctx.current_instruction = 0x882176DC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	ctx.current_instruction = 0x882176E8;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r23,r23,8
	ctx.r23.s64 = ctx.r23.s64 + 8;
	// stw r11,96(r1)
	ctx.current_instruction = 0x882176F0;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x882172ec
	if (ctx.cr6.lt) goto loc_882172EC;
	// lwz r6,112(r1)
	ctx.current_instruction = 0x88217700;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_88217704:
	// lwz r10,104(r1)
	ctx.current_instruction = 0x88217704;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,232(r31)
	ctx.current_instruction = 0x88217708;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r5,84(r1)
	ctx.current_instruction = 0x8821770C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r3,88(r1)
	ctx.current_instruction = 0x88217714;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.current_instruction = 0x88217718;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,228(r31)
	ctx.current_instruction = 0x88217720;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// stw r9,104(r1)
	ctx.current_instruction = 0x8821772C;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r5,84(r1)
	ctx.current_instruction = 0x88217734;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r3,88(r1)
	ctx.current_instruction = 0x88217738;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r11,92(r1)
	ctx.current_instruction = 0x8821773C;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// blt cr6,0x882172d0
	if (ctx.cr6.lt) goto loc_882172D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_88217748:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8821C3A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821C3A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821C3A0) {
			switch (rex_dispatch_address) {
				case 0x8821C3A8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821C3A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821C3A8: goto loc_8821C3A8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8821C3A8;
	__savegprlr_25(ctx, base);
loc_8821C3A8:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v46,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,1104
	ctx.r28.s64 = 1104;
	// lvsl v2,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v58,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v57,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v55,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v60,v58,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,48
	ctx.r27.s64 = 48;
	// vperm128 v1,v61,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v2,v59,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,96
	ctx.r26.s64 = 96;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,144
	ctx.r25.s64 = 144;
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v54,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v52,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvsl v5,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v53,v50,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v6,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v2,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v29,v52,v49,v5
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v48,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v48,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v27,r6,r28
	ea = (ctx.r6.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v11,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v29,v62,v46,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r8,240
	ctx.r8.s64 = 240;
	// vslh v27,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,288
	ctx.r7.s64 = 288;
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v3,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r6,336
	ctx.r6.s64 = 336;
	// vslh v24,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v23,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v22,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v21,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v20,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v18,v27,v6
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v16,v24,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v15,v19,v3
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v0,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v9,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v8,v17,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v14,v25,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vaddshs v7,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v6,v15,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v29,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// stvx128 v28,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r29,r27
	ea = (ctx.r29.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r29,r26
	ea = (ctx.r29.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r29,r25
	ea = (ctx.r29.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r29,r9
	ea = (ctx.r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r29,r8
	ea = (ctx.r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r29,r7
	ea = (ctx.r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r29,r6
	ea = (ctx.r29.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88221B98) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88221B98;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88221B98) {
			switch (rex_dispatch_address) {
				case 0x88221BA0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88221B98;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88221BA0: goto loc_88221BA0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x88221BA0;
	__savegprlr_26(ctx, base);
loc_88221BA0:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r3,r4
	ctx.r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx128 v58,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v59,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v63,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	ctx.r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v57,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsubshs v2,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v3,v54,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vsubshs v31,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v28,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v27,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vaddshs v14,v16,v10
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v11,v15,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v52,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// stvx128 v53,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-88(r1)
	ctx.current_instruction = 0x88221CA4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r27,-96(r1)
	ctx.current_instruction = 0x88221CA8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stw r27,0(r5)
	ctx.current_instruction = 0x88221CAC;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// stvx128 v52,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-72(r1)
	ctx.current_instruction = 0x88221CB4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r27,-80(r1)
	ctx.current_instruction = 0x88221CB8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r29,r5,r6
	ctx.current_instruction = 0x88221CBC;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r27,r31,r5
	ctx.current_instruction = 0x88221CC0;
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r27.u32);
	// stwx r28,r10,r6
	ctx.current_instruction = 0x88221CC4;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r28.u32);
	// bne cr6,0x88221cec
	if (!ctx.cr6.eq) goto loc_88221CEC;
	// lwz r29,-92(r1)
	ctx.current_instruction = 0x88221CCC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r28,-84(r1)
	ctx.current_instruction = 0x88221CD0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r27,-76(r1)
	ctx.current_instruction = 0x88221CD4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r26,-68(r1)
	ctx.current_instruction = 0x88221CD8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r29,4(r5)
	ctx.current_instruction = 0x88221CDC;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// stw r28,4(r30)
	ctx.current_instruction = 0x88221CE0;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r27,4(r10)
	ctx.current_instruction = 0x88221CE4;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r26,4(r7)
	ctx.current_instruction = 0x88221CE8;
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
loc_88221CEC:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x88221e0c
	if (!ctx.cr6.eq) goto loc_88221E0C;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v51,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r4,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	ctx.r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v51,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v44,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v45,r30,r3
	ea = (ctx.r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v46,v47,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v30,v45,v44,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vsubshs v29,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v27,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v25,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v27,v9
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v20,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v13,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v14,v18,v8
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v12,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v43,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v10,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v42,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v43,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-76(r1)
	ctx.current_instruction = 0x88221DC0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-80(r1)
	ctx.current_instruction = 0x88221DC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r7,-72(r1)
	ctx.current_instruction = 0x88221DC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r4,-68(r1)
	ctx.current_instruction = 0x88221DCC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stwux r3,r5,r11
	ctx.current_instruction = 0x88221DD0;
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// stvx128 v42,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-76(r1)
	ctx.current_instruction = 0x88221DD8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r31,-72(r1)
	ctx.current_instruction = 0x88221DDC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r30,-68(r1)
	ctx.current_instruction = 0x88221DE4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	ctx.current_instruction = 0x88221DE8;
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,-80(r1)
	ctx.current_instruction = 0x88221DEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r7,r5,r6
	ctx.current_instruction = 0x88221DF0;
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stw r4,4(r9)
	ctx.current_instruction = 0x88221DF4;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stwux r8,r10,r11
	ctx.current_instruction = 0x88221DF8;
	ea = ctx.r10.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	ctx.current_instruction = 0x88221E00;
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r31,r10,r6
	ctx.current_instruction = 0x88221E04;
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r31.u32);
	// stw r30,4(r11)
	ctx.current_instruction = 0x88221E08;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_88221E0C:
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88227138) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88227138;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88227138) {
			switch (rex_dispatch_address) {
				case 0x8822717C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88227138;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8822717C: goto loc_8822717C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8822713C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x88227140;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1144(r7)
	ctx.current_instruction = 0x88227148;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1144);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	ctx.current_instruction = 0x88227150;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.current_instruction = 0x88227158;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
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
	// bl 0x8821e9c8
	ctx.lr = 0x8822717C;
	sub_8821E9C8(ctx, base);
loc_8822717C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x88227184;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_882279A8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882279A8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882279A8) {
			switch (rex_dispatch_address) {
				case 0x882279B0:
				case 0x88227A28:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882279A8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882279B0: goto loc_882279B0;
		case 0x88227A28: goto loc_88227A28;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x882279B0;
	__savegprlr_25(ctx, base);
loc_882279B0:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x882279B0;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.current_instruction = 0x882279B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
	// lwz r8,1148(r7)
	ctx.current_instruction = 0x882279C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	ctx.current_instruction = 0x882279D0;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	ctx.current_instruction = 0x882279D8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	ctx.current_instruction = 0x882279DC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	ctx.current_instruction = 0x882279E8;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stvx128 v0,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x88218f60
	ctx.lr = 0x88227A28;
	sub_88218F60(ctx, base);
loc_88227A28:
	// cntlzw r5,r28
	ctx.r5.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & ctx.r27.u64;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x88227b14
	if (!ctx.cr6.eq) goto loc_88227B14;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88227c0c
	if (!ctx.cr6.gt) goto loc_88227C0C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_88227A88:
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
	ctx.current_instruction = 0x88227B00;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ctx.current_instruction = 0x88227B04;
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x88227a88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88227A88;
	// b 0x88227c0c
	goto loc_88227C0C;
loc_88227B14:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88227c0c
	if (!ctx.cr6.gt) goto loc_88227C0C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_88227B2C:
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
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bdnz 0x88227b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88227B2C;
loc_88227C0C:
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
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_882446F0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x882446F0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x882446F0) {
			switch (rex_dispatch_address) {
				case 0x882446F8:
				case 0x882449F4:
				case 0x88244A20:
				case 0x88244C64:
				case 0x88244C98:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x882446F0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x882446F8: goto loc_882446F8;
		case 0x882449F4: goto loc_882449F4;
		case 0x88244A20: goto loc_88244A20;
		case 0x88244C64: goto loc_88244C64;
		case 0x88244C98: goto loc_88244C98;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x882446F8;
	__savegprlr_14(ctx, base);
loc_882446F8:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x882446F8;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,412(r1)
	ctx.current_instruction = 0x882446FC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r10,396(r1)
	ctx.current_instruction = 0x88244704;
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// stw r7,372(r1)
	ctx.current_instruction = 0x88244708;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// lwz r25,420(r1)
	ctx.current_instruction = 0x8824470C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,404(r1)
	ctx.current_instruction = 0x88244710;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r7,364(r31)
	ctx.current_instruction = 0x88244714;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// stw r4,348(r1)
	ctx.current_instruction = 0x88244718;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r6,364(r1)
	ctx.current_instruction = 0x88244720;
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// stw r5,356(r1)
	ctx.current_instruction = 0x88244724;
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// lwz r5,0(r25)
	ctx.current_instruction = 0x88244728;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r23,0(r10)
	ctx.current_instruction = 0x8824472C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r6,10(r7)
	ctx.current_instruction = 0x88244730;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 10);
	// lwz r11,444(r1)
	ctx.current_instruction = 0x88244734;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r3,452(r1)
	ctx.current_instruction = 0x88244738;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// stw r8,380(r1)
	ctx.current_instruction = 0x8824473C;
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// stw r9,388(r1)
	ctx.current_instruction = 0x88244740;
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// stw r5,124(r1)
	ctx.current_instruction = 0x88244748;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r23,156(r1)
	ctx.current_instruction = 0x8824474C;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// stw r6,104(r1)
	ctx.current_instruction = 0x88244750;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bge cr6,0x8824475c
	if (!ctx.cr6.lt) goto loc_8824475C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8824475C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x88244770
	if (ctx.cr6.eq) goto loc_88244770;
	// lwz r17,16(r10)
	ctx.current_instruction = 0x88244764;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r16,20(r10)
	ctx.current_instruction = 0x88244768;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x88244778
	goto loc_88244778;
loc_88244770:
	// lwz r17,8(r10)
	ctx.current_instruction = 0x88244770;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r16,12(r10)
	ctx.current_instruction = 0x88244774;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_88244778:
	// lis r29,-30678
	ctx.r29.s64 = -2010513408;
	// lwz r28,436(r1)
	ctx.current_instruction = 0x8824477C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88244784;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r30,r9,-22704
	ctx.r30.s64 = ctx.r9.s64 + -22704;
	// lwz r10,-19976(r29)
	ctx.current_instruction = 0x88244794;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -19976);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// stw r18,100(r1)
	ctx.current_instruction = 0x8824479C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r28,96(r1)
	ctx.current_instruction = 0x882447A4;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r30,152(r1)
	ctx.current_instruction = 0x882447A8;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r11,-19976(r29)
	ctx.current_instruction = 0x882447AC;
	REX_STORE_U32(ctx.r29.u32 + -19976, ctx.r11.u32);
	// blt cr6,0x88244ecc
	if (ctx.cr6.lt) goto loc_88244ECC;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r19,428(r1)
	ctx.current_instruction = 0x882447B8;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lis r10,-30679
	ctx.r10.s64 = -2010578944;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// addi r21,r10,10048
	ctx.r21.s64 = ctx.r10.s64 + 10048;
	// stw r3,112(r1)
	ctx.current_instruction = 0x882447C8;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x882447d4
	goto loc_882447D4;
loc_882447D0:
	// lwz r8,108(r1)
	ctx.current_instruction = 0x882447D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_882447D4:
	// lwz r11,364(r31)
	ctx.current_instruction = 0x882447D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 364);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// li r15,1
	ctx.r15.s64 = 1;
	// stw r18,120(r1)
	ctx.current_instruction = 0x882447E0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// mr r14,r18
	ctx.r14.u64 = ctx.r18.u64;
	// stw r5,116(r1)
	ctx.current_instruction = 0x882447E8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r7,108(r1)
	ctx.current_instruction = 0x882447EC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// stw r15,132(r1)
	ctx.current_instruction = 0x882447F4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// lhz r9,8(r11)
	ctx.current_instruction = 0x882447F8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lbz r8,11(r11)
	ctx.current_instruction = 0x882447FC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r10,r9,1,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x100;
	// stw r11,136(r1)
	ctx.current_instruction = 0x88244804;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r9,r8,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,140(r1)
	ctx.current_instruction = 0x88244830;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,144(r1)
	ctx.current_instruction = 0x88244834;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_88244838:
	// cmpwi cr6,r20,5
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 5, ctx.xer);
	// bge cr6,0x88244854
	if (!ctx.cr6.lt) goto loc_88244854;
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88244840;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x88244890
	if (!ctx.cr6.eq) goto loc_88244890;
	// b 0x88244e08
	goto loc_88244E08;
loc_88244854:
	// lwz r11,132(r1)
	ctx.current_instruction = 0x88244854;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x88244e30
	if (!ctx.cr6.eq) goto loc_88244E30;
	// lwz r11,100(r1)
	ctx.current_instruction = 0x88244860;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88244e30
	if (!ctx.cr6.eq) goto loc_88244E30;
	// rlwinm r11,r14,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,120(r1)
	ctx.current_instruction = 0x88244870;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r18,132(r1)
	ctx.current_instruction = 0x88244874;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// add r11,r14,r11
	ctx.r11.u64 = ctx.r14.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r8,r9,r3
	ctx.current_instruction = 0x88244880;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// extsb r20,r8
	ctx.r20.s64 = ctx.r8.s8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x88244e30
	if (ctx.cr6.eq) goto loc_88244E30;
loc_88244890:
	// lwz r29,372(r1)
	ctx.current_instruction = 0x88244890;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addi r10,r3,-24
	ctx.r10.s64 = ctx.r3.s64 + -24;
	// addi r9,r3,-12
	ctx.r9.s64 = ctx.r3.s64 + -12;
	// lwz r11,128(r1)
	ctx.current_instruction = 0x8824489C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,140(r1)
	ctx.current_instruction = 0x882448A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r30,144(r1)
	ctx.current_instruction = 0x882448A4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r29,148(r1)
	ctx.current_instruction = 0x882448A8;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// lbzx r10,r20,r10
	ctx.current_instruction = 0x882448AC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r10.u32);
	// lbzx r9,r20,r9
	ctx.current_instruction = 0x882448B0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,148(r1)
	ctx.current_instruction = 0x882448C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r30,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r28.s32 >> 2;
	// clrlwi r26,r28,30
	ctx.r26.u64 = ctx.r28.u32 & 0x3;
	// clrlwi r24,r27,30
	ctx.r24.u64 = ctx.r27.u32 & 0x3;
	// srawi r29,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88244e08
	if (ctx.cr6.lt) goto loc_88244E08;
	// lwz r11,388(r1)
	ctx.current_instruction = 0x882448E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x88244e08
	if (ctx.cr6.lt) goto loc_88244E08;
	// lwz r11,380(r1)
	ctx.current_instruction = 0x882448F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88244e08
	if (ctx.cr6.gt) goto loc_88244E08;
	// lwz r11,396(r1)
	ctx.current_instruction = 0x88244900;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x88244e08
	if (ctx.cr6.gt) goto loc_88244E08;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,0(r25)
	ctx.current_instruction = 0x88244910;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r5.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,108(r1)
	ctx.current_instruction = 0x88244918;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm r9,r29,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// bne cr6,0x88244b78
	if (!ctx.cr6.eq) goto loc_88244B78;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwimi r11,r24,2,28,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r10,7,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x600;
	// rlwinm r8,r10,1,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// addi r11,r11,2794
	ctx.r11.s64 = ctx.r11.s64 + 2794;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.current_instruction = 0x8824495C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8824498c
	if (ctx.cr6.eq) goto loc_8824498C;
loc_88244968:
	// lhz r8,8(r11)
	ctx.current_instruction = 0x88244968;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x88244980
	if (!ctx.cr6.eq) goto loc_88244980;
	// lbz r8,11(r11)
	ctx.current_instruction = 0x88244974;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x88244b6c
	if (ctx.cr6.eq) goto loc_88244B6C;
loc_88244980:
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88244980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88244968
	if (!ctx.cr6.eq) goto loc_88244968;
loc_8824498C:
	// lwz r11,364(r1)
	ctx.current_instruction = 0x8824498C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,1380(r22)
	ctx.current_instruction = 0x88244994;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 1380);
	// or r6,r27,r28
	ctx.r6.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,1396(r22)
	ctx.current_instruction = 0x882449A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 1396);
	// lwz r10,20(r22)
	ctx.current_instruction = 0x882449A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r19,0(r25)
	ctx.current_instruction = 0x882449B0;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r19.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x882449f8
	if (ctx.cr6.eq) goto loc_882449F8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,460(r1)
	ctx.current_instruction = 0x882449D4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,1560(r22)
	ctx.current_instruction = 0x882449DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 1560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1380(r22)
	ctx.current_instruction = 0x882449E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 1380);
	// lwz r6,348(r1)
	ctx.current_instruction = 0x882449E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r25,84(r1)
	ctx.current_instruction = 0x882449EC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x88244270
	ctx.lr = 0x882449F4;
	sub_88244270(ctx, base);
loc_882449F4:
	// b 0x88244a28
	goto loc_88244A28;
loc_882449F8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r7,1380(r22)
	ctx.current_instruction = 0x882449FC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 1380);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,348(r1)
	ctx.current_instruction = 0x88244A04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r18,84(r1)
	ctx.current_instruction = 0x88244A0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8813d780
	ctx.lr = 0x88244A20;
	sub_8813D780(ctx, base);
loc_88244A20:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,0(r25)
	ctx.current_instruction = 0x88244A24;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_88244A28:
	// subf r11,r16,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r16.u64;
	// lwz r10,0(r25)
	ctx.current_instruction = 0x88244A2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r17,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r17.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r21,16384
	ctx.r7.s64 = ctx.r21.s64 + 16384;
	// addi r3,r21,16384
	ctx.r3.s64 = ctx.r21.s64 + 16384;
	// rlwinm r6,r29,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// or r30,r9,r26
	ctx.r30.u64 = ctx.r9.u64 | ctx.r26.u64;
	// lhzx r11,r8,r7
	ctx.current_instruction = 0x88244A54;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// lhzx r9,r4,r3
	ctx.current_instruction = 0x88244A58;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r8,r30,7,21,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0x600;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r30,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x6;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r9,0(r25)
	ctx.current_instruction = 0x88244A74;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,11432(r31)
	ctx.current_instruction = 0x88244A7C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11432);
	// addi r6,r11,2282
	ctx.r6.s64 = ctx.r11.s64 + 2282;
	// rlwinm r8,r3,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r6,26
	ctx.r8.u64 = ctx.r6.u32 & 0x3F;
	// lwzx r11,r7,r31
	ctx.current_instruction = 0x88244A9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r8,r8,2794
	ctx.r8.s64 = ctx.r8.s64 + 2794;
	// stw r3,11432(r31)
	ctx.current_instruction = 0x88244AA4;
	REX_STORE_U32(ctx.r31.u32 + 11432, ctx.r3.u32);
	// stw r9,0(r11)
	ctx.current_instruction = 0x88244AA8;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,8(r11)
	ctx.current_instruction = 0x88244AB0;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// stb r18,10(r11)
	ctx.current_instruction = 0x88244AB4;
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r18.u8);
	// stb r30,11(r11)
	ctx.current_instruction = 0x88244AB8;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r30.u8);
	// lwzx r7,r9,r31
	ctx.current_instruction = 0x88244ABC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r7,4(r11)
	ctx.current_instruction = 0x88244AC0;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stwx r11,r9,r31
	ctx.current_instruction = 0x88244AC4;
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88244AC8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r10,91
	ctx.r6.s64 = ctx.r10.s64 + 91;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r25)
	ctx.current_instruction = 0x88244AD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r9,r4,r31
	ctx.current_instruction = 0x88244AD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwz r8,0(r9)
	ctx.current_instruction = 0x88244ADC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x88244b50
	if (!ctx.cr6.lt) goto loc_88244B50;
	// lwz r7,0(r11)
	ctx.current_instruction = 0x88244AE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88244b20
	if (ctx.cr6.lt) goto loc_88244B20;
	// addi r9,r10,93
	ctx.r9.s64 = ctx.r10.s64 + 93;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_88244B04:
	// lwz r8,-8(r9)
	ctx.current_instruction = 0x88244B04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r6,0(r8)
	ctx.current_instruction = 0x88244B08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x88244b20
	if (!ctx.cr6.lt) goto loc_88244B20;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r8,-4(r9)
	ctx.current_instruction = 0x88244B18;
	ea = -4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bge 0x88244b04
	if (!ctx.cr0.lt) goto loc_88244B04;
loc_88244B20:
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r31
	ctx.current_instruction = 0x88244B28;
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88244B2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88244B30;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88244b48
	if (!ctx.cr6.lt) goto loc_88244B48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	ctx.current_instruction = 0x88244B44;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_88244B48:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x88244b54
	goto loc_88244B54;
loc_88244B50:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_88244B54:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,112(r1)
	ctx.current_instruction = 0x88244B58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,104(r1)
	ctx.current_instruction = 0x88244B5C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r15,r10,r15
	ctx.r15.u64 = ctx.r10.u64 & ctx.r15.u64;
	// b 0x88244dd0
	goto loc_88244DD0;
loc_88244B6C:
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88244B6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	ctx.current_instruction = 0x88244B70;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x88244dd0
	goto loc_88244DD0;
loc_88244B78:
	// rlwimi r26,r24,2,28,29
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xC) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFFF3);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// clrlwi r26,r26,28
	ctx.r26.u64 = ctx.r26.u32 & 0xF;
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r26,7,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0x600;
	// rlwinm r10,r26,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x6;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + ctx.r24.u64;
	// clrlwi r23,r7,26
	ctx.r23.u64 = ctx.r7.u32 & 0x3F;
	// addi r5,r23,2794
	ctx.r5.s64 = ctx.r23.s64 + 2794;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.current_instruction = 0x88244BB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88244bf0
	if (ctx.cr6.eq) goto loc_88244BF0;
loc_88244BBC:
	// lhz r10,8(r11)
	ctx.current_instruction = 0x88244BBC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x88244be4
	if (!ctx.cr6.eq) goto loc_88244BE4;
	// lbz r10,11(r11)
	ctx.current_instruction = 0x88244BC8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x88244be4
	if (!ctx.cr6.eq) goto loc_88244BE4;
	// lbz r10,10(r11)
	ctx.current_instruction = 0x88244BD4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x88244bf4
	if (ctx.cr6.eq) goto loc_88244BF4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_88244BE4:
	// lwz r11,4(r11)
	ctx.current_instruction = 0x88244BE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88244bbc
	if (!ctx.cr6.eq) goto loc_88244BBC;
loc_88244BF0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_88244BF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x88244ca8
	if (!ctx.cr6.eq) goto loc_88244CA8;
	// lwz r11,364(r1)
	ctx.current_instruction = 0x88244BFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,1380(r22)
	ctx.current_instruction = 0x88244C04;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 1380);
	// or r6,r27,r28
	ctx.r6.u64 = ctx.r27.u64 | ctx.r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,1396(r22)
	ctx.current_instruction = 0x88244C10;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 1396);
	// lwz r10,20(r22)
	ctx.current_instruction = 0x88244C14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r19,0(r25)
	ctx.current_instruction = 0x88244C20;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r19.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x88244c70
	if (ctx.cr6.eq) goto loc_88244C70;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,460(r1)
	ctx.current_instruction = 0x88244C44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,1560(r22)
	ctx.current_instruction = 0x88244C4C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 1560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1380(r22)
	ctx.current_instruction = 0x88244C54;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 1380);
	// lwz r6,348(r1)
	ctx.current_instruction = 0x88244C58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r25,84(r1)
	ctx.current_instruction = 0x88244C5C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x88244270
	ctx.lr = 0x88244C64;
	sub_88244270(ctx, base);
loc_88244C64:
	// lwz r3,112(r1)
	ctx.current_instruction = 0x88244C64;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,104(r1)
	ctx.current_instruction = 0x88244C68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x88244cbc
	goto loc_88244CBC;
loc_88244C70:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r7,1380(r22)
	ctx.current_instruction = 0x88244C74;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 1380);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,348(r1)
	ctx.current_instruction = 0x88244C7C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r18,84(r1)
	ctx.current_instruction = 0x88244C84;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8813d780
	ctx.lr = 0x88244C98;
	sub_8813D780(ctx, base);
loc_88244C98:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,112(r1)
	ctx.current_instruction = 0x88244C9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,104(r1)
	ctx.current_instruction = 0x88244CA0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x88244cb8
	goto loc_88244CB8;
loc_88244CA8:
	// lbz r10,10(r11)
	ctx.current_instruction = 0x88244CA8;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x88244e08
	if (ctx.cr6.eq) goto loc_88244E08;
	// lwz r11,0(r11)
	ctx.current_instruction = 0x88244CB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_88244CB8:
	// stw r11,0(r25)
	ctx.current_instruction = 0x88244CB8;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_88244CBC:
	// lwz r11,11432(r31)
	ctx.current_instruction = 0x88244CBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11432);
	// subf r10,r16,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r16.u64;
	// subf r9,r17,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r17.u64;
	// lwz r7,0(r25)
	ctx.current_instruction = 0x88244CC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r11,2282
	ctx.r5.s64 = ctx.r11.s64 + 2282;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r21,16384
	ctx.r8.s64 = ctx.r21.s64 + 16384;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r21,16384
	ctx.r30.s64 = ctx.r21.s64 + 16384;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// lwzx r11,r10,r31
	ctx.current_instruction = 0x88244CE8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r9,r23,2794
	ctx.r9.s64 = ctx.r23.s64 + 2794;
	// lhzx r10,r4,r8
	ctx.current_instruction = 0x88244CF0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r5,r30
	ctx.current_instruction = 0x88244CF8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// stw r29,11432(r31)
	ctx.current_instruction = 0x88244CFC;
	REX_STORE_U32(ctx.r31.u32 + 11432, ctx.r29.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,0(r11)
	ctx.current_instruction = 0x88244D04;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// sth r24,8(r11)
	ctx.current_instruction = 0x88244D08;
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r24.u16);
	// stb r6,10(r11)
	ctx.current_instruction = 0x88244D0C;
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r6.u8);
	// stb r26,11(r11)
	ctx.current_instruction = 0x88244D10;
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r26.u8);
	// sth r10,12(r11)
	ctx.current_instruction = 0x88244D14;
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lwzx r8,r9,r31
	ctx.current_instruction = 0x88244D18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r8,4(r11)
	ctx.current_instruction = 0x88244D1C;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stwx r11,r9,r31
	ctx.current_instruction = 0x88244D20;
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r9,0(r25)
	ctx.current_instruction = 0x88244D24;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x88244D2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r10,91
	ctx.r7.s64 = ctx.r10.s64 + 91;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r31
	ctx.current_instruction = 0x88244D38;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwz r7,0(r8)
	ctx.current_instruction = 0x88244D3C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r8,12(r8)
	ctx.current_instruction = 0x88244D40;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x88244dcc
	if (!ctx.cr6.lt) goto loc_88244DCC;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// lhz r7,12(r11)
	ctx.current_instruction = 0x88244D54;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.current_instruction = 0x88244D58;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// blt cr6,0x88244da0
	if (ctx.cr6.lt) goto loc_88244DA0;
	// addi r10,r10,93
	ctx.r10.s64 = ctx.r10.s64 + 93;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_88244D78:
	// lwz r10,-8(r9)
	ctx.current_instruction = 0x88244D78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// lhz r7,12(r10)
	ctx.current_instruction = 0x88244D7C;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.current_instruction = 0x88244D80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x88244d9c
	if (!ctx.cr6.lt) goto loc_88244D9C;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stwu r10,-4(r9)
	ctx.current_instruction = 0x88244D94;
	ea = -4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bge 0x88244d78
	if (!ctx.cr0.lt) goto loc_88244D78;
loc_88244D9C:
	// lwz r6,104(r1)
	ctx.current_instruction = 0x88244D9C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_88244DA0:
	// addi r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 + 92;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r31
	ctx.current_instruction = 0x88244DA8;
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.current_instruction = 0x88244DAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.current_instruction = 0x88244DB0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88244dc8
	if (!ctx.cr6.lt) goto loc_88244DC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	ctx.current_instruction = 0x88244DC4;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_88244DC8:
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
loc_88244DCC:
	// stw r5,0(r25)
	ctx.current_instruction = 0x88244DCC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r5.u32);
loc_88244DD0:
	// lwz r11,0(r25)
	ctx.current_instruction = 0x88244DD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,124(r1)
	ctx.current_instruction = 0x88244DD4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88244df4
	if (!ctx.cr6.gt) goto loc_88244DF4;
	// stw r14,120(r1)
	ctx.current_instruction = 0x88244DE0;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// mr r14,r20
	ctx.r14.u64 = ctx.r20.u64;
	// stw r10,116(r1)
	ctx.current_instruction = 0x88244DE8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,124(r1)
	ctx.current_instruction = 0x88244DEC;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x88244e08
	goto loc_88244E08;
loc_88244DF4:
	// lwz r10,116(r1)
	ctx.current_instruction = 0x88244DF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x88244e08
	if (!ctx.cr6.gt) goto loc_88244E08;
	// stw r11,116(r1)
	ctx.current_instruction = 0x88244E00;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r20,120(r1)
	ctx.current_instruction = 0x88244E04;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
loc_88244E08:
	// lwz r11,96(r1)
	ctx.current_instruction = 0x88244E08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r7,108(r1)
	ctx.current_instruction = 0x88244E10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r5,124(r1)
	ctx.current_instruction = 0x88244E18;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r30,152(r1)
	ctx.current_instruction = 0x88244E1C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r4,356(r1)
	ctx.current_instruction = 0x88244E20;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r23,156(r1)
	ctx.current_instruction = 0x88244E24;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r10,96(r1)
	ctx.current_instruction = 0x88244E28;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x88244838
	goto loc_88244838;
loc_88244E30:
	// cmpwi cr6,r7,260
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 260, ctx.xer);
	// bgt cr6,0x88244ebc
	if (ctx.cr6.gt) goto loc_88244EBC;
	// lwz r10,436(r1)
	ctx.current_instruction = 0x88244E38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cntlzw r9,r15
	ctx.r9.u64 = ctx.r15.u32 == 0 ? 32 : __builtin_clz(ctx.r15.u32);
	// lwz r8,468(r1)
	ctx.current_instruction = 0x88244E40;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,128(r1)
	ctx.current_instruction = 0x88244E44;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,96(r1)
	ctx.current_instruction = 0x88244E54;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x88244ea4
	if (ctx.cr6.eq) goto loc_88244EA4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x88244e88
	if (!ctx.cr6.eq) goto loc_88244E88;
	// cmpwi cr6,r14,5
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 5, ctx.xer);
	// bge cr6,0x88244e80
	if (!ctx.cr6.lt) goto loc_88244E80;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r14
	ctx.r9.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r14.u8 & 0x3F));
	// stw r10,100(r1)
	ctx.current_instruction = 0x88244E74;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,96(r1)
	ctx.current_instruction = 0x88244E78;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// b 0x88244ea4
	goto loc_88244EA4;
loc_88244E80:
	// stw r18,100(r1)
	ctx.current_instruction = 0x88244E80;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// b 0x88244ea4
	goto loc_88244EA4;
loc_88244E88:
	// lwz r10,100(r1)
	ctx.current_instruction = 0x88244E88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x88244ea0
	if (!ctx.cr6.eq) goto loc_88244EA0;
	// stw r18,100(r1)
	ctx.current_instruction = 0x88244E94;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x88244ea4
	goto loc_88244EA4;
loc_88244EA0:
	// stw r18,108(r1)
	ctx.current_instruction = 0x88244EA0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
loc_88244EA4:
	// lwz r10,452(r1)
	ctx.current_instruction = 0x88244EA4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,128(r1)
	ctx.current_instruction = 0x88244EAC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x882447d0
	if (!ctx.cr6.lt) goto loc_882447D0;
	// b 0x88244ec8
	goto loc_88244EC8;
loc_88244EBC:
	// lwz r11,8(r30)
	ctx.current_instruction = 0x88244EBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	ctx.current_instruction = 0x88244EC4;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_88244EC8:
	// lwz r7,136(r1)
	ctx.current_instruction = 0x88244EC8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_88244ECC:
	// lwz r11,0(r30)
	ctx.current_instruction = 0x88244ECC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	ctx.current_instruction = 0x88244ED8;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x88244ef8
	if (ctx.cr6.eq) goto loc_88244EF8;
	// lhz r11,12(r7)
	ctx.current_instruction = 0x88244EE0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// lwz r10,0(r7)
	ctx.current_instruction = 0x88244EE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	ctx.current_instruction = 0x88244EEC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_88244EF8:
	// lwz r11,0(r7)
	ctx.current_instruction = 0x88244EF8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r25)
	ctx.current_instruction = 0x88244EFC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

