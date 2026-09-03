#include "forzahorizon2_funcs.30.h"

DEFINE_REX_FUNC(sub_880502C8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880502C8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880502C8;
	ctx.current_instruction = 0x880502C8;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lwz r11,184(r11)
	ctx.current_instruction = 0x880502D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__restgprlr_21) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805087C);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x8805087C;
	ctx.current_instruction = 0x8805087C;
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

DEFINE_REX_FUNC(sub_88051C80) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88051C80;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88051C80) {
			switch (rex_dispatch_address) {
				case 0x88051C88:
				case 0x88051CAC:
				case 0x88051CB8:
				case 0x88051CC4:
				case 0x88051D18:
				case 0x88051D44:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88051C80;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88051C88: goto loc_88051C88;
		case 0x88051CAC: goto loc_88051CAC;
		case 0x88051CB8: goto loc_88051CB8;
		case 0x88051CC4: goto loc_88051CC4;
		case 0x88051D18: goto loc_88051D18;
		case 0x88051D44: goto loc_88051D44;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88051C88;
	__savegprlr_29(ctx, base);
loc_88051C88:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88051C88;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.current_instruction = 0x88051C90;
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x88052ce8
	ctx.lr = 0x88051CAC;
	sub_88052CE8(ctx, base);
loc_88051CAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x88051ccc
	if (!ctx.cr6.eq) goto loc_88051CCC;
loc_88051CB4:
	// bl 0x880529c8
	ctx.lr = 0x88051CB8;
	sub_880529C8(ctx, base);
loc_88051CB8:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	ctx.current_instruction = 0x88051CBC;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x880523e8
	ctx.lr = 0x88051CC4;
	sub_880523E8(ctx, base);
loc_88051CC4:
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x88051d44
	goto loc_88051D44;
loc_88051CCC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x88051cb4
	if (ctx.cr6.eq) goto loc_88051CB4;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x88051CD4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x88051ce8
	if (!ctx.cr6.eq) goto loc_88051CE8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x88051cf8
	goto loc_88051CF8;
loc_88051CE8:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subf r4,r10,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r10.u64;
loc_88051CF8:
	// addi r10,r11,-45
	ctx.r10.s64 = ctx.r11.s64 + -45;
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88051CFC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x88052aa8
	ctx.lr = 0x88051D18;
	sub_88052AA8(ctx, base);
loc_88051D18:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x88051d2c
	if (ctx.cr0.eq) goto loc_88051D2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	ctx.current_instruction = 0x88051D24;
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x88051d44
	goto loc_88051D44;
loc_88051D2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88051ac8
	ctx.lr = 0x88051D44;
	sub_88051AC8(ctx, base);
loc_88051D44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88057280) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88057280;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88057280) {
			switch (rex_dispatch_address) {
				case 0x88057288:
				case 0x880572B4:
				case 0x880572D0:
				case 0x88057340:
				case 0x88057374:
				case 0x880573A8:
				case 0x880573B8:
				case 0x880573DC:
				case 0x88057408:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88057280;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88057288: goto loc_88057288;
		case 0x880572B4: goto loc_880572B4;
		case 0x880572D0: goto loc_880572D0;
		case 0x88057340: goto loc_88057340;
		case 0x88057374: goto loc_88057374;
		case 0x880573A8: goto loc_880573A8;
		case 0x880573B8: goto loc_880573B8;
		case 0x880573DC: goto loc_880573DC;
		case 0x88057408: goto loc_88057408;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88057288;
	__savegprlr_29(ctx, base);
loc_88057288:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x88057288;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880572A4:
	// stdu r9,8(r11)
	ctx.current_instruction = 0x880572A4;
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x880572a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880572A4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x88243690
	ctx.lr = 0x880572B4;
	__imp__XGetVideoMode(ctx, base);
loc_880572B4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.current_instruction = 0x880572BC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,0(r11)
	ctx.current_instruction = 0x880572C4;
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	ctx.current_instruction = 0x880572C8;
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// bl 0x88050040
	ctx.lr = 0x880572D0;
	sub_88050040(ctx, base);
loc_880572D0:
	// lwz r8,100(r1)
	ctx.current_instruction = 0x880572D0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.current_instruction = 0x880572D4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,124(r1)
	ctx.current_instruction = 0x880572D8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r8,80(r1)
	ctx.current_instruction = 0x880572E0;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x880572E4;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	ctx.current_instruction = 0x880572E8;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x880572EC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,132(r31)
	ctx.current_instruction = 0x880572FC;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// stfs f12,136(r31)
	ctx.current_instruction = 0x88057304;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// beq cr6,0x88057318
	if (ctx.cr6.eq) goto loc_88057318;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6724(r11)
	ctx.current_instruction = 0x88057310;
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6724);
	ctx.f0.f64 = double(temp.f32);
	// b 0x88057320
	goto loc_88057320;
loc_88057318:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6720(r11)
	ctx.current_instruction = 0x8805731C;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6720);
	ctx.f0.f64 = double(temp.f32);
loc_88057320:
	// fdivs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,140(r31)
	ctx.current_instruction = 0x88057338;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// bl 0x88050088
	ctx.lr = 0x88057340;
	sub_88050088(ctx, base);
loc_88057340:
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,60(r31)
	ctx.current_instruction = 0x88057348;
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88057408
	if (ctx.cr6.lt) goto loc_88057408;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r31)
	ctx.current_instruction = 0x88057364;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880502e0
	ctx.lr = 0x88057374;
	sub_880502E0(ctx, base);
loc_88057374:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r29,0(r3)
	ctx.current_instruction = 0x8805737C;
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r29.u16);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r9,10(r3)
	ctx.current_instruction = 0x88057384;
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r11,2(r3)
	ctx.current_instruction = 0x8805738C;
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// sth r10,6(r3)
	ctx.current_instruction = 0x88057394;
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// sth r8,4(r3)
	ctx.current_instruction = 0x88057398;
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// sth r7,8(r3)
	ctx.current_instruction = 0x8805739C;
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lwz r3,60(r31)
	ctx.current_instruction = 0x880573A0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x880502f8
	ctx.lr = 0x880573A8;
	sub_880502F8(ctx, base);
loc_880573A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x88050070
	ctx.lr = 0x880573B8;
	sub_88050070(ctx, base);
loc_880573B8:
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// stw r3,64(r31)
	ctx.current_instruction = 0x880573BC;
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88057408
	if (ctx.cr6.lt) goto loc_88057408;
	// lis r11,-30683
	ctx.r11.s64 = -2010841088;
	// addi r3,r11,2796
	ctx.r3.s64 = ctx.r11.s64 + 2796;
	// bl 0x880500a0
	ctx.lr = 0x880573DC;
	sub_880500A0(ctx, base);
loc_880573DC:
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,68(r31)
	ctx.current_instruction = 0x880573E0;
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x88057408
	if (ctx.cr6.lt) goto loc_88057408;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880573F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.current_instruction = 0x880573FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88057408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88057408:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805B758) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805B758;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805B758) {
			switch (rex_dispatch_address) {
				case 0x8805B784:
				case 0x8805B7A4:
				case 0x8805B7B8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805B758;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805B784: goto loc_8805B784;
		case 0x8805B7A4: goto loc_8805B7A4;
		case 0x8805B7B8: goto loc_8805B7B8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805B75C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805B760;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805B764;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805B768;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x8805B76C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.current_instruction = 0x8805B778;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8805B784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B784:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r31)
	ctx.current_instruction = 0x8805B788;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,316(r31)
	ctx.current_instruction = 0x8805B790;
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// std r30,304(r31)
	ctx.current_instruction = 0x8805B794;
	REX_STORE_U64(ctx.r31.u32 + 304, ctx.r30.u64);
	// lwz r7,120(r8)
	ctx.current_instruction = 0x8805B798;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8805B7A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B7A4:
	// lwz r6,0(r31)
	ctx.current_instruction = 0x8805B7A4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r6)
	ctx.current_instruction = 0x8805B7AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8805B7B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805B7B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805B7C0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805B7C8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805B7CC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805C048) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805C048;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805C048) {
			switch (rex_dispatch_address) {
				case 0x8805C07C:
				case 0x8805C084:
				case 0x8805C0A0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805C048;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805C07C: goto loc_8805C07C;
		case 0x8805C084: goto loc_8805C084;
		case 0x8805C0A0: goto loc_8805C0A0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8805C04C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x8805C050;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8805C054;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x8805C058;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,9192
	ctx.r10.s64 = ctx.r11.s64 + 9192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	ctx.current_instruction = 0x8805C06C;
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r10)
	ctx.current_instruction = 0x8805C070;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8805C07C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8805C07C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88062000
	ctx.lr = 0x8805C084;
	sub_88062000(ctx, base);
loc_8805C084:
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8805c0a4
	if (ctx.cr6.eq) goto loc_8805C0A4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x88050358
	ctx.lr = 0x8805C0A0;
	sub_88050358(ctx, base);
loc_8805C0A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8805C0A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8805C0A8;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x8805C0B0;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8805C0B4;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8805DDB8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8805DDB8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DDB8;
	ctx.current_instruction = 0x8805DDB8;
	// lwz r3,12(r3)
	ctx.current_instruction = 0x8805DDB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8806e028
	sub_8806E028(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8805DE60) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8805DE60;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8805DE60) {
			switch (rex_dispatch_address) {
				case 0x8805DE68:
				case 0x8805DED4:
				case 0x8805DEFC:
				case 0x8805DF60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8805DE60;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8805DE68: goto loc_8805DE68;
		case 0x8805DED4: goto loc_8805DED4;
		case 0x8805DEFC: goto loc_8805DEFC;
		case 0x8805DF60: goto loc_8805DF60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805083c
	ctx.lr = 0x8805DE68;
	__savegprlr_25(ctx, base);
loc_8805DE68:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x8805DE68;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,20(r4)
	ctx.current_instruction = 0x8805DE74;
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,16(r4)
	ctx.current_instruction = 0x8805DE7C;
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,0(r4)
	ctx.current_instruction = 0x8805DE84;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	ctx.current_instruction = 0x8805DE88;
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,24(r4)
	ctx.current_instruction = 0x8805DE8C;
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,8(r4)
	ctx.current_instruction = 0x8805DE90;
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	ctx.current_instruction = 0x8805DE94;
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r10,568(r3)
	ctx.current_instruction = 0x8805DE98;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8805df7c
	if (ctx.cr6.lt) goto loc_8805DF7C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8805dec0
	if (!ctx.cr6.lt) goto loc_8805DEC0;
	// lwz r9,56(r3)
	ctx.current_instruction = 0x8805DEAC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// addi r30,r10,-2
	ctx.r30.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8805dec0
	if (!ctx.cr6.eq) goto loc_8805DEC0;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_8805DEC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r26)
	ctx.current_instruction = 0x8805DEC4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x8807cf10
	ctx.lr = 0x8805DED4;
	sub_8807CF10(ctx, base);
loc_8805DED4:
	// addi r27,r30,-1
	ctx.r27.s64 = ctx.r30.s64 + -1;
	// stw r3,8(r31)
	ctx.current_instruction = 0x8805DED8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8805df48
	if (ctx.cr6.lt) goto loc_8805DF48;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8805DEEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r26)
	ctx.current_instruction = 0x8805DEF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 564);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8807cf10
	ctx.lr = 0x8805DEFC;
	sub_8807CF10(ctx, base);
loc_8805DEFC:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8805df0c
	if (ctx.cr6.eq) goto loc_8805DF0C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8805df2c
	if (!ctx.cr6.eq) goto loc_8805DF2C;
loc_8805DF0C:
	// subf r11,r29,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r29.u64;
	// stw r3,4(r31)
	ctx.current_instruction = 0x8805DF10;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,20(r31)
	ctx.current_instruction = 0x8805DF18;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8805df2c
	if (!ctx.cr6.eq) goto loc_8805DF2C;
	// stw r11,16(r31)
	ctx.current_instruction = 0x8805DF20;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r3,0(r31)
	ctx.current_instruction = 0x8805DF28;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8805DF2C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8805df40
	if (!ctx.cr6.eq) goto loc_8805DF40;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8805df40
	if (!ctx.cr6.eq) goto loc_8805DF40;
	// stw r25,12(r31)
	ctx.current_instruction = 0x8805DF3C;
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8805DF40:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8805deec
	if (!ctx.cr0.lt) goto loc_8805DEEC;
loc_8805DF48:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8805df7c
	if (ctx.cr6.lt) goto loc_8805DF7C;
loc_8805DF50:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,564(r26)
	ctx.current_instruction = 0x8805DF54;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8807cf10
	ctx.lr = 0x8805DF60;
	sub_8807CF10(ctx, base);
loc_8805DF60:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8805df7c
	if (!ctx.cr6.eq) goto loc_8805DF7C;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x8805DF68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	ctx.current_instruction = 0x8805DF74;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x8805df50
	if (!ctx.cr0.lt) goto loc_8805DF50;
loc_8805DF7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8805088c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88063748) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88063748;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88063748) {
			switch (rex_dispatch_address) {
				case 0x88063784:
				case 0x88063790:
				case 0x880637A0:
				case 0x880637B0:
				case 0x880637C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88063748;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88063784: goto loc_88063784;
		case 0x88063790: goto loc_88063790;
		case 0x880637A0: goto loc_880637A0;
		case 0x880637B0: goto loc_880637B0;
		case 0x880637C0: goto loc_880637C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806374C;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x88063750;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x88063754;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x88063758;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880637c8
	if (ctx.cr6.eq) goto loc_880637C8;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x88063768;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880637c8
	if (ctx.cr6.eq) goto loc_880637C8;
	// lwz r11,548(r31)
	ctx.current_instruction = 0x88063774;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,80(r1)
	ctx.current_instruction = 0x88063778;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r3,608(r31)
	ctx.current_instruction = 0x8806377C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880cb210
	ctx.lr = 0x88063784;
	sub_880CB210(ctx, base);
loc_88063784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,608(r31)
	ctx.current_instruction = 0x88063788;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x880625e8
	ctx.lr = 0x88063790;
	sub_880625E8(ctx, base);
loc_88063790:
	// lwz r3,80(r1)
	ctx.current_instruction = 0x88063790;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880637b0
	if (ctx.cr6.eq) goto loc_880637B0;
	// bl 0x880cd1f0
	ctx.lr = 0x880637A0;
	sub_880CD1F0(ctx, base);
loc_880637A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cb318
	ctx.lr = 0x880637B0;
	sub_880CB318(ctx, base);
loc_880637B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	ctx.current_instruction = 0x880637B8;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x880cb360
	ctx.lr = 0x880637C0;
	sub_880CB360(ctx, base);
loc_880637C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x880637cc
	goto loc_880637CC;
loc_880637C8:
	// li r3,4
	ctx.r3.s64 = 4;
loc_880637CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880637D0;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x880637D8;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880637DC;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88065480) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88065480);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88065480;
	ctx.current_instruction = 0x88065480;
	// lwz r11,0(r3)
	ctx.current_instruction = 0x88065480;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,124
	ctx.r7.s64 = ctx.r3.s64 + 124;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r10,48(r11)
	ctx.current_instruction = 0x8806548C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_880656A0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880656A0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880656A0) {
			switch (rex_dispatch_address) {
				case 0x880656CC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880656A0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880656CC: goto loc_880656CC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880656A4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880656A8;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r10,0(r4)
	ctx.current_instruction = 0x880656B8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,124(r11)
	ctx.current_instruction = 0x880656BC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r8,52(r9)
	ctx.current_instruction = 0x880656C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880656CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880656CC:
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r3,r5,10
	ctx.r3.u64 = ctx.r5.u64 | 10;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880656E4;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880674D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880674D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880674D0) {
			switch (rex_dispatch_address) {
				case 0x880674D8:
				case 0x88067574:
				case 0x880675E0:
				case 0x8806760C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880674D0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880674D8: goto loc_880674D8;
		case 0x88067574: goto loc_88067574;
		case 0x880675E0: goto loc_880675E0;
		case 0x8806760C: goto loc_8806760C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x880674D8;
	__savegprlr_27(ctx, base);
loc_880674D8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880674D8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,96(r1)
	ctx.current_instruction = 0x880674E8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// lwz r3,584(r3)
	ctx.current_instruction = 0x88067500;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8806764c
	if (ctx.cr6.eq) goto loc_8806764C;
	// lwz r11,588(r30)
	ctx.current_instruction = 0x8806751C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 588);
	// addi r28,r30,588
	ctx.r28.s64 = ctx.r30.s64 + 588;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8806764c
	if (!ctx.cr6.eq) goto loc_8806764C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x880675bc
	if (ctx.cr6.eq) goto loc_880675BC;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x880675bc
	if (ctx.cr6.eq) goto loc_880675BC;
	// lhz r11,76(r30)
	ctx.current_instruction = 0x88067540;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x880675bc
	if (!ctx.cr6.gt) goto loc_880675BC;
	// lwz r11,616(r30)
	ctx.current_instruction = 0x8806754C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x88067558;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r4,31,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFF;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8806756C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880d85b0
	ctx.lr = 0x88067574;
	sub_880D85B0(ctx, base);
loc_88067574:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880675ec
	if (ctx.cr6.lt) goto loc_880675EC;
	// lwz r7,96(r1)
	ctx.current_instruction = 0x8806757C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880675e4
	if (ctx.cr6.eq) goto loc_880675E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r9,r27,-2
	ctx.r9.s64 = ctx.r27.s64 + -2;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
loc_88067594:
	// lhz r8,0(r31)
	ctx.current_instruction = 0x88067594;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// sthu r8,2(r10)
	ctx.current_instruction = 0x880675A4;
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// lhzu r8,2(r31)
	ctx.current_instruction = 0x880675A8;
	ea = 2 + ctx.r31.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// sthu r8,2(r9)
	ctx.current_instruction = 0x880675B0;
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x88067594
	if (ctx.cr6.lt) goto loc_88067594;
	// b 0x880675e4
	goto loc_880675E4;
loc_880675BC:
	// lwz r11,616(r30)
	ctx.current_instruction = 0x880675BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,92(r1)
	ctx.current_instruction = 0x880675C8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	ctx.current_instruction = 0x880675D8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x880d85b0
	ctx.lr = 0x880675E0;
	sub_880D85B0(ctx, base);
loc_880675E0:
	// lwz r7,96(r1)
	ctx.current_instruction = 0x880675E0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_880675E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8806761c
	if (!ctx.cr6.lt) goto loc_8806761C;
loc_880675EC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,556(r30)
	ctx.current_instruction = 0x880675F0;
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,96(r1)
	ctx.current_instruction = 0x880675F8;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,392(r30)
	ctx.current_instruction = 0x880675FC;
	REX_STORE_U32(ctx.r30.u32 + 392, ctx.r11.u32);
	// stw r10,0(r28)
	ctx.current_instruction = 0x88067600;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,584(r30)
	ctx.current_instruction = 0x88067604;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// bl 0x880d1df0
	ctx.lr = 0x8806760C;
	sub_880D1DF0(ctx, base);
loc_8806760C:
	// lwz r7,96(r1)
	ctx.current_instruction = 0x8806760C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806761C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8806763c
	if (!ctx.cr6.eq) goto loc_8806763C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,556(r30)
	ctx.current_instruction = 0x88067628;
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r29.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,0(r28)
	ctx.current_instruction = 0x88067630;
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806763C:
	// stw r7,556(r30)
	ctx.current_instruction = 0x8806763C;
	REX_STORE_U32(ctx.r30.u32 + 556, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
loc_8806764C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88069510) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88069510);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88069510;
	ctx.current_instruction = 0x88069510;
	// lwz r11,212(r3)
	ctx.current_instruction = 0x88069510;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// stw r4,212(r3)
	ctx.current_instruction = 0x88069514;
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r11,64(r3)
	ctx.current_instruction = 0x88069520;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lwz r3,80(r3)
	ctx.current_instruction = 0x8806952C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8806BFA8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806BFA8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806BFA8) {
			switch (rex_dispatch_address) {
				case 0x8806BFD4:
				case 0x8806BFE4:
				case 0x8806BFF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806BFA8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806BFD4: goto loc_8806BFD4;
		case 0x8806BFE4: goto loc_8806BFE4;
		case 0x8806BFF8: goto loc_8806BFF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806BFAC;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806BFB0;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806BFB4;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.current_instruction = 0x8806BFBC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bfd4
	if (ctx.cr6.eq) goto loc_8806BFD4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x88050358
	ctx.lr = 0x8806BFD4;
	sub_88050358(ctx, base);
loc_8806BFD4:
	// lwz r3,88(r31)
	ctx.current_instruction = 0x8806BFD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8806bfe4
	if (ctx.cr6.eq) goto loc_8806BFE4;
	// bl 0x881ec570
	ctx.lr = 0x8806BFE4;
	sub_881EC570(ctx, base);
loc_8806BFE4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8806BFE4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.current_instruction = 0x8806BFEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8806BFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8806BFF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806C000;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806C008;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806D3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8806D3C0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8806D3C0) {
			switch (rex_dispatch_address) {
				case 0x8806D3F0:
				case 0x8806D418:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806D3C0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8806D3F0: goto loc_8806D3F0;
		case 0x8806D418: goto loc_8806D418;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x8806D3C4;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x8806D3C8;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x8806D3CC;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8806d3f0
	if (!ctx.cr6.eq) goto loc_8806D3F0;
	// lwz r11,30728(r3)
	ctx.current_instruction = 0x8806D3DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806d3f0
	if (!ctx.cr6.eq) goto loc_8806D3F0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x880e4c78
	ctx.lr = 0x8806D3F0;
	sub_880E4C78(ctx, base);
loc_8806D3F0:
	// lwz r11,30752(r31)
	ctx.current_instruction = 0x8806D3F0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8806d408
	if (!ctx.cr6.eq) goto loc_8806D408;
	// lwz r11,30756(r31)
	ctx.current_instruction = 0x8806D3FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8806d418
	if (ctx.cr6.eq) goto loc_8806D418;
loc_8806D408:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4a00
	ctx.lr = 0x8806D418;
	sub_880E4A00(ctx, base);
loc_8806D418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x8806D41C;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x8806D424;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806E590) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806E590);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806E590;
	ctx.current_instruction = 0x8806E590;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8806F5E8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8806F5E8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8806F5E8;
	ctx.current_instruction = 0x8806F5E8;
	// addi r11,r4,4997
	ctx.r11.s64 = ctx.r4.s64 + 4997;
	// addi r10,r4,5000
	ctx.r10.s64 = ctx.r4.s64 + 5000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r3
	ctx.current_instruction = 0x8806F5F8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r6,r8,r3
	ctx.current_instruction = 0x8806F5FC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwz r5,0(r7)
	ctx.current_instruction = 0x8806F600;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,20088(r3)
	ctx.current_instruction = 0x8806F604;
	REX_STORE_U32(ctx.r3.u32 + 20088, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.current_instruction = 0x8806F608;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,20092(r3)
	ctx.current_instruction = 0x8806F60C;
	REX_STORE_U32(ctx.r3.u32 + 20092, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.current_instruction = 0x8806F610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,20096(r3)
	ctx.current_instruction = 0x8806F614;
	REX_STORE_U32(ctx.r3.u32 + 20096, ctx.r11.u32);
	// lwz r10,16(r7)
	ctx.current_instruction = 0x8806F618;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,20080(r3)
	ctx.current_instruction = 0x8806F61C;
	REX_STORE_U32(ctx.r3.u32 + 20080, ctx.r10.u32);
	// lwz r9,20(r7)
	ctx.current_instruction = 0x8806F620;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r9,20084(r3)
	ctx.current_instruction = 0x8806F624;
	REX_STORE_U32(ctx.r3.u32 + 20084, ctx.r9.u32);
	// lwz r8,0(r6)
	ctx.current_instruction = 0x8806F628;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,20108(r3)
	ctx.current_instruction = 0x8806F62C;
	REX_STORE_U32(ctx.r3.u32 + 20108, ctx.r8.u32);
	// lwz r7,4(r6)
	ctx.current_instruction = 0x8806F630;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,20112(r3)
	ctx.current_instruction = 0x8806F634;
	REX_STORE_U32(ctx.r3.u32 + 20112, ctx.r7.u32);
	// lwz r5,8(r6)
	ctx.current_instruction = 0x8806F638;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r5,20116(r3)
	ctx.current_instruction = 0x8806F63C;
	REX_STORE_U32(ctx.r3.u32 + 20116, ctx.r5.u32);
	// lwz r4,12(r6)
	ctx.current_instruction = 0x8806F640;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,20124(r3)
	ctx.current_instruction = 0x8806F644;
	REX_STORE_U32(ctx.r3.u32 + 20124, ctx.r4.u32);
	// lwz r11,16(r6)
	ctx.current_instruction = 0x8806F648;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,20100(r3)
	ctx.current_instruction = 0x8806F64C;
	REX_STORE_U32(ctx.r3.u32 + 20100, ctx.r11.u32);
	// lwz r10,20(r6)
	ctx.current_instruction = 0x8806F650;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,20104(r3)
	ctx.current_instruction = 0x8806F654;
	REX_STORE_U32(ctx.r3.u32 + 20104, ctx.r10.u32);
	// lwz r9,24(r6)
	ctx.current_instruction = 0x8806F658;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stw r9,20120(r3)
	ctx.current_instruction = 0x8806F65C;
	REX_STORE_U32(ctx.r3.u32 + 20120, ctx.r9.u32);
	// lwz r8,28(r6)
	ctx.current_instruction = 0x8806F660;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// stw r8,20128(r3)
	ctx.current_instruction = 0x8806F664;
	REX_STORE_U32(ctx.r3.u32 + 20128, ctx.r8.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880705A8) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880705A8);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880705A8;
	ctx.current_instruction = 0x880705A8;
	// lwz r11,31544(r3)
	ctx.current_instruction = 0x880705A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 31544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880705d4
	if (ctx.cr6.eq) goto loc_880705D4;
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r11,r11,-17984
	ctx.r11.s64 = ctx.r11.s64 + -17984;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// lbzx r8,r4,r9
	ctx.current_instruction = 0x880705C4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880705D4:
	// srawi r11,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// lwz r10,31548(r3)
	ctx.current_instruction = 0x880705D8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 31548);
	// xor r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq cr6,0x88070608
	if (ctx.cr6.eq) goto loc_88070608;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x880705f8
	if (!ctx.cr6.gt) goto loc_880705F8;
	// li r11,95
	ctx.r11.s64 = 95;
loc_880705F8:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r10,r10,11944
	ctx.r10.s64 = ctx.r10.s64 + 11944;
	// addi r9,r10,-96
	ctx.r9.s64 = ctx.r10.s64 + -96;
	// b 0x8807061c
	goto loc_8807061C;
loc_88070608:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x88070614
	if (!ctx.cr6.gt) goto loc_88070614;
	// li r11,31
	ctx.r11.s64 = 31;
loc_88070614:
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// addi r9,r10,11944
	ctx.r9.s64 = ctx.r10.s64 + 11944;
loc_8807061C:
	// lbzx r11,r11,r9
	ctx.current_instruction = 0x8807061C;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88071BF0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88071BF0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88071BF0;
	ctx.current_instruction = 0x88071BF0;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,12208
	ctx.r8.s64 = ctx.r11.s64 + 12208;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r7,12192
	ctx.r6.s64 = ctx.r7.s64 + 12192;
	// lwzx r5,r10,r8
	ctx.current_instruction = 0x88071C08;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r5,2596(r3)
	ctx.current_instruction = 0x88071C14;
	REX_STORE_U32(ctx.r3.u32 + 2596, ctx.r5.u32);
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r4,r10,r6
	ctx.current_instruction = 0x88071C24;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// stw r8,2604(r3)
	ctx.current_instruction = 0x88071C2C;
	REX_STORE_U32(ctx.r3.u32 + 2604, ctx.r8.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r6,6892(r3)
	ctx.current_instruction = 0x88071C34;
	REX_STORE_U32(ctx.r3.u32 + 6892, ctx.r6.u32);
	// stw r11,2612(r3)
	ctx.current_instruction = 0x88071C38;
	REX_STORE_U32(ctx.r3.u32 + 2612, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,2600(r3)
	ctx.current_instruction = 0x88071C40;
	REX_STORE_U32(ctx.r3.u32 + 2600, ctx.r4.u32);
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,2608(r3)
	ctx.current_instruction = 0x88071C4C;
	REX_STORE_U32(ctx.r3.u32 + 2608, ctx.r7.u32);
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r5,6896(r3)
	ctx.current_instruction = 0x88071C5C;
	REX_STORE_U32(ctx.r3.u32 + 6896, ctx.r5.u32);
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// stw r4,6900(r3)
	ctx.current_instruction = 0x88071C64;
	REX_STORE_U32(ctx.r3.u32 + 6900, ctx.r4.u32);
	// stw r10,2616(r3)
	ctx.current_instruction = 0x88071C68;
	REX_STORE_U32(ctx.r3.u32 + 2616, ctx.r10.u32);
	// stw r9,6904(r3)
	ctx.current_instruction = 0x88071C6C;
	REX_STORE_U32(ctx.r3.u32 + 6904, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88077DA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88077DA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88077DA0) {
			switch (rex_dispatch_address) {
				case 0x88077DA8:
				case 0x88077DB8:
				case 0x88077DC4:
				case 0x88077DD0:
				case 0x88077DDC:
				case 0x88077E00:
				case 0x88077E40:
				case 0x88077EB4:
				case 0x88077ED8:
				case 0x88077EF4:
				case 0x88077F34:
				case 0x88078080:
				case 0x8807808C:
				case 0x88078094:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88077DA0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88077DA8: goto loc_88077DA8;
		case 0x88077DB8: goto loc_88077DB8;
		case 0x88077DC4: goto loc_88077DC4;
		case 0x88077DD0: goto loc_88077DD0;
		case 0x88077DDC: goto loc_88077DDC;
		case 0x88077E00: goto loc_88077E00;
		case 0x88077E40: goto loc_88077E40;
		case 0x88077EB4: goto loc_88077EB4;
		case 0x88077ED8: goto loc_88077ED8;
		case 0x88077EF4: goto loc_88077EF4;
		case 0x88077F34: goto loc_88077F34;
		case 0x88078080: goto loc_88078080;
		case 0x8807808C: goto loc_8807808C;
		case 0x88078094: goto loc_88078094;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88077DA8;
	__savegprlr_29(ctx, base);
loc_88077DA8:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88077DA8;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x880e4958
	ctx.lr = 0x88077DB8;
	sub_880E4958(ctx, base);
loc_88077DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,676(r31)
	ctx.current_instruction = 0x88077DBC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x8806e7b8
	ctx.lr = 0x88077DC4;
	sub_8806E7B8(ctx, base);
loc_88077DC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x88077DC8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x88102570
	ctx.lr = 0x88077DD0;
	sub_88102570(ctx, base);
loc_88077DD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1416(r31)
	ctx.current_instruction = 0x88077DD4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x880daed0
	ctx.lr = 0x88077DDC;
	sub_880DAED0(ctx, base);
loc_88077DDC:
	// lwz r4,31544(r31)
	ctx.current_instruction = 0x88077DDC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// stw r3,20900(r31)
	ctx.current_instruction = 0x88077DE0;
	REX_STORE_U32(ctx.r31.u32 + 20900, ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x88077df8
	if (!ctx.cr6.eq) goto loc_88077DF8;
	// lwz r11,27988(r31)
	ctx.current_instruction = 0x88077DEC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077e00
	if (!ctx.cr6.eq) goto loc_88077E00;
loc_88077DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880706a8
	ctx.lr = 0x88077E00;
	sub_880706A8(ctx, base);
loc_88077E00:
	// lwz r11,2648(r31)
	ctx.current_instruction = 0x88077E00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077e14
	if (!ctx.cr6.eq) goto loc_88077E14;
	// lwz r11,2592(r31)
	ctx.current_instruction = 0x88077E0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2592);
	// stw r11,2588(r31)
	ctx.current_instruction = 0x88077E10;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
loc_88077E14:
	// lwz r11,2620(r31)
	ctx.current_instruction = 0x88077E14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2620);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x88077e24
	if (ctx.cr6.eq) goto loc_88077E24;
	// stw r11,2588(r31)
	ctx.current_instruction = 0x88077E20;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
loc_88077E24:
	// lwz r11,2564(r31)
	ctx.current_instruction = 0x88077E24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077eb4
	if (ctx.cr6.eq) goto loc_88077EB4;
	// lwz r11,6784(r31)
	ctx.current_instruction = 0x88077E30;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077e48
	if (ctx.cr6.eq) goto loc_88077E48;
	// bl 0x881ee8e8
	ctx.lr = 0x88077E40;
	sub_881EE8E8(ctx, base);
loc_88077E40:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stw r11,2588(r31)
	ctx.current_instruction = 0x88077E44;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
loc_88077E48:
	// lwz r10,2624(r31)
	ctx.current_instruction = 0x88077E48;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2624);
	// lwz r11,2588(r31)
	ctx.current_instruction = 0x88077E4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88077e5c
	if (!ctx.cr6.gt) goto loc_88077E5C;
	// stw r10,2588(r31)
	ctx.current_instruction = 0x88077E58;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r10.u32);
loc_88077E5C:
	// lwz r11,31544(r31)
	ctx.current_instruction = 0x88077E5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 31544);
	// lwz r9,2588(r31)
	ctx.current_instruction = 0x88077E60;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077e88
	if (ctx.cr6.eq) goto loc_88077E88;
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x88077E6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88077e80
	if (!ctx.cr6.eq) goto loc_88077E80;
	// lwz r11,2632(r31)
	ctx.current_instruction = 0x88077E78;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2632);
	// b 0x88077e8c
	goto loc_88077E8C;
loc_88077E80:
	// lwz r11,2636(r31)
	ctx.current_instruction = 0x88077E80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2636);
	// b 0x88077e8c
	goto loc_88077E8C;
loc_88077E88:
	// lwz r11,2628(r31)
	ctx.current_instruction = 0x88077E88;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2628);
loc_88077E8C:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x88077e98
	if (!ctx.cr6.lt) goto loc_88077E98;
	// stw r11,2588(r31)
	ctx.current_instruction = 0x88077E94;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
loc_88077E98:
	// lwz r11,2588(r31)
	ctx.current_instruction = 0x88077E98;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x88077ea8
	if (!ctx.cr6.gt) goto loc_88077EA8;
	// stw r10,2588(r31)
	ctx.current_instruction = 0x88077EA4;
	REX_STORE_U32(ctx.r31.u32 + 2588, ctx.r10.u32);
loc_88077EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2588(r31)
	ctx.current_instruction = 0x88077EAC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2588);
	// bl 0x88071bf0
	ctx.lr = 0x88077EB4;
	sub_88071BF0(ctx, base);
loc_88077EB4:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,2124(r31)
	ctx.current_instruction = 0x88077EB8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 2124);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,6860(r31)
	ctx.current_instruction = 0x88077EC0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 6860);
	// stw r30,80(r1)
	ctx.current_instruction = 0x88077EC4;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	ctx.current_instruction = 0x88077ECC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8806ff60
	ctx.lr = 0x88077ED8;
	sub_8806FF60(ctx, base);
loc_88077ED8:
	// lwz r11,84(r1)
	ctx.current_instruction = 0x88077ED8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x88077EE0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x88070140
	ctx.lr = 0x88077EF4;
	sub_88070140(ctx, base);
loc_88077EF4:
	// lwz r7,27988(r31)
	ctx.current_instruction = 0x88077EF4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 27988);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,28012(r31)
	ctx.current_instruction = 0x88077F00;
	REX_STORE_U32(ctx.r31.u32 + 28012, ctx.r8.u32);
	// bne cr6,0x88077f24
	if (!ctx.cr6.eq) goto loc_88077F24;
	// lwz r11,1560(r31)
	ctx.current_instruction = 0x88077F08;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077f1c
	if (ctx.cr6.eq) goto loc_88077F1C;
	// lwz r11,1588(r31)
	ctx.current_instruction = 0x88077F14;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1588);
	// b 0x88077f20
	goto loc_88077F20;
loc_88077F1C:
	// lwz r11,1592(r31)
	ctx.current_instruction = 0x88077F1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1592);
loc_88077F20:
	// stw r11,8204(r31)
	ctx.current_instruction = 0x88077F20;
	REX_STORE_U32(ctx.r31.u32 + 8204, ctx.r11.u32);
loc_88077F24:
	// lwz r11,7056(r31)
	ctx.current_instruction = 0x88077F24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88077F34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88077F34:
	// lwz r10,1692(r31)
	ctx.current_instruction = 0x88077F34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// stw r3,19456(r31)
	ctx.current_instruction = 0x88077F38;
	REX_STORE_U32(ctx.r31.u32 + 19456, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88078060
	if (ctx.cr6.lt) goto loc_88078060;
	// lwz r11,1696(r31)
	ctx.current_instruction = 0x88077F44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x88078060
	if (ctx.cr6.lt) goto loc_88078060;
	// lwz r11,28004(r31)
	ctx.current_instruction = 0x88077F50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88077f64
	if (ctx.cr6.eq) goto loc_88077F64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x88077f78
	goto loc_88077F78;
loc_88077F64:
	// lwz r11,28132(r31)
	ctx.current_instruction = 0x88077F64;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28132);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_88077F78:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x88077F78;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x88078060
	if (ctx.cr6.eq) goto loc_88078060;
loc_88077F8C:
	// lwz r10,1692(r31)
	ctx.current_instruction = 0x88077F8C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077F90;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077F94;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.current_instruction = 0x88077FA8;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88077fb8
	if (ctx.cr6.eq) goto loc_88077FB8;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88077FB4;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077FB8:
	// lwz r10,1692(r31)
	ctx.current_instruction = 0x88077FB8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077FBC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077FC4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x88077FDC;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// beq cr6,0x88077fec
	if (ctx.cr6.eq) goto loc_88077FEC;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88077FE8;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88077FEC:
	// lwz r10,1696(r31)
	ctx.current_instruction = 0x88077FEC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x88077FF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88077FF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r9
	ctx.current_instruction = 0x88078008;
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x88078018
	if (ctx.cr6.eq) goto loc_88078018;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88078014;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_88078018:
	// lwz r10,1696(r31)
	ctx.current_instruction = 0x88078018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1696);
	// lwz r7,720(r31)
	ctx.current_instruction = 0x8807801C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,2548(r31)
	ctx.current_instruction = 0x88078024;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r9
	ctx.current_instruction = 0x8807803C;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// beq cr6,0x8807804c
	if (ctx.cr6.eq) goto loc_8807804C;
	// sthx r8,r10,r9
	ctx.current_instruction = 0x88078048;
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
loc_8807804C:
	// lwz r10,720(r31)
	ctx.current_instruction = 0x8807804C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x88077f8c
	if (ctx.cr6.lt) goto loc_88077F8C;
loc_88078060:
	// lwz r11,7140(r31)
	ctx.current_instruction = 0x88078060;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88078074
	if (ctx.cr6.eq) goto loc_88078074;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8807808c
	if (!ctx.cr6.eq) goto loc_8807808C;
loc_88078074:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880f40c0
	ctx.lr = 0x88078080;
	sub_880F40C0(ctx, base);
loc_88078080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,676(r31)
	ctx.current_instruction = 0x88078084;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 676);
	// bl 0x88074338
	ctx.lr = 0x8807808C;
	sub_88074338(ctx, base);
loc_8807808C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880e4958
	ctx.lr = 0x88078094;
	sub_880E4958(ctx, base);
loc_88078094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88082408) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88082408;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88082408) {
			switch (rex_dispatch_address) {
				case 0x88082410:
				case 0x88082484:
				case 0x88082594:
				case 0x880825E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88082408;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88082410: goto loc_88082410;
		case 0x88082484: goto loc_88082484;
		case 0x88082594: goto loc_88082594;
		case 0x880825E0: goto loc_880825E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x88082410;
	__savegprlr_29(ctx, base);
loc_88082410:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x88082410;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,30740(r3)
	ctx.current_instruction = 0x88082414;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30740);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082548
	if (ctx.cr6.eq) goto loc_88082548;
	// lwz r10,30696(r3)
	ctx.current_instruction = 0x8808242C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30696);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880824e4
	if (ctx.cr6.eq) goto loc_880824E4;
	// lwz r10,30748(r3)
	ctx.current_instruction = 0x88082438;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30748);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880824e4
	if (ctx.cr6.eq) goto loc_880824E4;
	// lwz r10,30704(r3)
	ctx.current_instruction = 0x88082444;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x880824e4
	if (ctx.cr6.eq) goto loc_880824E4;
	// lwz r11,30668(r3)
	ctx.current_instruction = 0x88082450;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 30668);
	// lfd f2,30688(r3)
	ctx.current_instruction = 0x88082454;
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r3.u32 + 30688);
	// lwz r10,30680(r3)
	ctx.current_instruction = 0x88082458;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 30680);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	ctx.current_instruction = 0x88082464;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88082468;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	ctx.current_instruction = 0x8808246C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.current_instruction = 0x88082470;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f11,f12
	ctx.f1.f64 = ctx.f11.f64 / ctx.f12.f64;
	// bl 0x881ef940
	ctx.lr = 0x88082484;
	sub_881EF940(ctx, base);
loc_88082484:
	// lwz r7,30680(r31)
	ctx.current_instruction = 0x88082484;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// extsw r3,r30
	ctx.r3.s64 = ctx.r30.s32;
	// lwz r6,30668(r31)
	ctx.current_instruction = 0x8808248C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// lfd f10,30768(r31)
	ctx.current_instruction = 0x88082490;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lfd f9,30776(r31)
	ctx.current_instruction = 0x88082498;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 30776);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fsub f8,f10,f9
	ctx.f8.f64 = ctx.f10.f64 - ctx.f9.f64;
	// std r5,80(r1)
	ctx.current_instruction = 0x880824A4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f6,80(r1)
	ctx.current_instruction = 0x880824A8;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	ctx.current_instruction = 0x880824AC;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.current_instruction = 0x880824B0;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	ctx.current_instruction = 0x880824B4;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f4,80(r1)
	ctx.current_instruction = 0x880824B8;
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f7,30800(r31)
	ctx.current_instruction = 0x880824BC;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// fcfid f0,f6
	ctx.f0.f64 = double(ctx.f6.s64);
	// fmul f2,f8,f7
	ctx.f2.f64 = ctx.f8.f64 * ctx.f7.f64;
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fcfid f13,f5
	ctx.f13.f64 = double(ctx.f5.s64);
	// fnmsub f12,f2,f0,f3
	ctx.f12.f64 = -std::fma(ctx.f2.f64, ctx.f0.f64, -ctx.f3.f64);
	// fmul f11,f1,f12
	ctx.f11.f64 = ctx.f1.f64 * ctx.f12.f64;
	// fdiv f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 / ctx.f13.f64;
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// b 0x880825c4
	goto loc_880825C4;
loc_880824E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082548
	if (ctx.cr6.eq) goto loc_88082548;
	// lwz r11,30748(r31)
	ctx.current_instruction = 0x880824EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88082548
	if (ctx.cr6.eq) goto loc_88082548;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lwz r11,1376(r31)
	ctx.current_instruction = 0x880824FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1376);
	// lfd f0,30768(r31)
	ctx.current_instruction = 0x88082500;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 30768);
	// std r10,80(r1)
	ctx.current_instruction = 0x88082504;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f13,30776(r31)
	ctx.current_instruction = 0x8808250C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r31.u32 + 30776);
	// fsub f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfd f9,30800(r31)
	ctx.current_instruction = 0x88082514;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r31.u32 + 30800);
	// fmul f6,f10,f9
	ctx.f6.f64 = ctx.f10.f64 * ctx.f9.f64;
	// lfd f12,80(r1)
	ctx.current_instruction = 0x8808251C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	ctx.current_instruction = 0x88082520;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfd f11,80(r1)
	ctx.current_instruction = 0x88082530;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fdivs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// b 0x880825c4
	goto loc_880825C4;
loc_88082548:
	// lwz r11,30696(r31)
	ctx.current_instruction = 0x88082548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880825e4
	if (ctx.cr6.eq) goto loc_880825E4;
	// lwz r11,30704(r31)
	ctx.current_instruction = 0x88082554;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880825e4
	if (ctx.cr6.eq) goto loc_880825E4;
	// lwz r10,30668(r31)
	ctx.current_instruction = 0x88082560;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// lfd f2,30688(r31)
	ctx.current_instruction = 0x88082564;
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r31.u32 + 30688);
	// lwz r11,30680(r31)
	ctx.current_instruction = 0x88082568;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 30680);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,88(r1)
	ctx.current_instruction = 0x88082574;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.current_instruction = 0x88082578;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	ctx.current_instruction = 0x8808257C;
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.current_instruction = 0x88082580;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fdiv f1,f11,f12
	ctx.f1.f64 = ctx.f11.f64 / ctx.f12.f64;
	// bl 0x881ef940
	ctx.lr = 0x88082594;
	sub_881EF940(ctx, base);
loc_88082594:
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// lwz r6,30668(r31)
	ctx.current_instruction = 0x88082598;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 30668);
	// std r7,88(r1)
	ctx.current_instruction = 0x8808259C;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.current_instruction = 0x880825A0;
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	ctx.current_instruction = 0x880825AC;
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f8,88(r1)
	ctx.current_instruction = 0x880825B0;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fmul f7,f1,f9
	ctx.f7.f64 = ctx.f1.f64 * ctx.f9.f64;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fdiv f5,f7,f6
	ctx.f5.f64 = ctx.f7.f64 / ctx.f6.f64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
loc_880825C4:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfs f0,6732(r11)
	ctx.current_instruction = 0x880825C8;
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x880825e4
	if (!ctx.cr6.gt) goto loc_880825E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8807f210
	ctx.lr = 0x880825E0;
	sub_8807F210(ctx, base);
loc_880825E0:
	// stw r3,672(r31)
	ctx.current_instruction = 0x880825E0;
	REX_STORE_U32(ctx.r31.u32 + 672, ctx.r3.u32);
loc_880825E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8808A8D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8808A8D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8808A8D8) {
			switch (rex_dispatch_address) {
				case 0x8808A8E0:
				case 0x8808A99C:
				case 0x8808A9B8:
				case 0x8808AA00:
				case 0x8808AA34:
				case 0x8808AA78:
				case 0x8808AAE8:
				case 0x8808AB2C:
				case 0x8808AB6C:
				case 0x8808AC18:
				case 0x8808AC2C:
				case 0x8808AC70:
				case 0x8808ACA8:
				case 0x8808ACEC:
				case 0x8808AD60:
				case 0x8808ADA4:
				case 0x8808ADE0:
				case 0x8808AE90:
				case 0x8808AEA8:
				case 0x8808AEEC:
				case 0x8808AF20:
				case 0x8808AF64:
				case 0x8808AFD4:
				case 0x8808B018:
				case 0x8808B054:
				case 0x8808B0DC:
				case 0x8808B0F4:
				case 0x8808B138:
				case 0x8808B16C:
				case 0x8808B1B0:
				case 0x8808B220:
				case 0x8808B264:
				case 0x8808B2A0:
				case 0x8808B33C:
				case 0x8808B354:
				case 0x8808B398:
				case 0x8808B3CC:
				case 0x8808B410:
				case 0x8808B480:
				case 0x8808B4C4:
				case 0x8808B500:
				case 0x8808B5A0:
				case 0x8808B5B4:
				case 0x8808B5F8:
				case 0x8808B630:
				case 0x8808B674:
				case 0x8808B6E8:
				case 0x8808B72C:
				case 0x8808B768:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8808A8D8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8808A8E0: goto loc_8808A8E0;
		case 0x8808A99C: goto loc_8808A99C;
		case 0x8808A9B8: goto loc_8808A9B8;
		case 0x8808AA00: goto loc_8808AA00;
		case 0x8808AA34: goto loc_8808AA34;
		case 0x8808AA78: goto loc_8808AA78;
		case 0x8808AAE8: goto loc_8808AAE8;
		case 0x8808AB2C: goto loc_8808AB2C;
		case 0x8808AB6C: goto loc_8808AB6C;
		case 0x8808AC18: goto loc_8808AC18;
		case 0x8808AC2C: goto loc_8808AC2C;
		case 0x8808AC70: goto loc_8808AC70;
		case 0x8808ACA8: goto loc_8808ACA8;
		case 0x8808ACEC: goto loc_8808ACEC;
		case 0x8808AD60: goto loc_8808AD60;
		case 0x8808ADA4: goto loc_8808ADA4;
		case 0x8808ADE0: goto loc_8808ADE0;
		case 0x8808AE90: goto loc_8808AE90;
		case 0x8808AEA8: goto loc_8808AEA8;
		case 0x8808AEEC: goto loc_8808AEEC;
		case 0x8808AF20: goto loc_8808AF20;
		case 0x8808AF64: goto loc_8808AF64;
		case 0x8808AFD4: goto loc_8808AFD4;
		case 0x8808B018: goto loc_8808B018;
		case 0x8808B054: goto loc_8808B054;
		case 0x8808B0DC: goto loc_8808B0DC;
		case 0x8808B0F4: goto loc_8808B0F4;
		case 0x8808B138: goto loc_8808B138;
		case 0x8808B16C: goto loc_8808B16C;
		case 0x8808B1B0: goto loc_8808B1B0;
		case 0x8808B220: goto loc_8808B220;
		case 0x8808B264: goto loc_8808B264;
		case 0x8808B2A0: goto loc_8808B2A0;
		case 0x8808B33C: goto loc_8808B33C;
		case 0x8808B354: goto loc_8808B354;
		case 0x8808B398: goto loc_8808B398;
		case 0x8808B3CC: goto loc_8808B3CC;
		case 0x8808B410: goto loc_8808B410;
		case 0x8808B480: goto loc_8808B480;
		case 0x8808B4C4: goto loc_8808B4C4;
		case 0x8808B500: goto loc_8808B500;
		case 0x8808B5A0: goto loc_8808B5A0;
		case 0x8808B5B4: goto loc_8808B5B4;
		case 0x8808B5F8: goto loc_8808B5F8;
		case 0x8808B630: goto loc_8808B630;
		case 0x8808B674: goto loc_8808B674;
		case 0x8808B6E8: goto loc_8808B6E8;
		case 0x8808B72C: goto loc_8808B72C;
		case 0x8808B768: goto loc_8808B768;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x8808A8E0;
	__savegprlr_14(ctx, base);
loc_8808A8E0:
	// stwu r1,-320(r1)
	ctx.current_instruction = 0x8808A8E0;
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,444(r1)
	ctx.current_instruction = 0x8808A8E4;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r4,348(r1)
	ctx.current_instruction = 0x8808A8F0;
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// subfic r8,r18,0
	ctx.xer.ca = ctx.r18.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r18.u64;
	// lwz r22,548(r1)
	ctx.current_instruction = 0x8808A8F8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 548);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r21,540(r1)
	ctx.current_instruction = 0x8808A900;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r25,524(r1)
	ctx.current_instruction = 0x8808A908;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r24,516(r1)
	ctx.current_instruction = 0x8808A910;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// lwz r9,420(r1)
	ctx.current_instruction = 0x8808A918;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r23,508(r1)
	ctx.current_instruction = 0x8808A920;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// lwz r30,460(r1)
	ctx.current_instruction = 0x8808A928;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,372(r1)
	ctx.current_instruction = 0x8808A930;
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// stw r11,152(r1)
	ctx.current_instruction = 0x8808A938;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,156(r1)
	ctx.current_instruction = 0x8808A940;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r4,160(r1)
	ctx.current_instruction = 0x8808A944;
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// beq cr6,0x8808ae3c
	if (ctx.cr6.eq) goto loc_8808AE3C;
	// lwz r4,1380(r3)
	ctx.current_instruction = 0x8808A94C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1380);
	// lwz r10,436(r1)
	ctx.current_instruction = 0x8808A950;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// subf r11,r4,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8808abb4
	if (ctx.cr6.eq) goto loc_8808ABB4;
	// lwz r9,484(r1)
	ctx.current_instruction = 0x8808A964;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808A96C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r6,16
	ctx.r6.s64 = 16;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808a9a0
	if (!ctx.cr6.eq) goto loc_8808A9A0;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808A980;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r26,16
	ctx.r26.s64 = 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808A990;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A99C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A99C:
	// b 0x8808a9bc
	goto loc_8808A9BC;
loc_8808A9A0:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808A9A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808A9A8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808A9B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808A9B8:
	// li r26,16
	ctx.r26.s64 = 16;
loc_8808A9BC:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808A9C0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808A9C8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808A9D0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808A9D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808A9E0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808AA00;
	sub_88085938(ctx, base);
loc_8808AA00:
	// lwz r7,28100(r31)
	ctx.current_instruction = 0x8808AA00;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8808aaa8
	if (ctx.cr6.eq) goto loc_8808AAA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808AA14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808AA34;
	sub_8810B7F8(ctx, base);
loc_8808AA34:
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AA3C;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r8,92(r1)
	ctx.current_instruction = 0x8808AA44;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808AA48;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AA54;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808AA5C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808AA78;
	sub_88085938(ctx, base);
loc_8808AA78:
	// lwz r6,128(r1)
	ctx.current_instruction = 0x8808AA78;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,132(r1)
	ctx.current_instruction = 0x8808AA7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808AA80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,148(r1)
	ctx.current_instruction = 0x8808AA84;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808AA88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r4,136(r1)
	ctx.current_instruction = 0x8808AA90;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r28,r3,r5
	ctx.r28.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808AA98;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// add r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808AAA0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x8808aab4
	goto loc_8808AAB4;
loc_8808AAA8:
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8808AAA8;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808AAAC;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,136(r1)
	ctx.current_instruction = 0x8808AAB0;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8808AAB4:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808AAB4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808ab4c
	if (ctx.cr6.eq) goto loc_8808AB4C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808AAC8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808AAE8;
	sub_8810B7F8(ctx, base);
loc_8808AAE8:
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AAF0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r8,92(r1)
	ctx.current_instruction = 0x8808AAF8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808AAFC;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AB08;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808AB10;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808AB2C;
	sub_88085938(ctx, base);
loc_8808AB2C:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808AB2C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,148(r1)
	ctx.current_instruction = 0x8808AB30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808AB34;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808AB44;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808AB48;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_8808AB4C:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808AB4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r19,500(r1)
	ctx.current_instruction = 0x8808AB54;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// addi r5,r19,-2
	ctx.r5.s64 = ctx.r19.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808AB6C;
	sub_88085E60(ctx, base);
loc_8808AB6C:
	// lwz r10,532(r1)
	ctx.current_instruction = 0x8808AB6C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808AB78;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x8808ab88
	if (ctx.cr6.eq) goto loc_8808AB88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808AB84;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8808AB88:
	// lwz r10,108(r25)
	ctx.current_instruction = 0x8808AB88;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r9,412(r1)
	ctx.current_instruction = 0x8808AB8C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8808abbc
	if (!ctx.cr6.lt) goto loc_8808ABBC;
	// stw r11,412(r1)
	ctx.current_instruction = 0x8808ABA0;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,152(r1)
	ctx.current_instruction = 0x8808ABA8;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x8808ABAC;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// b 0x8808abbc
	goto loc_8808ABBC;
loc_8808ABB4:
	// lwz r19,500(r1)
	ctx.current_instruction = 0x8808ABB4;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// li r26,16
	ctx.r26.s64 = 16;
loc_8808ABBC:
	// lwz r11,1380(r31)
	ctx.current_instruction = 0x8808ABBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,160(r1)
	ctx.current_instruction = 0x8808ABC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,372(r1)
	ctx.current_instruction = 0x8808ABC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r20,r11,r9
	ctx.r20.u64 = ctx.r9.u64 - ctx.r11.u64;
	// blt cr6,0x8808ae44
	if (ctx.cr6.lt) goto loc_8808AE44;
	// addi r19,r19,-2
	ctx.r19.s64 = ctx.r19.s64 + -2;
loc_8808ABDC:
	// lwz r9,484(r1)
	ctx.current_instruction = 0x8808ABDC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r8,-2
	ctx.r8.s64 = -2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808ABE4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808ABEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x8808ac1c
	if (!ctx.cr6.eq) goto loc_8808AC1C;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808AC04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808AC0C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808AC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808AC18:
	// b 0x8808ac2c
	goto loc_8808AC2C;
loc_8808AC1C:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808AC1C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808AC20;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808AC2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808AC2C:
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// lwz r4,348(r1)
	ctx.current_instruction = 0x8808AC30;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AC38;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r8,100(r1)
	ctx.current_instruction = 0x8808AC40;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	ctx.current_instruction = 0x8808AC44;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,84(r1)
	ctx.current_instruction = 0x8808AC50;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AC58;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808AC70;
	sub_88085938(ctx, base);
loc_8808AC70:
	// lwz r6,28100(r31)
	ctx.current_instruction = 0x8808AC70;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8808ad1c
	if (ctx.cr6.eq) goto loc_8808AD1C;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808AC84;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808ACA8;
	sub_8810B7F8(ctx, base);
loc_8808ACA8:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808ACB0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808ACB8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808ACBC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808ACC4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808ACD0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808ACEC;
	sub_88085938(ctx, base);
loc_8808ACEC:
	// lwz r8,128(r1)
	ctx.current_instruction = 0x8808ACEC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.current_instruction = 0x8808ACF0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808ACF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,148(r1)
	ctx.current_instruction = 0x8808ACF8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808ACFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r6,136(r1)
	ctx.current_instruction = 0x8808AD04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r28,r5,r7
	ctx.r28.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r26,128(r1)
	ctx.current_instruction = 0x8808AD0C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// add r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808AD14;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x8808ad28
	goto loc_8808AD28;
loc_8808AD1C:
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8808AD1C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	ctx.current_instruction = 0x8808AD20;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,136(r1)
	ctx.current_instruction = 0x8808AD24;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8808AD28:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808AD28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808adc4
	if (ctx.cr6.eq) goto loc_8808ADC4;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808AD3C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808AD60;
	sub_8810B7F8(ctx, base);
loc_8808AD60:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AD68;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AD6C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808AD74;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808AD7C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,92(r1)
	ctx.current_instruction = 0x8808AD84;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808ADA4;
	sub_88085938(ctx, base);
loc_8808ADA4:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808ADA4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,148(r1)
	ctx.current_instruction = 0x8808ADA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808ADAC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// or r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r26,128(r1)
	ctx.current_instruction = 0x8808ADBC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808ADC0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_8808ADC4:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808ADC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808ADE0;
	sub_88085E60(ctx, base);
loc_8808ADE0:
	// lwz r10,532(r1)
	ctx.current_instruction = 0x8808ADE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808ADEC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x8808adfc
	if (ctx.cr6.eq) goto loc_8808ADFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808ADF8;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8808ADFC:
	// lwz r10,108(r25)
	ctx.current_instruction = 0x8808ADFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r9,412(r1)
	ctx.current_instruction = 0x8808AE00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8808ae24
	if (!ctx.cr6.lt) goto loc_8808AE24;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r11,412(r1)
	ctx.current_instruction = 0x8808AE18;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// stw r27,152(r1)
	ctx.current_instruction = 0x8808AE1C;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r10,156(r1)
	ctx.current_instruction = 0x8808AE20;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
loc_8808AE24:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x8808AE24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// li r26,16
	ctx.r26.s64 = 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808abdc
	if (!ctx.cr6.gt) goto loc_8808ABDC;
	// b 0x8808ae40
	goto loc_8808AE40;
loc_8808AE3C:
	// li r26,16
	ctx.r26.s64 = 16;
loc_8808AE40:
	// lwz r19,500(r1)
	ctx.current_instruction = 0x8808AE40;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
loc_8808AE44:
	// lwz r11,436(r1)
	ctx.current_instruction = 0x8808AE44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r20,484(r1)
	ctx.current_instruction = 0x8808AE48;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808b09c
	if (ctx.cr6.eq) goto loc_8808B09C;
	// lwz r11,372(r1)
	ctx.current_instruction = 0x8808AE54;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808AE5C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808AE64;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808ae94
	if (!ctx.cr6.eq) goto loc_8808AE94;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808AE7C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808AE84;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808AE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808AE90:
	// b 0x8808aea8
	goto loc_8808AEA8;
loc_8808AE94:
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808AE94;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808AE9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808AEA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808AEA8:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AEAC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AEB0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808AEB8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808AEC0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r4,348(r1)
	ctx.current_instruction = 0x8808AECC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808AED4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808AEEC;
	sub_88085938(ctx, base);
loc_8808AEEC:
	// lwz r6,28100(r31)
	ctx.current_instruction = 0x8808AEEC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8808af94
	if (ctx.cr6.eq) goto loc_8808AF94;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808AF00;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808AF20;
	sub_8810B7F8(ctx, base);
loc_8808AF20:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AF28;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AF30;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808AF34;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808AF3C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808AF44;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808AF64;
	sub_88085938(ctx, base);
loc_8808AF64:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808AF64;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808AF68;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808AF6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,148(r1)
	ctx.current_instruction = 0x8808AF70;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808AF74;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r5,136(r1)
	ctx.current_instruction = 0x8808AF7C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r28,r4,r6
	ctx.r28.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808AF84;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808AF8C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x8808afa0
	goto loc_8808AFA0;
loc_8808AF94:
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8808AF94;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808AF98;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,136(r1)
	ctx.current_instruction = 0x8808AF9C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8808AFA0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808AFA0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808b038
	if (ctx.cr6.eq) goto loc_8808B038;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808AFB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808AFD4;
	sub_8810B7F8(ctx, base);
loc_8808AFD4:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808AFDC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808AFE4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808AFE8;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808AFF0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808AFF8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B018;
	sub_88085938(ctx, base);
loc_8808B018:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B018;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,148(r1)
	ctx.current_instruction = 0x8808B01C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B020;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808B030;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B034;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_8808B038:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808B038;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808B054;
	sub_88085E60(ctx, base);
loc_8808B054:
	// lwz r10,532(r1)
	ctx.current_instruction = 0x8808B054;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B060;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x8808b070
	if (ctx.cr6.eq) goto loc_8808B070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B06C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8808B070:
	// lwz r10,108(r25)
	ctx.current_instruction = 0x8808B070;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r9,412(r1)
	ctx.current_instruction = 0x8808B074;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8808b09c
	if (!ctx.cr6.lt) goto loc_8808B09C;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r11,412(r1)
	ctx.current_instruction = 0x8808B08C;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,152(r1)
	ctx.current_instruction = 0x8808B094;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	ctx.current_instruction = 0x8808B098;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
loc_8808B09C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8808b2e8
	if (ctx.cr6.eq) goto loc_8808B2E8;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808B0A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808B0AC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,372(r1)
	ctx.current_instruction = 0x8808B0B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808b0e0
	if (!ctx.cr6.eq) goto loc_8808B0E0;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808B0C8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808B0D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B0DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B0DC:
	// b 0x8808b0f4
	goto loc_8808B0F4;
loc_8808B0E0:
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808B0E0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808B0E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B0F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B0F4:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B0F8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B100;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808B104;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r7,84(r1)
	ctx.current_instruction = 0x8808B10C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r4,348(r1)
	ctx.current_instruction = 0x8808B118;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B120;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B138;
	sub_88085938(ctx, base);
loc_8808B138:
	// lwz r6,28100(r31)
	ctx.current_instruction = 0x8808B138;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8808b1e0
	if (ctx.cr6.eq) goto loc_8808B1E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808B14C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r21,1
	ctx.r8.s64 = ctx.r21.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808B16C;
	sub_8810B7F8(ctx, base);
loc_8808B16C:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B174;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B17C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B180;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808B188;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B190;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B1B0;
	sub_88085938(ctx, base);
loc_8808B1B0:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808B1B0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808B1B4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B1B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,148(r1)
	ctx.current_instruction = 0x8808B1BC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B1C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r5,136(r1)
	ctx.current_instruction = 0x8808B1C8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r28,r4,r6
	ctx.r28.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808B1D0;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B1D8;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x8808b1ec
	goto loc_8808B1EC;
loc_8808B1E0:
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8808B1E0;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808B1E4;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,136(r1)
	ctx.current_instruction = 0x8808B1E8;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8808B1EC:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808B1EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808b284
	if (ctx.cr6.eq) goto loc_8808B284;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808B200;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r21,1
	ctx.r8.s64 = ctx.r21.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808B220;
	sub_8810B7F8(ctx, base);
loc_8808B220:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B228;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B230;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B234;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808B23C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B244;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B264;
	sub_88085938(ctx, base);
loc_8808B264:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x8808B268;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B26C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808B27C;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B280;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_8808B284:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808B284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808B2A0;
	sub_88085E60(ctx, base);
loc_8808B2A0:
	// lwz r10,532(r1)
	ctx.current_instruction = 0x8808B2A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B2AC;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x8808b2bc
	if (ctx.cr6.eq) goto loc_8808B2BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B2B8;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8808B2BC:
	// lwz r10,108(r25)
	ctx.current_instruction = 0x8808B2BC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r9,412(r1)
	ctx.current_instruction = 0x8808B2C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8808b2e8
	if (!ctx.cr6.lt) goto loc_8808B2E8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,412(r1)
	ctx.current_instruction = 0x8808B2D8;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,152(r1)
	ctx.current_instruction = 0x8808B2E0;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	ctx.current_instruction = 0x8808B2E4;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
loc_8808B2E8:
	// lwz r11,428(r1)
	ctx.current_instruction = 0x8808B2E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808b7bc
	if (ctx.cr6.eq) goto loc_8808B7BC;
	// lwz r11,436(r1)
	ctx.current_instruction = 0x8808B2F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8808b548
	if (ctx.cr6.eq) goto loc_8808B548;
	// lwz r11,372(r1)
	ctx.current_instruction = 0x8808B300;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808B308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808B310;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r7,-2
	ctx.r7.s64 = -2;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808b340
	if (!ctx.cr6.eq) goto loc_8808B340;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808B328;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808B330;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B33C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B33C:
	// b 0x8808b354
	goto loc_8808B354;
loc_8808B340:
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808B340;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808B348;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B354:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B358;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B360;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B368;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,84(r1)
	ctx.current_instruction = 0x8808B36C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B374;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,348(r1)
	ctx.current_instruction = 0x8808B380;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B398;
	sub_88085938(ctx, base);
loc_8808B398:
	// lwz r8,28100(r31)
	ctx.current_instruction = 0x8808B398;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8808b440
	if (ctx.cr6.eq) goto loc_8808B440;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808B3AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808B3CC;
	sub_8810B7F8(ctx, base);
loc_8808B3CC:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B3D4;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B3DC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B3E0;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808B3E8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B3F0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B410;
	sub_88085938(ctx, base);
loc_8808B410:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808B410;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808B414;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B418;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,148(r1)
	ctx.current_instruction = 0x8808B41C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B420;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r7
	ctx.r27.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r5,136(r1)
	ctx.current_instruction = 0x8808B428;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r28,r4,r6
	ctx.r28.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808B430;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B438;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x8808b44c
	goto loc_8808B44C;
loc_8808B440:
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8808B440;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,128(r1)
	ctx.current_instruction = 0x8808B444;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,136(r1)
	ctx.current_instruction = 0x8808B448;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8808B44C:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808B44C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808b4e4
	if (ctx.cr6.eq) goto loc_8808B4E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808B460;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// addi r8,r21,-1
	ctx.r8.s64 = ctx.r21.s64 + -1;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808B480;
	sub_8810B7F8(ctx, base);
loc_8808B480:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B488;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B490;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B494;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808B49C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B4A4;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B4C4;
	sub_88085938(ctx, base);
loc_8808B4C4:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B4C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x8808B4C8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B4CC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r27,128(r1)
	ctx.current_instruction = 0x8808B4DC;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B4E0;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_8808B4E4:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808B4E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r19,2
	ctx.r5.s64 = ctx.r19.s64 + 2;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808B500;
	sub_88085E60(ctx, base);
loc_8808B500:
	// lwz r10,532(r1)
	ctx.current_instruction = 0x8808B500;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B50C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x8808b51c
	if (ctx.cr6.eq) goto loc_8808B51C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B518;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8808B51C:
	// lwz r10,108(r25)
	ctx.current_instruction = 0x8808B51C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r9,412(r1)
	ctx.current_instruction = 0x8808B520;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8808b548
	if (!ctx.cr6.lt) goto loc_8808B548;
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r11,412(r1)
	ctx.current_instruction = 0x8808B538;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,152(r1)
	ctx.current_instruction = 0x8808B540;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	ctx.current_instruction = 0x8808B544;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
loc_8808B548:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x8808B548;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8808b7bc
	if (ctx.cr6.lt) goto loc_8808B7BC;
	// addi r20,r19,2
	ctx.r20.s64 = ctx.r19.s64 + 2;
	// b 0x8808b564
	goto loc_8808B564;
loc_8808B560:
	// li r26,16
	ctx.r26.s64 = 16;
loc_8808B564:
	// lwz r9,484(r1)
	ctx.current_instruction = 0x8808B564;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r10,1560(r31)
	ctx.current_instruction = 0x8808B56C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r4,1380(r31)
	ctx.current_instruction = 0x8808B574;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1380);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r3,372(r1)
	ctx.current_instruction = 0x8808B57C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8808b5a4
	if (!ctx.cr6.eq) goto loc_8808B5A4;
	// lwz r11,2488(r31)
	ctx.current_instruction = 0x8808B58C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2488);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808B594;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B5A0:
	// b 0x8808b5b4
	goto loc_8808B5B4;
loc_8808B5A4:
	// stw r26,84(r1)
	ctx.current_instruction = 0x8808B5A4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r11,2496(r31)
	ctx.current_instruction = 0x8808B5A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8808B5B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8808B5B4:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B5B8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B5C0;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B5C8;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	ctx.current_instruction = 0x8808B5CC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r9,84(r1)
	ctx.current_instruction = 0x8808B5D4;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r4,348(r1)
	ctx.current_instruction = 0x8808B5E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B5F8;
	sub_88085938(ctx, base);
loc_8808B5F8:
	// lwz r8,28100(r31)
	ctx.current_instruction = 0x8808B5F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8808b6a4
	if (ctx.cr6.eq) goto loc_8808B6A4;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808B60C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808B630;
	sub_8810B7F8(ctx, base);
loc_8808B630:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B638;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B640;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B644;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808B64C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B654;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B674;
	sub_88085938(ctx, base);
loc_8808B674:
	// lwz r7,128(r1)
	ctx.current_instruction = 0x8808B674;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.current_instruction = 0x8808B678;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B67C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,148(r1)
	ctx.current_instruction = 0x8808B680;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B684;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r5,136(r1)
	ctx.current_instruction = 0x8808B68C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// or r28,r4,r6
	ctx.r28.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r26,128(r1)
	ctx.current_instruction = 0x8808B694;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// add r29,r10,r5
	ctx.r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B69C;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x8808b6b0
	goto loc_8808B6B0;
loc_8808B6A4:
	// lwz r28,132(r1)
	ctx.current_instruction = 0x8808B6A4;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r26,128(r1)
	ctx.current_instruction = 0x8808B6A8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,136(r1)
	ctx.current_instruction = 0x8808B6AC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8808B6B0:
	// lwz r11,28100(r31)
	ctx.current_instruction = 0x8808B6B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28100);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8808b74c
	if (ctx.cr6.eq) goto loc_8808B74C;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r5,1384(r31)
	ctx.current_instruction = 0x8808B6C4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r22,1
	ctx.r9.s64 = ctx.r22.s64 + 1;
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + ctx.r21.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8810b7f8
	ctx.lr = 0x8808B6E8;
	sub_8810B7F8(ctx, base);
loc_8808B6E8:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r24,116(r1)
	ctx.current_instruction = 0x8808B6F0;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r23,108(r1)
	ctx.current_instruction = 0x8808B6F8;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r9,92(r1)
	ctx.current_instruction = 0x8808B6FC;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r8,84(r1)
	ctx.current_instruction = 0x8808B704;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,100(r1)
	ctx.current_instruction = 0x8808B70C;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085938
	ctx.lr = 0x8808B72C;
	sub_88085938(ctx, base);
loc_8808B72C:
	// lwz r11,140(r1)
	ctx.current_instruction = 0x8808B72C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.current_instruction = 0x8808B730;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.current_instruction = 0x8808B734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r26,128(r1)
	ctx.current_instruction = 0x8808B744;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r28,132(r1)
	ctx.current_instruction = 0x8808B748;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_8808B74C:
	// lwz r11,492(r1)
	ctx.current_instruction = 0x8808B74C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88085e60
	ctx.lr = 0x8808B768;
	sub_88085E60(ctx, base);
loc_8808B768:
	// lwz r10,532(r1)
	ctx.current_instruction = 0x8808B768;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B774;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x8808b784
	if (ctx.cr6.eq) goto loc_8808B784;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	ctx.current_instruction = 0x8808B780;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8808B784:
	// lwz r10,108(r25)
	ctx.current_instruction = 0x8808B784;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r9,412(r1)
	ctx.current_instruction = 0x8808B788;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8808b7ac
	if (!ctx.cr6.lt) goto loc_8808B7AC;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,412(r1)
	ctx.current_instruction = 0x8808B7A0;
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// stw r27,152(r1)
	ctx.current_instruction = 0x8808B7A4;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r10,156(r1)
	ctx.current_instruction = 0x8808B7A8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
loc_8808B7AC:
	// lwz r11,160(r1)
	ctx.current_instruction = 0x8808B7AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8808b560
	if (!ctx.cr6.gt) goto loc_8808B560;
loc_8808B7BC:
	// lwz r11,556(r1)
	ctx.current_instruction = 0x8808B7BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r10,152(r1)
	ctx.current_instruction = 0x8808B7C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,564(r1)
	ctx.current_instruction = 0x8808B7C4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r8,156(r1)
	ctx.current_instruction = 0x8808B7C8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r7,572(r1)
	ctx.current_instruction = 0x8808B7CC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r6,412(r1)
	ctx.current_instruction = 0x8808B7D0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// stw r10,0(r11)
	ctx.current_instruction = 0x8808B7D4;
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	ctx.current_instruction = 0x8808B7D8;
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	ctx.current_instruction = 0x8808B7DC;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880C6520) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C6520;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C6520) {
			switch (rex_dispatch_address) {
				case 0x880C655C:
				case 0x880C656C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C6520;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C655C: goto loc_880C655C;
		case 0x880C656C: goto loc_880C656C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x880C6524;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	ctx.current_instruction = 0x880C6528;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ctx.current_instruction = 0x880C652C;
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880c6554
	if (!ctx.cr6.eq) goto loc_880C6554;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880C6544;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880C654C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_880C6554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6180
	ctx.lr = 0x880C655C;
	sub_880C6180(ctx, base);
loc_880C655C:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x88050358
	ctx.lr = 0x880C656C;
	sub_88050358(ctx, base);
loc_880C656C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x880C6574;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.current_instruction = 0x880C657C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880C6FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880C6FA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880C6FA0) {
			switch (rex_dispatch_address) {
				case 0x880C6FA8:
				case 0x880C6FF8:
				case 0x880C70B0:
				case 0x880C70C0:
				case 0x880C70D8:
				case 0x880C70EC:
				case 0x880C70F8:
				case 0x880C7160:
				case 0x880C717C:
				case 0x880C72B0:
				case 0x880C72C0:
				case 0x880C72E8:
				case 0x880C7300:
				case 0x880C7318:
				case 0x880C7330:
				case 0x880C7340:
				case 0x880C73A0:
				case 0x880C73BC:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880C6FA0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880C6FA8: goto loc_880C6FA8;
		case 0x880C6FF8: goto loc_880C6FF8;
		case 0x880C70B0: goto loc_880C70B0;
		case 0x880C70C0: goto loc_880C70C0;
		case 0x880C70D8: goto loc_880C70D8;
		case 0x880C70EC: goto loc_880C70EC;
		case 0x880C70F8: goto loc_880C70F8;
		case 0x880C7160: goto loc_880C7160;
		case 0x880C717C: goto loc_880C717C;
		case 0x880C72B0: goto loc_880C72B0;
		case 0x880C72C0: goto loc_880C72C0;
		case 0x880C72E8: goto loc_880C72E8;
		case 0x880C7300: goto loc_880C7300;
		case 0x880C7318: goto loc_880C7318;
		case 0x880C7330: goto loc_880C7330;
		case 0x880C7340: goto loc_880C7340;
		case 0x880C73A0: goto loc_880C73A0;
		case 0x880C73BC: goto loc_880C73BC;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x880C6FA8;
	__savegprlr_23(ctx, base);
loc_880C6FA8:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x880C6FA8;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x880c6fd4
	if (!ctx.cr6.eq) goto loc_880C6FD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C6FD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x880c7018
	if (ctx.cr6.eq) goto loc_880C7018;
	// lwz r29,16(r27)
	ctx.current_instruction = 0x880C6FDC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lhz r28,14(r27)
	ctx.current_instruction = 0x880C6FE8;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r27.u32 + 14);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880c6ab0
	ctx.lr = 0x880C6FF8;
	sub_880C6AB0(ctx, base);
loc_880C6FF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880c7018
	if (!ctx.cr6.eq) goto loc_880C7018;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x880c71a4
	if (ctx.cr6.eq) goto loc_880C71A4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880c702c
	if (!ctx.cr6.eq) goto loc_880C702C;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
loc_880C7018:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x880C7020;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C702C:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c709c
	if (ctx.cr6.eq) goto loc_880C709C;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r10,r11,12850
	ctx.r10.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x880c70f8
	if (!ctx.cr6.eq) goto loc_880C70F8;
loc_880C709C:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,360
	ctx.r3.s64 = 360;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050340
	ctx.lr = 0x880C70B0;
	sub_88050340(ctx, base);
loc_880C70B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c7018
	if (ctx.cr6.eq) goto loc_880C7018;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880c60e0
	ctx.lr = 0x880C70C0;
	sub_880C60E0(ctx, base);
loc_880C70C0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c7018
	if (ctx.cr6.eq) goto loc_880C7018;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x88050340
	ctx.lr = 0x880C70D8;
	sub_88050340(ctx, base);
loc_880C70D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	ctx.current_instruction = 0x880C70DC;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x880c710c
	if (!ctx.cr6.eq) goto loc_880C710C;
loc_880C70E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880c6180
	ctx.lr = 0x880C70EC;
	sub_880C6180(ctx, base);
loc_880C70EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050358
	ctx.lr = 0x880C70F8;
	sub_88050358(ctx, base);
loc_880C70F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x880C7100;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C710C:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C711C:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x880C711C;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880C7120;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880c711c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C711C;
	// lwz r10,4(r31)
	ctx.current_instruction = 0x880C7128;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x880C712C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880c713c
	if (ctx.cr6.gt) goto loc_880C713C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_880C713C:
	// stw r11,8(r10)
	ctx.current_instruction = 0x880C713C;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.current_instruction = 0x880C7140;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x880C7144;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880c7164
	if (!ctx.cr6.eq) goto loc_880C7164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.current_instruction = 0x880C7154;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.current_instruction = 0x880C7158;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x880c6dd0
	ctx.lr = 0x880C7160;
	sub_880C6DD0(ctx, base);
loc_880C7160:
	// stw r3,20(r30)
	ctx.current_instruction = 0x880C7160;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_880C7164:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,8(r27)
	ctx.current_instruction = 0x880C7168;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,4(r27)
	ctx.current_instruction = 0x880C7170;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x881cea20
	ctx.lr = 0x880C717C;
	sub_881CEA20(ctx, base);
loc_880C717C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r24,32(r31)
	ctx.current_instruction = 0x880C7180;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,36(r31)
	ctx.current_instruction = 0x880C7184;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r11,24(r31)
	ctx.current_instruction = 0x880C7188;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	ctx.current_instruction = 0x880C718C;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r26,340(r31)
	ctx.current_instruction = 0x880C7190;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// stw r31,0(r25)
	ctx.current_instruction = 0x880C7194;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_880C7198:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C71A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x880c727c
	if (ctx.cr6.eq) goto loc_880C727C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x880c71d8
	if (!ctx.cr6.eq) goto loc_880C71D8;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x880C71CC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C71D8:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r10,r11,12850
	ctx.r10.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r10,r11,12598
	ctx.r10.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	ctx.current_instruction = 0x880C7270;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_880C727C:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// beq cr6,0x880c729c
	if (ctx.cr6.eq) goto loc_880C729C;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// bne cr6,0x880c7018
	if (!ctx.cr6.eq) goto loc_880C7018;
loc_880C729C:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,360
	ctx.r3.s64 = 360;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x88050340
	ctx.lr = 0x880C72B0;
	sub_88050340(ctx, base);
loc_880C72B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c7018
	if (ctx.cr6.eq) goto loc_880C7018;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x880c60e0
	ctx.lr = 0x880C72C0;
	sub_880C60E0(ctx, base);
loc_880C72C0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880c7018
	if (ctx.cr6.eq) goto loc_880C7018;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x880c7304
	if (!ctx.cr6.eq) goto loc_880C7304;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x880c7334
	if (!ctx.cr6.eq) goto loc_880C7334;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x88050340
	ctx.lr = 0x880C72E8;
	sub_88050340(ctx, base);
loc_880C72E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	ctx.current_instruction = 0x880C72EC;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x880c70e4
	if (ctx.cr6.eq) goto loc_880C70E4;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7300;
	sub_880547A0(ctx, base);
loc_880C7300:
	// b 0x880c7368
	goto loc_880C7368;
loc_880C7304:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x880c7334
	if (!ctx.cr6.eq) goto loc_880C7334;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x88050340
	ctx.lr = 0x880C7318;
	sub_88050340(ctx, base);
loc_880C7318:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	ctx.current_instruction = 0x880C731C;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x880c70e4
	if (ctx.cr6.eq) goto loc_880C70E4;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x880547a0
	ctx.lr = 0x880C7330;
	sub_880547A0(ctx, base);
loc_880C7330:
	// b 0x880c7368
	goto loc_880C7368;
loc_880C7334:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x88050340
	ctx.lr = 0x880C7340;
	sub_88050340(ctx, base);
loc_880C7340:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	ctx.current_instruction = 0x880C7344;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x880c70e4
	if (ctx.cr6.eq) goto loc_880C70E4;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_880C735C:
	// lwzu r9,4(r11)
	ctx.current_instruction = 0x880C735C;
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ctx.current_instruction = 0x880C7360;
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x880c735c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880C735C;
loc_880C7368:
	// lwz r10,4(r31)
	ctx.current_instruction = 0x880C7368;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r10)
	ctx.current_instruction = 0x880C736C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x880c737c
	if (ctx.cr6.gt) goto loc_880C737C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_880C737C:
	// stw r11,8(r10)
	ctx.current_instruction = 0x880C737C;
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.current_instruction = 0x880C7380;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r30)
	ctx.current_instruction = 0x880C7384;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880c73a4
	if (!ctx.cr6.eq) goto loc_880C73A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.current_instruction = 0x880C7394;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.current_instruction = 0x880C7398;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x880c6dd0
	ctx.lr = 0x880C73A0;
	sub_880C6DD0(ctx, base);
loc_880C73A0:
	// stw r3,20(r30)
	ctx.current_instruction = 0x880C73A0;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_880C73A4:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,8(r27)
	ctx.current_instruction = 0x880C73A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,4(r27)
	ctx.current_instruction = 0x880C73B0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x881114b8
	ctx.lr = 0x880C73BC;
	sub_881114B8(ctx, base);
loc_880C73BC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r24,32(r31)
	ctx.current_instruction = 0x880C73C4;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,36(r31)
	ctx.current_instruction = 0x880C73C8;
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,24(r31)
	ctx.current_instruction = 0x880C73D0;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	ctx.current_instruction = 0x880C73D4;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,340(r31)
	ctx.current_instruction = 0x880C73D8;
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r31,0(r25)
	ctx.current_instruction = 0x880C73DC;
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// bne cr6,0x880c7198
	if (!ctx.cr6.eq) goto loc_880C7198;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880CC2C0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880CC2C0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC2C0;
	ctx.current_instruction = 0x880CC2C0;
	// lbz r11,16(r3)
	ctx.current_instruction = 0x880CC2C0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	ctx.current_instruction = 0x880CC2C8;
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880CC570) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880CC570;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880CC570) {
			switch (rex_dispatch_address) {
				case 0x880CC578:
				case 0x880CC5FC:
				case 0x880CC61C:
				case 0x880CC638:
				case 0x880CC650:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880CC570;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880CC578: goto loc_880CC578;
		case 0x880CC5FC: goto loc_880CC5FC;
		case 0x880CC61C: goto loc_880CC61C;
		case 0x880CC638: goto loc_880CC638;
		case 0x880CC650: goto loc_880CC650;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8805084c
	ctx.lr = 0x880CC578;
	__savegprlr_29(ctx, base);
loc_880CC578:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x880CC578;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bne cr6,0x880cc5a4
	if (!ctx.cr6.eq) goto loc_880CC5A4;
loc_880CC594:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
loc_880CC5A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880cc594
	if (ctx.cr6.eq) goto loc_880CC594;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x880cc594
	if (ctx.cr6.eq) goto loc_880CC594;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x880CC5B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CC5BC;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x880cc678
	if (ctx.cr6.eq) goto loc_880CC678;
loc_880CC5C4:
	// lwz r10,60(r11)
	ctx.current_instruction = 0x880CC5C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x880cc5dc
	if (ctx.cr6.eq) goto loc_880CC5DC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r29,56(r11)
	ctx.current_instruction = 0x880CC5D4;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC5D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_880CC5DC:
	// lwz r10,60(r11)
	ctx.current_instruction = 0x880CC5DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,24(r31)
	ctx.current_instruction = 0x880CC5E0;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.current_instruction = 0x880CC5E4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r30)
	ctx.current_instruction = 0x880CC5E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,36(r9)
	ctx.current_instruction = 0x880CC5F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x880CC5FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_880CC5FC:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC5FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,44(r11)
	ctx.current_instruction = 0x880CC600;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x880cc640
	if (ctx.cr6.eq) goto loc_880CC640;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CC610;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bl 0x880cb318
	ctx.lr = 0x880CC61C;
	sub_880CB318(ctx, base);
loc_880CC61C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc68c
	if (ctx.cr6.lt) goto loc_880CC68C;
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880CC624;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CC62C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x880cb318
	ctx.lr = 0x880CC638;
	sub_880CB318(ctx, base);
loc_880CC638:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc68c
	if (ctx.cr6.lt) goto loc_880CC68C;
loc_880CC640:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.current_instruction = 0x880CC644;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x880cb318
	ctx.lr = 0x880CC650;
	sub_880CB318(ctx, base);
loc_880CC650:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880cc688
	if (ctx.cr6.lt) goto loc_880CC688;
	// lwz r11,24(r31)
	ctx.current_instruction = 0x880CC65C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.current_instruction = 0x880CC660;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,80(r1)
	ctx.current_instruction = 0x880CC66C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,20(r31)
	ctx.current_instruction = 0x880CC670;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bne cr6,0x880cc5c4
	if (!ctx.cr6.eq) goto loc_880CC5C4;
loc_880CC678:
	// stw r29,20(r31)
	ctx.current_instruction = 0x880CC678;
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,32(r31)
	ctx.current_instruction = 0x880CC67C;
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,28(r31)
	ctx.current_instruction = 0x880CC680;
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,24(r31)
	ctx.current_instruction = 0x880CC684;
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_880CC688:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_880CC68C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8805089c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D0210) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D0210;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D0210) {
			switch (rex_dispatch_address) {
				case 0x880D0218:
				case 0x880D0250:
				case 0x880D02CC:
				case 0x880D0340:
				case 0x880D0408:
				case 0x880D0468:
				case 0x880D04D0:
				case 0x880D0538:
				case 0x880D059C:
				case 0x880D05F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D0210;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D0218: goto loc_880D0218;
		case 0x880D0250: goto loc_880D0250;
		case 0x880D02CC: goto loc_880D02CC;
		case 0x880D0340: goto loc_880D0340;
		case 0x880D0408: goto loc_880D0408;
		case 0x880D0468: goto loc_880D0468;
		case 0x880D04D0: goto loc_880D04D0;
		case 0x880D0538: goto loc_880D0538;
		case 0x880D059C: goto loc_880D059C;
		case 0x880D05F0: goto loc_880D05F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880D0218;
	__savegprlr_20(ctx, base);
loc_880D0218:
	// stwu r1,-224(r1)
	ctx.current_instruction = 0x880D0218;
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// bne cr6,0x880d0240
	if (!ctx.cr6.eq) goto loc_880D0240;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880D0240:
	// std r20,0(r31)
	ctx.current_instruction = 0x880D0240;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r20.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cda60
	ctx.lr = 0x880D0250;
	sub_880CDA60(ctx, base);
loc_880D0250:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d0640
	if (!ctx.cr6.eq) goto loc_880D0640;
	// lwz r11,16(r31)
	ctx.current_instruction = 0x880D0258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// ld r9,0(r31)
	ctx.current_instruction = 0x880D025C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,16(r31)
	ctx.current_instruction = 0x880D0268;
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r8,r10,-50
	ctx.r8.s64 = ctx.r10.s64 + -50;
	// std r10,40(r31)
	ctx.current_instruction = 0x880D0270;
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x880d060c
	if (!ctx.cr6.lt) goto loc_880D060C;
	// lis r4,-30720
	ctx.r4.s64 = -2013265920;
	// lis r5,-30720
	ctx.r5.s64 = -2013265920;
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// addi r29,r4,14120
	ctx.r29.s64 = ctx.r4.s64 + 14120;
	// addi r28,r5,14072
	ctx.r28.s64 = ctx.r5.s64 + 14072;
	// addi r27,r6,14056
	ctx.r27.s64 = ctx.r6.s64 + 14056;
	// addi r26,r7,13976
	ctx.r26.s64 = ctx.r7.s64 + 13976;
	// addi r25,r8,14040
	ctx.r25.s64 = ctx.r8.s64 + 14040;
	// addi r24,r9,14088
	ctx.r24.s64 = ctx.r9.s64 + 14088;
	// addi r23,r10,13960
	ctx.r23.s64 = ctx.r10.s64 + 13960;
	// addi r22,r11,13944
	ctx.r22.s64 = ctx.r11.s64 + 13944;
loc_880D02BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cd710
	ctx.lr = 0x880D02CC;
	sub_880CD710(ctx, base);
loc_880D02CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d0640
	if (!ctx.cr6.eq) goto loc_880D0640;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r22,16
	ctx.r8.s64 = ctx.r22.s64 + 16;
loc_880D02E0:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D02E0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D02E4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d0300
	if (!ctx.cr0.eq) goto loc_880D0300;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d02e0
	if (!ctx.cr6.eq) goto loc_880D02E0;
loc_880D0300:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d0344
	if (!ctx.cr6.eq) goto loc_880D0344;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D0308;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r21,16
	ctx.r9.u64 = ctx.r21.u32 & 0xFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0310;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r8,40(r31)
	ctx.current_instruction = 0x880D0318;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r21,r7,16
	ctx.r21.u64 = ctx.r7.u32 & 0xFFFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cdc30
	ctx.lr = 0x880D0340;
	sub_880CDC30(ctx, base);
loc_880D0340:
	// b 0x880d05f0
	goto loc_880D05F0;
loc_880D0344:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r23,16
	ctx.r8.s64 = ctx.r23.s64 + 16;
loc_880D0350:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0350;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D0354;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d0370
	if (!ctx.cr0.eq) goto loc_880D0370;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d0350
	if (!ctx.cr6.eq) goto loc_880D0350;
loc_880D0370:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d05b8
	if (ctx.cr6.eq) goto loc_880D05B8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
loc_880D0384:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0384;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D0388;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d03a4
	if (!ctx.cr0.eq) goto loc_880D03A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d0384
	if (!ctx.cr6.eq) goto loc_880D0384;
loc_880D03A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x880d05b8
	if (ctx.cr6.eq) goto loc_880D05B8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r25,16
	ctx.r8.s64 = ctx.r25.s64 + 16;
loc_880D03B8:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D03B8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D03BC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d03d8
	if (!ctx.cr0.eq) goto loc_880D03D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d03b8
	if (!ctx.cr6.eq) goto loc_880D03B8;
loc_880D03D8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d040c
	if (!ctx.cr6.eq) goto loc_880D040C;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D03E0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D03E4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.current_instruction = 0x880D03EC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880ce710
	ctx.lr = 0x880D0408;
	sub_880CE710(ctx, base);
loc_880D0408:
	// b 0x880d05f0
	goto loc_880D05F0;
loc_880D040C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
loc_880D0418:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0418;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D041C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d0438
	if (!ctx.cr0.eq) goto loc_880D0438;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d0418
	if (!ctx.cr6.eq) goto loc_880D0418;
loc_880D0438:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d046c
	if (!ctx.cr6.eq) goto loc_880D046C;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D0440;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0444;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.current_instruction = 0x880D044C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cea38
	ctx.lr = 0x880D0468;
	sub_880CEA38(ctx, base);
loc_880D0468:
	// b 0x880d05f8
	goto loc_880D05F8;
loc_880D046C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
loc_880D0478:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0478;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D047C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d0498
	if (!ctx.cr0.eq) goto loc_880D0498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d0478
	if (!ctx.cr6.eq) goto loc_880D0478;
loc_880D0498:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d04dc
	if (!ctx.cr6.eq) goto loc_880D04DC;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D04A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D04A4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.current_instruction = 0x880D04AC;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x880d04d4
	if (ctx.cr6.eq) goto loc_880D04D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cedd0
	ctx.lr = 0x880D04D0;
	sub_880CEDD0(ctx, base);
loc_880D04D0:
	// b 0x880d05f8
	goto loc_880D05F8;
loc_880D04D4:
	// std r11,0(r31)
	ctx.current_instruction = 0x880D04D4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x880d05f8
	goto loc_880D05F8;
loc_880D04DC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
loc_880D04E8:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D04E8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D04EC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d0508
	if (!ctx.cr0.eq) goto loc_880D0508;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d04e8
	if (!ctx.cr6.eq) goto loc_880D04E8;
loc_880D0508:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d053c
	if (!ctx.cr6.eq) goto loc_880D053C;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D0510;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0514;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r9,40(r31)
	ctx.current_instruction = 0x880D051C;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cf2d8
	ctx.lr = 0x880D0538;
	sub_880CF2D8(ctx, base);
loc_880D0538:
	// b 0x880d05f0
	goto loc_880D05F0;
loc_880D053C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r29,16
	ctx.r8.s64 = ctx.r29.s64 + 16;
loc_880D0548:
	// lbz r9,0(r11)
	ctx.current_instruction = 0x880D0548;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.current_instruction = 0x880D054C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x880d0568
	if (!ctx.cr0.eq) goto loc_880D0568;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x880d0548
	if (!ctx.cr6.eq) goto loc_880D0548;
loc_880D0568:
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D0568;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x880d05a0
	if (!ctx.cr6.eq) goto loc_880D05A0;
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D0574;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r9,40(r31)
	ctx.current_instruction = 0x880D0578;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cfe78
	ctx.lr = 0x880D059C;
	sub_880CFE78(ctx, base);
loc_880D059C:
	// b 0x880d05f0
	goto loc_880D05F0;
loc_880D05A0:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x880D05A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,-24
	ctx.r9.s64 = ctx.r11.s64 + -24;
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,0(r31)
	ctx.current_instruction = 0x880D05B0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// b 0x880d05f8
	goto loc_880D05F8;
loc_880D05B8:
	// lwz r4,80(r1)
	ctx.current_instruction = 0x880D05B8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r20,16
	ctx.r9.u64 = ctx.r20.u32 & 0xFFFF;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D05C0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r11,r4,-24
	ctx.r11.s64 = ctx.r4.s64 + -24;
	// ld r8,40(r31)
	ctx.current_instruction = 0x880D05C8;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r20,r7,16
	ctx.r20.u64 = ctx.r7.u32 & 0xFFFF;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x880d063c
	if (ctx.cr6.gt) goto loc_880D063C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x880cde90
	ctx.lr = 0x880D05F0;
	sub_880CDE90(ctx, base);
loc_880D05F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x880d0640
	if (!ctx.cr6.eq) goto loc_880D0640;
loc_880D05F8:
	// ld r11,40(r31)
	ctx.current_instruction = 0x880D05F8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D05FC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r9,r11,-50
	ctx.r9.s64 = ctx.r11.s64 + -50;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x880d02bc
	if (ctx.cr6.lt) goto loc_880D02BC;
loc_880D060C:
	// clrlwi r11,r21,16
	ctx.r11.u64 = ctx.r21.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x880d063c
	if (!ctx.cr6.eq) goto loc_880D063C;
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x880d063c
	if (ctx.cr6.lt) goto loc_880D063C;
	// ld r11,40(r31)
	ctx.current_instruction = 0x880D0624;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r10,0(r31)
	ctx.current_instruction = 0x880D062C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// addi r9,r11,-50
	ctx.r9.s64 = ctx.r11.s64 + -50;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x880d0640
	if (ctx.cr6.eq) goto loc_880D0640;
loc_880D063C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_880D0640:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880D7BB0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880D7BB0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880D7BB0) {
			switch (rex_dispatch_address) {
				case 0x880D7BB8:
				case 0x880D7BF0:
				case 0x880D7C50:
				case 0x880D7C88:
				case 0x880D7C90:
				case 0x880D7CA0:
				case 0x880D7CC0:
				case 0x880D7CD4:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880D7BB0;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880D7BB8: goto loc_880D7BB8;
		case 0x880D7BF0: goto loc_880D7BF0;
		case 0x880D7C50: goto loc_880D7C50;
		case 0x880D7C88: goto loc_880D7C88;
		case 0x880D7C90: goto loc_880D7C90;
		case 0x880D7CA0: goto loc_880D7CA0;
		case 0x880D7CC0: goto loc_880D7CC0;
		case 0x880D7CD4: goto loc_880D7CD4;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x880D7BB8;
	__savegprlr_28(ctx, base);
loc_880D7BB8:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x880D7BB8;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.current_instruction = 0x880D7BBC;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x880d7ce0
	if (ctx.cr6.eq) goto loc_880D7CE0;
	// lwz r11,60(r31)
	ctx.current_instruction = 0x880D7BD0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x880d7ce0
	if (ctx.cr6.lt) goto loc_880D7CE0;
	// lwz r11,472(r30)
	ctx.current_instruction = 0x880D7BDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880d7ce0
	if (!ctx.cr6.eq) goto loc_880D7CE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x881342c8
	ctx.lr = 0x880D7BF0;
	sub_881342C8(ctx, base);
loc_880D7BF0:
	// lwz r10,488(r30)
	ctx.current_instruction = 0x880D7BF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 488);
	// lwz r9,484(r30)
	ctx.current_instruction = 0x880D7BF4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 484);
	// li r29,3
	ctx.r29.s64 = 3;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,336(r30)
	ctx.current_instruction = 0x880D7C00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 336);
	// stw r31,124(r1)
	ctx.current_instruction = 0x880D7C04;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r29,84(r1)
	ctx.current_instruction = 0x880D7C08;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	ctx.current_instruction = 0x880D7C0C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,104(r1)
	ctx.current_instruction = 0x880D7C10;
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r10,96(r1)
	ctx.current_instruction = 0x880D7C14;
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	ctx.current_instruction = 0x880D7C18;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,452(r31)
	ctx.current_instruction = 0x880D7C1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 452);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,108(r1)
	ctx.current_instruction = 0x880D7C24;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x880d7c30
	if (ctx.cr6.lt) goto loc_880D7C30;
	// stw r11,108(r1)
	ctx.current_instruction = 0x880D7C2C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_880D7C30:
	// lhz r11,34(r31)
	ctx.current_instruction = 0x880D7C30;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	ctx.current_instruction = 0x880D7C38;
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.current_instruction = 0x880D7C3C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,116(r1)
	ctx.current_instruction = 0x880D7C40;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.current_instruction = 0x880D7C44;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// stw r9,120(r1)
	ctx.current_instruction = 0x880D7C48;
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x88134210
	ctx.lr = 0x880D7C50;
	sub_88134210(ctx, base);
loc_880D7C50:
	// lwz r8,624(r31)
	ctx.current_instruction = 0x880D7C50;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r7,496(r30)
	ctx.current_instruction = 0x880D7C54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 496);
	// lwz r6,492(r30)
	ctx.current_instruction = 0x880D7C58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 492);
	// stw r28,136(r1)
	ctx.current_instruction = 0x880D7C5C;
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r29,132(r1)
	ctx.current_instruction = 0x880D7C60;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r8,172(r1)
	ctx.current_instruction = 0x880D7C64;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,144(r1)
	ctx.current_instruction = 0x880D7C68;
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,152(r1)
	ctx.current_instruction = 0x880D7C6C;
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r29,128(r1)
	ctx.current_instruction = 0x880D7C70;
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r28,240(r1)
	ctx.current_instruction = 0x880D7C74;
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r28.u32);
	// lwz r3,568(r31)
	ctx.current_instruction = 0x880D7C78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880d7c98
	if (ctx.cr6.eq) goto loc_880D7C98;
	// bl 0x88134418
	ctx.lr = 0x880D7C88;
	sub_88134418(ctx, base);
loc_880D7C88:
	// lwz r3,568(r31)
	ctx.current_instruction = 0x880D7C88;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x88125e70
	ctx.lr = 0x880D7C90;
	sub_88125E70(ctx, base);
loc_880D7C90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,568(r31)
	ctx.current_instruction = 0x880D7C94;
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
loc_880D7C98:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x88125e60
	ctx.lr = 0x880D7CA0;
	sub_88125E60(ctx, base);
loc_880D7CA0:
	// stw r3,568(r31)
	ctx.current_instruction = 0x880D7CA0;
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880d7cbc
	if (!ctx.cr6.eq) goto loc_880D7CBC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_880D7CBC:
	// bl 0x88134310
	ctx.lr = 0x880D7CC0;
	sub_88134310(ctx, base);
loc_880D7CC0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.current_instruction = 0x880D7CC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88134a80
	ctx.lr = 0x880D7CD4;
	sub_88134A80(ctx, base);
loc_880D7CD4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x880d7ce0
	if (ctx.cr6.lt) goto loc_880D7CE0;
	// stw r28,472(r30)
	ctx.current_instruction = 0x880D7CDC;
	REX_STORE_U32(ctx.r30.u32 + 472, ctx.r28.u32);
loc_880D7CE0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880DBA50) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880DBA50;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880DBA50) {
			switch (rex_dispatch_address) {
				case 0x880DBA58:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880DBA50;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880DBA58: goto loc_880DBA58;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x880DBA58;
	__savegprlr_14(ctx, base);
loc_880DBA58:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r1,-420
	ctx.r9.s64 = ctx.r1.s64 + -420;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_880DBA6C:
	// lbz r7,-2(r10)
	ctx.current_instruction = 0x880DBA6C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r8,-2(r11)
	ctx.current_instruction = 0x880DBA70;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r3,-1(r10)
	ctx.current_instruction = 0x880DBA74;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r5,-1(r11)
	ctx.current_instruction = 0x880DBA78;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lbz r31,0(r10)
	ctx.current_instruction = 0x880DBA80;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.current_instruction = 0x880DBA84;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r5,r3,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lbz r30,1(r10)
	ctx.current_instruction = 0x880DBA8C;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r3,1(r11)
	ctx.current_instruction = 0x880DBA90;
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r31.u64;
	// lbz r29,2(r10)
	ctx.current_instruction = 0x880DBA98;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r31,2(r11)
	ctx.current_instruction = 0x880DBA9C;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// subf r3,r30,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r30.u64;
	// lbz r28,3(r10)
	ctx.current_instruction = 0x880DBAA4;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r30,3(r11)
	ctx.current_instruction = 0x880DBAA8;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// subf r31,r29,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r29.u64;
	// lbz r29,4(r11)
	ctx.current_instruction = 0x880DBAB0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r27,4(r10)
	ctx.current_instruction = 0x880DBAB4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r30,r28,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r28.u64;
	// lbz r28,5(r11)
	ctx.current_instruction = 0x880DBABC;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r26,5(r10)
	ctx.current_instruction = 0x880DBAC4;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// subf r29,r27,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r27.u64;
	// stw r8,4(r9)
	ctx.current_instruction = 0x880DBACC;
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r8,r26,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r26.u64;
	// stw r5,8(r9)
	ctx.current_instruction = 0x880DBAD8;
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r7,12(r9)
	ctx.current_instruction = 0x880DBADC;
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// stw r3,16(r9)
	ctx.current_instruction = 0x880DBAE0;
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// stw r31,20(r9)
	ctx.current_instruction = 0x880DBAE4;
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r31.u32);
	// stw r30,24(r9)
	ctx.current_instruction = 0x880DBAE8;
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// stw r29,28(r9)
	ctx.current_instruction = 0x880DBAEC;
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r29.u32);
	// stwu r8,32(r9)
	ctx.current_instruction = 0x880DBAF0;
	ea = 32 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x880dba6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DBA6C;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-428
	ctx.r11.s64 = ctx.r1.s64 + -428;
	// li r19,0
	ctx.r19.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DBB08:
	// lwz r8,12(r11)
	ctx.current_instruction = 0x880DBB08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.current_instruction = 0x880DBB0C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,24(r11)
	ctx.current_instruction = 0x880DBB10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.current_instruction = 0x880DBB14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r31,r9,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r5,28(r11)
	ctx.current_instruction = 0x880DBB20;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,32(r11)
	ctx.current_instruction = 0x880DBB28;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// subf r30,r6,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r6,36(r11)
	ctx.current_instruction = 0x880DBB30;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r3,40(r11)
	ctx.current_instruction = 0x880DBB34;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r3,r3,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r29,r9,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r28,r9,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r28,36(r11)
	ctx.current_instruction = 0x880DBB68;
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r28.u32);
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r10,40(r11)
	ctx.current_instruction = 0x880DBB70;
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// subf r7,r30,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r3,12(r11)
	ctx.current_instruction = 0x880DBB84;
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// stw r6,16(r11)
	ctx.current_instruction = 0x880DBB8C;
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// add r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r10,28(r11)
	ctx.current_instruction = 0x880DBB94;
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// subf r4,r8,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r8.u64;
	// stw r5,32(r11)
	ctx.current_instruction = 0x880DBB9C;
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r9,24(r11)
	ctx.current_instruction = 0x880DBBA0;
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r4,20(r11)
	ctx.current_instruction = 0x880DBBA4;
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r6,56(r11)
	ctx.current_instruction = 0x880DBBA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r7,52(r11)
	ctx.current_instruction = 0x880DBBAC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,64(r11)
	ctx.current_instruction = 0x880DBBB0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r5,60(r11)
	ctx.current_instruction = 0x880DBBB4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r3,72(r11)
	ctx.current_instruction = 0x880DBBB8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r8,44(r11)
	ctx.current_instruction = 0x880DBBBC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,48(r11)
	ctx.current_instruction = 0x880DBBC0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r31,r9,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r30,r6,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r6,68(r11)
	ctx.current_instruction = 0x880DBBD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r29,r4,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r28,r3,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r27,r5,r6
	ctx.r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r6,r3,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r27,44(r11)
	ctx.current_instruction = 0x880DBC0C;
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// stw r7,48(r11)
	ctx.current_instruction = 0x880DBC10;
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// subf r8,r30,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r30.u64;
	// stw r6,68(r11)
	ctx.current_instruction = 0x880DBC18;
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// subf r7,r28,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r28.u64;
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r5,r9,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,72(r11)
	ctx.current_instruction = 0x880DBC2C;
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r5,52(r11)
	ctx.current_instruction = 0x880DBC34;
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r10,56(r11)
	ctx.current_instruction = 0x880DBC3C;
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,60(r11)
	ctx.current_instruction = 0x880DBC40;
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// stw r4,64(r11)
	ctx.current_instruction = 0x880DBC44;
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r9,80(r11)
	ctx.current_instruction = 0x880DBC48;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,76(r11)
	ctx.current_instruction = 0x880DBC4C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r6,88(r11)
	ctx.current_instruction = 0x880DBC50;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r7,84(r11)
	ctx.current_instruction = 0x880DBC54;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r31,r9,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r4,96(r11)
	ctx.current_instruction = 0x880DBC60;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// subf r30,r6,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r5,92(r11)
	ctx.current_instruction = 0x880DBC68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r3,104(r11)
	ctx.current_instruction = 0x880DBC70;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r6,100(r11)
	ctx.current_instruction = 0x880DBC74;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r29,r4,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r28,r3,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r3.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r27,r5,r6
	ctx.r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r27,76(r11)
	ctx.current_instruction = 0x880DBCAC;
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r27.u32);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r8,80(r11)
	ctx.current_instruction = 0x880DBCB4;
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// stw r7,100(r11)
	ctx.current_instruction = 0x880DBCB8;
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// subf r8,r30,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r30.u64;
	// stw r6,104(r11)
	ctx.current_instruction = 0x880DBCC0;
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// subf r7,r28,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,84(r11)
	ctx.current_instruction = 0x880DBCD4;
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r10,88(r11)
	ctx.current_instruction = 0x880DBCDC;
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r9,92(r11)
	ctx.current_instruction = 0x880DBCE0;
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r5,96(r11)
	ctx.current_instruction = 0x880DBCE4;
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// lwz r7,124(r11)
	ctx.current_instruction = 0x880DBCE8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r5,132(r11)
	ctx.current_instruction = 0x880DBCEC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r3,112(r11)
	ctx.current_instruction = 0x880DBCF0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r8,120(r11)
	ctx.current_instruction = 0x880DBCF4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r9,116(r11)
	ctx.current_instruction = 0x880DBCF8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,136(r11)
	ctx.current_instruction = 0x880DBD00;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// subf r28,r8,r9
	ctx.r28.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r6,128(r11)
	ctx.current_instruction = 0x880DBD08;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r31,r6,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r7,108(r11)
	ctx.current_instruction = 0x880DBD14;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r30,r4,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 + ctx.r3.u64;
	// subf r29,r3,r7
	ctx.r29.u64 = ctx.r7.u64 - ctx.r3.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r27,r7,r4
	ctx.r27.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r4,r7,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r7.u64;
	// stw r27,108(r11)
	ctx.current_instruction = 0x880DBD40;
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r27.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// stw r4,112(r11)
	ctx.current_instruction = 0x880DBD4C;
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r8,r28,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r7,r30,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r30.u64;
	// stw r5,132(r11)
	ctx.current_instruction = 0x880DBD5C;
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r5.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,136(r11)
	ctx.current_instruction = 0x880DBD6C;
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r6.u32);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r4,116(r11)
	ctx.current_instruction = 0x880DBD74;
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r4.u32);
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r10,120(r11)
	ctx.current_instruction = 0x880DBD7C;
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r9,124(r11)
	ctx.current_instruction = 0x880DBD80;
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stwu r3,128(r11)
	ctx.current_instruction = 0x880DBD84;
	ea = 128 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x880dbb08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DBB08;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-228
	ctx.r11.s64 = ctx.r1.s64 + -228;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_880DBD98:
	// lwz r9,-188(r11)
	ctx.current_instruction = 0x880DBD98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -188);
	// lwz r10,-156(r11)
	ctx.current_instruction = 0x880DBD9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -156);
	// lwz r8,-92(r11)
	ctx.current_instruction = 0x880DBDA0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r7,-124(r11)
	ctx.current_instruction = 0x880DBDA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -124);
	// subf r31,r10,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,-28(r11)
	ctx.current_instruction = 0x880DBDB0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// subf r30,r8,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwz r5,-60(r11)
	ctx.current_instruction = 0x880DBDB8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -60);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r4,36(r11)
	ctx.current_instruction = 0x880DBDC0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,4(r11)
	ctx.current_instruction = 0x880DBDC4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r29,r6,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r27,-152(r11)
	ctx.current_instruction = 0x880DBDD0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -152);
	// subf r28,r4,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r4.u64;
	// lwz r26,-184(r11)
	ctx.current_instruction = 0x880DBDD8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -184);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r25,-88(r11)
	ctx.current_instruction = 0x880DBDE0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -88);
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r24,-120(r11)
	ctx.current_instruction = 0x880DBDE8;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -120);
	// add r5,r28,r29
	ctx.r5.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r23,-24(r11)
	ctx.current_instruction = 0x880DBDF0;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r22,-56(r11)
	ctx.current_instruction = 0x880DBDF8;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + -56);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r21,40(r11)
	ctx.current_instruction = 0x880DBE00;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r18,r5,r6
	ctx.r18.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r20,8(r11)
	ctx.current_instruction = 0x880DBE08;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r17,r5,r6
	ctx.r17.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r6,r30,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r30.u64;
	// subf r5,r28,r29
	ctx.r5.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r30,r3,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r31,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r18.s32 >> 31;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// srawi r29,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r17.s32 >> 31;
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r8,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// xor r5,r18,r31
	ctx.r5.u64 = ctx.r18.u64 ^ ctx.r31.u64;
	// xor r28,r17,r29
	ctx.r28.u64 = ctx.r17.u64 ^ ctx.r29.u64;
	// srawi r18,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r18.s64 = ctx.r3.s32 >> 31;
	// subf r17,r9,r10
	ctx.r17.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r16,r9,r10
	ctx.r16.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r15,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r7.s32 >> 31;
	// subf r9,r31,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r10,r29,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r29.u64;
	// xor r5,r30,r8
	ctx.r5.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// xor r7,r7,r15
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r15.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r18.u64;
	// subf r10,r8,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r8.u64;
	// srawi r31,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r17.s32 >> 31;
	// subf r8,r15,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r15.u64;
	// xor r5,r4,r6
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// subf r7,r18,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r18.u64;
	// srawi r4,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r16.s32 >> 31;
	// xor r3,r17,r31
	ctx.r3.u64 = ctx.r17.u64 ^ ctx.r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r8,r31,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r31.u64;
	// xor r6,r16,r4
	ctx.r6.u64 = ctx.r16.u64 ^ ctx.r4.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r9,r4,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r4.u64;
	// add r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r24,r25
	ctx.r9.u64 = ctx.r24.u64 + ctx.r25.u64;
	// stw r5,-448(r1)
	ctx.current_instruction = 0x880DBEC0;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r5.u32);
	// subf r31,r27,r26
	ctx.r31.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r30,r25,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r25.u64;
	// add r8,r22,r23
	ctx.r8.u64 = ctx.r22.u64 + ctx.r23.u64;
	// subf r29,r23,r22
	ctx.r29.u64 = ctx.r22.u64 - ctx.r23.u64;
	// add r7,r20,r21
	ctx.r7.u64 = ctx.r20.u64 + ctx.r21.u64;
	// subf r28,r21,r20
	ctx.r28.u64 = ctx.r20.u64 - ctx.r21.u64;
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r18,-448(r1)
	ctx.current_instruction = 0x880DBEE0;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r23,-20(r11)
	ctx.current_instruction = 0x880DBEE8;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r22,-52(r11)
	ctx.current_instruction = 0x880DBEF0;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + -52);
	// add r20,r4,r5
	ctx.r20.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r27,-148(r11)
	ctx.current_instruction = 0x880DBEF8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + -148);
	// subf r21,r4,r5
	ctx.r21.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lwz r26,-180(r11)
	ctx.current_instruction = 0x880DBF00;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -180);
	// add r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r25,-84(r11)
	ctx.current_instruction = 0x880DBF08;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -84);
	// subf r5,r30,r31
	ctx.r5.u64 = ctx.r31.u64 - ctx.r30.u64;
	// lwz r31,44(r11)
	ctx.current_instruction = 0x880DBF10;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// subf r4,r28,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lwz r30,12(r11)
	ctx.current_instruction = 0x880DBF18;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r17,r3,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lwz r24,-116(r11)
	ctx.current_instruction = 0x880DBF20;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -116);
	// add r15,r3,r6
	ctx.r15.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r19,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r21.s32 >> 31;
	// add r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 + ctx.r5.u64;
	// subf r14,r4,r5
	ctx.r14.u64 = ctx.r5.u64 - ctx.r4.u64;
	// srawi r16,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r20.s32 >> 31;
	// stw r6,-448(r1)
	ctx.current_instruction = 0x880DBF38;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r6.u32);
	// srawi r5,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r17.s32 >> 31;
	// subf r28,r7,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r8,-448(r1)
	ctx.current_instruction = 0x880DBF44;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
	// stw r5,-444(r1)
	ctx.current_instruction = 0x880DBF48;
	REX_STORE_U32(ctx.r1.u32 + -444, ctx.r5.u32);
	// xor r3,r20,r16
	ctx.r3.u64 = ctx.r20.u64 ^ ctx.r16.u64;
	// xor r4,r21,r19
	ctx.r4.u64 = ctx.r21.u64 ^ ctx.r19.u64;
	// stw r3,-440(r1)
	ctx.current_instruction = 0x880DBF54;
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r3.u32);
	// subf r29,r9,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r7,-440(r1)
	ctx.current_instruction = 0x880DBF5C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// srawi r10,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r15.s32 >> 31;
	// stw r4,-440(r1)
	ctx.current_instruction = 0x880DBF64;
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r4.u32);
	// subf r4,r16,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r16.u64;
	// subf r6,r31,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r31.u64;
	// lwz r16,-440(r1)
	ctx.current_instruction = 0x880DBF70;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,-448(r1)
	ctx.current_instruction = 0x880DBF78;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r10.u32);
	// srawi r9,r14,31
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r14.s32 >> 31;
	// stw r6,-432(r1)
	ctx.current_instruction = 0x880DBF80;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r6.u32);
	// subf r21,r23,r22
	ctx.r21.u64 = ctx.r22.u64 - ctx.r23.u64;
	// subf r31,r19,r16
	ctx.r31.u64 = ctx.r16.u64 - ctx.r19.u64;
	// lwz r16,-444(r1)
	ctx.current_instruction = 0x880DBF8C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -444);
	// stw r9,-440(r1)
	ctx.current_instruction = 0x880DBF90;
	REX_STORE_U32(ctx.r1.u32 + -440, ctx.r9.u32);
	// add r9,r6,r21
	ctx.r9.u64 = ctx.r6.u64 + ctx.r21.u64;
	// stw r21,-436(r1)
	ctx.current_instruction = 0x880DBF98;
	REX_STORE_U32(ctx.r1.u32 + -436, ctx.r21.u32);
	// xor r21,r17,r16
	ctx.r21.u64 = ctx.r17.u64 ^ ctx.r16.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stw r8,-444(r1)
	ctx.current_instruction = 0x880DBFA4;
	REX_STORE_U32(ctx.r1.u32 + -444, ctx.r8.u32);
	// subf r4,r16,r21
	ctx.r4.u64 = ctx.r21.u64 - ctx.r16.u64;
	// lwz r16,-448(r1)
	ctx.current_instruction = 0x880DBFAC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
	// subf r19,r28,r29
	ctx.r19.u64 = ctx.r29.u64 - ctx.r28.u64;
	// lwz r17,-440(r1)
	ctx.current_instruction = 0x880DBFB4;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// subf r20,r25,r24
	ctx.r20.u64 = ctx.r24.u64 - ctx.r25.u64;
	// subf r3,r27,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r27.u64;
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r20,-424(r1)
	ctx.current_instruction = 0x880DBFC4;
	REX_STORE_U32(ctx.r1.u32 + -424, ctx.r20.u32);
	// xor r29,r14,r17
	ctx.r29.u64 = ctx.r14.u64 ^ ctx.r17.u64;
	// lwz r14,-444(r1)
	ctx.current_instruction = 0x880DBFCC;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -444);
	// srawi r30,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 31;
	// add r10,r20,r3
	ctx.r10.u64 = ctx.r20.u64 + ctx.r3.u64;
	// add r8,r26,r27
	ctx.r8.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r7,r24,r25
	ctx.r7.u64 = ctx.r24.u64 + ctx.r25.u64;
	// add r6,r22,r23
	ctx.r6.u64 = ctx.r22.u64 + ctx.r23.u64;
	// xor r27,r14,r30
	ctx.r27.u64 = ctx.r14.u64 ^ ctx.r30.u64;
	// subf r26,r9,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r24,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r19.s32 >> 31;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r22,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r22.s64 = ctx.r28.s32 >> 31;
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// srawi r27,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 31;
	// xor r21,r19,r24
	ctx.r21.u64 = ctx.r19.u64 ^ ctx.r24.u64;
	// xor r23,r15,r16
	ctx.r23.u64 = ctx.r15.u64 ^ ctx.r16.u64;
	// subf r29,r17,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r17.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// srawi r20,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r20.s64 = ctx.r25.s32 >> 31;
	// subf r19,r9,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r4,r16,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r16.u64;
	// lwz r23,-144(r11)
	ctx.current_instruction = 0x880DC024;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + -144);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// xor r31,r28,r22
	ctx.r31.u64 = ctx.r28.u64 ^ ctx.r22.u64;
	// subf r30,r24,r21
	ctx.r30.u64 = ctx.r21.u64 - ctx.r24.u64;
	// lwz r21,-80(r11)
	ctx.current_instruction = 0x880DC038;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + -80);
	// xor r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r27.u64;
	// srawi r24,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r19.s32 >> 31;
	// xor r26,r25,r20
	ctx.r26.u64 = ctx.r25.u64 ^ ctx.r20.u64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r31,r22,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r22.u64;
	// lwz r22,-176(r11)
	ctx.current_instruction = 0x880DC050;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + -176);
	// subf r28,r27,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r27.u64;
	// xor r27,r19,r24
	ctx.r27.u64 = ctx.r19.u64 ^ ctx.r24.u64;
	// lwz r19,-16(r11)
	ctx.current_instruction = 0x880DC05C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// subf r29,r20,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r20.u64;
	// lwz r20,-112(r11)
	ctx.current_instruction = 0x880DC064;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + -112);
	// add r4,r4,r18
	ctx.r4.u64 = ctx.r4.u64 + ctx.r18.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r30,r24,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r24.u64;
	// add r18,r9,r10
	ctx.r18.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-424(r1)
	ctx.current_instruction = 0x880DC07C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -424);
	// add r28,r31,r4
	ctx.r28.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwz r31,48(r11)
	ctx.current_instruction = 0x880DC084;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r30,-48(r11)
	ctx.current_instruction = 0x880DC08C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -48);
	// subf r29,r10,r3
	ctx.r29.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r28,-448(r1)
	ctx.current_instruction = 0x880DC094;
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r28.u32);
	// stw r4,-444(r1)
	ctx.current_instruction = 0x880DC098;
	REX_STORE_U32(ctx.r1.u32 + -444, ctx.r4.u32);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwzu r10,16(r11)
	ctx.current_instruction = 0x880DC0A0;
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r27,r23,r22
	ctx.r27.u64 = ctx.r22.u64 - ctx.r23.u64;
	// lwz r9,-432(r1)
	ctx.current_instruction = 0x880DC0A8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// subf r26,r21,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r21.u64;
	// lwz r6,-436(r1)
	ctx.current_instruction = 0x880DC0B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -436);
	// subf r24,r31,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r31.u64;
	// subf r25,r19,r30
	ctx.r25.u64 = ctx.r30.u64 - ctx.r19.u64;
	// subf r28,r9,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// std r11,-424(r1)
	ctx.current_instruction = 0x880DC0C4;
	REX_STORE_U64(ctx.r1.u32 + -424, ctx.r11.u64);
	// add r9,r26,r27
	ctx.r9.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r8,r24,r25
	ctx.r8.u64 = ctx.r24.u64 + ctx.r25.u64;
	// subf r17,r28,r29
	ctx.r17.u64 = ctx.r29.u64 - ctx.r28.u64;
	// add r7,r22,r23
	ctx.r7.u64 = ctx.r22.u64 + ctx.r23.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r30,r19
	ctx.r5.u64 = ctx.r30.u64 + ctx.r19.u64;
	// add r6,r20,r21
	ctx.r6.u64 = ctx.r20.u64 + ctx.r21.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r30,r8,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r8.u64;
	// add r22,r8,r9
	ctx.r22.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r28,r4,r3
	ctx.r28.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r15,r4,r3
	ctx.r15.u64 = ctx.r4.u64 + ctx.r3.u64;
	// srawi r16,r18,31
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r18.s32 >> 31;
	// lwz r20,-448(r1)
	ctx.current_instruction = 0x880DC0FC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
	// srawi r4,r17,31
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r17.s32 >> 31;
	// lwz r23,-444(r1)
	ctx.current_instruction = 0x880DC104;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -444);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r31,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 31;
	// srawi r21,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r28.s32 >> 31;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r19,r15,31
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r15.s32 >> 31;
	// xor r3,r17,r4
	ctx.r3.u64 = ctx.r17.u64 ^ ctx.r4.u64;
	// srawi r14,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r30.s32 >> 31;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r31.u64;
	// srawi r17,r22,31
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FFFFFFF) != 0);
	ctx.r17.s64 = ctx.r22.s32 >> 31;
	// stw r9,-436(r1)
	ctx.current_instruction = 0x880DC134;
	REX_STORE_U32(ctx.r1.u32 + -436, ctx.r9.u32);
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r18,r18,r16
	ctx.r18.u64 = ctx.r18.u64 ^ ctx.r16.u64;
	// subf r31,r31,r29
	ctx.r31.u64 = ctx.r29.u64 - ctx.r31.u64;
	// stw r8,-432(r1)
	ctx.current_instruction = 0x880DC144;
	REX_STORE_U32(ctx.r1.u32 + -432, ctx.r8.u32);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// xor r29,r28,r21
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r21.u64;
	// xor r28,r30,r14
	ctx.r28.u64 = ctx.r30.u64 ^ ctx.r14.u64;
	// xor r22,r22,r17
	ctx.r22.u64 = ctx.r22.u64 ^ ctx.r17.u64;
	// subf r8,r26,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r26.u64;
	// subf r9,r24,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r24.u64;
	// subf r4,r16,r18
	ctx.r4.u64 = ctx.r18.u64 - ctx.r16.u64;
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r31,r17,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r17.u64;
	// lwz r22,-432(r1)
	ctx.current_instruction = 0x880DC16C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// subf r3,r14,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r14.u64;
	// lwz r28,-436(r1)
	ctx.current_instruction = 0x880DC174;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -436);
	// xor r25,r11,r22
	ctx.r25.u64 = ctx.r11.u64 ^ ctx.r22.u64;
	// ld r11,-424(r1)
	ctx.current_instruction = 0x880DC17C;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -424);
	// subf r29,r21,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r21.u64;
	// srawi r27,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 31;
	// xor r26,r15,r19
	ctx.r26.u64 = ctx.r15.u64 ^ ctx.r19.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r31,r22,r25
	ctx.r31.u64 = ctx.r25.u64 - ctx.r22.u64;
	// subf r29,r19,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r19.u64;
	// add r4,r23,r4
	ctx.r4.u64 = ctx.r23.u64 + ctx.r4.u64;
	// xor r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// subf r24,r9,r8
	ctx.r24.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 + ctx.r20.u64;
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r3,r27,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r27.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// srawi r26,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r26.s64 = ctx.r24.s32 >> 31;
	// subf r5,r10,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r6,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r25.s32 >> 31;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r31,r25,r6
	ctx.r31.u64 = ctx.r25.u64 ^ ctx.r6.u64;
	// xor r4,r24,r26
	ctx.r4.u64 = ctx.r24.u64 ^ ctx.r26.u64;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r6,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r6.u64;
	// xor r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r7,r26,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r26.u64;
	// srawi r6,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 31;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subf r9,r3,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r3.u64;
	// xor r5,r30,r6
	ctx.r5.u64 = ctx.r30.u64 ^ ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r19,r10,r8
	ctx.r19.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bdnz 0x880dbd98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880DBD98;
	// srawi r3,r19,3
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r19.s32 >> 3;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880EC9E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880EC9E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880EC9E8) {
			switch (rex_dispatch_address) {
				case 0x880EC9F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880EC9E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880EC9F0: goto loc_880EC9F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x880EC9F0;
	__savegprlr_24(ctx, base);
loc_880EC9F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,-336
	ctx.r3.s64 = ctx.r1.s64 + -336;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x880eca24
	if (!ctx.cr6.gt) goto loc_880ECA24;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r1,-336
	ctx.r8.s64 = ctx.r1.s64 + -336;
loc_880ECA10:
	// lwzu r9,4(r10)
	ctx.current_instruction = 0x880ECA10;
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	ctx.current_instruction = 0x880ECA18;
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x880eca10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ECA10;
loc_880ECA24:
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x880ecb7c
	if (!ctx.cr0.gt) goto loc_880ECB7C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r3,-4
	ctx.r5.s64 = ctx.r3.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_880ECA3C:
	// lwz r11,4(r5)
	ctx.current_instruction = 0x880ECA3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x880eca5c
	if (!ctx.cr6.lt) goto loc_880ECA5C;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,-356(r1)
	ctx.current_instruction = 0x880ECA50;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r7.u32);
	// stw r11,-360(r1)
	ctx.current_instruction = 0x880ECA54;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r11.u32);
	// b 0x880eca6c
	goto loc_880ECA6C;
loc_880ECA5C:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r7,-360(r1)
	ctx.current_instruction = 0x880ECA60;
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r7.u32);
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,-356(r1)
	ctx.current_instruction = 0x880ECA68;
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r9.u32);
loc_880ECA6C:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880ECA6C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x880eca8c
	if (!ctx.cr6.lt) goto loc_880ECA8C;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,-340(r1)
	ctx.current_instruction = 0x880ECA80;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r7.u32);
	// stw r11,-344(r1)
	ctx.current_instruction = 0x880ECA84;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r11.u32);
	// b 0x880eca9c
	goto loc_880ECA9C;
loc_880ECA8C:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r7,-344(r1)
	ctx.current_instruction = 0x880ECA90;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r7.u32);
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,-340(r1)
	ctx.current_instruction = 0x880ECA98;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_880ECA9C:
	// lwz r11,4(r10)
	ctx.current_instruction = 0x880ECA9C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x880ecabc
	if (!ctx.cr6.lt) goto loc_880ECABC;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,-364(r1)
	ctx.current_instruction = 0x880ECAB0;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r7.u32);
	// stw r11,-368(r1)
	ctx.current_instruction = 0x880ECAB4;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r11.u32);
	// b 0x880ecacc
	goto loc_880ECACC;
loc_880ECABC:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r7,-368(r1)
	ctx.current_instruction = 0x880ECAC0;
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r7.u32);
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r10,-364(r1)
	ctx.current_instruction = 0x880ECAC8;
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r10.u32);
loc_880ECACC:
	// lwzu r11,4(r5)
	ctx.current_instruction = 0x880ECACC;
	ea = 4 + ctx.r5.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x880ecae8
	if (!ctx.cr6.lt) goto loc_880ECAE8;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,-348(r1)
	ctx.current_instruction = 0x880ECADC;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r7.u32);
	// stw r11,-352(r1)
	ctx.current_instruction = 0x880ECAE0;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r11.u32);
	// b 0x880ecaf8
	goto loc_880ECAF8;
loc_880ECAE8:
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r7,-352(r1)
	ctx.current_instruction = 0x880ECAEC;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stw r10,-348(r1)
	ctx.current_instruction = 0x880ECAF4;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
loc_880ECAF8:
	// ld r11,-360(r1)
	ctx.current_instruction = 0x880ECAF8;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -360);
	// std r7,0(r4)
	ctx.current_instruction = 0x880ECAFC;
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// ld r10,-344(r1)
	ctx.current_instruction = 0x880ECB00;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -344);
	// ld r9,-368(r1)
	ctx.current_instruction = 0x880ECB04;
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ld r8,-352(r1)
	ctx.current_instruction = 0x880ECB0C;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// stdu r11,8(r4)
	ctx.current_instruction = 0x880ECB10;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r4.u32 = ea;
	// or r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 | ctx.r11.u64;
	// or r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stdu r10,8(r4)
	ctx.current_instruction = 0x880ECB28;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r4.u32 = ea;
	// or r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r25,r27,r11
	ctx.r25.u64 = ctx.r27.u64 | ctx.r11.u64;
	// or r24,r26,r11
	ctx.r24.u64 = ctx.r26.u64 | ctx.r11.u64;
	// or r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 | ctx.r10.u64;
	// stdu r3,8(r4)
	ctx.current_instruction = 0x880ECB3C;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stdu r9,8(r4)
	ctx.current_instruction = 0x880ECB44;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r4.u32 = ea;
	// stdu r31,8(r4)
	ctx.current_instruction = 0x880ECB48;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r31.u64);
	ctx.r4.u32 = ea;
	// stdu r30,8(r4)
	ctx.current_instruction = 0x880ECB4C;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r30.u64);
	ctx.r4.u32 = ea;
	// stdu r28,8(r4)
	ctx.current_instruction = 0x880ECB50;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r28.u64);
	ctx.r4.u32 = ea;
	// stdu r8,8(r4)
	ctx.current_instruction = 0x880ECB54;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r4.u32 = ea;
	// stdu r29,8(r4)
	ctx.current_instruction = 0x880ECB58;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r29.u64);
	ctx.r4.u32 = ea;
	// stdu r27,8(r4)
	ctx.current_instruction = 0x880ECB5C;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r27.u64);
	ctx.r4.u32 = ea;
	// stdu r25,8(r4)
	ctx.current_instruction = 0x880ECB60;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r25.u64);
	ctx.r4.u32 = ea;
	// stdu r26,8(r4)
	ctx.current_instruction = 0x880ECB64;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r26.u64);
	ctx.r4.u32 = ea;
	// stdu r24,8(r4)
	ctx.current_instruction = 0x880ECB68;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r24.u64);
	ctx.r4.u32 = ea;
	// stdu r10,8(r4)
	ctx.current_instruction = 0x880ECB6C;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r4.u32 = ea;
	// stdu r3,8(r4)
	ctx.current_instruction = 0x880ECB70;
	ea = 8 + ctx.r4.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r4.u32 = ea;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bdnz 0x880eca3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_880ECA3C;
loc_880ECB7C:
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F2F00) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F2F00;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F2F00) {
			switch (rex_dispatch_address) {
				case 0x880F2F08:
				case 0x880F2FB0:
				case 0x880F3034:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F2F00;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F2F08: goto loc_880F2F08;
		case 0x880F2FB0: goto loc_880F2FB0;
		case 0x880F3034: goto loc_880F3034;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050828
	ctx.lr = 0x880F2F08;
	__savegprlr_20(ctx, base);
loc_880F2F08:
	// stwu r1,-304(r1)
	ctx.current_instruction = 0x880F2F08;
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1656(r3)
	ctx.current_instruction = 0x880F2F0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1656);
	// addi r10,r4,752
	ctx.r10.s64 = ctx.r4.s64 + 752;
	// lwz r5,268(r4)
	ctx.current_instruction = 0x880F2F14;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,260(r4)
	ctx.current_instruction = 0x880F2F1C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 260);
	// lwz r30,256(r4)
	ctx.current_instruction = 0x880F2F20;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 256);
	// addi r11,r4,756
	ctx.r11.s64 = ctx.r4.s64 + 756;
	// lwz r28,592(r4)
	ctx.current_instruction = 0x880F2F28;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 592);
	// lwz r6,288(r4)
	ctx.current_instruction = 0x880F2F2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 288);
	// beq cr6,0x880f2fb8
	if (ctx.cr6.eq) goto loc_880F2FB8;
	// stw r11,196(r1)
	ctx.current_instruction = 0x880F2F34;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// addi r11,r4,736
	ctx.r11.s64 = ctx.r4.s64 + 736;
	// lwz r26,576(r4)
	ctx.current_instruction = 0x880F2F3C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 576);
	// addi r29,r4,740
	ctx.r29.s64 = ctx.r4.s64 + 740;
	// lwz r24,588(r4)
	ctx.current_instruction = 0x880F2F44;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 588);
	// addi r27,r4,732
	ctx.r27.s64 = ctx.r4.s64 + 732;
	// lwz r22,572(r4)
	ctx.current_instruction = 0x880F2F4C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 572);
	// addi r25,r4,728
	ctx.r25.s64 = ctx.r4.s64 + 728;
	// lwz r21,584(r4)
	ctx.current_instruction = 0x880F2F54;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 584);
	// addi r23,r4,724
	ctx.r23.s64 = ctx.r4.s64 + 724;
	// lwz r20,568(r4)
	ctx.current_instruction = 0x880F2F5C;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 568);
	// stw r10,188(r1)
	ctx.current_instruction = 0x880F2F60;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r10,580(r4)
	ctx.current_instruction = 0x880F2F64;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 580);
	// lwz r9,564(r4)
	ctx.current_instruction = 0x880F2F68;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 564);
	// lwz r8,560(r4)
	ctx.current_instruction = 0x880F2F6C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 560);
	// lwz r7,556(r4)
	ctx.current_instruction = 0x880F2F70;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 556);
	// lwz r4,264(r4)
	ctx.current_instruction = 0x880F2F74;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// stw r11,180(r1)
	ctx.current_instruction = 0x880F2F78;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r29,172(r1)
	ctx.current_instruction = 0x880F2F7C;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r27,164(r1)
	ctx.current_instruction = 0x880F2F80;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r25,156(r1)
	ctx.current_instruction = 0x880F2F84;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r23,148(r1)
	ctx.current_instruction = 0x880F2F88;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r23.u32);
	// stw r31,140(r1)
	ctx.current_instruction = 0x880F2F8C;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x880F2F90;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880F2F94;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r26,116(r1)
	ctx.current_instruction = 0x880F2F98;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r24,108(r1)
	ctx.current_instruction = 0x880F2F9C;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r22,100(r1)
	ctx.current_instruction = 0x880F2FA0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,92(r1)
	ctx.current_instruction = 0x880F2FA4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	ctx.current_instruction = 0x880F2FA8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x88061460
	ctx.lr = 0x880F2FB0;
	sub_88061460(ctx, base);
loc_880F2FB0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
loc_880F2FB8:
	// lwz r27,576(r4)
	ctx.current_instruction = 0x880F2FB8;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 576);
	// addi r9,r4,736
	ctx.r9.s64 = ctx.r4.s64 + 736;
	// lwz r26,588(r4)
	ctx.current_instruction = 0x880F2FC0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 588);
	// addi r8,r4,740
	ctx.r8.s64 = ctx.r4.s64 + 740;
	// stw r11,196(r1)
	ctx.current_instruction = 0x880F2FC8;
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// addi r7,r4,732
	ctx.r7.s64 = ctx.r4.s64 + 732;
	// addi r11,r4,728
	ctx.r11.s64 = ctx.r4.s64 + 728;
	// stw r10,188(r1)
	ctx.current_instruction = 0x880F2FD4;
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r29,r4,724
	ctx.r29.s64 = ctx.r4.s64 + 724;
	// stw r9,180(r1)
	ctx.current_instruction = 0x880F2FDC;
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r8,172(r1)
	ctx.current_instruction = 0x880F2FE0;
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,164(r1)
	ctx.current_instruction = 0x880F2FE4;
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r11,156(r1)
	ctx.current_instruction = 0x880F2FE8;
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r29,148(r1)
	ctx.current_instruction = 0x880F2FEC;
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,140(r1)
	ctx.current_instruction = 0x880F2FF0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r30,132(r1)
	ctx.current_instruction = 0x880F2FF4;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r28,124(r1)
	ctx.current_instruction = 0x880F2FF8;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r27,116(r1)
	ctx.current_instruction = 0x880F2FFC;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r26,108(r1)
	ctx.current_instruction = 0x880F3000;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lwz r25,572(r4)
	ctx.current_instruction = 0x880F3004;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 572);
	// lwz r24,584(r4)
	ctx.current_instruction = 0x880F3008;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 584);
	// lwz r23,568(r4)
	ctx.current_instruction = 0x880F300C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 568);
	// lwz r10,580(r4)
	ctx.current_instruction = 0x880F3010;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 580);
	// lwz r9,564(r4)
	ctx.current_instruction = 0x880F3014;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 564);
	// lwz r8,560(r4)
	ctx.current_instruction = 0x880F3018;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 560);
	// lwz r7,556(r4)
	ctx.current_instruction = 0x880F301C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 556);
	// lwz r4,264(r4)
	ctx.current_instruction = 0x880F3020;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 264);
	// stw r25,100(r1)
	ctx.current_instruction = 0x880F3024;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	ctx.current_instruction = 0x880F3028;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r23,84(r1)
	ctx.current_instruction = 0x880F302C;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x880c30b8
	ctx.lr = 0x880F3034;
	sub_880C30B8(ctx, base);
loc_880F3034:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x88050878
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880F5D00) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F5D00);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F5D00;
	ctx.current_instruction = 0x880F5D00;
	// mulli r11,r4,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,28232(r11)
	ctx.current_instruction = 0x880F5D08;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28232);
	// stw r10,1352(r3)
	ctx.current_instruction = 0x880F5D0C;
	REX_STORE_U32(ctx.r3.u32 + 1352, ctx.r10.u32);
	// lwz r9,28236(r11)
	ctx.current_instruction = 0x880F5D10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28236);
	// stw r9,1364(r3)
	ctx.current_instruction = 0x880F5D14;
	REX_STORE_U32(ctx.r3.u32 + 1364, ctx.r9.u32);
	// lwz r8,28240(r11)
	ctx.current_instruction = 0x880F5D18;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28240);
	// stw r8,1360(r3)
	ctx.current_instruction = 0x880F5D1C;
	REX_STORE_U32(ctx.r3.u32 + 1360, ctx.r8.u32);
	// lwz r7,28244(r11)
	ctx.current_instruction = 0x880F5D20;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28244);
	// stw r7,1372(r3)
	ctx.current_instruction = 0x880F5D24;
	REX_STORE_U32(ctx.r3.u32 + 1372, ctx.r7.u32);
	// lwz r6,28248(r11)
	ctx.current_instruction = 0x880F5D28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 28248);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,796(r3)
	ctx.current_instruction = 0x880F5D30;
	REX_STORE_U32(ctx.r3.u32 + 796, ctx.r6.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r5,28252(r11)
	ctx.current_instruction = 0x880F5D38;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28252);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r5,800(r3)
	ctx.current_instruction = 0x880F5D44;
	REX_STORE_U32(ctx.r3.u32 + 800, ctx.r5.u32);
	// mullw r8,r10,r5
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r8,804(r3)
	ctx.current_instruction = 0x880F5D4C;
	REX_STORE_U32(ctx.r3.u32 + 804, ctx.r8.u32);
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,820(r3)
	ctx.current_instruction = 0x880F5D5C;
	REX_STORE_U32(ctx.r3.u32 + 820, ctx.r10.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,828(r3)
	ctx.current_instruction = 0x880F5D64;
	REX_STORE_U32(ctx.r3.u32 + 828, ctx.r9.u32);
	// stw r7,816(r3)
	ctx.current_instruction = 0x880F5D68;
	REX_STORE_U32(ctx.r3.u32 + 816, ctx.r7.u32);
	// stw r6,824(r3)
	ctx.current_instruction = 0x880F5D6C;
	REX_STORE_U32(ctx.r3.u32 + 824, ctx.r6.u32);
	// lwz r5,28256(r11)
	ctx.current_instruction = 0x880F5D70;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28256);
	// stw r5,1356(r3)
	ctx.current_instruction = 0x880F5D74;
	REX_STORE_U32(ctx.r3.u32 + 1356, ctx.r5.u32);
	// lwz r4,28260(r11)
	ctx.current_instruction = 0x880F5D78;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28260);
	// stw r4,1368(r3)
	ctx.current_instruction = 0x880F5D7C;
	REX_STORE_U32(ctx.r3.u32 + 1368, ctx.r4.u32);
	// lwz r10,28264(r11)
	ctx.current_instruction = 0x880F5D80;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28264);
	// stw r10,1376(r3)
	ctx.current_instruction = 0x880F5D84;
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r10.u32);
	// lwz r9,28268(r11)
	ctx.current_instruction = 0x880F5D88;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28268);
	// stw r9,832(r3)
	ctx.current_instruction = 0x880F5D8C;
	REX_STORE_U32(ctx.r3.u32 + 832, ctx.r9.u32);
	// lwz r10,28272(r11)
	ctx.current_instruction = 0x880F5D90;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28272);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,720(r3)
	ctx.current_instruction = 0x880F5D9C;
	REX_STORE_U32(ctx.r3.u32 + 720, ctx.r10.u32);
	// rlwinm r10,r8,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r10,6144
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6144, ctx.xer);
	// bge cr6,0x880f5db0
	if (!ctx.cr6.lt) goto loc_880F5DB0;
	// li r10,6144
	ctx.r10.s64 = 6144;
loc_880F5DB0:
	// stw r10,6732(r3)
	ctx.current_instruction = 0x880F5DB0;
	REX_STORE_U32(ctx.r3.u32 + 6732, ctx.r10.u32);
	// lwz r10,28276(r11)
	ctx.current_instruction = 0x880F5DB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28276);
	// stw r10,724(r3)
	ctx.current_instruction = 0x880F5DB8;
	REX_STORE_U32(ctx.r3.u32 + 724, ctx.r10.u32);
	// lwz r9,28280(r11)
	ctx.current_instruction = 0x880F5DBC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28280);
	// stw r9,728(r3)
	ctx.current_instruction = 0x880F5DC0;
	REX_STORE_U32(ctx.r3.u32 + 728, ctx.r9.u32);
	// lwz r8,28284(r11)
	ctx.current_instruction = 0x880F5DC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28284);
	// stw r8,732(r3)
	ctx.current_instruction = 0x880F5DC8;
	REX_STORE_U32(ctx.r3.u32 + 732, ctx.r8.u32);
	// lwz r7,28288(r11)
	ctx.current_instruction = 0x880F5DCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28288);
	// stw r7,1380(r3)
	ctx.current_instruction = 0x880F5DD0;
	REX_STORE_U32(ctx.r3.u32 + 1380, ctx.r7.u32);
	// lwz r6,28292(r11)
	ctx.current_instruction = 0x880F5DD4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 28292);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,1384(r3)
	ctx.current_instruction = 0x880F5DDC;
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r6.u32);
	// lwz r5,28296(r11)
	ctx.current_instruction = 0x880F5DE0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28296);
	// stw r5,1388(r3)
	ctx.current_instruction = 0x880F5DE4;
	REX_STORE_U32(ctx.r3.u32 + 1388, ctx.r5.u32);
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,28300(r11)
	ctx.current_instruction = 0x880F5DEC;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28300);
	// stw r4,1392(r3)
	ctx.current_instruction = 0x880F5DF0;
	REX_STORE_U32(ctx.r3.u32 + 1392, ctx.r4.u32);
	// lwz r10,28304(r11)
	ctx.current_instruction = 0x880F5DF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28304);
	// stw r10,1396(r3)
	ctx.current_instruction = 0x880F5DF8;
	REX_STORE_U32(ctx.r3.u32 + 1396, ctx.r10.u32);
	// lwz r9,28308(r11)
	ctx.current_instruction = 0x880F5DFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28308);
	// stw r9,1400(r3)
	ctx.current_instruction = 0x880F5E00;
	REX_STORE_U32(ctx.r3.u32 + 1400, ctx.r9.u32);
	// lwz r8,28312(r11)
	ctx.current_instruction = 0x880F5E04;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28312);
	// stw r8,1404(r3)
	ctx.current_instruction = 0x880F5E08;
	REX_STORE_U32(ctx.r3.u32 + 1404, ctx.r8.u32);
	// lwz r6,28316(r11)
	ctx.current_instruction = 0x880F5E0C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 28316);
	// stw r6,1408(r3)
	ctx.current_instruction = 0x880F5E10;
	REX_STORE_U32(ctx.r3.u32 + 1408, ctx.r6.u32);
	// stw r5,1412(r3)
	ctx.current_instruction = 0x880F5E14;
	REX_STORE_U32(ctx.r3.u32 + 1412, ctx.r5.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F8F28) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x880F8F28);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F8F28;
	ctx.current_instruction = 0x880F8F28;
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// xor r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// subf. r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x880f8f50
	if (!ctx.cr0.eq) goto loc_880F8F50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	ctx.current_instruction = 0x880F8F44;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r4)
	ctx.current_instruction = 0x880F8F48;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x880f8fbc
	goto loc_880F8FBC;
loc_880F8F50:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x880f8f68
	if (!ctx.cr6.lt) goto loc_880F8F68;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// b 0x880f8fb0
	goto loc_880F8FB0;
loc_880F8F68:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x880f8f7c
	if (!ctx.cr6.lt) goto loc_880F8F7C;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x880f8fac
	goto loc_880F8FAC;
loc_880F8F7C:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bge cr6,0x880f8f90
	if (!ctx.cr6.lt) goto loc_880F8F90;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x880f8fac
	goto loc_880F8FAC;
loc_880F8F90:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bge cr6,0x880f8fa4
	if (!ctx.cr6.lt) goto loc_880F8FA4;
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x880f8fac
	goto loc_880F8FAC;
loc_880F8FA4:
	// addi r11,r11,-31
	ctx.r11.s64 = ctx.r11.s64 + -31;
	// li r9,5
	ctx.r9.s64 = 5;
loc_880F8FAC:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_880F8FB0:
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r7,0(r5)
	ctx.current_instruction = 0x880F8FB4;
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// stw r9,0(r4)
	ctx.current_instruction = 0x880F8FB8;
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_880F8FBC:
	// lwz r11,0(r4)
	ctx.current_instruction = 0x880F8FBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// addi r9,r10,2272
	ctx.r9.s64 = ctx.r10.s64 + 2272;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.current_instruction = 0x880F8FCC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,0(r6)
	ctx.current_instruction = 0x880F8FD0;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_880F9AC0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880F9AC0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880F9AC0) {
			switch (rex_dispatch_address) {
				case 0x880F9AC8:
				case 0x880F9B0C:
				case 0x880F9B54:
				case 0x880F9B60:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880F9AC0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880F9AC8: goto loc_880F9AC8;
		case 0x880F9B0C: goto loc_880F9B0C;
		case 0x880F9B54: goto loc_880F9B54;
		case 0x880F9B60: goto loc_880F9B60;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x880F9AC8;
	__savegprlr_26(ctx, base);
loc_880F9AC8:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x880F9AC8;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r10,r27,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// subfc r8,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r27.u64;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,-22712(r7)
	ctx.current_instruction = 0x880F9AF8;
	REX_STORE_U32(ctx.r7.u32 + -22712, ctx.r11.u32);
	// ble cr6,0x880f9b0c
	if (!ctx.cr6.gt) goto loc_880F9B0C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	ctx.current_instruction = 0x880F9B04;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x880f9a30
	ctx.lr = 0x880F9B0C;
	sub_880F9A30(ctx, base);
loc_880F9B0C:
	// lwz r11,84(r30)
	ctx.current_instruction = 0x880F9B0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r30)
	ctx.current_instruction = 0x880F9B14;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r10,0(r30)
	ctx.current_instruction = 0x880F9B1C;
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,24(r30)
	ctx.current_instruction = 0x880F9B20;
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r26,20(r30)
	ctx.current_instruction = 0x880F9B28;
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r11,88(r30)
	ctx.current_instruction = 0x880F9B2C;
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// ble cr6,0x880f9b70
	if (!ctx.cr6.gt) goto loc_880F9B70;
	// addi r28,r30,36
	ctx.r28.s64 = ctx.r30.s64 + 36;
loc_880F9B38:
	// lwzu r31,4(r28)
	ctx.current_instruction = 0x880F9B38;
	ea = 4 + ctx.r28.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.current_instruction = 0x880F9B40;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r31)
	ctx.current_instruction = 0x880F9B44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,52(r31)
	ctx.current_instruction = 0x880F9B4C;
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// bl 0x88052d90
	ctx.lr = 0x880F9B54;
	sub_88052D90(ctx, base);
loc_880F9B54:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8813c860
	ctx.lr = 0x880F9B60;
	sub_8813C860(ctx, base);
loc_880F9B60:
	// lwz r10,12(r30)
	ctx.current_instruction = 0x880F9B60;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x880f9b38
	if (ctx.cr6.lt) goto loc_880F9B38;
loc_880F9B70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_880FC1B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x880FC1B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x880FC1B0) {
			switch (rex_dispatch_address) {
				case 0x880FC1B8:
				case 0x880FC2B4:
				case 0x880FC2E0:
				case 0x880FC324:
				case 0x880FC344:
				case 0x880FC360:
				case 0x880FC3B0:
				case 0x880FC3C0:
				case 0x880FC3CC:
				case 0x880FC438:
				case 0x880FC460:
				case 0x880FC478:
				case 0x880FC488:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x880FC1B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x880FC1B8: goto loc_880FC1B8;
		case 0x880FC2B4: goto loc_880FC2B4;
		case 0x880FC2E0: goto loc_880FC2E0;
		case 0x880FC324: goto loc_880FC324;
		case 0x880FC344: goto loc_880FC344;
		case 0x880FC360: goto loc_880FC360;
		case 0x880FC3B0: goto loc_880FC3B0;
		case 0x880FC3C0: goto loc_880FC3C0;
		case 0x880FC3CC: goto loc_880FC3CC;
		case 0x880FC438: goto loc_880FC438;
		case 0x880FC460: goto loc_880FC460;
		case 0x880FC478: goto loc_880FC478;
		case 0x880FC488: goto loc_880FC488;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x880FC1B8;
	__savegprlr_18(ctx, base);
loc_880FC1B8:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x880FC1B8;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x880fc494
	if (ctx.cr6.lt) goto loc_880FC494;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x880fc494
	if (ctx.cr6.lt) goto loc_880FC494;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x880fc494
	if (ctx.cr6.lt) goto loc_880FC494;
	// lwz r24,292(r1)
	ctx.current_instruction = 0x880FC1F4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x880fc494
	if (ctx.cr6.lt) goto loc_880FC494;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x880fc494
	if (ctx.cr6.lt) goto loc_880FC494;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x880fc494
	if (ctx.cr6.lt) goto loc_880FC494;
	// lwz r11,4(r4)
	ctx.current_instruction = 0x880FC210;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880fc494
	if (ctx.cr6.gt) goto loc_880FC494;
	// lwz r11,8(r4)
	ctx.current_instruction = 0x880FC220;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r7,r24
	ctx.r10.u64 = ctx.r7.u64 + ctx.r24.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x880fc494
	if (ctx.cr6.gt) goto loc_880FC494;
	// lwz r11,4(r5)
	ctx.current_instruction = 0x880FC23C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r10,r19,r27
	ctx.r10.u64 = ctx.r19.u64 + ctx.r27.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x880fc494
	if (ctx.cr6.gt) goto loc_880FC494;
	// lwz r11,8(r5)
	ctx.current_instruction = 0x880FC24C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r18,r24
	ctx.r10.u64 = ctx.r18.u64 + ctx.r24.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x880fc494
	if (ctx.cr6.gt) goto loc_880FC494;
	// lwz r10,16(r4)
	ctx.current_instruction = 0x880FC268;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x880fc290
	if (!ctx.cr6.eq) goto loc_880FC290;
	// lhz r9,14(r4)
	ctx.current_instruction = 0x880FC27C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x880fc290
	if (!ctx.cr6.eq) goto loc_880FC290;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x880fc29c
	goto loc_880FC29C;
loc_880FC290:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x880fc29c
	if (!ctx.cr6.eq) goto loc_880FC29C;
	// li r11,12
	ctx.r11.s64 = 12;
loc_880FC29C:
	// lis r10,9356
	ctx.r10.s64 = 613154816;
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// ori r28,r10,32768
	ctx.r28.u64 = ctx.r10.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050340
	ctx.lr = 0x880FC2B4;
	sub_88050340(ctx, base);
loc_880FC2B4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880fc2d0
	if (!ctx.cr6.eq) goto loc_880FC2D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r22)
	ctx.current_instruction = 0x880FC2C4;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_880FC2D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x880547a0
	ctx.lr = 0x880FC2E0;
	sub_880547A0(ctx, base);
loc_880FC2E0:
	// lwz r11,16(r25)
	ctx.current_instruction = 0x880FC2E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x880fc300
	if (!ctx.cr6.eq) goto loc_880FC300;
	// lhz r10,14(r25)
	ctx.current_instruction = 0x880FC2EC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r25.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x880fc300
	if (!ctx.cr6.eq) goto loc_880FC300;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x880fc314
	goto loc_880FC314;
loc_880FC300:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,12
	ctx.r10.s64 = 12;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_880FC314:
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88050340
	ctx.lr = 0x880FC324;
	sub_88050340(ctx, base);
loc_880FC324:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x880fc350
	if (!ctx.cr6.eq) goto loc_880FC350;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r22)
	ctx.current_instruction = 0x880FC338;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC344;
	sub_88050358(ctx, base);
loc_880FC344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_880FC350:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x880547a0
	ctx.lr = 0x880FC360;
	sub_880547A0(ctx, base);
loc_880FC360:
	// stw r27,4(r29)
	ctx.current_instruction = 0x880FC360;
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,4(r30)
	ctx.current_instruction = 0x880FC364;
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r11,8(r26)
	ctx.current_instruction = 0x880FC368;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bgt cr6,0x880fc37c
	if (ctx.cr6.gt) goto loc_880FC37C;
	// neg r11,r24
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r24.u64);
loc_880FC37C:
	// stw r11,8(r29)
	ctx.current_instruction = 0x880FC37C;
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r25)
	ctx.current_instruction = 0x880FC380;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bgt cr6,0x880fc394
	if (ctx.cr6.gt) goto loc_880FC394;
	// neg r11,r24
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r24.u64);
loc_880FC394:
	// stw r11,8(r30)
	ctx.current_instruction = 0x880FC394;
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,332(r1)
	ctx.current_instruction = 0x880FC3A0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,300(r1)
	ctx.current_instruction = 0x880FC3A8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x880fc0c0
	ctx.lr = 0x880FC3B0;
	sub_880FC0C0(ctx, base);
loc_880FC3B0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC3C0;
	sub_88050358(ctx, base);
loc_880FC3C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC3CC;
	sub_88050358(ctx, base);
loc_880FC3CC:
	// lwz r11,0(r22)
	ctx.current_instruction = 0x880FC3CC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x880fc444
	if (!ctx.cr6.eq) goto loc_880FC444;
	// lwz r4,308(r1)
	ctx.current_instruction = 0x880FC3D8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,316(r1)
	ctx.current_instruction = 0x880FC3E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,324(r1)
	ctx.current_instruction = 0x880FC3E4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r23,14636(r31)
	ctx.current_instruction = 0x880FC3EC;
	REX_STORE_U32(ctx.r31.u32 + 14636, ctx.r23.u32);
	// stw r9,14616(r31)
	ctx.current_instruction = 0x880FC3F0;
	REX_STORE_U32(ctx.r31.u32 + 14616, ctx.r9.u32);
	// stw r20,14640(r31)
	ctx.current_instruction = 0x880FC3F4;
	REX_STORE_U32(ctx.r31.u32 + 14640, ctx.r20.u32);
	// stw r19,14644(r31)
	ctx.current_instruction = 0x880FC3F8;
	REX_STORE_U32(ctx.r31.u32 + 14644, ctx.r19.u32);
	// stw r18,14648(r31)
	ctx.current_instruction = 0x880FC3FC;
	REX_STORE_U32(ctx.r31.u32 + 14648, ctx.r18.u32);
	// stw r4,14656(r31)
	ctx.current_instruction = 0x880FC400;
	REX_STORE_U32(ctx.r31.u32 + 14656, ctx.r4.u32);
	// stw r11,14660(r31)
	ctx.current_instruction = 0x880FC404;
	REX_STORE_U32(ctx.r31.u32 + 14660, ctx.r11.u32);
	// stw r10,14664(r31)
	ctx.current_instruction = 0x880FC408;
	REX_STORE_U32(ctx.r31.u32 + 14664, ctx.r10.u32);
	// beq cr6,0x880fc420
	if (ctx.cr6.eq) goto loc_880FC420;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x880fc420
	if (ctx.cr6.eq) goto loc_880FC420;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x880fc424
	if (!ctx.cr6.eq) goto loc_880FC424;
loc_880FC420:
	// lwz r4,4(r26)
	ctx.current_instruction = 0x880FC420;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
loc_880FC424:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r25)
	ctx.current_instruction = 0x880FC428;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r6,4(r25)
	ctx.current_instruction = 0x880FC42C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r5,8(r26)
	ctx.current_instruction = 0x880FC430;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x880c9958
	ctx.lr = 0x880FC438;
	sub_880C9958(ctx, base);
loc_880FC438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_880FC444:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x880fc49c
	if (ctx.cr6.eq) goto loc_880FC49C;
	// lwz r3,0(r31)
	ctx.current_instruction = 0x880FC44C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc464
	if (ctx.cr6.eq) goto loc_880FC464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC460;
	sub_88050358(ctx, base);
loc_880FC460:
	// stw r21,0(r31)
	ctx.current_instruction = 0x880FC460;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_880FC464:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x880FC464;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x880fc47c
	if (ctx.cr6.eq) goto loc_880FC47C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC478;
	sub_88050358(ctx, base);
loc_880FC478:
	// stw r21,4(r31)
	ctx.current_instruction = 0x880FC478;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
loc_880FC47C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x88050358
	ctx.lr = 0x880FC488;
	sub_88050358(ctx, base);
loc_880FC488:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_880FC494:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r22)
	ctx.current_instruction = 0x880FC498;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_880FC49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88105A88) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88105A88;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88105A88) {
			switch (rex_dispatch_address) {
				case 0x88105A90:
				case 0x88105AFC:
				case 0x88105B1C:
				case 0x88105B58:
				case 0x88105B74:
				case 0x88105B90:
				case 0x88105BAC:
				case 0x88105BE0:
				case 0x88105BFC:
				case 0x88105C18:
				case 0x88105C44:
				case 0x88105C68:
				case 0x88105C84:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88105A88;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88105A90: goto loc_88105A90;
		case 0x88105AFC: goto loc_88105AFC;
		case 0x88105B1C: goto loc_88105B1C;
		case 0x88105B58: goto loc_88105B58;
		case 0x88105B74: goto loc_88105B74;
		case 0x88105B90: goto loc_88105B90;
		case 0x88105BAC: goto loc_88105BAC;
		case 0x88105BE0: goto loc_88105BE0;
		case 0x88105BFC: goto loc_88105BFC;
		case 0x88105C18: goto loc_88105C18;
		case 0x88105C44: goto loc_88105C44;
		case 0x88105C68: goto loc_88105C68;
		case 0x88105C84: goto loc_88105C84;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x88105A90;
	__savegprlr_22(ctx, base);
loc_88105A90:
	// stwu r1,-176(r1)
	ctx.current_instruction = 0x88105A90;
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r26,4
	ctx.r26.s64 = 4;
	// add r24,r11,r28
	ctx.r24.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x88105ad0
	if (ctx.cr6.eq) goto loc_88105AD0;
	// li r25,20
	ctx.r25.s64 = 20;
	// li r26,0
	ctx.r26.s64 = 0;
loc_88105AD0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x88105ae0
	if (ctx.cr6.eq) goto loc_88105AE0;
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// b 0x88105b00
	goto loc_88105B00;
loc_88105AE0:
	// lwz r11,2156(r30)
	ctx.current_instruction = 0x88105AE0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105AFC:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_88105B00:
	// lwz r11,2156(r30)
	ctx.current_instruction = 0x88105B00;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105B1C:
	// mullw r11,r26,r31
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// addi r28,r11,3
	ctx.r28.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addic. r26,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r26.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble 0x88105c28
	if (!ctx.cr0.gt) goto loc_88105C28;
	// bne cr6,0x88105bc4
	if (!ctx.cr6.eq) goto loc_88105BC4;
loc_88105B3C:
	// lwz r11,2156(r30)
	ctx.current_instruction = 0x88105B3C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105B58:
	// lwz r10,2156(r30)
	ctx.current_instruction = 0x88105B58;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88105B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105B74:
	// lwz r9,2160(r30)
	ctx.current_instruction = 0x88105B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88105B90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105B90:
	// lwz r8,2160(r30)
	ctx.current_instruction = 0x88105B90;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x88105BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105BAC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x88105b3c
	if (!ctx.cr0.eq) goto loc_88105B3C;
	// b 0x88105c28
	goto loc_88105C28;
loc_88105BC4:
	// lwz r11,2156(r30)
	ctx.current_instruction = 0x88105BC4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105BE0:
	// lwz r10,2160(r30)
	ctx.current_instruction = 0x88105BE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x88105BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105BFC:
	// lwz r9,2160(r30)
	ctx.current_instruction = 0x88105BFC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x88105C18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105C18:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x88105bc4
	if (!ctx.cr0.eq) goto loc_88105BC4;
loc_88105C28:
	// lwz r11,2156(r30)
	ctx.current_instruction = 0x88105C28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105C44:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x88105c68
	if (!ctx.cr6.eq) goto loc_88105C68;
	// lwz r11,2156(r30)
	ctx.current_instruction = 0x88105C4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2156);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105C68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105C68:
	// lwz r11,2160(r30)
	ctx.current_instruction = 0x88105C68;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2160);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x88105C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_88105C84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8810A908) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810A908);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810A908;
	ctx.current_instruction = 0x8810A908;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lis r11,-30703
	ctx.r11.s64 = -2012151808;
	// lis r10,-30703
	ctx.r10.s64 = -2012151808;
	// lis r9,-30703
	ctx.r9.s64 = -2012151808;
	// addi r11,r11,-23056
	ctx.r11.s64 = ctx.r11.s64 + -23056;
	// addi r10,r10,-24248
	ctx.r10.s64 = ctx.r10.s64 + -24248;
	// addi r9,r9,-27792
	ctx.r9.s64 = ctx.r9.s64 + -27792;
	// stw r11,-19952(r8)
	ctx.current_instruction = 0x8810A92C;
	REX_STORE_U32(ctx.r8.u32 + -19952, ctx.r11.u32);
	// stw r10,-19956(r7)
	ctx.current_instruction = 0x8810A930;
	REX_STORE_U32(ctx.r7.u32 + -19956, ctx.r10.u32);
	// lis r8,-30703
	ctx.r8.s64 = -2012151808;
	// stw r9,-19960(r6)
	ctx.current_instruction = 0x8810A938;
	REX_STORE_U32(ctx.r6.u32 + -19960, ctx.r9.u32);
	// lis r7,-30703
	ctx.r7.s64 = -2012151808;
	// lis r6,-30703
	ctx.r6.s64 = -2012151808;
	// lis r5,-30678
	ctx.r5.s64 = -2010513408;
	// lis r4,-30678
	ctx.r4.s64 = -2010513408;
	// lis r3,-30678
	ctx.r3.s64 = -2010513408;
	// addi r11,r8,-25304
	ctx.r11.s64 = ctx.r8.s64 + -25304;
	// addi r10,r7,-26560
	ctx.r10.s64 = ctx.r7.s64 + -26560;
	// addi r9,r6,-28072
	ctx.r9.s64 = ctx.r6.s64 + -28072;
	// stw r11,-19964(r5)
	ctx.current_instruction = 0x8810A95C;
	REX_STORE_U32(ctx.r5.u32 + -19964, ctx.r11.u32);
	// stw r10,-19968(r4)
	ctx.current_instruction = 0x8810A960;
	REX_STORE_U32(ctx.r4.u32 + -19968, ctx.r10.u32);
	// stw r9,-19972(r3)
	ctx.current_instruction = 0x8810A964;
	REX_STORE_U32(ctx.r3.u32 + -19972, ctx.r9.u32);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810B688) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810B688);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810B688;
	ctx.current_instruction = 0x8810B688;
	// std r30,-16(r1)
	ctx.current_instruction = 0x8810B688;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8810B68C;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r6)
	ctx.current_instruction = 0x8810B690;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,720(r3)
	ctx.current_instruction = 0x8810B694;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r8,724(r3)
	ctx.current_instruction = 0x8810B698;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 724);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r10,0(r7)
	ctx.current_instruction = 0x8810B6A0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x8810b740
	if (ctx.cr6.eq) goto loc_8810B740;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x8810b6e0
	if (!ctx.cr6.lt) goto loc_8810B6E0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x8810b6f4
	goto loc_8810B6F4;
loc_8810B6E0:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x8810b6f4
	if (!ctx.cr6.gt) goto loc_8810B6F4;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8810B6F4:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// stw r11,0(r6)
	ctx.current_instruction = 0x8810B6F8;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8810b71c
	if (!ctx.cr6.lt) goto loc_8810B71C;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r6,0(r7)
	ctx.current_instruction = 0x8810B70C;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8810B710;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8810B714;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810B71C:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8810b744
	if (!ctx.cr6.gt) goto loc_8810B744;
	// subf r9,r8,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	ctx.current_instruction = 0x8810B730;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8810B734;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8810B738;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_8810B740:
	// stw r11,0(r6)
	ctx.current_instruction = 0x8810B740;
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8810B744:
	// stw r10,0(r7)
	ctx.current_instruction = 0x8810B744;
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8810B748;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8810B74C;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810D030) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8810D030);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810D030;
	ctx.current_instruction = 0x8810D030;
	// std r30,-16(r1)
	ctx.current_instruction = 0x8810D030;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	ctx.current_instruction = 0x8810D034;
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r3,255
	ctx.r3.s64 = 255;
loc_8810D048:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// addi r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8810D05C:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhz r10,-4(r9)
	ctx.current_instruction = 0x8810D060;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -4);
	// lbz r7,-2(r8)
	ctx.current_instruction = 0x8810D064;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x8810d08c
	if (!ctx.cr6.gt) goto loc_8810D08C;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_8810D08C:
	// stb r10,-2(r8)
	ctx.current_instruction = 0x8810D08C;
	REX_STORE_U8(ctx.r8.u32 + -2, ctx.r10.u8);
	// lbzx r8,r4,r11
	ctx.current_instruction = 0x8810D090;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lhz r10,-2(r9)
	ctx.current_instruction = 0x8810D094;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810d0bc
	if (!ctx.cr6.gt) goto loc_8810D0BC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8810D0BC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbzx r10,r6,r11
	ctx.current_instruction = 0x8810D0C0;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stbx r8,r4,r11
	ctx.current_instruction = 0x8810D0C4;
	REX_STORE_U8(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u8);
	// lhz r8,0(r9)
	ctx.current_instruction = 0x8810D0C8;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810d0f0
	if (!ctx.cr6.gt) goto loc_8810D0F0;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8810D0F0:
	// lbzx r8,r31,r11
	ctx.current_instruction = 0x8810D0F0;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stbx r10,r6,r11
	ctx.current_instruction = 0x8810D0F8;
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// lhz r10,2(r9)
	ctx.current_instruction = 0x8810D0FC;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x8810d124
	if (!ctx.cr6.gt) goto loc_8810D124;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_8810D124:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r7)
	ctx.current_instruction = 0x8810D12C;
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8810d05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810D05C;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// bne 0x8810d048
	if (!ctx.cr0.eq) goto loc_8810D048;
	// ld r30,-16(r1)
	ctx.current_instruction = 0x8810D144;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.current_instruction = 0x8810D148;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8810E4C8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8810E4C8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8810E4C8) {
			switch (rex_dispatch_address) {
				case 0x8810E4D0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8810E4C8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8810E4D0: goto loc_8810E4D0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x8810E4D0;
	__savegprlr_24(ctx, base);
loc_8810E4D0:
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lwz r26,84(r1)
	ctx.current_instruction = 0x8810E4D4;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r7,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// addi r11,r11,5536
	ctx.r11.s64 = ctx.r11.s64 + 5536;
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
	// subf r27,r5,r3
	ctx.r27.u64 = ctx.r3.u64 - ctx.r5.u64;
	// li r25,4
	ctx.r25.s64 = 4;
loc_8810E4F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8810e540
	if (!ctx.cr6.gt) goto loc_8810E540;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r8,2(r29)
	ctx.current_instruction = 0x8810E504;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r7,0(r29)
	ctx.current_instruction = 0x8810E508;
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// extsh r31,r7
	ctx.r31.s64 = ctx.r7.s16;
	// add r11,r27,r5
	ctx.r11.u64 = ctx.r27.u64 + ctx.r5.u64;
loc_8810E520:
	// lbz r8,1(r11)
	ctx.current_instruction = 0x8810E520;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r24,0(r11)
	ctx.current_instruction = 0x8810E524;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r7,r8,r3
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r24,r31
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r31.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stwu r8,4(r9)
	ctx.current_instruction = 0x8810E538;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8810e520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810E520;
loc_8810E540:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8810e5ac
	if (!ctx.cr6.gt) goto loc_8810E5AC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// subf r7,r6,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
loc_8810E554:
	// lhz r11,2(r30)
	ctx.current_instruction = 0x8810E554;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r8,0(r30)
	ctx.current_instruction = 0x8810E558;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r3,0(r9)
	ctx.current_instruction = 0x8810E55C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r31,4(r9)
	ctx.current_instruction = 0x8810E564;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8810e590
	if (!ctx.cr0.lt) goto loc_8810E590;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8810e59c
	goto loc_8810E59C;
loc_8810E590:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8810e59c
	if (!ctx.cr6.gt) goto loc_8810E59C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8810E59C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbux r11,r7,r6
	ctx.current_instruction = 0x8810E5A4;
	ea = ctx.r7.u32 + ctx.r6.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x8810e554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8810E554;
loc_8810E5AC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x8810e4f8
	if (!ctx.cr0.eq) goto loc_8810E4F8;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881103E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881103E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881103E8) {
			switch (rex_dispatch_address) {
				case 0x881103F0:
				case 0x88110438:
				case 0x88110460:
				case 0x881104A0:
				case 0x881104DC:
				case 0x881104F0:
				case 0x88110530:
				case 0x8811056C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881103E8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881103F0: goto loc_881103F0;
		case 0x88110438: goto loc_88110438;
		case 0x88110460: goto loc_88110460;
		case 0x881104A0: goto loc_881104A0;
		case 0x881104DC: goto loc_881104DC;
		case 0x881104F0: goto loc_881104F0;
		case 0x88110530: goto loc_88110530;
		case 0x8811056C: goto loc_8811056C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050840
	ctx.lr = 0x881103F0;
	__savegprlr_26(ctx, base);
loc_881103F0:
	// stwu r1,-144(r1)
	ctx.current_instruction = 0x881103F0;
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28568(r3)
	ctx.current_instruction = 0x881103F4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28568);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,7868(r3)
	ctx.current_instruction = 0x88110400;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 7868);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r28,r10,r5
	ctx.r28.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x88110438
	if (ctx.cr6.eq) goto loc_88110438;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x880ff798
	ctx.lr = 0x88110438;
	sub_880FF798(ctx, base);
loc_88110438:
	// lhz r11,0(r26)
	ctx.current_instruction = 0x88110438;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bge cr6,0x881104e4
	if (!ctx.cr6.lt) goto loc_881104E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20048(r31)
	ctx.current_instruction = 0x88110458;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20048);
	// bl 0x8810f348
	ctx.lr = 0x88110460;
	sub_8810F348(ctx, base);
loc_88110460:
	// lhz r10,0(r28)
	ctx.current_instruction = 0x88110460;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8811056c
	if (!ctx.cr6.gt) goto loc_8811056C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x881104b8
	if (!ctx.cr6.gt) goto loc_881104B8;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_88110484:
	// lhz r10,6(r27)
	ctx.current_instruction = 0x88110484;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhzu r11,4(r27)
	ctx.current_instruction = 0x8811048C;
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810ed80
	ctx.lr = 0x881104A0;
	sub_8810ED80(ctx, base);
loc_881104A0:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x881104A0;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88110484
	if (ctx.cr6.lt) goto loc_88110484;
loc_881104B8:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x881104C8;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x881104CC;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ef50
	ctx.lr = 0x881104DC;
	sub_8810EF50(ctx, base);
loc_881104DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
loc_881104E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20052(r31)
	ctx.current_instruction = 0x881104E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20052);
	// bl 0x8810f348
	ctx.lr = 0x881104F0;
	sub_8810F348(ctx, base);
loc_881104F0:
	// lhz r10,0(r28)
	ctx.current_instruction = 0x881104F0;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8811056c
	if (!ctx.cr6.gt) goto loc_8811056C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x88110548
	if (!ctx.cr6.gt) goto loc_88110548;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_88110514:
	// lhz r10,6(r27)
	ctx.current_instruction = 0x88110514;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhzu r11,4(r27)
	ctx.current_instruction = 0x8811051C;
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8810e9e0
	ctx.lr = 0x88110530;
	sub_8810E9E0(ctx, base);
loc_88110530:
	// lhz r9,0(r28)
	ctx.current_instruction = 0x88110530;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x88110514
	if (ctx.cr6.lt) goto loc_88110514;
loc_88110548:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.current_instruction = 0x88110558;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.current_instruction = 0x8811055C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x8810ebb0
	ctx.lr = 0x8811056C;
	sub_8810EBB0(ctx, base);
loc_8811056C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x88050890
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881165D0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881165D0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881165D0) {
			switch (rex_dispatch_address) {
				case 0x881165D8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881165D0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881165D8: goto loc_881165D8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881165D8;
	__savegprlr_14(ctx, base);
loc_881165D8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stw r3,20(r1)
	ctx.current_instruction = 0x881165DC;
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8811660c
	if (ctx.cr6.eq) goto loc_8811660C;
	// lwz r10,112(r3)
	ctx.current_instruction = 0x881165E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,100(r3)
	ctx.current_instruction = 0x881165EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r9,-340(r1)
	ctx.current_instruction = 0x881165FC;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// addi r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 3;
	// stw r8,-328(r1)
	ctx.current_instruction = 0x88116604;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// b 0x88116630
	goto loc_88116630;
loc_8811660C:
	// lwz r5,100(r3)
	ctx.current_instruction = 0x8811660C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,112(r3)
	ctx.current_instruction = 0x88116610;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,100(r3)
	ctx.current_instruction = 0x8811661C;
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// addi r30,r5,2
	ctx.r30.s64 = ctx.r5.s64 + 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r9,-328(r1)
	ctx.current_instruction = 0x88116628;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r9.u32);
	// stw r11,-340(r1)
	ctx.current_instruction = 0x8811662C;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
loc_88116630:
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lwz r9,92(r3)
	ctx.current_instruction = 0x88116634;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r8,-30720
	ctx.r8.s64 = -2013265920;
	// stw r30,-256(r1)
	ctx.current_instruction = 0x8811663C;
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r30.u32);
	// lis r7,-30720
	ctx.r7.s64 = -2013265920;
	// stw r5,-252(r1)
	ctx.current_instruction = 0x88116644;
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// lis r6,-30720
	ctx.r6.s64 = -2013265920;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f8,23440(r11)
	ctx.current_instruction = 0x88116650;
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 23440);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f5,1488(r8)
	ctx.current_instruction = 0x88116658;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r8.u32 + 1488);
	// stw r28,-268(r1)
	ctx.current_instruction = 0x8811665C;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r28.u32);
	// lfd f7,12088(r7)
	ctx.current_instruction = 0x88116660;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + 12088);
	// lfd f6,8624(r6)
	ctx.current_instruction = 0x88116664;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8624);
	// ble cr6,0x8811702c
	if (!ctx.cr6.gt) goto loc_8811702C;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// fsub f11,f2,f1
	ctx.f11.f64 = ctx.f2.f64 - ctx.f1.f64;
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r11,-348(r1)
	ctx.current_instruction = 0x88116678;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
loc_8811667C:
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lwz r9,96(r3)
	ctx.current_instruction = 0x88116680;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// std r10,-280(r1)
	ctx.current_instruction = 0x88116688;
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r10.u64);
	// lfd f13,-280(r1)
	ctx.current_instruction = 0x8811668C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881166ac
	if (ctx.cr6.eq) goto loc_881166AC;
	// fsub f13,f3,f6
	ctx.f13.f64 = ctx.f3.f64 - ctx.f6.f64;
	// fmul f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64;
	// b 0x881166b0
	goto loc_881166B0;
loc_881166AC:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_881166B0:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x881166B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r7,100(r3)
	ctx.current_instruction = 0x881166BC;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	ctx.current_instruction = 0x881166C4;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881166C8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stw r9,-11900(r8)
	ctx.current_instruction = 0x881166D4;
	REX_STORE_U32(ctx.r8.u32 + -11900, ctx.r9.u32);
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// std r4,-264(r1)
	ctx.current_instruction = 0x881166DC;
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r4.u64);
	// lfd f10,-264(r1)
	ctx.current_instruction = 0x881166E0;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmsub f13,f13,f8,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f9.f64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,-352(r1)
	ctx.current_instruction = 0x881166F8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	ctx.current_instruction = 0x88116700;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x88116704;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r8,-324(r1)
	ctx.current_instruction = 0x88116714;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r8.u32);
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stw r4,-344(r1)
	ctx.current_instruction = 0x8811671C;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// ble cr6,0x88116d94
	if (!ctx.cr6.gt) goto loc_88116D94;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x88116724;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88116d90
	if (!ctx.cr6.lt) goto loc_88116D90;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88116734;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,-304(r1)
	ctx.current_instruction = 0x8811673C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88117018
	if (!ctx.cr6.gt) goto loc_88117018;
loc_88116748:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-296(r1)
	ctx.current_instruction = 0x88116750;
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f13.u64);
	// lwz r9,-292(r1)
	ctx.current_instruction = 0x88116754;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88116c50
	if (!ctx.cr6.gt) goto loc_88116C50;
	// lwz r10,80(r3)
	ctx.current_instruction = 0x88116760;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88116c4c
	if (!ctx.cr6.lt) goto loc_88116C4C;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// std r6,-200(r1)
	ctx.current_instruction = 0x88116780;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r5,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r11,-11900(r9)
	ctx.current_instruction = 0x88116794;
	REX_STORE_U32(ctx.r9.u32 + -11900, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r9,-2(r8)
	ctx.current_instruction = 0x881167A0;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,0(r8)
	ctx.current_instruction = 0x881167A8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// lbz r5,4(r8)
	ctx.current_instruction = 0x881167B0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r6,-2(r28)
	ctx.current_instruction = 0x881167B4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + -2);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,0(r28)
	ctx.current_instruction = 0x881167BC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// rotlwi r19,r11,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r25,r3,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,-2(r7)
	ctx.current_instruction = 0x881167C8;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -2);
	// lbz r31,2(r26)
	ctx.current_instruction = 0x881167CC;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r26.u32 + 2);
	// add r24,r9,r10
	ctx.r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r30,-2(r26)
	ctx.current_instruction = 0x881167D4;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r26.u32 + -2);
	// add r21,r11,r19
	ctx.r21.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r23,r31,r6
	ctx.r23.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lbz r29,2(r28)
	ctx.current_instruction = 0x881167E0;
	ctx.r29.u64 = REX_LOAD_U8(ctx.r28.u32 + 2);
	// add r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbz r4,0(r7)
	ctx.current_instruction = 0x881167E8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r22,r23,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,4(r28)
	ctx.current_instruction = 0x881167F0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r28.u32 + 4);
	// rlwinm r20,r24,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r23,2(r7)
	ctx.current_instruction = 0x881167F8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// subf r19,r27,r22
	ctx.r19.u64 = ctx.r22.u64 - ctx.r27.u64;
	// lbz r24,4(r7)
	ctx.current_instruction = 0x88116800;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// add r18,r3,r29
	ctx.r18.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbz r7,0(r26)
	ctx.current_instruction = 0x88116808;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// subf r3,r20,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r20.u64;
	// lbzx r22,r25,r8
	ctx.current_instruction = 0x88116810;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// lfd f13,-200(r1)
	ctx.current_instruction = 0x88116814;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// subf r26,r28,r19
	ctx.r26.u64 = ctx.r19.u64 - ctx.r28.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r20,r18,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r21,-272(r1)
	ctx.current_instruction = 0x88116828;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r21.u32);
	// subf r19,r29,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r29.u64;
	// lbz r8,2(r8)
	ctx.current_instruction = 0x88116830;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rlwinm r25,r26,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r23,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r23.u64;
	// rlwinm r21,r3,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r25,r24
	ctx.r19.u64 = ctx.r25.u64 + ctx.r24.u64;
	// subf r26,r22,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r22.u64;
	// subf r25,r3,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r3.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// subf r20,r4,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r4.u64;
	// rlwinm r3,r19,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r26,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r20,r6,r20
	ctx.r20.u64 = ctx.r20.u64 - ctx.r6.u64;
	// add r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r3,r26,r21
	ctx.r3.u64 = ctx.r26.u64 + ctx.r21.u64;
	// add r21,r20,r23
	ctx.r21.u64 = ctx.r20.u64 + ctx.r23.u64;
	// add r20,r7,r8
	ctx.r20.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r25,r3
	ctx.r3.u64 = ctx.r25.u64 + ctx.r3.u64;
	// add r25,r21,r28
	ctx.r25.u64 = ctx.r21.u64 + ctx.r28.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-296(r1)
	ctx.current_instruction = 0x88116880;
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f9.u64);
	// lwz r15,-292(r1)
	ctx.current_instruction = 0x88116884;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// mullw r26,r15,r15
	ctx.r26.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r15.s32);
	// srawi r26,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 8;
	// mulli r21,r20,13
	ctx.r21.s64 = static_cast<int64_t>(ctx.r20.u64 * static_cast<uint64_t>(13));
	// mullw r20,r26,r15
	ctx.r20.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r15.s32);
	// subf r21,r21,r3
	ctx.r21.u64 = ctx.r3.u64 - ctx.r21.u64;
	// rlwinm r3,r25,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r20.s32 >> 8;
	// srawi r14,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r21.s32 >> 1;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// subf r21,r7,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r7.u64;
	// subf r20,r30,r22
	ctx.r20.u64 = ctx.r22.u64 - ctx.r30.u64;
	// subf r18,r11,r10
	ctx.r18.u64 = ctx.r10.u64 - ctx.r11.u64;
	// std r27,-288(r1)
	ctx.current_instruction = 0x881168B8;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r27.u64);
	// rlwinm r17,r20,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-272(r1)
	ctx.current_instruction = 0x881168C0;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r18,r6,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r6.u64;
	// stw r17,-300(r1)
	ctx.current_instruction = 0x881168CC;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r17.u32);
	// subf r16,r31,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r31.u64;
	// stw r3,-320(r1)
	ctx.current_instruction = 0x881168D4;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r30,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r30.u64;
	// stw r19,-296(r1)
	ctx.current_instruction = 0x881168E0;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r19.u32);
	// subf r3,r5,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r5.u64;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r4,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r4.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// add r18,r18,r27
	ctx.r18.u64 = ctx.r18.u64 + ctx.r27.u64;
	// rlwinm r16,r3,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r17,r6,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r6.u64;
	// add r18,r18,r7
	ctx.r18.u64 = ctx.r18.u64 + ctx.r7.u64;
	// subf r3,r3,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r3.u64;
	// lwz r16,-320(r1)
	ctx.current_instruction = 0x8811690C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r17,r17,r27
	ctx.r17.u64 = ctx.r17.u64 + ctx.r27.u64;
	// stw r18,-320(r1)
	ctx.current_instruction = 0x88116914;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r18.u32);
	// lwz r27,-320(r1)
	ctx.current_instruction = 0x88116918;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r3
	ctx.r18.u64 = ctx.r16.u64 + ctx.r3.u64;
	// add r3,r17,r22
	ctx.r3.u64 = ctx.r17.u64 + ctx.r22.u64;
	// lwz r17,-300(r1)
	ctx.current_instruction = 0x88116928;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r19,r8,r31
	ctx.r19.u64 = ctx.r31.u64 - ctx.r8.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r4,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r3,-320(r1)
	ctx.current_instruction = 0x88116938;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// add r3,r20,r17
	ctx.r3.u64 = ctx.r20.u64 + ctx.r17.u64;
	// rlwinm r20,r19,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,-320(r1)
	ctx.current_instruction = 0x88116944;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// add r19,r19,r20
	ctx.r19.u64 = ctx.r19.u64 + ctx.r20.u64;
	// stw r17,-320(r1)
	ctx.current_instruction = 0x88116950;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r17.u32);
	// subf r20,r31,r16
	ctx.r20.u64 = ctx.r16.u64 - ctx.r31.u64;
	// mullw r17,r14,r26
	ctx.r17.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r26.s32);
	// stw r17,-316(r1)
	ctx.current_instruction = 0x8811695C;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r17.u32);
	// add r20,r20,r10
	ctx.r20.u64 = ctx.r20.u64 + ctx.r10.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,-300(r1)
	ctx.current_instruction = 0x88116968;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r20.u32);
	// rotlwi r20,r30,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// rotlwi r14,r27,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stw r27,-248(r1)
	ctx.current_instruction = 0x88116974;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r27.u32);
	// add r20,r30,r20
	ctx.r20.u64 = ctx.r30.u64 + ctx.r20.u64;
	// std r26,-248(r1)
	ctx.current_instruction = 0x8811697C;
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r26.u64);
	// add r19,r14,r19
	ctx.r19.u64 = ctx.r14.u64 + ctx.r19.u64;
	// rotlwi r14,r9,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r16,r11,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r19,r20,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r20.u64;
	// add r18,r18,r3
	ctx.r18.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r20,r9,r14
	ctx.r20.u64 = ctx.r14.u64 - ctx.r9.u64;
	// mulli r3,r16,11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// lwz r16,-320(r1)
	ctx.current_instruction = 0x8811699C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r27,-316(r1)
	ctx.current_instruction = 0x881169A0;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r18,r18,r3
	ctx.r18.u64 = ctx.r18.u64 + ctx.r3.u64;
	// subf r26,r23,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r23.u64;
	// rotlwi r17,r7,1
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r14,-300(r1)
	ctx.current_instruction = 0x881169B0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r16,r16,r28
	ctx.r16.u64 = ctx.r16.u64 + ctx.r28.u64;
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// subf r3,r29,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r29.u64;
	// rlwinm r23,r14,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r14,-316(r1)
	ctx.current_instruction = 0x881169C8;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r14.u32);
	// subf r14,r22,r26
	ctx.r14.u64 = ctx.r26.u64 - ctx.r22.u64;
	// lwz r26,-316(r1)
	ctx.current_instruction = 0x881169D0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r23,r26,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r26.u64;
	// lwz r26,-296(r1)
	ctx.current_instruction = 0x881169D8;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// rlwinm r22,r16,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r20
	ctx.r19.u64 = ctx.r19.u64 + ctx.r20.u64;
	// subf r17,r26,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r26.u64;
	// subf r16,r11,r7
	ctx.r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mullw r20,r18,r25
	ctx.r20.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r25.s32);
	// subf r18,r9,r14
	ctx.r18.u64 = ctx.r14.u64 - ctx.r9.u64;
	// add r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 + ctx.r23.u64;
	// mulli r23,r16,11
	ctx.r23.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(11));
	// subf r18,r10,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r10.u64;
	// add r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 + ctx.r23.u64;
	// add r22,r18,r30
	ctx.r22.u64 = ctx.r18.u64 + ctx.r30.u64;
	// lwz r18,-324(r1)
	ctx.current_instruction = 0x88116A10;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r30,r9,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r9.u64;
	// srawi r26,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r19.s32 >> 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r3,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-296(r1)
	ctx.current_instruction = 0x88116A24;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r30.u32);
	// subf r14,r4,r17
	ctx.r14.u64 = ctx.r17.u64 - ctx.r4.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// add r17,r27,r20
	ctx.r17.u64 = ctx.r27.u64 + ctx.r20.u64;
	// ld r27,-288(r1)
	ctx.current_instruction = 0x88116A34;
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// subf r23,r11,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r3,-316(r1)
	ctx.current_instruction = 0x88116A40;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r3.u32);
	// add r3,r22,r5
	ctx.r3.u64 = ctx.r22.u64 + ctx.r5.u64;
	// subf r23,r6,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r6.u64;
	// add r22,r3,r29
	ctx.r22.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r3,r8,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r8.u64;
	// mullw r20,r26,r15
	ctx.r20.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r15.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r19,r10,r29
	ctx.r19.u64 = ctx.r29.u64 - ctx.r10.u64;
	// lwz r26,-296(r1)
	ctx.current_instruction = 0x88116A60;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r27,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r27.u64;
	// subf r23,r5,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r5.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r30,r31,r26
	ctx.r30.u64 = ctx.r26.u64 - ctx.r31.u64;
	// ld r26,-248(r1)
	ctx.current_instruction = 0x88116A84;
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r23,r8
	ctx.r31.u64 = ctx.r23.u64 + ctx.r8.u64;
	// subf r23,r8,r19
	ctx.r23.u64 = ctx.r19.u64 - ctx.r8.u64;
	// add r22,r22,r3
	ctx.r22.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// rlwinm r3,r21,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r7,r30
	ctx.r19.u64 = ctx.r30.u64 - ctx.r7.u64;
	// subf r23,r9,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r9.u64;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r21,r3
	ctx.r3.u64 = ctx.r21.u64 + ctx.r3.u64;
	// subf r22,r27,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r27.u64;
	// subf r23,r28,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r28.u64;
	// subf r31,r10,r19
	ctx.r31.u64 = ctx.r19.u64 - ctx.r10.u64;
	// srawi r16,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r14.s32 >> 1;
	// lwz r14,-272(r1)
	ctx.current_instruction = 0x88116AC0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// rotlwi r27,r29,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r28,r28,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r28.u64;
	// add r19,r17,r20
	ctx.r19.u64 = ctx.r17.u64 + ctx.r20.u64;
	// add r30,r23,r7
	ctx.r30.u64 = ctx.r23.u64 + ctx.r7.u64;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r20,r16,8,0,23
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r16,-316(r1)
	ctx.current_instruction = 0x88116AE4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// rotlwi r22,r10,3
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// subf r24,r27,r3
	ctx.r24.u64 = ctx.r3.u64 - ctx.r27.u64;
	// rotlwi r29,r8,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r27,r10,r22
	ctx.r27.u64 = ctx.r22.u64 - ctx.r10.u64;
	// srawi r23,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r16.s32 >> 1;
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r28,r28,r6
	ctx.r28.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r21,r19,r20
	ctx.r21.u64 = ctx.r19.u64 + ctx.r20.u64;
	// add r22,r29,r9
	ctx.r22.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// mullw r20,r23,r26
	ctx.r20.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r26.s32);
	// subf r24,r9,r11
	ctx.r24.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r29,r3,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r31,r6
	ctx.r19.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mullw r28,r28,r25
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// add r23,r30,r6
	ctx.r23.u64 = ctx.r30.u64 + ctx.r6.u64;
	// subf r31,r10,r24
	ctx.r31.u64 = ctx.r24.u64 - ctx.r10.u64;
	// rlwinm r24,r22,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r20,r28
	ctx.r30.u64 = ctx.r20.u64 + ctx.r28.u64;
	// add r20,r31,r6
	ctx.r20.u64 = ctx.r31.u64 + ctx.r6.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// subf r6,r14,r24
	ctx.r6.u64 = ctx.r24.u64 - ctx.r14.u64;
	// add r22,r3,r29
	ctx.r22.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mullw r3,r19,r15
	ctx.r3.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r15.s32);
	// mullw r29,r23,r25
	ctx.r29.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// subf r23,r5,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r5.u64;
	// mullw r28,r27,r26
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// lwz r27,-344(r1)
	ctx.current_instruction = 0x88116B68;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r24,r30,r3
	ctx.r24.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r30,r28,r29
	ctx.r30.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r22
	ctx.r31.u64 = ctx.r22.u64 - ctx.r9.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r10,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// srawi r6,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r23.s32 >> 1;
	// mullw r3,r20,r15
	ctx.r3.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r15.s32);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mullw r30,r5,r25
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// mullw r29,r6,r26
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mullw r5,r24,r27
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r27.s32);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// mullw r19,r21,r18
	ctx.r19.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r18.s32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r31,r19,r5
	ctx.r31.u64 = ctx.r19.u64 + ctx.r5.u64;
	// lwz r5,-308(r1)
	ctx.current_instruction = 0x88116BD4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r11,r8,r15
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r15.s32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r3,r3,r5
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88116c14
	if (!ctx.cr6.gt) goto loc_88116C14;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88116c20
	goto loc_88116C20;
loc_88116C14:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_88116C20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-348(r1)
	ctx.current_instruction = 0x88116C24;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88116C28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r29,16
	ctx.r29.s64 = 16;
	// lwz r5,-252(r1)
	ctx.current_instruction = 0x88116C30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r30,-256(r1)
	ctx.current_instruction = 0x88116C34;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r31,-304(r1)
	ctx.current_instruction = 0x88116C38;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r28,-268(r1)
	ctx.current_instruction = 0x88116C3C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r7,-352(r1)
	ctx.current_instruction = 0x88116C40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stb r10,2(r11)
	ctx.current_instruction = 0x88116C44;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x88116d70
	goto loc_88116D70;
loc_88116C4C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_88116C50:
	// beq cr6,0x88116cdc
	if (ctx.cr6.eq) goto loc_88116CDC;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88116C54;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88116cdc
	if (ctx.cr6.lt) goto loc_88116CDC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88116cd4
	if (!ctx.cr6.gt) goto loc_88116CD4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88116cd4
	if (!ctx.cr6.lt) goto loc_88116CD4;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// std r4,-240(r1)
	ctx.current_instruction = 0x88116C84;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r4.u64);
	// lfd f13,-240(r1)
	ctx.current_instruction = 0x88116C88;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-11900(r9)
	ctx.current_instruction = 0x88116C94;
	REX_STORE_U32(ctx.r9.u32 + -11900, ctx.r10.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x88116C9C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r4,r8,r7
	ctx.current_instruction = 0x88116CA4;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// lbzx r6,r6,r10
	ctx.current_instruction = 0x88116CAC;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-208(r1)
	ctx.current_instruction = 0x88116CB8;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f9.u64);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,2(r11)
	ctx.current_instruction = 0x88116CCC;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x88116d70
	goto loc_88116D70;
loc_88116CD4:
	// stb r29,2(r11)
	ctx.current_instruction = 0x88116CD4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// b 0x88116d70
	goto loc_88116D70;
loc_88116CDC:
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88116CE0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r9,-30678
	ctx.r9.s64 = -2010513408;
	// std r4,-232(r1)
	ctx.current_instruction = 0x88116CF0;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r4.u64);
	// lfd f13,-232(r1)
	ctx.current_instruction = 0x88116CF4;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r10,-11900(r9)
	ctx.current_instruction = 0x88116CFC;
	REX_STORE_U32(ctx.r9.u32 + -11900, ctx.r10.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x88116D0C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,2(r10)
	ctx.current_instruction = 0x88116D14;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x88116D18;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbz r6,0(r9)
	ctx.current_instruction = 0x88116D1C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r27,2(r9)
	ctx.current_instruction = 0x88116D20;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	ctx.current_instruction = 0x88116D2C;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// subf r6,r6,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r6.u64;
	// lwz r27,-284(r1)
	ctx.current_instruction = 0x88116D34;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r27.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r6,r6,r27
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// subfic r26,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r26.u64 = static_cast<uint64_t>(256) - ctx.r27.u64;
	// subf r10,r10,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,2(r11)
	ctx.current_instruction = 0x88116D6C;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
loc_88116D70:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88116D70;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r31,-304(r1)
	ctx.current_instruction = 0x88116D7C;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r31.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// stw r11,-348(r1)
	ctx.current_instruction = 0x88116D84;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// blt cr6,0x88116748
	if (ctx.cr6.lt) goto loc_88116748;
	// b 0x88117018
	goto loc_88117018;
loc_88116D90:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_88116D94:
	// blt cr6,0x88116f08
	if (ctx.cr6.lt) goto loc_88116F08;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x88116D98;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88116f08
	if (!ctx.cr6.lt) goto loc_88116F08;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88116DA8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88117018
	if (!ctx.cr6.gt) goto loc_88117018;
loc_88116DB8:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-288(r1)
	ctx.current_instruction = 0x88116DC0;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f13.u64);
	// lwz r10,-284(r1)
	ctx.current_instruction = 0x88116DC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88116eec
	if (ctx.cr6.lt) goto loc_88116EEC;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88116DD0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88116e78
	if (!ctx.cr6.lt) goto loc_88116E78;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r4,-336(r1)
	ctx.current_instruction = 0x88116DF0;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// stw r9,-11900(r10)
	ctx.current_instruction = 0x88116DF4;
	REX_STORE_U32(ctx.r10.u32 + -11900, ctx.r9.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r8,r8,r7
	ctx.current_instruction = 0x88116E00;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,2(r10)
	ctx.current_instruction = 0x88116E08;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x88116E0C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbz r6,0(r9)
	ctx.current_instruction = 0x88116E10;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r27,2(r9)
	ctx.current_instruction = 0x88116E14;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lfd f13,-336(r1)
	ctx.current_instruction = 0x88116E1C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// subf r6,r6,r27
	ctx.r6.u64 = ctx.r27.u64 - ctx.r6.u64;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// add r27,r6,r8
	ctx.r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	ctx.current_instruction = 0x88116E38;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// lwz r26,-284(r1)
	ctx.current_instruction = 0x88116E3C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// mullw r6,r4,r26
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r27,r26
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// subfic r27,r26,256
	ctx.xer.ca = ctx.r26.u32 <= 256;
	ctx.r27.u64 = static_cast<uint64_t>(256) - ctx.r26.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,2(r11)
	ctx.current_instruction = 0x88116E70;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// b 0x88116ef0
	goto loc_88116EF0;
loc_88116E78:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88116eec
	if (!ctx.cr6.gt) goto loc_88116EEC;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88116E80;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88116eec
	if (!ctx.cr6.lt) goto loc_88116EEC;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r4,-224(r1)
	ctx.current_instruction = 0x88116E9C;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r4.u64);
	// lfd f13,-224(r1)
	ctx.current_instruction = 0x88116EA0;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-11900(r10)
	ctx.current_instruction = 0x88116EAC;
	REX_STORE_U32(ctx.r10.u32 + -11900, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x88116EB4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r4,r8,r7
	ctx.current_instruction = 0x88116EBC;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// lbzx r6,r6,r10
	ctx.current_instruction = 0x88116EC4;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-208(r1)
	ctx.current_instruction = 0x88116ED0;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f9.u64);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,2(r11)
	ctx.current_instruction = 0x88116EE4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x88116ef0
	goto loc_88116EF0;
loc_88116EEC:
	// stb r29,2(r11)
	ctx.current_instruction = 0x88116EEC;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
loc_88116EF0:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88116EF0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88116db8
	if (ctx.cr6.lt) goto loc_88116DB8;
	// b 0x88117014
	goto loc_88117014;
loc_88116F08:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88116ff0
	if (!ctx.cr6.gt) goto loc_88116FF0;
	// lwz r9,84(r3)
	ctx.current_instruction = 0x88116F10;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88116ff0
	if (!ctx.cr6.lt) goto loc_88116FF0;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88116F1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88117018
	if (!ctx.cr6.gt) goto loc_88117018;
loc_88116F2C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-288(r1)
	ctx.current_instruction = 0x88116F34;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f13.u64);
	// lwz r10,-284(r1)
	ctx.current_instruction = 0x88116F38;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88116fd4
	if (ctx.cr6.lt) goto loc_88116FD4;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x88116F44;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88116fb0
	if (!ctx.cr6.lt) goto loc_88116FB0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// std r4,-216(r1)
	ctx.current_instruction = 0x88116F64;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r4.u64);
	// lfd f13,-216(r1)
	ctx.current_instruction = 0x88116F68;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// stw r9,-11900(r10)
	ctx.current_instruction = 0x88116F74;
	REX_STORE_U32(ctx.r10.u32 + -11900, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r9,r8,r7
	ctx.current_instruction = 0x88116F7C;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbz r8,2(r10)
	ctx.current_instruction = 0x88116F80;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	ctx.current_instruction = 0x88116F88;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// lwz r4,-284(r1)
	ctx.current_instruction = 0x88116F8C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// subfic r31,r4,256
	ctx.xer.ca = ctx.r4.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r4.u64;
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,2(r11)
	ctx.current_instruction = 0x88116FA8;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// b 0x88116fd8
	goto loc_88116FD8;
loc_88116FB0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88116fd4
	if (!ctx.cr6.gt) goto loc_88116FD4;
	// lwz r9,80(r3)
	ctx.current_instruction = 0x88116FB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88116fd4
	if (!ctx.cr6.lt) goto loc_88116FD4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r10,r7
	ctx.current_instruction = 0x88116FC8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stb r9,2(r11)
	ctx.current_instruction = 0x88116FCC;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x88116fd8
	goto loc_88116FD8;
loc_88116FD4:
	// stb r29,2(r11)
	ctx.current_instruction = 0x88116FD4;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
loc_88116FD8:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88116FD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88116f2c
	if (ctx.cr6.lt) goto loc_88116F2C;
	// b 0x88117014
	goto loc_88117014;
loc_88116FF0:
	// lwz r9,88(r3)
	ctx.current_instruction = 0x88116FF0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88117018
	if (!ctx.cr6.gt) goto loc_88117018;
loc_88117000:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r29,2(r11)
	ctx.current_instruction = 0x88117004;
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r29.u8);
	ctx.r11.u32 = ea;
	// lwz r9,88(r3)
	ctx.current_instruction = 0x88117008;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x88117000
	if (ctx.cr6.lt) goto loc_88117000;
loc_88117014:
	// stw r11,-348(r1)
	ctx.current_instruction = 0x88117014;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
loc_88117018:
	// lwz r10,92(r3)
	ctx.current_instruction = 0x88117018;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r28,-268(r1)
	ctx.current_instruction = 0x88117020;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r28.u32);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8811667c
	if (ctx.cr6.lt) goto loc_8811667C;
loc_8811702C:
	// lwz r11,92(r3)
	ctx.current_instruction = 0x8811702C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,-268(r1)
	ctx.current_instruction = 0x88117034;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881181a0
	if (!ctx.cr6.gt) goto loc_881181A0;
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// lwz r9,-328(r1)
	ctx.current_instruction = 0x88117044;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r8,-340(r1)
	ctx.current_instruction = 0x88117048;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stw r11,-328(r1)
	ctx.current_instruction = 0x88117058;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// lfd f0,12296(r10)
	ctx.current_instruction = 0x8811705C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12296);
	// lis r10,-30720
	ctx.r10.s64 = -2013265920;
	// fmul f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stw r9,-340(r1)
	ctx.current_instruction = 0x88117068;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// lfd f11,17600(r10)
	ctx.current_instruction = 0x8811706C;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 17600);
	// fsub f9,f2,f10
	ctx.f9.f64 = ctx.f2.f64 - ctx.f10.f64;
loc_88117074:
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// lwz r8,96(r3)
	ctx.current_instruction = 0x88117078;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// std r10,-216(r1)
	ctx.current_instruction = 0x88117080;
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r10.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f13,-216(r1)
	ctx.current_instruction = 0x88117088;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x881170a4
	if (ctx.cr6.eq) goto loc_881170A4;
	// fsub f13,f3,f6
	ctx.f13.f64 = ctx.f3.f64 - ctx.f6.f64;
	// fmul f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64;
	// b 0x881170a8
	goto loc_881170A8;
loc_881170A4:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_881170A8:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	ctx.current_instruction = 0x881170B4;
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r10,-308(r1)
	ctx.current_instruction = 0x881170B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// stw r8,-11900(r7)
	ctx.current_instruction = 0x881170C8;
	REX_STORE_U32(ctx.r7.u32 + -11900, ctx.r8.u32);
	// std r6,-224(r1)
	ctx.current_instruction = 0x881170CC;
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// lfd f2,-224(r1)
	ctx.current_instruction = 0x881170D0;
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// fmsub f13,f13,f8,f1
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f1.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x881170E0;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r25,-332(r1)
	ctx.current_instruction = 0x881170E4;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// mullw r4,r25,r25
	ctx.r4.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r25.s32);
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// mullw r7,r8,r25
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// stw r8,-300(r1)
	ctx.current_instruction = 0x881170F4;
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stw r6,-248(r1)
	ctx.current_instruction = 0x881170FC;
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// ble cr6,0x88117da8
	if (!ctx.cr6.gt) goto loc_88117DA8;
	// lwz r8,84(r3)
	ctx.current_instruction = 0x88117104;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88117da4
	if (!ctx.cr6.lt) goto loc_88117DA4;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88117114;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x8811711C;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8811818c
	if (!ctx.cr6.gt) goto loc_8811818C;
loc_88117128:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x88117134;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x88117138;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88117b88
	if (!ctx.cr6.gt) goto loc_88117B88;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x88117144;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88117b84
	if (!ctx.cr6.lt) goto loc_88117B84;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,-308(r1)
	ctx.current_instruction = 0x88117160;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// std r6,-232(r1)
	ctx.current_instruction = 0x88117170;
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r6.u64);
	// stw r11,-11900(r8)
	ctx.current_instruction = 0x88117174;
	REX_STORE_U32(ctx.r8.u32 + -11900, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,-304(r1)
	ctx.current_instruction = 0x88117194;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r10,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r5
	ctx.current_instruction = 0x881171A4;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,-232(r1)
	ctx.current_instruction = 0x881171AC;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r26,r9,r8
	ctx.current_instruction = 0x881171B8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r5,-4(r30)
	ctx.current_instruction = 0x881171C0;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + -4);
	// lbzx r27,r31,r8
	ctx.current_instruction = 0x881171C4;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,-4(r8)
	ctx.current_instruction = 0x881171CC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + -4);
	// add r23,r26,r5
	ctx.r23.u64 = ctx.r26.u64 + ctx.r5.u64;
	// lbz r9,0(r30)
	ctx.current_instruction = 0x881171D4;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,4(r30)
	ctx.current_instruction = 0x881171E0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r24,-4(r6)
	ctx.current_instruction = 0x881171E4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r6.u32 + -4);
	// add r21,r10,r9
	ctx.r21.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r22,r7,4
	ctx.r22.s64 = ctx.r7.s64 + 4;
	// lbz r31,0(r6)
	ctx.current_instruction = 0x881171F0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r23,8(r30)
	ctx.current_instruction = 0x881171F4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r24.u64;
	// rlwinm r20,r21,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r21,4(r6)
	ctx.current_instruction = 0x88117200;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// add r19,r4,r28
	ctx.r19.u64 = ctx.r4.u64 + ctx.r28.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,8(r8)
	ctx.current_instruction = 0x88117210;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// subf r6,r23,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r23.u64;
	// subf r4,r20,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r20.u64;
	// lbzx r20,r29,r8
	ctx.current_instruction = 0x8811721C;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// rlwinm r3,r19,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,4(r8)
	ctx.current_instruction = 0x88117228;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// lbzx r22,r22,r8
	ctx.current_instruction = 0x88117230;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r22.u32 + ctx.r8.u32);
	// subf r3,r21,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r21.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r4,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x88117244;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// subf r3,r22,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r22.u64;
	// add r18,r6,r20
	ctx.r18.u64 = ctx.r6.u64 + ctx.r20.u64;
	// lbzx r6,r29,r8
	ctx.current_instruction = 0x88117250;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r8.u32);
	// subf r8,r4,r19
	ctx.r8.u64 = ctx.r19.u64 - ctx.r4.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r18,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mulli r4,r3,13
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(13));
	// subf r19,r4,r8
	ctx.r19.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r8,-332(r1)
	ctx.current_instruction = 0x8811727C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// addze r8,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r4,r8,r8
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r29,r4,r8
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r14,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r19.s32 >> 1;
	// subf r19,r28,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r28.u64;
	// subf r18,r11,r9
	ctx.r18.u64 = ctx.r9.u64 - ctx.r11.u64;
	// std r25,-240(r1)
	ctx.current_instruction = 0x881172A4;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r25.u64);
	// add r17,r11,r3
	ctx.r17.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r24,-336(r1)
	ctx.current_instruction = 0x881172AC;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r24.u64);
	// subf r18,r5,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r5.u64;
	// stw r17,-348(r1)
	ctx.current_instruction = 0x881172B4;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r17.u32);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r18,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r27,r22
	ctx.r18.u64 = ctx.r22.u64 - ctx.r27.u64;
	// subf r17,r31,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r31.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// add r15,r17,r24
	ctx.r15.u64 = ctx.r17.u64 + ctx.r24.u64;
	// rlwinm r17,r18,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r5,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r5.u64;
	// stw r17,-352(r1)
	ctx.current_instruction = 0x881172D8;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r17.u32);
	// subf r17,r11,r7
	ctx.r17.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r19,r3,r21
	ctx.r19.u64 = ctx.r3.u64 + ctx.r21.u64;
	// mulli r17,r17,11
	ctx.r17.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881172E8;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// add r3,r19,r23
	ctx.r3.u64 = ctx.r19.u64 + ctx.r23.u64;
	// subf r19,r7,r26
	ctx.r19.u64 = ctx.r26.u64 - ctx.r7.u64;
	// add r16,r15,r6
	ctx.r16.u64 = ctx.r15.u64 + ctx.r6.u64;
	// rlwinm r15,r19,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r15
	ctx.r19.u64 = ctx.r19.u64 + ctx.r15.u64;
	// lwz r15,-348(r1)
	ctx.current_instruction = 0x88117304;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r25,r31,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r31.u64;
	// stw r17,-296(r1)
	ctx.current_instruction = 0x8811730C;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r17.u32);
	// stw r19,-324(r1)
	ctx.current_instruction = 0x88117310;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r19.u32);
	// subf r19,r26,r6
	ctx.r19.u64 = ctx.r6.u64 - ctx.r26.u64;
	// subf r16,r26,r25
	ctx.r16.u64 = ctx.r25.u64 - ctx.r26.u64;
	// rlwinm r17,r3,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r30,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r30.u64;
	// stw r16,-316(r1)
	ctx.current_instruction = 0x88117324;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r16.u32);
	// subf r16,r20,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r20.u64;
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x8811732C;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r17,r16,r24
	ctx.r17.u64 = ctx.r16.u64 + ctx.r24.u64;
	// rlwinm r16,r3,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r19,r27,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subf r3,r3,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r3.u64;
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x88117344;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r30,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r30.u64;
	// add r3,r17,r3
	ctx.r3.u64 = ctx.r17.u64 + ctx.r3.u64;
	// stw r16,-352(r1)
	ctx.current_instruction = 0x88117358;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r16.u32);
	// subf r16,r5,r19
	ctx.r16.u64 = ctx.r19.u64 - ctx.r5.u64;
	// add r17,r18,r25
	ctx.r17.u64 = ctx.r18.u64 + ctx.r25.u64;
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// add r3,r3,r17
	ctx.r3.u64 = ctx.r3.u64 + ctx.r17.u64;
	// rotlwi r19,r6,1
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwz r25,-296(r1)
	ctx.current_instruction = 0x88117370;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r16,r16,r22
	ctx.r16.u64 = ctx.r16.u64 + ctx.r22.u64;
	// lwz r17,-324(r1)
	ctx.current_instruction = 0x88117378;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// rotlwi r18,r27,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// add r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 + ctx.r9.u64;
	// add r17,r25,r17
	ctx.r17.u64 = ctx.r25.u64 + ctx.r17.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r27,r18
	ctx.r18.u64 = ctx.r27.u64 + ctx.r18.u64;
	// rotlwi r25,r10,3
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r18,r18,r17
	ctx.r18.u64 = ctx.r17.u64 - ctx.r18.u64;
	// subf r17,r10,r25
	ctx.r17.u64 = ctx.r25.u64 - ctx.r10.u64;
	// mullw r14,r14,r4
	ctx.r14.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// stw r14,-324(r1)
	ctx.current_instruction = 0x881173A0;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r14.u32);
	// lwz r24,-352(r1)
	ctx.current_instruction = 0x881173A4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// lwz r24,-316(r1)
	ctx.current_instruction = 0x881173AC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// stw r3,-352(r1)
	ctx.current_instruction = 0x881173B4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// add r3,r24,r9
	ctx.r3.u64 = ctx.r24.u64 + ctx.r9.u64;
	// lwz r24,-352(r1)
	ctx.current_instruction = 0x881173BC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// srawi r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	// stw r19,-352(r1)
	ctx.current_instruction = 0x881173C4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r19.u32);
	// subf r19,r20,r16
	ctx.r19.u64 = ctx.r16.u64 - ctx.r20.u64;
	// lwz r16,-352(r1)
	ctx.current_instruction = 0x881173CC;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r31,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r31.u64;
	// rlwinm r25,r3,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r19,r19,r23
	ctx.r19.u64 = ctx.r19.u64 + ctx.r23.u64;
	// mullw r16,r24,r29
	ctx.r16.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// stw r19,-352(r1)
	ctx.current_instruction = 0x881173E4;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r19.u32);
	// subf r14,r15,r17
	ctx.r14.u64 = ctx.r17.u64 - ctx.r15.u64;
	// stw r16,-296(r1)
	ctx.current_instruction = 0x881173EC;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r16.u32);
	// subf r3,r3,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r3.u64;
	// lwz r15,-300(r1)
	ctx.current_instruction = 0x881173F4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r19,r28,r21
	ctx.r19.u64 = ctx.r21.u64 - ctx.r28.u64;
	// stw r3,-344(r1)
	ctx.current_instruction = 0x881173FC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// subf r17,r11,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r25,-324(r1)
	ctx.current_instruction = 0x88117408;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r21,r21,r31
	ctx.r21.u64 = ctx.r31.u64 - ctx.r21.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// stw r15,-344(r1)
	ctx.current_instruction = 0x88117414;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r15.u32);
	// mulli r15,r17,11
	ctx.r15.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(11));
	// subf r22,r22,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r22.u64;
	// mullw r17,r18,r8
	ctx.r17.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r8.s32);
	// lwz r16,-352(r1)
	ctx.current_instruction = 0x88117424;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r24,-296(r1)
	ctx.current_instruction = 0x88117428;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r10,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r10.u64;
	// add r3,r16,r3
	ctx.r3.u64 = ctx.r16.u64 + ctx.r3.u64;
	// rlwinm r16,r19,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + ctx.r15.u64;
	// add r19,r19,r16
	ctx.r19.u64 = ctx.r19.u64 + ctx.r16.u64;
	// subf r15,r10,r27
	ctx.r15.u64 = ctx.r27.u64 - ctx.r10.u64;
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r3,r9,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r9.u64;
	// add r18,r25,r24
	ctx.r18.u64 = ctx.r25.u64 + ctx.r24.u64;
	// ld r24,-336(r1)
	ctx.current_instruction = 0x88117454;
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r22,r3,r27
	ctx.r22.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r27,r9,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r9.u64;
	// stw r27,-352(r1)
	ctx.current_instruction = 0x88117460;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r27.u32);
	// srawi r14,r14,1
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r14.s32 >> 1;
	// subf r16,r11,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r3,r6,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r21,r7,r11
	ctx.r21.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 + ctx.r17.u64;
	// subf r16,r5,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r5.u64;
	// rlwinm r17,r14,8,0,23
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r21,r3
	ctx.r27.u64 = ctx.r21.u64 + ctx.r3.u64;
	// add r22,r22,r30
	ctx.r22.u64 = ctx.r22.u64 + ctx.r30.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r22,r28
	ctx.r22.u64 = ctx.r22.u64 + ctx.r28.u64;
	// rlwinm r21,r27,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r24,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r24.u64;
	// add r17,r18,r17
	ctx.r17.u64 = ctx.r18.u64 + ctx.r17.u64;
	// subf r18,r30,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r30.u64;
	// add r21,r27,r21
	ctx.r21.u64 = ctx.r27.u64 + ctx.r21.u64;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r18,r7
	ctx.r27.u64 = ctx.r18.u64 + ctx.r7.u64;
	// lwz r14,-352(r1)
	ctx.current_instruction = 0x881174B0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// subf r16,r26,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r26.u64;
	// subf r26,r26,r15
	ctx.r26.u64 = ctx.r15.u64 - ctx.r26.u64;
	// subf r18,r7,r16
	ctx.r18.u64 = ctx.r16.u64 - ctx.r7.u64;
	// subf r21,r6,r26
	ctx.r21.u64 = ctx.r26.u64 - ctx.r6.u64;
	// add r16,r27,r23
	ctx.r16.u64 = ctx.r27.u64 + ctx.r23.u64;
	// rotlwi r26,r28,2
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// subf r27,r9,r21
	ctx.r27.u64 = ctx.r21.u64 - ctx.r9.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r22,r16,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r10,r18
	ctx.r18.u64 = ctx.r18.u64 - ctx.r10.u64;
	// rotlwi r16,r9,3
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r21,r23,r18
	ctx.r21.u64 = ctx.r18.u64 - ctx.r23.u64;
	// add r26,r27,r31
	ctx.r26.u64 = ctx.r27.u64 + ctx.r31.u64;
	// subf r28,r28,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r28.u64;
	// subf r24,r23,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r23.u64;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r9,r16
	ctx.r22.u64 = ctx.r16.u64 - ctx.r9.u64;
	// add r23,r21,r6
	ctx.r23.u64 = ctx.r21.u64 + ctx.r6.u64;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// add r24,r24,r20
	ctx.r24.u64 = ctx.r24.u64 + ctx.r20.u64;
	// add r3,r23,r30
	ctx.r3.u64 = ctx.r23.u64 + ctx.r30.u64;
	// add r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 + ctx.r7.u64;
	// add r23,r24,r5
	ctx.r23.u64 = ctx.r24.u64 + ctx.r5.u64;
	// srawi r22,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r19.s32 >> 1;
	// add r21,r28,r27
	ctx.r21.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r24,r26,r11
	ctx.r24.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r14,-344(r1)
	ctx.current_instruction = 0x8811752C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r18,-248(r1)
	ctx.current_instruction = 0x88117534;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// subf r20,r10,r11
	ctx.r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// ld r25,-240(r1)
	ctx.current_instruction = 0x8811753C;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// mullw r28,r23,r29
	ctx.r28.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// rotlwi r27,r7,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r23,r24,r5
	ctx.r23.u64 = ctx.r24.u64 + ctx.r5.u64;
	// mullw r3,r22,r4
	ctx.r3.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r4.s32);
	// mullw r19,r17,r14
	ctx.r19.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r14.s32);
	// add r17,r26,r5
	ctx.r17.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r22,r27,r10
	ctx.r22.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r24,r9,r20
	ctx.r24.u64 = ctx.r20.u64 - ctx.r9.u64;
	// srawi r21,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 1;
	// add r27,r3,r28
	ctx.r27.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mullw r26,r23,r8
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r8.s32);
	// lwz r23,-348(r1)
	ctx.current_instruction = 0x8811756C;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r24,r5
	ctx.r5.u64 = ctx.r24.u64 + ctx.r5.u64;
	// mullw r3,r21,r4
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// mullw r28,r17,r29
	ctx.r28.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r29.s32);
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mullw r27,r5,r8
	ctx.r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r26,r18
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r18.s32);
	// subf r3,r7,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r28,r19,r5
	ctx.r28.u64 = ctx.r19.u64 + ctx.r5.u64;
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r24,r3,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// subf r24,r30,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r30.u64;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r26,r23,r24
	ctx.r26.u64 = ctx.r24.u64 - ctx.r23.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mullw r27,r27,r25
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r25.s32);
	// srawi r30,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r5.s32 >> 1;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mullw r5,r3,r29
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// mullw r27,r30,r4
	ctx.r27.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// subf r3,r9,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// mullw r6,r31,r18
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r18.s32);
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// subf r3,r10,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r9,r5,r25
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// srawi r7,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88117634
	if (!ctx.cr6.gt) goto loc_88117634;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88117640
	goto loc_88117640;
loc_88117634:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_88117640:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-340(r1)
	ctx.current_instruction = 0x88117644;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r9,-304(r1)
	ctx.current_instruction = 0x88117648;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r5,-256(r1)
	ctx.current_instruction = 0x88117650;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r6,-340(r1)
	ctx.current_instruction = 0x88117658;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// stb r10,4(r11)
	ctx.current_instruction = 0x8811765C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.current_instruction = 0x88117660;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r10,-4(r7)
	ctx.current_instruction = 0x88117664;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + -4);
	// lbz r6,4(r7)
	ctx.current_instruction = 0x88117668;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lwz r22,80(r11)
	ctx.current_instruction = 0x8811766C;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r22,2
	ctx.r3.s64 = ctx.r22.s64 + 2;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r7)
	ctx.current_instruction = 0x88117678;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r22,-2
	ctx.r31.s64 = ctx.r22.s64 + -2;
	// lbz r30,8(r7)
	ctx.current_instruction = 0x88117680;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r3,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r9,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lbzx r26,r5,r7
	ctx.current_instruction = 0x88117690;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r22,4
	ctx.r23.s64 = ctx.r22.s64 + 4;
	// add r21,r9,r7
	ctx.r21.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r20,r20,r7
	ctx.current_instruction = 0x881176A4;
	ctx.r20.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r7.u32);
	// lbz r9,0(r19)
	ctx.current_instruction = 0x881176A8;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r19.u32 + 0);
	// rlwinm r17,r23,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r27,r5,r7
	ctx.current_instruction = 0x881176B0;
	ctx.r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r16,r22,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r10,r9
	ctx.r22.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,-4(r19)
	ctx.current_instruction = 0x881176BC;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r19.u32 + -4);
	// lbz r28,4(r19)
	ctx.current_instruction = 0x881176C0;
	ctx.r28.u64 = REX_LOAD_U8(ctx.r19.u32 + 4);
	// lbz r24,-4(r21)
	ctx.current_instruction = 0x881176C4;
	ctx.r24.u64 = REX_LOAD_U8(ctx.r21.u32 + -4);
	// rlwinm r15,r22,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r22,r17,r7
	ctx.current_instruction = 0x881176CC;
	ctx.r22.u64 = REX_LOAD_U8(ctx.r17.u32 + ctx.r7.u32);
	// lbzx r7,r16,r7
	ctx.current_instruction = 0x881176D0;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r7.u32);
	// lbz r23,8(r19)
	ctx.current_instruction = 0x881176D4;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r19.u32 + 8);
	// subf r19,r28,r9
	ctx.r19.u64 = ctx.r9.u64 - ctx.r28.u64;
	// rotlwi r31,r11,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r17,r26,r5
	ctx.r17.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r31,0(r21)
	ctx.current_instruction = 0x881176E8;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// lbz r21,4(r21)
	ctx.current_instruction = 0x881176EC;
	ctx.r21.u64 = REX_LOAD_U8(ctx.r21.u32 + 4);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf r17,r24,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r24.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r23,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r23.u64;
	// subf r19,r31,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r31.u64;
	// subf r14,r21,r3
	ctx.r14.u64 = ctx.r3.u64 - ctx.r21.u64;
	// subf r3,r15,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r15.u64;
	// rlwinm r16,r17,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r17,r5,r19
	ctx.r17.u64 = ctx.r19.u64 - ctx.r5.u64;
	// rlwinm r19,r3,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r16,r20
	ctx.r16.u64 = ctx.r16.u64 + ctx.r20.u64;
	// stw r19,-352(r1)
	ctx.current_instruction = 0x88117728;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r19.u32);
	// subf r19,r22,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r22.u64;
	// lwz r14,-352(r1)
	ctx.current_instruction = 0x88117730;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r15,r17,r21
	ctx.r15.u64 = ctx.r17.u64 + ctx.r21.u64;
	// subf r17,r3,r14
	ctx.r17.u64 = ctx.r14.u64 - ctx.r3.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r19,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r17,r16
	ctx.r17.u64 = ctx.r17.u64 + ctx.r16.u64;
	// add r15,r15,r23
	ctx.r15.u64 = ctx.r15.u64 + ctx.r23.u64;
	// add r19,r19,r3
	ctx.r19.u64 = ctx.r19.u64 + ctx.r3.u64;
	// subf r14,r26,r7
	ctx.r14.u64 = ctx.r7.u64 - ctx.r26.u64;
	// add r16,r7,r6
	ctx.r16.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r19
	ctx.r17.u64 = ctx.r17.u64 + ctx.r19.u64;
	// subf r3,r30,r14
	ctx.r3.u64 = ctx.r14.u64 - ctx.r30.u64;
	// mulli r16,r16,13
	ctx.r16.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(13));
	// subf r19,r20,r15
	ctx.r19.u64 = ctx.r15.u64 - ctx.r20.u64;
	// subf r17,r16,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r16.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r15,r19,r24
	ctx.r15.u64 = ctx.r19.u64 + ctx.r24.u64;
	// rlwinm r16,r3,3,0,28
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r19,r11,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// srawi r14,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r14.s64 = ctx.r17.s32 >> 1;
	// subf r3,r3,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r3.u64;
	// std r25,-200(r1)
	ctx.current_instruction = 0x88117788;
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r25.u64);
	// rlwinm r17,r15,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r27,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r27.u64;
	// add r17,r17,r3
	ctx.r17.u64 = ctx.r17.u64 + ctx.r3.u64;
	// subf r3,r27,r22
	ctx.r3.u64 = ctx.r22.u64 - ctx.r27.u64;
	// stw r17,-352(r1)
	ctx.current_instruction = 0x8811779C;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r17.u32);
	// subf r15,r11,r9
	ctx.r15.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r17,r3,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r11,r6
	ctx.r25.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r17,-344(r1)
	ctx.current_instruction = 0x881177AC;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r17.u32);
	// rlwinm r17,r16,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r5,r15
	ctx.r16.u64 = ctx.r15.u64 - ctx.r5.u64;
	// subf r17,r30,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r30.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r5,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r5.u64;
	// subf r16,r31,r16
	ctx.r16.u64 = ctx.r16.u64 - ctx.r31.u64;
	// add r17,r17,r24
	ctx.r17.u64 = ctx.r17.u64 + ctx.r24.u64;
	// add r16,r16,r24
	ctx.r16.u64 = ctx.r16.u64 + ctx.r24.u64;
	// subf r15,r21,r31
	ctx.r15.u64 = ctx.r31.u64 - ctx.r21.u64;
	// add r16,r16,r7
	ctx.r16.u64 = ctx.r16.u64 + ctx.r7.u64;
	// add r17,r17,r22
	ctx.r17.u64 = ctx.r17.u64 + ctx.r22.u64;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r22,r15
	ctx.r22.u64 = ctx.r15.u64 - ctx.r22.u64;
	// stw r16,-324(r1)
	ctx.current_instruction = 0x881177E4;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r16.u32);
	// mulli r16,r25,11
	ctx.r16.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(11));
	// stw r16,-296(r1)
	ctx.current_instruction = 0x881177EC;
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r16.u32);
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x881177F0;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r16,-344(r1)
	ctx.current_instruction = 0x881177F4;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r22,r10,r22
	ctx.r22.u64 = ctx.r22.u64 - ctx.r10.u64;
	// add r16,r3,r16
	ctx.r16.u64 = ctx.r3.u64 + ctx.r16.u64;
	// stw r22,-352(r1)
	ctx.current_instruction = 0x88117800;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r22.u32);
	// rlwinm r17,r17,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r16,-344(r1)
	ctx.current_instruction = 0x88117808;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r16.u32);
	// subf r3,r6,r26
	ctx.r3.u64 = ctx.r26.u64 - ctx.r6.u64;
	// subf r17,r20,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r20.u64;
	// rlwinm r22,r3,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-316(r1)
	ctx.current_instruction = 0x88117818;
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r17.u32);
	// subf r21,r28,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r28.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// stw r21,-272(r1)
	ctx.current_instruction = 0x88117824;
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r21.u32);
	// subf r15,r31,r6
	ctx.r15.u64 = ctx.r6.u64 - ctx.r31.u64;
	// stw r3,-264(r1)
	ctx.current_instruction = 0x8811782C;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r3.u32);
	// rotlwi r16,r10,3
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r22,r26,r15
	ctx.r22.u64 = ctx.r15.u64 - ctx.r26.u64;
	// add r15,r11,r19
	ctx.r15.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 + ctx.r9.u64;
	// stw r15,-348(r1)
	ctx.current_instruction = 0x88117840;
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r15.u32);
	// mullw r15,r14,r4
	ctx.r15.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r4.s32);
	// stw r22,-304(r1)
	ctx.current_instruction = 0x88117848;
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r22.u32);
	// lwz r17,-352(r1)
	ctx.current_instruction = 0x8811784C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r21,-344(r1)
	ctx.current_instruction = 0x88117850;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r22,r27,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// subf r3,r9,r17
	ctx.r3.u64 = ctx.r17.u64 - ctx.r9.u64;
	// add r21,r25,r21
	ctx.r21.u64 = ctx.r25.u64 + ctx.r21.u64;
	// stw r3,-352(r1)
	ctx.current_instruction = 0x88117860;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// subf r17,r10,r16
	ctx.r17.u64 = ctx.r16.u64 - ctx.r10.u64;
	// lwz r25,-352(r1)
	ctx.current_instruction = 0x88117868;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r17,-280(r1)
	ctx.current_instruction = 0x88117870;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r17.u32);
	// add r22,r27,r22
	ctx.r22.u64 = ctx.r27.u64 + ctx.r22.u64;
	// lwz r14,-264(r1)
	ctx.current_instruction = 0x88117878;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r17,-324(r1)
	ctx.current_instruction = 0x88117880;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r19,r7,r26
	ctx.r19.u64 = ctx.r26.u64 - ctx.r7.u64;
	// stw r15,-324(r1)
	ctx.current_instruction = 0x88117888;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r15.u32);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,-316(r1)
	ctx.current_instruction = 0x88117890;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r17,r17,r14
	ctx.r17.u64 = ctx.r17.u64 + ctx.r14.u64;
	// lwz r16,-296(r1)
	ctx.current_instruction = 0x88117898;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r21,-264(r1)
	ctx.current_instruction = 0x8811789C;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r21.u32);
	// add r21,r15,r23
	ctx.r21.u64 = ctx.r15.u64 + ctx.r23.u64;
	// lwz r15,-264(r1)
	ctx.current_instruction = 0x881178A4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r22,r22,r17
	ctx.r22.u64 = ctx.r17.u64 - ctx.r22.u64;
	// lwz r17,-280(r1)
	ctx.current_instruction = 0x881178AC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r16,r15,r16
	ctx.r16.u64 = ctx.r15.u64 + ctx.r16.u64;
	// lwz r15,-304(r1)
	ctx.current_instruction = 0x881178B4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r14,r25,r27
	ctx.r14.u64 = ctx.r25.u64 + ctx.r27.u64;
	// stw r3,-280(r1)
	ctx.current_instruction = 0x881178BC;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r15,r15,3,0,28
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r14,-264(r1)
	ctx.current_instruction = 0x881178C8;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r14.u32);
	// add r22,r22,r17
	ctx.r22.u64 = ctx.r22.u64 + ctx.r17.u64;
	// lwz r14,-304(r1)
	ctx.current_instruction = 0x881178D0;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r16,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 1;
	// lwz r17,-280(r1)
	ctx.current_instruction = 0x881178D8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r22,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 1;
	// subf r15,r14,r15
	ctx.r15.u64 = ctx.r15.u64 - ctx.r14.u64;
	// lwz r14,-348(r1)
	ctx.current_instruction = 0x881178E4;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// mullw r22,r22,r8
	ctx.r22.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// std r8,-288(r1)
	ctx.current_instruction = 0x881178EC;
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r8.u64);
	// stw r15,-280(r1)
	ctx.current_instruction = 0x881178F0;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r15.u32);
	// lwz r15,-272(r1)
	ctx.current_instruction = 0x881178F4;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r8,-324(r1)
	ctx.current_instruction = 0x881178F8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// std r18,-240(r1)
	ctx.current_instruction = 0x881178FC;
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r18.u64);
	// std r20,-336(r1)
	ctx.current_instruction = 0x88117900;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r20.u64);
	// lwz r20,-300(r1)
	ctx.current_instruction = 0x88117904;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r15,-324(r1)
	ctx.current_instruction = 0x88117908;
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r15.u32);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r31,r17
	ctx.r17.u64 = ctx.r17.u64 - ctx.r31.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// subf r18,r11,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-264(r1)
	ctx.current_instruction = 0x88117924;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// mulli r18,r18,11
	ctx.r18.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(11));
	// stw r22,-264(r1)
	ctx.current_instruction = 0x8811792C;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r22.u32);
	// stw r18,-344(r1)
	ctx.current_instruction = 0x88117930;
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r18.u32);
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// mullw r22,r16,r29
	ctx.r22.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r29.s32);
	// lwz r16,-280(r1)
	ctx.current_instruction = 0x8811793C;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r25,r25,r30
	ctx.r25.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r21,r21,r16
	ctx.r21.u64 = ctx.r21.u64 + ctx.r16.u64;
	// stw r25,-352(r1)
	ctx.current_instruction = 0x88117948;
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r25.u32);
	// subf r16,r14,r17
	ctx.r16.u64 = ctx.r17.u64 - ctx.r14.u64;
	// lwz r25,-264(r1)
	ctx.current_instruction = 0x88117950;
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// rlwinm r17,r3,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,-264(r1)
	ctx.current_instruction = 0x88117958;
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r21.u32);
	// subf r21,r11,r10
	ctx.r21.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r17,r3,r17
	ctx.r17.u64 = ctx.r3.u64 + ctx.r17.u64;
	// lwz r14,-352(r1)
	ctx.current_instruction = 0x88117964;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r3,r5,r21
	ctx.r3.u64 = ctx.r21.u64 - ctx.r5.u64;
	// add r22,r8,r22
	ctx.r22.u64 = ctx.r8.u64 + ctx.r22.u64;
	// srawi r16,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r16.s32 >> 1;
	// stw r3,-280(r1)
	ctx.current_instruction = 0x88117974;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// add r3,r22,r25
	ctx.r3.u64 = ctx.r22.u64 + ctx.r25.u64;
	// rlwinm r22,r16,8,0,23
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r16,-280(r1)
	ctx.current_instruction = 0x88117980;
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// rlwinm r21,r15,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r15,r15,0
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// add r14,r14,r28
	ctx.r14.u64 = ctx.r14.u64 + ctx.r28.u64;
	// subf r25,r9,r28
	ctx.r25.u64 = ctx.r28.u64 - ctx.r9.u64;
	// add r15,r15,r21
	ctx.r15.u64 = ctx.r15.u64 + ctx.r21.u64;
	// rlwinm r21,r14,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r25,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r16,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r3,r22
	ctx.r22.u64 = ctx.r3.u64 + ctx.r22.u64;
	// subf r27,r24,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r24.u64;
	// subf r3,r30,r16
	ctx.r3.u64 = ctx.r16.u64 - ctx.r30.u64;
	// subf r16,r26,r14
	ctx.r16.u64 = ctx.r14.u64 - ctx.r26.u64;
	// add r21,r21,r17
	ctx.r21.u64 = ctx.r21.u64 + ctx.r17.u64;
	// lwz r17,-264(r1)
	ctx.current_instruction = 0x881179B8;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r27,r26,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r26.u64;
	// rotlwi r8,r18,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// subf r26,r6,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r21,r24,r21
	ctx.r21.u64 = ctx.r21.u64 - ctx.r24.u64;
	// subf r27,r7,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r7.u64;
	// add r16,r17,r8
	ctx.r16.u64 = ctx.r17.u64 + ctx.r8.u64;
	// rotlwi r24,r28,2
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// add r14,r3,r23
	ctx.r14.u64 = ctx.r3.u64 + ctx.r23.u64;
	// subf r17,r10,r26
	ctx.r17.u64 = ctx.r26.u64 - ctx.r10.u64;
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// subf r26,r9,r27
	ctx.r26.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r8,r28,r24
	ctx.r8.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r16,r16,r15
	ctx.r16.u64 = ctx.r16.u64 + ctx.r15.u64;
	// rlwinm r15,r14,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r23,r17
	ctx.r28.u64 = ctx.r17.u64 - ctx.r23.u64;
	// rotlwi r14,r9,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r17,r23,r21
	ctx.r17.u64 = ctx.r21.u64 - ctx.r23.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r24,r26,r31
	ctx.r24.u64 = ctx.r26.u64 + ctx.r31.u64;
	// stw r3,-280(r1)
	ctx.current_instruction = 0x88117A0C;
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// subf r27,r6,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r26,r28,r7
	ctx.r26.u64 = ctx.r28.u64 + ctx.r7.u64;
	// ld r18,-240(r1)
	ctx.current_instruction = 0x88117A18;
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r23,r8,r15
	ctx.r23.u64 = ctx.r15.u64 - ctx.r8.u64;
	// ld r8,-288(r1)
	ctx.current_instruction = 0x88117A20;
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// subf r15,r9,r14
	ctx.r15.u64 = ctx.r14.u64 - ctx.r9.u64;
	// ld r25,-200(r1)
	ctx.current_instruction = 0x88117A28;
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// rlwinm r28,r27,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r7,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mullw r22,r22,r20
	ctx.r22.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r20.s32);
	// ld r20,-336(r1)
	ctx.current_instruction = 0x88117A38;
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// srawi r21,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r16.s32 >> 1;
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r16,r19,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-280(r1)
	ctx.current_instruction = 0x88117A4C;
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r17,r17,r20
	ctx.r17.u64 = ctx.r17.u64 + ctx.r20.u64;
	// rlwinm r14,r14,1,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r19,r16
	ctx.r20.u64 = ctx.r19.u64 + ctx.r16.u64;
	// add r23,r23,r15
	ctx.r23.u64 = ctx.r23.u64 + ctx.r15.u64;
	// lwz r15,-348(r1)
	ctx.current_instruction = 0x88117A64;
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// subf r19,r30,r14
	ctx.r19.u64 = ctx.r14.u64 - ctx.r30.u64;
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// subf r28,r10,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r10.u64;
	// subf r27,r10,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r20,r15,r19
	ctx.r20.u64 = ctx.r19.u64 - ctx.r15.u64;
	// add r19,r24,r5
	ctx.r19.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// subf r24,r9,r27
	ctx.r24.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r26,r26,r11
	ctx.r26.u64 = ctx.r26.u64 + ctx.r11.u64;
	// srawi r28,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r23.s32 >> 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r27,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r20.s32 >> 1;
	// srawi r31,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 1;
	// add r26,r26,r5
	ctx.r26.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r23,r17,r5
	ctx.r23.u64 = ctx.r17.u64 + ctx.r5.u64;
	// add r24,r24,r5
	ctx.r24.u64 = ctx.r24.u64 + ctx.r5.u64;
	// mullw r5,r27,r4
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r28,r4
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// mullw r21,r21,r4
	ctx.r21.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// mullw r4,r31,r29
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// subf r31,r9,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r7,r3,r18
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r18.s32);
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 1;
	// mullw r27,r23,r29
	ctx.r27.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r29.s32);
	// mullw r28,r26,r29
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// mullw r7,r5,r25
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r25.s32);
	// mullw r26,r19,r8
	ctx.r26.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r8.s32);
	// add r27,r21,r27
	ctx.r27.u64 = ctx.r21.u64 + ctx.r27.u64;
	// add r31,r30,r28
	ctx.r31.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mullw r30,r24,r8
	ctx.r30.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r3,r10,r18
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r18.s32);
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r22,r3
	ctx.r5.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r7,r25
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x88117b4c
	if (!ctx.cr6.gt) goto loc_88117B4C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x88117b58
	goto loc_88117B58;
loc_88117B4C:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_88117B58:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-328(r1)
	ctx.current_instruction = 0x88117B5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r29,-320(r1)
	ctx.current_instruction = 0x88117B60;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// li r28,128
	ctx.r28.s64 = 128;
	// lwz r27,-268(r1)
	ctx.current_instruction = 0x88117B68;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r5,-252(r1)
	ctx.current_instruction = 0x88117B6C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r30,-256(r1)
	ctx.current_instruction = 0x88117B70;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r9,-340(r1)
	ctx.current_instruction = 0x88117B74;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r3,20(r1)
	ctx.current_instruction = 0x88117B78;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r10,4(r11)
	ctx.current_instruction = 0x88117B7C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x88117d84
	goto loc_88117D84;
loc_88117B84:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_88117B88:
	// blt cr6,0x88117cac
	if (ctx.cr6.lt) goto loc_88117CAC;
	// lwz r8,80(r3)
	ctx.current_instruction = 0x88117B8C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88117cac
	if (!ctx.cr6.lt) goto loc_88117CAC;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x88117BA8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// mullw r4,r8,r6
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// std r31,-192(r1)
	ctx.current_instruction = 0x88117BB8;
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r31.u64);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// lbzx r4,r4,r10
	ctx.current_instruction = 0x88117BD8;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lfd f13,-192(r1)
	ctx.current_instruction = 0x88117BDC;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lbzx r31,r31,r10
	ctx.current_instruction = 0x88117BE0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r26,4(r10)
	ctx.current_instruction = 0x88117BE8;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r10,r4,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r4.u64;
	// stw r7,-11900(r6)
	ctx.current_instruction = 0x88117BF0;
	REX_STORE_U32(ctx.r6.u32 + -11900, ctx.r7.u32);
	// lbzx r7,r8,r5
	ctx.current_instruction = 0x88117BF4;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// subf r10,r26,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r26.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x88117C10;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x88117C14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r4,r4,r25
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// subf r24,r25,r31
	ctx.r24.u64 = ctx.r31.u64 - ctx.r25.u64;
	// srawi r31,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 8;
	// mullw r7,r24,r7
	ctx.r7.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r26,r10
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r9)
	ctx.current_instruction = 0x88117C4C;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// lbz r26,4(r8)
	ctx.current_instruction = 0x88117C50;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r7,0(r8)
	ctx.current_instruction = 0x88117C54;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88117C58;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r24,r7
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r6,r6,r8
	ctx.current_instruction = 0x88117C6C;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r31,r8
	ctx.current_instruction = 0x88117C70;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r31,r26,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r26.u64;
	// mullw r8,r26,r10
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r10,r25
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r11)
	ctx.current_instruction = 0x88117CA4;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x88117d7c
	goto loc_88117D7C;
loc_88117CAC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88117d74
	if (!ctx.cr6.gt) goto loc_88117D74;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x88117CB4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88117d74
	if (!ctx.cr6.lt) goto loc_88117D74;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x88117CCC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// std r31,-168(r1)
	ctx.current_instruction = 0x88117CDC;
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r31.u64);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-11900(r6)
	ctx.current_instruction = 0x88117CEC;
	REX_STORE_U32(ctx.r6.u32 + -11900, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfd f13,-168(r1)
	ctx.current_instruction = 0x88117CF8;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r7,r7,r10
	ctx.current_instruction = 0x88117D00;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x88117D0C;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x88117D10;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lbzx r4,r8,r5
	ctx.current_instruction = 0x88117D1C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r7,r25,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r25.u64;
	// add r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	ctx.current_instruction = 0x88117D44;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lbz r6,0(r8)
	ctx.current_instruction = 0x88117D48;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r4,80(r3)
	ctx.current_instruction = 0x88117D4C;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r10,r8
	ctx.current_instruction = 0x88117D54;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,4(r11)
	ctx.current_instruction = 0x88117D6C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// b 0x88117d7c
	goto loc_88117D7C;
loc_88117D74:
	// stb r28,4(r9)
	ctx.current_instruction = 0x88117D74;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r28.u8);
	// stb r28,4(r11)
	ctx.current_instruction = 0x88117D78;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
loc_88117D7C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,-340(r1)
	ctx.current_instruction = 0x88117D80;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_88117D84:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88117D84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,-320(r1)
	ctx.current_instruction = 0x88117D90;
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r29.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// stw r11,-328(r1)
	ctx.current_instruction = 0x88117D98;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// blt cr6,0x88117128
	if (ctx.cr6.lt) goto loc_88117128;
	// b 0x8811818c
	goto loc_8811818C;
loc_88117DA4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_88117DA8:
	// blt cr6,0x88117ff4
	if (ctx.cr6.lt) goto loc_88117FF4;
	// lwz r8,84(r3)
	ctx.current_instruction = 0x88117DAC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88117ff4
	if (!ctx.cr6.lt) goto loc_88117FF4;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88117DBC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8811818c
	if (!ctx.cr6.gt) goto loc_8811818C;
loc_88117DCC:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x88117DD8;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x88117DDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88117fd0
	if (ctx.cr6.lt) goto loc_88117FD0;
	// lwz r8,80(r3)
	ctx.current_instruction = 0x88117DE8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88117f08
	if (!ctx.cr6.lt) goto loc_88117F08;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x88117E04;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r7
	ctx.r31.s64 = ctx.r7.s32;
	// mullw r4,r8,r6
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// std r31,-176(r1)
	ctx.current_instruction = 0x88117E14;
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r31.u64);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-11900(r6)
	ctx.current_instruction = 0x88117E2C;
	REX_STORE_U32(ctx.r6.u32 + -11900, ctx.r7.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r8,r7,r5
	ctx.current_instruction = 0x88117E38;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lfd f13,-176(r1)
	ctx.current_instruction = 0x88117E3C;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r6,r4,r10
	ctx.current_instruction = 0x88117E44;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r31,r31,r10
	ctx.current_instruction = 0x88117E48;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbz r26,4(r10)
	ctx.current_instruction = 0x88117E4C;
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r31.u64;
	// subf r6,r26,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r26.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x88117E64;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r4,-332(r1)
	ctx.current_instruction = 0x88117E68;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r4,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// subf r24,r25,r4
	ctx.r24.u64 = ctx.r4.u64 - ctx.r25.u64;
	// mullw r4,r6,r25
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mullw r6,r26,r10
	ctx.r6.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r4,r31,r25
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	ctx.current_instruction = 0x88117EA8;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lbzx r7,r7,r30
	ctx.current_instruction = 0x88117EAC;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// lbz r31,4(r8)
	ctx.current_instruction = 0x88117EB0;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88117EB4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r31,r10
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// lbzx r23,r6,r8
	ctx.current_instruction = 0x88117EC8;
	ctx.r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r26,r8
	ctx.current_instruction = 0x88117ECC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// subf r6,r23,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r23.u64;
	// subf r31,r31,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r31.u64;
	// mullw r6,r24,r7
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r10,r25
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r11)
	ctx.current_instruction = 0x88117F00;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x88117fd8
	goto loc_88117FD8;
loc_88117F08:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88117fd0
	if (!ctx.cr6.gt) goto loc_88117FD0;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x88117F10;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88117fd0
	if (!ctx.cr6.lt) goto loc_88117FD0;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.current_instruction = 0x88117F28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// std r31,-184(r1)
	ctx.current_instruction = 0x88117F38;
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r31.u64);
	// lis r6,-30678
	ctx.r6.s64 = -2010513408;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-11900(r6)
	ctx.current_instruction = 0x88117F48;
	REX_STORE_U32(ctx.r6.u32 + -11900, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfd f13,-184(r1)
	ctx.current_instruction = 0x88117F54;
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r7,r7,r10
	ctx.current_instruction = 0x88117F5C;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x88117F68;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x88117F6C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lbzx r4,r8,r5
	ctx.current_instruction = 0x88117F7C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// subf r7,r25,r31
	ctx.r7.u64 = ctx.r31.u64 - ctx.r25.u64;
	// add r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	ctx.current_instruction = 0x88117FA0;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88117FA4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r4,r8
	ctx.current_instruction = 0x88117FAC;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// lbz r8,0(r8)
	ctx.current_instruction = 0x88117FB4;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r4,4(r11)
	ctx.current_instruction = 0x88117FC8;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x88117fd8
	goto loc_88117FD8;
loc_88117FD0:
	// stb r28,4(r9)
	ctx.current_instruction = 0x88117FD0;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r28.u8);
	// stb r28,4(r11)
	ctx.current_instruction = 0x88117FD4;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
loc_88117FD8:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88117FD8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88117dcc
	if (ctx.cr6.lt) goto loc_88117DCC;
	// b 0x88118184
	goto loc_88118184;
loc_88117FF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8811815c
	if (!ctx.cr6.gt) goto loc_8811815C;
	// lwz r8,84(r3)
	ctx.current_instruction = 0x88117FFC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8811815c
	if (!ctx.cr6.lt) goto loc_8811815C;
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88118008;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8811818c
	if (!ctx.cr6.gt) goto loc_8811818C;
loc_88118018:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	ctx.current_instruction = 0x88118024;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.current_instruction = 0x88118028;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x88118138
	if (ctx.cr6.lt) goto loc_88118138;
	// lwz r6,80(r3)
	ctx.current_instruction = 0x88118034;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x881180e8
	if (!ctx.cr6.lt) goto loc_881180E8;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,-308(r1)
	ctx.current_instruction = 0x88118050;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// std r31,-208(r1)
	ctx.current_instruction = 0x88118060;
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r31.u64);
	// lis r7,-30678
	ctx.r7.s64 = -2010513408;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r8,-11900(r7)
	ctx.current_instruction = 0x8811806C;
	REX_STORE_U32(ctx.r7.u32 + -11900, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r31,r8,r5
	ctx.current_instruction = 0x88118078;
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lfd f13,-208(r1)
	ctx.current_instruction = 0x88118080;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r7,4(r10)
	ctx.current_instruction = 0x88118088;
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	ctx.current_instruction = 0x88118094;
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.current_instruction = 0x88118098;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r29,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r29.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r7,r25,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r25.u64;
	// add r29,r7,r25
	ctx.r29.u64 = ctx.r7.u64 + ctx.r25.u64;
	// add r26,r7,r25
	ctx.r26.u64 = ctx.r7.u64 + ctx.r25.u64;
	// mullw r7,r29,r31
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r9)
	ctx.current_instruction = 0x881180C4;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.current_instruction = 0x881180C8;
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r8,4(r8)
	ctx.current_instruction = 0x881180CC;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r6.s32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r11)
	ctx.current_instruction = 0x881180E0;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// b 0x88118140
	goto loc_88118140;
loc_881180E8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x88118138
	if (!ctx.cr6.gt) goto loc_88118138;
	// lwz r7,80(r3)
	ctx.current_instruction = 0x881180F0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88118138
	if (!ctx.cr6.lt) goto loc_88118138;
	// lwz r8,-308(r1)
	ctx.current_instruction = 0x88118104;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r8,-30678
	ctx.r8.s64 = -2010513408;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-11900(r8)
	ctx.current_instruction = 0x88118120;
	REX_STORE_U32(ctx.r8.u32 + -11900, ctx.r10.u32);
	// lbzx r10,r6,r5
	ctx.current_instruction = 0x88118124;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stb r10,4(r9)
	ctx.current_instruction = 0x88118128;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
	// lbzx r8,r6,r30
	ctx.current_instruction = 0x8811812C;
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// stb r8,4(r11)
	ctx.current_instruction = 0x88118130;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// b 0x88118140
	goto loc_88118140;
loc_88118138:
	// stb r28,4(r9)
	ctx.current_instruction = 0x88118138;
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r28.u8);
	// stb r28,4(r11)
	ctx.current_instruction = 0x8811813C;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r28.u8);
loc_88118140:
	// lwz r10,88(r3)
	ctx.current_instruction = 0x88118140;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88118018
	if (ctx.cr6.lt) goto loc_88118018;
	// b 0x88118184
	goto loc_88118184;
loc_8811815C:
	// lwz r8,88(r3)
	ctx.current_instruction = 0x8811815C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8811818c
	if (!ctx.cr6.gt) goto loc_8811818C;
loc_8811816C:
	// stbu r28,4(r9)
	ctx.current_instruction = 0x8811816C;
	ea = 4 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbu r28,4(r11)
	ctx.current_instruction = 0x88118174;
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r28.u8);
	ctx.r11.u32 = ea;
	// lwz r8,88(r3)
	ctx.current_instruction = 0x88118178;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8811816c
	if (ctx.cr6.lt) goto loc_8811816C;
loc_88118184:
	// stw r11,-328(r1)
	ctx.current_instruction = 0x88118184;
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// stw r9,-340(r1)
	ctx.current_instruction = 0x88118188;
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_8811818C:
	// lwz r10,92(r3)
	ctx.current_instruction = 0x8811818C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r27,-268(r1)
	ctx.current_instruction = 0x88118194;
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r27.u32);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x88117074
	if (ctx.cr6.lt) goto loc_88117074;
loc_881181A0:
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8815E550) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8815E550;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8815E550) {
			switch (rex_dispatch_address) {
				case 0x8815E558:
				case 0x8815E598:
				case 0x8815E5B0:
				case 0x8815E5C4:
				case 0x8815E5DC:
				case 0x8815E5F0:
				case 0x8815E604:
				case 0x8815E618:
				case 0x8815E634:
				case 0x8815E644:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8815E550;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8815E558: goto loc_8815E558;
		case 0x8815E598: goto loc_8815E598;
		case 0x8815E5B0: goto loc_8815E5B0;
		case 0x8815E5C4: goto loc_8815E5C4;
		case 0x8815E5DC: goto loc_8815E5DC;
		case 0x8815E5F0: goto loc_8815E5F0;
		case 0x8815E604: goto loc_8815E604;
		case 0x8815E618: goto loc_8815E618;
		case 0x8815E634: goto loc_8815E634;
		case 0x8815E644: goto loc_8815E644;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8815E558;
	__savegprlr_28(ctx, base);
loc_8815E558:
	// stwu r1,-128(r1)
	ctx.current_instruction = 0x8815E558;
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e644
	if (ctx.cr6.eq) goto loc_8815E644;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8815e584
	if (ctx.cr6.eq) goto loc_8815E584;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// b 0x8815e58c
	goto loc_8815E58C;
loc_8815E584:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8815e63c
	if (!ctx.cr6.eq) goto loc_8815E63C;
loc_8815E58C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8815b9f8
	ctx.lr = 0x8815E598;
	sub_8815B9F8(ctx, base);
loc_8815E598:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e5b0
	if (ctx.cr6.eq) goto loc_8815E5B0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x88052d90
	ctx.lr = 0x8815E5B0;
	sub_88052D90(ctx, base);
loc_8815E5B0:
	// stw r30,0(r31)
	ctx.current_instruction = 0x8815E5B0;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x882436a0
	ctx.lr = 0x8815E5C4;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8815E5C4:
	// lwz r11,0(r31)
	ctx.current_instruction = 0x8815E5C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x881c4640
	ctx.lr = 0x8815E5DC;
	sub_881C4640(ctx, base);
loc_8815E5DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x881c4640
	ctx.lr = 0x8815E5F0;
	sub_881C4640(ctx, base);
loc_8815E5F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x881c4640
	ctx.lr = 0x8815E604;
	sub_881C4640(ctx, base);
loc_8815E604:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x881c4640
	ctx.lr = 0x8815E618;
	sub_881C4640(ctx, base);
loc_8815E618:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8815e63c
	if (ctx.cr6.eq) goto loc_8815E63C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8814cf00
	ctx.lr = 0x8815E634;
	sub_8814CF00(ctx, base);
loc_8815E634:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8815e654
	if (ctx.cr6.eq) goto loc_8815E654;
loc_8815E63C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815e2f0
	ctx.lr = 0x8815E644;
	sub_8815E2F0(ctx, base);
loc_8815E644:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
loc_8815E654:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x88050898
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88165170) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88165170;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88165170) {
			switch (rex_dispatch_address) {
				case 0x88165178:
				case 0x881651F0:
				case 0x88165238:
				case 0x88165308:
				case 0x88165350:
				case 0x881653B4:
				case 0x881653FC:
				case 0x8816546C:
				case 0x881654B4:
				case 0x88165518:
				case 0x88165560:
				case 0x881655D0:
				case 0x88165618:
				case 0x88165680:
				case 0x881656C8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88165170;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88165178: goto loc_88165178;
		case 0x881651F0: goto loc_881651F0;
		case 0x88165238: goto loc_88165238;
		case 0x88165308: goto loc_88165308;
		case 0x88165350: goto loc_88165350;
		case 0x881653B4: goto loc_881653B4;
		case 0x881653FC: goto loc_881653FC;
		case 0x8816546C: goto loc_8816546C;
		case 0x881654B4: goto loc_881654B4;
		case 0x88165518: goto loc_88165518;
		case 0x88165560: goto loc_88165560;
		case 0x881655D0: goto loc_881655D0;
		case 0x88165618: goto loc_88165618;
		case 0x88165680: goto loc_88165680;
		case 0x881656C8: goto loc_881656C8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x88165178;
	__savegprlr_23(ctx, base);
loc_88165178:
	// stwu r1,-160(r1)
	ctx.current_instruction = 0x88165178;
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.current_instruction = 0x8816517C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165194;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x88165200
	if (!ctx.cr6.lt) goto loc_88165200;
loc_881651A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165200
	if (ctx.cr6.eq) goto loc_88165200;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881651B4;
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
	ctx.current_instruction = 0x881651D8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881651E0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881651f0
	if (!ctx.cr0.lt) goto loc_881651F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881651F0;
	sub_88156678(ctx, base);
loc_881651F0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881651F0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881651a8
	if (ctx.cr6.gt) goto loc_881651A8;
loc_88165200:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165204;
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
	ctx.current_instruction = 0x8816521C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165228;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165238
	if (!ctx.cr0.lt) goto loc_88165238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165238;
	sub_88156678(ctx, base);
loc_88165238:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881656e4
	if (ctx.cr6.eq) goto loc_881656E4;
	// lwz r11,21864(r26)
	ctx.current_instruction = 0x88165240;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88165278
	if (ctx.cr6.eq) goto loc_88165278;
	// lwz r11,22252(r26)
	ctx.current_instruction = 0x8816524C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88165278
	if (!ctx.cr6.eq) goto loc_88165278;
	// lwz r11,21536(r26)
	ctx.current_instruction = 0x88165258;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88165270
	if (ctx.cr6.eq) goto loc_88165270;
	// lwz r11,21544(r26)
	ctx.current_instruction = 0x88165264;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21544);
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// b 0x88165294
	goto loc_88165294;
loc_88165270:
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x88165294
	goto loc_88165294;
loc_88165278:
	// lwz r11,21536(r26)
	ctx.current_instruction = 0x88165278;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88165290
	if (ctx.cr6.eq) goto loc_88165290;
	// lwz r11,21868(r26)
	ctx.current_instruction = 0x88165284;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 21868);
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// b 0x88165294
	goto loc_88165294;
loc_88165290:
	// li r24,1
	ctx.r24.s64 = 1;
loc_88165294:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x881656d4
	if (!ctx.cr6.gt) goto loc_881656D4;
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_881652A4:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881652A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,16
	ctx.r30.s64 = 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881652B0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x88165318
	if (!ctx.cr6.lt) goto loc_88165318;
loc_881652C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165318
	if (ctx.cr6.eq) goto loc_88165318;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881652CC;
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
	ctx.current_instruction = 0x881652F0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881652F8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165308
	if (!ctx.cr0.lt) goto loc_88165308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165308;
	sub_88156678(ctx, base);
loc_88165308:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165308;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881652c0
	if (ctx.cr6.gt) goto loc_881652C0;
loc_88165318:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816531C;
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
	ctx.current_instruction = 0x88165334;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165340;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165350
	if (!ctx.cr0.lt) goto loc_88165350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165350;
	sub_88156678(ctx, base);
loc_88165350:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88165350;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816535C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x881653c4
	if (!ctx.cr6.lt) goto loc_881653C4;
loc_8816536C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881653c4
	if (ctx.cr6.eq) goto loc_881653C4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165378;
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
	ctx.current_instruction = 0x8816539C;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881653A4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881653b4
	if (!ctx.cr0.lt) goto loc_881653B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881653B4;
	sub_88156678(ctx, base);
loc_881653B4:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881653B4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8816536c
	if (ctx.cr6.gt) goto loc_8816536C;
loc_881653C4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881653C8;
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
	ctx.current_instruction = 0x881653E0;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881653EC;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881653fc
	if (!ctx.cr0.lt) goto loc_881653FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881653FC;
	sub_88156678(ctx, base);
loc_881653FC:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,16
	ctx.r30.s64 = 16;
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,20(r27)
	ctx.current_instruction = 0x8816540C;
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88165410;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165414;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8816547c
	if (!ctx.cr6.lt) goto loc_8816547C;
loc_88165424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8816547c
	if (ctx.cr6.eq) goto loc_8816547C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165430;
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
	ctx.current_instruction = 0x88165454;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x8816545C;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8816546c
	if (!ctx.cr0.lt) goto loc_8816546C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x8816546C;
	sub_88156678(ctx, base);
loc_8816546C:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x8816546C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165424
	if (ctx.cr6.gt) goto loc_88165424;
loc_8816547C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165480;
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
	ctx.current_instruction = 0x88165498;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881654A4;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881654b4
	if (!ctx.cr0.lt) goto loc_881654B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881654B4;
	sub_88156678(ctx, base);
loc_881654B4:
	// lwz r31,84(r26)
	ctx.current_instruction = 0x881654B4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881654C0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x88165528
	if (!ctx.cr6.lt) goto loc_88165528;
loc_881654D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165528
	if (ctx.cr6.eq) goto loc_88165528;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x881654DC;
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
	ctx.current_instruction = 0x88165500;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165508;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165518
	if (!ctx.cr0.lt) goto loc_88165518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165518;
	sub_88156678(ctx, base);
loc_88165518:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165518;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x881654d0
	if (ctx.cr6.gt) goto loc_881654D0;
loc_88165528:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x8816552C;
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
	ctx.current_instruction = 0x88165544;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165550;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165560
	if (!ctx.cr0.lt) goto loc_88165560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165560;
	sub_88156678(ctx, base);
loc_88165560:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,14
	ctx.r30.s64 = 14;
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,24(r27)
	ctx.current_instruction = 0x88165570;
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r10.u32);
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88165574;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165578;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bge cr6,0x881655e0
	if (!ctx.cr6.lt) goto loc_881655E0;
loc_88165588:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881655e0
	if (ctx.cr6.eq) goto loc_881655E0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165594;
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
	ctx.current_instruction = 0x881655B8;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x881655C0;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x881655d0
	if (!ctx.cr0.lt) goto loc_881655D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881655D0;
	sub_88156678(ctx, base);
loc_881655D0:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x881655D0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165588
	if (ctx.cr6.gt) goto loc_88165588;
loc_881655E0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x881655E4;
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
	ctx.current_instruction = 0x881655FC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x88165608;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x88165618
	if (!ctx.cr0.lt) goto loc_88165618;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165618;
	sub_88156678(ctx, base);
loc_88165618:
	// stw r30,12(r27)
	ctx.current_instruction = 0x88165618;
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// li r30,14
	ctx.r30.s64 = 14;
	// lwz r31,84(r26)
	ctx.current_instruction = 0x88165620;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165628;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bge cr6,0x88165690
	if (!ctx.cr6.lt) goto loc_88165690;
loc_88165638:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x88165690
	if (ctx.cr6.eq) goto loc_88165690;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.current_instruction = 0x88165644;
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
	ctx.current_instruction = 0x88165668;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	ctx.current_instruction = 0x88165670;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x88165680
	if (!ctx.cr0.lt) goto loc_88165680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x88165680;
	sub_88156678(ctx, base);
loc_88165680:
	// lwz r10,8(r31)
	ctx.current_instruction = 0x88165680;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x88165638
	if (ctx.cr6.gt) goto loc_88165638;
loc_88165690:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r9,0(r31)
	ctx.current_instruction = 0x88165694;
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
	ctx.current_instruction = 0x881656AC;
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	ctx.current_instruction = 0x881656B8;
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x881656c8
	if (!ctx.cr0.lt) goto loc_881656C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88156678
	ctx.lr = 0x881656C8;
	sub_88156678(ctx, base);
loc_881656C8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stwu r30,16(r27)
	ctx.current_instruction = 0x881656CC;
	ea = 16 + ctx.r27.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r27.u32 = ea;
	// bne 0x881652a4
	if (!ctx.cr0.eq) goto loc_881652A4;
loc_881656D4:
	// stw r24,0(r23)
	ctx.current_instruction = 0x881656D4;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
loc_881656E4:
	// stw r28,0(r23)
	ctx.current_instruction = 0x881656E4;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881783D8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881783D8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881783D8) {
			switch (rex_dispatch_address) {
				case 0x881783E0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881783D8;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x881783E0: goto loc_881783E0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050838
	ctx.lr = 0x881783E0;
	__savegprlr_24(ctx, base);
loc_881783E0:
	// lwz r11,0(r5)
	ctx.current_instruction = 0x881783E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,12(r5)
	ctx.current_instruction = 0x881783E8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r26,r11,0,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subf r28,r10,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble cr6,0x88178780
	if (!ctx.cr6.gt) goto loc_88178780;
	// li r29,12
	ctx.r29.s64 = 12;
loc_88178408:
	// lwz r11,60(r5)
	ctx.current_instruction = 0x88178408;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// lbzx r30,r10,r11
	ctx.current_instruction = 0x88178410;
	ctx.r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8817842c
	if (!ctx.cr6.eq) goto loc_8817842C;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stwx r27,r7,r3
	ctx.current_instruction = 0x88178420;
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r27.u32);
	// stw r27,4(r11)
	ctx.current_instruction = 0x88178424;
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x88178770
	goto loc_88178770;
loc_8817842C:
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bne cr6,0x881786f0
	if (!ctx.cr6.eq) goto loc_881786F0;
	// lwz r9,68(r5)
	ctx.current_instruction = 0x88178434;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r11,r29,-12
	ctx.r11.s64 = ctx.r29.s64 + -12;
	// lwz r10,12(r5)
	ctx.current_instruction = 0x8817843C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r9,r11
	ctx.current_instruction = 0x88178440;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r9,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 20;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x88178480
	if (ctx.cr0.lt) goto loc_88178480;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x88178454;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88178480
	if (!ctx.cr6.lt) goto loc_88178480;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x88178460;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.current_instruction = 0x88178464;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r8,r11
	ctx.current_instruction = 0x8817846C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r10,r4
	ctx.current_instruction = 0x88178474;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r7,r3
	ctx.current_instruction = 0x88178478;
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x88178484
	goto loc_88178484;
loc_88178480:
	// stbx r27,r7,r3
	ctx.current_instruction = 0x88178480;
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r27.u8);
loc_88178484:
	// lwz r10,68(r5)
	ctx.current_instruction = 0x88178484;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r9,12(r5)
	ctx.current_instruction = 0x88178488;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r10)
	ctx.current_instruction = 0x88178490;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x881784d8
	if (ctx.cr0.lt) goto loc_881784D8;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x881784A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881784d8
	if (!ctx.cr6.lt) goto loc_881784D8;
	// lwz r9,64(r5)
	ctx.current_instruction = 0x881784B0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x881784B8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwz r11,4(r11)
	ctx.current_instruction = 0x881784C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r9,r10,r4
	ctx.current_instruction = 0x881784CC;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stb r9,1(r8)
	ctx.current_instruction = 0x881784D0;
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
	// b 0x881784e0
	goto loc_881784E0;
loc_881784D8:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,1(r11)
	ctx.current_instruction = 0x881784DC;
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r27.u8);
loc_881784E0:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x881784E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// lwz r9,12(r5)
	ctx.current_instruction = 0x881784E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x881784EC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88178530
	if (ctx.cr0.lt) goto loc_88178530;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x88178500;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88178530
	if (!ctx.cr6.lt) goto loc_88178530;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x8817850C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.current_instruction = 0x88178514;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x8817851C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.current_instruction = 0x88178524;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,2(r6)
	ctx.current_instruction = 0x88178528;
	REX_STORE_U8(ctx.r6.u32 + 2, ctx.r11.u8);
	// b 0x88178538
	goto loc_88178538;
loc_88178530:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,2(r11)
	ctx.current_instruction = 0x88178534;
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r27.u8);
loc_88178538:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x88178538;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r10,12(r5)
	ctx.current_instruction = 0x8817853C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r9,r11,r29
	ctx.current_instruction = 0x88178540;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 20;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88178584
	if (ctx.cr0.lt) goto loc_88178584;
	// lwz r10,4(r5)
	ctx.current_instruction = 0x88178554;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x88178584
	if (!ctx.cr6.lt) goto loc_88178584;
	// lwz r9,64(r5)
	ctx.current_instruction = 0x88178560;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r6,0(r5)
	ctx.current_instruction = 0x88178568;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r9,r29
	ctx.current_instruction = 0x88178570;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r4
	ctx.current_instruction = 0x88178578;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stb r10,3(r8)
	ctx.current_instruction = 0x8817857C;
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r10.u8);
	// b 0x8817858c
	goto loc_8817858C;
loc_88178584:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,3(r11)
	ctx.current_instruction = 0x88178588;
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r27.u8);
loc_8817858C:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x8817858C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// lwz r9,12(r5)
	ctx.current_instruction = 0x88178594;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x88178598;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x881785dc
	if (ctx.cr0.lt) goto loc_881785DC;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x881785AC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881785dc
	if (!ctx.cr6.lt) goto loc_881785DC;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x881785B8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.current_instruction = 0x881785C0;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x881785C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.current_instruction = 0x881785D0;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,4(r6)
	ctx.current_instruction = 0x881785D4;
	REX_STORE_U8(ctx.r6.u32 + 4, ctx.r11.u8);
	// b 0x881785e4
	goto loc_881785E4;
loc_881785DC:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,4(r11)
	ctx.current_instruction = 0x881785E0;
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r27.u8);
loc_881785E4:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x881785E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwz r9,12(r5)
	ctx.current_instruction = 0x881785EC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x881785F0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88178634
	if (ctx.cr0.lt) goto loc_88178634;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x88178604;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x88178634
	if (!ctx.cr6.lt) goto loc_88178634;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x88178610;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.current_instruction = 0x88178618;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x88178620;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.current_instruction = 0x88178628;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,5(r6)
	ctx.current_instruction = 0x8817862C;
	REX_STORE_U8(ctx.r6.u32 + 5, ctx.r11.u8);
	// b 0x8817863c
	goto loc_8817863C;
loc_88178634:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,5(r11)
	ctx.current_instruction = 0x88178638;
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r27.u8);
loc_8817863C:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x8817863C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// lwz r9,12(r5)
	ctx.current_instruction = 0x88178644;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x88178648;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8817868c
	if (ctx.cr0.lt) goto loc_8817868C;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x8817865C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8817868c
	if (!ctx.cr6.lt) goto loc_8817868C;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x88178668;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.current_instruction = 0x88178670;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x88178678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.current_instruction = 0x88178680;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,6(r6)
	ctx.current_instruction = 0x88178684;
	REX_STORE_U8(ctx.r6.u32 + 6, ctx.r11.u8);
	// b 0x88178694
	goto loc_88178694;
loc_8817868C:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,6(r11)
	ctx.current_instruction = 0x88178690;
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r27.u8);
loc_88178694:
	// lwz r11,68(r5)
	ctx.current_instruction = 0x88178694;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// addi r10,r29,16
	ctx.r10.s64 = ctx.r29.s64 + 16;
	// lwz r9,12(r5)
	ctx.current_instruction = 0x8817869C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r8,r11,r10
	ctx.current_instruction = 0x881786A0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r6,r8,r28
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 20;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x881786e4
	if (ctx.cr0.lt) goto loc_881786E4;
	// lwz r9,4(r5)
	ctx.current_instruction = 0x881786B4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x881786e4
	if (!ctx.cr6.lt) goto loc_881786E4;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x881786C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r9,0(r5)
	ctx.current_instruction = 0x881786C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r10
	ctx.current_instruction = 0x881786D0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r11,r8,r4
	ctx.current_instruction = 0x881786D8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stb r11,7(r6)
	ctx.current_instruction = 0x881786DC;
	REX_STORE_U8(ctx.r6.u32 + 7, ctx.r11.u8);
	// b 0x88178770
	goto loc_88178770;
loc_881786E4:
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r27,7(r11)
	ctx.current_instruction = 0x881786E8;
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r27.u8);
	// b 0x88178770
	goto loc_88178770;
loc_881786F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// add r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r8,r29,-12
	ctx.r8.s64 = ctx.r29.s64 + -12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_88178708:
	// and r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8817875c
	if (ctx.cr6.eq) goto loc_8817875C;
	// lwz r11,68(r5)
	ctx.current_instruction = 0x88178714;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r10,12(r5)
	ctx.current_instruction = 0x88178718;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r11,r11,r8
	ctx.current_instruction = 0x8817871C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8817875c
	if (ctx.cr0.lt) goto loc_8817875C;
	// lwz r10,4(r5)
	ctx.current_instruction = 0x88178730;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8817875c
	if (!ctx.cr6.lt) goto loc_8817875C;
	// lwz r24,64(r5)
	ctx.current_instruction = 0x8817873C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r10,0(r5)
	ctx.current_instruction = 0x88178740;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r24,r8
	ctx.current_instruction = 0x88178748;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r4
	ctx.current_instruction = 0x88178750;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r10,r6,r9
	ctx.current_instruction = 0x88178754;
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r10.u8);
	// b 0x88178760
	goto loc_88178760;
loc_8817875C:
	// stbx r27,r6,r9
	ctx.current_instruction = 0x8817875C;
	REX_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r27.u8);
loc_88178760:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rotlwi r31,r31,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// bdnz 0x88178708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88178708;
loc_88178770:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x88178408
	if (ctx.cr6.lt) goto loc_88178408;
loc_88178780:
	// lwz r10,0(r5)
	ctx.current_instruction = 0x88178780;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x88178818
	if (ctx.cr6.eq) goto loc_88178818;
	// lwz r11,60(r5)
	ctx.current_instruction = 0x8817878C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// lbzx r11,r9,r11
	ctx.current_instruction = 0x88178798;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// bge cr6,0x88178818
	if (!ctx.cr6.lt) goto loc_88178818;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_881787A8:
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// slw r8,r25,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88178800
	if (ctx.cr6.eq) goto loc_88178800;
	// lwz r11,68(r5)
	ctx.current_instruction = 0x881787BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.current_instruction = 0x881787C0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r11,r11,r9
	ctx.current_instruction = 0x881787C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x88178800
	if (ctx.cr0.lt) goto loc_88178800;
	// lwz r8,4(r5)
	ctx.current_instruction = 0x881787D8;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x88178800
	if (!ctx.cr6.lt) goto loc_88178800;
	// lwz r8,64(r5)
	ctx.current_instruction = 0x881787E4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r8,r9
	ctx.current_instruction = 0x881787EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r4
	ctx.current_instruction = 0x881787F4;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r10,r7,r3
	ctx.current_instruction = 0x881787F8;
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u8);
	// b 0x88178804
	goto loc_88178804;
loc_88178800:
	// stbx r27,r7,r3
	ctx.current_instruction = 0x88178800;
	REX_STORE_U8(ctx.r7.u32 + ctx.r3.u32, ctx.r27.u8);
loc_88178804:
	// lwz r10,0(r5)
	ctx.current_instruction = 0x88178804;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x881787a8
	if (ctx.cr6.lt) goto loc_881787A8;
loc_88178818:
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// b 0x88050888
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88182300) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88182300;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88182300) {
			switch (rex_dispatch_address) {
				case 0x88182308:
				case 0x88182314:
				case 0x88182330:
				case 0x88182354:
				case 0x88182378:
				case 0x8818239C:
				case 0x881823D4:
				case 0x881823DC:
				case 0x88182410:
				case 0x8818245C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88182300;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88182308: goto loc_88182308;
		case 0x88182314: goto loc_88182314;
		case 0x88182330: goto loc_88182330;
		case 0x88182354: goto loc_88182354;
		case 0x88182378: goto loc_88182378;
		case 0x8818239C: goto loc_8818239C;
		case 0x881823D4: goto loc_881823D4;
		case 0x881823DC: goto loc_881823DC;
		case 0x88182410: goto loc_88182410;
		case 0x8818245C: goto loc_8818245C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88182308;
	__savegprlr_27(ctx, base);
loc_88182308:
	// stwu r1,-1664(r1)
	ctx.current_instruction = 0x88182308;
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x881fdb50
	ctx.lr = 0x88182314;
	sub_881FDB50(ctx, base);
loc_88182314:
	// lis r11,-30678
	ctx.r11.s64 = -2010513408;
	// lhz r10,16036(r31)
	ctx.current_instruction = 0x88182318;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16036);
	// addi r27,r31,22432
	ctx.r27.s64 = ctx.r31.s64 + 22432;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24352(r11)
	ctx.current_instruction = 0x88182328;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24352);
	// bl 0x881fc868
	ctx.lr = 0x88182330;
	sub_881FC868(ctx, base);
loc_88182330:
	// addi r28,r31,17392
	ctx.r28.s64 = ctx.r31.s64 + 17392;
	// addi r29,r31,15984
	ctx.r29.s64 = ctx.r31.s64 + 15984;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x881fdc38
	ctx.lr = 0x88182354;
	sub_881FDC38(ctx, base);
loc_88182354:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x882418e0
	ctx.lr = 0x88182378;
	sub_882418E0(ctx, base);
loc_88182378:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x88215bc0
	ctx.lr = 0x8818239C;
	sub_88215BC0(ctx, base);
loc_8818239C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x88182460
	if (!ctx.cr6.eq) goto loc_88182460;
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x881823A4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88182410
	if (ctx.cr6.eq) goto loc_88182410;
	// lwz r11,15536(r31)
	ctx.current_instruction = 0x881823B0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x881823d8
	if (!ctx.cr6.eq) goto loc_881823D8;
	// bl 0x8817fd58
	ctx.lr = 0x881823D4;
	sub_8817FD58(ctx, base);
loc_881823D4:
	// b 0x881823dc
	goto loc_881823DC;
loc_881823D8:
	// bl 0x881803d8
	ctx.lr = 0x881823DC;
	sub_881803D8(ctx, base);
loc_881823DC:
	// lwz r11,224(r31)
	ctx.current_instruction = 0x881823DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,3784(r31)
	ctx.current_instruction = 0x881823E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,3780(r31)
	ctx.current_instruction = 0x881823EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,3776(r31)
	ctx.current_instruction = 0x881823F4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3776);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,220(r31)
	ctx.current_instruction = 0x881823FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x8817ea48
	ctx.lr = 0x88182410;
	sub_8817EA48(ctx, base);
loc_88182410:
	// lwz r11,3948(r31)
	ctx.current_instruction = 0x88182410;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88182438
	if (!ctx.cr6.eq) goto loc_88182438;
	// lwz r11,14888(r31)
	ctx.current_instruction = 0x8818241C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88182438
	if (!ctx.cr6.eq) goto loc_88182438;
	// lwz r11,15260(r31)
	ctx.current_instruction = 0x88182428;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8818243c
	if (ctx.cr6.eq) goto loc_8818243C;
loc_88182438:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8818243C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	ctx.current_instruction = 0x88182440;
	REX_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,15628(r31)
	ctx.current_instruction = 0x88182448;
	REX_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,15600(r31)
	ctx.current_instruction = 0x88182450;
	REX_STORE_U32(ctx.r31.u32 + 15600, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x881fcbb0
	ctx.lr = 0x8818245C;
	sub_881FCBB0(ctx, base);
loc_8818245C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_88182460:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88183BF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88183BF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88183BF0) {
			switch (rex_dispatch_address) {
				case 0x88183BF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88183BF0;
	ctx.current_instruction = rex_entry;
	switch (rex_entry) {
		case 0x88183BF8: goto loc_88183BF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050844
	ctx.lr = 0x88183BF8;
	__savegprlr_27(ctx, base);
loc_88183BF8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,3392(r3)
	ctx.current_instruction = 0x88183BFC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// lwz r9,188(r3)
	ctx.current_instruction = 0x88183C00;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,200(r3)
	ctx.current_instruction = 0x88183C08;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r3,140(r3)
	ctx.current_instruction = 0x88183C10;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// divwu r9,r9,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// divwu r8,r8,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// lwz r31,136(r11)
	ctx.current_instruction = 0x88183C1C;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// divwu r4,r3,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// lwz r7,220(r11)
	ctx.current_instruction = 0x88183C24;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r6,224(r11)
	ctx.current_instruction = 0x88183C2C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// divwu r30,r31,r10
	ctx.r30.u64 = uint32_t(ctx.r10.u32 ? ctx.r31.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3876(r11)
	ctx.current_instruction = 0x88183C38;
	REX_STORE_U32(ctx.r11.u32 + 3876, ctx.r5.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,3880(r11)
	ctx.current_instruction = 0x88183C40;
	REX_STORE_U32(ctx.r11.u32 + 3880, ctx.r9.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3884(r11)
	ctx.current_instruction = 0x88183C48;
	REX_STORE_U32(ctx.r11.u32 + 3884, ctx.r5.u32);
	// stw r8,3888(r11)
	ctx.current_instruction = 0x88183C4C;
	REX_STORE_U32(ctx.r11.u32 + 3888, ctx.r8.u32);
	// stw r4,3868(r11)
	ctx.current_instruction = 0x88183C50;
	REX_STORE_U32(ctx.r11.u32 + 3868, ctx.r4.u32);
	// stw r30,3872(r11)
	ctx.current_instruction = 0x88183C54;
	REX_STORE_U32(ctx.r11.u32 + 3872, ctx.r30.u32);
	// stw r7,3892(r11)
	ctx.current_instruction = 0x88183C58;
	REX_STORE_U32(ctx.r11.u32 + 3892, ctx.r7.u32);
	// stw r6,3896(r11)
	ctx.current_instruction = 0x88183C5C;
	REX_STORE_U32(ctx.r11.u32 + 3896, ctx.r6.u32);
	// blt cr6,0x88183ce4
	if (ctx.cr6.lt) goto loc_88183CE4;
	// lwz r5,204(r11)
	ctx.current_instruction = 0x88183C64;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,208(r11)
	ctx.current_instruction = 0x88183C6C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm r27,r8,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r9,3912(r11)
	ctx.current_instruction = 0x88183C78;
	REX_STORE_U32(ctx.r11.u32 + 3912, ctx.r9.u32);
	// stw r8,3920(r11)
	ctx.current_instruction = 0x88183C7C;
	REX_STORE_U32(ctx.r11.u32 + 3920, ctx.r8.u32);
	// stw r29,3916(r11)
	ctx.current_instruction = 0x88183C80;
	REX_STORE_U32(ctx.r11.u32 + 3916, ctx.r29.u32);
	// stw r27,3924(r11)
	ctx.current_instruction = 0x88183C84;
	REX_STORE_U32(ctx.r11.u32 + 3924, ctx.r27.u32);
	// stw r4,3900(r11)
	ctx.current_instruction = 0x88183C88;
	REX_STORE_U32(ctx.r11.u32 + 3900, ctx.r4.u32);
	// mullw r9,r28,r8
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,3928(r11)
	ctx.current_instruction = 0x88183C98;
	REX_STORE_U32(ctx.r11.u32 + 3928, ctx.r8.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r7,3932(r11)
	ctx.current_instruction = 0x88183CA0;
	REX_STORE_U32(ctx.r11.u32 + 3932, ctx.r7.u32);
	// bne cr6,0x88183cbc
	if (!ctx.cr6.eq) goto loc_88183CBC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,3904(r11)
	ctx.current_instruction = 0x88183CB0;
	REX_STORE_U32(ctx.r11.u32 + 3904, ctx.r10.u32);
	// stw r9,3908(r11)
	ctx.current_instruction = 0x88183CB4;
	REX_STORE_U32(ctx.r11.u32 + 3908, ctx.r9.u32);
	// b 0x88183cc4
	goto loc_88183CC4;
loc_88183CBC:
	// stw r3,3904(r11)
	ctx.current_instruction = 0x88183CBC;
	REX_STORE_U32(ctx.r11.u32 + 3904, ctx.r3.u32);
	// stw r31,3908(r11)
	ctx.current_instruction = 0x88183CC0;
	REX_STORE_U32(ctx.r11.u32 + 3908, ctx.r31.u32);
loc_88183CC4:
	// lwz r10,204(r11)
	ctx.current_instruction = 0x88183CC4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r9,208(r11)
	ctx.current_instruction = 0x88183CC8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r9,r4
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,15232(r11)
	ctx.current_instruction = 0x88183CDC;
	REX_STORE_U32(ctx.r11.u32 + 15232, ctx.r6.u32);
	// stw r5,15236(r11)
	ctx.current_instruction = 0x88183CE0;
	REX_STORE_U32(ctx.r11.u32 + 15236, ctx.r5.u32);
loc_88183CE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x88050894
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_88187FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x88187FA0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x88187FA0) {
			switch (rex_dispatch_address) {
				case 0x88187FA8:
				case 0x88188174:
				case 0x8818819C:
				case 0x881881B4:
				case 0x88188350:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88187FA0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x88187FA8: goto loc_88187FA8;
		case 0x88188174: goto loc_88188174;
		case 0x8818819C: goto loc_8818819C;
		case 0x881881B4: goto loc_881881B4;
		case 0x88188350: goto loc_88188350;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050820
	ctx.lr = 0x88187FA8;
	__savegprlr_18(ctx, base);
loc_88187FA8:
	// stwu r1,-208(r1)
	ctx.current_instruction = 0x88187FA8;
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r11,332(r1)
	ctx.current_instruction = 0x88187FB0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lis r8,12850
	ctx.r8.s64 = 842137600;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ori r8,r8,13392
	ctx.r8.u64 = ctx.r8.u64 | 13392;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8818821c
	if (ctx.cr6.gt) goto loc_8818821C;
	// beq cr6,0x881881cc
	if (ctx.cr6.eq) goto loc_881881CC;
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r8,r8,13385
	ctx.r8.u64 = ctx.r8.u64 | 13385;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x88188038
	if (ctx.cr6.gt) goto loc_88188038;
	// beq cr6,0x88188058
	if (ctx.cr6.eq) goto loc_88188058;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88187ff4
	if (ctx.cr6.eq) goto loc_88187FF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x88188000
	if (!ctx.cr6.eq) goto loc_88188000;
loc_88187FF4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8818826c
	if (!ctx.cr6.gt) goto loc_8818826C;
loc_88187FFC:
	// li r6,-1
	ctx.r6.s64 = -1;
loc_88188000:
	// lwz r11,340(r1)
	ctx.current_instruction = 0x88188000;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mullw r8,r31,r11
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r3,r8,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// addze r3,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r3.s64 = temp.s64;
	// lwz r8,292(r1)
	ctx.current_instruction = 0x8818801C;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r26,r3,r6
	ctx.r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x88188274
	if (!ctx.cr6.eq) goto loc_88188274;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// b 0x881882a0
	goto loc_881882A0;
loc_88188038:
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r3,r8,13392
	ctx.r3.u64 = ctx.r8.u64 | 13392;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x881880cc
	if (ctx.cr6.eq) goto loc_881880CC;
	// lis r8,12849
	ctx.r8.s64 = 842072064;
	// ori r3,r8,22105
	ctx.r3.u64 = ctx.r8.u64 | 22105;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x88188000
	if (!ctx.cr6.eq) goto loc_88188000;
loc_88188058:
	// lwz r20,316(r1)
	ctx.current_instruction = 0x88188058;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 1;
	// lwz r6,324(r1)
	ctx.current_instruction = 0x88188060;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// lwz r3,292(r1)
	ctx.current_instruction = 0x88188068;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r21,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r20.s32 >> 1;
	// srawi r19,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r6.s32 >> 1;
	// lwz r27,308(r1)
	ctx.current_instruction = 0x88188074;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x8818807C;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// mullw r25,r11,r29
	ctx.r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// srawi r23,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r27.s32 >> 1;
	// add r9,r25,r24
	ctx.r9.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r24,r7,r8
	ctx.r24.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r23,r28
	ctx.r7.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r28.s32);
	// srawi r22,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r26.s32 >> 1;
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// add r9,r7,r22
	ctx.r9.u64 = ctx.r7.u64 + ctx.r22.u64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// mullw r7,r31,r3
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// mullw r8,r30,r27
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	// add r27,r23,r11
	ctx.r27.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// b 0x88188134
	goto loc_88188134;
loc_881880CC:
	// lwz r20,316(r1)
	ctx.current_instruction = 0x881880CC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 2;
	// lwz r3,292(r1)
	ctx.current_instruction = 0x881880D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r28,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 2;
	// srawi r21,r20,2
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r20.s32 >> 2;
	// lwz r26,300(r1)
	ctx.current_instruction = 0x881880E0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lwz r7,308(r1)
	ctx.current_instruction = 0x881880E8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,324(r1)
	ctx.current_instruction = 0x881880EC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r27,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 2;
	// mullw r25,r29,r3
	ctx.r25.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// srawi r24,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 2;
	// add r9,r25,r27
	ctx.r9.u64 = ctx.r25.u64 + ctx.r27.u64;
	// srawi r22,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r26.s32 >> 2;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// mullw r23,r28,r7
	ctx.r23.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
loc_88188118:
	// mullw r3,r31,r3
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// mullw r8,r30,r7
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// add r9,r23,r22
	ctx.r9.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r27,r27,r11
	ctx.r27.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
loc_88188134:
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r23,r24,r5
	ctx.r23.u64 = ctx.r24.u64 + ctx.r5.u64;
	// add r22,r11,r4
	ctx.r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r24,r8,r4
	ctx.r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
	// add r25,r25,r5
	ctx.r25.u64 = ctx.r25.u64 + ctx.r5.u64;
	// add r27,r3,r10
	ctx.r27.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x88188184
	if (!ctx.cr6.gt) goto loc_88188184;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
loc_88188164:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x881ece80
	ctx.lr = 0x88188174;
	sub_881ECE80(ctx, base);
loc_88188174:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// add r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 + ctx.r30.u64;
	// bne 0x88188164
	if (!ctx.cr0.eq) goto loc_88188164;
loc_88188184:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x88188360
	if (!ctx.cr6.gt) goto loc_88188360;
loc_8818818C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x881ece80
	ctx.lr = 0x8818819C;
	sub_881ECE80(ctx, base);
loc_8818819C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r24,r28,r24
	ctx.r24.u64 = ctx.r28.u64 + ctx.r24.u64;
	// bl 0x881ece80
	ctx.lr = 0x881881B4;
	sub_881ECE80(ctx, base);
loc_881881B4:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r23,r29,r23
	ctx.r23.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r22,r28,r22
	ctx.r22.u64 = ctx.r28.u64 + ctx.r22.u64;
	// bne 0x8818818c
	if (!ctx.cr0.eq) goto loc_8818818C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
loc_881881CC:
	// lwz r20,316(r1)
	ctx.current_instruction = 0x881881CC;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r29,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 1;
	// lwz r3,292(r1)
	ctx.current_instruction = 0x881881D4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// mullw r8,r31,r7
	ctx.r8.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lwz r26,300(r1)
	ctx.current_instruction = 0x881881E0;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r7,308(r1)
	ctx.current_instruction = 0x881881E4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r6,324(r1)
	ctx.current_instruction = 0x881881E8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// srawi r21,r20,1
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r20.s32 >> 1;
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// mullw r25,r29,r3
	ctx.r25.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// srawi r27,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 1;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// add r9,r25,r24
	ctx.r9.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r24,r27,r8
	ctx.r24.u64 = ctx.r27.u64 + ctx.r8.u64;
	// srawi r22,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r26.s32 >> 1;
	// mullw r23,r28,r7
	ctx.r23.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// add r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 1;
	// b 0x88188118
	goto loc_88188118;
loc_8818821C:
	// lis r8,22101
	ctx.r8.s64 = 1448411136;
	// ori r8,r8,22857
	ctx.r8.u64 = ctx.r8.u64 | 22857;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x88188254
	if (ctx.cr6.gt) goto loc_88188254;
	// beq cr6,0x88188058
	if (ctx.cr6.eq) goto loc_88188058;
	// lis r8,12889
	ctx.r8.s64 = 844693504;
	// ori r3,r8,21849
	ctx.r3.u64 = ctx.r8.u64 | 21849;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x88188264
	if (ctx.cr6.eq) goto loc_88188264;
	// lis r8,21849
	ctx.r8.s64 = 1431896064;
	// ori r3,r8,22105
	ctx.r3.u64 = ctx.r8.u64 | 22105;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x88188264
	if (ctx.cr6.eq) goto loc_88188264;
	// b 0x88188000
	goto loc_88188000;
loc_88188254:
	// lis r8,22870
	ctx.r8.s64 = 1498808320;
	// ori r3,r8,22869
	ctx.r3.u64 = ctx.r8.u64 | 22869;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x88188000
	if (!ctx.cr6.eq) goto loc_88188000;
loc_88188264:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x88187ffc
	if (!ctx.cr6.gt) goto loc_88187FFC;
loc_8818826C:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x88188000
	goto loc_88188000;
loc_88188274:
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// mullw r31,r10,r11
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subfic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r8.u64;
	// srawi r29,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 31;
	// xor r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// xor r7,r26,r29
	ctx.r7.u64 = ctx.r26.u64 ^ ctx.r29.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r3,r29,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r29.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 3;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
loc_881882A0:
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// rlwinm r8,r10,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r3,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 3;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r28,r10,r6
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// bne cr6,0x881882dc
	if (!ctx.cr6.eq) goto loc_881882DC;
	// lwz r10,300(r1)
	ctx.current_instruction = 0x881882C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,308(r1)
	ctx.current_instruction = 0x881882C8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// b 0x88188310
	goto loc_88188310;
loc_881882DC:
	// lwz r10,308(r1)
	ctx.current_instruction = 0x881882DC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// lwz r3,300(r1)
	ctx.current_instruction = 0x881882E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subfic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - ctx.r10.u64;
	// srawi r31,r28,31
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r28.s32 >> 31;
	// xor r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r9,r28,r31
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subf r6,r31,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
loc_88188310:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,316(r1)
	ctx.current_instruction = 0x88188314;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r29,324(r1)
	ctx.current_instruction = 0x8818831C;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r27,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r27.s64 = temp.s64;
	// ble cr6,0x88188360
	if (!ctx.cr6.gt) goto loc_88188360;
loc_88188340:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x881ece80
	ctx.lr = 0x88188350;
	sub_881ECE80(ctx, base);
loc_88188350:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// bne 0x88188340
	if (!ctx.cr0.eq) goto loc_88188340;
loc_88188360:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x88050870
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881954B8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881954B8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881954B8) {
			switch (rex_dispatch_address) {
				case 0x881954C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881954B8;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881954C0: goto loc_881954C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050834
	ctx.lr = 0x881954C0;
	__savegprlr_23(ctx, base);
loc_881954C0:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r30,r6,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r6.u64;
	// lvx128 v6,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r23,r6,28
	ctx.r23.u64 = ctx.r6.u32 & 0xF;
	// lvx128 v11,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lvx128 v9,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v8,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v4,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r8,r4
	ctx.r27.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r26,r7,r4
	ctx.r26.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r25,r31,r4
	ctx.r25.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r24,r30,r4
	ctx.r24.u64 = ctx.r30.u64 + ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x88195588
	if (!ctx.cr6.eq) goto loc_88195588;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x88195568
	if (!ctx.cr6.eq) goto loc_88195568;
	// vmrghb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88195560:
	// vmrghb v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x88195628
	goto loc_88195628;
loc_88195568:
	// vmrglb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x88195624
	goto loc_88195624;
loc_88195588:
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// vmrghb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8819559c
	if (ctx.cr6.eq) goto loc_8819559C;
	// vmrglb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8819559C:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881955b0
	if (ctx.cr6.eq) goto loc_881955B0;
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_881955B0:
	// clrlwi r11,r29,28
	ctx.r11.u64 = ctx.r29.u32 & 0xF;
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881955c4
	if (ctx.cr6.eq) goto loc_881955C4;
	// vmrglb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_881955C4:
	// clrlwi r11,r28,28
	ctx.r11.u64 = ctx.r28.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x881955d8
	if (!ctx.cr6.eq) goto loc_881955D8;
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x881955dc
	goto loc_881955DC;
loc_881955D8:
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_881955DC:
	// clrlwi r11,r27,28
	ctx.r11.u64 = ctx.r27.u32 & 0xF;
	// vmrghb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881955f0
	if (ctx.cr6.eq) goto loc_881955F0;
	// vmrglb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_881955F0:
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88195604
	if (ctx.cr6.eq) goto loc_88195604;
	// vmrglb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88195604:
	// clrlwi r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	// vmrghb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88195618
	if (ctx.cr6.eq) goto loc_88195618;
	// vmrglb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88195618:
	// clrlwi r11,r24,28
	ctx.r11.u64 = ctx.r24.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x88195560
	if (ctx.cr6.eq) goto loc_88195560;
loc_88195624:
	// vmrglb v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_88195628:
	// lvx128 v9,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vadduhm v8,v3,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// li r4,32
	ctx.r4.s64 = 32;
	// li r29,48
	ctx.r29.s64 = 48;
	// li r28,64
	ctx.r28.s64 = 64;
	// li r27,80
	ctx.r27.s64 = 80;
	// lvx128 v6,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v63,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// li r26,96
	ctx.r26.s64 = 96;
	// vadduhm v5,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// li r25,112
	ctx.r25.s64 = 112;
	// lvx128 v4,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lvx128 v2,r5,r29
	ea = (ctx.r5.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r5,r28
	ea = (ctx.r5.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvx128 v31,r5,r27
	ea = (ctx.r5.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v62,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v30,r5,r26
	ea = (ctx.r5.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lvx128 v29,r5,r25
	ea = (ctx.r5.u32 + ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stvewx128 v63,r0,r3
	ctx.current_instruction = 0x88195684;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stvewx128 v63,r3,r11
	ctx.current_instruction = 0x8819568C;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// vpkshus128 v61,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// vadduhm v28,v10,v2
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stvewx128 v62,r3,r6
	ctx.current_instruction = 0x881956A8;
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// vadduhm v27,v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v26,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vpkshus128 v60,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vadduhm v25,v13,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v24,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vpkshus128 v59,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// stvewx128 v62,r11,r25
	ctx.current_instruction = 0x881956C8;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stvewx128 v61,r10,r3
	ctx.current_instruction = 0x881956D0;
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v58,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vpkshus128 v57,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vpkshus128 v56,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvewx128 v61,r11,r25
	ctx.current_instruction = 0x881956E0;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stvewx128 v60,r9,r3
	ctx.current_instruction = 0x881956E8;
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r25
	ctx.current_instruction = 0x881956EC;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stvewx128 v59,r8,r3
	ctx.current_instruction = 0x881956F4;
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r11,r25
	ctx.current_instruction = 0x881956F8;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stvewx128 v58,r7,r3
	ctx.current_instruction = 0x88195700;
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r11,r25
	ctx.current_instruction = 0x88195704;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// stvewx128 v57,r31,r3
	ctx.current_instruction = 0x8819570C;
	ea = (ctx.r31.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r11,r25
	ctx.current_instruction = 0x88195710;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stvewx128 v56,r30,r3
	ctx.current_instruction = 0x88195718;
	ea = (ctx.r30.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r25
	ctx.current_instruction = 0x8819571C;
	ea = (ctx.r11.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x88050884
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8819C7B0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8819C7B0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8819C7B0) {
			switch (rex_dispatch_address) {
				case 0x8819C7B8:
				case 0x8819C9C8:
				case 0x8819CA48:
				case 0x8819CA50:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8819C7B0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8819C7B8: goto loc_8819C7B8;
		case 0x8819C9C8: goto loc_8819C9C8;
		case 0x8819CA48: goto loc_8819CA48;
		case 0x8819CA50: goto loc_8819CA50;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050830
	ctx.lr = 0x8819C7B8;
	__savegprlr_22(ctx, base);
loc_8819C7B8:
	// stwu r1,-192(r1)
	ctx.current_instruction = 0x8819C7B8;
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.current_instruction = 0x8819C7BC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mullw r9,r11,r8
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,288(r3)
	ctx.current_instruction = 0x8819C7D4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne cr6,0x8819c824
	if (!ctx.cr6.eq) goto loc_8819C824;
	// lwz r11,20684(r3)
	ctx.current_instruction = 0x8819C800;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819c824
	if (!ctx.cr6.eq) goto loc_8819C824;
	// lwz r11,136(r3)
	ctx.current_instruction = 0x8819C80C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8819C824:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8819c84c
	if (!ctx.cr6.eq) goto loc_8819C84C;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x8819C834;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819c84c
	if (!ctx.cr6.eq) goto loc_8819C84C;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819c87c
	if (!ctx.cr6.eq) goto loc_8819C87C;
loc_8819C84C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8819c8b0
	if (ctx.cr6.eq) goto loc_8819C8B0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8819c87c
	if (ctx.cr6.eq) goto loc_8819C87C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8819c87c
	if (ctx.cr6.eq) goto loc_8819C87C;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r3,1776(r31)
	ctx.current_instruction = 0x8819C868;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.current_instruction = 0x8819C870;
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// bne cr6,0x8819c8b0
	if (!ctx.cr6.eq) goto loc_8819C8B0;
loc_8819C87C:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8819c8a0
	if (ctx.cr6.eq) goto loc_8819C8A0;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// lwz r3,21968(r31)
	ctx.current_instruction = 0x8819C88C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21968);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.current_instruction = 0x8819C894;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8819c8b0
	if (!ctx.cr6.eq) goto loc_8819C8B0;
loc_8819C8A0:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r29,1932(r31)
	ctx.current_instruction = 0x8819C8A4;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1932);
	// subf r30,r11,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8819C8B0:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8819c8d0
	if (!ctx.cr6.eq) goto loc_8819C8D0;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x8819C8B8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819c8d0
	if (!ctx.cr6.eq) goto loc_8819C8D0;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819c900
	if (!ctx.cr6.eq) goto loc_8819C900;
loc_8819C8D0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8819ca04
	if (ctx.cr6.eq) goto loc_8819CA04;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8819c900
	if (ctx.cr6.eq) goto loc_8819C900;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8819c900
	if (ctx.cr6.eq) goto loc_8819C900;
	// lwz r11,1776(r31)
	ctx.current_instruction = 0x8819C8E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r11)
	ctx.current_instruction = 0x8819C8F4;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8819ca04
	if (!ctx.cr6.eq) goto loc_8819CA04;
loc_8819C900:
	// addic. r10,r5,-32
	ctx.xer.ca = ctx.r5.u32 > 31;
	ctx.r10.s64 = ctx.r5.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r29,1928(r31)
	ctx.current_instruction = 0x8819C904;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1928);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x8819ca5c
	if (ctx.cr0.eq) goto loc_8819CA5C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8819ca04
	if (ctx.cr6.eq) goto loc_8819CA04;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stw r24,80(r1)
	ctx.current_instruction = 0x8819C91C;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bne cr6,0x8819c940
	if (!ctx.cr6.eq) goto loc_8819C940;
	// lwz r11,20684(r31)
	ctx.current_instruction = 0x8819C924;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8819c940
	if (!ctx.cr6.eq) goto loc_8819C940;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8819c96c
	if (!ctx.cr6.eq) goto loc_8819C96C;
loc_8819C940:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8819c96c
	if (ctx.cr6.eq) goto loc_8819C96C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8819c96c
	if (ctx.cr6.eq) goto loc_8819C96C;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r9,1776(r31)
	ctx.current_instruction = 0x8819C954;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1776);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.current_instruction = 0x8819C960;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bne cr6,0x8819c984
	if (!ctx.cr6.eq) goto loc_8819C984;
loc_8819C96C:
	// lwz r11,1924(r31)
	ctx.current_instruction = 0x8819C96C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1924);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r30
	ctx.current_instruction = 0x8819C978;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,80(r1)
	ctx.current_instruction = 0x8819C980;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8819C984:
	// lwz r11,1924(r31)
	ctx.current_instruction = 0x8819C984;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1924);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,1920(r31)
	ctx.current_instruction = 0x8819C98C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1920);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhzx r9,r3,r30
	ctx.current_instruction = 0x8819C9A8;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r10
	ctx.current_instruction = 0x8819C9B0;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r10,88(r1)
	ctx.current_instruction = 0x8819C9BC;
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,84(r1)
	ctx.current_instruction = 0x8819C9C0;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8819c5a0
	ctx.lr = 0x8819C9C8;
	sub_8819C5A0(ctx, base);
loc_8819C9C8:
	// lwz r11,80(r1)
	ctx.current_instruction = 0x8819C9C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.current_instruction = 0x8819C9CC;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.current_instruction = 0x8819C9D0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r8,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8819ca04
	if (!ctx.cr6.lt) goto loc_8819CA04;
	// lwz r29,1932(r31)
	ctx.current_instruction = 0x8819C9FC;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1932);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8819CA04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8819ca5c
	if (ctx.cr6.eq) goto loc_8819CA5C;
	// lwz r11,0(r27)
	ctx.current_instruction = 0x8819CA0C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,1928(r31)
	ctx.current_instruction = 0x8819CA14;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1928);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// and r30,r6,r25
	ctx.r30.u64 = ctx.r6.u64 & ctx.r25.u64;
	// lwz r6,276(r1)
	ctx.current_instruction = 0x8819CA38;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8819ca4c
	if (!ctx.cr6.eq) goto loc_8819CA4C;
	// bl 0x8819c3d8
	ctx.lr = 0x8819CA48;
	sub_8819C3D8(ctx, base);
loc_8819CA48:
	// b 0x8819ca50
	goto loc_8819CA50;
loc_8819CA4C:
	// bl 0x8819c1a8
	ctx.lr = 0x8819CA50;
	sub_8819C1A8(ctx, base);
loc_8819CA50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8819ca5c
	if (!ctx.cr6.eq) goto loc_8819CA5C;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8819CA5C:
	// lwz r11,1932(r31)
	ctx.current_instruction = 0x8819CA5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1932);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,0(r22)
	ctx.current_instruction = 0x8819CA70;
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
	// stw r29,0(r23)
	ctx.current_instruction = 0x8819CA74;
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x88050880
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881A75E8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881A75E8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881A75E8) {
			switch (rex_dispatch_address) {
				case 0x881A75F0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881A75E8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	switch (rex_entry) {
		case 0x881A75F0: goto loc_881A75F0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050824
	ctx.lr = 0x881A75F0;
	__savegprlr_19(ctx, base);
loc_881A75F0:
	// lis r31,-30678
	ctx.r31.s64 = -2010513408;
	// lwz r22,100(r1)
	ctx.current_instruction = 0x881A75F4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r21,92(r1)
	ctx.current_instruction = 0x881A75FC;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// clrlwi r29,r11,28
	ctx.r29.u64 = ctx.r11.u32 & 0xF;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r11,24540(r31)
	ctx.current_instruction = 0x881A760C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24540);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r11,r7
	ctx.r26.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// srawi r20,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r20.s64 = ctx.r10.s32 >> 3;
	// subfic r4,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r22.u64;
	// subf r27,r11,r10
	ctx.r27.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r23,r10,20
	ctx.r23.s64 = ctx.r10.s64 + 20;
	// bge cr6,0x881a76f4
	if (!ctx.cr6.lt) goto loc_881A76F4;
	// subf r25,r26,r7
	ctx.r25.u64 = ctx.r7.u64 - ctx.r26.u64;
	// subf r24,r5,r6
	ctx.r24.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_881A7654:
	// lbzx r5,r25,r28
	ctx.current_instruction = 0x881A7654;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r25.u32 + ctx.r28.u32);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lbz r4,0(r3)
	ctx.current_instruction = 0x881A765C;
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r30,r5,8,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r19,r4,8,63
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 | ctx.r5.u64;
	// or r4,r19,r4
	ctx.r4.u64 = ctx.r19.u64 | ctx.r4.u64;
	// rldicr r30,r5,16,47
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r19,r4,16,47
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 | ctx.r5.u64;
	// or r30,r19,r4
	ctx.r30.u64 = ctx.r19.u64 | ctx.r4.u64;
	// rldicr r4,r5,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r19,r30,32,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r30,r19,r30
	ctx.r30.u64 = ctx.r19.u64 | ctx.r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x881a76b8
	if (!ctx.cr6.gt) goto loc_881A76B8;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_881A76A4:
	// lbz r5,0(r3)
	ctx.current_instruction = 0x881A76A4;
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stbx r5,r11,r7
	ctx.current_instruction = 0x881A76A8;
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x881a76a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A76A4;
	// lwz r11,24540(r31)
	ctx.current_instruction = 0x881A76B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24540);
loc_881A76B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881a76e4
	if (!ctx.cr6.gt) goto loc_881A76E4;
	// subf r5,r10,r28
	ctx.r5.u64 = ctx.r28.u64 - ctx.r10.u64;
loc_881A76C8:
	// stdx r4,r5,r10
	ctx.current_instruction = 0x881A76C8;
	REX_STORE_U64(ctx.r5.u32 + ctx.r10.u32, ctx.r4.u64);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// std r30,0(r10)
	ctx.current_instruction = 0x881A76D0;
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r11,24540(r31)
	ctx.current_instruction = 0x881A76D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24540);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x881a76c8
	if (ctx.cr6.lt) goto loc_881A76C8;
loc_881A76E4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r28,r28,r21
	ctx.r28.u64 = ctx.r28.u64 + ctx.r21.u64;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// bne 0x881a7654
	if (!ctx.cr0.eq) goto loc_881A7654;
loc_881A76F4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x881a7740
	if (ctx.cr6.eq) goto loc_881A7740;
	// mullw r11,r23,r21
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r21.s32);
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x881a7740
	if (!ctx.cr6.gt) goto loc_881A7740;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_881A7714:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881a7734
	if (!ctx.cr6.gt) goto loc_881A7734;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_881A7724:
	// ld r7,0(r11)
	ctx.current_instruction = 0x881A7724;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r7,r10,r11
	ctx.current_instruction = 0x881A7728;
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881a7724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7724;
loc_881A7734:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bne 0x881a7714
	if (!ctx.cr0.eq) goto loc_881A7714;
loc_881A7740:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x881a77a4
	if (ctx.cr6.eq) goto loc_881A77A4;
	// subf r8,r21,r28
	ctx.r8.u64 = ctx.r28.u64 - ctx.r21.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// beq cr6,0x881a7760
	if (ctx.cr6.eq) goto loc_881A7760;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x881a7764
	goto loc_881A7764;
loc_881A7760:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_881A7764:
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881a77a4
	if (!ctx.cr6.gt) goto loc_881A77A4;
	// subf r10,r8,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r8.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_881A7778:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x881a7798
	if (!ctx.cr6.gt) goto loc_881A7798;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_881A7788:
	// ld r7,0(r11)
	ctx.current_instruction = 0x881A7788;
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stdx r7,r10,r11
	ctx.current_instruction = 0x881A778C;
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x881a7788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_881A7788;
loc_881A7798:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// bne 0x881a7778
	if (!ctx.cr0.eq) goto loc_881A7778;
loc_881A77A4:
	// b 0x88050874
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_881AA710) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AA710;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AA710) {
			switch (rex_dispatch_address) {
				case 0x881AA73C:
				case 0x881AA750:
				case 0x881AA75C:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AA710;
	ctx.current_instruction = rex_entry;
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AA73C: goto loc_881AA73C;
		case 0x881AA750: goto loc_881AA750;
		case 0x881AA75C: goto loc_881AA75C;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	ctx.current_instruction = 0x881AA714;
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	ctx.current_instruction = 0x881AA718;
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	ctx.current_instruction = 0x881AA71C;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ctx.current_instruction = 0x881AA720;
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.current_instruction = 0x881AA728;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881aa740
	if (ctx.cr6.eq) goto loc_881AA740;
	// bl 0x8815ba70
	ctx.lr = 0x881AA73C;
	sub_8815BA70(ctx, base);
loc_881AA73C:
	// stw r30,0(r31)
	ctx.current_instruction = 0x881AA73C;
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_881AA740:
	// lwz r3,4(r31)
	ctx.current_instruction = 0x881AA740;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x881aa754
	if (ctx.cr6.eq) goto loc_881AA754;
	// bl 0x8815ba70
	ctx.lr = 0x881AA750;
	sub_8815BA70(ctx, base);
loc_881AA750:
	// stw r30,4(r31)
	ctx.current_instruction = 0x881AA750;
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_881AA754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8815ba70
	ctx.lr = 0x881AA75C;
	sub_8815BA70(ctx, base);
loc_881AA75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.current_instruction = 0x881AA764;
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.current_instruction = 0x881AA76C;
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.current_instruction = 0x881AA770;
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881AAEC8) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881AAEC8;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881AAEC8) {
			switch (rex_dispatch_address) {
				case 0x881AAED0:
				case 0x881AAF10:
				case 0x881AAFAC:
				case 0x881AB1C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881AAEC8;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881AAED0: goto loc_881AAED0;
		case 0x881AAF10: goto loc_881AAF10;
		case 0x881AAFAC: goto loc_881AAFAC;
		case 0x881AB1C0: goto loc_881AB1C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050818
	ctx.lr = 0x881AAED0;
	__savegprlr_16(ctx, base);
loc_881AAED0:
	// stwu r1,-288(r1)
	ctx.current_instruction = 0x881AAED0;
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21888(r3)
	ctx.current_instruction = 0x881AAED4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21888);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r17,256(r3)
	ctx.current_instruction = 0x881AAEDC;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x881aafa4
	if (!ctx.cr6.eq) goto loc_881AAFA4;
	// lwz r11,14836(r3)
	ctx.current_instruction = 0x881AAEF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x881aafa4
	if (!ctx.cr6.gt) goto loc_881AAFA4;
	// ld r11,3632(r3)
	ctx.current_instruction = 0x881AAF00;
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x881aafa4
	if (!ctx.cr6.gt) goto loc_881AAFA4;
	// bl 0x8814d328
	ctx.lr = 0x881AAF10;
	sub_8814D328(ctx, base);
loc_881AAF10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881aafa4
	if (!ctx.cr6.eq) goto loc_881AAFA4;
	// lwz r29,20404(r31)
	ctx.current_instruction = 0x881AAF18;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// lwz r10,22196(r31)
	ctx.current_instruction = 0x881AAF1C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22196);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20400(r31)
	ctx.current_instruction = 0x881AAF24;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// lwz r6,36(r31)
	ctx.current_instruction = 0x881AAF28;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,3772(r31)
	ctx.current_instruction = 0x881AAF30;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3772);
	// lwz r9,22188(r31)
	ctx.current_instruction = 0x881AAF34;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 22188);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r28,r6,r11
	ctx.r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r7,32(r31)
	ctx.current_instruction = 0x881AAF40;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,8(r5)
	ctx.current_instruction = 0x881AAF44;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r4,4(r5)
	ctx.current_instruction = 0x881AAF48;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r30,0(r5)
	ctx.current_instruction = 0x881AAF4C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 1;
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r8,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r8.s64 = temp.s64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// b 0x881ab044
	goto loc_881AB044;
loc_881AAFA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8814d328
	ctx.lr = 0x881AAFAC;
	sub_8814D328(ctx, base);
loc_881AAFAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881aafd8
	if (!ctx.cr6.eq) goto loc_881AAFD8;
	// lwz r10,20400(r31)
	ctx.current_instruction = 0x881AAFB4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20400);
	// lwz r9,20404(r31)
	ctx.current_instruction = 0x881AAFB8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20404);
	// lwz r11,180(r31)
	ctx.current_instruction = 0x881AAFBC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,192(r31)
	ctx.current_instruction = 0x881AAFC4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// b 0x881aafe0
	goto loc_881AAFE0;
loc_881AAFD8:
	// lwz r9,96(r31)
	ctx.current_instruction = 0x881AAFD8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,108(r31)
	ctx.current_instruction = 0x881AAFDC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
loc_881AAFE0:
	// lwz r10,36(r31)
	ctx.current_instruction = 0x881AAFE0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,108(r31)
	ctx.current_instruction = 0x881AAFE4;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r4,3772(r31)
	ctx.current_instruction = 0x881AAFE8;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3772);
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,96(r31)
	ctx.current_instruction = 0x881AAFF0;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,32(r31)
	ctx.current_instruction = 0x881AAFF4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,220(r31)
	ctx.current_instruction = 0x881AAFF8;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,224(r31)
	ctx.current_instruction = 0x881AAFFC;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r30,4(r4)
	ctx.current_instruction = 0x881AB000;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,8(r4)
	ctx.current_instruction = 0x881AB004;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,0(r4)
	ctx.current_instruction = 0x881AB008;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r28,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r3.s32 >> 1;
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addze r8,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// add r28,r3,r7
	ctx.r28.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r3,r29,r6
	ctx.r3.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r6,r30,r7
	ctx.r6.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_881AB044:
	// lwz r26,48(r31)
	ctx.current_instruction = 0x881AB044;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r27,52(r31)
	ctx.current_instruction = 0x881AB048;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r10,15556(r31)
	ctx.current_instruction = 0x881AB04C;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// rotlwi r7,r26,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// rotlwi r3,r27,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// lwz r29,40(r31)
	ctx.current_instruction = 0x881AB058;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r24,32(r31)
	ctx.current_instruction = 0x881AB060;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r8,15692(r31)
	ctx.current_instruction = 0x881AB068;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15692);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// lwz r23,44(r31)
	ctx.current_instruction = 0x881AB070;
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r19,36(r31)
	ctx.current_instruction = 0x881AB074;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// andc r16,r10,r7
	ctx.r16.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// lwz r30,64(r31)
	ctx.current_instruction = 0x881AB07C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// andc r22,r10,r3
	ctx.r22.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// lwz r18,72(r31)
	ctx.current_instruction = 0x881AB084;
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// subf r7,r24,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r24.u64;
	// lwz r28,68(r31)
	ctx.current_instruction = 0x881AB08C;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// add r3,r8,r25
	ctx.r3.u64 = ctx.r8.u64 + ctx.r25.u64;
	// lwz r29,76(r31)
	ctx.current_instruction = 0x881AB094;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// subf r8,r19,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r19.u64;
	// subf r19,r30,r18
	ctx.r19.u64 = ctx.r18.u64 - ctx.r30.u64;
	// twlgei r22,-1
	if (ctx.r22.s32 == -1 || ctx.r22.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r18,r28,r29
	ctx.r18.u64 = ctx.r29.u64 - ctx.r28.u64;
	// divw r23,r27,r10
	ctx.r23.u64 = uint32_t((ctx.r10.s32 && !(ctx.r27.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r27.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r22,r26,r10
	ctx.r22.u64 = uint32_t((ctx.r10.s32 && !(ctx.r26.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r26.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r16,-1
	if (ctx.r16.s32 == -1 || ctx.r16.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x881ab0cc
	if (!ctx.cr6.eq) goto loc_881AB0CC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881ab154
	if (ctx.cr6.eq) goto loc_881AB154;
loc_881AB0CC:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab0f4
	if (!ctx.cr6.eq) goto loc_881AB0F4;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881AB0D4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r29,15556(r31)
	ctx.current_instruction = 0x881AB0D8;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// mullw r30,r10,r22
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r30,r29,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r30,r10,r30
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// b 0x881ab154
	goto loc_881AB154;
loc_881AB0F4:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab114
	if (!ctx.cr6.eq) goto loc_881AB114;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881AB0FC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r30,15556(r31)
	ctx.current_instruction = 0x881AB100;
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// subf r10,r10,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r10.u64;
	// rlwinm r30,r30,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x881ab14c
	goto loc_881AB14C;
loc_881AB114:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// mullw r30,r28,r23
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// bne cr6,0x881ab13c
	if (!ctx.cr6.eq) goto loc_881AB13C;
	// lwz r29,64(r31)
	ctx.current_instruction = 0x881AB120;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r10,15556(r31)
	ctx.current_instruction = 0x881AB124;
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r30,r30,r10
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// b 0x881ab154
	goto loc_881AB154;
loc_881AB13C:
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881AB13C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lhz r29,15556(r31)
	ctx.current_instruction = 0x881AB140;
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r30.u64;
	// rlwinm r30,r29,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
loc_881AB14C:
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_881AB154:
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lwz r29,15552(r31)
	ctx.current_instruction = 0x881AB158;
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15552);
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r25,r10,22094
	ctx.r25.u64 = ctx.r10.u64 | 22094;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x881ab384
	if (ctx.cr6.gt) goto loc_881AB384;
	// beq cr6,0x881ab414
	if (ctx.cr6.eq) goto loc_881AB414;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x881ab1cc
	if (ctx.cr6.eq) goto loc_881AB1CC;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x881ab1cc
	if (ctx.cr6.eq) goto loc_881AB1CC;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x881ab414
	if (ctx.cr6.eq) goto loc_881AB414;
loc_881AB18C:
	// lwz r30,144(r1)
	ctx.current_instruction = 0x881AB18C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_881AB190:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r20,132(r1)
	ctx.current_instruction = 0x881AB194;
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r21,124(r1)
	ctx.current_instruction = 0x881AB19C;
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r31,140(r1)
	ctx.current_instruction = 0x881AB1A0;
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// stw r17,116(r1)
	ctx.current_instruction = 0x881AB1A8;
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r22,108(r1)
	ctx.current_instruction = 0x881AB1AC;
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r23,100(r1)
	ctx.current_instruction = 0x881AB1B0;
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r18,92(r1)
	ctx.current_instruction = 0x881AB1B4;
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r19,84(r1)
	ctx.current_instruction = 0x881AB1B8;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bctrl 
	ctx.lr = 0x881AB1C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881AB1C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x88050868
	__restgprlr_16(ctx, base);
	return;
loc_881AB1CC:
	// lhz r28,15556(r31)
	ctx.current_instruction = 0x881AB1CC;
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 15556);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// beq cr6,0x881ab1f4
	if (ctx.cr6.eq) goto loc_881AB1F4;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// bne cr6,0x881ab1fc
	if (!ctx.cr6.eq) goto loc_881AB1FC;
	// lis r10,-30678
	ctx.r10.s64 = -2010513408;
	// addi r30,r10,24384
	ctx.r30.s64 = ctx.r10.s64 + 24384;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// b 0x881ab1fc
	goto loc_881AB1FC;
loc_881AB1F4:
	// lis r30,-30678
	ctx.r30.s64 = -2010513408;
	// addi r30,r30,24384
	ctx.r30.s64 = ctx.r30.s64 + 24384;
loc_881AB1FC:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x881ab250
	if (!ctx.cr6.eq) goto loc_881AB250;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x881ab250
	if (!ctx.cr6.eq) goto loc_881AB250;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x881ab21c
	if (!ctx.cr6.eq) goto loc_881AB21C;
	// lwz r30,0(r30)
	ctx.current_instruction = 0x881AB214;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x881ab240
	goto loc_881AB240;
loc_881AB21C:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab22c
	if (!ctx.cr6.eq) goto loc_881AB22C;
	// lwz r30,4(r30)
	ctx.current_instruction = 0x881AB224;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x881ab240
	goto loc_881AB240;
loc_881AB22C:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab23c
	if (!ctx.cr6.eq) goto loc_881AB23C;
	// lwz r30,12(r30)
	ctx.current_instruction = 0x881AB234;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x881ab240
	goto loc_881AB240;
loc_881AB23C:
	// lwz r30,8(r30)
	ctx.current_instruction = 0x881AB23C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_881AB240:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// bne cr6,0x881ab190
	if (!ctx.cr6.eq) goto loc_881AB190;
	// lwz r17,260(r31)
	ctx.current_instruction = 0x881AB248;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB250:
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881ab2a0
	if (!ctx.cr6.eq) goto loc_881AB2A0;
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x881ab2a0
	if (!ctx.cr6.eq) goto loc_881AB2A0;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab278
	if (!ctx.cr6.eq) goto loc_881AB278;
	// lwz r30,20(r30)
	ctx.current_instruction = 0x881AB270;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB278:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab288
	if (!ctx.cr6.eq) goto loc_881AB288;
	// lwz r30,28(r30)
	ctx.current_instruction = 0x881AB280;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB288:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x881ab298
	if (!ctx.cr6.eq) goto loc_881AB298;
	// lwz r30,16(r30)
	ctx.current_instruction = 0x881AB290;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB298:
	// lwz r30,24(r30)
	ctx.current_instruction = 0x881AB298;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB2A0:
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x881ab2f0
	if (!ctx.cr6.eq) goto loc_881AB2F0;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x881ab2f0
	if (!ctx.cr6.eq) goto loc_881AB2F0;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab2c8
	if (!ctx.cr6.eq) goto loc_881AB2C8;
	// lwz r30,36(r30)
	ctx.current_instruction = 0x881AB2C0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB2C8:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab2d8
	if (!ctx.cr6.eq) goto loc_881AB2D8;
	// lwz r30,44(r30)
	ctx.current_instruction = 0x881AB2D0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB2D8:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x881ab2e8
	if (!ctx.cr6.eq) goto loc_881AB2E8;
	// lwz r30,32(r30)
	ctx.current_instruction = 0x881AB2E0;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB2E8:
	// lwz r30,40(r30)
	ctx.current_instruction = 0x881AB2E8;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB2F0:
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x881ab344
	if (ctx.cr6.lt) goto loc_881AB344;
	// cmpw cr6,r19,r7
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x881ab344
	if (ctx.cr6.lt) goto loc_881AB344;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab310
	if (!ctx.cr6.eq) goto loc_881AB310;
	// lwz r30,52(r30)
	ctx.current_instruction = 0x881AB308;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// b 0x881ab334
	goto loc_881AB334;
loc_881AB310:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab320
	if (!ctx.cr6.eq) goto loc_881AB320;
	// lwz r30,60(r30)
	ctx.current_instruction = 0x881AB318;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// b 0x881ab334
	goto loc_881AB334;
loc_881AB320:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x881ab330
	if (!ctx.cr6.eq) goto loc_881AB330;
	// lwz r30,48(r30)
	ctx.current_instruction = 0x881AB328;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x881ab334
	goto loc_881AB334;
loc_881AB330:
	// lwz r30,56(r30)
	ctx.current_instruction = 0x881AB330;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
loc_881AB334:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// bne cr6,0x881ab190
	if (!ctx.cr6.eq) goto loc_881AB190;
	// lwz r17,260(r31)
	ctx.current_instruction = 0x881AB33C;
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB344:
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r10,r29,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r29.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r29.s32 / ctx.r10.s32 : 0);
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r18.s32, ctx.xer);
	// bgt cr6,0x881ab37c
	if (ctx.cr6.gt) goto loc_881AB37C;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r19.s32, ctx.xer);
	// bgt cr6,0x881ab374
	if (ctx.cr6.gt) goto loc_881AB374;
	// lwz r30,64(r30)
	ctx.current_instruction = 0x881AB36C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB374:
	// lwz r30,68(r30)
	ctx.current_instruction = 0x881AB374;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB37C:
	// lwz r30,72(r30)
	ctx.current_instruction = 0x881AB37C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB384:
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881ab414
	if (ctx.cr6.eq) goto loc_881AB414;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r10,r10,21849
	ctx.r10.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x881ab3e4
	if (ctx.cr6.eq) goto loc_881AB3E4;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r10,r10,22869
	ctx.r10.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x881ab18c
	if (!ctx.cr6.eq) goto loc_881AB18C;
	// neg r31,r26
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// neg r10,r27
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// andc r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r26.u64;
	// andc r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r27.u64;
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// rlwinm r31,r10,2,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r10,r10,14284
	ctx.r10.s64 = ctx.r10.s64 + 14284;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r31,r10
	ctx.current_instruction = 0x881AB3DC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB3E4:
	// neg r31,r26
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r26.u64);
	// neg r10,r27
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r27.u64);
	// andc r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r26.u64;
	// andc r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r27.u64;
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// rlwinm r31,r10,2,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r10,r10,14268
	ctx.r10.s64 = ctx.r10.s64 + 14268;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r31,r10
	ctx.current_instruction = 0x881AB40C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB414:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x881ab454
	if (ctx.cr6.eq) goto loc_881AB454;
	// subf. r30,r25,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x881ab43c
	if (ctx.cr0.eq) goto loc_881AB43C;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// bne cr6,0x881ab464
	if (!ctx.cr6.eq) goto loc_881AB464;
	// lwz r20,22152(r31)
	ctx.current_instruction = 0x881AB430;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 22152);
	// lwz r21,22156(r31)
	ctx.current_instruction = 0x881AB434;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 22156);
	// b 0x881ab45c
	goto loc_881AB45C;
loc_881AB43C:
	// lis r10,-30719
	ctx.r10.s64 = -2013200384;
	// lwz r21,22152(r31)
	ctx.current_instruction = 0x881AB440;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 22152);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r30,r10,26752
	ctx.r30.s64 = ctx.r10.s64 + 26752;
	// addi r24,r30,32
	ctx.r24.s64 = ctx.r30.s64 + 32;
	// b 0x881ab464
	goto loc_881AB464;
loc_881AB454:
	// lwz r21,22152(r31)
	ctx.current_instruction = 0x881AB454;
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 22152);
	// lwz r20,22156(r31)
	ctx.current_instruction = 0x881AB458;
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 22156);
loc_881AB45C:
	// lis r30,-30719
	ctx.r30.s64 = -2013200384;
	// addi r24,r30,26752
	ctx.r24.s64 = ctx.r30.s64 + 26752;
loc_881AB464:
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881AB464;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x881ab480
	if (!ctx.cr6.eq) goto loc_881AB480;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x881ab520
	if (ctx.cr6.eq) goto loc_881AB520;
loc_881AB480:
	// subf r10,r29,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r29.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r30,r10,1
	ctx.r30.u64 = ctx.r10.u64 ^ 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x881ab4d8
	if (!ctx.cr6.eq) goto loc_881AB4D8;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881AB49C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,68(r31)
	ctx.current_instruction = 0x881AB4A4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r28,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 1;
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
	// rotlwi r29,r10,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r31,r10,r30
	ctx.r31.u64 = uint32_t((ctx.r30.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r10.s32 / ctx.r30.s32 : 0);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addze r29,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r29.s64 = temp.s64;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x881ab518
	goto loc_881AB518;
loc_881AB4D8:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab540
	if (!ctx.cr6.eq) goto loc_881AB540;
	// lwz r10,64(r31)
	ctx.current_instruction = 0x881AB4E0;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r31,68(r31)
	ctx.current_instruction = 0x881AB4E4;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r22.s32);
loc_881AB4F4:
	// srawi r29,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 1;
	// rotlwi r31,r10,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r30
	ctx.r10.u64 = uint32_t((ctx.r30.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r10.s32 / ctx.r30.s32 : 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r31.u64;
	// addze r29,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r29.s64 = temp.s64;
	// twlgei r30,-1
	if (ctx.r30.s32 == -1 || ctx.r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r31,r29,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r29.u64;
loc_881AB518:
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r21,r31,r21
	ctx.r21.u64 = ctx.r31.u64 + ctx.r21.u64;
loc_881AB520:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x881ab5ac
	if (!ctx.cr6.eq) goto loc_881AB5AC;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x881ab5ac
	if (!ctx.cr6.eq) goto loc_881AB5AC;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab584
	if (!ctx.cr6.eq) goto loc_881AB584;
	// lwz r30,4(r24)
	ctx.current_instruction = 0x881AB538;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB540:
	// lwz r10,68(r31)
	ctx.current_instruction = 0x881AB540;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lwz r31,64(r31)
	ctx.current_instruction = 0x881AB548;
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// bne cr6,0x881ab4f4
	if (!ctx.cr6.eq) goto loc_881AB4F4;
	// rotlwi r29,r10,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r28,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r31.s32 >> 1;
	// divw r31,r10,r30
	ctx.r31.u64 = uint32_t((ctx.r30.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r10.s32 / ctx.r30.s32 : 0);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// addze r29,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r29.s64 = temp.s64;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x881ab518
	goto loc_881AB518;
loc_881AB584:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab594
	if (!ctx.cr6.eq) goto loc_881AB594;
	// lwz r30,12(r24)
	ctx.current_instruction = 0x881AB58C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB594:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x881ab5a4
	if (!ctx.cr6.eq) goto loc_881AB5A4;
	// lwz r30,0(r24)
	ctx.current_instruction = 0x881AB59C;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB5A4:
	// lwz r30,8(r24)
	ctx.current_instruction = 0x881AB5A4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB5AC:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x881ab5bc
	if (!ctx.cr6.eq) goto loc_881AB5BC;
	// lwz r30,20(r24)
	ctx.current_instruction = 0x881AB5B4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB5BC:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// bne cr6,0x881ab5cc
	if (!ctx.cr6.eq) goto loc_881AB5CC;
	// lwz r30,28(r24)
	ctx.current_instruction = 0x881AB5C4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB5CC:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x881ab5dc
	if (!ctx.cr6.eq) goto loc_881AB5DC;
	// lwz r30,16(r24)
	ctx.current_instruction = 0x881AB5D4;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// b 0x881ab190
	goto loc_881AB190;
loc_881AB5DC:
	// lwz r30,24(r24)
	ctx.current_instruction = 0x881AB5DC;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// b 0x881ab190
	goto loc_881AB190;
}

DEFINE_REX_FUNC(sub_881B9020) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x881B9020;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x881B9020) {
			switch (rex_dispatch_address) {
				case 0x881B9028:
				case 0x881B9174:
				case 0x881B91AC:
				case 0x881B91EC:
				case 0x881B9210:
				case 0x881B9230:
				case 0x881B9258:
				case 0x881B9288:
				case 0x881B92B8:
				case 0x881B92DC:
				case 0x881B9304:
				case 0x881B9328:
				case 0x881B9348:
				case 0x881B9370:
				case 0x881B93A0:
				case 0x881B93D0:
				case 0x881B93F4:
				case 0x881B941C:
				case 0x881B9440:
				case 0x881B946C:
				case 0x881B9494:
				case 0x881B94E0:
				case 0x881B9518:
				case 0x881B9558:
				case 0x881B957C:
				case 0x881B959C:
				case 0x881B95C4:
				case 0x881B95F4:
				case 0x881B9624:
				case 0x881B9648:
				case 0x881B9670:
				case 0x881B9694:
				case 0x881B96B4:
				case 0x881B96DC:
				case 0x881B970C:
				case 0x881B973C:
				case 0x881B9760:
				case 0x881B9788:
				case 0x881B97AC:
				case 0x881B97D8:
				case 0x881B9804:
				case 0x881B9854:
				case 0x881B988C:
				case 0x881B98CC:
				case 0x881B98F0:
				case 0x881B9910:
				case 0x881B9938:
				case 0x881B9968:
				case 0x881B9998:
				case 0x881B99BC:
				case 0x881B99E4:
				case 0x881B9A08:
				case 0x881B9A28:
				case 0x881B9A50:
				case 0x881B9A80:
				case 0x881B9AB0:
				case 0x881B9AD4:
				case 0x881B9AFC:
				case 0x881B9B20:
				case 0x881B9B4C:
				case 0x881B9B78:
				case 0x881B9BC4:
				case 0x881B9BFC:
				case 0x881B9C3C:
				case 0x881B9C60:
				case 0x881B9C80:
				case 0x881B9CA8:
				case 0x881B9CD8:
				case 0x881B9D08:
				case 0x881B9D2C:
				case 0x881B9D54:
				case 0x881B9D78:
				case 0x881B9D98:
				case 0x881B9DC0:
				case 0x881B9DF0:
				case 0x881B9E20:
				case 0x881B9E44:
				case 0x881B9E6C:
				case 0x881B9E90:
				case 0x881B9EBC:
				case 0x881B9EE8:
				case 0x881B9F2C:
				case 0x881B9F64:
				case 0x881B9FA4:
				case 0x881B9FC8:
				case 0x881B9FE8:
				case 0x881BA010:
				case 0x881BA040:
				case 0x881BA070:
				case 0x881BA094:
				case 0x881BA0BC:
				case 0x881BA0E0:
				case 0x881BA100:
				case 0x881BA128:
				case 0x881BA158:
				case 0x881BA188:
				case 0x881BA1AC:
				case 0x881BA1D4:
				case 0x881BA1F8:
				case 0x881BA224:
				case 0x881BA250:
				case 0x881BA294:
				case 0x881BA2CC:
				case 0x881BA30C:
				case 0x881BA330:
				case 0x881BA350:
				case 0x881BA378:
				case 0x881BA3A8:
				case 0x881BA3D8:
				case 0x881BA3FC:
				case 0x881BA424:
				case 0x881BA448:
				case 0x881BA468:
				case 0x881BA490:
				case 0x881BA4C0:
				case 0x881BA4F0:
				case 0x881BA514:
				case 0x881BA53C:
				case 0x881BA560:
				case 0x881BA58C:
				case 0x881BA5C0:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881B9020;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x881B9028: goto loc_881B9028;
		case 0x881B9174: goto loc_881B9174;
		case 0x881B91AC: goto loc_881B91AC;
		case 0x881B91EC: goto loc_881B91EC;
		case 0x881B9210: goto loc_881B9210;
		case 0x881B9230: goto loc_881B9230;
		case 0x881B9258: goto loc_881B9258;
		case 0x881B9288: goto loc_881B9288;
		case 0x881B92B8: goto loc_881B92B8;
		case 0x881B92DC: goto loc_881B92DC;
		case 0x881B9304: goto loc_881B9304;
		case 0x881B9328: goto loc_881B9328;
		case 0x881B9348: goto loc_881B9348;
		case 0x881B9370: goto loc_881B9370;
		case 0x881B93A0: goto loc_881B93A0;
		case 0x881B93D0: goto loc_881B93D0;
		case 0x881B93F4: goto loc_881B93F4;
		case 0x881B941C: goto loc_881B941C;
		case 0x881B9440: goto loc_881B9440;
		case 0x881B946C: goto loc_881B946C;
		case 0x881B9494: goto loc_881B9494;
		case 0x881B94E0: goto loc_881B94E0;
		case 0x881B9518: goto loc_881B9518;
		case 0x881B9558: goto loc_881B9558;
		case 0x881B957C: goto loc_881B957C;
		case 0x881B959C: goto loc_881B959C;
		case 0x881B95C4: goto loc_881B95C4;
		case 0x881B95F4: goto loc_881B95F4;
		case 0x881B9624: goto loc_881B9624;
		case 0x881B9648: goto loc_881B9648;
		case 0x881B9670: goto loc_881B9670;
		case 0x881B9694: goto loc_881B9694;
		case 0x881B96B4: goto loc_881B96B4;
		case 0x881B96DC: goto loc_881B96DC;
		case 0x881B970C: goto loc_881B970C;
		case 0x881B973C: goto loc_881B973C;
		case 0x881B9760: goto loc_881B9760;
		case 0x881B9788: goto loc_881B9788;
		case 0x881B97AC: goto loc_881B97AC;
		case 0x881B97D8: goto loc_881B97D8;
		case 0x881B9804: goto loc_881B9804;
		case 0x881B9854: goto loc_881B9854;
		case 0x881B988C: goto loc_881B988C;
		case 0x881B98CC: goto loc_881B98CC;
		case 0x881B98F0: goto loc_881B98F0;
		case 0x881B9910: goto loc_881B9910;
		case 0x881B9938: goto loc_881B9938;
		case 0x881B9968: goto loc_881B9968;
		case 0x881B9998: goto loc_881B9998;
		case 0x881B99BC: goto loc_881B99BC;
		case 0x881B99E4: goto loc_881B99E4;
		case 0x881B9A08: goto loc_881B9A08;
		case 0x881B9A28: goto loc_881B9A28;
		case 0x881B9A50: goto loc_881B9A50;
		case 0x881B9A80: goto loc_881B9A80;
		case 0x881B9AB0: goto loc_881B9AB0;
		case 0x881B9AD4: goto loc_881B9AD4;
		case 0x881B9AFC: goto loc_881B9AFC;
		case 0x881B9B20: goto loc_881B9B20;
		case 0x881B9B4C: goto loc_881B9B4C;
		case 0x881B9B78: goto loc_881B9B78;
		case 0x881B9BC4: goto loc_881B9BC4;
		case 0x881B9BFC: goto loc_881B9BFC;
		case 0x881B9C3C: goto loc_881B9C3C;
		case 0x881B9C60: goto loc_881B9C60;
		case 0x881B9C80: goto loc_881B9C80;
		case 0x881B9CA8: goto loc_881B9CA8;
		case 0x881B9CD8: goto loc_881B9CD8;
		case 0x881B9D08: goto loc_881B9D08;
		case 0x881B9D2C: goto loc_881B9D2C;
		case 0x881B9D54: goto loc_881B9D54;
		case 0x881B9D78: goto loc_881B9D78;
		case 0x881B9D98: goto loc_881B9D98;
		case 0x881B9DC0: goto loc_881B9DC0;
		case 0x881B9DF0: goto loc_881B9DF0;
		case 0x881B9E20: goto loc_881B9E20;
		case 0x881B9E44: goto loc_881B9E44;
		case 0x881B9E6C: goto loc_881B9E6C;
		case 0x881B9E90: goto loc_881B9E90;
		case 0x881B9EBC: goto loc_881B9EBC;
		case 0x881B9EE8: goto loc_881B9EE8;
		case 0x881B9F2C: goto loc_881B9F2C;
		case 0x881B9F64: goto loc_881B9F64;
		case 0x881B9FA4: goto loc_881B9FA4;
		case 0x881B9FC8: goto loc_881B9FC8;
		case 0x881B9FE8: goto loc_881B9FE8;
		case 0x881BA010: goto loc_881BA010;
		case 0x881BA040: goto loc_881BA040;
		case 0x881BA070: goto loc_881BA070;
		case 0x881BA094: goto loc_881BA094;
		case 0x881BA0BC: goto loc_881BA0BC;
		case 0x881BA0E0: goto loc_881BA0E0;
		case 0x881BA100: goto loc_881BA100;
		case 0x881BA128: goto loc_881BA128;
		case 0x881BA158: goto loc_881BA158;
		case 0x881BA188: goto loc_881BA188;
		case 0x881BA1AC: goto loc_881BA1AC;
		case 0x881BA1D4: goto loc_881BA1D4;
		case 0x881BA1F8: goto loc_881BA1F8;
		case 0x881BA224: goto loc_881BA224;
		case 0x881BA250: goto loc_881BA250;
		case 0x881BA294: goto loc_881BA294;
		case 0x881BA2CC: goto loc_881BA2CC;
		case 0x881BA30C: goto loc_881BA30C;
		case 0x881BA330: goto loc_881BA330;
		case 0x881BA350: goto loc_881BA350;
		case 0x881BA378: goto loc_881BA378;
		case 0x881BA3A8: goto loc_881BA3A8;
		case 0x881BA3D8: goto loc_881BA3D8;
		case 0x881BA3FC: goto loc_881BA3FC;
		case 0x881BA424: goto loc_881BA424;
		case 0x881BA448: goto loc_881BA448;
		case 0x881BA468: goto loc_881BA468;
		case 0x881BA490: goto loc_881BA490;
		case 0x881BA4C0: goto loc_881BA4C0;
		case 0x881BA4F0: goto loc_881BA4F0;
		case 0x881BA514: goto loc_881BA514;
		case 0x881BA53C: goto loc_881BA53C;
		case 0x881BA560: goto loc_881BA560;
		case 0x881BA58C: goto loc_881BA58C;
		case 0x881BA5C0: goto loc_881BA5C0;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050810
	ctx.lr = 0x881B9028;
	__savegprlr_14(ctx, base);
loc_881B9028:
	// stwu r1,-240(r1)
	ctx.current_instruction = 0x881B9028;
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r8,324(r1)
	ctx.current_instruction = 0x881B9030;
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	ctx.current_instruction = 0x881B9038;
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// lwz r11,20404(r3)
	ctx.current_instruction = 0x881B9040;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20404);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r29,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r23.s32 >> 1;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// lwz r30,208(r31)
	ctx.current_instruction = 0x881B9050;
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,20400(r3)
	ctx.current_instruction = 0x881B905C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20400);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lbz r9,4(r4)
	ctx.current_instruction = 0x881B9064;
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mullw r30,r5,r30
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// lwz r5,332(r31)
	ctx.current_instruction = 0x881B906C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r26,3796(r31)
	ctx.current_instruction = 0x881B9070;
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3796);
	// lwz r28,6608(r31)
	ctx.current_instruction = 0x881B9074;
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 6608);
	// lwz r27,3792(r31)
	ctx.current_instruction = 0x881B9078;
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r19,340(r31)
	ctx.current_instruction = 0x881B907C;
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// stw r5,84(r1)
	ctx.current_instruction = 0x881B9080;
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881B9084;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// add r20,r7,r10
	ctx.r20.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881B9090;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// srawi r3,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r21.s32 >> 1;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r4,3788(r31)
	ctx.current_instruction = 0x881B90A0;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3788);
	// add r16,r9,r7
	ctx.r16.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r5,r20,r6
	ctx.r5.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r6.s32);
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r16,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + ctx.r29.u64;
	// not r3,r22
	ctx.r3.u64 = ~ctx.r22.u64;
	// lwz r22,84(r1)
	ctx.current_instruction = 0x881B90C4;
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// not r4,r23
	ctx.r4.u64 = ~ctx.r23.u64;
	// not r7,r21
	ctx.r7.u64 = ~ctx.r21.u64;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r23,r5,r28
	ctx.r23.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,80(r1)
	ctx.current_instruction = 0x881B90E0;
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// clrlwi r21,r4,31
	ctx.r21.u64 = ctx.r4.u32 & 0x1;
	// clrlwi r20,r3,31
	ctx.r20.u64 = ctx.r3.u32 & 0x1;
	// clrlwi r15,r7,31
	ctx.r15.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r14,r8,31
	ctx.r14.u64 = ctx.r8.u32 & 0x1;
	// add r16,r27,r11
	ctx.r16.u64 = ctx.r27.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x881b9108
	if (ctx.cr6.eq) goto loc_881B9108;
	// lbz r11,0(r18)
	ctx.current_instruction = 0x881B9100;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// clrlwi r19,r11,29
	ctx.r19.u64 = ctx.r11.u32 & 0x7;
loc_881B9108:
	// lwz r11,396(r31)
	ctx.current_instruction = 0x881B9108;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x881b912c
	if (ctx.cr6.eq) goto loc_881B912C;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881B9114;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r31
	ctx.r22.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x881b9130
	goto loc_881B9130;
loc_881B912C:
	// addi r22,r31,2916
	ctx.r22.s64 = ctx.r31.s64 + 2916;
loc_881B9130:
	// lbz r11,19(r18)
	ctx.current_instruction = 0x881B9130;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b9470
	if (ctx.cr6.eq) goto loc_881B9470;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881B913C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881b91c0
	if (ctx.cr6.eq) goto loc_881B91C0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B914C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9150;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9154;
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
	ctx.current_instruction = 0x881B9164;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9168;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9174
	if (!ctx.cr0.lt) goto loc_881B9174;
	// bl 0x88156678
	ctx.lr = 0x881B9174;
	sub_88156678(ctx, base);
loc_881B9174:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b9184
	if (!ctx.cr6.eq) goto loc_881B9184;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x881b91c8
	goto loc_881B91C8;
loc_881B9184:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9184;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9188;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B918C;
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
	ctx.current_instruction = 0x881B919C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B91A0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b91ac
	if (!ctx.cr0.lt) goto loc_881B91AC;
	// bl 0x88156678
	ctx.lr = 0x881B91AC;
	sub_88156678(ctx, base);
loc_881B91AC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// b 0x881b9210
	goto loc_881B9210;
loc_881B91C0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881b9210
	if (!ctx.cr6.eq) goto loc_881B9210;
loc_881B91C8:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B91C8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881B91D4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881B91DC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B91EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B91EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881B91F4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881B9200;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9210:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x881b9328
	if (!ctx.cr6.eq) goto loc_881B9328;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B921C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9230;
	sub_88052D90(ctx, base);
loc_881B9230:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9230;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9234;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9238;
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
	ctx.current_instruction = 0x881B9248;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B924C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9258
	if (!ctx.cr0.lt) goto loc_881B9258;
	// bl 0x88156678
	ctx.lr = 0x881B9258;
	sub_88156678(ctx, base);
loc_881B9258:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b92e4
	if (ctx.cr6.eq) goto loc_881B92E4;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9260;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9264;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9268;
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
	ctx.current_instruction = 0x881B9278;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B927C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9288
	if (!ctx.cr0.lt) goto loc_881B9288;
	// bl 0x88156678
	ctx.lr = 0x881B9288;
	sub_88156678(ctx, base);
loc_881B9288:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B928C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B9294;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B92B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B92B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B92C0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B92CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B92DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B92DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9328
	if (ctx.cr6.eq) goto loc_881B9328;
loc_881B92E4:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B92E4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B92F0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9304:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B930C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9318;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9328:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881b9440
	if (!ctx.cr6.eq) goto loc_881B9440;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B9334;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9348;
	sub_88052D90(ctx, base);
loc_881B9348:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9348;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B934C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9350;
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
	ctx.current_instruction = 0x881B9360;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9364;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9370
	if (!ctx.cr0.lt) goto loc_881B9370;
	// bl 0x88156678
	ctx.lr = 0x881B9370;
	sub_88156678(ctx, base);
loc_881B9370:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b93fc
	if (ctx.cr6.eq) goto loc_881B93FC;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9378;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B937C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9380;
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
	ctx.current_instruction = 0x881B9390;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9394;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b93a0
	if (!ctx.cr0.lt) goto loc_881B93A0;
	// bl 0x88156678
	ctx.lr = 0x881B93A0;
	sub_88156678(ctx, base);
loc_881B93A0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B93A4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B93AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B93D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B93D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B93D8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B93E4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B93F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B93F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9440
	if (ctx.cr6.eq) goto loc_881B9440;
loc_881B93FC:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B93FC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9408;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B941C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B941C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9424;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9430;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9440:
	// lwz r11,3116(r31)
	ctx.current_instruction = 0x881B9440;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881B944C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,336(r31)
	ctx.current_instruction = 0x881B9454;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B946C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B946C:
	// b 0x881b9494
	goto loc_881B9494;
loc_881B9470:
	// lwz r11,3120(r31)
	ctx.current_instruction = 0x881B9470;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r9,336(r31)
	ctx.current_instruction = 0x881B947C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9494:
	// lbz r11,18(r18)
	ctx.current_instruction = 0x881B9494;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 18);
	// addi r27,r25,8
	ctx.r27.s64 = ctx.r25.s64 + 8;
	// addi r26,r28,8
	ctx.r26.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b97dc
	if (ctx.cr6.eq) goto loc_881B97DC;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881B94A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881b952c
	if (ctx.cr6.eq) goto loc_881B952C;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B94B8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B94BC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B94C0;
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
	ctx.current_instruction = 0x881B94D0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B94D4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b94e0
	if (!ctx.cr0.lt) goto loc_881B94E0;
	// bl 0x88156678
	ctx.lr = 0x881B94E0;
	sub_88156678(ctx, base);
loc_881B94E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b94f0
	if (!ctx.cr6.eq) goto loc_881B94F0;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x881b9534
	goto loc_881B9534;
loc_881B94F0:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B94F0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B94F4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B94F8;
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
	ctx.current_instruction = 0x881B9508;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B950C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9518
	if (!ctx.cr0.lt) goto loc_881B9518;
	// bl 0x88156678
	ctx.lr = 0x881B9518;
	sub_88156678(ctx, base);
loc_881B9518:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// b 0x881b957c
	goto loc_881B957C;
loc_881B952C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881b957c
	if (!ctx.cr6.eq) goto loc_881B957C;
loc_881B9534:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9534;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881B9540;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881B9548;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9558;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9558:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881B9560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881B956C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B957C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B957C:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x881b9694
	if (!ctx.cr6.eq) goto loc_881B9694;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B9588;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B959C;
	sub_88052D90(ctx, base);
loc_881B959C:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B959C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B95A0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B95A4;
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
	ctx.current_instruction = 0x881B95B4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B95B8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b95c4
	if (!ctx.cr0.lt) goto loc_881B95C4;
	// bl 0x88156678
	ctx.lr = 0x881B95C4;
	sub_88156678(ctx, base);
loc_881B95C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b9650
	if (ctx.cr6.eq) goto loc_881B9650;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B95CC;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B95D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B95D4;
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
	ctx.current_instruction = 0x881B95E4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B95E8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b95f4
	if (!ctx.cr0.lt) goto loc_881B95F4;
	// bl 0x88156678
	ctx.lr = 0x881B95F4;
	sub_88156678(ctx, base);
loc_881B95F4:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B95F8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B9600;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B9624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9624:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B962C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9638;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9648:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9694
	if (ctx.cr6.eq) goto loc_881B9694;
loc_881B9650:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9650;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B965C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9670:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B9678;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9684;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9694:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881b97ac
	if (!ctx.cr6.eq) goto loc_881B97AC;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B96A0;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B96B4;
	sub_88052D90(ctx, base);
loc_881B96B4:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B96B4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B96B8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B96BC;
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
	ctx.current_instruction = 0x881B96CC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B96D0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b96dc
	if (!ctx.cr0.lt) goto loc_881B96DC;
	// bl 0x88156678
	ctx.lr = 0x881B96DC;
	sub_88156678(ctx, base);
loc_881B96DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b9768
	if (ctx.cr6.eq) goto loc_881B9768;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B96E4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B96E8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B96EC;
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
	ctx.current_instruction = 0x881B96FC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9700;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b970c
	if (!ctx.cr0.lt) goto loc_881B970C;
	// bl 0x88156678
	ctx.lr = 0x881B970C;
	sub_88156678(ctx, base);
loc_881B970C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B9710;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9718;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B973C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B973C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9744;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9750;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9760:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b97ac
	if (ctx.cr6.eq) goto loc_881B97AC;
loc_881B9768:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9768;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9774;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9788:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9790;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B979C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B97AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B97AC:
	// lwz r11,3116(r31)
	ctx.current_instruction = 0x881B97AC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r10,336(r31)
	ctx.current_instruction = 0x881B97B8;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881B97C0;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B97D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B97D8:
	// b 0x881b9804
	goto loc_881B9804;
loc_881B97DC:
	// lwz r11,3120(r31)
	ctx.current_instruction = 0x881B97DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r9,336(r31)
	ctx.current_instruction = 0x881B97E8;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881B97F0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9804:
	// lwz r11,236(r31)
	ctx.current_instruction = 0x881B9804;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lbz r10,17(r18)
	ctx.current_instruction = 0x881B9808;
	ctx.r10.u64 = REX_LOAD_U8(ctx.r18.u32 + 17);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881b9b50
	if (ctx.cr6.eq) goto loc_881B9B50;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881B981C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881b98a0
	if (ctx.cr6.eq) goto loc_881B98A0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B982C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9830;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9834;
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
	ctx.current_instruction = 0x881B9844;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9848;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9854
	if (!ctx.cr0.lt) goto loc_881B9854;
	// bl 0x88156678
	ctx.lr = 0x881B9854;
	sub_88156678(ctx, base);
loc_881B9854:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b9864
	if (!ctx.cr6.eq) goto loc_881B9864;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x881b98a8
	goto loc_881B98A8;
loc_881B9864:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9864;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9868;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B986C;
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
	ctx.current_instruction = 0x881B987C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9880;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b988c
	if (!ctx.cr0.lt) goto loc_881B988C;
	// bl 0x88156678
	ctx.lr = 0x881B988C;
	sub_88156678(ctx, base);
loc_881B988C:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// b 0x881b98f0
	goto loc_881B98F0;
loc_881B98A0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881b98f0
	if (!ctx.cr6.eq) goto loc_881B98F0;
loc_881B98A8:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B98A8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881B98B4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881B98BC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B98CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B98CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881B98D4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881B98E0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B98F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B98F0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x881b9a08
	if (!ctx.cr6.eq) goto loc_881B9A08;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B98FC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9910;
	sub_88052D90(ctx, base);
loc_881B9910:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9910;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9914;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9918;
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
	ctx.current_instruction = 0x881B9928;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B992C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9938
	if (!ctx.cr0.lt) goto loc_881B9938;
	// bl 0x88156678
	ctx.lr = 0x881B9938;
	sub_88156678(ctx, base);
loc_881B9938:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b99c4
	if (ctx.cr6.eq) goto loc_881B99C4;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9940;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9944;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9948;
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
	ctx.current_instruction = 0x881B9958;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B995C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9968
	if (!ctx.cr0.lt) goto loc_881B9968;
	// bl 0x88156678
	ctx.lr = 0x881B9968;
	sub_88156678(ctx, base);
loc_881B9968:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B996C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B9974;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B9998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9998:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B99A0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B99AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B99BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B99BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9a08
	if (ctx.cr6.eq) goto loc_881B9A08;
loc_881B99C4:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B99C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B99D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B99E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B99E4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B99EC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B99F8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9A08:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881b9b20
	if (!ctx.cr6.eq) goto loc_881B9B20;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B9A14;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9A28;
	sub_88052D90(ctx, base);
loc_881B9A28:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9A28;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9A2C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9A30;
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
	ctx.current_instruction = 0x881B9A40;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9A44;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9a50
	if (!ctx.cr0.lt) goto loc_881B9A50;
	// bl 0x88156678
	ctx.lr = 0x881B9A50;
	sub_88156678(ctx, base);
loc_881B9A50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b9adc
	if (ctx.cr6.eq) goto loc_881B9ADC;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9A58;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9A5C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9A60;
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
	ctx.current_instruction = 0x881B9A70;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9A74;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9a80
	if (!ctx.cr0.lt) goto loc_881B9A80;
	// bl 0x88156678
	ctx.lr = 0x881B9A80;
	sub_88156678(ctx, base);
loc_881B9A80:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B9A84;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9A8C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B9AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9AB0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9AB8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9AC4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9AD4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9b20
	if (ctx.cr6.eq) goto loc_881B9B20;
loc_881B9ADC:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9ADC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9AE8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9AFC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9B04;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9B10;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9B20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9B20:
	// lwz r11,3116(r31)
	ctx.current_instruction = 0x881B9B20;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r10,336(r31)
	ctx.current_instruction = 0x881B9B2C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881B9B34;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9B4C:
	// b 0x881b9b78
	goto loc_881B9B78;
loc_881B9B50:
	// lwz r11,3120(r31)
	ctx.current_instruction = 0x881B9B50;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r9,336(r31)
	ctx.current_instruction = 0x881B9B5C;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881B9B64;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9B78:
	// lbz r11,16(r18)
	ctx.current_instruction = 0x881B9B78;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 16);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881b9ec0
	if (ctx.cr6.eq) goto loc_881B9EC0;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881B9B8C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881b9c10
	if (ctx.cr6.eq) goto loc_881B9C10;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9B9C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9BA0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9BA4;
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
	ctx.current_instruction = 0x881B9BB4;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9BB8;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9bc4
	if (!ctx.cr0.lt) goto loc_881B9BC4;
	// bl 0x88156678
	ctx.lr = 0x881B9BC4;
	sub_88156678(ctx, base);
loc_881B9BC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b9bd4
	if (!ctx.cr6.eq) goto loc_881B9BD4;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x881b9c18
	goto loc_881B9C18;
loc_881B9BD4:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9BD4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9BD8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9BDC;
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
	ctx.current_instruction = 0x881B9BEC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9BF0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9bfc
	if (!ctx.cr0.lt) goto loc_881B9BFC;
	// bl 0x88156678
	ctx.lr = 0x881B9BFC;
	sub_88156678(ctx, base);
loc_881B9BFC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// b 0x881b9c60
	goto loc_881B9C60;
loc_881B9C10:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881b9c60
	if (!ctx.cr6.eq) goto loc_881B9C60;
loc_881B9C18:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9C18;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881B9C24;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881B9C2C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9C3C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881B9C44;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881B9C50;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9C60:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x881b9d78
	if (!ctx.cr6.eq) goto loc_881B9D78;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B9C6C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9C80;
	sub_88052D90(ctx, base);
loc_881B9C80:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9C80;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9C84;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9C88;
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
	ctx.current_instruction = 0x881B9C98;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9C9C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9ca8
	if (!ctx.cr0.lt) goto loc_881B9CA8;
	// bl 0x88156678
	ctx.lr = 0x881B9CA8;
	sub_88156678(ctx, base);
loc_881B9CA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b9d34
	if (ctx.cr6.eq) goto loc_881B9D34;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9CB0;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9CB4;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9CB8;
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
	ctx.current_instruction = 0x881B9CC8;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9CCC;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9cd8
	if (!ctx.cr0.lt) goto loc_881B9CD8;
	// bl 0x88156678
	ctx.lr = 0x881B9CD8;
	sub_88156678(ctx, base);
loc_881B9CD8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B9CDC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B9CE4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B9D08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9D08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B9D10;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9D1C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9D2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9d78
	if (ctx.cr6.eq) goto loc_881B9D78;
loc_881B9D34:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9D34;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881B9D40;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9D54:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881B9D5C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9D68;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9D78:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881b9e90
	if (!ctx.cr6.eq) goto loc_881B9E90;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B9D84;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9D98;
	sub_88052D90(ctx, base);
loc_881B9D98:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9D98;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9D9C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9DA0;
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
	ctx.current_instruction = 0x881B9DB0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9DB4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9dc0
	if (!ctx.cr0.lt) goto loc_881B9DC0;
	// bl 0x88156678
	ctx.lr = 0x881B9DC0;
	sub_88156678(ctx, base);
loc_881B9DC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881b9e4c
	if (ctx.cr6.eq) goto loc_881B9E4C;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9DC8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9DCC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9DD0;
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
	ctx.current_instruction = 0x881B9DE0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9DE4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9df0
	if (!ctx.cr0.lt) goto loc_881B9DF0;
	// bl 0x88156678
	ctx.lr = 0x881B9DF0;
	sub_88156678(ctx, base);
loc_881B9DF0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881B9DF4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9DFC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881B9E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9E20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9E28;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9E34;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9E44:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881b9e90
	if (ctx.cr6.eq) goto loc_881B9E90;
loc_881B9E4C:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9E4C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881B9E58;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9E6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881B9E74;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881B9E80;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9E90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9E90:
	// lwz r11,3116(r31)
	ctx.current_instruction = 0x881B9E90;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3116);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r10,336(r31)
	ctx.current_instruction = 0x881B9E9C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,204(r31)
	ctx.current_instruction = 0x881B9EA4;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9EBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9EBC:
	// b 0x881b9ee8
	goto loc_881B9EE8;
loc_881B9EC0:
	// lwz r11,3120(r31)
	ctx.current_instruction = 0x881B9EC0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3120);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r9,336(r31)
	ctx.current_instruction = 0x881B9ECC;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,204(r31)
	ctx.current_instruction = 0x881B9ED4;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9EE8:
	// lbz r11,15(r18)
	ctx.current_instruction = 0x881B9EE8;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ba228
	if (ctx.cr6.eq) goto loc_881BA228;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881B9EF4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881b9f78
	if (ctx.cr6.eq) goto loc_881B9F78;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9F04;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9F08;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9F0C;
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
	ctx.current_instruction = 0x881B9F1C;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9F20;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9f2c
	if (!ctx.cr0.lt) goto loc_881B9F2C;
	// bl 0x88156678
	ctx.lr = 0x881B9F2C;
	sub_88156678(ctx, base);
loc_881B9F2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881b9f3c
	if (!ctx.cr6.eq) goto loc_881B9F3C;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x881b9f80
	goto loc_881B9F80;
loc_881B9F3C:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9F3C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9F40;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9F44;
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
	ctx.current_instruction = 0x881B9F54;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881B9F58;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881b9f64
	if (!ctx.cr0.lt) goto loc_881B9F64;
	// bl 0x88156678
	ctx.lr = 0x881B9F64;
	sub_88156678(ctx, base);
loc_881B9F64:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// b 0x881b9fc8
	goto loc_881B9FC8;
loc_881B9F78:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881b9fc8
	if (!ctx.cr6.eq) goto loc_881B9FC8;
loc_881B9F80:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881B9F80;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881B9F8C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881B9F94;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9FA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881B9FAC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881B9FB8;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881B9FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881B9FC8:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x881ba0e0
	if (!ctx.cr6.eq) goto loc_881BA0E0;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881B9FD4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881B9FE8;
	sub_88052D90(ctx, base);
loc_881B9FE8:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881B9FE8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881B9FEC;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881B9FF0;
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
	ctx.current_instruction = 0x881BA000;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA004;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba010
	if (!ctx.cr0.lt) goto loc_881BA010;
	// bl 0x88156678
	ctx.lr = 0x881BA010;
	sub_88156678(ctx, base);
loc_881BA010:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881ba09c
	if (ctx.cr6.eq) goto loc_881BA09C;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA018;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA01C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA020;
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
	ctx.current_instruction = 0x881BA030;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA034;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba040
	if (!ctx.cr0.lt) goto loc_881BA040;
	// bl 0x88156678
	ctx.lr = 0x881BA040;
	sub_88156678(ctx, base);
loc_881BA040:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881BA044;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881BA04C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881BA070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA070:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881BA078;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA084;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA094:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881ba0e0
	if (ctx.cr6.eq) goto loc_881BA0E0;
loc_881BA09C:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881BA09C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881BA0A8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA0BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881BA0C4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA0D0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA0E0:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881ba1f8
	if (!ctx.cr6.eq) goto loc_881BA1F8;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881BA0EC;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881BA100;
	sub_88052D90(ctx, base);
loc_881BA100:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA100;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA104;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA108;
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
	ctx.current_instruction = 0x881BA118;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA11C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba128
	if (!ctx.cr0.lt) goto loc_881BA128;
	// bl 0x88156678
	ctx.lr = 0x881BA128;
	sub_88156678(ctx, base);
loc_881BA128:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881ba1b4
	if (ctx.cr6.eq) goto loc_881BA1B4;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA130;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA134;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA138;
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
	ctx.current_instruction = 0x881BA148;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA14C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba158
	if (!ctx.cr0.lt) goto loc_881BA158;
	// bl 0x88156678
	ctx.lr = 0x881BA158;
	sub_88156678(ctx, base);
loc_881BA158:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881BA15C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881BA164;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881BA188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA188:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881BA190;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA19C;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA1AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA1AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881ba1f8
	if (ctx.cr6.eq) goto loc_881BA1F8;
loc_881BA1B4:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881BA1B4;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881BA1C0;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA1D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA1D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881BA1DC;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA1E8;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA1F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA1F8:
	// lwz r11,3144(r31)
	ctx.current_instruction = 0x881BA1F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3144);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lwz r10,336(r31)
	ctx.current_instruction = 0x881BA204;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BA20C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA224:
	// b 0x881ba250
	goto loc_881BA250;
loc_881BA228:
	// lwz r11,3140(r31)
	ctx.current_instruction = 0x881BA228;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3140);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r9,336(r31)
	ctx.current_instruction = 0x881BA234;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881BA23C;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA250:
	// lbz r11,14(r18)
	ctx.current_instruction = 0x881BA250;
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x881ba598
	if (ctx.cr6.eq) goto loc_881BA598;
	// lwz r11,0(r18)
	ctx.current_instruction = 0x881BA25C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x881ba2e0
	if (ctx.cr6.eq) goto loc_881BA2E0;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA26C;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA270;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA274;
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
	ctx.current_instruction = 0x881BA284;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA288;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba294
	if (!ctx.cr0.lt) goto loc_881BA294;
	// bl 0x88156678
	ctx.lr = 0x881BA294;
	sub_88156678(ctx, base);
loc_881BA294:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x881ba2a4
	if (!ctx.cr6.eq) goto loc_881BA2A4;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x881ba2e8
	goto loc_881BA2E8;
loc_881BA2A4:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA2A4;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA2A8;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA2AC;
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
	ctx.current_instruction = 0x881BA2BC;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA2C0;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba2cc
	if (!ctx.cr0.lt) goto loc_881BA2CC;
	// bl 0x88156678
	ctx.lr = 0x881BA2CC;
	sub_88156678(ctx, base);
loc_881BA2CC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// b 0x881ba330
	goto loc_881BA330;
loc_881BA2E0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x881ba330
	if (!ctx.cr6.eq) goto loc_881BA330;
loc_881BA2E8:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881BA2E8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1772(r31)
	ctx.current_instruction = 0x881BA2F4;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,1836(r31)
	ctx.current_instruction = 0x881BA2FC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1836);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA30C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA30C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3200(r31)
	ctx.current_instruction = 0x881BA314;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3200);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,1944(r31)
	ctx.current_instruction = 0x881BA320;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA330:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x881ba448
	if (!ctx.cr6.eq) goto loc_881BA448;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881BA33C;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881BA350;
	sub_88052D90(ctx, base);
loc_881BA350:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA350;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA354;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA358;
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
	ctx.current_instruction = 0x881BA368;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA36C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba378
	if (!ctx.cr0.lt) goto loc_881BA378;
	// bl 0x88156678
	ctx.lr = 0x881BA378;
	sub_88156678(ctx, base);
loc_881BA378:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881ba404
	if (ctx.cr6.eq) goto loc_881BA404;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA380;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA384;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA388;
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
	ctx.current_instruction = 0x881BA398;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA39C;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba3a8
	if (!ctx.cr0.lt) goto loc_881BA3A8;
	// bl 0x88156678
	ctx.lr = 0x881BA3A8;
	sub_88156678(ctx, base);
loc_881BA3A8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881BA3AC;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881BA3B4;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881BA3D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA3D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881BA3E0;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA3EC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA3FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA3FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881ba448
	if (ctx.cr6.eq) goto loc_881BA448;
loc_881BA404:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881BA404;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1856(r31)
	ctx.current_instruction = 0x881BA410;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA424:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3204(r31)
	ctx.current_instruction = 0x881BA42C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3204);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA438;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA448:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x881ba560
	if (!ctx.cr6.eq) goto loc_881BA560;
	// lwz r24,1768(r31)
	ctx.current_instruction = 0x881BA454;
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 1768);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x88052d90
	ctx.lr = 0x881BA468;
	sub_88052D90(ctx, base);
loc_881BA468:
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA468;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA46C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA470;
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
	ctx.current_instruction = 0x881BA480;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA484;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba490
	if (!ctx.cr0.lt) goto loc_881BA490;
	// bl 0x88156678
	ctx.lr = 0x881BA490;
	sub_88156678(ctx, base);
loc_881BA490:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x881ba51c
	if (ctx.cr6.eq) goto loc_881BA51C;
	// lwz r3,84(r31)
	ctx.current_instruction = 0x881BA498;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r10,0(r3)
	ctx.current_instruction = 0x881BA49C;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.current_instruction = 0x881BA4A0;
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
	ctx.current_instruction = 0x881BA4B0;
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	ctx.current_instruction = 0x881BA4B4;
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x881ba4c0
	if (!ctx.cr0.lt) goto loc_881BA4C0;
	// bl 0x88156678
	ctx.lr = 0x881BA4C0;
	sub_88156678(ctx, base);
loc_881BA4C0:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,3192(r31)
	ctx.current_instruction = 0x881BA4C4;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881BA4CC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x881BA4F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA4F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881BA4F8;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA504;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA514:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x881ba560
	if (ctx.cr6.eq) goto loc_881BA560;
loc_881BA51C:
	// lwz r11,3192(r31)
	ctx.current_instruction = 0x881BA51C;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1860(r31)
	ctx.current_instruction = 0x881BA528;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA53C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA53C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x881ba5c4
	if (!ctx.cr6.eq) goto loc_881BA5C4;
	// lwz r11,3208(r31)
	ctx.current_instruction = 0x881BA544;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3208);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1772(r31)
	ctx.current_instruction = 0x881BA550;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA560:
	// lwz r11,3144(r31)
	ctx.current_instruction = 0x881BA560;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3144);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lwz r10,336(r31)
	ctx.current_instruction = 0x881BA56C;
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,80(r1)
	ctx.current_instruction = 0x881BA574;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,208(r31)
	ctx.current_instruction = 0x881BA57C;
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r4,292(r1)
	ctx.current_instruction = 0x881BA580;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA58C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
loc_881BA598:
	// lwz r11,3140(r31)
	ctx.current_instruction = 0x881BA598;
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3140);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r9,336(r31)
	ctx.current_instruction = 0x881BA5A4;
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.current_instruction = 0x881BA5AC;
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,208(r31)
	ctx.current_instruction = 0x881BA5B0;
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r4,292(r1)
	ctx.current_instruction = 0x881BA5B4;
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x881BA5C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_881BA5C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_881BA5C4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x88050860
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_72) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEDB4);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEDB4;
	ctx.current_instruction = 0x881EEDB4;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_98) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEE84);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881EEE84;
	ctx.current_instruction = 0x881EEE84;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_21) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EEFB0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EEFB0;
	ctx.current_instruction = 0x881EEFB0;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_88) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF0CC);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF0CC;
	ctx.current_instruction = 0x881EF0CC;
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_105) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881EF154);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = true;
	ctx.current_function = 0x881EF154;
	ctx.current_instruction = 0x881EF154;
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_881F0268) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F0268);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F0268;
	ctx.current_instruction = 0x881F0268;
	// lis r11,-30720
	ctx.r11.s64 = -2013265920;
	// lfd f0,1488(r11)
	ctx.current_instruction = 0x881F026C;
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1488);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) {
		if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
		return;
	}
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// lis r10,-30680
	ctx.r10.s64 = -2010644480;
	// addi r11,r11,-30216
	ctx.r11.s64 = ctx.r11.s64 + -30216;
	// addi r9,r10,16520
	ctx.r9.s64 = ctx.r10.s64 + 16520;
	// lis r8,-30715
	ctx.r8.s64 = -2012938240;
	// lis r7,-30715
	ctx.r7.s64 = -2012938240;
	// lfd f13,16520(r10)
	ctx.current_instruction = 0x881F0290;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 16520);
	// lis r10,-30715
	ctx.r10.s64 = -2012938240;
	// lfd f0,0(r11)
	ctx.current_instruction = 0x881F0298;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lis r6,-30715
	ctx.r6.s64 = -2012938240;
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfd f12,8(r9)
	ctx.current_instruction = 0x881F02A4;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lfd f10,32(r11)
	ctx.current_instruction = 0x881F02A8;
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lfd f11,-30104(r8)
	ctx.current_instruction = 0x881F02AC;
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + -30104);
	// lfd f9,80(r11)
	ctx.current_instruction = 0x881F02B0;
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f8,-30112(r7)
	ctx.current_instruction = 0x881F02B4;
	ctx.f8.u64 = REX_LOAD_U64(ctx.r7.u32 + -30112);
	// lfd f7,-30120(r10)
	ctx.current_instruction = 0x881F02B8;
	ctx.f7.u64 = REX_LOAD_U64(ctx.r10.u32 + -30120);
	// lfd f6,64(r11)
	ctx.current_instruction = 0x881F02BC;
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f0,48(r11)
	ctx.current_instruction = 0x881F02C0;
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f5,-30128(r6)
	ctx.current_instruction = 0x881F02C4;
	ctx.f5.u64 = REX_LOAD_U64(ctx.r6.u32 + -30128);
	// fctid f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-16(r1)
	ctx.current_instruction = 0x881F02CC;
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// ld r10,-16(r1)
	ctx.current_instruction = 0x881F02D0;
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// fnmsub f13,f13,f4,f1
	ctx.f13.f64 = -std::fma(ctx.f13.f64, ctx.f4.f64, -ctx.f1.f64);
	// fnmsub f13,f12,f4,f13
	ctx.f13.f64 = -std::fma(ctx.f12.f64, ctx.f4.f64, -ctx.f13.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fnmsub f11,f12,f11,f10
	ctx.f11.f64 = -std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f10.f64);
	// fmsub f10,f12,f9,f8
	ctx.f10.f64 = std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f8.f64);
	// fmsub f11,f11,f12,f7
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f7.f64);
	// fmadd f10,f10,f12,f6
	ctx.f10.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f6.f64);
	// fmadd f11,f11,f12,f0
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64);
	// fmsub f10,f10,f12,f5
	ctx.f10.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f5.f64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f0,f10,f12,f0
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x881f031c
	if (ctx.cr6.eq) goto loc_881F031C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x881f0320
	goto loc_881F0320;
loc_881F031C:
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
loc_881F0320:
	// fabs f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,16(r11)
	ctx.current_instruction = 0x881F0324;
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-30680
	ctx.r11.s64 = -2010644480;
	// lfd f12,16680(r11)
	ctx.current_instruction = 0x881F032C;
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 16680);
	// fsub f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fsel f1,f13,f12,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F1DF0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F1DF0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F1DF0;
	ctx.current_instruction = 0x881F1DF0;
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.current_instruction = 0x881F1DF4;
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.current_instruction = 0x881F1DF8;
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_881F5FD0) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x881F5FD0);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x881F5FD0;
	ctx.current_instruction = 0x881F5FD0;
	uint32_t ea{};
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,144
	ctx.r8.s64 = 144;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r2,r5,r6
	ctx.r2.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvx128 v11,r0,r2
	ea = (ctx.r2.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,240
	ctx.r10.s64 = 240;
	// lvx128 v2,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v1,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v12,r2,r6
	ea = (ctx.r2.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,288
	ctx.r11.s64 = 288;
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r2,r7
	ea = (ctx.r2.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v4,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v3,v3,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v14,r2,r8
	ea = (ctx.r2.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v24,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lvx128 v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v4,v4,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// lvx128 v15,r2,r9
	ea = (ctx.r2.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v25,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// lvx128 v7,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v8,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r10
	ea = (ctx.r2.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v17,r2,r11
	ea = (ctx.r2.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v6,v6,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vpkshus v27,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v18,r2,r12
	ea = (ctx.r2.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavguh v7,v7,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// stvewx v24,r0,r3
	ctx.current_instruction = 0x881F6070;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx v24,r0,r4
	ctx.current_instruction = 0x881F607C;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vavguh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_avg_epu16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvewx v25,r3,r5
	ctx.current_instruction = 0x881F6088;
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx v25,r4,r5
	ctx.current_instruction = 0x881F6090;
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r3,r6
	ctx.current_instruction = 0x881F6094;
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvewx v26,r4,r6
	ctx.current_instruction = 0x881F60A0;
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ctx.current_instruction = 0x881F60A4;
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vpkshus v31,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvewx v27,r4,r7
	ctx.current_instruction = 0x881F60B0;
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ctx.current_instruction = 0x881F60B4;
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r4,r8
	ctx.current_instruction = 0x881F60BC;
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ctx.current_instruction = 0x881F60C0;
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ctx.current_instruction = 0x881F60C4;
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ctx.current_instruction = 0x881F60C8;
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ctx.current_instruction = 0x881F60CC;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ctx.current_instruction = 0x881F60D0;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ctx.current_instruction = 0x881F60D4;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88215848) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88215848);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88215848;
	ctx.current_instruction = 0x88215848;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,18(r5)
	ctx.current_instruction = 0x8821584C;
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// lhz r8,16(r5)
	ctx.current_instruction = 0x88215854;
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lhz r6,50(r3)
	ctx.current_instruction = 0x8821585C;
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// rlwinm r4,r10,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r11,52(r11)
	ctx.current_instruction = 0x88215868;
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r6,2,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFF8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x88215890
	if (ctx.cr6.eq) goto loc_88215890;
	// rlwinm r11,r11,2,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
	// li r6,-9
	ctx.r6.s64 = -9;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x88215898
	goto loc_88215898;
loc_88215890:
	// li r6,-8
	ctx.r6.s64 = -8;
	// rlwinm r4,r11,2,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
loc_88215898:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x88215914
	if (ctx.cr6.eq) goto loc_88215914;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bge cr6,0x882158d0
	if (!ctx.cr6.lt) goto loc_882158D0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// b 0x882158e4
	goto loc_882158E4;
loc_882158D0:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x882158e4
	if (!ctx.cr6.gt) goto loc_882158E4;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_882158E4:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x88215900
	if (!ctx.cr6.lt) goto loc_88215900;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
loc_88215900:
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x88215914
	if (!ctx.cr6.gt) goto loc_88215914;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_88215914:
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_88218328) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x88218328);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x88218328;
	ctx.current_instruction = 0x88218328;
	uint32_t ea{};
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// li r9,16
	ctx.r9.s64 = 16;
	// vsldoi v5,v1,v1,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 8));
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_load_si128((simde__m128i*)ctx.v69.u8));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_load_si128((simde__m128i*)ctx.v72.u8));
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_set1_epi16(short(0x1)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v6,v3,v3,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 8));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v7,v2,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx v4,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi v8,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
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
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vspltish v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x3)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vspltish v9,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x6)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
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
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vspltish v30,8
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_set1_epi16(short(0x8)));
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v19.u32), simde_mm_load_si128((simde__m128i*)ctx.v18.u32)));
	// vslh v1,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v17.u32), simde_mm_load_si128((simde__m128i*)ctx.v16.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vperm v4,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v6,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8)));
	// vperm v7,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v3,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v6,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v28,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v31,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v28,v7
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v8,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v27,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsrah v30,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubuhm v29,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v8,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v4,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vsubuhm v5,v26,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vaddshs v8,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
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
	// stvx v10,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v12,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821E380) {
	REX_FUNC_PROLOGUE();
	ctx.dispatch_address = 0;
	rex::system::PollCheckpointBoundary(ctx, 0x8821E380);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821E380;
	ctx.current_instruction = 0x8821E380;
	uint32_t ea{};
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vaddshs v24,v1,v16
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// li r10,192
	ctx.r10.s64 = 192;
	// rlwinm r12,r6,1,0,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v2,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// lvx128 v4,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v6,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v7,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v8,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v20,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// vaddshs v28,v5,v20
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// lvx128 v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// lvx128 v19,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vaddshs v26,v3,v18
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v27,v4,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vpkshus v25,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx128 v21,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// lvx128 v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v6,v21
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// lvx128 v23,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v7,v22
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// stvewx v24,r0,r3
	ctx.current_instruction = 0x8821E420;
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 + ctx.r12.u64;
	// stvewx v24,r0,r4
	ctx.current_instruction = 0x8821E428;
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddshs v31,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// stvewx v25,r3,r6
	ctx.current_instruction = 0x8821E434;
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// stvewx v25,r4,r6
	ctx.current_instruction = 0x8821E43C;
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v26,r3,r12
	ctx.current_instruction = 0x8821E444;
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// stvewx v26,r4,r12
	ctx.current_instruction = 0x8821E44C;
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r12,r8
	ctx.r10.u64 = ctx.r12.u64 + ctx.r8.u64;
	// stvewx v27,r3,r7
	ctx.current_instruction = 0x8821E454;
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// stvewx v27,r4,r7
	ctx.current_instruction = 0x8821E45C;
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r3,r8
	ctx.current_instruction = 0x8821E464;
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ctx.current_instruction = 0x8821E468;
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ctx.current_instruction = 0x8821E46C;
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ctx.current_instruction = 0x8821E470;
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ctx.current_instruction = 0x8821E474;
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ctx.current_instruction = 0x8821E478;
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ctx.current_instruction = 0x8821E47C;
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ctx.current_instruction = 0x8821E480;
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	if (!rex_lr_restore_helper_ && uint32_t(ctx.lr) != rex_entry_lr_) rex::runtime::ReenterGuestFunction(uint32_t(ctx.lr));
	return;
}

DEFINE_REX_FUNC(sub_8821FEF0) {
	REX_FUNC_PROLOGUE();
	uint32_t rex_entry = 0x8821FEF0;
	{
		const uint32_t rex_dispatch_address = ctx.dispatch_address;
		ctx.dispatch_address = 0;
		if (rex_entry == 0x8821FEF0) {
			switch (rex_dispatch_address) {
				case 0x8821FEF8:
					rex_entry = rex_dispatch_address; break;
				default: break;
			}
		}
	}
	rex::system::PollCheckpointBoundary(ctx, rex_entry);
	const uint32_t rex_entry_lr_ = uint32_t(ctx.lr);
	constexpr bool rex_lr_restore_helper_ = false;
	ctx.current_function = 0x8821FEF0;
	ctx.current_instruction = rex_entry;
	PPCRegister temp{};
	uint32_t ea{};
	switch (rex_entry) {
		case 0x8821FEF8: goto loc_8821FEF8;
		default: break;
	}
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x88050848
	ctx.lr = 0x8821FEF8;
	__savegprlr_28(ctx, base);
loc_8821FEF8:
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
	ctx.current_instruction = 0x8821FF0C;
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
	// vaddshs v31,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
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
	// bne cr6,0x882200a0
	if (!ctx.cr6.eq) goto loc_882200A0;
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
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v58,v59,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88220278
	if (!ctx.cr6.gt) goto loc_88220278;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8821FFC4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
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
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v23,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v22,v2,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v3,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmrglb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v28,v29
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vadduhm v1,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v2,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v30,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v28,v2,v5
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v23,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vsubshs v22,v6,v14
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v21,v28,v31
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v19,v23,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v5,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v2,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v17,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x8821ffc4
	if (ctx.cr6.lt) goto loc_8821FFC4;
	// b 0x88220278
	goto loc_88220278;
loc_882200A0:
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
	// vor128 v5,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x88220278
	if (!ctx.cr6.gt) goto loc_88220278;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
loc_88220124:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v29,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v41,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v3
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v19,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
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
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v3,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v22,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v28,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vadduhm v19,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v14,v16
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vor128 v4,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vsubshs v21,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v16,v29,v8
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
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
	// vsubshs v15,v2,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsubshs v14,v1,v24
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vadduhm v30,v22,v31
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v24,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vslh v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v29,v20,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vadduhm v20,v15,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v19,v14,v21
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vsubshs v18,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v17,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vadduhm v16,v22,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v15,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v14,v29,v19
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v30,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v29,v16,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vsrah v28,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// stvx128 v28,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x88220124
	if (ctx.cr6.lt) goto loc_88220124;
loc_88220278:
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
	// bne cr6,0x88220328
	if (!ctx.cr6.eq) goto loc_88220328;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220410
	if (!ctx.cr6.gt) goto loc_88220410;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_882202AC:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v8,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v4,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
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
	// vpkshus128 v39,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvewx128 v39,r0,r11
	ctx.current_instruction = 0x88220314;
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ctx.current_instruction = 0x88220318;
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x882202ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_882202AC;
	// b 0x88220410
	goto loc_88220410;
loc_88220328:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x88220410
	if (!ctx.cr6.gt) goto loc_88220410;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_88220340:
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
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// vsldoi128 v6,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
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
	// vsldoi128 v24,v10,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
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
	// vor128 v37,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// vpkshus128 v36,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vor128 v5,v37,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x88220340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_88220340;
loc_88220410:
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

